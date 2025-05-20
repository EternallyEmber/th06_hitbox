#pragma once
#include <windows.h>

/*****************************************************************************
 * Direct 3D v8 typedefs
 */

typedef DWORD D3DCOLOR;
typedef int WINBOOL;

/*****************************************************************************
 * Direct 3D v8 #defines
 */

#define MAX_DEVICE_IDENTIFIER_STRING        512
#define D3DX_DEFAULT                         -1
#define D3DCOLOR_ARGB(a,r,g,b)        ((D3DCOLOR)((((a)&0xffu)<<24)|(((r)&0xffu)<<16)|(((g)&0xffu)<<8)|((b)&0xffu)))

#define D3DTA_SELECTMASK        0x0000000f
#define D3DTA_DIFFUSE           0x00000000
#define D3DTA_CURRENT           0x00000001
#define D3DTA_TEXTURE           0x00000002
#define D3DTA_TFACTOR           0x00000003
#define D3DTA_SPECULAR          0x00000004
#define D3DTA_COMPLEMENT        0x00000010
#define D3DTA_ALPHAREPLICATE    0x00000020
#define D3DTA_TEMP              0x00000005

#define D3DFVF_RESERVED0           0x0001
#define D3DFVF_POSITION_MASK       0x000E
#define D3DFVF_XYZ                 0x0002
#define D3DFVF_XYZRHW              0x0004
#define D3DFVF_XYZB1               0x0006
#define D3DFVF_XYZB2               0x0008
#define D3DFVF_XYZB3               0x000a
#define D3DFVF_XYZB4               0x000c
#define D3DFVF_XYZB5               0x000e
#define D3DFVF_NORMAL              0x0010
#define D3DFVF_PSIZE               0x0020
#define D3DFVF_DIFFUSE             0x0040
#define D3DFVF_SPECULAR            0x0080
#define D3DFVF_TEXCOUNT_MASK       0x0f00
#define D3DFVF_TEXCOUNT_SHIFT           8
#define D3DFVF_TEX0                0x0000
#define D3DFVF_TEX1                0x0100
#define D3DFVF_TEX2                0x0200
#define D3DFVF_TEX3                0x0300
#define D3DFVF_TEX4                0x0400
#define D3DFVF_TEX5                0x0500
#define D3DFVF_TEX6                0x0600
#define D3DFVF_TEX7                0x0700
#define D3DFVF_TEX8                0x0800
#define D3DFVF_LASTBETA_UBYTE4     0x1000
#define D3DFVF_RESERVED2           0xE000

 /*****************************************************************************
  * Direct 3D v8 enumerated types
  */

typedef enum _D3DFORMAT
{
    D3DFMT_UNKNOWN = 0,

    D3DFMT_R8G8B8 = 20,
    D3DFMT_A8R8G8B8 = 21,
    D3DFMT_X8R8G8B8 = 22,
    D3DFMT_R5G6B5 = 23,
    D3DFMT_X1R5G5B5 = 24,
    D3DFMT_A1R5G5B5 = 25,
    D3DFMT_A4R4G4B4 = 26,
    D3DFMT_R3G3B2 = 27,
    D3DFMT_A8 = 28,
    D3DFMT_A8R3G3B2 = 29,
    D3DFMT_X4R4G4B4 = 30,
    D3DFMT_A2B10G10R10 = 31,
    D3DFMT_G16R16 = 34,

    D3DFMT_A8P8 = 40,
    D3DFMT_P8 = 41,

    D3DFMT_L8 = 50,
    D3DFMT_A8L8 = 51,
    D3DFMT_A4L4 = 52,

    D3DFMT_V8U8 = 60,
    D3DFMT_L6V5U5 = 61,
    D3DFMT_X8L8V8U8 = 62,
    D3DFMT_Q8W8V8U8 = 63,
    D3DFMT_V16U16 = 64,
    D3DFMT_W11V11U10 = 65,
    D3DFMT_A2W10V10U10 = 67,

    D3DFMT_UYVY = MAKEFOURCC('U', 'Y', 'V', 'Y'),
    D3DFMT_YUY2 = MAKEFOURCC('Y', 'U', 'Y', '2'),
    D3DFMT_DXT1 = MAKEFOURCC('D', 'X', 'T', '1'),
    D3DFMT_DXT2 = MAKEFOURCC('D', 'X', 'T', '2'),
    D3DFMT_DXT3 = MAKEFOURCC('D', 'X', 'T', '3'),
    D3DFMT_DXT4 = MAKEFOURCC('D', 'X', 'T', '4'),
    D3DFMT_DXT5 = MAKEFOURCC('D', 'X', 'T', '5'),

    D3DFMT_D16_LOCKABLE = 70,
    D3DFMT_D32 = 71,
    D3DFMT_D15S1 = 73,
    D3DFMT_D24S8 = 75,
    D3DFMT_D16 = 80,
    D3DFMT_D24X8 = 77,
    D3DFMT_D24X4S4 = 79,

    D3DFMT_VERTEXDATA = 100,
    D3DFMT_INDEX16 = 101,
    D3DFMT_INDEX32 = 102,

    D3DFMT_FORCE_DWORD = 0xFFFFFFFF
} D3DFORMAT;

typedef enum _D3DDEVTYPE
{
    D3DDEVTYPE_HAL = 1,
    D3DDEVTYPE_REF = 2,
    D3DDEVTYPE_SW = 3,

    D3DDEVTYPE_FORCE_DWORD = 0xffffffff
} D3DDEVTYPE;

typedef enum _D3DRESOURCETYPE
{
    D3DRTYPE_SURFACE = 1,
    D3DRTYPE_VOLUME = 2,
    D3DRTYPE_TEXTURE = 3,
    D3DRTYPE_VOLUMETEXTURE = 4,
    D3DRTYPE_CUBETEXTURE = 5,
    D3DRTYPE_VERTEXBUFFER = 6,
    D3DRTYPE_INDEXBUFFER = 7,

    D3DRTYPE_FORCE_DWORD = 0x7fffffff
} D3DRESOURCETYPE;

typedef enum _D3DMULTISAMPLE_TYPE
{
    D3DMULTISAMPLE_NONE = 0,
    D3DMULTISAMPLE_2_SAMPLES = 2,
    D3DMULTISAMPLE_3_SAMPLES = 3,
    D3DMULTISAMPLE_4_SAMPLES = 4,
    D3DMULTISAMPLE_5_SAMPLES = 5,
    D3DMULTISAMPLE_6_SAMPLES = 6,
    D3DMULTISAMPLE_7_SAMPLES = 7,
    D3DMULTISAMPLE_8_SAMPLES = 8,
    D3DMULTISAMPLE_9_SAMPLES = 9,
    D3DMULTISAMPLE_10_SAMPLES = 10,
    D3DMULTISAMPLE_11_SAMPLES = 11,
    D3DMULTISAMPLE_12_SAMPLES = 12,
    D3DMULTISAMPLE_13_SAMPLES = 13,
    D3DMULTISAMPLE_14_SAMPLES = 14,
    D3DMULTISAMPLE_15_SAMPLES = 15,
    D3DMULTISAMPLE_16_SAMPLES = 16,

    D3DMULTISAMPLE_FORCE_DWORD = 0x7fffffff
} D3DMULTISAMPLE_TYPE;

typedef enum _D3DSWAPEFFECT
{
    D3DSWAPEFFECT_DISCARD = 1,
    D3DSWAPEFFECT_FLIP = 2,
    D3DSWAPEFFECT_COPY = 3,
    D3DSWAPEFFECT_COPY_VSYNC = 4,

    D3DSWAPEFFECT_FORCE_DWORD = 0xFFFFFFFF
} D3DSWAPEFFECT;

typedef enum _D3DPOOL
{
    D3DPOOL_DEFAULT = 0,
    D3DPOOL_MANAGED = 1,
    D3DPOOL_SYSTEMMEM = 2,
    D3DPOOL_SCRATCH = 3,

    D3DPOOL_FORCE_DWORD = 0x7fffffff
} D3DPOOL;

