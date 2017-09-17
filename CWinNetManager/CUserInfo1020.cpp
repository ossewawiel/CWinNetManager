// CUserInfo1020.cpp : Implementation of CCUserInfo1020

#include "stdafx.h"
#include "CUserInfo1020.h"


// CCUserInfo1020

STDMETHODIMP CCUserInfo1020::Initialise(ULONG ulUnitsPerWeek, BYTE bLogonHours)
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

STDMETHODIMP CCUserInfo1020::get_LogonHours(BYTE * pVal)
{
	*pVal = m_bLogonHours;
	return S_OK;
}


STDMETHODIMP CCUserInfo1020::Clear()
{
	m_ulUnitsPerWeek = 0;
	m_bLogonHours = 0;
	return S_OK;
}
