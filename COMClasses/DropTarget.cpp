#include "DropTarget.h"

// IUnknown

STDMETHODIMP CDropTarget::QueryInterface(REFIID riid, void **ppvObject)
{
    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CDropTarget::AddRef(void)
{
    return 1;
}

STDMETHODIMP_(ULONG) CDropTarget::Release(void)
{
    return 1;
}

// IDropTarget

STDMETHODIMP CDropTarget::DragEnter(
    IDataObject *pDataObj,
    DWORD grfKeyState,
    POINTL pt,
    DWORD *pdwEffect)
{
    *pdwEffect = DROPEFFECT_NONE;
    return S_OK;
}

STDMETHODIMP CDropTarget::DragOver(DWORD grfKeyState, POINTL pt, DWORD *pdwEffect)
{
    *pdwEffect = DROPEFFECT_NONE;
    return S_OK;
}

STDMETHODIMP CDropTarget::DragLeave(void)
{
    return S_OK;
}

STDMETHODIMP CDropTarget::Drop(
    IDataObject *pDataObj,
    DWORD grfKeyState,
    POINTL pt,
    DWORD *pdwEffect)
{
    *pdwEffect = DROPEFFECT_NONE;
    return S_OK;
}
