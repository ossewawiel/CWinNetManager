// CUserModalsInfo1001.cpp : Implementation of CCUserModalsInfo1001

#include "stdafx.h"
#include "CUserModalsInfo1001.h"
#include "CuserModalsInfoUtils.h"

// CCUserModalsInfo1001



STDMETHODIMP CCUserModalsInfo1001::Initialise(ULONG ulMinPwdLen)
{
	mulMinPwdLen = ulMinPwdLen;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo1001::get_MinPwdLen(ULONG* pVal)
{
	*pVal = mulMinPwdLen;
	return S_OK;
}

HRESULT CCUserModalsInfo1001::TranslateToUserModalsInfo(ICUserModalsInfo1001 * pFrom, LPUSER_MODALS_INFO_1001 & pTo)
{
	return E_NOTIMPL;
}
