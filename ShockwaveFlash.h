#if !defined(AFX_SHOCKWAVEFLASH_H__79EABBED_5C30_433A_AD5A_478E560B3FD8__INCLUDED_)
#define AFX_SHOCKWAVEFLASH_H__79EABBED_5C30_433A_AD5A_478E560B3FD8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#pragma once
#pragma pack(push, 8)

#include <comdef.h>

namespace ShockwaveFlashObjects {

//
// Forward references and typedefs
//

struct __declspec(uuid("d27cdb6b-ae6d-11cf-96b8-444553540000"))
/* LIBID */ __ShockwaveFlashObjects;
struct __declspec(uuid("d27cdb6c-ae6d-11cf-96b8-444553540000"))
/* dual interface */ IShockwaveFlash;
struct __declspec(uuid("d27cdb6d-ae6d-11cf-96b8-444553540000"))
/* dispinterface */ _IShockwaveFlashEvents;
struct /* coclass */ ShockwaveFlash;
struct /* coclass */ FlashProp;
struct __declspec(uuid("d27cdb70-ae6d-11cf-96b8-444553540000"))
/* interface */ IFlashFactory;
struct __declspec(uuid("d27cdb72-ae6d-11cf-96b8-444553540000"))
/* interface */ IFlashObjectInterface;
struct __declspec(uuid("a6ef9860-c720-11d0-9337-00a0c90dcaa9"))
/* interface */ IDispatchEx;
struct __declspec(uuid("6d5140c1-7436-11ce-8034-00aa006009fa"))
/* interface */ IServiceProvider;
struct /* coclass */ FlashObjectInterface;

//
// Smart pointer typedef declarations
//

_COM_SMARTPTR_TYPEDEF(IShockwaveFlash, __uuidof(IShockwaveFlash));
_COM_SMARTPTR_TYPEDEF(_IShockwaveFlashEvents, __uuidof(_IShockwaveFlashEvents));
_COM_SMARTPTR_TYPEDEF(IFlashFactory, __uuidof(IFlashFactory));
_COM_SMARTPTR_TYPEDEF(IServiceProvider, __uuidof(IServiceProvider));
_COM_SMARTPTR_TYPEDEF(IDispatchEx, __uuidof(IDispatchEx));
_COM_SMARTPTR_TYPEDEF(IFlashObjectInterface, __uuidof(IFlashObjectInterface));

//
// Type library items
//

struct __declspec(uuid("d27cdb6c-ae6d-11cf-96b8-444553540000"))
IShockwaveFlash : IDispatch
{
    //
    // Property data
    //
	/*
    __declspec(property(get=GetScaleMode,put=PutScaleMode))
    int ScaleMode;
    __declspec(property(get=GetAlignMode,put=PutAlignMode))
    int AlignMode;
    __declspec(property(get=GetBackgroundColor,put=PutBackgroundColor))
    long BackgroundColor;
    __declspec(property(get=GetTotalFrames))
    long TotalFrames;
    __declspec(property(get=GetPlaying,put=PutPlaying))
    VARIANT_BOOL Playing;
    __declspec(property(get=GetMovieData,put=PutMovieData))
    _bstr_t MovieData;
    __declspec(property(get=GetInlineData,put=PutInlineData))
    IUnknownPtr InlineData;
    __declspec(property(get=GetSeamlessTabbing,put=PutSeamlessTabbing))
    VARIANT_BOOL SeamlessTabbing;
    __declspec(property(get=GetWMode,put=PutWMode))
    _bstr_t WMode;
    __declspec(property(get=GetSAlign,put=PutSAlign))
    _bstr_t SAlign;
    __declspec(property(get=GetMenu,put=PutMenu))
    VARIANT_BOOL Menu;
    __declspec(property(get=GetBase,put=PutBase))
    _bstr_t Base;
    __declspec(property(get=GetScale,put=PutScale))
    _bstr_t Scale;
    __declspec(property(get=GetDeviceFont,put=PutDeviceFont))
    VARIANT_BOOL DeviceFont;
    __declspec(property(get=GetEmbedMovie,put=PutEmbedMovie))
    VARIANT_BOOL EmbedMovie;
    __declspec(property(get=GetBGColor,put=PutBGColor))
    _bstr_t BGColor;
    __declspec(property(get=GetQuality2,put=PutQuality2))
    _bstr_t Quality2;
    __declspec(property(get=GetProfile,put=PutProfile))
    VARIANT_BOOL Profile;
    __declspec(property(get=GetProfileAddress,put=PutProfileAddress))
    _bstr_t ProfileAddress;
    __declspec(property(get=GetProfilePort,put=PutProfilePort))
    long ProfilePort;
    __declspec(property(get=GetAllowNetworking,put=PutAllowNetworking))
    _bstr_t AllowNetworking;
    __declspec(property(get=GetAllowFullScreen,put=PutAllowFullScreen))
    _bstr_t AllowFullScreen;
    __declspec(property(get=GetReadyState))
    long ReadyState;
    __declspec(property(get=GetSWRemote,put=PutSWRemote))
    _bstr_t SWRemote;
    __declspec(property(get=GetMovie,put=PutMovie))
    _bstr_t Movie;
    __declspec(property(get=GetQuality,put=PutQuality))
    int Quality;
    __declspec(property(get=GetLoop,put=PutLoop))
    VARIANT_BOOL Loop;
    __declspec(property(get=GetFrameNum,put=PutFrameNum))
    long FrameNum;
    __declspec(property(get=GetFlashVars,put=PutFlashVars))
    _bstr_t FlashVars;
    __declspec(property(get=GetAllowScriptAccess,put=PutAllowScriptAccess))
    _bstr_t AllowScriptAccess;

    //
    // Wrapper methods for error-handling
    //

    long GetReadyState ( );
    long GetTotalFrames ( );
    VARIANT_BOOL GetPlaying ( );
    void PutPlaying (
        VARIANT_BOOL pVal );
    int GetQuality ( );
    void PutQuality (
        int pVal );
    int GetScaleMode ( );
    void PutScaleMode (
        int pVal );
    int GetAlignMode ( );
    void PutAlignMode (
        int pVal );
    long GetBackgroundColor ( );
    void PutBackgroundColor (
        long pVal );
    VARIANT_BOOL GetLoop ( );
    void PutLoop (
        VARIANT_BOOL pVal );
    _bstr_t GetMovie ( );
    void PutMovie (
        _bstr_t pVal );
    long GetFrameNum ( );
    void PutFrameNum (
        long pVal );
    HRESULT SetZoomRect (
        long left,
        long top,
        long right,
        long bottom );
    HRESULT Zoom (
        int factor );
    HRESULT Pan (
        long x,
        long y,
        int mode );
    HRESULT Play ( );
    HRESULT Stop ( );
    HRESULT Back ( );
    HRESULT Forward ( );
    HRESULT Rewind ( );
    HRESULT StopPlay ( );
    HRESULT GotoFrame (
        long FrameNum );
    long CurrentFrame ( );
    VARIANT_BOOL IsPlaying ( );
    long PercentLoaded ( );
    VARIANT_BOOL FrameLoaded (
        long FrameNum );
    long FlashVersion ( );
    _bstr_t GetWMode ( );
    void PutWMode (
        _bstr_t pVal );
    _bstr_t GetSAlign ( );
    void PutSAlign (
        _bstr_t pVal );
    VARIANT_BOOL GetMenu ( );
    void PutMenu (
        VARIANT_BOOL pVal );
    _bstr_t GetBase ( );
    void PutBase (
        _bstr_t pVal );
    _bstr_t GetScale ( );
    void PutScale (
        _bstr_t pVal );
    VARIANT_BOOL GetDeviceFont ( );
    void PutDeviceFont (
        VARIANT_BOOL pVal );
    VARIANT_BOOL GetEmbedMovie ( );
    void PutEmbedMovie (
        VARIANT_BOOL pVal );
    _bstr_t GetBGColor ( );
    void PutBGColor (
        _bstr_t pVal );
    _bstr_t GetQuality2 ( );
    void PutQuality2 (
        _bstr_t pVal );
    HRESULT LoadMovie (
        int layer,
        _bstr_t url );
    HRESULT TGotoFrame (
        _bstr_t target,
        long FrameNum );
    HRESULT TGotoLabel (
        _bstr_t target,
        _bstr_t label );
    long TCurrentFrame (
        _bstr_t target );
    _bstr_t TCurrentLabel (
        _bstr_t target );
    HRESULT TPlay (
        _bstr_t target );
    HRESULT TStopPlay (
        _bstr_t target );
    HRESULT SetVariable (
        _bstr_t name,
        _bstr_t value );
    _bstr_t GetVariable (
        _bstr_t name );
    HRESULT TSetProperty (
        _bstr_t target,
        int property,
        _bstr_t value );
    _bstr_t TGetProperty (
        _bstr_t target,
        int property );
    HRESULT TCallFrame (
        _bstr_t target,
        int FrameNum );
    HRESULT TCallLabel (
        _bstr_t target,
        _bstr_t label );
    HRESULT TSetPropertyNum (
        _bstr_t target,
        int property,
        double value );
    double TGetPropertyNum (
        _bstr_t target,
        int property );
    double TGetPropertyAsNumber (
        _bstr_t target,
        int property );
    _bstr_t GetSWRemote ( );
    void PutSWRemote (
        _bstr_t pVal );
    _bstr_t GetFlashVars ( );
    void PutFlashVars (
        _bstr_t pVal );
    _bstr_t GetAllowScriptAccess ( );
    void PutAllowScriptAccess (
        _bstr_t pVal );
    _bstr_t GetMovieData ( );
    void PutMovieData (
        _bstr_t pVal );
    IUnknownPtr GetInlineData ( );
    void PutInlineData (
        IUnknown * ppIUnknown );
    VARIANT_BOOL GetSeamlessTabbing ( );
    void PutSeamlessTabbing (
        VARIANT_BOOL pVal );
    HRESULT EnforceLocalSecurity ( );
    VARIANT_BOOL GetProfile ( );
    void PutProfile (
        VARIANT_BOOL pVal );
    _bstr_t GetProfileAddress ( );
    void PutProfileAddress (
        _bstr_t pVal );
    long GetProfilePort ( );
    void PutProfilePort (
        long pVal );
    _bstr_t CallFunction (
        _bstr_t request );
    HRESULT SetReturnValue (
        _bstr_t returnValue );
    HRESULT DisableLocalSecurity ( );
    _bstr_t GetAllowNetworking ( );
    void PutAllowNetworking (
        _bstr_t pVal );
    _bstr_t GetAllowFullScreen ( );
    void PutAllowFullScreen (
        _bstr_t pVal );
	*/
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_ReadyState (
        /*[out,retval]*/ long * pVal ) = 0;
      virtual HRESULT __stdcall get_TotalFrames (
        /*[out,retval]*/ long * pVal ) = 0;
      virtual HRESULT __stdcall get_Playing (
        /*[out,retval]*/ VARIANT_BOOL * pVal ) = 0;
      virtual HRESULT __stdcall put_Playing (
        /*[in]*/ VARIANT_BOOL pVal ) = 0;
      virtual HRESULT __stdcall get_Quality (
        /*[out,retval]*/ int * pVal ) = 0;
      virtual HRESULT __stdcall put_Quality (
        /*[in]*/ int pVal ) = 0;
      virtual HRESULT __stdcall get_ScaleMode (
        /*[out,retval]*/ int * pVal ) = 0;
      virtual HRESULT __stdcall put_ScaleMode (
        /*[in]*/ int pVal ) = 0;
      virtual HRESULT __stdcall get_AlignMode (
        /*[out,retval]*/ int * pVal ) = 0;
      virtual HRESULT __stdcall put_AlignMode (
        /*[in]*/ int pVal ) = 0;
      virtual HRESULT __stdcall get_BackgroundColor (
        /*[out,retval]*/ long * pVal ) = 0;
      virtual HRESULT __stdcall put_BackgroundColor (
        /*[in]*/ long pVal ) = 0;
      virtual HRESULT __stdcall get_Loop (
        /*[out,retval]*/ VARIANT_BOOL * pVal ) = 0;
      virtual HRESULT __stdcall put_Loop (
        /*[in]*/ VARIANT_BOOL pVal ) = 0;
      virtual HRESULT __stdcall get_Movie (
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall put_Movie (
        /*[in]*/ BSTR pVal ) = 0;
      virtual HRESULT __stdcall get_FrameNum (
        /*[out,retval]*/ long * pVal ) = 0;
      virtual HRESULT __stdcall put_FrameNum (
        /*[in]*/ long pVal ) = 0;
      virtual HRESULT __stdcall raw_SetZoomRect (
        /*[in]*/ long left,
        /*[in]*/ long top,
        /*[in]*/ long right,
        /*[in]*/ long bottom ) = 0;
      virtual HRESULT __stdcall raw_Zoom (
        /*[in]*/ int factor ) = 0;
      virtual HRESULT __stdcall raw_Pan (
        /*[in]*/ long x,
        /*[in]*/ long y,
        /*[in]*/ int mode ) = 0;
      virtual HRESULT __stdcall raw_Play ( ) = 0;
      virtual HRESULT __stdcall raw_Stop ( ) = 0;
      virtual HRESULT __stdcall raw_Back ( ) = 0;
      virtual HRESULT __stdcall raw_Forward ( ) = 0;
      virtual HRESULT __stdcall raw_Rewind ( ) = 0;
      virtual HRESULT __stdcall raw_StopPlay ( ) = 0;
      virtual HRESULT __stdcall raw_GotoFrame (
        /*[in]*/ long FrameNum ) = 0;
      virtual HRESULT __stdcall raw_CurrentFrame (
        /*[out,retval]*/ long * FrameNum ) = 0;
      virtual HRESULT __stdcall raw_IsPlaying (
        /*[out,retval]*/ VARIANT_BOOL * Playing ) = 0;
      virtual HRESULT __stdcall raw_PercentLoaded (
        /*[out,retval]*/ long * percent ) = 0;
      virtual HRESULT __stdcall raw_FrameLoaded (
        /*[in]*/ long FrameNum,
        /*[out,retval]*/ VARIANT_BOOL * loaded ) = 0;
      virtual HRESULT __stdcall raw_FlashVersion (
        /*[out,retval]*/ long * version ) = 0;
      virtual HRESULT __stdcall get_WMode (
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall put_WMode (
        /*[in]*/ BSTR pVal ) = 0;
      virtual HRESULT __stdcall get_SAlign (
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall put_SAlign (
        /*[in]*/ BSTR pVal ) = 0;
      virtual HRESULT __stdcall get_Menu (
        /*[out,retval]*/ VARIANT_BOOL * pVal ) = 0;
      virtual HRESULT __stdcall put_Menu (
        /*[in]*/ VARIANT_BOOL pVal ) = 0;
      virtual HRESULT __stdcall get_Base (
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall put_Base (
        /*[in]*/ BSTR pVal ) = 0;
      virtual HRESULT __stdcall get_Scale (
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall put_Scale (
        /*[in]*/ BSTR pVal ) = 0;
      virtual HRESULT __stdcall get_DeviceFont (
        /*[out,retval]*/ VARIANT_BOOL * pVal ) = 0;
      virtual HRESULT __stdcall put_DeviceFont (
        /*[in]*/ VARIANT_BOOL pVal ) = 0;
      virtual HRESULT __stdcall get_EmbedMovie (
        /*[out,retval]*/ VARIANT_BOOL * pVal ) = 0;
      virtual HRESULT __stdcall put_EmbedMovie (
        /*[in]*/ VARIANT_BOOL pVal ) = 0;
      virtual HRESULT __stdcall get_BGColor (
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall put_BGColor (
        /*[in]*/ BSTR pVal ) = 0;
      virtual HRESULT __stdcall get_Quality2 (
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall put_Quality2 (
        /*[in]*/ BSTR pVal ) = 0;
      virtual HRESULT __stdcall raw_LoadMovie (
        /*[in]*/ int layer,
        /*[in]*/ BSTR url ) = 0;
      virtual HRESULT __stdcall raw_TGotoFrame (
        /*[in]*/ BSTR target,
        /*[in]*/ long FrameNum ) = 0;
      virtual HRESULT __stdcall raw_TGotoLabel (
        /*[in]*/ BSTR target,
        /*[in]*/ BSTR label ) = 0;
      virtual HRESULT __stdcall raw_TCurrentFrame (
        /*[in]*/ BSTR target,
        /*[out,retval]*/ long * FrameNum ) = 0;
      virtual HRESULT __stdcall raw_TCurrentLabel (
        /*[in]*/ BSTR target,
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall raw_TPlay (
        /*[in]*/ BSTR target ) = 0;
      virtual HRESULT __stdcall raw_TStopPlay (
        /*[in]*/ BSTR target ) = 0;
      virtual HRESULT __stdcall raw_SetVariable (
        /*[in]*/ BSTR name,
        /*[in]*/ BSTR value ) = 0;
      virtual HRESULT __stdcall raw_GetVariable (
        /*[in]*/ BSTR name,
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall raw_TSetProperty (
        /*[in]*/ BSTR target,
        /*[in]*/ int property,
        /*[in]*/ BSTR value ) = 0;
      virtual HRESULT __stdcall raw_TGetProperty (
        /*[in]*/ BSTR target,
        /*[in]*/ int property,
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall raw_TCallFrame (
        /*[in]*/ BSTR target,
        /*[in]*/ int FrameNum ) = 0;
      virtual HRESULT __stdcall raw_TCallLabel (
        /*[in]*/ BSTR target,
        /*[in]*/ BSTR label ) = 0;
      virtual HRESULT __stdcall raw_TSetPropertyNum (
        /*[in]*/ BSTR target,
        /*[in]*/ int property,
        /*[in]*/ double value ) = 0;
      virtual HRESULT __stdcall raw_TGetPropertyNum (
        /*[in]*/ BSTR target,
        /*[in]*/ int property,
        /*[out,retval]*/ double * pVal ) = 0;
      virtual HRESULT __stdcall raw_TGetPropertyAsNumber (
        /*[in]*/ BSTR target,
        /*[in]*/ int property,
        /*[out,retval]*/ double * pVal ) = 0;
      virtual HRESULT __stdcall get_SWRemote (
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall put_SWRemote (
        /*[in]*/ BSTR pVal ) = 0;
      virtual HRESULT __stdcall get_FlashVars (
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall put_FlashVars (
        /*[in]*/ BSTR pVal ) = 0;
      virtual HRESULT __stdcall get_AllowScriptAccess (
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall put_AllowScriptAccess (
        /*[in]*/ BSTR pVal ) = 0;
      virtual HRESULT __stdcall get_MovieData (
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall put_MovieData (
        /*[in]*/ BSTR pVal ) = 0;
      virtual HRESULT __stdcall get_InlineData (
        /*[out,retval]*/ IUnknown * * ppIUnknown ) = 0;
      virtual HRESULT __stdcall put_InlineData (
        /*[in]*/ IUnknown * ppIUnknown ) = 0;
      virtual HRESULT __stdcall get_SeamlessTabbing (
        /*[out,retval]*/ VARIANT_BOOL * pVal ) = 0;
      virtual HRESULT __stdcall put_SeamlessTabbing (
        /*[in]*/ VARIANT_BOOL pVal ) = 0;
      virtual HRESULT __stdcall raw_EnforceLocalSecurity ( ) = 0;
      virtual HRESULT __stdcall get_Profile (
        /*[out,retval]*/ VARIANT_BOOL * pVal ) = 0;
      virtual HRESULT __stdcall put_Profile (
        /*[in]*/ VARIANT_BOOL pVal ) = 0;
      virtual HRESULT __stdcall get_ProfileAddress (
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall put_ProfileAddress (
        /*[in]*/ BSTR pVal ) = 0;
      virtual HRESULT __stdcall get_ProfilePort (
        /*[out,retval]*/ long * pVal ) = 0;
      virtual HRESULT __stdcall put_ProfilePort (
        /*[in]*/ long pVal ) = 0;
      virtual HRESULT __stdcall raw_CallFunction (
        /*[in]*/ BSTR request,
        /*[out,retval]*/ BSTR * response ) = 0;
      virtual HRESULT __stdcall raw_SetReturnValue (
        /*[in]*/ BSTR returnValue ) = 0;
      virtual HRESULT __stdcall raw_DisableLocalSecurity ( ) = 0;
      virtual HRESULT __stdcall get_AllowNetworking (
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall put_AllowNetworking (
        /*[in]*/ BSTR pVal ) = 0;
      virtual HRESULT __stdcall get_AllowFullScreen (
        /*[out,retval]*/ BSTR * pVal ) = 0;
      virtual HRESULT __stdcall put_AllowFullScreen (
        /*[in]*/ BSTR pVal ) = 0;
};

struct __declspec(uuid("d27cdb6d-ae6d-11cf-96b8-444553540000"))
_IShockwaveFlashEvents : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    // Methods:
    HRESULT OnReadyStateChange (
        long newState );
    HRESULT OnProgress (
        long percentDone );
    HRESULT FSCommand (
        _bstr_t command,
        _bstr_t args );
    HRESULT FlashCall (
        _bstr_t request );
};

struct __declspec(uuid("d27cdb6e-ae6d-11cf-96b8-444553540000"))
ShockwaveFlash;
    // [ default ] interface IShockwaveFlash
    // [ default, source ] dispinterface _IShockwaveFlashEvents

struct __declspec(uuid("1171a62f-05d2-11d1-83fc-00a0c9089c5a"))
FlashProp;
    // [ default ] interface IUnknown

struct __declspec(uuid("d27cdb70-ae6d-11cf-96b8-444553540000"))
IFlashFactory : IUnknown
{};

struct __declspec(uuid("6d5140c1-7436-11ce-8034-00aa006009fa"))
IServiceProvider : IUnknown
{
    //
    // Wrapper methods for error-handling
    //

    HRESULT RemoteQueryService (
        GUID * guidService,
        GUID * riid,
        IUnknown * * ppvObject );

    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall raw_RemoteQueryService (
        /*[in]*/ GUID * guidService,
        /*[in]*/ GUID * riid,
        /*[out]*/ IUnknown * * ppvObject ) = 0;
};

struct __declspec(uuid("a6ef9860-c720-11d0-9337-00a0c90dcaa9"))
IDispatchEx : IDispatch
{
    //
    // Wrapper methods for error-handling
    //

    HRESULT GetDispID (
        _bstr_t bstrName,
        unsigned long grfdex,
        long * pid );
    HRESULT RemoteInvokeEx (
        long id,
        unsigned long lcid,
        unsigned long dwFlags,
        struct DISPPARAMS * pdp,
        VARIANT * pvarRes,
        struct EXCEPINFO * pei,
        struct IServiceProvider * pspCaller,
        unsigned int cvarRefArg,
        unsigned int * rgiRefArg,
        VARIANT * rgvarRefArg );
    HRESULT DeleteMemberByName (
        _bstr_t bstrName,
        unsigned long grfdex );
    HRESULT DeleteMemberByDispID (
        long id );
    HRESULT GetMemberProperties (
        long id,
        unsigned long grfdexFetch,
        unsigned long * pgrfdex );
    HRESULT GetMemberName (
        long id,
        BSTR * pbstrName );
    HRESULT GetNextDispID (
        unsigned long grfdex,
        long id,
        long * pid );
    HRESULT GetNameSpaceParent (
        IUnknown * * ppunk );

    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall raw_GetDispID (
        /*[in]*/ BSTR bstrName,
        /*[in]*/ unsigned long grfdex,
        /*[out]*/ long * pid ) = 0;
      virtual HRESULT __stdcall raw_RemoteInvokeEx (
        /*[in]*/ long id,
        /*[in]*/ unsigned long lcid,
        /*[in]*/ unsigned long dwFlags,
        /*[in]*/ struct DISPPARAMS * pdp,
        /*[out]*/ VARIANT * pvarRes,
        /*[out]*/ struct EXCEPINFO * pei,
        /*[in]*/ struct IServiceProvider * pspCaller,
        /*[in]*/ unsigned int cvarRefArg,
        /*[in]*/ unsigned int * rgiRefArg,
        /*[in,out]*/ VARIANT * rgvarRefArg ) = 0;
      virtual HRESULT __stdcall raw_DeleteMemberByName (
        /*[in]*/ BSTR bstrName,
        /*[in]*/ unsigned long grfdex ) = 0;
      virtual HRESULT __stdcall raw_DeleteMemberByDispID (
        /*[in]*/ long id ) = 0;
      virtual HRESULT __stdcall raw_GetMemberProperties (
        /*[in]*/ long id,
        /*[in]*/ unsigned long grfdexFetch,
        /*[out]*/ unsigned long * pgrfdex ) = 0;
      virtual HRESULT __stdcall raw_GetMemberName (
        /*[in]*/ long id,
        /*[out]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall raw_GetNextDispID (
        /*[in]*/ unsigned long grfdex,
        /*[in]*/ long id,
        /*[out]*/ long * pid ) = 0;
      virtual HRESULT __stdcall raw_GetNameSpaceParent (
        /*[out]*/ IUnknown * * ppunk ) = 0;
};

struct __declspec(uuid("d27cdb72-ae6d-11cf-96b8-444553540000"))
IFlashObjectInterface : IDispatchEx
{};

struct __declspec(uuid("d27cdb71-ae6d-11cf-96b8-444553540000"))
FlashObjectInterface;
    // [ default ] interface IFlashObjectInterface

//
// Named GUID constants initializations
//

extern "C" const GUID __declspec(selectany) LIBID_ShockwaveFlashObjects =
    {0xd27cdb6b,0xae6d,0x11cf,{0x96,0xb8,0x44,0x45,0x53,0x54,0x00,0x00}};
extern "C" const GUID __declspec(selectany) IID_IShockwaveFlash =
    {0xd27cdb6c,0xae6d,0x11cf,{0x96,0xb8,0x44,0x45,0x53,0x54,0x00,0x00}};
extern "C" const GUID __declspec(selectany) DIID__IShockwaveFlashEvents =
    {0xd27cdb6d,0xae6d,0x11cf,{0x96,0xb8,0x44,0x45,0x53,0x54,0x00,0x00}};
extern "C" const GUID __declspec(selectany) CLSID_ShockwaveFlash =
    {0xd27cdb6e,0xae6d,0x11cf,{0x96,0xb8,0x44,0x45,0x53,0x54,0x00,0x00}};
extern "C" const GUID __declspec(selectany) CLSID_FlashProp =
    {0x1171a62f,0x05d2,0x11d1,{0x83,0xfc,0x00,0xa0,0xc9,0x08,0x9c,0x5a}};
extern "C" const GUID __declspec(selectany) IID_IFlashFactory =
    {0xd27cdb70,0xae6d,0x11cf,{0x96,0xb8,0x44,0x45,0x53,0x54,0x00,0x00}};
extern "C" const GUID __declspec(selectany) IID_IServiceProvider =
    {0x6d5140c1,0x7436,0x11ce,{0x80,0x34,0x00,0xaa,0x00,0x60,0x09,0xfa}};
extern "C" const GUID __declspec(selectany) IID_IDispatchEx =
    {0xa6ef9860,0xc720,0x11d0,{0x93,0x37,0x00,0xa0,0xc9,0x0d,0xca,0xa9}};
extern "C" const GUID __declspec(selectany) IID_IFlashObjectInterface =
    {0xd27cdb72,0xae6d,0x11cf,{0x96,0xb8,0x44,0x45,0x53,0x54,0x00,0x00}};
extern "C" const GUID __declspec(selectany) CLSID_FlashObjectInterface =
    {0xd27cdb71,0xae6d,0x11cf,{0x96,0xb8,0x44,0x45,0x53,0x54,0x00,0x00}};

} // namespace ShockwaveFlashObjects

#pragma pack(pop)





/// Different types of arguments in a function call
enum ArgumentType
{       /// The argument does not have a value
	AT_NULL,
	/// The argument is a number
	AT_NUMERIC,
	/// The argument is a boolean
	AT_BOOLEAN,
	/// The argument is a string
	AT_STRING
};

/// This class provides an interface to pass arguments between ActionScript and C++
class Argument
{
public:
	/// Create an argument of type AT_NULL
	Argument()
		:type(AT_NULL)
	{}

	/// Copy constructor
	Argument(const Argument& other)
		:type(other.type),value(other.value),stringValue(other.stringValue)

	{}

	/// Create an argument of type AT_NUMERIC
	Argument(int value)
		:type(AT_NUMERIC)
	{
		this->value.numeric = (double)value;
	}

	/// Create an argument of type AT_NUMERIC
	Argument(double value)		
		:type(AT_NUMERIC)
	{
		this->value.numeric = value;
	}
	/// Create an argument of type AT_BOOLEAN
	Argument(bool value)
		:type(AT_BOOLEAN)
	{
		this->value.boolean = value;
	}

	/// Create an argument of type AT_STRING
	Argument(const CString& value)
		:type(AT_STRING)
	{
		stringValue = value;
	}

	/// Get argument value as a double
	operator double() const
	{
		switch(type)
		{
		case AT_BOOLEAN:
			return value.boolean ? 1.0f : 0.0f;
		case AT_NUMERIC:
			return value.numeric;
		case AT_STRING:
			return ::_wtof(stringValue);
		default:
			return 0.0f;
		}
	}

	/// Get argument value as a int
	operator int() const
	{
		switch(type)
		{
		case AT_BOOLEAN:
			return value.boolean ? 1 : 0;
		case AT_NUMERIC:
			return (int)value.numeric;
		case AT_STRING:
			return (int)::_wtof(stringValue);
		default:
			return 0;
		}
	}

	/// Get argument value as a bool
	operator bool() const
	{
		switch(type)
		{
		case AT_BOOLEAN:
			return value.boolean;
		case AT_NUMERIC:
			return value.numeric != 0.f;
		case AT_STRING:
			return stringValue == L"true";
		default:
			return false;
		}
	}

	/// Get argument value as a string
	operator CString() const
	{
		CString strVal;
		switch(type)
		{
		case AT_BOOLEAN:
			if (value.boolean) strVal = L"true";
			else strVal = L"false";
			break;
		case AT_NUMERIC:
			strVal.Format(L"%f", value.numeric);
			break;
		default:
			strVal = stringValue;
		}
		return strVal;
	}

	/// Get the type of argument
	ArgumentType getType() const {return type;}

	/// An argument of type AT_NULL
	static Argument Null;

private:
	mutable union
	{
		double numeric;
		bool boolean;
	}value;
	CString stringValue;
	ArgumentType type;
};


class ArgumentList
	: public CArray<Argument>
{
public:
	ArgumentList& ArgumentList::operator()(const Argument& arg)
	{
		Add(arg);
		return *this;
	}

	ArgumentList()
	{}

	ArgumentList(const Argument& firstArgument)
	{
		Add(firstArgument);
	}
};

/////////////////////////////////////////////////////////////////////////////
// CShockwaveFlashSite class

#define S_QUICKACTIVATED S_FALSE


class CShockwaveFlashSite : public COleControlSite
{
protected:
	//DECLARE_DYNAMIC(CShockwaveFlashSite)

public:
	CShockwaveFlashSite(COleControlContainer* pContainer);

	~CShockwaveFlashSite();

protected:

	HRESULT CoCreateFlashAxInstance(REFCLSID clsid, LPUNKNOWN pUnkOuter, DWORD dwClsCtx, REFIID iid, LPVOID* ppv);	

	virtual	HRESULT CreateOrLoad(REFCLSID clsid, CFile* pFile, BOOL bStorage, BSTR bstrLicKey);

public:

	BOOL IsCreateFromOcx() const { return m_bCreateFromOcx; }

private:
	HMODULE	m_FlashOcxHMODULE;
	BOOL	m_bCreateFromOcx;
};

#define CREATE_SHOCKWAVEFLASH_SITE() \
	virtual BOOL CreateControlSite(COleControlContainer* pContainer, COleControlSite** ppSite, UINT /* nID */, REFCLSID clsid) \
	{ \
		if(clsid == ShockwaveFlashObjects::CLSID_ShockwaveFlash) { *ppSite = new CShockwaveFlashSite(pContainer); } \
		else {*ppSite = NULL;} \
		return TRUE; \
	} \

/////////////////////////////////////////////////////////////////////////////
// CShockwaveFlash wrapper class

class CShockwaveFlash : public CWnd
{
private:
	//ShockwaveFlashObjects::IShockwaveFlash* pShockwaveFlashObject;
	BOOL m_bCallFlashInterface;

	BOOL m_bEasyMove;

protected:
	DECLARE_DYNCREATE(CShockwaveFlash)

public:

	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{
		m_bCallFlashInterface = FALSE;

		m_bEasyMove = FALSE;

		BOOL bCreate = CreateControl(ShockwaveFlashObjects::CLSID_ShockwaveFlash, lpszWindowName, dwStyle, rect, pParentWnd, nID);

		COleControlSite* pSite = GetControlSite();

		CShockwaveFlashSite* pFlashSite = dynamic_cast<CShockwaveFlashSite*>(pSite);
		if(pFlashSite)
		{
			m_bCallFlashInterface = pFlashSite->IsCreateFromOcx();
		}

		return bCreate;
	}

	BOOL ActivateEasyMove(BOOL bActivate)
	{
		m_bEasyMove = bActivate;

		return m_bEasyMove;
	}

public:
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFlashPlayerDlg)
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	//}}AFX_VIRTUAL
	DECLARE_MESSAGE_MAP()

	afx_msg LRESULT OnNcHitTest(CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);

// Attributes
public:

	ShockwaveFlashObjects::IShockwaveFlash* GetFlashInterface()
	{
		ShockwaveFlashObjects::IShockwaveFlash* pFlash = NULL;

		if(m_bCallFlashInterface == TRUE)
		{
			LPUNKNOWN lpUnknown = GetControlUnknown();
			if(lpUnknown)
			{
				lpUnknown->QueryInterface<ShockwaveFlashObjects::IShockwaveFlash>(&pFlash);
			}
		}

		return pFlash;
	}

	void ReleaseFlashInterface(ShockwaveFlashObjects::IShockwaveFlash* pFlash)
	{
		if(pFlash) pFlash->Release();
	}

// Operations
public:
	// IShockwaveFlash

	HRESULT get_ReadyState(long& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->get_ReadyState(&result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(DISPID_READYSTATE, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_TotalFrames(long& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->get_TotalFrames(&result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x7c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_Playing(BOOL& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			VARIANT_BOOL vbResult = 0;
			hr = pFlash->get_Playing(&vbResult);
			result = vbResult;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x7d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_Playing(BOOL newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_Playing(newValue);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BOOL ;
			InvokeHelper(0x7d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_Quality(int& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->get_Quality(&result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_Quality(int newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_Quality(newValue);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_I4 ;
			InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_ScaleMode(int& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->get_ScaleMode(&result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x78, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_ScaleMode(long newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_ScaleMode(newValue);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_I4 ;
			InvokeHelper(0x78, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;		
	}
	HRESULT get_AlignMode(int& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->get_AlignMode(&result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x79, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_AlignMode(int newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_AlignMode(newValue);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_I4 ;
			InvokeHelper(0x79, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_BackgroundColor(long& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->get_BackgroundColor(&result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_BackgroundColor(long newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_BackgroundColor(newValue);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{			
			static BYTE parms[] = VTS_I4 ;
			InvokeHelper(0x7b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_Loop(BOOL& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			VARIANT_BOOL vbResult = 0;
			hr = pFlash->get_Loop(&vbResult);
			result = vbResult;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_Loop(BOOL newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_Loop(newValue);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BOOL ;
			InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;		
	}
	HRESULT get_Movie(CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrMovie = 0;
			hr = pFlash->get_Movie(&bstrMovie);
			result = bstrMovie;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_Movie(LPCTSTR newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_Movie(_bstr_t(newValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0x66, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_FrameNum(long& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->get_FrameNum(&result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x6b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_FrameNum(long newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_FrameNum(newValue);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_I4 ;
			InvokeHelper(0x6b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT SetZoomRect(long left, long top, long right, long bottom)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_SetZoomRect(left, top, right, bottom);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
			InvokeHelper(0x6d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, left, top, right, bottom);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT Zoom(int factor)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_Zoom(factor);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_I4 ;
			InvokeHelper(0x76, DISPATCH_METHOD, VT_EMPTY, NULL, parms, factor);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT Pan(long x, long y, int mode)
	{		
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_Pan(x, y, mode);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
			InvokeHelper(0x77, DISPATCH_METHOD, VT_EMPTY, NULL, parms, x, y, mode);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT Play()
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_Play();
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x70, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT Stop()
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_Stop();
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x71, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT Back()
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_Back();
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x72, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT Forward()
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_Forward();
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x73, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT Rewind()
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_Rewind();
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x74, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT StopPlay()
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_StopPlay();
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x7e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT GotoFrame(long FrameNum)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_GotoFrame(FrameNum);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_I4 ;
			InvokeHelper(0x7f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, FrameNum);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT CurrentFrame(long& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_CurrentFrame(&result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x80, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT IsPlaying(BOOL& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			VARIANT_BOOL vbResult = 0;
			hr = pFlash->raw_IsPlaying(&vbResult);
			result = vbResult;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x81, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT PercentLoaded(long& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_PercentLoaded(&result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x82, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT FrameLoaded(long FrameNum, BOOL& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			VARIANT_BOOL vbResult = 0;
			hr = pFlash->raw_FrameLoaded(FrameNum, &vbResult);
			result = vbResult;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{			
			static BYTE parms[] = VTS_I4 ;
			InvokeHelper(0x83, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FrameNum);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT FlashVersion(long& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_FlashVersion(&result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{			
			InvokeHelper(0x84, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_WMode(CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0;
			hr = pFlash->get_Movie(&bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x85, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_WMode(LPCTSTR newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			pFlash->put_WMode(_bstr_t(newValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0x85, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_SAlign(CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0;
			hr = pFlash->get_Movie(&bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x86, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_SAlign(LPCTSTR newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			pFlash->put_SAlign(_bstr_t(newValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0x86, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_Menu(BOOL& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			VARIANT_BOOL vbResult = 0;
			hr = pFlash->get_Menu(&vbResult);
			result = vbResult;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x87, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_Menu(BOOL newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			VARIANT_BOOL vbResult = newValue;
			hr = pFlash->put_Menu(vbResult);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BOOL ;
			InvokeHelper(0x87, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_Base(CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0;
			hr = pFlash->get_Base(&bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x88, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_Base(LPCTSTR newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			pFlash->put_Base(_bstr_t(newValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0x88, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_Scale(CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0;
			hr = pFlash->get_Scale(&bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x89, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_Scale(LPCTSTR newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			pFlash->put_Scale(_bstr_t(newValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0x89, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_DeviceFont(BOOL& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			VARIANT_BOOL vbResult = 0;
			hr = pFlash->get_DeviceFont(&vbResult);
			result = vbResult;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x8a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	LRESULT put_DeviceFont(BOOL newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			VARIANT_BOOL vbResult = newValue;
			hr = pFlash->put_DeviceFont(vbResult);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BOOL ;
			InvokeHelper(0x8a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	LRESULT get_EmbedMovie(BOOL& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			VARIANT_BOOL vbResult = 0;
			hr = pFlash->get_EmbedMovie(&vbResult);
			result = vbResult;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x8b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	LRESULT put_EmbedMovie(BOOL newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			VARIANT_BOOL vbResult = newValue;
			hr = pFlash->put_EmbedMovie(vbResult);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BOOL ;
			InvokeHelper(0x8b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_BGColor(CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0;
			hr = pFlash->get_BGColor(&bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x8c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_BGColor(LPCTSTR newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			pFlash->put_BGColor(_bstr_t(newValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0x8c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_Quality2(CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0;
			hr = pFlash->get_Quality2(&bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x8d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_Quality2(LPCTSTR newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			pFlash->put_Quality2(_bstr_t(newValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0x8d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT LoadMovie(int layer, LPCTSTR url)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_LoadMovie(layer, _bstr_t(url));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_I4 VTS_BSTR ;
			InvokeHelper(0x8e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, layer, url);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT TGotoFrame(LPCTSTR target, long FrameNum)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_TGotoFrame(_bstr_t(target), FrameNum);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR VTS_I4 ;
			InvokeHelper(0x8f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, target, FrameNum);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT TGotoLabel(LPCTSTR target, LPCTSTR label)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_TGotoLabel(_bstr_t(target), _bstr_t(label));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR VTS_BSTR ;
			InvokeHelper(0x90, DISPATCH_METHOD, VT_EMPTY, NULL, parms, target, label);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT TCurrentFrame(LPCTSTR target, long& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_TCurrentFrame(_bstr_t(target), &result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0x91, DISPATCH_METHOD, VT_I4, (void*)&result, parms, target);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT TCurrentLabel(LPCTSTR target, CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0; 
			hr = pFlash->raw_TCurrentLabel(_bstr_t(target), &bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0x92, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, target);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT TPlay(LPCTSTR target)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_TPlay(_bstr_t(target));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0x93, DISPATCH_METHOD, VT_EMPTY, NULL, parms, target);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT TStopPlay(LPCTSTR target)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_TStopPlay(_bstr_t(target));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0x94, DISPATCH_METHOD, VT_EMPTY, NULL, parms, target);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT SetVariable(LPCTSTR name, LPCTSTR value)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_SetVariable(_bstr_t(name), _bstr_t(value));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR VTS_BSTR ;
			InvokeHelper(0x97, DISPATCH_METHOD, VT_EMPTY, NULL, parms, name, value);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT GetVariable(LPCTSTR name, CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0; 
			hr = pFlash->raw_GetVariable(_bstr_t(name), &bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0x98, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, name);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT TSetProperty(LPCTSTR target, int nproperty, LPCTSTR value)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_TSetProperty(_bstr_t(target), nproperty, _bstr_t(value));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR VTS_I4 VTS_BSTR ;
			InvokeHelper(0x99, DISPATCH_METHOD, VT_EMPTY, NULL, parms, target, nproperty, value);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT TGetProperty(LPCTSTR target, int nproperty, CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0; 
			hr = pFlash->raw_TGetProperty(_bstr_t(target), nproperty , &bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR VTS_I4 ;
			InvokeHelper(0x9a, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, target, nproperty);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT TCallFrame(LPCTSTR target, long FrameNum)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_TCallFrame(_bstr_t(target), FrameNum);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR VTS_I4 ;
			InvokeHelper(0x9b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, target, FrameNum);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT TCallLabel(LPCTSTR target, LPCTSTR label)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_TCallLabel(_bstr_t(target), _bstr_t(label));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR VTS_BSTR ;
			InvokeHelper(0x9c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, target, label);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT TSetPropertyNum(LPCTSTR target, int nproperty, double value)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_TSetPropertyNum(_bstr_t(target), nproperty, value);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR VTS_I4 VTS_R8 ;
			InvokeHelper(0x9d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, target, nproperty, value);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT TGetPropertyNum(LPCTSTR target, int nproperty, double& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_TGetPropertyNum(_bstr_t(target), nproperty, &result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR VTS_I4 ;
			InvokeHelper(0x9e, DISPATCH_METHOD, VT_R8, (void*)&result, parms, target, nproperty);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT TGetPropertyAsNumber(LPCTSTR target, int nproperty, double& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_TGetPropertyAsNumber(_bstr_t(target), nproperty, &result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR VTS_I4 ;
			InvokeHelper(0xac, DISPATCH_METHOD, VT_R8, (void*)&result, parms, target, nproperty);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_SWRemote(CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0; 
			hr = pFlash->get_SWRemote(&bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0x9f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_SWRemote(LPCTSTR newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_SWRemote(_bstr_t(newValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0x9f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_FlashVars(CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0; 
			hr = pFlash->get_FlashVars(&bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_FlashVars(LPCTSTR newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_FlashVars(_bstr_t(newValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0xaa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_AllowScriptAccess(CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0; 
			hr = pFlash->get_AllowScriptAccess(&bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0xab, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_AllowScriptAccess(LPCTSTR newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_AllowScriptAccess(_bstr_t(newValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0xab, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_MovieData(CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0; 
			hr = pFlash->get_MovieData(&bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0xbe, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_MovieData(LPCTSTR newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_MovieData(_bstr_t(newValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0xbe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	LRESULT get_InlineData(LPUNKNOWN& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->get_InlineData(&result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0xbf, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_InlineData(LPUNKNOWN newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_InlineData(newValue);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_UNKNOWN ;
			InvokeHelper(0xbf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_SeamlessTabbing(BOOL& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			VARIANT_BOOL vbResult = 0;
			hr = pFlash->get_SeamlessTabbing(&vbResult);
			result = vbResult;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0xc0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_SeamlessTabbing(BOOL newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			VARIANT_BOOL vbResult = newValue;
			hr = pFlash->put_SeamlessTabbing(vbResult);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BOOL ;
			InvokeHelper(0xc0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT EnforceLocalSecurity()
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_EnforceLocalSecurity();
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0xc1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_Profile(BOOL& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			VARIANT_BOOL vbResult = 0;
			hr = pFlash->get_Profile(&vbResult);
			result = vbResult;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0xc2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_Profile(BOOL newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			VARIANT_BOOL vbResult = newValue;
			hr = pFlash->put_Profile(vbResult);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BOOL ;
			InvokeHelper(0xc2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_ProfileAddress(CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0; 
			hr = pFlash->get_ProfileAddress(&bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0xc3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_ProfileAddress(LPCTSTR newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_ProfileAddress(_bstr_t(newValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0xc3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_ProfilePort(long& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->get_ProfilePort(&result);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0xc4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_ProfilePort(long newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_ProfilePort(newValue);
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_I4 ;
			InvokeHelper(0xc4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT CallFunction(LPCTSTR request, CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0; 
			hr = pFlash->raw_CallFunction(_bstr_t(request), &bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0xc6, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, request);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT SetReturnValue(LPCTSTR returnValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_SetReturnValue(_bstr_t(returnValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0xc7, DISPATCH_METHOD, VT_EMPTY, NULL, parms, returnValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT DisableLocalSecurity()
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->raw_DisableLocalSecurity();
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0xc8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_AllowNetworking(CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0; 
			hr = pFlash->get_AllowNetworking(&bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_AllowNetworking(LPCTSTR newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_AllowNetworking(_bstr_t(newValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT get_AllowFullScreen(CString& result)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			BSTR bstrValue = 0; 
			hr = pFlash->get_AllowFullScreen(&bstrValue);
			result = bstrValue;
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
	HRESULT put_AllowFullScreen(LPCTSTR newValue)
	{
		HRESULT hr = S_FALSE;

		ShockwaveFlashObjects::IShockwaveFlash* pFlash = GetFlashInterface();
		if(pFlash)
		{
			hr = pFlash->put_AllowFullScreen(_bstr_t(newValue));
			ReleaseFlashInterface(pFlash);
			return hr;
		}
		TRY
		{
			static BYTE parms[] = VTS_BSTR ;
			InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
		}
		CATCH_ALL(e)
		{
			hr = E_FAIL;
		}
		END_CATCH_ALL;

		return hr;
	}
public:

	static CString serializeValue(const Argument& value)
	{
		switch(value.getType())
		{
		case AT_NULL:
			return L"<null/>";
		case AT_BOOLEAN:
			return ((bool)value)? L"<true/>" : L"<false/>";
		case AT_NUMERIC:
			{
				return L"<number>" + (CString)value + L"</number>";
			}
		case AT_STRING:
			{
				CString stringVal = (CString)value;

				stringVal.Replace(L"&", L"&amp;");
				stringVal.Replace(L"\"", L"&quot;");
				stringVal.Replace(L"'", L"&apos;");
				stringVal.Replace(L"<", L"&lt;");
				stringVal.Replace(L">", L"&gt;");

				return L"<string>" + stringVal + L"</string>";
			}
		}
		return L"<null/>";
	}

	static Argument deserializeValue(const CString& valueStr)
	{
		if(valueStr == L"<null/>")
			return Argument::Null;
		else if(valueStr == L"<true/>")
			return true;
		else if(valueStr == L"<false/>")
			return false;

		if(valueStr.Mid(0, 8) == L"<string>")
		{
			 int indexB = valueStr.Find(L"</string>", 8);
			 CString stringVal = valueStr.Mid(8, indexB - 8);
			 stringVal.Replace(L"&quot;", L"\"");
			 stringVal.Replace(L"&apos;", L"'");
			 stringVal.Replace(L"&lt;", L"<");
			 stringVal.Replace(L"&gt;", L">");
			 stringVal.Replace(L"&amp;", L"&");
			 return stringVal;
		}
		else if(valueStr.Mid(0, 8) == L"<number>")
		{
			double numValue = 0.0f;
			int indexB = valueStr.Find(L"</number>", 8);
			numValue = ::_wtof(valueStr.Mid(8, indexB - 8));
			return numValue;
		}

		return Argument::Null;
	}

	static void serializeInvocation(const CString& funcName, const ArgumentList& args, CString& result)
	{
		result += L"<invoke name=\"" + funcName + L"\" returntype=\"xml\">";

		if(args.GetCount() > 0)
		{
			result += L"<arguments>";
			for (INT_PTR i=0; i<args.GetCount(); i++)
			{
				result += serializeValue(args[i]);
			}
			result += L"</arguments>";
		}

		result += L"</invoke>";
	}

	static bool deserializeInvocation(const CString& xmlString, CString& funcName, ArgumentList& args)
	{
		int indexA = 0;
		int indexB = 0;

		if((indexA = xmlString.Find(L"<invoke name=\"")) < 0)
			return false;

		if((indexB = xmlString.Find(L"\"", indexA + 14)) < 0)
			return false;

		funcName = xmlString.Mid(indexA + 14, indexB - (indexA + 14));
		args.RemoveAll();

		if((indexA = xmlString.Find(L"<arguments>", indexB)) < 0)
			return true;

		indexA += 11;
		CString argString(xmlString.Mid(indexA, xmlString.Find(L"</arguments>", indexA) - indexA));

		for(indexA = 0, indexB = 0; true;)
		{
			if((indexA = argString.Find(L"<", indexB)) < 0)
				break;

			if((indexB = argString.Find(L">", indexA)) < 0)
				break;

			if(argString[indexB-1] != L'/')
			{
				if((indexB = argString.Find(L">", indexB + 1)) < 0)
					break;
			}

			args.Add(deserializeValue(argString.Mid(indexA, indexB + 1 - indexA)));
		}

		return true;
	}
};


#endif // !defined(AFX_SHOCKWAVEFLASH_H__79EABBED_5C30_433A_AD5A_478E560B3FD8__INCLUDED_)