typedef enum _D3DBACKBUFFER_TYPE
{
    D3DBACKBUFFER_TYPE_MONO = 0,
    D3DBACKBUFFER_TYPE_LEFT = 1,
    D3DBACKBUFFER_TYPE_RIGHT = 2,

    D3DBACKBUFFER_TYPE_FORCE_DWORD = 0x7fffffff
} D3DBACKBUFFER_TYPE;

typedef enum _D3DCUBEMAP_FACES
{
    D3DCUBEMAP_FACE_POSITIVE_X = 0,
    D3DCUBEMAP_FACE_NEGATIVE_X = 1,
    D3DCUBEMAP_FACE_POSITIVE_Y = 2,
    D3DCUBEMAP_FACE_NEGATIVE_Y = 3,
    D3DCUBEMAP_FACE_POSITIVE_Z = 4,
    D3DCUBEMAP_FACE_NEGATIVE_Z = 5,

    D3DCUBEMAP_FACE_FORCE_DWORD = 0xffffffff
} D3DCUBEMAP_FACES;

typedef enum _D3DTRANSFORMSTATETYPE
{
    D3DTS_VIEW = 2,
    D3DTS_PROJECTION = 3,
    D3DTS_TEXTURE0 = 16,
    D3DTS_TEXTURE1 = 17,
    D3DTS_TEXTURE2 = 18,
    D3DTS_TEXTURE3 = 19,
    D3DTS_TEXTURE4 = 20,
    D3DTS_TEXTURE5 = 21,
    D3DTS_TEXTURE6 = 22,
    D3DTS_TEXTURE7 = 23,

    D3DTS_FORCE_DWORD = 0x7fffffff
} D3DTRANSFORMSTATETYPE;

typedef enum _D3DLIGHTTYPE
{
    D3DLIGHT_POINT = 1,
    D3DLIGHT_SPOT = 2,
    D3DLIGHT_DIRECTIONAL = 3,

    D3DLIGHT_FORCE_DWORD = 0x7fffffff
} D3DLIGHTTYPE;

typedef enum _D3DRENDERSTATETYPE
{
    D3DRS_ZENABLE = 7,
    D3DRS_FILLMODE = 8,
    D3DRS_SHADEMODE = 9,
    D3DRS_LINEPATTERN = 10,
    D3DRS_ZWRITEENABLE = 14,
    D3DRS_ALPHATESTENABLE = 15,
    D3DRS_LASTPIXEL = 16,
    D3DRS_SRCBLEND = 19,
    D3DRS_DESTBLEND = 20,
    D3DRS_CULLMODE = 22,
    D3DRS_ZFUNC = 23,
    D3DRS_ALPHAREF = 24,
    D3DRS_ALPHAFUNC = 25,
    D3DRS_DITHERENABLE = 26,
    D3DRS_ALPHABLENDENABLE = 27,
    D3DRS_FOGENABLE = 28,
    D3DRS_SPECULARENABLE = 29,
    D3DRS_ZVISIBLE = 30,
    D3DRS_FOGCOLOR = 34,
    D3DRS_FOGTABLEMODE = 35,
    D3DRS_FOGSTART = 36,
    D3DRS_FOGEND = 37,
    D3DRS_FOGDENSITY = 38,
    D3DRS_EDGEANTIALIAS = 40,
    D3DRS_ZBIAS = 47,
    D3DRS_RANGEFOGENABLE = 48,
    D3DRS_STENCILENABLE = 52,
    D3DRS_STENCILFAIL = 53,
    D3DRS_STENCILZFAIL = 54,
    D3DRS_STENCILPASS = 55,
    D3DRS_STENCILFUNC = 56,
    D3DRS_STENCILREF = 57,
    D3DRS_STENCILMASK = 58,
    D3DRS_STENCILWRITEMASK = 59,
    D3DRS_TEXTUREFACTOR = 60,
    D3DRS_WRAP0 = 128,
    D3DRS_WRAP1 = 129,
    D3DRS_WRAP2 = 130,
    D3DRS_WRAP3 = 131,
    D3DRS_WRAP4 = 132,
    D3DRS_WRAP5 = 133,
    D3DRS_WRAP6 = 134,
    D3DRS_WRAP7 = 135,
    D3DRS_CLIPPING = 136,
    D3DRS_LIGHTING = 137,
    D3DRS_AMBIENT = 139,
    D3DRS_FOGVERTEXMODE = 140,
    D3DRS_COLORVERTEX = 141,
    D3DRS_LOCALVIEWER = 142,
    D3DRS_NORMALIZENORMALS = 143,
    D3DRS_DIFFUSEMATERIALSOURCE = 145,
    D3DRS_SPECULARMATERIALSOURCE = 146,
    D3DRS_AMBIENTMATERIALSOURCE = 147,
    D3DRS_EMISSIVEMATERIALSOURCE = 148,
    D3DRS_VERTEXBLEND = 151,
    D3DRS_CLIPPLANEENABLE = 152,
    D3DRS_SOFTWAREVERTEXPROCESSING = 153,
    D3DRS_POINTSIZE = 154,
    D3DRS_POINTSIZE_MIN = 155,
    D3DRS_POINTSPRITEENABLE = 156,
    D3DRS_POINTSCALEENABLE = 157,
    D3DRS_POINTSCALE_A = 158,
    D3DRS_POINTSCALE_B = 159,
    D3DRS_POINTSCALE_C = 160,
    D3DRS_MULTISAMPLEANTIALIAS = 161,
    D3DRS_MULTISAMPLEMASK = 162,
    D3DRS_PATCHEDGESTYLE = 163,
    D3DRS_PATCHSEGMENTS = 164,
    D3DRS_DEBUGMONITORTOKEN = 165,
    D3DRS_POINTSIZE_MAX = 166,
    D3DRS_INDEXEDVERTEXBLENDENABLE = 167,
    D3DRS_COLORWRITEENABLE = 168,
    D3DRS_TWEENFACTOR = 170,
    D3DRS_BLENDOP = 171,
    D3DRS_POSITIONORDER = 172,
    D3DRS_NORMALORDER = 173,

    D3DRS_FORCE_DWORD = 0x7fffffff
} D3DRENDERSTATETYPE;

typedef enum _D3DSTATEBLOCKTYPE
{
    D3DSBT_ALL = 1,
    D3DSBT_PIXELSTATE = 2,
    D3DSBT_VERTEXSTATE = 3,

    D3DSBT_FORCE_DWORD = 0xffffffff
} D3DSTATEBLOCKTYPE;

typedef enum _D3DTEXTURESTAGESTATETYPE
{
    D3DTSS_COLOROP = 1,
    D3DTSS_COLORARG1 = 2,
    D3DTSS_COLORARG2 = 3,
    D3DTSS_ALPHAOP = 4,
    D3DTSS_ALPHAARG1 = 5,
    D3DTSS_ALPHAARG2 = 6,
    D3DTSS_BUMPENVMAT00 = 7,
    D3DTSS_BUMPENVMAT01 = 8,
    D3DTSS_BUMPENVMAT10 = 9,
    D3DTSS_BUMPENVMAT11 = 10,
    D3DTSS_TEXCOORDINDEX = 11,
    D3DTSS_ADDRESSU = 13,
    D3DTSS_ADDRESSV = 14,
    D3DTSS_BORDERCOLOR = 15,
    D3DTSS_MAGFILTER = 16,
    D3DTSS_MINFILTER = 17,
    D3DTSS_MIPFILTER = 18,
    D3DTSS_MIPMAPLODBIAS = 19,
    D3DTSS_MAXMIPLEVEL = 20,
    D3DTSS_MAXANISOTROPY = 21,
    D3DTSS_BUMPENVLSCALE = 22,
    D3DTSS_BUMPENVLOFFSET = 23,
    D3DTSS_TEXTURETRANSFORMFLAGS = 24,
    D3DTSS_ADDRESSW = 25,
    D3DTSS_COLORARG0 = 26,
    D3DTSS_ALPHAARG0 = 27,
    D3DTSS_RESULTARG = 28,

    D3DTSS_FORCE_DWORD = 0x7fffffff
} D3DTEXTURESTAGESTATETYPE;

