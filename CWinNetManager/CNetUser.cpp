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
	, BYTE  bLogonHours
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
	, BYTE  bLogonHours
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
	, BYTE  bLogonHours
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
	, BYTE bLogonHours
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
	, BYTE  bLogonHours
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

STDMETHODIMP CCNetUser::NetUserAdd(BSTR bsServerName, IUnknown* pUserInfo)
{
	HRESULT hr(S_OK);
	//check for supported UserInfo Interfaces and convert to 
	if (!(hr = pUserInfo->QueryInterface(IID_ICUserInfo1, (void**)&pUserInfo)))
	{
		CComPtr<ICUserInfo1> pUserInfo1 = static_cast<ICUserInfo1*>(pUserInfo);
		//convert ICUserInfo1 to USER_INFO_1
		USER_INFO_1 ui1;
		_bstr_t bsVal(L"");
		if (hr = pUserInfo1->get_Name(bsVal.GetAddress())) return hr;
		ui1.usri1_name = (bsVal.length() == 0) ? NULL : (LPWSTR)bsVal.copy();

		bsVal = L"";
		if (hr = pUserInfo1->get_Password(bsVal.GetAddress())) return hr;
		ui1.usri1_password = (bsVal.length() == 0) ? NULL : (LPWSTR)bsVal.copy();

		ULONG ulVal(0);
		if (hr = pUserInfo1->get_PasswordAge(&ulVal)) return hr;
		ui1.usri1_password_age = ulVal;

		ulVal = 0;
		if (hr = pUserInfo1->get_Privilege(&ulVal)) return hr;
		ui1.usri1_priv = ulVal;

		bsVal = L"";
		if (hr = pUserInfo1->get_HomeDirectory(bsVal.GetAddress())) return hr;
		ui1.usri1_home_dir = (bsVal.length() == 0) ? NULL : (LPWSTR)bsVal.copy();

		bsVal = L"";
		if (hr = pUserInfo1->get_Comment(bsVal.GetAddress())) return hr;
		ui1.usri1_comment = (bsVal.length() == 0) ? NULL : (LPWSTR)bsVal.copy();

		ulVal = 0;
		if (hr = pUserInfo1->get_Flags(&ulVal)) return hr;
		ui1.usri1_flags = ulVal;

		bsVal = L"";
		if (hr = pUserInfo1->get_ScriptPath(bsVal.GetAddress())) return hr;
		ui1.usri1_script_path = (bsVal.length() == 0) ? NULL : (LPWSTR)bsVal.copy();

		DWORD dwError;
		return ::NetUserAdd(
			bsServerName
			,
			1
			, (LPBYTE)&ui1
			, &dwError);
	}
	else
		return hr;
		
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


