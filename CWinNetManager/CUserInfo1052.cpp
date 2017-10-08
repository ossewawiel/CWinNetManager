// CUserInfo1052.cpp : Implementation of CCUserInfo1052

#include "stdafx.h"
#include "CUserInfo1052.h"
#include "CUserInfoUtils.h"

// CCUserInfo1052

STDMETHODIMP CCUserInfo1052::Initialise(BSTR bsProfile)
{
	m_bsProfile.Assign(bsProfile);
	return S_OK;
}

STDMETHODIMP CCUserInfo1052::get_Profile(BSTR * pVal)
{
	*pVal = m_bsProfile.copy();
	return S_OK;
}

HRESULT CCUserInfo1052::TranslateToUserInfo(ICUserInfo1052 * pFrom, USER_INFO_1052 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserInfoProfile<ICUserInfo1052>(pFrom, pTo.usri1052_profile)) return hr;
	return hr;
}


STDMETHODIMP CCUserInfo1052::Clear()
{
	m_bsProfile = L"";
	return S_OK;
}