typedef enum _D3DPRIMITIVETYPE
{
    D3DPT_POINTLIST = 1,
    D3DPT_LINELIST = 2,
    D3DPT_LINESTRIP = 3,
    D3DPT_TRIANGLELIST = 4,
    D3DPT_TRIANGLESTRIP = 5,
    D3DPT_TRIANGLEFAN = 6,

    D3DPT_FORCE_DWORD = 0x7fffffff
} D3DPRIMITIVETYPE;

typedef enum _D3DBASISTYPE
{
    D3DBASIS_BEZIER = 0,
    D3DBASIS_BSPLINE = 1,
    D3DBASIS_INTERPOLATE = 2,

    D3DBASIS_FORCE_DWORD = 0x7fffffff
} D3DBASISTYPE;

typedef enum _D3DORDERTYPE
{
    D3DORDER_LINEAR = 1,
    D3DORDER_QUADRATIC = 2,
    D3DORDER_CUBIC = 3,
    D3DORDER_QUINTIC = 5,

    D3DORDER_FORCE_DWORD = 0x7fffffff
} D3DORDERTYPE;

typedef enum _D3DTEXTUREOP
{
    D3DTOP_DISABLE = 1,
    D3DTOP_SELECTARG1 = 2,
    D3DTOP_SELECTARG2 = 3,
    D3DTOP_MODULATE = 4,
    D3DTOP_MODULATE2X = 5,
    D3DTOP_MODULATE4X = 6,
    D3DTOP_ADD = 7,
    D3DTOP_ADDSIGNED = 8,
    D3DTOP_ADDSIGNED2X = 9,
    D3DTOP_SUBTRACT = 10,
    D3DTOP_ADDSMOOTH = 11,
    D3DTOP_BLENDDIFFUSEALPHA = 12,
    D3DTOP_BLENDTEXTUREALPHA = 13,
    D3DTOP_BLENDFACTORALPHA = 14,
    D3DTOP_BLENDTEXTUREALPHAPM = 15,
    D3DTOP_BLENDCURRENTALPHA = 16,
    D3DTOP_PREMODULATE = 17,
    D3DTOP_MODULATEALPHA_ADDCOLOR = 18,
    D3DTOP_MODULATECOLOR_ADDALPHA = 19,
    D3DTOP_MODULATEINVALPHA_ADDCOLOR = 20,
    D3DTOP_MODULATEINVCOLOR_ADDALPHA = 21,
    D3DTOP_BUMPENVMAP = 22,
    D3DTOP_BUMPENVMAPLUMINANCE = 23,
    D3DTOP_DOTPRODUCT3 = 24,
    D3DTOP_MULTIPLYADD = 25,
    D3DTOP_LERP = 26,

    D3DTOP_FORCE_DWORD = 0x7fffffff,
} D3DTEXTUREOP;

typedef enum _D3DBLEND
{
    D3DBLEND_ZERO = 1,
    D3DBLEND_ONE = 2,
    D3DBLEND_SRCCOLOR = 3,
    D3DBLEND_INVSRCCOLOR = 4,
    D3DBLEND_SRCALPHA = 5,
    D3DBLEND_INVSRCALPHA = 6,
    D3DBLEND_DESTALPHA = 7,
    D3DBLEND_INVDESTALPHA = 8,
    D3DBLEND_DESTCOLOR = 9,
    D3DBLEND_INVDESTCOLOR = 10,
    D3DBLEND_SRCALPHASAT = 11,
    D3DBLEND_BOTHSRCALPHA = 12,
    D3DBLEND_BOTHINVSRCALPHA = 13,

    D3DBLEND_FORCE_DWORD = 0x7fffffff
} D3DBLEND;

typedef enum _D3DBLENDOP
{
    D3DBLENDOP_ADD = 1,
    D3DBLENDOP_SUBTRACT = 2,
    D3DBLENDOP_REVSUBTRACT = 3,
    D3DBLENDOP_MIN = 4,
    D3DBLENDOP_MAX = 5,

    D3DBLENDOP_FORCE_DWORD = 0x7fffffff
} D3DBLENDOP;

/*****************************************************************************
 * Direct 3D v8 structures
 */

typedef struct _D3DADAPTER_IDENTIFIER8
{
    char            Driver[MAX_DEVICE_IDENTIFIER_STRING];
    char            Description[MAX_DEVICE_IDENTIFIER_STRING];

    LARGE_INTEGER   DriverVersion;
    DWORD           VendorId;
    DWORD           DeviceId;
    DWORD           SubSysId;
    DWORD           Revision;

    GUID            DeviceIdentifier;

    DWORD           WHQLLevel;
} D3DADAPTER_IDENTIFIER8;

typedef struct _D3DDISPLAYMODE
{
    UINT            Width;
    UINT            Height;
    UINT            RefreshRate;
    D3DFORMAT       Format;
} D3DDISPLAYMODE;

typedef struct _D3DCAPS8
{
    D3DDEVTYPE          DeviceType;
    UINT                AdapterOrdinal;

    DWORD               Caps;
    DWORD               Caps2;
    DWORD               Caps3;
    DWORD               PresentationIntervals;

    DWORD               CursorCaps;

    DWORD               DevCaps;

    DWORD               PrimitiveMiscCaps;
    DWORD               RasterCaps;
    DWORD               ZCmpCaps;
    DWORD               SrcBlendCaps;
    DWORD               DestBlendCaps;
    DWORD               AlphaCmpCaps;
    DWORD               ShadeCaps;
    DWORD               TextureCaps;
    DWORD               TextureFilterCaps;
    DWORD               CubeTextureFilterCaps;
    DWORD               VolumeTextureFilterCaps;
    DWORD               TextureAddressCaps;
    DWORD               VolumeTextureAddressCaps;

    DWORD               LineCaps;

    DWORD               MaxTextureWidth, MaxTextureHeight;
    DWORD               MaxVolumeExtent;

    DWORD               MaxTextureRepeat;
    DWORD               MaxTextureAspectRatio;
    DWORD               MaxAnisotropy;
    float               MaxVertexW;

    float               GuardBandLeft;
    float               GuardBandTop;
    float               GuardBandRight;
    float               GuardBandBottom;

    float               ExtentsAdjust;
    DWORD               StencilCaps;

    DWORD               FVFCaps;
    DWORD               TextureOpCaps;
    DWORD               MaxTextureBlendStages;
    DWORD               MaxSimultaneousTextures;

    DWORD               VertexProcessingCaps;
    DWORD               MaxActiveLights;
    DWORD               MaxUserClipPlanes;
    DWORD               MaxVertexBlendMatrices;
    DWORD               MaxVertexBlendMatrixIndex;

    float               MaxPointSize;

    DWORD               MaxPrimitiveCount;
    DWORD               MaxVertexIndex;
    DWORD               MaxStreams;
    DWORD               MaxStreamStride;

    DWORD               VertexShaderVersion;
    DWORD               MaxVertexShaderConst;

    DWORD               PixelShaderVersion;
    float               MaxPixelShaderValue;
} D3DCAPS8;

typedef struct _D3DPRESENT_PARAMETERS_
{
    UINT                    BackBufferWidth;
    UINT                    BackBufferHeight;
    D3DFORMAT               BackBufferFormat;
    UINT                    BackBufferCount;

    D3DMULTISAMPLE_TYPE     MultiSampleType;

    D3DSWAPEFFECT           SwapEffect;
    HWND                    hDeviceWindow;
    WINBOOL                 Windowed;
    WINBOOL                 EnableAutoDepthStencil;
    D3DFORMAT               AutoDepthStencilFormat;
    DWORD                   Flags;

    UINT                    FullScreen_RefreshRateInHz;
    UINT                    FullScreen_PresentationInterval;

} D3DPRESENT_PARAMETERS;

typedef struct _D3DDEVICE_CREATION_PARAMETERS
{
    UINT          AdapterOrdinal;
    D3DDEVTYPE    DeviceType;
    HWND          hFocusWindow;
    DWORD         BehaviorFlags;
} D3DDEVICE_CREATION_PARAMETERS;

