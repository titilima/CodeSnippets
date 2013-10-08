///////////////////////////////////////////////////////////////////////////////
// FileName:    StackChecker.hpp
// Created:     2013/09/06
// Author:      titilima
// CopyRight:   Titi Studio (?) 2001-2013
//-----------------------------------------------------------------------------
// Information: Lua Stack Checker
///////////////////////////////////////////////////////////////////////////////

#ifndef STACKCHECKER_HPP
#define STACKCHECKER_HPP

#pragma once

class CStackChecker
{
public:
    CStackChecker(lua_State *L, int nRetCount) : m_nRetCount(nRetCount)
    {
#ifdef _DEBUG
        m_L = L;
        m_nTop = lua_gettop(m_L);
#endif
    }
    ~CStackChecker(void)
    {
#ifdef _DEBUG
        int nTop = lua_gettop(m_L);
        assert(m_nTop + m_nRetCount == nTop);
#endif
    }
public:
    int RetCount(void) const { return m_nRetCount; }
    int ResetRetCount(int nRetCount)
    {
        m_nRetCount = nRetCount;
        return nRetCount;
    }
private:
#ifdef _DEBUG
    lua_State *m_L;
    int m_nTop;
#endif
    int m_nRetCount;
};

#endif // STACKCHECKER_HPP
