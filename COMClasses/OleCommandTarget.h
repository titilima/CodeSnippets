#ifndef OLECOMMANDTARGET_H
#define OLECOMMANDTARGET_H

#pragma once

class COleCommandTarget : public IOleCommandTarget
{
public:
    // IUnknown
    STDMETHOD(QueryInterface)(REFIID riid, void **ppvObject);
    STDMETHOD_(ULONG, AddRef)(void);
    STDMETHOD_(ULONG, Release)(void);
    // IOleCommandTarget
    STDMETHOD(QueryStatus)(const GUID *pguidCmdGroup, ULONG cCmds, OLECMD prgCmds[],
        OLECMDTEXT *pCmdText);
    STDMETHOD(Exec)(const GUID *pguidCmdGroup, DWORD nCmdID, DWORD nCmdexecopt, VARIANT *pvaIn,
        VARIANT *pvaOut);
};

#endif // OLECOMMANDTARGET_H
