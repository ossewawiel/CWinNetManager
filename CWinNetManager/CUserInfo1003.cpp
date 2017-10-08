// CUserInfo1003.cpp : Implementation of CCUserInfo1003

#include "stdafx.h"
#include "CUserInfo1003.h"
#include "CUserInfoUtils.h"

// CCUserInfo1003
STDMETHODIMP CCUserInfo1003::Initialise(BSTR bsPassword)
{
	m_bsPassword.Assign(bsPassword);
	return S_OK;
}

STDMETHODIMP CCUserInfo1003::get_Password(BSTR * pVal)
{
	*pVal = m_bsPassword.copy();
	return S_OK;
}

HRESULT CCUserInfo1003::TranslateToUserInfo(ICUserInfo1003 * pFrom, USER_INFO_1003 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserInfoPassword	<ICUserInfo1003>(pFrom, pTo.usri1003_password)) return hr;
	return hr;
}


STDMETHODIMP CCUserInfo1003::Clear()
{
	m_bsPassword = L"";
	return S_OK;
}
