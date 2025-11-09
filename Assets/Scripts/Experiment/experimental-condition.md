## 実験手順（docking task）

- シーン開始時、以下を決定する。
  - 回転軸 rotationAxes (3 つの軸からなる配列): ±X±Y, ±Y±Z, ±X±Z のいずれかの軸からのランダムに 3 つ選ぶ
- ターゲットは、以下を満たす位置・姿勢で出現する。
  - +X, -X, +Z, -Z のいずれかの軸（これを translationAxis と呼ぶ）に沿って translationDistance（デフォルトでは 20cm）だけ離れた位置
  - rotationAxes のうちどれか（これを rotationAxis と呼ぶ）に沿って 45 度 or 90 度（これを rotationMagnitude と呼ぶ）回転された姿勢
- 以下の全条件をランダムな順番で提示していき、全部が提示されたら実験終了
  - 全 translationAxis _ 全 rotationAxes _ 全 rotationMagnitude の組み合わせ（全部で 24 通り）