typedef struct _D3DSURFACE_DESC
{
    D3DFORMAT           Format;
    D3DRESOURCETYPE     Type;
    DWORD               Usage;
    D3DPOOL             Pool;
    UINT                Size;
    D3DMULTISAMPLE_TYPE MultiSampleType;
    UINT                Width;
    UINT                Height;
} D3DSURFACE_DESC;

typedef struct _D3DLOCKED_RECT
{
    INT                 Pitch;
    void *pBits;
} D3DLOCKED_RECT;

typedef struct _D3DRASTER_STATUS
{
    WINBOOL         InVBlank;
    UINT            ScanLine;
} D3DRASTER_STATUS;

typedef struct _D3DGAMMARAMP
{
    WORD                red[256];
    WORD                green[256];
    WORD                blue[256];
} D3DGAMMARAMP;

typedef struct _D3DVOLUME_DESC
{
    D3DFORMAT           Format;
    D3DRESOURCETYPE     Type;
    DWORD               Usage;
    D3DPOOL             Pool;
    UINT                Size;
    UINT                Width;
    UINT                Height;
    UINT                Depth;
} D3DVOLUME_DESC;

typedef struct _D3DLOCKED_BOX
{
    INT                 RowPitch;
    INT                 SlicePitch;
    void *pBits;
} D3DLOCKED_BOX;

typedef struct _D3DBOX
{
    UINT                Left;
    UINT                Top;
    UINT                Right;
    UINT                Bottom;
    UINT                Front;
    UINT                Back;
} D3DBOX;

typedef struct _D3DVERTEXBUFFER_DESC
{
    D3DFORMAT           Format;
    D3DRESOURCETYPE     Type;
    DWORD               Usage;
    D3DPOOL             Pool;
    UINT                Size;
    DWORD               FVF;
} D3DVERTEXBUFFER_DESC;

typedef struct _D3DINDEXBUFFER_DESC
{
    D3DFORMAT           Format;
    D3DRESOURCETYPE     Type;
    DWORD               Usage;
    D3DPOOL             Pool;
    UINT                Size;
} D3DINDEXBUFFER_DESC;

typedef struct _D3DRECT
{
    LONG x1;
    LONG y1;
    LONG x2;
    LONG y2;
} D3DRECT;

typedef struct _D3DMATRIX
{
    union
    {
        struct
        {
            float        _11, _12, _13, _14;
            float        _21, _22, _23, _24;
            float        _31, _32, _33, _34;
            float        _41, _42, _43, _44;
        } DUMMYSTRUCTNAME;
        float m[4][4];
    } DUMMYUNIONNAME;
} D3DMATRIX;

typedef struct _D3DVIEWPORT8
{
    DWORD       X;
    DWORD       Y;
    DWORD       Width;
    DWORD       Height;
    float       MinZ;
    float       MaxZ;
} D3DVIEWPORT8;

typedef struct _D3DCOLORVALUE
{
    float r;
    float g;
    float b;
    float a;
} D3DCOLORVALUE;

typedef struct _D3DMATERIAL8
{
    D3DCOLORVALUE   Diffuse;
    D3DCOLORVALUE   Ambient;
    D3DCOLORVALUE   Specular;
    D3DCOLORVALUE   Emissive;
    float           Power;
} D3DMATERIAL8;

typedef struct _D3DVECTOR
{
    float x;
    float y;
    float z;
} D3DVECTOR;

typedef struct _D3DLIGHT8
{
    D3DLIGHTTYPE    Type;
    D3DCOLORVALUE   Diffuse;
    D3DCOLORVALUE   Specular;
    D3DCOLORVALUE   Ambient;
    D3DVECTOR       Position;
    D3DVECTOR       Direction;
    float           Range;
    float           Falloff;
    float           Attenuation0;
    float           Attenuation1;
    float           Attenuation2;
    float           Theta;
    float           Phi;
} D3DLIGHT8;

typedef struct _D3DCLIPSTATUS8
{
    DWORD ClipUnion;
    DWORD ClipIntersection;
} D3DCLIPSTATUS8;

typedef struct _D3DRECTPATCH_INFO
{
    UINT                StartVertexOffsetWidth;
    UINT                StartVertexOffsetHeight;
    UINT                Width;
    UINT                Height;
    UINT                Stride;
    D3DBASISTYPE        Basis;
    D3DORDERTYPE        Order;
} D3DRECTPATCH_INFO;

typedef struct _D3DTRIPATCH_INFO
{
    UINT                StartVertexOffset;
    UINT                NumVertices;
    D3DBASISTYPE        Basis;
    D3DORDERTYPE        Order;
} D3DTRIPATCH_INFO;

typedef struct _D3DXIMAGE_INFO
{
    UINT Width;
    UINT Height;
    UINT Depth;
    UINT MipLevels;
    D3DFORMAT Format;
} D3DXIMAGE_INFO;

/*****************************************************************************
 * IDirect3D8 interface
 */
#undef INTERFACE
#define INTERFACE IDirect3D8
DECLARE_INTERFACE_IID_(IDirect3D8, IUnknown, "1dd9e8da-1c77-4d40-b0cf-98fefdff9512")
{
    /*** IUnknown methods ***/
    STDMETHOD_(HRESULT, QueryInterface)(THIS_ REFIID riid, void **ppvObject) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    /*** IDirect3D8 methods ***/
    STDMETHOD(RegisterSoftwareDevice)(THIS_ void *pInitializeFunction) PURE;
    STDMETHOD_(UINT, GetAdapterCount)(THIS) PURE;
    STDMETHOD(GetAdapterIdentifier)(THIS_ UINT  Adapter, DWORD  Flags, D3DADAPTER_IDENTIFIER8 * pIdentifier) PURE;
    STDMETHOD_(UINT, GetAdapterModeCount)(THIS_ UINT  Adapter) PURE;
    STDMETHOD(EnumAdapterModes)(THIS_ UINT  Adapter, UINT  Mode, D3DDISPLAYMODE * pMode) PURE;
    STDMETHOD(GetAdapterDisplayMode)(THIS_ UINT  Adapter, D3DDISPLAYMODE * pMode) PURE;
    STDMETHOD(CheckDeviceType)(THIS_ UINT  Adapter, D3DDEVTYPE  CheckType, D3DFORMAT  DisplayFormat, D3DFORMAT  BackBufferFormat, WINBOOL  Windowed) PURE;
    STDMETHOD(CheckDeviceFormat)(THIS_ UINT  Adapter, D3DDEVTYPE  DeviceType, D3DFORMAT  AdapterFormat, DWORD  Usage, D3DRESOURCETYPE  RType, D3DFORMAT  CheckFormat) PURE;
    STDMETHOD(CheckDeviceMultiSampleType)(THIS_ UINT  Adapter, D3DDEVTYPE  DeviceType, D3DFORMAT  SurfaceFormat, WINBOOL  Windowed, D3DMULTISAMPLE_TYPE  MultiSampleType) PURE;
    STDMETHOD(CheckDepthStencilMatch)(THIS_ UINT  Adapter, D3DDEVTYPE  DeviceType, D3DFORMAT  AdapterFormat, D3DFORMAT  RenderTargetFormat, D3DFORMAT  DepthStencilFormat) PURE;
    STDMETHOD(GetDeviceCaps)(THIS_ UINT  Adapter, D3DDEVTYPE  DeviceType, D3DCAPS8 * pCaps) PURE;
    STDMETHOD_(HMONITOR, GetAdapterMonitor)(THIS_ UINT  Adapter) PURE;
    STDMETHOD(CreateDevice)(THIS_ UINT  Adapter, D3DDEVTYPE  DeviceType, HWND  hFocusWindow, DWORD  BehaviorFlags, D3DPRESENT_PARAMETERS * pPresentationParameters, struct IDirect3DDevice8 **ppReturnedDeviceInterface) PURE;
};
#undef INTERFACE

/*****************************************************************************
 * IDirect3DSurface8 interface
 */
