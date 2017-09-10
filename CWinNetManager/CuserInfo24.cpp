// CUserInfo24.cpp : Implementation of CCUserInfo24

#include "stdafx.h"
#include "CUserInfo24.h"


// CCUserInfo24

STDMETHODIMP CCUserInfo24::Initialise(
	SHORT shInternetIdentity
	, ULONG ulFlags
	, BSTR bsInternetProviderName
	, BSTR bsInternetPrincipleName
	, BSTR bsUserSid)
{
	m_shInternetIdentity = shInternetIdentity;
	m_ulFlags = ulFlags;
	m_bsInternetProviderName.Assign(bsInternetProviderName);
	m_bsInternetPrincipleName.Assign(bsInternetPrincipleName);
	m_bsUserSid.Assign(bsUserSid);
	return S_OK;
}

STDMETHODIMP CCUserInfo24::get_InternetIdentity(SHORT * pVal)
{
	*pVal = SHORT(m_shInternetIdentity);
	return S_OK;
}

STDMETHODIMP CCUserInfo24::get_Flags(ULONG * pVal)
{
	*pVal = ULONG(m_ulFlags);
	return S_OK;
}

STDMETHODIMP CCUserInfo24::get_InternetProviderName(BSTR * pVal)
{
	*pVal = m_bsInternetProviderName.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo24::get_InternetPrincipleName(BSTR * pVal)
{
	*pVal = m_bsInternetPrincipleName.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo24::get_UserSid(BSTR * pVal)
{
	*pVal = m_bsUserSid.copy();
	return S_OK;
}
