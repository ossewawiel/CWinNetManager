// CUserInfo4.cpp : Implementation of CCUserInfo4

#include "stdafx.h"
#include "CUserInfo4.h"
#include "CUserInfoUtils.h"

// CCUserInfo4
STDMETHODIMP CCUserInfo4::Initialise(
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
	, BSTR  bsUserSid
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
	m_bLogonHours = bLogonHours;
	m_ulBadPwdCount = ulBadPwdCount;
	m_ulNumLogons = ulNumLogons;
	m_bsLogonServer.Assign(bsLogonServer);
	m_ulCountryCode = ulCountryCode;
	m_ulCodePage = ulCodePage;
	m_bsUserSid.Assign(bsUserSid);
	m_ulPrimaryGrpId = ulPrimaryGrpId;
	m_bsProfile.Assign(bsProfile);
	m_bsHomeDirDrive.Assign(bsHomeDirDrive);
	m_ulPwdExpired = ulPwdExpired;
	return S_OK;
}

STDMETHODIMP CCUserInfo4::get_Name(BSTR* pVal)
{
	*pVal = m_bsName.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_Password(BSTR* pVal)
{
	*pVal = m_bsPassword.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_PasswordAge(ULONG* pVal)
{
	*pVal = ULONG(m_ulPasswordAge);
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_Privilege(ULONG* pVal)
{
	*pVal = ULONG(m_ulPrivilege);
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_HomeDirectory(BSTR* pVal)
{
	*pVal = m_bsHomeDir.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_Comment(BSTR* pVal)
{
	*pVal = m_bsComment.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_Flags(ULONG* pVal)
{
	*pVal = ULONG(m_ulFlags);
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_ScriptPath(BSTR* pVal)
{
	*pVal = m_bsScriptPath.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_AuthFlags(ULONG* pVal)
{
	*pVal = ULONG(m_ulAuthFlags);
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_FullName(BSTR* pVal)
{
	*pVal = m_bsFullName.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_UsrComment(BSTR* pVal)
{
	*pVal = m_bsUsrComment.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_Params(BSTR* pVal)
{
	*pVal = m_bsParams.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_Workstations(BSTR* pVal)
{
	*pVal = m_bsWorkstations.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_LastLogon(ULONG* pVal)
{
	*pVal = ULONG(m_ulLastLogon);
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_LastLogoff(ULONG* pVal)
{
	*pVal = ULONG(m_ulLastLogoff);
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_AccntExpires(ULONG* pVal)
{
	*pVal = ULONG(m_ulAccntExpires);
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_MaxStorage(ULONG* pVal)
{
	*pVal = ULONG(m_ulMaxStorage);
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_UnitsPerWeek(ULONG* pVal)
{
	*pVal = ULONG(m_ulUnitsPerWeek);
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_LogonHours(ICLogonHours** pVal)
{
	m_bLogonHours.CopyTo(pVal);
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_BadPwdCount(ULONG* pVal)
{
	*pVal = ULONG(m_ulBadPwdCount);
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_NumLogons(ULONG* pVal)
{
	*pVal = ULONG(m_ulNumLogons);
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_LogonServer(BSTR* pVal)
{
	*pVal = m_bsLogonServer.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_CountryCode(ULONG* pVal)
{
	*pVal = ULONG(m_ulCountryCode);
	return S_OK;
}


STDMETHODIMP CCUserInfo4::get_CodePage(ULONG* pVal)
{
	*pVal = ULONG(m_ulCodePage);
	return S_OK;
}

STDMETHODIMP CCUserInfo4::get_UserSid(BSTR* pVal)
{
	*pVal = m_bsUserSid.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo4::get_PrimaryGrpId(ULONG* pVal)
{
	*pVal = ULONG(m_ulPrimaryGrpId);
	return S_OK;
}

STDMETHODIMP CCUserInfo4::get_Profile(BSTR* pVal)
{
	*pVal = m_bsProfile.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo4::get_HomeDirDrive(BSTR* pVal)
{
	*pVal = m_bsHomeDirDrive.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo4::get_PwdExpired(ULONG* pVal)
{
	*pVal = ULONG(m_ulPwdExpired);
	return S_OK;
}

HRESULT CCUserInfo4::TranslateToUserInfo(ICUserInfo4 * pFrom, USER_INFO_4 &pTo)
{
	//convert ICUserInfo4 to USER_INFO_4
	HRESULT hr(S_OK);
	if (hr = ToUserInfoName			<ICUserInfo4>(pFrom, pTo.usri4_name))			return hr;
	if (hr = ToUserInfoPassword		<ICUserInfo4>(pFrom, pTo.usri4_password))		return hr;
	if (hr = ToUserInfoPasswordAge	<ICUserInfo4>(pFrom, pTo.usri4_password_age))	return hr;
	if (hr = ToUserInfoPrivilege	<ICUserInfo4>(pFrom, pTo.usri4_priv))			return hr;
	if (hr = ToUserInfoHomeDirectory<ICUserInfo4>(pFrom, pTo.usri4_home_dir))		return hr;
	if (hr = ToUserInfoComment		<ICUserInfo4>(pFrom, pTo.usri4_comment))		return hr;
	if (hr = ToUserInfoFlags		<ICUserInfo4>(pFrom, pTo.usri4_flags))			return hr;
	if (hr = ToUserInfoScriptPath	<ICUserInfo4>(pFrom, pTo.usri4_script_path))	return hr;
	if (hr = ToUserInfoAuthFlags	<ICUserInfo4>(pFrom, pTo.usri4_auth_flags))		return hr;
	if (hr = ToUserInfoFullName		<ICUserInfo4>(pFrom, pTo.usri4_full_name))		return hr;
	if (hr = ToUserInfoUsrComment	<ICUserInfo4>(pFrom, pTo.usri4_usr_comment))	return hr;
	if (hr = ToUserInfoParams		<ICUserInfo4>(pFrom, pTo.usri4_parms))			return hr;
	if (hr = ToUserInfoWorkstations	<ICUserInfo4>(pFrom, pTo.usri4_workstations))	return hr;
	if (hr = ToUserInfoLastLogon	<ICUserInfo4>(pFrom, pTo.usri4_last_logon))		return hr;
	if (hr = ToUserInfoLastLogoff	<ICUserInfo4>(pFrom, pTo.usri4_last_logoff))	return hr;
	if (hr = ToUserInfoAccntExpires	<ICUserInfo4>(pFrom, pTo.usri4_acct_expires))	return hr;
	if (hr = ToUserInfoMaxStorage	<ICUserInfo4>(pFrom, pTo.usri4_max_storage))	return hr;
	if (hr = ToUserInfoUnitsPerWeek	<ICUserInfo4>(pFrom, pTo.usri4_units_per_week))	return hr;
	if (hr = ToUserInfoLogonHours	<ICUserInfo4>(pFrom, &pTo.usri4_logon_hours))	return hr;
	if (hr = ToUserInfoBadPwdCount	<ICUserInfo4>(pFrom, pTo.usri4_bad_pw_count))	return hr;
	if (hr = ToUserInfoNumLogons	<ICUserInfo4>(pFrom, pTo.usri4_num_logons))		return hr;
	if (hr = ToUserInfoLogonServer	<ICUserInfo4>(pFrom, pTo.usri4_logon_server))	return hr;
	if (hr = ToUserInfoCountryCode	<ICUserInfo4>(pFrom, pTo.usri4_country_code))	return hr;
	if (hr = ToUserInfoCodePage		<ICUserInfo4>(pFrom, pTo.usri4_code_page))		return hr;
	if (hr = ToUserInfoUserSid		<ICUserInfo4>(pFrom, pTo.usri4_user_sid))		return hr;
	if (hr = ToUserInfoPrimaryGrpId	<ICUserInfo4>(pFrom, pTo.usri4_primary_group_id)) return hr;
	if (hr = ToUserInfoProfile		<ICUserInfo4>(pFrom, pTo.usri4_profile))		return hr;
	if (hr = ToUserInfoHomeDirDrive	<ICUserInfo4>(pFrom, pTo.usri4_home_dir_drive))	return hr;
	if (hr = ToUserInfoPwdExpired	<ICUserInfo4>(pFrom, pTo.usri4_password_expired)) return hr;
	return hr;
}

HRESULT CCUserInfo4::TranslateFromUserInfo(LPUSER_INFO_4 pFrom, ICUserInfo4 ** ppTo)
{
	HRESULT hr(S_OK);
	if (hr = CCUserInfo4::CreateInstance(ppTo)) return hr;
	CComPtr<ICLogonHours> pLogonHours;
	if (hr = FromUserInfoLogonHours(pFrom->usri4_logon_hours, &pLogonHours)) return hr;
	_bstr_t bsSid;
	if (hr = FromUserInfoUserSid(pFrom->usri4_user_sid, bsSid.GetAddress())) return hr;
	return (*ppTo)->Initialise(
		_bstr_t(pFrom->usri4_name)
		, _bstr_t(pFrom->usri4_password)
		, pFrom->usri4_password_age
		, pFrom->usri4_priv
		, _bstr_t(pFrom->usri4_home_dir)
		, _bstr_t(pFrom->usri4_comment)
		, pFrom->usri4_flags
		, _bstr_t(pFrom->usri4_script_path)
		, pFrom->usri4_auth_flags
		, _bstr_t(pFrom->usri4_full_name)
		, _bstr_t(pFrom->usri4_usr_comment)
		, _bstr_t(pFrom->usri4_parms)
		, _bstr_t(pFrom->usri4_workstations)
		, pFrom->usri4_last_logon
		, pFrom->usri4_last_logoff
		, pFrom->usri4_acct_expires
		, pFrom->usri4_max_storage
		, pFrom->usri4_units_per_week
		, pLogonHours
		, pFrom->usri4_bad_pw_count
		, pFrom->usri4_num_logons
		, _bstr_t(pFrom->usri4_logon_server)
		, pFrom->usri4_country_code
		, pFrom->usri4_code_page
		, bsSid
		, pFrom->usri4_primary_group_id
		, _bstr_t(pFrom->usri4_profile)
		, _bstr_t(pFrom->usri4_home_dir_drive)
		, pFrom->usri4_password_expired);
}

STDMETHODIMP CCUserInfo4::Clear()
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
		m_bsUserSid = L"";
		m_ulPrimaryGrpId = 0;
		m_bsProfile = L"";
		m_bsHomeDirDrive = L"";
		m_ulPwdExpired = 0;
	return S_OK;
}