#define INTERFACE IDirect3DSurface8
DECLARE_INTERFACE_IID_(IDirect3DSurface8, IUnknown, "b96eebca-b326-4ea5-882f-2ff5bae021dd")
{
    /*** IUnknown methods ***/
    STDMETHOD_(HRESULT, QueryInterface)(THIS_ REFIID riid, void **ppvObject) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    /*** IDirect3DSurface8 methods ***/
    STDMETHOD(GetDevice)(THIS_ struct IDirect3DDevice8 **ppDevice) PURE;
    STDMETHOD(SetPrivateData)(THIS_ REFGUID refguid, const void *data, DWORD data_size, DWORD flags) PURE;
    STDMETHOD(GetPrivateData)(THIS_ REFGUID  refguid, void *pData, DWORD * pSizeOfData) PURE;
    STDMETHOD(FreePrivateData)(THIS_ REFGUID  refguid) PURE;
    STDMETHOD(GetContainer)(THIS_ REFIID  riid, void **ppContainer) PURE;
    STDMETHOD(GetDesc)(THIS_ D3DSURFACE_DESC * pDesc) PURE;
    STDMETHOD(LockRect)(THIS_ D3DLOCKED_RECT * locked_rect, const RECT * rect, DWORD flags) PURE;
    STDMETHOD(UnlockRect)(THIS) PURE;
};
#undef INTERFACE

/*****************************************************************************
 * IDirect3DSwapChain8 interface
 */
#define INTERFACE IDirect3DSwapChain8
DECLARE_INTERFACE_IID_(IDirect3DSwapChain8, IUnknown, "928c088b-76b9-4c6b-a536-a590853876cd")
{
    /*** IUnknown methods ***/
    STDMETHOD_(HRESULT, QueryInterface)(THIS_ REFIID riid, void **ppvObject) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    /*** IDirect3DSwapChain8 methods ***/
    STDMETHOD(Present)(THIS_ const RECT * src_rect, const RECT * dst_rect, HWND dst_window_override,
        const RGNDATA * dirty_region) PURE;
    STDMETHOD(GetBackBuffer)(THIS_ UINT  BackBuffer, D3DBACKBUFFER_TYPE  Type, struct IDirect3DSurface8 **ppBackBuffer) PURE;
};
#undef INTERFACE

/*****************************************************************************
 * IDirect3DResource8 interface
 */
#define INTERFACE IDirect3DResource8
DECLARE_INTERFACE_IID_(IDirect3DResource8, IUnknown, "1b36bb7b-09b7-410a-b445-7d1430d7b33f")
{
    /*** IUnknown methods ***/
    STDMETHOD_(HRESULT, QueryInterface)(THIS_ REFIID riid, void **ppvObject) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    /*** IDirect3DResource8 methods ***/
    STDMETHOD(GetDevice)(THIS_ struct IDirect3DDevice8 **ppDevice) PURE;
    STDMETHOD(SetPrivateData)(THIS_ REFGUID refguid, const void *data, DWORD data_size, DWORD flags) PURE;
    STDMETHOD(GetPrivateData)(THIS_ REFGUID  refguid, void *pData, DWORD * pSizeOfData) PURE;
    STDMETHOD(FreePrivateData)(THIS_ REFGUID  refguid) PURE;
    STDMETHOD_(DWORD, SetPriority)(THIS_ DWORD  PriorityNew) PURE;
    STDMETHOD_(DWORD, GetPriority)(THIS) PURE;
    STDMETHOD_(void, PreLoad)(THIS) PURE;
    STDMETHOD_(D3DRESOURCETYPE, GetType)(THIS) PURE;
};
#undef INTERFACE

/*****************************************************************************
 * IDirect3DBaseTexture8 interface
 */
#define INTERFACE IDirect3DBaseTexture8
DECLARE_INTERFACE_IID_(IDirect3DBaseTexture8, IDirect3DResource8, "b4211cfa-51b9-4a9f-ab78-db99b2bb678e")
{
    /*** IUnknown methods ***/
    STDMETHOD_(HRESULT, QueryInterface)(THIS_ REFIID riid, void **ppvObject) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    /*** IDirect3DResource8 methods ***/
    STDMETHOD(GetDevice)(THIS_ struct IDirect3DDevice8 **ppDevice) PURE;
    STDMETHOD(SetPrivateData)(THIS_ REFGUID refguid, const void *data, DWORD data_size, DWORD flags) PURE;
    STDMETHOD(GetPrivateData)(THIS_ REFGUID  refguid, void *pData, DWORD * pSizeOfData) PURE;
    STDMETHOD(FreePrivateData)(THIS_ REFGUID  refguid) PURE;
    STDMETHOD_(DWORD, SetPriority)(THIS_ DWORD  PriorityNew) PURE;
    STDMETHOD_(DWORD, GetPriority)(THIS) PURE;
    STDMETHOD_(void, PreLoad)(THIS) PURE;
    STDMETHOD_(D3DRESOURCETYPE, GetType)(THIS) PURE;
    /*** IDirect3DBaseTexture8 methods ***/
    STDMETHOD_(DWORD, SetLOD)(THIS_ DWORD  LODNew) PURE;
    STDMETHOD_(DWORD, GetLOD)(THIS) PURE;
    STDMETHOD_(DWORD, GetLevelCount)(THIS) PURE;
};
#undef INTERFACE

/*****************************************************************************
 * IDirect3DTexture8 interface
 */
#define INTERFACE IDirect3DTexture8
DECLARE_INTERFACE_IID_(IDirect3DTexture8, IDirect3DBaseTexture8, "e4cdd575-2866-4f01-b12e-7eece1ec9358")
{
    /*** IUnknown methods ***/
    STDMETHOD_(HRESULT, QueryInterface)(THIS_ REFIID riid, void **ppvObject) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    /*** IDirect3DResource8 methods ***/
    STDMETHOD(GetDevice)(THIS_ struct IDirect3DDevice8 **ppDevice) PURE;
    STDMETHOD(SetPrivateData)(THIS_ REFGUID refguid, const void *data, DWORD data_size, DWORD flags) PURE;
    STDMETHOD(GetPrivateData)(THIS_ REFGUID  refguid, void *pData, DWORD * pSizeOfData) PURE;
    STDMETHOD(FreePrivateData)(THIS_ REFGUID  refguid) PURE;
    STDMETHOD_(DWORD, SetPriority)(THIS_ DWORD  PriorityNew) PURE;
    STDMETHOD_(DWORD, GetPriority)(THIS) PURE;
    STDMETHOD_(void, PreLoad)(THIS) PURE;
    STDMETHOD_(D3DRESOURCETYPE, GetType)(THIS) PURE;
    /*** IDirect3DBaseTexture8 methods ***/
    STDMETHOD_(DWORD, SetLOD)(THIS_ DWORD  LODNew) PURE;
    STDMETHOD_(DWORD, GetLOD)(THIS) PURE;
    STDMETHOD_(DWORD, GetLevelCount)(THIS) PURE;
    /*** IDirect3DTexture8 methods ***/
    STDMETHOD(GetLevelDesc)(THIS_ UINT  Level, D3DSURFACE_DESC * pDesc) PURE;
    STDMETHOD(GetSurfaceLevel)(THIS_ UINT  Level, IDirect3DSurface8 * *ppSurfaceLevel) PURE;
    STDMETHOD(LockRect)(THIS_ UINT level, D3DLOCKED_RECT * locked_rect, const RECT * rect, DWORD flags) PURE;
    STDMETHOD(UnlockRect)(THIS_ UINT  Level) PURE;
    STDMETHOD(AddDirtyRect)(THIS_ const RECT * dirty_rect) PURE;
};
#undef INTERFACE

/*****************************************************************************
 * IDirect3DVolume8 interface
 */
