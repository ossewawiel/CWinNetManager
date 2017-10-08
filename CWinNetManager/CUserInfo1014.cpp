// CUserInfo1014.cpp : Implementation of CCUserInfo1014

#include "stdafx.h"
#include "CUserInfo1014.h"
#include "CUserInfoUtils.h"

// CCUserInfo1014

STDMETHODIMP CCUserInfo1014::Initialise(BSTR bsWorkstations)
{
	m_bsWorkstations.Assign(bsWorkstations);
	return S_OK;
}

STDMETHODIMP CCUserInfo1014::get_Workstations(BSTR * pVal)
{
	*pVal = m_bsWorkstations.copy();
	return S_OK;
}

HRESULT CCUserInfo1014::TranslateToUserInfo(ICUserInfo1014 * pFrom, USER_INFO_1014 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserInfoWorkstations<ICUserInfo1014>(pFrom, pTo.usri1014_workstations)) return hr;
	return hr;
}


STDMETHODIMP CCUserInfo1014::Clear()
{
	m_bsWorkstations = L"";
	return S_OK;
}
