#ifndef OLECLIENTSITE_H
#define OLECLIENTSITE_H

#pragma once

class COleClientSite : public IOleClientSite
{
public:
    // IUnknown
    STDMETHOD(QueryInterface)(REFIID riid, void **ppvObject);
    STDMETHOD_(ULONG, AddRef)(void);
    STDMETHOD_(ULONG, Release)(void);
    // IOleClientSite
    STDMETHOD(SaveObject)(void);
    STDMETHOD(GetMoniker)(DWORD dwAssign, DWORD dwWhichMoniker, IMoniker **ppmk);
    STDMETHOD(GetContainer)(IOleContainer **ppContainer);
    STDMETHOD(ShowObject)(void);
    STDMETHOD(OnShowWindow)(BOOL fShow);
    STDMETHOD(RequestNewObjectLayout)(void);
};

#endif // OLECLIENTSITE_H
