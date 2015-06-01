#include "DocHostShowUI.h"

// IUnknown

STDMETHODIMP CDocHostShowUI::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CDocHostShowUI::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) CDocHostShowUI::Release(void)
{
    return 1;
}

// IDocHostShowUI

STDMETHODIMP CDocHostShowUI::ShowMessage(
    HWND hwnd,
    LPOLESTR lpstrText,
    LPOLESTR lpstrCaption,
    DWORD dwType,
    LPOLESTR lpstrHelpFile,
    DWORD dwHelpContext,
    LRESULT *plResult)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDocHostShowUI::ShowHelp(
    HWND hwnd,
    LPOLESTR pszHelpFile,
    UINT uCommand,
    DWORD dwData,
    POINT ptMouse,
    IDispatch *pDispatchObjectHit)
{
    return E_NOTIMPL;
}
