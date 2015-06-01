#include "OleClientSite.h"

// IUnknown

STDMETHODIMP COleClientSite::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) COleClientSite::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) COleClientSite::Release(void)
{
    return 1;
}

// IOleClientSite

STDMETHODIMP COleClientSite::SaveObject(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleClientSite::GetMoniker(DWORD dwAssign, DWORD dwWhichMoniker, IMoniker **ppmk)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleClientSite::GetContainer(IOleContainer **ppContainer)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleClientSite::ShowObject(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleClientSite::OnShowWindow(BOOL fShow)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleClientSite::RequestNewObjectLayout(void)
{
    return E_NOTIMPL;
}
