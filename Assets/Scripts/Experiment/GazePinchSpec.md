# Gaze and Pinch 仕様書

## 概要

MRTKでは、**GazePinchInteractor**システムを通じて「視線とピンチ」のインタラクションを実装しています。ユーザーは対象物を見つめて（Gaze）、手でピンチジェスチャーを行うことでインタラクションします。

**Disambiguation（曖昧性解消）**機能により、複数のターゲット、複数の手、操作中の頭の動きがある複雑なシナリオでも、確実なターゲット選択が実現されています。

## 主要なファイルとコンポーネント

### 1. GazePinchInteractor
**ファイル**: `org.mixedrealitytoolkit.input/Interactors/GazePinch/GazePinchInteractor.cs`

- メインの実装クラス
- 視線方向とピンチ強度を組み合わせた可変選択インタラクション
- シングルハンドとマルチハンドの両方に対応

### 2. FuzzyGazeInteractor
**ファイル**: `org.mixedrealitytoolkit.input/Interactors/Gaze/FuzzyGazeInteractor.cs`

- 円錐ベースのファジーな視線ターゲティング
- 複数のPrecisionレベルによるヒット検出
- 距離、角度、中心アラインメントに基づくターゲットスコアリング

### 3. GazeInteractor
**ファイル**: `org.mixedrealitytoolkit.input/Interactors/Gaze/GazeInteractor.cs`

- アイゲイズフォーカス用のベースXRRayInteractor
- XRI XRRayInteractorのラッパー

### 4. IGazePinchInteractor
**ファイル**: `org.mixedrealitytoolkit.core/Interactors/IGazePinchInteractor.cs`

- すべてのGaze-Pinchインタラクターが実装すべきインターフェース
- ピンチ強度追跡のためにIVariableSelectInteractorを拡張

### 5. MRTKBaseInteractable
**ファイル**: `org.mixedrealitytoolkit.core/Interactables/MRTKBaseInteractable.cs`

- Gaze-Pinch追跡機能を持つ拡張インタラクタブル
- ホバー中およびセレクト中のGaze-Pinchインタラクターのリストを保持

### 6. PinchPoseSource
- ハンドジョイントデータからワールド空間のピンチポーズを取得
- `XRSubsystemHelpers.HandsAggregator.TryGetPinchingPoint()`を使用

## Disambiguation（曖昧性解消）のメカニズム

MRTKは4つの主要な方法でDisambiguationを実現しています。

### 1. Sticky Hover（粘着ホバー）

**最も重要なメカニズム**

```csharp
if (hasHover && SelectProgress > stickyHoverThreshold)
{
    targets.Add(interactablesHovered[0]);
}
else
{
    dependentInteractor.GetValidTargets(targets);
}
```

**動作:**
- ピンチの強度が`stickyHoverThreshold`（デフォルト: 0.5）を超えると、現在のターゲットに「固定」される
- 固定後は視線が他の場所に移動しても、ピンチしているオブジェクトはそのまま選択され続ける
- これにより、操作中に誤って他のオブジェクトに切り替わることを防ぐ
- 参照: コードベース内のADO#1941

### 2. Relaxation Threshold（緩和閾値）

**誤った起動の防止**

```csharp
bool canHoverNew = !isNew || SelectProgress < relaxationThreshold;
```

**動作:**
- 新しいターゲットにホバーするには、ピンチ強度が`relaxationThreshold`（デフォルト: 0.1）未満である必要がある
- ピンチジェスチャーの途中でユーザーが誤ってホバーすることを防ぐ
- あるターゲットから「転がり落ちて」すぐに別のターゲットを半押しすることを防止
- 新しいオブジェクトをターゲットにする前に、手を完全にリラックス（アンピンチ）させる必要がある
- Relaxation Thresholdは Sticky Hover Thresholdとは**異なる**

### 3. Multi-Hand Coordination（両手連携）

**幾何学的Disambiguation**

複数のGazePinchInteractorが同じオブジェクトを選択した場合：

