#include "SequentialStream.h"

// IUnknown

STDMETHODIMP CSequentialStream::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CSequentialStream::AddRef(void)
{
    return 1;
}

// ISequentialStream

STDMETHODIMP_(ULONG) CSequentialStream::Release(void)
{
    return 1;
}

STDMETHODIMP CSequentialStream::Read(void *pv, ULONG cb, ULONG *pcbRead)
{
    return E_NOTIMPL;
}

STDMETHODIMP CSequentialStream::Write(const void *pv, ULONG cb, ULONG *pcbWritten)
{
    return E_NOTIMPL;
}
