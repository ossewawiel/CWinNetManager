// CNetUser.cpp : Implementation of CCNetUser

#include "stdafx.h"
#include "CNetUser.h"
#include "CUserInfoUtils.h"

// CCNetUser

STDMETHODIMP CCNetUser::GetUserInfo0(BSTR bsName, ICUserInfo0** ppUserInfo0)
{
	HRESULT hr = CCUserInfo0::CreateInstance(ppUserInfo0);
	if (hr) return hr;

	return (*ppUserInfo0)->Initialise(bsName);
}

STDMETHODIMP CCNetUser::GetUserInfo1(
	  BSTR  bsName
	, BSTR  bsPwd
	, ULONG ulPwdAge
	, ULONG ulPriv
	, BSTR  bsHomeDir
	, BSTR  bsComment
	, ULONG ulFlags
	, BSTR  bsScriptPath
	, ICUserInfo1** ppUserInfo1)
{
	HRESULT hr = CCUserInfo1::CreateInstance(ppUserInfo1);
	if (hr) return hr;
	
	return (*ppUserInfo1)->Initialise(
		  bsName
		, bsPwd
		, ulPwdAge
		, ulPriv
		, bsHomeDir
		, bsComment
		, ulFlags
		, bsScriptPath);
}

STDMETHODIMP CCNetUser::GetUserInfo2(
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
	, ICUserInfo2** ppUserInfo2)
{
	HRESULT hr = CCUserInfo2::CreateInstance(ppUserInfo2);
	if (hr) return hr;

	return (*ppUserInfo2)->Initialise(
		  bsName
		, bsPassword
		, ulPasswordAge
		, ulPrivilege
		, bsHomeDir
		, bsComment
		, ulFlags
		, bsScriptPath
		, ulAuthFlags
		, bsFullName
		, bsUsrComment
		, bsParams
		, bsWorkstations
		, ulLastLogon
		, ulLastLogoff
		, ulAccntExpires
		, ulMaxStorage
		, ulUnitsPerWeek
		, bLogonHours
		, ulBadPwdCount
		, ulNumLogons
		, bsLogonServer
		, ulCountryCode
		, ulCodePage);
}

STDMETHODIMP CCNetUser::GetUserInfo3(
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
	, BSTR  bsProfile
	, BSTR  bsHomeDirDrive
	, ULONG ulPwdExpired
	, ICUserInfo3** ppUserInfo3)
{
	HRESULT hr = CCUserInfo3::CreateInstance(ppUserInfo3);
	if (hr) return hr;

	return (*ppUserInfo3)->Initialise(
		  bsName
		, bsPassword
		, ulPasswordAge
		, ulPrivilege
		, bsHomeDir
		, bsComment
		, ulFlags
		, bsScriptPath
		, ulAuthFlags
		, bsFullName
		, bsUsrComment
		, bsParams
		, bsWorkstations
		, ulLastLogon
		, ulLastLogoff
		, ulAccntExpires
		, ulMaxStorage
		, ulUnitsPerWeek
		, bLogonHours
		, ulBadPwdCount
		, ulNumLogons
		, bsLogonServer
		, ulCountryCode
		, ulCodePage
		, ulUserId
		, ulPrimaryGrpId
		, bsProfile
		, bsHomeDirDrive
		, ulPwdExpired);
}

STDMETHODIMP CCNetUser::GetUserInfo4(
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
	, BSTR  bsProfile
	, BSTR  bsHomeDirDrive
	, ULONG ulPwdExpired
	, ICUserInfo4** ppUserInfo4)
{
	HRESULT hr = CCUserInfo4::CreateInstance(ppUserInfo4);
	if (hr) return hr;

	return (*ppUserInfo4)->Initialise(
		bsName
		, bsPassword
		, ulPasswordAge
		, ulPrivilege
		, bsHomeDir
		, bsComment
		, ulFlags
		, bsScriptPath
		, ulAuthFlags
		, bsFullName
		, bsUsrComment
		, bsParams
		, bsWorkstations
		, ulLastLogon
		, ulLastLogoff
		, ulAccntExpires
		, ulMaxStorage
		, ulUnitsPerWeek
		, bLogonHours
		, ulBadPwdCount
		, ulNumLogons
		, bsLogonServer
		, ulCountryCode
		, ulCodePage
		, bsUserSid
		, ulPrimaryGrpId
		, bsProfile
		, bsHomeDirDrive
		, ulPwdExpired);
}

