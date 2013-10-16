#ifndef UNKNOWN_H
#define UNKNOWN_H

#pragma once

class CUnknown : public IUnknown
{
public:
    // IUnknown
    STDMETHOD(QueryInterface)(REFIID riid, void **ppvObject);
    STDMETHOD_(ULONG, AddRef)(void);
    STDMETHOD_(ULONG, Release)(void);
};

#endif // UNKNOWN_H
