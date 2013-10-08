///////////////////////////////////////////////////////////////////////////////
// FileName:    DirScanner.hpp
// Created:     2011/9/22
// Author:      titilima
// CopyRight:   Titi Studio (?) 2001-2011
//-----------------------------------------------------------------------------
// Information: Directory Scanner
//-----------------------------------------------------------------------------
// Example:
// #include <atlbase.h>
// #include "DirScanner.hpp"
//
// void WINAPI OnFile(PCTSTR ptzFullPath, const WIN32_FIND_DATA& wfd, LPARAM)
// {
//     ATLTRACE(_T("File: %s\n"), ptzFullPath);
// }
//
// int main(void)
// {
//     LDirScanner<TCHAR> ds;
//     ds.DoScan(_T("d:\\temp\\"), OnFile, 0);
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////

#ifndef DIRSCANNER_HPP
#define DIRSCANNER_HPP

#pragma once

#include <string>
#include <stack>

template <typename CharType>
class DSTraits
{
};

template <>
class DSTraits<char>
{
public:
    typedef WIN32_FIND_DATAA WFD;
    typedef void (WINAPI * pfnItem)(PCSTR pszFullPath, const WIN32_FIND_DATAA& wfd, LPARAM lParam);
};

template <>
class DSTraits<WCHAR>
{
public:
    typedef WIN32_FIND_DATAW WFD;
    typedef void (WINAPI * pfnItem)(PCWSTR pwzFullPath, const WIN32_FIND_DATAW& wfd, LPARAM lParam);
};

template <class CharType>
class LDirScanner
{
public:
    void DoScan(const CharType* ptzDir, typename DSTraits<CharType>::pfnItem pfn, LPARAM lParam);
private:
    HANDLE FindFirst(PCSTR pszFind, LPWIN32_FIND_DATAA wfd)
    {
        return ::FindFirstFileA(pszFind, wfd);
    }
    HANDLE FindFirst(PCWSTR pwzFind, LPWIN32_FIND_DATAW wfd)
    {
        return ::FindFirstFileW(pwzFind, wfd);
    }
    BOOL FindNext(HANDLE hFind, LPWIN32_FIND_DATAA wfd)
    {
        return ::FindNextFileA(hFind, wfd);
    }
    BOOL FindNext(HANDLE hFind, LPWIN32_FIND_DATAW wfd)
    {
        return ::FindNextFileW(hFind, wfd);
    }
    BOOL Ignore(PCSTR pszFile)
    {
        if (0 == strcmp(pszFile, "."))
            return TRUE;
        if (0 == strcmp(pszFile, ".."))
            return TRUE;
        return FALSE;
    }
    BOOL Ignore(PCWSTR pwzFile)
    {
        if (0 == wcscmp(pwzFile, L"."))
            return TRUE;
        if (0 == wcscmp(pwzFile, L".."))
            return TRUE;
        return FALSE;
    }
private:
    class StackItem {
    public:
        StackItem(void) : m_hFind(INVALID_HANDLE_VALUE) { /* Nothing */ }
        ~StackItem(void)
        {
            if (INVALID_HANDLE_VALUE != m_hFind)
                ::FindClose(m_hFind);
        }
    public:
        HANDLE m_hFind;
        std::basic_string<CharType> m_strFullPath;
    };
};

template <class CharType>
void LDirScanner<CharType>::DoScan(
    const CharType* ptzDir,
    typename DSTraits<CharType>::pfnItem pfn,
    LPARAM lParam)
{
    std::stack<StackItem> scanStack;

    StackItem si;
    si.m_strFullPath = ptzDir;
    if ('\\' != si.m_strFullPath[si.m_strFullPath.length() - 1])
        si.m_strFullPath.append(1, '\\');

    const CharType tsAll[] = { '*', '.', '*' };
    std::basic_string<CharType> strFind = si.m_strFullPath;
    strFind.append(tsAll, 3);

    DSTraits<CharType>::WFD wfd;
    si.m_hFind = FindFirst(strFind.c_str(), &wfd);
    if (INVALID_HANDLE_VALUE == si.m_hFind)
        return;

    scanStack.push(si);
    while (!scanStack.empty())
    {
        if (!Ignore(wfd.cFileName))
        {
            std::basic_string<CharType> strFullPath(si.m_strFullPath);
            strFullPath.append(wfd.cFileName);
            pfn(strFullPath.c_str(), wfd, lParam);

            if (FILE_ATTRIBUTE_DIRECTORY & wfd.dwFileAttributes)
            {
                strFullPath.append(1, '\\');
                strFind = strFullPath;
                strFind.append(tsAll, 3);

                HANDLE hFind = FindFirst(strFind.c_str(), &wfd);
                if (INVALID_HANDLE_VALUE != hFind)
                {
                    si.m_strFullPath = strFullPath;
                    si.m_hFind = hFind;
                    scanStack.push(si);
                    continue;
                }
            }
        }

        while (!FindNext(si.m_hFind, &wfd))
        {
            scanStack.pop();
            if (scanStack.empty())
            {
                si.m_hFind = INVALID_HANDLE_VALUE;
                break;
            }

            si.m_hFind = scanStack.top().m_hFind;
            si.m_strFullPath = scanStack.top().m_strFullPath;
        }
    }
}

#endif // DIRSCANNER_HPP
