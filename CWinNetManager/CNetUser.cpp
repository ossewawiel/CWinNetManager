// CNetUser.cpp : Implementation of CCNetUser

#include "stdafx.h"
#include "CNetUser.h"

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
	DWORD dwError;
	//check for supported UserInfo Interfaces and convert to 
	
	if (userInfoType == eUserInfoType::uiType1)
	{
		CComPtr<ICUserInfo1> pUserInfo1 = static_cast<ICUserInfo1*>(pUserInfo);
		USER_INFO_1 ui1;
		CCUserInfo1::TranslateToUserInfo(pUserInfo1, ui1);
		return ::NetUserAdd(bsServerName, 1, (LPBYTE)&ui1, &dwError);
	}
	else if (userInfoType == eUserInfoType::uiType2)
	{
		CComPtr<ICUserInfo2> pUserInfo2 = static_cast<ICUserInfo2*>(pUserInfo);
		USER_INFO_2 ui2;
		if (hr = CCUserInfo2::TranslateToUserInfo(pUserInfo2, ui2)) return hr;
		return ::NetUserAdd(bsServerName, 2, (LPBYTE)&ui2, &dwError);
	}
	else
		return E_NOINTERFACE;
		
	return S_OK;
}


STDMETHODIMP CCNetUser::NetUserDel(BSTR bsServerName, BSTR bsUserName)
{
	return ::NetUserDel(bsServerName, bsUserName);
}


STDMETHODIMP CCNetUser::NetUserGetInfo(BSTR bsServerName, BSTR bsUserName, eUserInfoType userInfoType, IUnknown** ppUserInfo)
{
	HRESULT hr(S_OK);
	LPUSER_INFO_0 pBuf = NULL;
	hr = ::NetUserGetInfo(bsServerName, bsUserName, userInfoType, (LPBYTE*)&pBuf);
	if (hr != NERR_Success) return hr;

	switch (userInfoType)
	{
	case eUserInfoType::uiType1:
		{
			LPUSER_INFO_1 pBuf1 = (LPUSER_INFO_1)pBuf;
			CComPtr<ICUserInfo1> pUi1;
			hr = GetUserInfo1(
				_bstr_t(pBuf1->usri1_name)
				, _bstr_t(pBuf1->usri1_password)
				, pBuf1->usri1_password_age
				, pBuf1->usri1_priv
				, _bstr_t(pBuf1->usri1_home_dir)
				, _bstr_t(pBuf1->usri1_comment)
				, pBuf1->usri1_flags
				, _bstr_t(pBuf1->usri1_script_path)
				, &pUi1);
			if (hr) return hr;
			*ppUserInfo = static_cast<ICUserInfo1*>(pUi1.Detach());
		}
		break;
	default: return ERROR_INVALID_LEVEL;
	}
	return hr;
}


STDMETHODIMP CCNetUser::CastToUserInfo1(IUnknown* pUnk, ICUserInfo1** ppUserInfo1)
{
	HRESULT hr(S_OK);
	if (hr = pUnk->QueryInterface(IID_ICUserInfo1, (void**)&pUnk)) return hr;
	*ppUserInfo1 = static_cast<ICUserInfo1*>(pUnk);
	return S_OK;
}




STDMETHODIMP CCNetUser::GetLogonHoursAllActive(ICLogonHours** ppLogonHours)
{
	HRESULT hr = CCLogonHours::CreateInstance(ppLogonHours);
	if (hr) return hr;
	return (*ppLogonHours)->InitialiseAllActive();
}
