// CUserInfo1017.cpp : Implementation of CCUserInfo1017

#include "stdafx.h"
#include "CUserInfo1017.h"
#include "CUserInfoUtils.h"

// CCUserInfo1017

STDMETHODIMP CCUserInfo1017::Initialise(ULONG ulAccntExpires)
{
	m_ulAccntExpires = ulAccntExpires;
	return S_OK;
}

STDMETHODIMP CCUserInfo1017::get_AccntExpires(ULONG * pVal)
{
	*pVal = m_ulAccntExpires;
	return S_OK;
}

HRESULT CCUserInfo1017::TranslateToUserInfo(ICUserInfo1017 * pFrom, USER_INFO_1017 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserInfoAccntExpires<ICUserInfo1017>(pFrom, pTo.usri1017_acct_expires)) return hr;
	return hr;
}


STDMETHODIMP CCUserInfo1017::Clear()
{
	m_ulAccntExpires = 0;
	return S_OK;
}