```csharp
private Pose GetPinchCentroid(IXRSelectInteractable interactable)
{
    Vector3 sumPos = Vector3.zero;
    Vector3 sumDir = Vector3.zero;
    int count = 0;

    foreach (IXRSelectInteractor interactor in interactable.interactorsSelecting)
    {
        if (interactor is GazePinchInteractor gazePinchInteractor)
        {
            sumPos += gazePinchInteractor.PinchPose.position;
            sumDir += gazePinchInteractor.PinchPose.rotation * Vector3.forward;
            count++;
        }
    }

    return new Pose
    {
        position = sumPos / Mathf.Max(1, count),
        rotation = Quaternion.LookRotation(sumDir / Mathf.Max(1, count))
    };
}
```

**動作:**
- オブジェクトを選択しているすべての手のピンチポーズの幾何学的平均（重心）を計算
- この重心が仮想アタッチポイントとして使用される
- インテリジェントなピボットポイントで協調的な両手操作が可能
- セレクション/デセレクションイベントで重心を再計算（`OnAdditionalSelect`と`OnAdditionalDeselect`経由）

### 4. Dependent Interactor Architecture（依存インタラクターアーキテクチャ）

**ターゲットDisambiguation**

```csharp
// 依存インタラクター（通常はFuzzyGazeInteractor）が有効なターゲットを決定
dependentInteractor.GetValidTargets(targets);
```

**動作:**
- GazePinchInteractorは視線ターゲティングを依存インタラクター（通常はFuzzyGazeInteractor）に委譲
- FuzzyGazeInteractorはインテリジェントスコアリングを使用して視線円錐内の「最良の」ターゲットを決定
- スコアリングアルゴリズムの考慮事項：
  - オブジェクトまでの距離
  - オブジェクトへの角度
  - ターゲット中心までの距離
  - ターゲット中心への角度
- 最もスコアの高い単一のターゲットのみが有効なターゲットとして返される

## 主要な設定パラメータ

| 設定 | デフォルト値 | 目的 | 範囲 |
|------|-------------|------|------|
| `StickyHoverThreshold` | 0.5 | ターゲットが視線に「固定」されるピンチ強度 | 0-1 |
| `RelaxationThreshold` | 0.1 | 新しいホバーが許可される前に必要なピンチ強度 | 0-1 |
| `relaxationThreshold` (Ray) | 0.5 | レイベースの緩和（レイの精度により高い） | 0-1 |

### FuzzyGazeInteractor パラメータ

| パラメータ | デフォルト値 | 説明 |
|-----------|-------------|------|
| `coneAngle` | 10.0度 | ファジーターゲティングの円錐角度 |
| `minGazeDistance` | 0.3m | 最小視線距離 |
| `maxGazeDistance` | 10.0m | 最大視線距離 |
| `distanceWeight` | 0.25 | 距離のスコアリング重み |
| `angleWeight` | 1.0 | 角度のスコアリング重み |
| `distanceToCenterWeight` | 0.5 | 中心までの距離のスコアリング重み |
| `angleToCenterWeight` | 0.0 | 中心への角度のスコアリング重み |
| `precision` | 0-4 | SphereCastの精度レベル |

## 実際の動作フロー

### インタラクションシーケンス

1. **ユーザーがTarget Aを見つめてホバー**
   - `GetValidTargets`が依存インタラクターから[TargetA]を返す

2. **ピンチを開始（0 → 0.1）**
   - SelectProgressが0から0.1に増加
   - `CanHover`がチェック: `SelectProgress < relaxationThreshold (0.1)` ✓
   - 視線が移動してもまだターゲットを切り替え可能

3. **ピンチ強度が0.5以上（stickyHoverThreshold超過）**
   - `GetValidTargets`は視線に関係なく[TargetA]のみを返す
   - 操作中に誤って新しいターゲットに切り替わることを防止

4. **視線をTarget Bに移動するがピンチは継続**
   - `GetValidTargets`は依然として[TargetA]を返す
   - TargetAが選択され操作され続ける

5. **ピンチを解除（SelectProgress < 0.1）**
   - システムが再び新しいターゲットを許可
   - 視線がTargetBにある場合、TargetBが有効なターゲットになる

### 両手インタラクション例

```
左手がオブジェクトを位置(0, 1, 0)で選択
右手も同じオブジェクトを位置(2, 1, 0)で選択
↓
GetPinchCentroidが計算: ((0+2)/2, 1, 0) = (1, 1, 0)
↓
操作のピボットポイントが重心に設定
↓
両手がこの中央ポイント周りで協調的に操作可能
```