STDMETHODIMP CCNetUser::GetUserInfo10(
	BSTR  bsName
	, BSTR  bsComment
	, BSTR  bsUsrComment
	, BSTR  bsFullName
	, ICUserInfo10** ppUserInfo10)
{
	HRESULT hr = CCUserInfo10::CreateInstance(ppUserInfo10);
	if (hr) return hr;

	return (*ppUserInfo10)->Initialise(
		bsName
		, bsComment
		, bsUsrComment
		, bsFullName);
}

STDMETHODIMP CCNetUser::GetUserInfo11 (
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
	, ULONG ulCodePage
	, ICUserInfo11** ppUserInfo11)
{
	HRESULT hr = CCUserInfo11::CreateInstance(ppUserInfo11);
	if (hr) return hr;

	return (*ppUserInfo11)->Initialise(
		bsName
		, bsComment
		, bsUsrComment
		, bsFullName
		, ulPrivilege
		, ulAuthFlags
		, ulPasswordAge
		, bsHomeDir
		, bsParams
		, ulLastLogon
		, ulLastLogoff
		, ulBadPwdCount
		, ulNumLogons
		, bsLogonServer
		, ulCountryCode
		, bsWorkstations
		, ulMaxStorage
		, ulUnitsPerWeek
		, bLogonHours
		, ulCodePage);
}

STDMETHODIMP CCNetUser::GetUserInfo20(
	BSTR bsName
	, BSTR bsFullName
	, BSTR bsComment
	, ULONG ulFlags
	, ULONG ulUserId
	, ICUserInfo20** ppUserInfo20)
{
	HRESULT hr = CCUserInfo20::CreateInstance(ppUserInfo20);
	if (hr) return hr;

	return (*ppUserInfo20)->Initialise(
		bsName
		, bsFullName
		, bsComment
		, ulFlags
		, ulUserId);
}

STDMETHODIMP CCNetUser::GetUserInfo21(BSTR bsPassword, ICUserInfo21 ** ppUserInfo21)
{
	HRESULT hr = CCUserInfo21::CreateInstance(ppUserInfo21);
	if (hr) return hr;

	return (*ppUserInfo21)->Initialise(bsPassword);
}

STDMETHODIMP CCNetUser::GetUserInfo22(
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
	, ICUserInfo22** ppUserInfo22)
{
	HRESULT hr = CCUserInfo22::CreateInstance(ppUserInfo22);
	if (hr) return hr;

	return (*ppUserInfo22)->Initialise(
		bsName
		, bsPassword
		, ulPasswordAge
		, ulPrivilege
		, bsHomeDir
		, bsComment
		, ulFlags
		, bsScriptPath
		, ulAuthFlags
		, bsFullName
		, bsUsrComment
		, bsParams
		, bsWorkstations
		, ulLastLogon
		, ulLastLogoff
		, ulAccntExpires
		, ulMaxStorage
		, ulUnitsPerWeek
		, bLogonHours
		, ulBadPwdCount
		, ulNumLogons
		, bsLogonServer
		, ulCountryCode
		, ulCodePage);
}

STDMETHODIMP CCNetUser::GetUserInfo23(
	BSTR bsName
	, BSTR bsFullName
	, BSTR bsComment
	, ULONG ulFlags
	, BSTR bsUserSid
	, ICUserInfo23 ** ppUserInfo23)
{
	HRESULT hr = CCUserInfo23::CreateInstance(ppUserInfo23);
	if (hr) return hr;

	return (*ppUserInfo23)->Initialise(
		bsName
		, bsFullName
		, bsComment
		, ulFlags
		, bsUserSid);
}

