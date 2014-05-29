#ifndef LOCKPTR_HPP
#define LOCKPTR_HPP

#pragma once

#include <memory>

template <class T, class Lock>
class LockPtr : public std::auto_ptr<T>
{
public:
    template <class T, class Lock>
    class AutoLock
    {
    public:
        AutoLock(T *p, Lock &lock) : m_ptr(p), m_lock(lock)
        {
            m_lock.Lock();
        }
        ~AutoLock(void)
        {
            m_lock.Unlock();
        }
        T* operator->()
        {
            return m_ptr;
        }
    private:
        T *m_ptr;
        Lock &m_lock;
    };
public:
    LockPtr(T *pT) : std::auto_ptr<T>(pT)
    {
        // Nothing
    }
    AutoLock<T, Lock> operator->()
    {
        return AutoLock<T, Lock>(get(), m_lock);
    }
private:
    Lock m_lock;
};

#endif