### スナップポイントインタラクション

```csharp
// オブジェクトがISnapInteractableを実装している場合（例：スライダー）:
if (interactable is ISnapInteractable snapInteractable)
{
    snapPoint = snapInteractable.HandleTransform.position;
}
// アタッチポイントが一般的なオフセットではなくハンドルに直接スナップ
```

---

# FuzzyGazeInteractor 詳細仕様

## 概要

FuzzyGazeInteractorは、視線（Eye Gaze）によるターゲット選択を「ファジー」（曖昧）に行うためのインタラクターです。正確に視線がオブジェクトに当たっていなくても、視線の円錐内にあるオブジェクトをスコアリングして、最も適切なターゲットを選択します。

## Precision（精度）システム

### Precisionレベルの定義

```csharp
[Range(0, MaxPrecision)]
internal int precision = 0;

internal const int MaxPrecision = 4;
private const int RaycastPrecision = MaxPrecision + 1; // 5 = 追加raycast用
```

### 動作メカニズム

各Precisionレベルで異なる半径のSphereCastを実行：

```csharp
for (int targetPrecision = 0; targetPrecision <= precision; targetPrecision++)
{
    float castRadius = precisionCurve.Evaluate((float)targetPrecision / MaxPrecision) * sphereCastRadius;
    UpdateRaycastHits(targetPrecision, castRadius);
}
```

**Precisionレベルの意味:**
- **Precision 0**: 最も大きな半径のSphereCast（広範囲検出）
- **Precision 1-3**: 段階的に小さくなる半径
- **Precision 4**: 最も小さな半径（精密検出）
- **追加Raycast**: 正確な視線方向のRaycast（castRadius = 0）

### Precision Curve

`precisionCurve`（AnimationCurve）を使用して、各Precisionレベルの半径を調整：

```csharp
float castRadius = precisionCurve.Evaluate((float)targetPrecision / MaxPrecision) * sphereCastRadius;
```

これにより、各レベルの検出範囲を柔軟にカスタマイズ可能。

## スコアリングアルゴリズム

### ScoreHit()メソッド

**場所**: FuzzyGazeInteractor.cs:97-135

```csharp
private float ScoreHit(RaycastHit hit)
{
    Vector3 origin = transform.position;
    Vector3 direction = transform.forward;

    Vector3 hitPoint = hit.point;
    Vector3 directionToHit = hitPoint - origin;
    float angleToHit = Vector3.Angle(direction, directionToHit);
    Vector3 hitDistance = hit.collider.transform.position - hitPoint;
    Vector3 directionToCenter = hit.collider.transform.position - origin;
    float angleToCenter = Vector3.Angle(direction, directionToCenter);

    // 4つの基準でスコアリング
    float distanceScore = distanceWeight * directionToHit.magnitude;
    float angleScore = angleWeight * angleToHit;
    float centerScore = distanceToCenterWeight * hitDistance.magnitude;
    float centerAngleScore = angleToCenterWeight * angleToCenter;

    float finalScore = distanceScore + angleScore + centerScore + centerAngleScore;
    return finalScore;
}
```

### スコアリング基準

| 基準 | 説明 | デフォルト重み |
|------|------|---------------|
| **distanceScore** | ユーザーからヒットポイントまでの距離 | 0.25 |
| **angleScore** | 視線方向とヒットポイントへの角度 | 1.0 |
| **centerScore** | ヒットポイントからオブジェクト中心までの距離 | 0.5 |
| **centerAngleScore** | 視線方向とオブジェクト中心への角度 | 0.0 |

**重要**: スコアが**低い**ほど優先度が**高い**

### セカンダリポイント最適化

MeshColliderでない場合、視線方向にわずかに進んだポイントでより良いヒット位置を探索：

