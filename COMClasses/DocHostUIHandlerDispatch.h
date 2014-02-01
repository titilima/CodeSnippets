#ifndef DOCHOSTUIHANDLERDISPATCH_H
#define DOCHOSTUIHANDLERDISPATCH_H

#pragma once

class CDocHostUIHandlerDispatch : public IDocHostUIHandlerDispatch
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
    // IDocHostUIHandlerDispatch
    STDMETHOD(ShowContextMenu)(DWORD dwID, DWORD x, DWORD y, IUnknown* pcmdtReserved,
        IDispatch* pdispReserved, HRESULT* dwRetVal);
    STDMETHOD(GetHostInfo)(PDWORD pdwFlags, PDWORD pdwDoubleClick);
    STDMETHOD(ShowUI)(DWORD dwID, IUnknown* pActiveObject, IUnknown* pCommandTarget,
        IUnknown* pFrame, IUnknown* pDoc, HRESULT* dwRetVal);
    STDMETHOD(HideUI)(void);
    STDMETHOD(UpdateUI)(void);
    STDMETHOD(EnableModeless)(VARIANT_BOOL fEnable);
    STDMETHOD(OnDocWindowActivate)(VARIANT_BOOL fActivate);
    STDMETHOD(OnFrameWindowActivate)(VARIANT_BOOL fActivate);
    STDMETHOD(ResizeBorder)(long left, long top, long right, long bottom, IUnknown* pUIWindow,
        VARIANT_BOOL fFrameWindow);
    STDMETHOD(TranslateAccelerator)(DWORD_PTR hWnd, DWORD nMessage, DWORD_PTR wParam,
        DWORD_PTR lParam, BSTR bstrGuidCmdGroup, DWORD nCmdID, HRESULT* dwRetVal);
    STDMETHOD(GetOptionKeyPath)(BSTR* pbstrKey, DWORD dw);
    STDMETHOD(GetDropTarget)(IUnknown* pDropTarget, IUnknown** ppDropTarget);
    STDMETHOD(GetExternal)(IDispatch** ppDispatch);
    STDMETHOD(TranslateUrl)(DWORD dwTranslate, BSTR bstrURLIn, BSTR* pbstrURLOut);
    STDMETHOD(FilterDataObject)(IUnknown* pDO, IUnknown** ppDORet);
};

#endif // DOCHOSTUIHANDLERDISPATCH_H
