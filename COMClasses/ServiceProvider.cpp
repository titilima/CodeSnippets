#include "ServiceProvider.h"

// IUnknown

STDMETHODIMP CServiceProvider::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CServiceProvider::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) CServiceProvider::Release(void)
{
    return 1;
}

// IServiceProvider

STDMETHODIMP CServiceProvider::QueryService(REFGUID guidService, REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}
