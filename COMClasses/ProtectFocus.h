#ifndef PROTECTFOCUS_H
#define PROTECTFOCUS_H

#pragma once

class CProtectFocus : public IProtectFocus
{
public:
    // IUnknown
    STDMETHOD(QueryInterface)(REFIID riid, void **ppvObject);
    STDMETHOD_(ULONG, AddRef)(void);
    STDMETHOD_(ULONG, Release)(void);
    // IProtectFocus
    STDMETHOD(AllowFocusChange)(BOOL *pfAllow);
};

#endif // PROTECTFOCUS_H
