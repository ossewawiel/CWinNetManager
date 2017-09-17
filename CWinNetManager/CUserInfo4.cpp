// CUserInfo4.cpp : Implementation of CCUserInfo4

#include "stdafx.h"
#include "CUserInfo4.h"


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
	, BYTE  bLogonHours
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


STDMETHODIMP CCUserInfo4::get_LogonHours(BYTE* pVal)
{
	*pVal = BYTE(m_bLogonHours);
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
		m_bLogonHours = 0;
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
