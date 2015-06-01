#ifndef DOCHOSTSHOWUI_H
#define DOCHOSTSHOWUI_H

#pragma once

class CDocHostShowUI : public IDocHostShowUI
{
public:
    // IUnknown
    STDMETHOD(QueryInterface)(REFIID riid, void **ppvObject);
    STDMETHOD_(ULONG, AddRef)(void);
    STDMETHOD_(ULONG, Release)(void);
    // IDocHostShowUI
    STDMETHOD(ShowMessage)(HWND hwnd, LPOLESTR lpstrText, LPOLESTR lpstrCaption, DWORD dwType,
        LPOLESTR lpstrHelpFile, DWORD dwHelpContext, LRESULT *plResult);
    STDMETHOD(ShowHelp)(HWND hwnd, LPOLESTR pszHelpFile, UINT uCommand, DWORD dwData, POINT ptMouse,
        IDispatch *pDispatchObjectHit);
};

#endif // DOCHOSTSHOWUI_H
