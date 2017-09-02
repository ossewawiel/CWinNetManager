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
		ui1.usri1_name = (bsVal.length() == 0) ? NULL : (LPWSTR)bsVal;

		bsVal = L"";
		if (hr = pUserInfo1->get_Password(bsVal.GetAddress())) return hr;
		ui1.usri1_password = (bsVal.length() == 0) ? NULL : (LPWSTR)bsVal;

		ULONG ulVal(0);
		if (hr = pUserInfo1->get_PasswordAge(&ulVal)) return hr;
		ui1.usri1_password_age = ulVal;

		ulVal = 0;
		if (hr = pUserInfo1->get_Privilege(&ulVal)) return hr;
		ui1.usri1_priv = ulVal;

		bsVal = L"";
		if (hr = pUserInfo1->get_HomeDirectory(bsVal.GetAddress())) return hr;
		ui1.usri1_home_dir = (bsVal.length() == 0) ? NULL : (LPWSTR)bsVal;

		bsVal = L"";
		if (hr = pUserInfo1->get_Comment(bsVal.GetAddress())) return hr;
		ui1.usri1_comment = (bsVal.length() == 0) ? NULL : (LPWSTR)bsVal;

		ulVal = 0;
		if (hr = pUserInfo1->get_Flags(&ulVal)) return hr;
		ui1.usri1_flags = ulVal;

		bsVal = L"";
		if (hr = pUserInfo1->get_ScriptPath(bsVal.GetAddress())) return hr;
		ui1.usri1_script_path = (bsVal.length() == 0) ? NULL : (LPWSTR)bsVal;

		DWORD dwError;
		NET_API_STATUS nStatus = ::NetUserAdd(
			bsServerName
			,
			1
			,(LPBYTE)&ui1
			,&dwError);
	}
	else
		return hr;
		
	return S_OK;
}
