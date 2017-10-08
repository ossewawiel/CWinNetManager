// CUserInfo24.cpp : Implementation of CCUserInfo24

#include "stdafx.h"
#include "CUserInfo24.h"
#include "CUserInfoUtils.h"

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

HRESULT CCUserInfo24::TranslateFromUserInfo(LPUSER_INFO_24 pFrom, ICUserInfo24 ** ppTo)
{
	HRESULT hr(S_OK);
	if (hr = CCUserInfo24::CreateInstance(ppTo)) return hr;
	_bstr_t bsSid;
	if (hr = FromUserInfoUserSid(pFrom->usri24_user_sid, bsSid.GetAddress())) return hr;
	return (*ppTo)->Initialise(
		pFrom->usri24_internet_identity
		, pFrom->usri24_flags
		, _bstr_t(pFrom->usri24_internet_provider_name)
		, _bstr_t(pFrom->usri24_internet_principal_name)
		, bsSid);
}


STDMETHODIMP CCUserInfo24::Clear()
{
	m_shInternetIdentity = 0;
	m_ulFlags = 0;
	m_bsInternetProviderName = L"";
	m_bsInternetPrincipleName = L"";
	m_bsUserSid = L"";
	return S_OK;
}