STDMETHODIMP CCNetUser::GetUserInfo24(
	SHORT shInternetIdentity
	, ULONG ulFlags
	, BSTR bsInternetProviderName
	, BSTR bsInternetPrincipleName
	, BSTR bsUserSid
	, ICUserInfo24 ** ppUserInfo24)
{
	HRESULT hr = CCUserInfo24::CreateInstance(ppUserInfo24);
	if (hr) return hr;

	return (*ppUserInfo24)->Initialise(
		shInternetIdentity
		, ulFlags
		, bsInternetProviderName
		, bsInternetPrincipleName
		, bsUserSid);
}

STDMETHODIMP CCNetUser::GetUserInfo1003(BSTR bsPassword, ICUserInfo1003 ** ppUserInfo1003)
{
	HRESULT hr = CCUserInfo1003::CreateInstance(ppUserInfo1003);
	if (hr) return hr;

	return (*ppUserInfo1003)->Initialise(bsPassword);
}

STDMETHODIMP CCNetUser::GetUserInfo1005(ULONG ulPrivilege, ICUserInfo1005 ** ppUserInfo1005)
{
	HRESULT hr = CCUserInfo1005::CreateInstance(ppUserInfo1005);
	if (hr) return hr;

	return (*ppUserInfo1005)->Initialise(ulPrivilege);
}

STDMETHODIMP CCNetUser::GetUserInfo1006(BSTR bsHomeDir, ICUserInfo1006 ** ppUserInfo1006)
{
	HRESULT hr = CCUserInfo1006::CreateInstance(ppUserInfo1006);
	if (hr) return hr;

	return (*ppUserInfo1006)->Initialise(bsHomeDir);
}

STDMETHODIMP CCNetUser::GetUserInfo1007(BSTR bsComment, ICUserInfo1007 ** ppUserInfo1007)
{
	HRESULT hr = CCUserInfo1007::CreateInstance(ppUserInfo1007);
	if (hr) return hr;

	return (*ppUserInfo1007)->Initialise(bsComment);
}

STDMETHODIMP CCNetUser::GetUserInfo1008(ULONG ulFlags, ICUserInfo1008 ** ppUserInfo1008)
{
	HRESULT hr = CCUserInfo1008::CreateInstance(ppUserInfo1008);
	if (hr) return hr;

	return (*ppUserInfo1008)->Initialise(ulFlags);
}

STDMETHODIMP CCNetUser::GetUserInfo1009(BSTR bsScriptPath, ICUserInfo1009 ** ppUserInfo1009)
{
	HRESULT hr = CCUserInfo1009::CreateInstance(ppUserInfo1009);
	if (hr) return hr;

	return (*ppUserInfo1009)->Initialise(bsScriptPath);
}

STDMETHODIMP CCNetUser::GetUserInfo1010(ULONG ulAuthFlags, ICUserInfo1010 ** ppUserInfo1010)
{
	HRESULT hr = CCUserInfo1010::CreateInstance(ppUserInfo1010);
	if (hr) return hr;

	return (*ppUserInfo1010)->Initialise(ulAuthFlags);
}

STDMETHODIMP CCNetUser::GetUserInfo1011(BSTR bsFullName, ICUserInfo1011 ** ppUserInfo1011)
{
	HRESULT hr = CCUserInfo1011::CreateInstance(ppUserInfo1011);
	if (hr) return hr;

	return (*ppUserInfo1011)->Initialise(bsFullName);
}

STDMETHODIMP CCNetUser::GetUserInfo1012(BSTR bsUsrComment, ICUserInfo1012 ** ppUserInfo1012)
{
	HRESULT hr = CCUserInfo1012::CreateInstance(ppUserInfo1012);
	if (hr) return hr;

	return (*ppUserInfo1012)->Initialise(bsUsrComment);
}