#define INTERFACE IDirect3DVolume8
DECLARE_INTERFACE_IID_(IDirect3DVolume8, IUnknown, "bd7349f5-14f1-42e4-9c79-972380db40c0")
{
    /*** IUnknown methods ***/
    STDMETHOD_(HRESULT, QueryInterface)(THIS_ REFIID riid, void **ppvObject) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    /*** IDirect3DVolume8 methods ***/
    STDMETHOD(GetDevice)(THIS_ struct IDirect3DDevice8 **ppDevice) PURE;
    STDMETHOD(SetPrivateData)(THIS_ REFGUID refguid, const void *data, DWORD data_size, DWORD flags) PURE;
    STDMETHOD(GetPrivateData)(THIS_ REFGUID   refguid, void *pData, DWORD * pSizeOfData) PURE;
    STDMETHOD(FreePrivateData)(THIS_ REFGUID  refguid) PURE;
    STDMETHOD(GetContainer)(THIS_ REFIID  riid, void **ppContainer) PURE;
    STDMETHOD(GetDesc)(THIS_ D3DVOLUME_DESC * pDesc) PURE;
    STDMETHOD(LockBox)(THIS_ D3DLOCKED_BOX * locked_box, const D3DBOX * box, DWORD flags) PURE;
    STDMETHOD(UnlockBox)(THIS) PURE;
};
#undef INTERFACE

/*****************************************************************************
 * IDirect3DVolumeTexture8 interface
 */
#define INTERFACE IDirect3DVolumeTexture8
DECLARE_INTERFACE_IID_(IDirect3DVolumeTexture8, IDirect3DBaseTexture8, "4b8aaafa-140f-42ba-9131-597eafaa2ead")
{
    /*** IUnknown methods ***/
    STDMETHOD_(HRESULT, QueryInterface)(THIS_ REFIID riid, void **ppvObject) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    /*** IDirect3DResource8 methods ***/
    STDMETHOD(GetDevice)(THIS_ struct IDirect3DDevice8 **ppDevice) PURE;
    STDMETHOD(SetPrivateData)(THIS_ REFGUID refguid, const void *data, DWORD data_size, DWORD flags) PURE;
    STDMETHOD(GetPrivateData)(THIS_ REFGUID  refguid, void *pData, DWORD * pSizeOfData) PURE;
    STDMETHOD(FreePrivateData)(THIS_ REFGUID  refguid) PURE;
    STDMETHOD_(DWORD, SetPriority)(THIS_ DWORD  PriorityNew) PURE;
    STDMETHOD_(DWORD, GetPriority)(THIS) PURE;
    STDMETHOD_(void, PreLoad)(THIS) PURE;
    STDMETHOD_(D3DRESOURCETYPE, GetType)(THIS) PURE;
    /*** IDirect3DBaseTexture8 methods ***/
    STDMETHOD_(DWORD, SetLOD)(THIS_ DWORD  LODNew) PURE;
    STDMETHOD_(DWORD, GetLOD)(THIS) PURE;
    STDMETHOD_(DWORD, GetLevelCount)(THIS) PURE;
    /*** IDirect3DVolumeTexture8 methods ***/
    STDMETHOD(GetLevelDesc)(THIS_ UINT  Level, D3DVOLUME_DESC * pDesc) PURE;
    STDMETHOD(GetVolumeLevel)(THIS_ UINT  Level, IDirect3DVolume8 * *ppVolumeLevel) PURE;
    STDMETHOD(LockBox)(THIS_ UINT level, D3DLOCKED_BOX * locked_box, const D3DBOX * box, DWORD flags) PURE;
    STDMETHOD(UnlockBox)(THIS_ UINT  Level) PURE;
    STDMETHOD(AddDirtyBox)(THIS_ const D3DBOX * dirty_box) PURE;
};
#undef INTERFACE

/*****************************************************************************
 * IDirect3DCubeTexture8 interface
 */
#define INTERFACE IDirect3DCubeTexture8
DECLARE_INTERFACE_IID_(IDirect3DCubeTexture8, IDirect3DBaseTexture8, "3ee5b968-2aca-4c34-8bb5-7e0c3d19b750")
{
    /*** IUnknown methods ***/
    STDMETHOD_(HRESULT, QueryInterface)(THIS_ REFIID riid, void **ppvObject) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    /*** IDirect3DResource8 methods ***/
    STDMETHOD(GetDevice)(THIS_ struct IDirect3DDevice8 **ppDevice) PURE;
    STDMETHOD(SetPrivateData)(THIS_ REFGUID refguid, const void *data, DWORD data_size, DWORD flags) PURE;
    STDMETHOD(GetPrivateData)(THIS_ REFGUID  refguid, void *pData, DWORD * pSizeOfData) PURE;
    STDMETHOD(FreePrivateData)(THIS_ REFGUID  refguid) PURE;
    STDMETHOD_(DWORD, SetPriority)(THIS_ DWORD  PriorityNew) PURE;
    STDMETHOD_(DWORD, GetPriority)(THIS) PURE;
    STDMETHOD_(void, PreLoad)(THIS) PURE;
    STDMETHOD_(D3DRESOURCETYPE, GetType)(THIS) PURE;
    /*** IDirect3DBaseTexture8 methods ***/
    STDMETHOD_(DWORD, SetLOD)(THIS_ DWORD  LODNew) PURE;
    STDMETHOD_(DWORD, GetLOD)(THIS) PURE;
    STDMETHOD_(DWORD, GetLevelCount)(THIS) PURE;
    /*** IDirect3DCubeTexture8 methods ***/
    STDMETHOD(GetLevelDesc)(THIS_ UINT  Level, D3DSURFACE_DESC * pDesc) PURE;
    STDMETHOD(GetCubeMapSurface)(THIS_ D3DCUBEMAP_FACES  FaceType, UINT  Level, IDirect3DSurface8 * *ppCubeMapSurface) PURE;
    STDMETHOD(LockRect)(THIS_ D3DCUBEMAP_FACES face, UINT level, D3DLOCKED_RECT * locked_rect,
        const RECT * rect, DWORD flags) PURE;
    STDMETHOD(UnlockRect)(THIS_ D3DCUBEMAP_FACES  FaceType, UINT  Level) PURE;
    STDMETHOD(AddDirtyRect)(THIS_ D3DCUBEMAP_FACES face, const RECT * dirty_rect) PURE;
};
#undef INTERFACE

/*****************************************************************************
 * IDirect3DVertexBuffer8 interface
 */
#define INTERFACE IDirect3DVertexBuffer8
DECLARE_INTERFACE_IID_(IDirect3DVertexBuffer8, IDirect3DResource8, "8aeeeac7-05f9-44d4-b591-000b0df1cb95")
{
    /*** IUnknown methods ***/
    STDMETHOD_(HRESULT, QueryInterface)(THIS_ REFIID riid, void **ppvObject) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    /*** IDirect3DResource8 methods ***/
    STDMETHOD(GetDevice)(THIS_ struct IDirect3DDevice8 **ppDevice) PURE;
    STDMETHOD(SetPrivateData)(THIS_ REFGUID refguid, const void *data, DWORD data_size, DWORD flags) PURE;
    STDMETHOD(GetPrivateData)(THIS_ REFGUID  refguid, void *pData, DWORD * pSizeOfData) PURE;
    STDMETHOD(FreePrivateData)(THIS_ REFGUID  refguid) PURE;
    STDMETHOD_(DWORD, SetPriority)(THIS_ DWORD  PriorityNew) PURE;
    STDMETHOD_(DWORD, GetPriority)(THIS) PURE;
    STDMETHOD_(void, PreLoad)(THIS) PURE;
    STDMETHOD_(D3DRESOURCETYPE, GetType)(THIS) PURE;
    /*** IDirect3DVertexBuffer8 methods ***/
    STDMETHOD(Lock)(THIS_ UINT  OffsetToLock, UINT  SizeToLock, BYTE * *ppbData, DWORD  Flags) PURE;
    STDMETHOD(Unlock)(THIS) PURE;
    STDMETHOD(GetDesc)(THIS_ D3DVERTEXBUFFER_DESC * pDesc) PURE;
};
#undef INTERFACE

/*****************************************************************************
 * IDirect3DIndexBuffer8 interface
 */
