// CUserInfo3.cpp : Implementation of CCUserInfo3

#include "stdafx.h"
#include "CUserInfo3.h"
#include "CUserInfoUtils.h"

// CCUserInfo3

STDMETHODIMP CCUserInfo3::Initialise(
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
	, ULONG ulCodePage
	, ULONG ulUserId
	, ULONG ulPrimaryGrpId
	, BSTR bsProfile
	, BSTR bsHomeDirDrive
	, ULONG ulPwdExpired)
{
	m_bsName.Assign(bsName);
	m_bsPassword.Assign(bsPassword);
	m_ulPasswordAge = ulPasswordAge;
	m_ulPrivilege = ulPrivilege;
	m_bsHomeDir.Assign(bsHomeDir);
	m_bsComment.Assign(bsComment);
	m_ulFlags = ulFlags;
	m_bsScriptPath.Assign(bsScriptPath);
	m_ulAuthFlags = ulAuthFlags;
	m_bsFullName.Assign(bsFullName);
	m_bsUsrComment.Assign(bsUsrComment);
	m_bsParams.Assign(bsParams);
	m_bsWorkstations.Assign(bsWorkstations);
	m_ulLastLogon = ulLastLogon;
	m_ulLastLogoff = ulLastLogoff;
	m_ulAccntExpires = ulAccntExpires;
	m_ulMaxStorage = ulMaxStorage;
	m_ulUnitsPerWeek = ulUnitsPerWeek;
	CComPtr<ICLogonHours>(bLogonHours).CopyTo(&m_bLogonHours);
	m_ulBadPwdCount = ulBadPwdCount;
	m_ulNumLogons = ulNumLogons;
	m_bsLogonServer.Assign(bsLogonServer);
	m_ulCountryCode = ulCountryCode;
	m_ulCodePage = ulCodePage;
	m_ulUserId = ulUserId;
	m_ulPrimaryGrpId = ulPrimaryGrpId;
	m_bsProfile.Assign(bsProfile);
	m_bsHomeDirDrive.Assign(bsHomeDirDrive);
	m_ulPwdExpired = ulPwdExpired;
	return S_OK;
}

