#include "DocHostUIHandler2.h"

// IUnknown

STDMETHODIMP CDocHostUIHandler2::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CDocHostUIHandler2::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) CDocHostUIHandler2::Release(void)
{
    return 1;
}

// IDocHostUIHandler

STDMETHODIMP CDocHostUIHandler2::ShowContextMenu(
    DWORD dwID,
    POINT *ppt,
    IUnknown *pcmdtReserved,
    IDispatch *pdispReserved)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandler2::GetHostInfo(DOCHOSTUIINFO *pInfo)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandler2::ShowUI(
    DWORD dwID,
    IOleInPlaceActiveObject *pActiveObject,
    IOleCommandTarget *pCommandTarget,
    IOleInPlaceFrame *pFrame,
    IOleInPlaceUIWindow *pDoc)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandler2::HideUI(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandler2::UpdateUI(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandler2::EnableModeless(BOOL fEnable)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandler2::OnDocWindowActivate(BOOL fActivate)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandler2::OnFrameWindowActivate(BOOL fActivate)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandler2::ResizeBorder(
    LPCRECT prcBorder,
    IOleInPlaceUIWindow *pUIWindow,
    BOOL fRameWindow)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandler2::TranslateAccelerator(
    LPMSG lpMsg,
    const GUID *pguidCmdGroup,
    DWORD nCmdID)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandler2::GetOptionKeyPath(LPOLESTR *pchKey, DWORD dw)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandler2::GetDropTarget(IDropTarget *pDropTarget, IDropTarget **ppDropTarget)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandler2::GetExternal(IDispatch **ppDispatch)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandler2::TranslateUrl(
    DWORD dwTranslate,
    OLECHAR *pchURLIn,
    OLECHAR **ppchURLOut)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostUIHandler2::FilterDataObject(IDataObject *pDO, IDataObject **ppDORet)
{
    return E_NOTIMPL;
}

// IDocHostUIHandler2

STDMETHODIMP CDocHostUIHandler2::GetOverrideKeyPath(LPOLESTR *pchKey, DWORD dw)
{
    return E_NOTIMPL;
}