STDMETHODIMP CCNetUser::GetUserInfo1013(BSTR bsParams, ICUserInfo1013 ** ppUserInfo1013)
{
	HRESULT hr = CCUserInfo1013::CreateInstance(ppUserInfo1013);
	if (hr) return hr;

	return (*ppUserInfo1013)->Initialise(bsParams);
}

STDMETHODIMP CCNetUser::GetUserInfo1014(BSTR bsWorkstations, ICUserInfo1014 ** ppUserInfo1014)
{
	HRESULT hr = CCUserInfo1014::CreateInstance(ppUserInfo1014);
	if (hr) return hr;

	return (*ppUserInfo1014)->Initialise(bsWorkstations);
}

STDMETHODIMP CCNetUser::GetUserInfo1017(ULONG ulAccntExpires, ICUserInfo1017 ** ppUserInfo1017)
{
	HRESULT hr = CCUserInfo1017::CreateInstance(ppUserInfo1017);
	if (hr) return hr;

	return (*ppUserInfo1017)->Initialise(ulAccntExpires);
}

STDMETHODIMP CCNetUser::GetUserInfo1018(ULONG ulMaxStorage, ICUserInfo1018 ** ppUserInfo1018)
{
	HRESULT hr = CCUserInfo1018::CreateInstance(ppUserInfo1018);
	if (hr) return hr;

	return (*ppUserInfo1018)->Initialise(ulMaxStorage);
}

STDMETHODIMP CCNetUser::GetUserInfo1020(ULONG ulUnitsPerWeek, ICLogonHours* bLogonHours, ICUserInfo1020 ** ppUserInfo1020)
{
	HRESULT hr = CCUserInfo1020::CreateInstance(ppUserInfo1020);
	if (hr) return hr;

	return (*ppUserInfo1020)->Initialise(ulUnitsPerWeek, bLogonHours);
}

STDMETHODIMP CCNetUser::GetUserInfo1023(BSTR bsLogonServer, ICUserInfo1023 ** ppUserInfo1023)
{
	HRESULT hr = CCUserInfo1023::CreateInstance(ppUserInfo1023);
	if (hr) return hr;

	return (*ppUserInfo1023)->Initialise(bsLogonServer);
}

STDMETHODIMP CCNetUser::GetUserInfo1024(ULONG ulCountryCode, ICUserInfo1024 ** ppUserInfo1024)
{
	HRESULT hr = CCUserInfo1024::CreateInstance(ppUserInfo1024);
	if (hr) return hr;

	return (*ppUserInfo1024)->Initialise(ulCountryCode);
}

STDMETHODIMP CCNetUser::GetUserInfo1025(ULONG ulCodePage, ICUserInfo1025 ** ppUserInfo1025)
{
	HRESULT hr = CCUserInfo1025::CreateInstance(ppUserInfo1025);
	if (hr) return hr;

	return (*ppUserInfo1025)->Initialise(ulCodePage);
}

STDMETHODIMP CCNetUser::GetUserInfo1051(ULONG ulPrimaryGrpId, ICUserInfo1051 ** ppUserInfo1051)
{
	HRESULT hr = CCUserInfo1051::CreateInstance(ppUserInfo1051);
	if (hr) return hr;

	return (*ppUserInfo1051)->Initialise(ulPrimaryGrpId);
}

STDMETHODIMP CCNetUser::GetUserInfo1052(BSTR bsProfile, ICUserInfo1052 ** ppUserInfo1052)
{
	HRESULT hr = CCUserInfo1052::CreateInstance(ppUserInfo1052);
	if (hr) return hr;

	return (*ppUserInfo1052)->Initialise(bsProfile);
}

STDMETHODIMP CCNetUser::GetUserInfo1053(BSTR bsHomeDirDrive, ICUserInfo1053 ** ppUserInfo1053)
{
	HRESULT hr = CCUserInfo1053::CreateInstance(ppUserInfo1053);
	if (hr) return hr;

	return (*ppUserInfo1053)->Initialise(bsHomeDirDrive);
}

