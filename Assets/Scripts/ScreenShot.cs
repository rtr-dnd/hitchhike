using System;
using System.Collections;
using System.IO;
using UnityEngine;

namespace ScreenshotUtility
{
    //タイムスタンプの書式設定
    public enum TIME_STAMP
    {
        MMDDHHMMSS,
        YYYYMMDDHHMMSS,
    }

    //背景色の設定
    public enum BACK_GROUND_COLOR
    {
        Alpha, //透過PNG
        CustomColor, //カスタムカラー
        Skybox, //スカイボックス
    }

    //解像度の設定
    public enum SCREEN_SIZE_PIXEL
    {
        //1:1
        p256x256,
        p512x512,
        p1024x1024,
        p2048x2048,
        p4096x4096,

        //16:9
        p1280x720, //HD
        p1920x1080, //FullHD
        p2560x1440, //2k
        p3840x2160, //4k
        CustomSize //指定したピクセルサイズで出力(下限32/上限4096)
    }

    public class ScreenShot : MonoBehaviour
    {
        //UnityEditorのみで実行
#if UNITY_EDITOR
        [Header("撮影に使うカメラの割り当て")]
        [Tooltip("撮影に使うカメラを割り当ててください"), SerializeField]
        Camera _UseCamera;

        [Header("画像のサイズの設定")]
        [Space(10)]
        [Tooltip("ScreenSizePixelをCustomにするとCustomSizeの解像度が適用されます"), SerializeField]
        SCREEN_SIZE_PIXEL _screenSizePixel = SCREEN_SIZE_PIXEL.p1024x1024;

        [Tooltip("ScreenSizePixelがCustomになってる場合の解像度設定（下限32Pixel/上限4096Pixel）"), SerializeField]
        Vector2Int _customSize = new Vector2Int(1024, 1024);

        [Header("背景色の設定")]
        [Space(10)]
        [Tooltip("Alpha:背景透過 White:白 CustomColor:指定した色 Skybox:スカイボックス"), SerializeField]
        BACK_GROUND_COLOR _buckGroundColorType = BACK_GROUND_COLOR.Alpha;

        [Tooltip("BuckGroundColorTypeがCustomの場合の背景色"), SerializeField]
        UnityEngine.Color _customColor = UnityEngine.Color.green;

        [Header("ファイル名の書式設定")]
        [Space(10)]
        [Tooltip("タイムスタンプの書式設定"), SerializeField]
        TIME_STAMP _timeStampStyle = TIME_STAMP.MMDDHHMMSS;
        [Tooltip("ファイル名の先頭に付く文字列"), SerializeField]
        string _screenShotsTitle = "img";

        [Header("保存先のフォルダ名")]
        [Space(10)]
        [Tooltip("スクリーンショットを保存するフォルダ名 Assetsフォルダーの直下に配置されます"), SerializeField]
        string _screenShotFolderName = "ScreenShots";

        [Header("実行中の撮影キー")]
        [Space(10)]
        [Tooltip("Unity実行中にスクリーンショットを撮る場合のキーバインド")]
        public KeyCode _screenShotsKeybinding = KeyCode.F1;

        [Header("Consoleに保存先のパスのログを出力します")]
        [Space(10)]
        [Tooltip("チェックをすると、画像のファイル名と画像の保存先のパスのログの出力します"), SerializeField]
        bool _consoleLogIsActive = true;

        void Update()
        {
            if(Input.GetKeyDown(_screenShotsKeybinding))
            {
                getScreenShots();
            }
        }

        private bool NullCheck()
        {
            bool isNull = false;
            if(_UseCamera == null)
            {
                Debug.LogWarning("画像の書き出しに使用するカメラを ScreenSchotCamera に割り当ててください");
                isNull = true;
            }
            if(_screenShotsTitle == "")
            {
                Debug.LogWarning("ScreenShotsTitle に画像ファイルに付ける末尾の文字を入力してください");
                isNull = true;                
            }
            if(_screenShotFolderName == "")
            {
                Debug.LogWarning("ScreenShotFolderName にScreenShotの保存先のフォルダ名を入力してください");
                isNull = true;                
            }            
            return isNull;
        }
        
        [ContextMenu("スクリーンショットを撮影する")]
        public void getScreenShots()
        {
            //NullCheck
            if(NullCheck()){ return; }
            // Application.dataPath = ../Assets
            string path = UnityEngine.Application.dataPath + "/" + _screenShotFolderName + "/";
            StartCoroutine(imageShooting(path, _screenShotsTitle));
        }

