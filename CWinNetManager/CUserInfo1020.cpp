// CUserInfo1020.cpp : Implementation of CCUserInfo1020

#include "stdafx.h"
#include "CUserInfo1020.h"
#include "CUserInfoUtils.h"

// CCUserInfo1020

STDMETHODIMP CCUserInfo1020::Initialise(ULONG ulUnitsPerWeek, ICLogonHours* bLogonHours)
{
	m_ulUnitsPerWeek = ulUnitsPerWeek;
	m_bLogonHours = bLogonHours;
	return S_OK;
}

STDMETHODIMP CCUserInfo1020::get_UnitsPerWeek(ULONG * pVal)
{
	*pVal = m_ulUnitsPerWeek;
	return S_OK;
}

STDMETHODIMP CCUserInfo1020::get_LogonHours(ICLogonHours* * pVal)
{
	*pVal = m_bLogonHours;
	return S_OK;
}

HRESULT CCUserInfo1020::TranslateToUserInfo(ICUserInfo1020 * pFrom, USER_INFO_1020 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserInfoUnitsPerWeek<ICUserInfo1020>(pFrom, pTo.usri1020_units_per_week)) return hr;
	if (hr = ToUserInfoLogonHours<ICUserInfo1020>(pFrom, &pTo.usri1020_logon_hours)) return hr;
	return hr;
}


STDMETHODIMP CCUserInfo1020::Clear()
{
	m_ulUnitsPerWeek = 0;
	m_bLogonHours->ClearAll();
	return S_OK;
}
