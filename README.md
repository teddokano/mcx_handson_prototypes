# mcx_handson_prototypes

## これはなに？

MCUXpressoとFRDM-MCXxxxxを使用したハンズオン用サンプルコードを作成しているので，それを共有するリポジトリ．  
このリポジトリはクローンするか，zipをダウンロードしてMCUXpresso IDEまたはMCUXpresso VSCにインポートできます．  

現在のサンプルコードは作成途中．さらにターゲットはN236の基板のみ．  
各基板用のライブラリに対応することで，N947, N236, A153基板でも実行可能．  

## 中身
### プロジェクト
数字から始まる名前のプロジェクト(フォルダ)は段階的にハンズオンを進めていくための，それぞれのサンプルコード．  

#### `0_*` サンプル・プロジェクト
FRDM基板での単独実行
- 0_0_Hello_world
    - `printf`を使った「Hello, world!」の印字テスト．出力は標準出力(デフォルトでSemihost設定．デバッガ内に出力)
- 0_1_LED_blink
	- GPIOピン制御によるLED点滅サンプル．インスタンスに`0`を代入することでGPIOにLOWが出力される．LEDのON/OFFは負論理になっているので0で点灯．1で消灯
- 0_2_LED_colors
	- 赤緑青のそれぞれのLEDの点灯実験．GPIOを3つ使っての制御
- 0_3_Button_in
	- ボタンスイッチ(SW3)を押すことで，値が0になることを検出して変数の値をカウントアップ
- 0_4_Button_controlled_LED
	- ボタンを押すことによってLEDの点灯色を切り替える例
- 0_5_function
	- "Button_controlled_LED"の色切替処理を関数にまとめてみた例．C言語のコードのまとめかたについて説明
- 0_6_Class
	- C++のクラスについての説明．これまで使っているクラスとインスタンスについての理解を深める

#### `1_*` サンプル・プロジェクト
PCA9957HN-ARD基板を接続して実行
- 1_0_ARD_PCA9957_LED_blink
	- PCA9957HN-ARD基板を用いた基本例．24チャンネルのLEDドライバの基本的な使い方．チャンネルとPWM比の制御に言及
- 1_1_ARD_PCA9957_LED_PWM
	- PWMを段階的に変化をさせてLEDの輝度を制御する例
- 1_2_ARD_PCA9957_LED_Sin
	- 数学ライブラリを用いてのLED輝度制御
- 1_3_ARD_PCA9957_LED_csv
	- LED輝度データを見てみるためのCSVファイル出力を試す
- 1_4_ARD_PCA9957_2LEDs
	- 2個のLEDでの応用：グラデーション制御
- 1_5_ARD_PCA9957_3LEDs
	- 3個のLEDでの応用：グラデーション制御

#### ` _r01lib_frdm_mcx*` ライブラリ 
サンプルコードと一緒に使うライブラリ．N947，N236，A156, A153で動作させることができる
- _r01lib_frdm_mcxa153
- _r01lib_frdm_mcxa156
- _r01lib_frdm_mcxn236
- _r01lib_frdm_mcxn947

#### `pp_template_FRDM_MCX*` プロジェクト・テンプレート
各FRDM基板に対応したライブラリを使うための設定を行ったアプリケーションプロジェクトの雛形．  
`source/main.cpp`ファイルを書き換え/置き換えることで，独自アプリケーションを作成可能．末尾の「FRDM_MCXxxxx」が対応基板を示す．  
- app_template_FRDM_MCXA153
- app_template_FRDM_MCXA156
- app_template_FRDM_MCXN236
- app_template_FRDM_MCXN947

#### その他ファイル
- README.md
	- このファイル
- LICENSE
	- ライセンスを明示するためのファイル
- clean_all.py
	- リリース前処理用のクリーニングスクリプト