```csharp
if (hit.collider.GetType() != typeof(MeshCollider))
{
    Vector3 pointFurtherAlongGazePath = (sphereCastRadius * 0.5f * direction.normalized)
                                       + FindNearestPointOnLine(origin, direction, hitPoint);
    Vector3 closestPointToPointFurtherAlongGazePath = hit.collider.ClosestPoint(pointFurtherAlongGazePath);
    Vector3 directionToSecondaryPoint = closestPointToPointFurtherAlongGazePath - origin;
    float angleToSecondaryPoint = Vector3.Angle(direction, directionToSecondaryPoint);

    if (angleToSecondaryPoint < angleToHit)
    {
        // より良いポイントが見つかった場合、それを使用
        hitPoint = closestPointToPointFurtherAlongGazePath;
        directionToHit = directionToSecondaryPoint;
        angleToHit = angleToSecondaryPoint;
        hitDistance = hit.collider.transform.position - hitPoint;
    }
}
```

この最適化により、オブジェクトの端ではなく、より視線に近いポイントを選択可能。

## ターゲット選択プロセス

### 1. PreprocessInteractor（毎フレーム実行）

**場所**: FuzzyGazeInteractor.cs:390-433

```csharp
public override void PreprocessInteractor(XRInteractionUpdateOrder.UpdatePhase updatePhase)
{
    if (updatePhase == XRInteractionUpdateOrder.UpdatePhase.Dynamic)
    {
        // Precisionレベルごとにキャスト実行
        for (int targetPrecision = 0; targetPrecision <= precision; targetPrecision++)
        {
            float castRadius = precisionCurve.Evaluate((float)targetPrecision / MaxPrecision)
                             * sphereCastRadius;
            UpdateRaycastHits(targetPrecision, castRadius);
        }

        // 追加のraycast（オプション）
        if (performAdditionalRaycast)
        {
            UpdateRaycastHits(RaycastPrecision, 0.0f);
        }

        // ヒット結果を処理
        BaseTargetsRaycastHitResults.Clear();
        for (int targetPrecision = 0; targetPrecision <= precision; targetPrecision++)
        {
            UpdateHitResults(targetPrecision);
        }

        if (performAdditionalRaycast)
        {
            UpdateHitResults(RaycastPrecision);
        }

        // スコアでソート
        Sort(this, BaseTargetsRaycastHitResults);
    }

    base.PreprocessInteractor(updatePhase);
}
```

### 2. Sort（スコアリングとソート）

**場所**: FuzzyGazeInteractor.cs:313-339

```csharp
private static void Sort(FuzzyGazeInteractor fuzzyGazeInteractor, List<GazeRaycastHitResult> hitResults)
{
    InteractableScoreMap.Clear();
    InteractableRaycastHitMap.Clear();

    foreach (GazeRaycastHitResult result in hitResults)
    {
        IXRInteractable interactable = result.targetInteractable;
        RaycastHit raycastHit = result.raycastHit;

        float score = fuzzyGazeInteractor.ScoreHit(raycastHit);

        // 各インタラクタブルの最小スコアを保持
        if (!InteractableScoreMap.ContainsKey(interactable) ||
            InteractableScoreMap[interactable] > score)
        {
            InteractableScoreMap[interactable] = score;
        }

        // 最も高いPrecisionレベルのヒットを保持
        if (!InteractableRaycastHitMap.ContainsKey(interactable) ||
            InteractableRaycastHitMap[interactable].precisionLevel < result.precisionLevel)
        {
            InteractableRaycastHitMap[interactable] = result;
        }
    }

    hitResults.Sort(InteractableScoreComparison);
}
```

**処理内容:**
- 各インタラクタブルの最小（最良）スコアを`InteractableScoreMap`に保存
- 各インタラクタブルの最高Precisionレベルのヒットを`InteractableRaycastHitMap`に保存
- スコアに基づいてヒット結果をソート

### 3. GetValidTargets（最終的なターゲット決定）

**場所**: FuzzyGazeInteractor.cs:365-387

```csharp
public override void GetValidTargets(List<IXRInteractable> targets)
{
    targets.Clear();

    foreach (GazeRaycastHitResult gazeRaycastHitResult in BaseTargetsRaycastHitResults)
    {
        IXRInteractable target = gazeRaycastHitResult.targetInteractable;
        RaycastHit raycastHit = gazeRaycastHitResult.raycastHit;

        if (IsHitValid(target, raycastHit))
        {
            preciseHitResult = InteractableRaycastHitMap[target];
            targets.Add(target);
            // 最初の有効なターゲットのみを追加して終了
            return;
        }
    }
}
```

**重要**: **最もスコアが低い（＝優先度が高い）ターゲット1つだけ**が返される。

