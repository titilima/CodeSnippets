#include "OleInPlaceSite.h"

// IUnknown

STDMETHODIMP COleInPlaceSite::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) COleInPlaceSite::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) COleInPlaceSite::Release(void)
{
    return 1;
}

// IOleWindow

STDMETHODIMP COleInPlaceSite::GetWindow(HWND *phwnd)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleInPlaceSite::ContextSensitiveHelp(BOOL fEnterMode)
{
    return S_OK;
}

// IOleInPlaceSite

STDMETHODIMP COleInPlaceSite::CanInPlaceActivate(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleInPlaceSite::OnInPlaceActivate(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleInPlaceSite::OnUIActivate(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleInPlaceSite::GetWindowContext(
    IOleInPlaceFrame **ppFrame,
    IOleInPlaceUIWindow **ppDoc,
    LPRECT lprcPosRect, LPRECT lprcClipRect,
    LPOLEINPLACEFRAMEINFO lpFrameInfo)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleInPlaceSite::Scroll(SIZE scrollExtant)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleInPlaceSite::OnUIDeactivate(BOOL fUndoable)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleInPlaceSite::OnInPlaceDeactivate(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleInPlaceSite::DiscardUndoState(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleInPlaceSite::DeactivateAndUndo(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleInPlaceSite::OnPosRectChange(LPCRECT lprcPosRect)
{
    return E_NOTIMPL;
}