        //撮影処理
        //第一引数 ファイルパス / 第二引数 タイトル
        private IEnumerator imageShooting(string path, string title)
        {
            yield return new WaitForEndOfFrame();

            //パスの作成
            imagePathCheck(path);
            string name = title + getTimeStamp(_timeStampStyle) + ".png";

            //元々の背景色をCache
            Color32 CacheColor = _UseCamera.backgroundColor;
            //背景色：透過
            if(_buckGroundColorType == BACK_GROUND_COLOR.Alpha)
            {
                _UseCamera.backgroundColor = new Color32(0, 0, 0, 0);
                _UseCamera.GetComponent<Camera>().clearFlags = CameraClearFlags.SolidColor;
            }
            //背景色：カスタム
            if(_buckGroundColorType == BACK_GROUND_COLOR.CustomColor)
            {
                _UseCamera.backgroundColor = _customColor;
                _UseCamera.GetComponent<Camera>().clearFlags = CameraClearFlags.SolidColor;
            }
            //背景色：スカイボックス
            if(_buckGroundColorType == BACK_GROUND_COLOR.Skybox)
            {
                _UseCamera.GetComponent<Camera>().clearFlags = CameraClearFlags.Skybox;
            }

            //スクショ作成
            //書き出しサイズの取得
            Vector2Int size = getScreenSizePixel2Int(_screenSizePixel);
            Texture2D screenShot = new Texture2D(size.x, size.y, TextureFormat.ARGB32, false);
            RenderTexture rt = new RenderTexture(screenShot.width, screenShot.height, 32);
            RenderTexture prev = _UseCamera.targetTexture;
            _UseCamera.targetTexture = rt;
            _UseCamera.Render();
            _UseCamera.targetTexture = prev;
            RenderTexture.active = rt;
            screenShot.ReadPixels(new Rect(0, 0, screenShot.width, screenShot.height), 0, 0);
            screenShot.Apply();
            byte[] bytes = screenShot.EncodeToPNG();
            //UnityEngine.Object.Destroy(screenShot);

            //書き込み
            File.WriteAllBytes(path + name, bytes);

            //ログの表示
            if(_consoleLogIsActive)
            {
                Debug.Log("Title: " + name);
                Debug.Log("Directory: " + path);
            }

            //カメラの背景色を元に戻す
            _UseCamera.backgroundColor = CacheColor;
            //Assetフォルダのリロード
            UnityEditor.AssetDatabase.Refresh();
        }

        //ファイルパスの確認
        private void imagePathCheck(string path)
        {
            if (Directory.Exists(path))
            {
                //Debug.Log("The path exists");
            }
            else
            {
                //パスが存在しなければフォルダを作成
                Directory.CreateDirectory(path);
                Debug.Log("CreateFolder: " + path);
            }
        }

        private Vector2Int getScreenSizePixel2Int(SCREEN_SIZE_PIXEL ScreenSize)
        {
            //デフォルト設定
            Vector2Int size = new Vector2Int(1024, 1024);
            switch(ScreenSize)
            {
                //1:1(正方形)
                case SCREEN_SIZE_PIXEL.p256x256:
                    size = new Vector2Int(256, 256);
                    break;                
                case SCREEN_SIZE_PIXEL.p512x512:
                    size = new Vector2Int(512, 512);
                    break;
                case SCREEN_SIZE_PIXEL.p1024x1024:
                    size = new Vector2Int(1024, 1024);
                    break;
                case SCREEN_SIZE_PIXEL.p2048x2048:
                    size = new Vector2Int(2048, 2048);
                    break;
                case SCREEN_SIZE_PIXEL.p4096x4096:
                    size = new Vector2Int(4096, 4096);
                    break;

                //16:9
                case SCREEN_SIZE_PIXEL.p1280x720:
                    size = new Vector2Int(1280, 720);
                    break;
                case SCREEN_SIZE_PIXEL.p1920x1080:
                    size = new Vector2Int(1920, 1080);
                    break;
                case SCREEN_SIZE_PIXEL.p2560x1440:
                    size = new Vector2Int(2560, 1440);
                    break;
                case SCREEN_SIZE_PIXEL.p3840x2160:
                    size = new Vector2Int(3840, 2160);
                    break;

                //CustomscreenSize
                case SCREEN_SIZE_PIXEL.CustomSize:
                    //UpperLimit
                    if(_customSize.x > 20000)
                    {
                        _customSize.x = 20000;
                        Debug.LogWarning("PixelSizeのXを4096に設定しました。");
                    }
                    if(_customSize.y > 20000)
                    {
                        _customSize.y = 20000;
                        Debug.LogWarning("PixelSizeのYを4096に設定しました。");
                    }
                    //UnderLimit
                    if(_customSize.x < 32)
                    {
                        _customSize.x = 32;
                        Debug.LogWarning("PixelSizeのXを32に設定しました。");
                    }
                    if(_customSize.y < 32)
                    {
                        _customSize.y = 32;
                        Debug.LogWarning("PixelSizeのYを32に設定しました。");
                    }
                    size = _customSize;
                    break;                

                //設定されてないSCREEN_SIZE_PIXELが選択された場合
                default:
                    Debug.LogWarning("設定されてないSCREEN_SIZE_PIXELが選択されました。");
                    Debug.LogWarning("解像度 " + size + " で書き出します。");
                    break;
            }
            return size;
        }

        //タイムスタンプ
        private string getTimeStamp(TIME_STAMP type)
        {
            string time;
            //タイムスタンプの設定書き足せます
            switch (type)
            {
                case TIME_STAMP.MMDDHHMMSS:
                    time = DateTime.Now.ToString("MMddHHmmss");
                    return time;
                case TIME_STAMP.YYYYMMDDHHMMSS:
                    time = DateTime.Now.ToString("yyyyMMddHHmmss");
                    return time;
                default:
                    time = DateTime.Now.ToString("yyyyMMddHHmmss");
                    return time;
            }
        }

#endif
    }
}
