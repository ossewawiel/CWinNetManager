// CUserInfo1024.cpp : Implementation of CCUserInfo1024

#include "stdafx.h"
#include "CUserInfo1024.h"


// CCUserInfo1024

STDMETHODIMP CCUserInfo1024::Initialise(ULONG ulCountryCode)
{
	m_ulCountryCode = ulCountryCode;
	return S_OK;
}

STDMETHODIMP CCUserInfo1024::get_CountryCode(ULONG * pVal)
{
	*pVal = m_ulCountryCode;
	return S_OK;
}


STDMETHODIMP CCUserInfo1024::Clear()
{
	m_ulCountryCode = 0;
	return S_OK;
}
