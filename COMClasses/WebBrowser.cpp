#include "WebBrowser.h"

// IUnknown

STDMETHODIMP CWebBrowser::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CWebBrowser::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) CWebBrowser::Release(void)
{
    return 1;
}

// IDispatch

STDMETHODIMP CWebBrowser::GetTypeInfoCount(UINT *pctinfo)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::GetIDsOfNames(
    REFIID riid,
    LPOLESTR *rgszNames, UINT cNames,
    LCID lcid,
    DISPID *rgDispId)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::Invoke(
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

// IWebBrowser

STDMETHODIMP CWebBrowser::GoBack(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::GoForward(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::GoHome(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::GoSearch(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::Navigate(
    BSTR URL,
    VARIANT *Flags,
    VARIANT *TargetFrameName,
    VARIANT *PostData,
    VARIANT *Headers)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::Refresh(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::Refresh2(VARIANT *Level)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::Stop(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::get_Application(IDispatch **ppDisp)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::get_Parent(IDispatch **ppDisp)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::get_Container(IDispatch **ppDisp)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::get_Document(IDispatch **ppDisp)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::get_TopLevelContainer(VARIANT_BOOL *pBool)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::get_Type(BSTR *Type)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::get_Left(long *pl)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::put_Left(long Left)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::get_Top(long *pl)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::put_Top(long Top)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::get_Width(long *pl)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::put_Width(long Width)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::get_Height(long *pl)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::put_Height(long Height)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::get_LocationName(BSTR *LocationName)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::get_LocationURL(BSTR *LocationURL)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser::get_Busy(VARIANT_BOOL *pBool)
{
    return E_NOTIMPL;
}
