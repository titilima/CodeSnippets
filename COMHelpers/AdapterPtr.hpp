#ifndef ADAPTERPTR_HPP
#define ADAPTERPTR_HPP

#pragma once

#ifndef __ATLCOMCLI_H__
#error AdapterPtr requires atlcomcli.h to be included first
#endif

template <class T1, class T2>
class AdapterPtr : public ATL::CComPtrBase<T1>
{
public:
    AdapterPtr(void) : ATL::CComPtrBase<T1>(), p2(NULL) { /* Nothing */ }
    ~AdapterPtr(void)
    {
        if (NULL != p2) {
            p2->Release();
            p2 = NULL;
        }
    }
    operator T1*() const throw()
    {
        return Get();
    }
    T1& operator*() const
    {
        return *Get();
    }
    T2** operator&(void) throw()
    {
        ATLASSERT(NULL == p2 && NULL == p);
        return &p2;
    }
    _NoAddRefReleaseOnCComPtr<T1>* operator->() throw()
    {
        return (_NoAddRefReleaseOnCComPtr<T1>*)Get();
    }
    bool operator!() const throw()
    {
        return (NULL == Get());
    }
    bool operator!=(_In_opt_ T1* pT) const
    {
        return !operator==(pT);
    }
    bool operator==(_In_opt_ T1* pT) const throw()
    {
        return Get() == pT;
    }
public:
    T1* Detach(void) throw()
    {
        T1 *pt = Get();
        p = NULL;
        return pt;
    }
protected:
    T1* Get(void)
    {
        if (NULL == p) {
            if (NULL == p2) {
                return NULL;
            }
            p2->QueryInterface(__uuidof(T1), reinterpret_cast<void **>(&p));
            p2->Release();
            p2 = NULL;
        }
        return p;
    }
protected:
    T2 *p2;
};


#endif // ADAPTERPTR_HPP