STDMETHODIMP CCNetUser::NetUserAdd(BSTR bsServerName, eUserInfoType userInfoType, IUnknown* pUserInfo)
{
	HRESULT hr(S_OK);
	//check for supported UserInfo Interfaces and convert to 
	if (userInfoType == eUserInfoType::uiType1) 
		return NetUserAddFrom<ICUserInfo1, CCUserInfo1, USER_INFO_1>(bsServerName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType2)
		return NetUserAddFrom<ICUserInfo2, CCUserInfo2, USER_INFO_2>(bsServerName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType3)
		return NetUserAddFrom<ICUserInfo3, CCUserInfo3, USER_INFO_3>(bsServerName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType4)
		return NetUserAddFrom<ICUserInfo4, CCUserInfo4, USER_INFO_4>(bsServerName, userInfoType, pUserInfo);
	else
		return E_NOINTERFACE;
		
	return S_OK;
}


STDMETHODIMP CCNetUser::NetUserDel(BSTR bsServerName, BSTR bsUserName)
{
	return ::NetUserDel(bsServerName, bsUserName);
}


STDMETHODIMP CCNetUser::NetUserGetInfo0(BSTR bsServerName, BSTR bsUserName, ICUserInfo0** ppUserInfo)
{
	HRESULT hr(S_OK);
	LPUSER_INFO_0 pBuf;
	hr = ::NetUserGetInfo(bsServerName, bsUserName, eUserInfoType::uiType0, (LPBYTE*)&pBuf);
	if (hr != NERR_Success) return hr;
	return CCUserInfo0::TranslateFromUserInfo(pBuf, ppUserInfo);
}

STDMETHODIMP CCNetUser::NetUserGetInfo1(BSTR bsServerName, BSTR bsUserName, ICUserInfo1** ppUserInfo)
{
	HRESULT hr(S_OK);
	LPUSER_INFO_1 pBuf = NULL;
	hr = ::NetUserGetInfo(bsServerName, bsUserName, eUserInfoType::uiType1, (LPBYTE*)&pBuf);
	if (hr != NERR_Success) return hr;
	return CCUserInfo1::TranslateFromUserInfo(pBuf, ppUserInfo);
}

STDMETHODIMP CCNetUser::NetUserGetInfo2(BSTR bsServerName, BSTR bsUserName, ICUserInfo2** ppUserInfo)
{
	HRESULT hr(S_OK);
	LPUSER_INFO_2 pBuf = NULL;
	hr = ::NetUserGetInfo(bsServerName, bsUserName, eUserInfoType::uiType2, (LPBYTE*)&pBuf);
	if (hr != NERR_Success) return hr;
	return CCUserInfo2::TranslateFromUserInfo(pBuf, ppUserInfo);
}

STDMETHODIMP CCNetUser::NetUserGetInfo3(BSTR bsServerName, BSTR bsUserName, ICUserInfo3** ppUserInfo)
{
	HRESULT hr(S_OK);
	LPUSER_INFO_3 pBuf = NULL;
	hr = ::NetUserGetInfo(bsServerName, bsUserName, eUserInfoType::uiType3, (LPBYTE*)&pBuf);
	if (hr != NERR_Success) return hr;
	return CCUserInfo3::TranslateFromUserInfo(pBuf, ppUserInfo);
}

STDMETHODIMP CCNetUser::NetUserGetInfo4(BSTR bsServerName, BSTR bsUserName, ICUserInfo4 ** ppUserInfo)
{
	HRESULT hr(S_OK);
	LPUSER_INFO_4 pBuf = NULL;
	hr = ::NetUserGetInfo(bsServerName, bsUserName, eUserInfoType::uiType4, (LPBYTE*)&pBuf);
	if (hr != NERR_Success) return hr;
	return CCUserInfo4::TranslateFromUserInfo(pBuf, ppUserInfo);
}