## ヒット検証

```csharp
internal bool IsHitValid(float angle, float distance) =>
    angle < coneAngle && (minGazeDistance < distance && distance < maxGazeDistance);
```

**ターゲットが有効であるための条件:**
- 角度が`coneAngle`（デフォルト: 10度）未満
- 距離が`minGazeDistance`（0.3m）と`maxGazeDistance`（10m）の間

## データ構造

### GazeRaycastHitResult構造体

**場所**: FuzzyGazeInteractor.cs:181-202

```csharp
public struct GazeRaycastHitResult
{
    /// <summary>
    /// Fuzzy Gaze InteractorのRaycastヒット
    /// </summary>
    public RaycastHit raycastHit;

    /// <summary>
    /// 視線のRaycastによってヒットしたインタラクタブルオブジェクト
    /// </summary>
    public IXRInteractable targetInteractable;

    /// <summary>
    /// Fuzzy GazeのRaycastの精度レベル
    /// </summary>
    public int precisionLevel;

    /// <summary>
    /// このヒット結果がRaycastからのものかどうかを判定するヘルパー関数
    /// </summary>
    public bool IsRaycast => precisionLevel == RaycastPrecision;
}
```

### 静的マップ（再利用可能）

```csharp
// スコアリングに使用されるインタラクタブルのマッピング（ソート用）
private static readonly Dictionary<IXRInteractable, float> InteractableScoreMap;

// インタラクタブルの「最良の」Raycastヒットのマッピング
// 最良のヒットは最も高いPrecisionレベルからのヒット
private static readonly Dictionary<IXRInteractable, GazeRaycastHitResult> InteractableRaycastHitMap;
```

## ビジュアルデバッグ（Gizmos）

Editorモードでは、視線の円錐と検出範囲をビジュアル表示：

**表示要素:**
- **青い線**: 視線の中心軸とSphereCastの範囲
- **シアンまたは赤のディスク**: 視線の開始位置
  - シアン: ホバーなし
  - 赤: ホバー中
- **複数のワイヤーディスク**: 各Precisionレベルの検出範囲
- **小さなソリッドディスク**: Raycastポイント（追加Raycast有効時）

**ギズモの計算:**

```csharp
float GizmoAngle = coneAngle * 0.5f;
float GizmoAngleRad = GizmoAngle * Mathf.Deg2Rad;

float intersectionDist = Mathf.Clamp(sphereCastRadius / Mathf.Tan(GizmoAngleRad), 0, maxGazeDistance);
float sideDist = intersectionDist / Mathf.Cos(GizmoAngleRad);
float peripheralDist = Mathf.Max(sideDist * (intersectionDist - minGazeDistance) / intersectionDist, 0);
```

## パフォーマンス最適化

### ProfilerMarkerの使用

```csharp
private static readonly ProfilerMarker IsHitValidPerfMarker =
    new ProfilerMarker("[MRTK] FuzzyGazeInteractor.IsHitValid");

private static readonly ProfilerMarker ScoreHitPerfMarker =
    new ProfilerMarker("[MRTK] FuzzyGazeInteractor.ScoreHit");

private static readonly ProfilerMarker ConeCastScoreComparePerfMarker =
    new ProfilerMarker("[MRTK] FuzzyGazeInteractor.ConeCastScoreCompare");

private static readonly ProfilerMarker GetValidTargetsPerfMarker =
    new ProfilerMarker("[MRTK] FuzzyGazeInteractor.GetValidTargets");

private static readonly ProfilerMarker SortPerfMarker =
    new ProfilerMarker("[MRTK] FuzzyGazeInteractor.Sort");
```

各主要メソッドにProfilerMarkerを配置してパフォーマンス測定可能。

### NonAllocメソッドの使用

```csharp
// GC割り当てを避けるためNonAllocバージョンを使用
if (castRadius > 0.0f)
{
    raycastHitCounts[targetPrecision] = UnityEngine.Physics.SphereCastNonAlloc(
        effectiveRayOrigin.position, castRadius, effectiveRayOrigin.forward,
        AllRaycastHits[targetPrecision], maxRaycastDistance,
        raycastMask, raycastTriggerInteraction);
}
else
{
    raycastHitCounts[targetPrecision] = UnityEngine.Physics.RaycastNonAlloc(
        effectiveRayOrigin.position, effectiveRayOrigin.forward,
        AllRaycastHits[targetPrecision], maxRaycastDistance,
        raycastMask, raycastTriggerInteraction);
}
```

