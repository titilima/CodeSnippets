#include "Unknown.h"

// IUnknown

STDMETHODIMP CUnknown::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CUnknown::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) CUnknown::Release(void)
{
    return 1;
}
