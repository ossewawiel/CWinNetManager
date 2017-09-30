// CUserInfo0.cpp : Implementation of CCUserInfo0

#include "stdafx.h"
#include "CUserInfo0.h"
#include "CUserInfoUtils.h"

// CCUserInfo0


STDMETHODIMP CCUserInfo0::Initialise(BSTR bsName)
{
	m_bsName.Assign(bsName);
	return S_OK;
}

STDMETHODIMP CCUserInfo0::get_Name(BSTR* pVal)
{
	*pVal = m_bsName.copy();
	return S_OK;
}

HRESULT CCUserInfo0::TranslateToUserInfo(ICUserInfo0 * pFrom, USER_INFO_0 &pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserInfoName	<ICUserInfo0>(pFrom, pTo.usri0_name)) return hr;
	return hr;
}

STDMETHODIMP CCUserInfo0::Clear()
{
	m_bsName = L"";
	return S_OK;
}
