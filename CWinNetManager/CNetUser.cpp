// CNetUser.cpp : Implementation of CCNetUser

#include "stdafx.h"
#include "CNetUser.h"
#include "CUserInfo1.h"

// CCNetUser



STDMETHODIMP CCNetUser::GetUserInfo1(BSTR bsName, BSTR bsPwd, ULONG ulPwdAge, ULONG ulPriv, BSTR bsHomeDir, BSTR bsComment, ULONG ulFlags, BSTR bsScriptPath, ICUserInfo1** ppUserInfo1)
{
	HRESULT hr = CCUserInfo1::CreateInstance(ppUserInfo1);
	if (hr) return hr;
	
	if (hr = (*ppUserInfo1)->Initialise(bsName, bsPwd, ulPwdAge, ulPriv, bsHomeDir, bsComment, ulFlags, bsScriptPath))
		return hr;

	return S_OK;
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


STDMETHODIMP CCNetUser::GetNetUserInfo2(BSTR bsName, BSTR bsPassword, ULONG ulPasswordAge, ULONG ulPrivilege, BSTR bsHomeDir, BSTR bsComment, ULONG ulFlags, BSTR bsScriptPath, ULONG ulAuthFlags, BSTR bsFullName, BSTR bsUsrComment, BSTR bsParams, BSTR bsWorkstations, ULONG ulLastLogon, ULONG ulLastLogoff, ULONG ulAccntExpires, ULONG ulMaxStorage, ULONG ulUnitsPerWeek, BYTE bLogonHours, ULONG ulBadPwdCount, ULONG ulNumLogons, BSTR bsLogonServer, ULONG ulCountryCode, ULONG ulCodePage, ICUserInfo2** ppUserInfo2)
{
	// TODO: Add your implementation code here

	return S_OK;
}
