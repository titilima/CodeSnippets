#ifndef WEBBROWSER2_H
#define WEBBROWSER2_H

#pragma once

class CWebBrowser2 : public IWebBrowser2
{
public:
    // IUnknown
    STDMETHOD(QueryInterface)(REFIID riid, void **ppvObject);
    STDMETHOD_(ULONG, AddRef)(void);
    STDMETHOD_(ULONG, Release)(void);
    // IDispatch
    STDMETHOD(GetTypeInfoCount)(UINT *pctinfo);
    STDMETHOD(GetTypeInfo)(UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
    STDMETHOD(GetIDsOfNames)(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid,
        DISPID *rgDispId);
    STDMETHOD(Invoke)(DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags,
        DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
    // IWebBrowser
    STDMETHOD(GoBack)(void);
    STDMETHOD(GoForward)(void);
    STDMETHOD(GoHome)(void);
    STDMETHOD(GoSearch)(void);
    STDMETHOD(Navigate)(BSTR URL, VARIANT *Flags, VARIANT *TargetFrameName, VARIANT *PostData,
        VARIANT *Headers);
    STDMETHOD(Refresh)(void);
    STDMETHOD(Refresh2)(VARIANT *Level);
    STDMETHOD(Stop)(void);
    STDMETHOD(get_Application)(IDispatch **ppDisp);
    STDMETHOD(get_Parent)(IDispatch **ppDisp);
    STDMETHOD(get_Container)(IDispatch **ppDisp);
    STDMETHOD(get_Document)(IDispatch **ppDisp);
    STDMETHOD(get_TopLevelContainer)(VARIANT_BOOL *pBool);
    STDMETHOD(get_Type)(BSTR *Type);
    STDMETHOD(get_Left)(long *pl);
    STDMETHOD(put_Left)(long Left);
    STDMETHOD(get_Top)(long *pl);
    STDMETHOD(put_Top)(long Top);
    STDMETHOD(get_Width)(long *pl);
    STDMETHOD(put_Width)(long Width);
    STDMETHOD(get_Height)(long *pl);
    STDMETHOD(put_Height)(long Height);
    STDMETHOD(get_LocationName)(BSTR *LocationName);
    STDMETHOD(get_LocationURL)(BSTR *LocationURL);
    STDMETHOD(get_Busy)(VARIANT_BOOL *pBool);
    // IWebBrowserApp
    STDMETHOD(Quit)(void);
    STDMETHOD(ClientToWindow)(int *pcx, int *pcy);
    STDMETHOD(PutProperty)(BSTR Property, VARIANT vtValue);
    STDMETHOD(GetProperty)(BSTR Property, VARIANT *pvtValue);
    STDMETHOD(get_Name)(BSTR *Name);
    STDMETHOD(get_HWND)(SHANDLE_PTR *pHWND);
    STDMETHOD(get_FullName)(BSTR *FullName);
    STDMETHOD(get_Path)(BSTR *Path);
    STDMETHOD(get_Visible)(VARIANT_BOOL *pBool);
    STDMETHOD(put_Visible)(VARIANT_BOOL Value);
    STDMETHOD(get_StatusBar)(VARIANT_BOOL *pBool);
    STDMETHOD(put_StatusBar)(VARIANT_BOOL Value);
    STDMETHOD(get_StatusText)(BSTR *StatusText);
    STDMETHOD(put_StatusText)(BSTR StatusText);
    STDMETHOD(get_ToolBar)(int *Value);
    STDMETHOD(put_ToolBar)(int Value);
    STDMETHOD(get_MenuBar)(VARIANT_BOOL *Value);
    STDMETHOD(put_MenuBar)(VARIANT_BOOL Value);
    STDMETHOD(get_FullScreen)(VARIANT_BOOL *pbFullScreen);
    STDMETHOD(put_FullScreen)(VARIANT_BOOL bFullScreen);
    // IWebBrowser2
    STDMETHOD(Navigate2)(VARIANT *URL, VARIANT *Flags, VARIANT *TargetFrameName, VARIANT *PostData,
        VARIANT *Headers);
    STDMETHOD(QueryStatusWB)(OLECMDID cmdID, OLECMDF *pcmdf);
    STDMETHOD(ExecWB)(OLECMDID cmdID, OLECMDEXECOPT cmdexecopt, VARIANT *pvaIn, VARIANT *pvaOut);
    STDMETHOD(ShowBrowserBar)(VARIANT *pvaClsid, VARIANT *pvarShow, VARIANT *pvarSize);
    STDMETHOD(get_ReadyState)(READYSTATE *plReadyState);
    STDMETHOD(get_Offline)(VARIANT_BOOL *pbOffline);
    STDMETHOD(put_Offline)(VARIANT_BOOL bOffline);
    STDMETHOD(get_Silent)(VARIANT_BOOL *pbSilent);
    STDMETHOD(put_Silent)(VARIANT_BOOL bSilent);
    STDMETHOD(get_RegisterAsBrowser)(VARIANT_BOOL *pbRegister);
    STDMETHOD(put_RegisterAsBrowser)(VARIANT_BOOL bRegister);
    STDMETHOD(get_RegisterAsDropTarget)(VARIANT_BOOL *pbRegister);
    STDMETHOD(put_RegisterAsDropTarget)(VARIANT_BOOL bRegister);
    STDMETHOD(get_TheaterMode)(VARIANT_BOOL *pbRegister);
    STDMETHOD(put_TheaterMode)(VARIANT_BOOL bRegister);
    STDMETHOD(get_AddressBar)(VARIANT_BOOL *Value);
    STDMETHOD(put_AddressBar)(VARIANT_BOOL Value);
    STDMETHOD(get_Resizable)(VARIANT_BOOL *Value);
    STDMETHOD(put_Resizable)(VARIANT_BOOL Value);
};

#endif // WEBBROWSER2_H