### 静的キャッシュの利用

```csharp
// Comparison<T>に直接渡すとGC allocが発生するため、
// 静的フィールドとして保持
private static readonly Comparison<GazeRaycastHitResult> InteractableScoreComparison = ConeCastScoreCompare;
```

## 既知の制限事項とTODO

### コメント内のTODO項目

```csharp
// TODO: これらのフィールドは、基礎となるXRRayInteractorクラスの
// それぞれの同等物をオーバーライドする必要がある
// つまり、coneAngleはsphereCastRadiusを変更し、
// maxGazeDistanceはraycastDistanceを変更すべき
```

```csharp
// TODO: XRRayInteractorがRaycastヒットを公開したら、
// このセクションを削除またはリファクタリングする
// そうでなければ、XRRayInteractorにあるロジックを模倣している
```

現在、XRRayInteractorの内部Raycastヒットデータがprivateであるため、
Gaze Interactorでは2倍のRaycastコールが発生しており、
将来的なパフォーマンス改善の余地がある。

---

## まとめ

### FuzzyGazeInteractorのDisambiguation実現方法

1. **マルチレベルPrecisionシステム**
   - 複数の半径でSphereCastを実行し、より多くの候補を収集

2. **インテリジェントスコアリング**
   - 4つの基準（距離、角度、中心距離、中心角度）で総合評価
   - スコアが低いほど優先度が高い

3. **最適化されたヒットポイント**
   - セカンダリポイント計算で、より視線に近いポイントを探索
   - MeshCollider以外で有効

4. **単一ターゲット選択**
   - ソート後、最もスコアが低い（＝最適な）ターゲット1つだけを選択

5. **Cone Angle制約**
   - 視線から一定角度以内（デフォルト10度）のオブジェクトのみを考慮
   - 距離制約（0.3m～10m）も適用

### 統合されたDisambiguation戦略

**GazePinchInteractor**と**FuzzyGazeInteractor**の組み合わせにより、以下を実現：

- **空間的Disambiguation**: FuzzyGazeInteractorが視線円錐内の最適なターゲットを選択
- **時間的Disambiguation**: Sticky HoverとRelaxation Thresholdが操作中のターゲット安定性を保証
- **マルチハンドDisambiguation**: ピンチ重心計算により協調的な両手操作をサポート
- **階層的Disambiguation**: Precisionレベルにより粗から精への段階的な検出

これにより、ユーザーが完全に正確に見ていなくても、意図したオブジェクトを選択できる**寛容で堅牢な視線インタラクション**が実現されています。

---

## 関連クラスと型

| クラス/インターフェース | 目的 |
|------------------------|------|
| **GazePinchInteractor** | 視線方向とピンチ強度を組み合わせた可変選択インタラクション |
| **FuzzyGazeInteractor** | 円錐ベースのファジー視線ターゲティングとスコアリング |
| **PinchPoseSource** | ハンドジョイントデータからワールド空間のピンチポーズを取得 |
| **IGazePinchInteractor** | Gaze-Pinch互換インタラクターのマーカーインターフェース |
| **ISnapInteractable** | スナップ可能なアフォーダンス（スライダーハンドルなど）を持つオブジェクトのインターフェース |
| **InteractionFlags** | インタラクションタイプを定義する列挙型（Near、Ray、Gaze、Generic） |
| **MRTKBaseInteractable** | 他のインタラクションタイプとは別にGaze-Pinchホバーとセレクションを追跡 |

## ファイルパスリファレンス

```
org.mixedrealitytoolkit.input/
├── Interactors/
│   ├── GazePinch/
│   │   └── GazePinchInteractor.cs
│   ├── Gaze/
│   │   ├── FuzzyGazeInteractor.cs
│   │   └── GazeInteractor.cs
│   └── Ray/
│       └── MRTKRayInteractor.cs

org.mixedrealitytoolkit.core/
├── Interactors/
│   └── IGazePinchInteractor.cs
└── Interactables/
    └── MRTKBaseInteractable.cs
```
