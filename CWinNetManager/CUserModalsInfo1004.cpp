// CUserModalsInfo1004.cpp : Implementation of CCUserModalsInfo1004

#include "stdafx.h"
#include "CUserModalsInfo1004.h"
#include "CuserModalsInfoUtils.h"

// CCUserModalsInfo1004



STDMETHODIMP CCUserModalsInfo1004::Initialise(ULONG ulForceLogoff)
{
	mulForceLogoff = ulForceLogoff;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo1004::get_ForceLogoff(ULONG* pVal)
{
	*pVal = mulForceLogoff;
	return S_OK;
}

HRESULT CCUserModalsInfo1004::TranslateToUserModalsInfo(ICUserModalsInfo1004 * pFrom, LPUSER_MODALS_INFO_1004 & pTo)
{
	return E_NOTIMPL;
}
