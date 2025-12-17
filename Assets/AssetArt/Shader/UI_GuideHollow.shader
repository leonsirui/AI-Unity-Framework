Shader "UI/GuideHollow"
{
    Properties
    {
        [PerRendererData] _MainTex("Sprite Texture", 2D) = "white" {}
        _Color("Tint", Color) = (0,0,0,0.8) // 默认半透明黑色

        // 关键属性：挖孔中心和大小（由C#脚本传入）
        _Center("Hollow Center (Local)", Vector) = (0,0,0,0)
        _Size("Hollow Size (Width, Height)", Vector) = (0,0,0,0)
        _IsCircle("Is Circle (0=Rect, 1=Circle)", Float) = 0

            // UI Shader 必须的 Stencil 属性
            _StencilComp("Stencil Comparison", Float) = 8
            _Stencil("Stencil ID", Float) = 0
            _StencilOp("Stencil Operation", Float) = 0
            _StencilWriteMask("Stencil Write Mask", Float) = 255
            _StencilReadMask("Stencil Read Mask", Float) = 255
            _ColorMask("Color Mask", Float) = 15
    }

        SubShader
        {
            Tags { "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" "PreviewType" = "Plane" "CanUseSpriteAtlas" = "True" }

            Stencil {
                Ref[_Stencil]
                Comp[_StencilComp]
                Pass[_StencilOp]
                ReadMask[_StencilReadMask]
                WriteMask[_StencilWriteMask]
            }

            Cull Off
            Lighting Off
            ZWrite Off
            ZTest[unity_GUIZTestMode]
            Blend SrcAlpha OneMinusSrcAlpha

            Pass
            {
                CGPROGRAM
                #pragma vertex vert
                #pragma fragment frag
                #include "UnityCG.cginc"
                #include "UnityUI.cginc"

                struct appdata_t {
                    float4 vertex   : POSITION;
                    float4 color    : COLOR;
                    float2 texcoord : TEXCOORD0;
                };

                struct v2f {
                    float4 vertex   : SV_POSITION;
                    fixed4 color : COLOR;
                    float2 texcoord : TEXCOORD0;
                    float2 localPos : TEXCOORD1; // 传递本地坐标
                };

                fixed4 _Color;
                float4 _Center;
                float4 _Size;
                float _IsCircle;

                v2f vert(appdata_t v) {
                    v2f OUT;
                    OUT.vertex = UnityObjectToClipPos(v.vertex);
                    OUT.texcoord = v.texcoord;
                    OUT.color = v.color * _Color;
                    OUT.localPos = v.vertex.xy; // 获取UI元素的本地坐标
                    return OUT;
                }

                fixed4 frag(v2f IN) : SV_Target {
                    // 计算当前像素距离中心的距离
                    float2 dist = abs(IN.localPos - _Center.xy);
                    float2 halfSize = _Size.xy * 0.5;

                    bool isHollow = false;

                    if (_IsCircle > 0.5) {
                        // 圆形判断
                        if (length(IN.localPos - _Center.xy) < halfSize.x) isHollow = true;
                    }
     else {
                        // 矩形判断
                        if (dist.x < halfSize.x && dist.y < halfSize.y) isHollow = true;
                    }

                    // 如果是挖孔区域，透明度设为0，否则显示遮罩颜色
                    if (isHollow) return fixed4(0,0,0,0);

                    return IN.color;
                }
                ENDCG
            }
        }
}