STDMETHODIMP CCNetUser::NetUserGetInfo10(BSTR bsServerName, BSTR bsUserName, ICUserInfo10 ** ppUserInfo)
{
	HRESULT hr(S_OK);
	LPUSER_INFO_10 pBuf = NULL;
	hr = ::NetUserGetInfo(bsServerName, bsUserName, eUserInfoType::uiType10, (LPBYTE*)&pBuf);
	if (hr != NERR_Success) return hr;
	return CCUserInfo10::TranslateFromUserInfo(pBuf, ppUserInfo);
}

STDMETHODIMP CCNetUser::NetUserGetInfo11(BSTR bsServerName, BSTR bsUserName, ICUserInfo11 ** ppUserInfo)
{
	HRESULT hr(S_OK);
	LPUSER_INFO_11 pBuf = NULL;
	hr = ::NetUserGetInfo(bsServerName, bsUserName, eUserInfoType::uiType11, (LPBYTE*)&pBuf);
	if (hr != NERR_Success) return hr;
	return CCUserInfo11::TranslateFromUserInfo(pBuf, ppUserInfo);
}

STDMETHODIMP CCNetUser::NetUserGetInfo20(BSTR bsServerName, BSTR bsUserName, ICUserInfo20 ** ppUserInfo)
{
	HRESULT hr(S_OK);
	LPUSER_INFO_20 pBuf = NULL;
	hr = ::NetUserGetInfo(bsServerName, bsUserName, eUserInfoType::uiType20, (LPBYTE*)&pBuf);
	if (hr != NERR_Success) return hr;
	return CCUserInfo20::TranslateFromUserInfo(pBuf, ppUserInfo);
}

STDMETHODIMP CCNetUser::NetUserGetInfo23(BSTR bsServerName, BSTR bsUserName, ICUserInfo23 ** ppUserInfo)
{
	HRESULT hr(S_OK);
	LPUSER_INFO_23 pBuf = NULL;
	hr = ::NetUserGetInfo(bsServerName, bsUserName, eUserInfoType::uiType23, (LPBYTE*)&pBuf);
	if (hr != NERR_Success) return hr;
	return CCUserInfo23::TranslateFromUserInfo(pBuf, ppUserInfo);
}

STDMETHODIMP CCNetUser::NetUserGetInfo24(BSTR bsServerName, BSTR bsUserName, ICUserInfo24 ** ppUserInfo)
{
	HRESULT hr(S_OK);
	LPUSER_INFO_24 pBuf = NULL;
	hr = ::NetUserGetInfo(bsServerName, bsUserName, eUserInfoType::uiType24, (LPBYTE*)&pBuf);
	if (hr != NERR_Success) return hr;
	return CCUserInfo24::TranslateFromUserInfo(pBuf, ppUserInfo);
}

