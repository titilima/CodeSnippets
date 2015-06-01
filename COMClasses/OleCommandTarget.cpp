#include "OleCommandTarget.h"

// IUnknown

STDMETHODIMP COleCommandTarget::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) COleCommandTarget::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) COleCommandTarget::Release(void)
{
    return 1;
}

// IOleCommandTarget

STDMETHODIMP COleCommandTarget::QueryStatus(
    const GUID *pguidCmdGroup,
    ULONG cCmds,
    OLECMD prgCmds[],
    OLECMDTEXT *pCmdText)
{
    return E_NOTIMPL;
}

STDMETHODIMP COleCommandTarget::Exec(
    const GUID *pguidCmdGroup,
    DWORD nCmdID,
    DWORD nCmdexecopt,
    VARIANT *pvaIn, VARIANT *pvaOut)
{
    return E_NOTIMPL;
}
