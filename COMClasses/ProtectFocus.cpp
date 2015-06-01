#include "ProtectFocus.h"

// IUnknown

STDMETHODIMP CProtectFocus::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CProtectFocus::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) CProtectFocus::Release(void)
{
    return 1;
}

// IProtectFocus

STDMETHODIMP CProtectFocus::AllowFocusChange(BOOL *pfAllow)
{
    return E_NOTIMPL;
}