STDMETHODIMP CCNetUser::NetUserGetInfo1003(BSTR bsServerName, BSTR bsUserName, ICUserInfo1003 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1005(BSTR bsServerName, BSTR bsUserName, ICUserInfo1005 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1006(BSTR bsServerName, BSTR bsUserName, ICUserInfo1006 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1007(BSTR bsServerName, BSTR bsUserName, ICUserInfo1007 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1008(BSTR bsServerName, BSTR bsUserName, ICUserInfo1008 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1009(BSTR bsServerName, BSTR bsUserName, ICUserInfo1009 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1010(BSTR bsServerName, BSTR bsUserName, ICUserInfo1010 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1011(BSTR bsServerName, BSTR bsUserName, ICUserInfo1011 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1012(BSTR bsServerName, BSTR bsUserName, ICUserInfo1012 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1014(BSTR bsServerName, BSTR bsUserName, ICUserInfo1014 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1017(BSTR bsServerName, BSTR bsUserName, ICUserInfo1017 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1020(BSTR bsServerName, BSTR bsUserName, ICUserInfo1020 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1024(BSTR bsServerName, BSTR bsUserName, ICUserInfo1024 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1051(BSTR bsServerName, BSTR bsUserName, ICUserInfo1051 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1052(BSTR bsServerName, BSTR bsUserName, ICUserInfo1052 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::NetUserGetInfo1053(BSTR bsServerName, BSTR bsUserName, ICUserInfo1053 ** ppUserInfo)
{
	return E_NOTIMPL;
}

STDMETHODIMP CCNetUser::GetLogonHoursAllActive(ICLogonHours** ppLogonHours)
{
	HRESULT hr = CCLogonHours::CreateInstance(ppLogonHours);
	if (hr) return hr;
	return (*ppLogonHours)->InitialiseAllActive();
}

STDMETHODIMP CCNetUser::NetUserSetInfo(BSTR bsServerName, BSTR bsUserName, eUserInfoType userInfoType, IUnknown * pUserInfo)
{
	HRESULT hr(S_OK);
	//check for supported UserInfo Interfaces and convert to 
	if (userInfoType == eUserInfoType::uiType0)
		return NetUserSetInfoFrom<ICUserInfo0, CCUserInfo0, USER_INFO_0>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1)
		return NetUserSetInfoFrom<ICUserInfo1, CCUserInfo1, USER_INFO_1>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType2)
		return NetUserSetInfoFrom<ICUserInfo2, CCUserInfo2, USER_INFO_2>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType3)
		return NetUserSetInfoFrom<ICUserInfo3, CCUserInfo3, USER_INFO_3>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType4)
		return NetUserSetInfoFrom<ICUserInfo4, CCUserInfo4, USER_INFO_4>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1003)
		return NetUserSetInfoFrom<ICUserInfo1003, CCUserInfo1003, USER_INFO_1003>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1005)
		return NetUserSetInfoFrom<ICUserInfo1005, CCUserInfo1005, USER_INFO_1005>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1006)
		return NetUserSetInfoFrom<ICUserInfo1006, CCUserInfo1006, USER_INFO_1006>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1007)
		return NetUserSetInfoFrom<ICUserInfo1007, CCUserInfo1007, USER_INFO_1007>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1008)
		return NetUserSetInfoFrom<ICUserInfo1008, CCUserInfo1008, USER_INFO_1008>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1009)
		return NetUserSetInfoFrom<ICUserInfo1009, CCUserInfo1009, USER_INFO_1009>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1010)
		return NetUserSetInfoFrom<ICUserInfo1010, CCUserInfo1010, USER_INFO_1010>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1011)
		return NetUserSetInfoFrom<ICUserInfo1011, CCUserInfo1011, USER_INFO_1011>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1012)
		return NetUserSetInfoFrom<ICUserInfo1012, CCUserInfo1012, USER_INFO_1012>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1014)
		return NetUserSetInfoFrom<ICUserInfo1014, CCUserInfo1014, USER_INFO_1014>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1017)
		return NetUserSetInfoFrom<ICUserInfo1017, CCUserInfo1017, USER_INFO_1017>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1020)
		return NetUserSetInfoFrom<ICUserInfo1020, CCUserInfo1020, USER_INFO_1020>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1024)
		return NetUserSetInfoFrom<ICUserInfo1024, CCUserInfo1024, USER_INFO_1024>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1051)
		return NetUserSetInfoFrom<ICUserInfo1051, CCUserInfo1051, USER_INFO_1051>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1052)
		return NetUserSetInfoFrom<ICUserInfo1052, CCUserInfo1052, USER_INFO_1052>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else if (userInfoType == eUserInfoType::uiType1053)
		return NetUserSetInfoFrom<ICUserInfo1053, CCUserInfo1053, USER_INFO_1053>(bsServerName, bsUserName, userInfoType, pUserInfo);
	else
		return E_NOINTERFACE;

	return S_OK;
}
