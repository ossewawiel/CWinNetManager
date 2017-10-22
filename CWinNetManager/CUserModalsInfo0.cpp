// CUserModalsInfo0.cpp : Implementation of CCUserModalsInfo0

#include "stdafx.h"
#include "CUserModalsInfo0.h"


// CCUserModalsInfo0




STDMETHODIMP CCUserModalsInfo0::Initialise(ULONG ulMinPwdLen, ULONG ulMaxPwdAge, ULONG ulMinPwdAge, ULONG ulForceLogoff, ULONG ulPwdHistLen)
{
	mulForceLogoff = ulForceLogoff;
	mulMaxPwdAge = ulMaxPwdAge;
	mulMinPwdAge = ulMinPwdAge;
	mulMinPwdLen = ulMinPwdLen;
	mulPwdHistLen = ulPwdHistLen;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo0::get_MinPwdLen(ULONG* pVal)
{
	*pVal = mulMinPwdLen;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo0::get_MaxPwdAge(ULONG* pVal)
{
	*pVal = mulMaxPwdAge;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo0::get_MinPwdAge(ULONG* pVal)
{
	*pVal = mulMinPwdAge;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo0::get_ForceLogoff(ULONG* pVal)
{
	*pVal = mulForceLogoff;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo0::get_PwdHistLen(ULONG* pVal)
{
	*pVal = mulPwdHistLen;
	return S_OK;
}

HRESULT CCUserModalsInfo0::TranslateFromUserModalsInfo(LPUSER_MODALS_INFO_0 & pFrom, ICUserModalsInfo0 ** ppTo)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo0::CreateInstance(ppTo)) return hr;
	return (*ppTo)->Initialise(
		pFrom->usrmod0_min_passwd_len
		, pFrom->usrmod0_max_passwd_age
		, pFrom->usrmod0_min_passwd_age
		, pFrom->usrmod0_force_logoff
		, pFrom->usrmod0_password_hist_len);
}
