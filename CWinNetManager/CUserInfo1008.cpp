// CUserInfo1008.cpp : Implementation of CCUserInfo1008

#include "stdafx.h"
#include "CUserInfo1008.h"
#include "CUserInfoUtils.h"

// CCUserInfo1008

STDMETHODIMP CCUserInfo1008::Initialise(ULONG ulFlags)
{
	m_ulFlags = ulFlags;
	return S_OK;
}

STDMETHODIMP CCUserInfo1008::get_Flags(ULONG * pVal)
{
	*pVal = m_ulFlags;
	return S_OK;
}

HRESULT CCUserInfo1008::TranslateToUserInfo(ICUserInfo1008 * pFrom, USER_INFO_1008 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserInfoFlags<ICUserInfo1008>(pFrom, pTo.usri1008_flags)) return hr;
	return hr;
}


STDMETHODIMP CCUserInfo1008::Clear()
{
	m_ulFlags = 0;
	return S_OK;
}
