Shader "Custom/Ink_Normals_Shader"
{
    Properties
    {
        [Header(Paper)]
        _MainTex("Texture", 2D) = "white" {}
        _BumpMap("Normal Map Paper", 2D) = "bump" {}
        _Glossiness("Smoothness", Range(0,1)) = 0.5
        _Metallic("Metallic", Range(0,1)) = 0.0
        [Header(Ink)]
        _MaskTex("Mask RTexture", 2D) = "white" {}
        _ColorTex("Color RTexture", 2D) = "black" {}
        _HeightPower("Height Power", Range(0,.2)) = 0
        _BumpMapInk("Normal Map Ink", 2D) = "bump" {}
        _GlossinessInk("Ink Smoothness", Range(0,1)) = 0.5
        _MetallicInk("Ink Metallic", Range(0,1)) = 0.0

    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 200

        CGPROGRAM
        #pragma surface surf Standard
        #pragma target 3.0

        sampler2D _MainTex;
        sampler2D _BumpMap;
        sampler2D _BumpMapInk;
        
        sampler2D _MaskTex;
        float4 _MaskTex_ST;
        sampler2D _ColorTex;
        float4 _ColorTex_ST;

        sampler2D _HeightMap;
        float _HeightPower;

        half _Glossiness;
        half _Metallic;
        half _GlossinessInk;
        half _MetallicInk;


        struct Input
        {
            float2 uv_MainTex;
            float2 uv_BumpMap;
            float2 uv_BumpMapInk;
            float3 viewDir;
        };

        // Add instancing support for this shader. You need to check 'Enable Instancing' on materials that use the shader.
        // See https://docs.unity3d.com/Manual/GPUInstancing.html for more information about instancing.
        // #pragma instancing_options assumeuniformscaling

        /*UNITY_INSTANCING_BUFFER_START(Props)
        UNITY_INSTANCING_BUFFER_END(Props)*/

        void surf (Input IN, inout SurfaceOutputStandard o)
        {
            // Albedo comes from a texture tinted by color
            //fixed4 c = tex2D (_MainTex, IN.uv_MainTex);
            float2 texOffset = ParallaxOffset(tex2D(_MaskTex, IN.uv_MainTex).r, _HeightPower, IN.viewDir);
            fixed4 mask = tex2D(_MaskTex, IN.uv_MainTex + texOffset);

            fixed4 col = lerp(tex2D(_MainTex, IN.uv_MainTex + texOffset), tex2D(_ColorTex, IN.uv_MainTex + texOffset), mask);
            o.Albedo = col.rgb;
            o.Normal = lerp(UnpackNormal (tex2D (_BumpMap, IN.uv_BumpMap + texOffset)), UnpackNormal(tex2D(_BumpMapInk, IN.uv_BumpMapInk + texOffset)), mask);
            o.Metallic = lerp(_Metallic, _MetallicInk, mask);
            o.Smoothness = lerp(_Glossiness, _GlossinessInk, mask);
            o.Alpha = col.a;
        }
        ENDCG
    }
    FallBack "Diffuse"
}
