#include "Dispatch.h"

STDMETHODIMP CDispatch::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CDispatch::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) CDispatch::Release(void)
{
    return 1;
}

STDMETHODIMP CDispatch::GetTypeInfoCount(UINT *pctinfo)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDispatch::GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDispatch::GetIDsOfNames(
    REFIID riid,
    LPOLESTR *rgszNames, UINT cNames,
    LCID lcid,
    DISPID *rgDispId)
{
    return E_NOTIMPL;
}

STDMETHODIMP CDispatch::Invoke(
    DISPID dispIdMember,
    REFIID riid,
    LCID lcid,
    WORD wFlags,
    DISPPARAMS *pDispParams,
    VARIANT *pVarResult,
    EXCEPINFO *pExcepInfo,
    UINT *puArgErr)
{
    return E_NOTIMPL;
}
