#ifndef SERVICEPROVIDER_H
#define SERVICEPROVIDER_H

#pragma once

class CServiceProvider : public IServiceProvider
{
public:
    // IUnknown
    STDMETHOD(QueryInterface)(REFIID riid, void **ppvObject);
    STDMETHOD_(ULONG, AddRef)(void);
    STDMETHOD_(ULONG, Release)(void);
    // IServiceProvider
    STDMETHOD(QueryService)(REFGUID guidService, REFIID riid,void **ppvObject);
};

#endif // SERVICEPROVIDER_H
