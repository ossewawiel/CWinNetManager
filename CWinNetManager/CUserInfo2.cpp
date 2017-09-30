// CUserInfo2.cpp : Implementation of CCUserInfo2

#include "stdafx.h"
#include "CUserInfo2.h"
#include "CUserInfoUtils.h"

// CCUserInfo2



STDMETHODIMP CCUserInfo2::get_Name(BSTR* pVal)
{
	*pVal = m_bsName.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_Password(BSTR* pVal)
{
	*pVal = m_bsPassword.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_PasswordAge(ULONG* pVal)
{
	*pVal = ULONG(m_ulPasswordAge);
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_Privilege(ULONG* pVal)
{
	*pVal = ULONG(m_ulPrivilege);
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_HomeDirectory(BSTR* pVal)
{
	*pVal = m_bsHomeDir.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_Comment(BSTR* pVal)
{
	*pVal = m_bsComment.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_Flags(ULONG* pVal)
{
	*pVal = ULONG(m_ulFlags);
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_ScriptPath(BSTR* pVal)
{
	*pVal = m_bsScriptPath.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_AuthFlags(ULONG* pVal)
{
	*pVal = ULONG(m_ulAuthFlags);
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_FullName(BSTR* pVal)
{
	*pVal = m_bsFullName.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_UsrComment(BSTR* pVal)
{
	*pVal = m_bsUsrComment.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_Params(BSTR* pVal)
{
	*pVal = m_bsParams.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_Workstations(BSTR* pVal)
{
	*pVal = m_bsWorkstations.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_LastLogon(ULONG* pVal)
{
	*pVal = ULONG(m_ulLastLogon);
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_LastLogoff(ULONG* pVal)
{
	*pVal = ULONG(m_ulLastLogoff);
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_AccntExpires(ULONG* pVal)
{
	*pVal = ULONG(m_ulAccntExpires);
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_MaxStorage(ULONG* pVal)
{
	*pVal = ULONG(m_ulMaxStorage);
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_UnitsPerWeek(ULONG* pVal)
{
	*pVal = ULONG(m_ulUnitsPerWeek);
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_LogonHours(ICLogonHours** pVal)
{
	m_bLogonHours.CopyTo(pVal);
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_BadPwdCount(ULONG* pVal)
{
	*pVal = ULONG(m_ulBadPwdCount);
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_NumLogons(ULONG* pVal)
{
	*pVal = ULONG(m_ulNumLogons);
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_LogonServer(BSTR* pVal)
{
	*pVal = m_bsLogonServer.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_CountryCode(ULONG* pVal)
{
	*pVal = ULONG(m_ulCountryCode);
	return S_OK;
}


STDMETHODIMP CCUserInfo2::get_CodePage(ULONG* pVal)
{
	*pVal = ULONG(m_ulCodePage);
	return S_OK;
}


STDMETHODIMP CCUserInfo2::Initialise (
	  BSTR  bsName
	, BSTR  bsPassword
	, ULONG ulPasswordAge
	, ULONG ulPrivilege
	, BSTR  bsHomeDir
	, BSTR  bsComment
	, ULONG ulFlags
	, BSTR  bsScriptPath
	, ULONG ulAuthFlags
	, BSTR  bsFullName
	, BSTR  bsUsrComment
	, BSTR  bsParams
	, BSTR  bsWorkstations
	, ULONG ulLastLogon
	, ULONG ulLastLogoff
	, ULONG ulAccntExpires
	, ULONG ulMaxStorage
	, ULONG ulUnitsPerWeek
	, ICLogonHours*  bLogonHours
	, ULONG ulBadPwdCount
	, ULONG ulNumLogons
	, BSTR  bsLogonServer
	, ULONG ulCountryCode
	, ULONG ulCodePage)
{
	m_bsName.Assign       (bsName);
	m_bsPassword.Assign   (bsPassword);
	m_ulPasswordAge      = ulPasswordAge;
	m_ulPrivilege        = ulPrivilege;
	m_bsHomeDir.Assign    (bsHomeDir);
	m_bsComment.Assign    (bsComment);
	m_ulFlags            = ulFlags;
	m_bsScriptPath.Assign (bsScriptPath);
	m_ulAuthFlags        = ulAuthFlags;
	m_bsFullName.Assign   (bsFullName);
	m_bsUsrComment.Assign (bsUsrComment);
	m_bsParams.Assign     (bsParams);
	m_bsWorkstations.Assign(bsWorkstations);
	m_ulLastLogon        = ulLastLogon;
	m_ulLastLogoff       = ulLastLogoff;
	m_ulAccntExpires     = ulAccntExpires;
	m_ulMaxStorage       = ulMaxStorage;
	m_ulUnitsPerWeek     = ulUnitsPerWeek;
	m_bLogonHours        = bLogonHours;
	m_ulBadPwdCount      = ulBadPwdCount;
	m_ulNumLogons        = ulNumLogons;
	m_bsLogonServer.Assign(bsLogonServer);
	m_ulCountryCode      = ulCountryCode;
	m_ulCodePage         = ulCodePage;
	return S_OK;
}

HRESULT CCUserInfo2::TranslateToUserInfo(ICUserInfo2 * pFrom, USER_INFO_2 &pTo)
{
	//convert ICUserInfo2 to USER_INFO_2
	HRESULT hr(S_OK);
	if (hr = ToUserInfoName			<ICUserInfo2>(pFrom, pTo.usri2_name))			return hr;
	if (hr = ToUserInfoPassword		<ICUserInfo2>(pFrom, pTo.usri2_password))		return hr;
	if (hr = ToUserInfoPasswordAge	<ICUserInfo2>(pFrom, pTo.usri2_password_age))	return hr;
	if (hr = ToUserInfoPrivilege	<ICUserInfo2>(pFrom, pTo.usri2_priv))			return hr;
	if (hr = ToUserInfoHomeDirectory<ICUserInfo2>(pFrom, pTo.usri2_home_dir))		return hr;
	if (hr = ToUserInfoComment		<ICUserInfo2>(pFrom, pTo.usri2_comment))		return hr;
	if (hr = ToUserInfoFlags		<ICUserInfo2>(pFrom, pTo.usri2_flags))			return hr;
	if (hr = ToUserInfoScriptPath	<ICUserInfo2>(pFrom, pTo.usri2_script_path))	return hr;
	if (hr = ToUserInfoAuthFlags	<ICUserInfo2>(pFrom, pTo.usri2_auth_flags))		return hr;
	if (hr = ToUserInfoFullName		<ICUserInfo2>(pFrom, pTo.usri2_full_name))		return hr;
	if (hr = ToUserInfoUsrComment	<ICUserInfo2>(pFrom, pTo.usri2_usr_comment))	return hr;
	if (hr = ToUserInfoParams		<ICUserInfo2>(pFrom, pTo.usri2_parms))			return hr;
	if (hr = ToUserInfoWorkstations	<ICUserInfo2>(pFrom, pTo.usri2_workstations))	return hr;
	if (hr = ToUserInfoLastLogon	<ICUserInfo2>(pFrom, pTo.usri2_last_logon))		return hr;
	if (hr = ToUserInfoLastLogoff	<ICUserInfo2>(pFrom, pTo.usri2_last_logoff))	return hr;
	if (hr = ToUserInfoAccntExpires	<ICUserInfo2>(pFrom, pTo.usri2_acct_expires))	return hr;
	if (hr = ToUserInfoMaxStorage	<ICUserInfo2>(pFrom, pTo.usri2_max_storage))	return hr;
	if (hr = ToUserInfoUnitsPerWeek	<ICUserInfo2>(pFrom, pTo.usri2_units_per_week))	return hr;
	if (hr = ToUserInfoLogonHours	<ICUserInfo2>(pFrom, pTo.usri2_logon_hours))	return hr;
	if (hr = ToUserInfoBadPwdCount	<ICUserInfo2>(pFrom, pTo.usri2_bad_pw_count))	return hr;
	if (hr = ToUserInfoNumLogons	<ICUserInfo2>(pFrom, pTo.usri2_num_logons))	return hr;
	if (hr = ToUserInfoLogonServer	<ICUserInfo2>(pFrom, pTo.usri2_logon_server))	return hr;
	if (hr = ToUserInfoCountryCode	<ICUserInfo2>(pFrom, pTo.usri2_country_code))	return hr;
	if (hr = ToUserInfoCodePage		<ICUserInfo2>(pFrom, pTo.usri2_code_page))	return hr;
	return hr;
}


STDMETHODIMP CCUserInfo2::Clear()
{
	m_bsName = L"";
	m_bsPassword = L"";
	m_ulPasswordAge = 0;
	m_ulPrivilege = 0;
	m_bsHomeDir = L"";
	m_bsComment = L"";
	m_ulFlags = 0;
	m_bsScriptPath = L"";
	m_ulAuthFlags = 0;
	m_bsFullName = L"";
	m_bsUsrComment = L"";
	m_bsParams = L"";
	m_bsWorkstations = L"";
	m_ulLastLogon = 0;
	m_ulLastLogoff = 0;
	m_ulAccntExpires = 0;
	m_ulMaxStorage = 0;
	m_ulUnitsPerWeek = 0;
	m_bLogonHours->ClearAll();
	m_ulBadPwdCount = 0;
	m_ulNumLogons = 0;
	m_bsLogonServer = L"";
	m_ulCountryCode = 0;
	m_ulCodePage = 0;
	return S_OK;
}
