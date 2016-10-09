#include "Stream.h"

// IUnknown

STDMETHODIMP CStream::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CStream::AddRef(void)
{
    return 1;
}

// ISequentialStream

STDMETHODIMP_(ULONG) CStream::Release(void)
{
    return 1;
}

STDMETHODIMP CStream::Read(void *pv, ULONG cb, ULONG *pcbRead)
{
    return E_NOTIMPL;
}

STDMETHODIMP CStream::Write(const void *pv, ULONG cb, ULONG *pcbWritten)
{
    return E_NOTIMPL;
}

// IStream

STDMETHODIMP CStream::Seek(LARGE_INTEGER dlibMove, DWORD dwOrigin, ULARGE_INTEGER *plibNewPosition)
{
    return E_NOTIMPL;
}

STDMETHODIMP CStream::SetSize(ULARGE_INTEGER libNewSize)
{
    return E_NOTIMPL;
}

STDMETHODIMP CStream::CopyTo(
    IStream *pstm,
    ULARGE_INTEGER cb,
    ULARGE_INTEGER *pcbRead, ULARGE_INTEGER *pcbWritten)
{
    return E_NOTIMPL;
}

STDMETHODIMP CStream::Commit(DWORD grfCommitFlags)
{
    return E_NOTIMPL;
}

STDMETHODIMP CStream::Revert(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CStream::LockRegion(ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType)
{
    return E_NOTIMPL;
}

STDMETHODIMP CStream::UnlockRegion(ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType)
{
    return E_NOTIMPL;
}

STDMETHODIMP CStream::Stat(STATSTG *pstatstg, DWORD grfStatFlag)
{
    return E_NOTIMPL;
}

STDMETHODIMP CStream::Clone(IStream **ppstm)
{
    return E_NOTIMPL;
}
