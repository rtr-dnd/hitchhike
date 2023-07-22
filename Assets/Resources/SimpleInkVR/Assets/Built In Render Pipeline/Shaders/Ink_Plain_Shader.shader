Shader "Unlit/Ink_Shader"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _MaskTex ("Mask RTexture", 2D) = "white" {}
        _ColorTex("Color RTexture", 2D) = "black" {}
        _Color ("Color", Color) = (0,0,0,1)
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 100

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                UNITY_FOG_COORDS(1)
                float4 vertex : SV_POSITION;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            fixed4 _Color;
            sampler2D _MaskTex;
            float4 _MaskTex_ST;
            sampler2D _ColorTex;
            float4 _ColorTex_ST;


            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                //fixed4 col = lerp(tex2D(_MainTex, i.uv), _Color, tex2D(_MaskTex, i.uv));
                fixed4 col = lerp(tex2D(_MainTex, i.uv), tex2D(_ColorTex, i.uv), tex2D(_MaskTex, i.uv));
                return col;
            }
            ENDCG
        }
    }
}
