// CUserInfo1005.cpp : Implementation of CCUserInfo1005

#include "stdafx.h"
#include "CUserInfo1005.h"
#include "CUserInfoUtils.h"

// CCUserInfo1005

STDMETHODIMP CCUserInfo1005::Initialise(ULONG ulPrivilege)
{
	m_ulPrivilege = ulPrivilege;
	return S_OK;
}

STDMETHODIMP CCUserInfo1005::get_Privilege(ULONG * pVal)
{
	*pVal =m_ulPrivilege;
	return S_OK;
}

HRESULT CCUserInfo1005::TranslateToUserInfo(ICUserInfo1005 * pFrom, USER_INFO_1005 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserInfoPrivilege<ICUserInfo1005>(pFrom, pTo.usri1005_priv)) return hr;
	return hr;
}


STDMETHODIMP CCUserInfo1005::Clear()
{
	m_ulPrivilege = 0;
	return S_OK;
}
