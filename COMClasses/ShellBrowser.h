#ifndef SHELLBROWSER_H
#define SHELLBROWSER_H

#pragma once

class CShellBrowser : public IShellBrowser
{
public:
    // IUnknown
    STDMETHOD(QueryInterface)(REFIID riid, void **ppvObject);
    STDMETHOD_(ULONG, AddRef)(void);
    STDMETHOD_(ULONG, Release)(void);
    // IOleWindow
    STDMETHOD(GetWindow)(HWND *phwnd);
    STDMETHOD(ContextSensitiveHelp)(BOOL fEnterMode);
    // IShellBrowser
    STDMETHOD(InsertMenusSB)(HMENU hmenuShared, LPOLEMENUGROUPWIDTHS lpMenuWidths);
    STDMETHOD(SetMenuSB)(HMENU hmenuShared, HOLEMENU holemenuRes, HWND hwndActiveObject);
    STDMETHOD(RemoveMenusSB)(HMENU hmenuShared);
    STDMETHOD(SetStatusTextSB)(LPCWSTR pszStatusText);
    STDMETHOD(EnableModelessSB)(BOOL fEnable);
    STDMETHOD(TranslateAcceleratorSB)(MSG *pmsg, WORD wID);
    STDMETHOD(BrowseObject)(PCUIDLIST_RELATIVE pidl, UINT wFlags);
    STDMETHOD(GetViewStateStream)(DWORD grfMode, IStream **ppStrm);
    STDMETHOD(GetControlWindow)(UINT id, HWND *phwnd);
    STDMETHOD(SendControlMsg)(UINT id, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT *pret);
    STDMETHOD(QueryActiveShellView)(IShellView **ppshv);
    STDMETHOD(OnViewWindowActive)(IShellView *pshv);
    STDMETHOD(SetToolbarItems)(LPTBBUTTONSB lpButtons, UINT nButtons, UINT uFlags);
};

#endif // SHELLBROWSER_H