STDMETHODIMP CCUserInfo3::get_Name(BSTR* pVal)
{
	*pVal = m_bsName.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_Password(BSTR* pVal)
{
	*pVal = m_bsPassword.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_PasswordAge(ULONG* pVal)
{
	*pVal = ULONG(m_ulPasswordAge);
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_Privilege(ULONG* pVal)
{
	*pVal = ULONG(m_ulPrivilege);
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_HomeDirectory(BSTR* pVal)
{
	*pVal = m_bsHomeDir.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_Comment(BSTR* pVal)
{
	*pVal = m_bsComment.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_Flags(ULONG* pVal)
{
	*pVal = ULONG(m_ulFlags);
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_ScriptPath(BSTR* pVal)
{
	*pVal = m_bsScriptPath.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_AuthFlags(ULONG* pVal)
{
	*pVal = ULONG(m_ulAuthFlags);
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_FullName(BSTR* pVal)
{
	*pVal = m_bsFullName.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_UsrComment(BSTR* pVal)
{
	*pVal = m_bsUsrComment.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_Params(BSTR* pVal)
{
	*pVal = m_bsParams.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_Workstations(BSTR* pVal)
{
	*pVal = m_bsWorkstations.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_LastLogon(ULONG* pVal)
{
	*pVal = ULONG(m_ulLastLogon);
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_LastLogoff(ULONG* pVal)
{
	*pVal = ULONG(m_ulLastLogoff);
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_AccntExpires(ULONG* pVal)
{
	*pVal = ULONG(m_ulAccntExpires);
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_MaxStorage(ULONG* pVal)
{
	*pVal = ULONG(m_ulMaxStorage);
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_UnitsPerWeek(ULONG* pVal)
{
	*pVal = ULONG(m_ulUnitsPerWeek);
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_LogonHours(ICLogonHours** pVal)
{
	m_bLogonHours.CopyTo(pVal);
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_BadPwdCount(ULONG* pVal)
{
	*pVal = ULONG(m_ulBadPwdCount);
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_NumLogons(ULONG* pVal)
{
	*pVal = ULONG(m_ulNumLogons);
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_LogonServer(BSTR* pVal)
{
	*pVal = m_bsLogonServer.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_CountryCode(ULONG* pVal)
{
	*pVal = ULONG(m_ulCountryCode);
	return S_OK;
}


STDMETHODIMP CCUserInfo3::get_CodePage(ULONG* pVal)
{
	*pVal = ULONG(m_ulCodePage);
	return S_OK;
}

STDMETHODIMP CCUserInfo3::get_UserId(ULONG* pVal)
{
	*pVal = ULONG(m_ulUserId);
	return S_OK;
}

STDMETHODIMP CCUserInfo3::get_PrimaryGrpId(ULONG* pVal)
{
	*pVal = ULONG(m_ulPrimaryGrpId);
	return S_OK;
}

STDMETHODIMP CCUserInfo3::get_Profile(BSTR* pVal)
{
	*pVal = m_bsProfile.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo3::get_HomeDirDrive(BSTR* pVal)
{
	*pVal = m_bsHomeDirDrive.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo3::get_PwdExpired(ULONG* pVal)
{
	*pVal = ULONG(m_ulPwdExpired);
	return S_OK;
}

HRESULT CCUserInfo3::TranslateToUserInfo(ICUserInfo3 * pFrom, USER_INFO_3 &pTo)
{
	//convert ICUserInfo3 to USER_INFO_3
	HRESULT hr(S_OK);
	if (hr = ToUserInfoName			<ICUserInfo3>(pFrom, pTo.usri3_name))			return hr;
	if (hr = ToUserInfoPassword		<ICUserInfo3>(pFrom, pTo.usri3_password))		return hr;
	if (hr = ToUserInfoPasswordAge	<ICUserInfo3>(pFrom, pTo.usri3_password_age))	return hr;
	if (hr = ToUserInfoPrivilege	<ICUserInfo3>(pFrom, pTo.usri3_priv))			return hr;
	if (hr = ToUserInfoHomeDirectory<ICUserInfo3>(pFrom, pTo.usri3_home_dir))		return hr;
	if (hr = ToUserInfoComment		<ICUserInfo3>(pFrom, pTo.usri3_comment))		return hr;
	if (hr = ToUserInfoFlags		<ICUserInfo3>(pFrom, pTo.usri3_flags))			return hr;
	if (hr = ToUserInfoScriptPath	<ICUserInfo3>(pFrom, pTo.usri3_script_path))	return hr;
	if (hr = ToUserInfoAuthFlags	<ICUserInfo3>(pFrom, pTo.usri3_auth_flags))		return hr;
	if (hr = ToUserInfoFullName		<ICUserInfo3>(pFrom, pTo.usri3_full_name))		return hr;
	if (hr = ToUserInfoUsrComment	<ICUserInfo3>(pFrom, pTo.usri3_usr_comment))	return hr;
	if (hr = ToUserInfoParams		<ICUserInfo3>(pFrom, pTo.usri3_parms))			return hr;
	if (hr = ToUserInfoWorkstations	<ICUserInfo3>(pFrom, pTo.usri3_workstations))	return hr;
	if (hr = ToUserInfoLastLogon	<ICUserInfo3>(pFrom, pTo.usri3_last_logon))		return hr;
	if (hr = ToUserInfoLastLogoff	<ICUserInfo3>(pFrom, pTo.usri3_last_logoff))	return hr;
	if (hr = ToUserInfoAccntExpires	<ICUserInfo3>(pFrom, pTo.usri3_acct_expires))	return hr;
	if (hr = ToUserInfoMaxStorage	<ICUserInfo3>(pFrom, pTo.usri3_max_storage))	return hr;
	if (hr = ToUserInfoUnitsPerWeek	<ICUserInfo3>(pFrom, pTo.usri3_units_per_week))	return hr;
	if (hr = ToUserInfoLogonHours	<ICUserInfo3>(pFrom, pTo.usri3_logon_hours))	return hr;
	if (hr = ToUserInfoBadPwdCount	<ICUserInfo3>(pFrom, pTo.usri3_bad_pw_count))	return hr;
	if (hr = ToUserInfoNumLogons	<ICUserInfo3>(pFrom, pTo.usri3_num_logons))		return hr;
	if (hr = ToUserInfoLogonServer	<ICUserInfo3>(pFrom, pTo.usri3_logon_server))	return hr;
	if (hr = ToUserInfoCountryCode	<ICUserInfo3>(pFrom, pTo.usri3_country_code))	return hr;
	if (hr = ToUserInfoCodePage		<ICUserInfo3>(pFrom, pTo.usri3_code_page))		return hr;
	if (hr = ToUserInfoUserId		<ICUserInfo3>(pFrom, pTo.usri3_user_id))		return hr;
	if (hr = ToUserInfoPrimaryGrpId	<ICUserInfo3>(pFrom, pTo.usri3_primary_group_id)) return hr;
	if (hr = ToUserInfoProfile		<ICUserInfo3>(pFrom, pTo.usri3_profile))		return hr;
	if (hr = ToUserInfoHomeDirDrive	<ICUserInfo3>(pFrom, pTo.usri3_home_dir_drive))	return hr;
	if (hr = ToUserInfoPwdExpired	<ICUserInfo3>(pFrom, pTo.usri3_password_expired)) return hr;
	return hr;
}

STDMETHODIMP CCUserInfo3::Clear()
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
	m_ulUserId = 0;
	m_ulPrimaryGrpId = 0;
	m_bsProfile = L"";
	m_bsHomeDirDrive = L"";
	m_ulPwdExpired = 0;
	return S_OK;
}
