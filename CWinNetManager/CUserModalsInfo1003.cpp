// CUserModalsInfo1003.cpp : Implementation of CCUserModalsInfo1003

#include "stdafx.h"
#include "CUserModalsInfo1003.h"
#include "CuserModalsInfoUtils.h"

// CCUserModalsInfo1003



STDMETHODIMP CCUserModalsInfo1003::Initialise(ULONG ulMinPwdAge)
{
	mulMinPwdAge = ulMinPwdAge;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo1003::get_MinPwdAge(ULONG* pVal)
{
	*pVal = mulMinPwdAge;
	return S_OK;
}

HRESULT CCUserModalsInfo1003::TranslateToUserModalsInfo(ICUserModalsInfo1003 * pFrom, LPUSER_MODALS_INFO_1003 & pTo)
{
	return E_NOTIMPL;
}
