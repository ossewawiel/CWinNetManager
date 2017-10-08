// CUserInfo11.cpp : Implementation of CCUserInfo11

#include "stdafx.h"
#include "CUserInfo11.h"
#include "CUserInfoUtils.h"

// CCUserInfo11
STDMETHODIMP CCUserInfo11::Initialise(
	BSTR bsName
	, BSTR bsComment
	, BSTR bsUsrComment
	, BSTR bsFullName
	, ULONG ulPrivilege
	, ULONG ulAuthFlags
	, ULONG ulPasswordAge
	, BSTR bsHomeDir
	, BSTR bsParams
	, ULONG ulLastLogon
	, ULONG ulLastLogoff
	, ULONG ulBadPwdCount
	, ULONG ulNumLogons
	, BSTR bsLogonServer
	, ULONG ulCountryCode
	, BSTR bsWorkstations
	, ULONG ulMaxStorage
	, ULONG ulUnitsPerWeek
	, ICLogonHours* bLogonHours
	, ULONG ulCodePage)
{
	m_bsName.Assign(bsName);
	m_bsComment.Assign(bsComment);
	m_bsUsrComment.Assign(bsUsrComment);
	m_bsFullName.Assign(bsFullName);
	m_ulPrivilege = ulPrivilege;
	m_ulAuthFlags = ulAuthFlags;
	m_ulPasswordAge = ulPasswordAge;
	m_bsHomeDir.Assign(bsHomeDir);
	m_bsParams.Assign(bsParams);
	m_ulLastLogon = ulLastLogon;
	m_ulLastLogoff = ulLastLogoff;
	m_ulBadPwdCount = ulBadPwdCount;
	m_ulNumLogons = ulNumLogons;
	m_bsLogonServer.Assign(bsLogonServer);
	m_ulCountryCode = ulCountryCode;
	m_bsWorkstations.Assign(bsWorkstations);
	m_ulMaxStorage = ulMaxStorage;
	m_ulUnitsPerWeek = ulUnitsPerWeek;
	m_bLogonHours = bLogonHours;
	m_ulCodePage = ulCodePage;
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_Name(BSTR * pVal)
{
	*pVal = m_bsName.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_Comment(BSTR * pVal)
{
	*pVal = m_bsComment.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_UsrComment(BSTR * pVal)
{
	*pVal = m_bsUsrComment.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_FullName(BSTR * pVal)
{
	*pVal = m_bsFullName.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_Privilege(ULONG * pVal)
{
	*pVal = ULONG(m_ulPrivilege);
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_AuthFlags(ULONG * pVal)
{
	*pVal = ULONG(m_ulAuthFlags);
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_PasswordAge(ULONG * pVal)
{
	*pVal = ULONG(m_ulPasswordAge);
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_HomeDirectory(BSTR * pVal)
{
	*pVal = m_bsHomeDir.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_Params(BSTR * pVal)
{
	*pVal = m_bsParams.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_LastLogon(ULONG * pVal)
{
	*pVal = ULONG(m_ulLastLogon);
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_LastLogoff(ULONG * pVal)
{
	*pVal = ULONG(m_ulLastLogoff);
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_BadPwdCount(ULONG * pVal)
{
	*pVal = ULONG(m_ulBadPwdCount);
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_NumLogons(ULONG * pVal)
{
	*pVal = ULONG(m_ulNumLogons);
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_LogonServer(BSTR * pVal)
{
	*pVal = m_bsLogonServer.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_CountryCode(ULONG * pVal)
{
	*pVal = ULONG(m_ulCountryCode);
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_Workstations(BSTR * pVal)
{
	*pVal = m_bsWorkstations.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_MaxStorage(ULONG * pVal)
{
	*pVal = ULONG(m_ulMaxStorage);
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_UnitsPerWeek(ULONG * pVal)
{
	*pVal = ULONG(m_ulUnitsPerWeek);
	return S_OK;
}

STDMETHODIMP CCUserInfo11::get_LogonHours(ICLogonHours* * pVal)
{
	return m_bLogonHours.CopyTo(pVal);
}

STDMETHODIMP CCUserInfo11::get_CodePage(ULONG * pVal)
{
	*pVal = ULONG(m_ulCodePage);
	return S_OK;
}


HRESULT CCUserInfo11::TranslateFromUserInfo(LPUSER_INFO_11 pFrom, ICUserInfo11 ** ppTo)
{
	HRESULT hr(S_OK);
	if (hr = CCUserInfo11::CreateInstance(ppTo)) return hr;
	CComPtr<ICLogonHours> pLogonHours;
	if (hr = FromUserInfoLogonHours(pFrom->usri11_logon_hours, &pLogonHours)) return hr;
	return (*ppTo)->Initialise(
		_bstr_t(pFrom->usri11_name)
		, _bstr_t(pFrom->usri11_comment)
		, _bstr_t(pFrom->usri11_usr_comment)
		, _bstr_t(pFrom->usri11_full_name)
		, pFrom->usri11_priv
		, pFrom->usri11_auth_flags
		, pFrom->usri11_password_age
		, _bstr_t(pFrom->usri11_home_dir)
		, _bstr_t(pFrom->usri11_parms)
		, pFrom->usri11_last_logon
		, pFrom->usri11_last_logoff
		, pFrom->usri11_bad_pw_count
		, pFrom->usri11_num_logons
		, _bstr_t(pFrom->usri11_logon_server)
		, pFrom->usri11_country_code
		, _bstr_t(pFrom->usri11_workstations)
		, pFrom->usri11_max_storage
		, pFrom->usri11_units_per_week
		, pLogonHours
		, pFrom->usri11_code_page);
}

STDMETHODIMP CCUserInfo11::Clear()
{
	m_bsName = L"";
	m_bsComment = L"";
	m_bsUsrComment = L"";
	m_bsFullName = L"";
	m_ulPrivilege = 0;
	m_ulAuthFlags = 0;
	m_ulPasswordAge = 0;
	m_bsHomeDir = L"";
	m_bsParams = L"";
	m_ulLastLogon = 0;
	m_ulLastLogoff = 0;
	m_ulBadPwdCount = 0;
	m_ulNumLogons = 0;
	m_bsLogonServer = L"";
	m_ulCountryCode = 0;
	m_bsWorkstations = L"";
	m_ulMaxStorage = 0;
	m_ulUnitsPerWeek = 0;
	m_bLogonHours->ClearAll();
	m_ulCodePage = 0;
	return S_OK;
}
