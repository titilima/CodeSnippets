#include "WebBrowserApp.h"

// IUnknown

STDMETHODIMP CWebBrowserApp::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CWebBrowserApp::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) CWebBrowserApp::Release(void)
{
    return 1;
}

// IDispatch

STDMETHODIMP CWebBrowserApp::GetTypeInfoCount(UINT *pctinfo)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::GetIDsOfNames(
    REFIID riid,
    LPOLESTR *rgszNames, UINT cNames,
    LCID lcid,
    DISPID *rgDispId)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::Invoke(
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

STDMETHODIMP CWebBrowserApp::GoBack(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::GoForward(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::GoHome(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::GoSearch(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::Navigate(
    BSTR URL,
    VARIANT *Flags,
    VARIANT *TargetFrameName,
    VARIANT *PostData,
    VARIANT *Headers)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::Refresh(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::Refresh2(VARIANT *Level)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::Stop(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_Application(IDispatch **ppDisp)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_Parent(IDispatch **ppDisp)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_Container(IDispatch **ppDisp)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_Document(IDispatch **ppDisp)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_TopLevelContainer(VARIANT_BOOL *pBool)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_Type(BSTR *Type)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_Left(long *pl)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::put_Left(long Left)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_Top(long *pl)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::put_Top(long Top)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_Width(long *pl)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::put_Width(long Width)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_Height(long *pl)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::put_Height(long Height)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_LocationName(BSTR *LocationName)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_LocationURL(BSTR *LocationURL)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_Busy(VARIANT_BOOL *pBool)
{
    return E_NOTIMPL;
}

// IWebBrowserApp

STDMETHODIMP CWebBrowserApp::Quit(void)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::ClientToWindow(int *pcx, int *pcy)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::PutProperty(BSTR Property, VARIANT vtValue)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::GetProperty(BSTR Property, VARIANT *pvtValue)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_Name(BSTR *Name)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_HWND(SHANDLE_PTR *pHWND)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_FullName(BSTR *FullName)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_Path(BSTR *Path)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_Visible(VARIANT_BOOL *pBool)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::put_Visible(VARIANT_BOOL Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_StatusBar(VARIANT_BOOL *pBool)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::put_StatusBar(VARIANT_BOOL Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_StatusText(BSTR *StatusText)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::put_StatusText(BSTR StatusText)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_ToolBar(int *Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::put_ToolBar(int Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_MenuBar(VARIANT_BOOL *Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::put_MenuBar(VARIANT_BOOL Value)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::get_FullScreen(VARIANT_BOOL *pbFullScreen)
{
    return E_NOTIMPL;
}

STDMETHODIMP CWebBrowserApp::put_FullScreen(VARIANT_BOOL bFullScreen)
{
    return E_NOTIMPL;
}
