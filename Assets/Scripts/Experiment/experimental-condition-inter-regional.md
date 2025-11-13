## 実験手順（inter-regional docking task）

- シーン開始時、以下を決定する。
  - 回転軸 rotationAxes (3 つの軸からなる配列): ±X±Y, ±Y±Z, ±X±Z のいずれかの軸からランダムに 3 つ選ぶ
  - 各タスクで使用する translationAxis と rotationAxis の組み合わせ: 4 つの translationAxis (±X, ±Z) と 3 つの rotationAxes の 12 通りの組み合わせからランダムに 1 つ選ぶ
- ターゲットが出現する可能性があるエリア（Box Collider）が、合計 7 つ、GameObject への参照という形でエディタから指定されている
- 各タスクでは、以下の手順でオブジェクトを配置する：
  - 7 つのエリアからランダムに選ばれた「出現エリア」の中央に、movableObject（ユーザーが操作するオブジェクト）を配置する
  - 残り 6 つのエリアから選ばれた「目的地エリア」に、以下の条件でターゲットを配置する：
    - 目的地エリアの中央を基準として、事前に決定された translationAxis 方向に translationDistance（デフォルトでは 20cm）だけ離れた位置
    - 事前に決定された rotationAxis に沿って 45 度回転された姿勢（rotationMagnitude は 45 度で固定）
- 7 エリア（出現）× 6 エリア（目的地）の合計 42 パターンが、ランダムな順番で提示されていく
- タスク完了時間、クラッチング回数、手の移動量などのメトリクスを記録し、CSV 形式でエクスポート可能
