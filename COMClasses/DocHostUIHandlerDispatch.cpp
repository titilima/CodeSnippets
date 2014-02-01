#include "DocHostUIHandlerDispatch.h"

// IUnknown

STDMETHODIMP CDocHostUIHandlerDispatch::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CDocHostUIHandlerDispatch::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) CDocHostUIHandlerDispatch::Release(void)
{
    return 1;
}

// IDispatch

STDMETHODIMP CDocHostUIHandlerDispatch::GetTypeInfoCount(UINT *pctinfo)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::GetIDsOfNames(
    REFIID riid,
    LPOLESTR *rgszNames, UINT cNames,
    LCID lcid,
    DISPID *rgDispId)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::Invoke(
    DISPID dispIdMember,
    REFIID riid,
    LCID lcid,
    WORD wFlags,
    DISPPARAMS *pDispParams,
    VARIANT *pVarResult,
    EXCEPINFO *pExcepInfo,
    UINT *puArgErr)
{
    return E_NOTIMPL;
}

// IDocHostUIHandlerDispatch

STDMETHODIMP CDocHostUIHandlerDispatch::ShowContextMenu(
    DWORD dwID,
    DWORD x, DWORD y,
    IUnknown* pcmdtReserved,
    IDispatch* pdispReserved,
    HRESULT* dwRetVal)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::GetHostInfo(PDWORD pdwFlags, PDWORD pdwDoubleClick)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::ShowUI(
    DWORD dwID,
    IUnknown* pActiveObject,
    IUnknown* pCommandTarget,
    IUnknown* pFrame,
    IUnknown* pDoc,
    HRESULT* dwRetVal)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::HideUI(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::UpdateUI(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::EnableModeless(VARIANT_BOOL fEnable)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::OnDocWindowActivate(VARIANT_BOOL fActivate)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::OnFrameWindowActivate(VARIANT_BOOL fActivate)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::ResizeBorder(
    long left, long top, long right, long bottom,
    IUnknown* pUIWindow,
    VARIANT_BOOL fFrameWindow)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::TranslateAccelerator(
    DWORD_PTR hWnd,
    DWORD nMessage,
    DWORD_PTR wParam,
    DWORD_PTR lParam,
    BSTR bstrGuidCmdGroup,
    DWORD nCmdID,
    HRESULT* dwRetVal)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::GetOptionKeyPath(BSTR* pbstrKey, DWORD dw)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::GetDropTarget(IUnknown* pDropTarget, IUnknown** ppDropTarget)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::GetExternal(IDispatch** ppDispatch)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::TranslateUrl(DWORD dwTranslate, BSTR bstrURLIn, BSTR* pbstrURLOut)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandlerDispatch::FilterDataObject(IUnknown* pDO, IUnknown** ppDORet)
{
    return E_NOTIMPL;
}