#define INTERFACE IDirect3DIndexBuffer8
DECLARE_INTERFACE_IID_(IDirect3DIndexBuffer8, IDirect3DResource8, "0e689c9a-053d-44a0-9d92-db0e3d750f86")
{
    /*** IUnknown methods ***/
    STDMETHOD_(HRESULT, QueryInterface)(THIS_ REFIID riid, void **ppvObject) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    /*** IDirect3DResource8 methods ***/
    STDMETHOD(GetDevice)(THIS_ struct IDirect3DDevice8 **ppDevice) PURE;
    STDMETHOD(SetPrivateData)(THIS_ REFGUID refguid, const void *data, DWORD data_size, DWORD flags) PURE;
    STDMETHOD(GetPrivateData)(THIS_ REFGUID  refguid, void *pData, DWORD * pSizeOfData) PURE;
    STDMETHOD(FreePrivateData)(THIS_ REFGUID  refguid) PURE;
    STDMETHOD_(DWORD, SetPriority)(THIS_ DWORD  PriorityNew) PURE;
    STDMETHOD_(DWORD, GetPriority)(THIS) PURE;
    STDMETHOD_(void, PreLoad)(THIS) PURE;
    STDMETHOD_(D3DRESOURCETYPE, GetType)(THIS) PURE;
    /*** IDirect3DIndexBuffer8 methods ***/
    STDMETHOD(Lock)(THIS_ UINT  OffsetToLock, UINT  SizeToLock, BYTE * *ppbData, DWORD  Flags) PURE;
    STDMETHOD(Unlock)(THIS) PURE;
    STDMETHOD(GetDesc)(THIS_ D3DINDEXBUFFER_DESC * pDesc) PURE;
};
#undef INTERFACE

/*****************************************************************************
 * IDirect3DDevice8 interface
 */
