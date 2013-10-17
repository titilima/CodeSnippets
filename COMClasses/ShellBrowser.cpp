#include "ShellBrowser.h"

// IUnknown

STDMETHODIMP CShellBrowser::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CShellBrowser::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) CShellBrowser::Release(void)
{
    return 1;
}

// IOleWindow

STDMETHODIMP CShellBrowser::GetWindow(HWND *phwnd)
{
    return E_NOTIMPL;
}

STDMETHODIMP CShellBrowser::ContextSensitiveHelp(BOOL fEnterMode)
{
    return E_NOTIMPL;
}

// IShellBrowser

STDMETHODIMP CShellBrowser::InsertMenusSB(HMENU hmenuShared, LPOLEMENUGROUPWIDTHS lpMenuWidths)
{
    return E_NOTIMPL;
}

STDMETHODIMP CShellBrowser::SetMenuSB(HMENU hmenuShared, HOLEMENU holemenuRes, HWND hwndActiveObject)
{
    return E_NOTIMPL;
}

STDMETHODIMP CShellBrowser::RemoveMenusSB(HMENU hmenuShared)
{
    return E_NOTIMPL;
}

STDMETHODIMP CShellBrowser::SetStatusTextSB(LPCWSTR pszStatusText)
{
    return E_NOTIMPL;
}

STDMETHODIMP CShellBrowser::EnableModelessSB(BOOL fEnable)
{
    return E_NOTIMPL;
}

STDMETHODIMP CShellBrowser::TranslateAcceleratorSB(MSG *pmsg, WORD wID)
{
    return E_NOTIMPL;
}

STDMETHODIMP CShellBrowser::BrowseObject(PCUIDLIST_RELATIVE pidl, UINT wFlags)
{
    return E_NOTIMPL;
}

STDMETHODIMP CShellBrowser::GetViewStateStream(DWORD grfMode, IStream **ppStrm)
{
    return E_NOTIMPL;
}

STDMETHODIMP CShellBrowser::GetControlWindow(UINT id, HWND *phwnd)
{
    return E_NOTIMPL;
}

STDMETHODIMP CShellBrowser::SendControlMsg(UINT id, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT *pret)
{
    return E_NOTIMPL;
}

STDMETHODIMP CShellBrowser::QueryActiveShellView(IShellView **ppshv)
{
    return E_NOTIMPL;
}

STDMETHODIMP CShellBrowser::OnViewWindowActive(IShellView *pshv)
{
    return E_NOTIMPL;
}

STDMETHODIMP CShellBrowser::SetToolbarItems(LPTBBUTTONSB lpButtons, UINT nButtons, UINT uFlags)
{
    return E_NOTIMPL;
}
