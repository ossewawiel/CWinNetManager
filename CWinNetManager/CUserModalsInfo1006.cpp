// CUserModalsInfo1006.cpp : Implementation of CCUserModalsInfo1006

#include "stdafx.h"
#include "CUserModalsInfo1006.h"
#include "CuserModalsInfoUtils.h"

// CCUserModalsInfo1006



STDMETHODIMP CCUserModalsInfo1006::Initialise(ULONG ulRole)
{
	mulRole = ulRole;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo1006::get_Role(ULONG* pVal)
{
	*pVal = mulRole;
	return S_OK;
}

HRESULT CCUserModalsInfo1006::TranslateToUserModalsInfo(ICUserModalsInfo1006 * pFrom, LPUSER_MODALS_INFO_1006 & pTo)
{
	return E_NOTIMPL;
}
