#ifndef WEBBROWSER_H
#define WEBBROWSER_H

#pragma once

class CWebBrowser : public IWebBrowser
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
};

#endif // WEBBROWSER_H
