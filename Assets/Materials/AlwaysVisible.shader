Shader "Custom/AlwaysOnTopFresnel"
{
    Properties
    {
        _FresnelColor ("Fresnel Color", Color) = (0, 0.5, 1, 1)
        _FresnelPower ("Fresnel Power", Range(0.1, 10.0)) = 5.0
        _Opacity ("Overall Opacity", Range(0.0, 1.0)) = 0.5
    }
    SubShader
    {
        Tags 
        { 
            "RenderType"="Transparent"
            "Queue"="Overlay"
            "IgnoreProjector"="True" 
        }

        Pass
        {
            ZWrite Off
            ZTest Always
            Blend SrcAlpha OneMinusSrcAlpha
            Cull Back

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            
            #pragma multi_compile_instancing
            #include "UnityCG.cginc"
            #include "UnityInstancing.cginc"

            fixed4 _FresnelColor;
            half _FresnelPower;
            half _Opacity;

            struct appdata
            {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct v2f
            {
                float4 vertex : SV_POSITION;
                float fresnel : TEXCOORD0;
                UNITY_VERTEX_INPUT_INSTANCE_ID
                UNITY_VERTEX_OUTPUT_STEREO
            };

            v2f vert (appdata v)
            {
                v2f o;
                UNITY_SETUP_INSTANCE_ID(v);
                UNITY_TRANSFER_INSTANCE_ID(v, o);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);

                o.vertex = UnityObjectToClipPos(v.vertex);

                half3 worldNormal = UnityObjectToWorldNormal(v.normal);
                half3 worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
                
                half3 viewDir;
                #if defined(UNITY_STEREO_INSTANCING_ENABLED)
                    // ▼▼▼ この1行を変更 ▼▼▼
                    // ヘルパーマクロの代わりに、カメラ位置が格納されている配列へ直接アクセスします。
                    viewDir = normalize(unity_StereoWorldSpaceCameraPos[unity_StereoEyeIndex] - worldPos);
                #else
                    viewDir = normalize(_WorldSpaceCameraPos.xyz - worldPos);
                #endif
                
                o.fresnel = 1.0 - saturate(dot(worldNormal, viewDir));
                
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                UNITY_SETUP_INSTANCE_ID(i);

                half fresnel = pow(i.fresnel, _FresnelPower);

                fixed4 finalColor = _FresnelColor;
                finalColor.a = fresnel * _Opacity;
                
                return finalColor;
            }
            ENDCG
        }
    }
    FallBack "Transparent/VertexLit"
}