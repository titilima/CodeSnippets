#include "WebBrowser2.h"

// IUnknown

STDMETHODIMP CWebBrowser2::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CWebBrowser2::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) CWebBrowser2::Release(void)
{
    return 1;
}

// IDispatch

STDMETHODIMP CWebBrowser2::GetTypeInfoCount(UINT *pctinfo)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::GetIDsOfNames(
    REFIID riid,
    LPOLESTR *rgszNames, UINT cNames,
    LCID lcid,
    DISPID *rgDispId)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::Invoke(
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

STDMETHODIMP CWebBrowser2::GoBack(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::GoForward(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::GoHome(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::GoSearch(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::Navigate(
    BSTR URL,
    VARIANT *Flags,
    VARIANT *TargetFrameName,
    VARIANT *PostData,
    VARIANT *Headers)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::Refresh(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::Refresh2(VARIANT *Level)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::Stop(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Application(IDispatch **ppDisp)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Parent(IDispatch **ppDisp)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Container(IDispatch **ppDisp)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Document(IDispatch **ppDisp)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_TopLevelContainer(VARIANT_BOOL *pBool)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Type(BSTR *Type)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Left(long *pl)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_Left(long Left)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Top(long *pl)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_Top(long Top)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Width(long *pl)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_Width(long Width)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Height(long *pl)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_Height(long Height)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_LocationName(BSTR *LocationName)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_LocationURL(BSTR *LocationURL)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Busy(VARIANT_BOOL *pBool)
{
    return E_NOTIMPL;
}

// IWebBrowserApp

STDMETHODIMP CWebBrowser2::Quit(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::ClientToWindow(int *pcx, int *pcy)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::PutProperty(BSTR Property, VARIANT vtValue)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::GetProperty(BSTR Property, VARIANT *pvtValue)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Name(BSTR *Name)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_HWND(SHANDLE_PTR *pHWND)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_FullName(BSTR *FullName)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Path(BSTR *Path)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Visible(VARIANT_BOOL *pBool)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_Visible(VARIANT_BOOL Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_StatusBar(VARIANT_BOOL *pBool)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_StatusBar(VARIANT_BOOL Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_StatusText(BSTR *StatusText)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_StatusText(BSTR StatusText)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_ToolBar(int *Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_ToolBar(int Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_MenuBar(VARIANT_BOOL *Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_MenuBar(VARIANT_BOOL Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_FullScreen(VARIANT_BOOL *pbFullScreen)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_FullScreen(VARIANT_BOOL bFullScreen)
{
    return E_NOTIMPL;
}

// IWebBrowser2

STDMETHODIMP CWebBrowser2::Navigate2(
    VARIANT *URL,
    VARIANT *Flags,
    VARIANT *TargetFrameName,
    VARIANT *PostData,
    VARIANT *Headers)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::QueryStatusWB(OLECMDID cmdID, OLECMDF *pcmdf)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::ExecWB(
    OLECMDID cmdID,
    OLECMDEXECOPT cmdexecopt,
    VARIANT *pvaIn, VARIANT *pvaOut)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::ShowBrowserBar(VARIANT *pvaClsid, VARIANT *pvarShow, VARIANT *pvarSize)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_ReadyState(READYSTATE *plReadyState)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Offline(VARIANT_BOOL *pbOffline)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_Offline(VARIANT_BOOL bOffline)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Silent(VARIANT_BOOL *pbSilent)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_Silent(VARIANT_BOOL bSilent)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_RegisterAsBrowser(VARIANT_BOOL *pbRegister)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_RegisterAsBrowser(VARIANT_BOOL bRegister)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_RegisterAsDropTarget(VARIANT_BOOL *pbRegister)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_RegisterAsDropTarget(VARIANT_BOOL bRegister)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_TheaterMode(VARIANT_BOOL *pbRegister)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_TheaterMode(VARIANT_BOOL bRegister)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_AddressBar(VARIANT_BOOL *Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_AddressBar(VARIANT_BOOL Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::get_Resizable(VARIANT_BOOL *Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowser2::put_Resizable(VARIANT_BOOL Value)
{
    return E_NOTIMPL;
}