#define INTERFACE IDirect3DDevice8
DECLARE_INTERFACE_IID_(IDirect3DDevice8, IUnknown, "7385e5df-8fe8-41d5-86b6-d7b48547b6cf")
{
    /*** IUnknown methods ***/
    STDMETHOD_(HRESULT, QueryInterface)(THIS_ REFIID riid, void **ppvObject) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    /*** IDirect3DDevice8 methods ***/
    STDMETHOD(TestCooperativeLevel)(THIS) PURE;
    STDMETHOD_(UINT, GetAvailableTextureMem)(THIS) PURE;
    STDMETHOD(ResourceManagerDiscardBytes)(THIS_ DWORD  Bytes) PURE;
    STDMETHOD(GetDirect3D)(THIS_ IDirect3D8 * *ppD3D8) PURE;
    STDMETHOD(GetDeviceCaps)(THIS_ D3DCAPS8 * pCaps) PURE;
    STDMETHOD(GetDisplayMode)(THIS_ D3DDISPLAYMODE * pMode) PURE;
    STDMETHOD(GetCreationParameters)(THIS_ D3DDEVICE_CREATION_PARAMETERS * pParameters) PURE;
    STDMETHOD(SetCursorProperties)(THIS_ UINT  XHotSpot, UINT  YHotSpot, IDirect3DSurface8 * pCursorBitmap) PURE;
    STDMETHOD_(void, SetCursorPosition)(THIS_ UINT  XScreenSpace, UINT  YScreenSpace, DWORD  Flags) PURE;
    STDMETHOD_(WINBOOL, ShowCursor)(THIS_ WINBOOL  bShow) PURE;
    STDMETHOD(CreateAdditionalSwapChain)(THIS_ D3DPRESENT_PARAMETERS * pPresentationParameters, IDirect3DSwapChain8 * *pSwapChain) PURE;
    STDMETHOD(Reset)(THIS_ D3DPRESENT_PARAMETERS * pPresentationParameters) PURE;
    STDMETHOD(Present)(THIS_ const RECT * src_rect, const RECT * dst_rect, HWND dst_window_override,
        const RGNDATA * dirty_region) PURE;
    STDMETHOD(GetBackBuffer)(THIS_ UINT  BackBuffer, D3DBACKBUFFER_TYPE  Type, IDirect3DSurface8 * *ppBackBuffer) PURE;
    STDMETHOD(GetRasterStatus)(THIS_ D3DRASTER_STATUS * pRasterStatus) PURE;
    STDMETHOD_(void, SetGammaRamp)(THIS_ DWORD flags, const D3DGAMMARAMP * ramp) PURE;
    STDMETHOD_(void, GetGammaRamp)(THIS_ D3DGAMMARAMP * pRamp) PURE;
    STDMETHOD(CreateTexture)(THIS_ UINT  Width, UINT  Height, UINT  Levels, DWORD  Usage, D3DFORMAT  Format, D3DPOOL  Pool, IDirect3DTexture8 * *ppTexture) PURE;
    STDMETHOD(CreateVolumeTexture)(THIS_ UINT  Width, UINT  Height, UINT  Depth, UINT  Levels, DWORD  Usage, D3DFORMAT  Format, D3DPOOL  Pool, IDirect3DVolumeTexture8 * *ppVolumeTexture) PURE;
    STDMETHOD(CreateCubeTexture)(THIS_ UINT  EdgeLength, UINT  Levels, DWORD  Usage, D3DFORMAT  Format, D3DPOOL  Pool, IDirect3DCubeTexture8 * *ppCubeTexture) PURE;
    STDMETHOD(CreateVertexBuffer)(THIS_ UINT  Length, DWORD  Usage, DWORD  FVF, D3DPOOL  Pool, IDirect3DVertexBuffer8 * *ppVertexBuffer) PURE;
    STDMETHOD(CreateIndexBuffer)(THIS_ UINT  Length, DWORD  Usage, D3DFORMAT  Format, D3DPOOL  Pool, IDirect3DIndexBuffer8 * *ppIndexBuffer) PURE;
    STDMETHOD(CreateRenderTarget)(THIS_ UINT  Width, UINT  Height, D3DFORMAT  Format, D3DMULTISAMPLE_TYPE  MultiSample, WINBOOL  Lockable, IDirect3DSurface8 * *ppSurface) PURE;
    STDMETHOD(CreateDepthStencilSurface)(THIS_ UINT  Width, UINT  Height, D3DFORMAT  Format, D3DMULTISAMPLE_TYPE  MultiSample, IDirect3DSurface8 * *ppSurface) PURE;
    STDMETHOD(CreateImageSurface)(THIS_ UINT  Width, UINT  Height, D3DFORMAT  Format, IDirect3DSurface8 * *ppSurface) PURE;
    STDMETHOD(CopyRects)(THIS_ IDirect3DSurface8 * src_surface, const RECT * src_rects,
        UINT rect_count, IDirect3DSurface8 * dst_surface, const POINT * dst_points) PURE;
    STDMETHOD(UpdateTexture)(THIS_ IDirect3DBaseTexture8 * pSourceTexture, IDirect3DBaseTexture8 * pDestinationTexture) PURE;
    STDMETHOD(GetFrontBuffer)(THIS_ IDirect3DSurface8 * pDestSurface) PURE;
    STDMETHOD(SetRenderTarget)(THIS_ IDirect3DSurface8 * pRenderTarget, IDirect3DSurface8 * pNewZStencil) PURE;
    STDMETHOD(GetRenderTarget)(THIS_ IDirect3DSurface8 * *ppRenderTarget) PURE;
    STDMETHOD(GetDepthStencilSurface)(THIS_ IDirect3DSurface8 * *ppZStencilSurface) PURE;
    STDMETHOD(BeginScene)(THIS) PURE;
    STDMETHOD(EndScene)(THIS) PURE;
    STDMETHOD(Clear)(THIS_ DWORD rect_count, const D3DRECT * rects, DWORD flags, D3DCOLOR color,
        float z, DWORD stencil) PURE;
    STDMETHOD(SetTransform)(THIS_ D3DTRANSFORMSTATETYPE state, const D3DMATRIX * matrix) PURE;
    STDMETHOD(GetTransform)(THIS_ D3DTRANSFORMSTATETYPE  State, D3DMATRIX * pMatrix) PURE;
    STDMETHOD(MultiplyTransform)(THIS_ D3DTRANSFORMSTATETYPE state, const D3DMATRIX * matrix) PURE;
    STDMETHOD(SetViewport)(THIS_ const D3DVIEWPORT8 * viewport) PURE;
    STDMETHOD(GetViewport)(THIS_ D3DVIEWPORT8 * pViewport) PURE;
    STDMETHOD(SetMaterial)(THIS_ const D3DMATERIAL8 * material) PURE;
    STDMETHOD(GetMaterial)(THIS_ D3DMATERIAL8 * pMaterial) PURE;
    STDMETHOD(SetLight)(THIS_ DWORD index, const D3DLIGHT8 * light) PURE;
    STDMETHOD(GetLight)(THIS_ DWORD  Index, D3DLIGHT8 * pLight) PURE;
    STDMETHOD(LightEnable)(THIS_ DWORD  Index, WINBOOL  Enable) PURE;
    STDMETHOD(GetLightEnable)(THIS_ DWORD  Index, WINBOOL * pEnable) PURE;
    STDMETHOD(SetClipPlane)(THIS_ DWORD index, const float *plane) PURE;
    STDMETHOD(GetClipPlane)(THIS_ DWORD  Index, float *pPlane) PURE;
    STDMETHOD(SetRenderState)(THIS_ D3DRENDERSTATETYPE  State, DWORD  Value) PURE;
    STDMETHOD(GetRenderState)(THIS_ D3DRENDERSTATETYPE  State, DWORD * pValue) PURE;
    STDMETHOD(BeginStateBlock)(THIS) PURE;
    STDMETHOD(EndStateBlock)(THIS_ DWORD * pToken) PURE;
    STDMETHOD(ApplyStateBlock)(THIS_ DWORD  Token) PURE;
    STDMETHOD(CaptureStateBlock)(THIS_ DWORD  Token) PURE;
    STDMETHOD(DeleteStateBlock)(THIS_ DWORD  Token) PURE;
    STDMETHOD(CreateStateBlock)(THIS_ D3DSTATEBLOCKTYPE  Type, DWORD * pToken) PURE;
    STDMETHOD(SetClipStatus)(THIS_ const D3DCLIPSTATUS8 * clip_status) PURE;
    STDMETHOD(GetClipStatus)(THIS_ D3DCLIPSTATUS8 * pClipStatus) PURE;
    STDMETHOD(GetTexture)(THIS_ DWORD  Stage, IDirect3DBaseTexture8 * *ppTexture) PURE;
    STDMETHOD(SetTexture)(THIS_ DWORD  Stage, IDirect3DBaseTexture8 * pTexture) PURE;
    STDMETHOD(GetTextureStageState)(THIS_ DWORD  Stage, D3DTEXTURESTAGESTATETYPE  Type, DWORD * pValue) PURE;
    STDMETHOD(SetTextureStageState)(THIS_ DWORD  Stage, D3DTEXTURESTAGESTATETYPE  Type, DWORD  Value) PURE;
    STDMETHOD(ValidateDevice)(THIS_ DWORD * pNumPasses) PURE;
    STDMETHOD(GetInfo)(THIS_ DWORD  DevInfoID, void *pDevInfoStruct, DWORD  DevInfoStructSize) PURE;
    STDMETHOD(SetPaletteEntries)(THIS_ UINT palette_idx, const PALETTEENTRY * entries) PURE;
    STDMETHOD(GetPaletteEntries)(THIS_ UINT  PaletteNumber, PALETTEENTRY * pEntries) PURE;
    STDMETHOD(SetCurrentTexturePalette)(THIS_ UINT  PaletteNumber) PURE;
    STDMETHOD(GetCurrentTexturePalette)(THIS_ UINT * PaletteNumber) PURE;
    STDMETHOD(DrawPrimitive)(THIS_ D3DPRIMITIVETYPE  PrimitiveType, UINT  StartVertex, UINT  PrimitiveCount) PURE;
    STDMETHOD(DrawIndexedPrimitive)(THIS_ D3DPRIMITIVETYPE  PrimitiveType, UINT  minIndex, UINT  NumVertices, UINT  startIndex, UINT  primCount) PURE;
    STDMETHOD(DrawPrimitiveUP)(THIS_ D3DPRIMITIVETYPE primitive_type, UINT primitive_count,
        const void *data, UINT stride) PURE;
    STDMETHOD(DrawIndexedPrimitiveUP)(THIS_ D3DPRIMITIVETYPE primitive_type, UINT min_vertex_idx,
        UINT vertex_count, UINT primitive_count, const void *index_data, D3DFORMAT index_format,
        const void *data, UINT stride) PURE;
    STDMETHOD(ProcessVertices)(THIS_ UINT  SrcStartIndex, UINT  DestIndex, UINT  VertexCount, IDirect3DVertexBuffer8 * pDestBuffer, DWORD  Flags) PURE;
    STDMETHOD(CreateVertexShader)(THIS_ const DWORD * declaration, const DWORD * byte_code,
        DWORD * shader, DWORD usage) PURE;
    STDMETHOD(SetVertexShader)(THIS_ DWORD  Handle) PURE;
    STDMETHOD(GetVertexShader)(THIS_ DWORD * pHandle) PURE;
    STDMETHOD(DeleteVertexShader)(THIS_ DWORD  Handle) PURE;
    STDMETHOD(SetVertexShaderConstant)(THIS_ DWORD reg_idx, const void *data, DWORD count) PURE;
    STDMETHOD(GetVertexShaderConstant)(THIS_ DWORD  Register, void *pConstantData, DWORD  ConstantCount) PURE;
    STDMETHOD(GetVertexShaderDeclaration)(THIS_ DWORD  Handle, void *pData, DWORD * pSizeOfData) PURE;
    STDMETHOD(GetVertexShaderFunction)(THIS_ DWORD  Handle, void *pData, DWORD * pSizeOfData) PURE;
    STDMETHOD(SetStreamSource)(THIS_ UINT  StreamNumber, IDirect3DVertexBuffer8 * pStreamData, UINT  Stride) PURE;
    STDMETHOD(GetStreamSource)(THIS_ UINT  StreamNumber, IDirect3DVertexBuffer8 * *ppStreamData, UINT * pStride) PURE;
    STDMETHOD(SetIndices)(THIS_ IDirect3DIndexBuffer8 * pIndexData, UINT  BaseVertexIndex) PURE;
    STDMETHOD(GetIndices)(THIS_ IDirect3DIndexBuffer8 * *ppIndexData, UINT * pBaseVertexIndex) PURE;
    STDMETHOD(CreatePixelShader)(THIS_ const DWORD * byte_code, DWORD * shader) PURE;
    STDMETHOD(SetPixelShader)(THIS_ DWORD  Handle) PURE;
    STDMETHOD(GetPixelShader)(THIS_ DWORD * pHandle) PURE;
    STDMETHOD(DeletePixelShader)(THIS_ DWORD  Handle) PURE;
    STDMETHOD(SetPixelShaderConstant)(THIS_ DWORD reg_idx, const void *data, DWORD count) PURE;
    STDMETHOD(GetPixelShaderConstant)(THIS_ DWORD  Register, void *pConstantData, DWORD  ConstantCount) PURE;
    STDMETHOD(GetPixelShaderFunction)(THIS_ DWORD  Handle, void *pData, DWORD * pSizeOfData) PURE;
    STDMETHOD(DrawRectPatch)(THIS_ UINT handle, const float *segment_count,
        const D3DRECTPATCH_INFO * patch_info) PURE;
    STDMETHOD(DrawTriPatch)(THIS_ UINT handle, const float *segment_count,
        const D3DTRIPATCH_INFO * patch_info) PURE;
    STDMETHOD(DeletePatch)(THIS_ UINT  Handle) PURE;
};
#undef INTERFACE

/*****************************************************************************
 * Direct 3D v8 functions
 */

EXTERN_C HRESULT WINAPI D3DXCreateTextureFromFileExW(
    IDirect3DDevice8 *pDevice,
    LPCWSTR               pSrcFile,
    UINT                  Width,
    UINT                  Height,
    UINT                  MipLevels,
    DWORD                 Usage,
    D3DFORMAT             Format,
    D3DPOOL               Pool,
    DWORD                 Filter,
    DWORD                 MipFilter,
    D3DCOLOR              ColorKey,
    D3DXIMAGE_INFO *pSrcInfo,
    PALETTEENTRY *pPalette,
    IDirect3DTexture8 **ppTexture
);