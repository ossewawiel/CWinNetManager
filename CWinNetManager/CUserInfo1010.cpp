// CUserInfo1010.cpp : Implementation of CCUserInfo1010

#include "stdafx.h"
#include "CUserInfo1010.h"
#include "CUserInfoUtils.h"

// CCUserInfo1010

STDMETHODIMP CCUserInfo1010::Initialise(ULONG ulAuthFlags)
{
	m_ulAuthFlags = ulAuthFlags;
	return S_OK;
}

STDMETHODIMP CCUserInfo1010::get_AuthFlags(ULONG * pVal)
{
	*pVal = m_ulAuthFlags;
	return S_OK;
}

HRESULT CCUserInfo1010::TranslateToUserInfo(ICUserInfo1010 * pFrom, USER_INFO_1010 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserInfoAuthFlags<ICUserInfo1010>(pFrom, pTo.usri1010_auth_flags)) return hr;
	return hr;
}


STDMETHODIMP CCUserInfo1010::Clear()
{
	m_ulAuthFlags = 0;
	return S_OK;
}
