#pragma once
#include "stdafx.h"
#include "CLogonHours.h"

template<typename T, typename U, typename V>
HRESULT NetUserAddFrom(_bstr_t bsServerName, eUserInfoType userInfoType, IUnknown *pFrom)
{
	DWORD dwError;
	HRESULT hr(S_OK);
	V uiTo;
	if (hr = NetUserTranslateFrom<T, U, V>(pFrom, uiTo))	return hr;
	return ::NetUserAdd(bsServerName, userInfoType, (LPBYTE)&uiTo, &dwError);
}

template<typename T, typename U, typename V>
HRESULT NetUserSetInfoFrom(_bstr_t bsServerName, _bstr_t bsUserName, eUserInfoType userInfoType, IUnknown *pFrom)
{
	DWORD dwError;
	HRESULT hr(S_OK);
	V uiTo;
	if (hr = NetUserTranslateFrom<T, U, V>(pFrom, uiTo))	return hr;
	hr = ::NetUserSetInfo(bsServerName, bsUserName, userInfoType, (LPBYTE)&uiTo, &dwError);
	return hr;
	USER_LAST_LOGOFF_PARMNUM;
}

template<typename T, typename U, typename V>
HRESULT NetUserGetInfoFrom(_bstr_t bsServerName, _bstr_t bsUserName, eUserInfoType userInfoType, IUnknown **pFrom)
{
	DWORD dwError;
	HRESULT hr(S_OK);
	V uiTo;
	if (hr = NetUserTranslateFrom<T, U, V>(pFrom, uiTo))	return hr;
	return ::NetUserSetInfo(bsServerName, bsUserName, userInfoType, (LPBYTE)&uiTo, &dwError);
	USER_LAST_LOGOFF_PARMNUM;
}

template<typename T, typename U, typename V>
HRESULT NetUserTranslateFrom(IUnknown *pFrom, V &pTo)
{
	CComPtr<T> pUserInfo = static_cast<T*>(pFrom);
	return U::TranslateToUserInfo(pUserInfo, pTo);
}

template<typename T, typename U, typename V, typename W, typename X>
HRESULT NetUserEnumFrom(_bstr_t bsServerName, eUserInfoType userInfoType, T **pFrom)
{
	HRESULT hr(S_OK);
	if (hr = U::CreateInstance(pFrom)) return hr;
	V pBuf = NULL;
	DWORD pEntriesRead = NULL;
	DWORD pTotalEntries = NULL;
	DWORD pResumeHandle = NULL;
	hr = ::NetUserEnum((LPCWSTR)bsServerName, userInfoType, 0, (LPBYTE*)&pBuf, MAX_PREFERRED_LENGTH, &pEntriesRead, &pTotalEntries, &pResumeHandle);
	if (hr != NERR_Success) return hr;
	if (pBuf == NULL) return hr;
	for (long i = 0; i < pEntriesRead; i++)
	{
		CComPtr<W> pUI;
		if (hr = X::TranslateFromUserInfo(pBuf, &pUI)) return hr;
		if (hr = (*pFrom)->Add(pUI)) return hr;
		++pBuf;
	}

	return S_OK;
}

template<typename T, typename U, typename V, typename W, typename X>
HRESULT NetUserGetGroupsFrom(_bstr_t bsServerName, _bstr_t bsUserName, eGroupUserInfoType groupUserInfoType, T **pFrom)
{
	HRESULT hr(S_OK);
	if (hr = U::CreateInstance(pFrom)) return hr;
	V pBuf = NULL;
	DWORD dwPrefMaxLen = MAX_PREFERRED_LENGTH;
	DWORD dwEntriesRead = 0;
	DWORD dwTotalEntries = 0;

	hr = ::NetUserGetGroups((LPWSTR)bsServerName, (LPWSTR)bsUserName, groupUserInfoType, (LPBYTE*)&pBuf, dwPrefMaxLen, &dwEntriesRead, &dwTotalEntries);
	if (hr != NERR_Success) return hr;
	if (pBuf == NULL) return hr;
	for (DWORD i = 0; i < dwEntriesRead; i++)
	{
		CComPtr<W> pGroupUserInfo;
		if(hr = X::TranslateFromGroupUserInfo(pBuf, &pGroupUserInfo)) return hr;
		if(hr = (*pFrom)->Add(pGroupUserInfo)) return hr;
		++pBuf;
	}

	return hr;
}

template<typename T>
HRESULT ToUserInfoName(T *pFrom, LPWSTR &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_Name(bsVal.GetAddress())) return hr;
	pTo = (bsVal.length() == 0) ? NULL : bsVal.copy();
	return hr;
}

template<typename T>
HRESULT ToUserInfoPassword(T *pFrom, LPWSTR &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_Password(bsVal.GetAddress())) return hr;
	pTo = (bsVal.length() == 0) ? NULL : bsVal.copy();
	return hr;
}

template<typename T>
HRESULT ToUserInfoPasswordAge(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_PasswordAge(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}

template<typename T>
HRESULT ToUserInfoPrivilege(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_Privilege(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}

template<typename T>
HRESULT ToUserInfoHomeDirectory(T *pFrom, LPWSTR &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_HomeDirectory(bsVal.GetAddress())) return hr;
	pTo = (bsVal.length() == 0) ? NULL : bsVal.copy();
	return hr;
}

template<typename T>
HRESULT ToUserInfoComment(T *pFrom, LPWSTR &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_Comment(bsVal.GetAddress())) return hr;
	pTo = (bsVal.length() == 0) ? NULL : bsVal.copy();
	return hr;
}

template<typename T>
HRESULT ToUserInfoFlags(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_Flags(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}

template<typename T>
HRESULT ToUserInfoScriptPath(T *pFrom, LPWSTR &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_ScriptPath(bsVal.GetAddress())) return hr;
	pTo = (bsVal.length() == 0) ? NULL : bsVal.copy();
	return hr;
}

template<typename T>
HRESULT ToUserInfoAuthFlags(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_AuthFlags(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}

template<typename T>
HRESULT ToUserInfoFullName(T *pFrom, LPWSTR &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_FullName(bsVal.GetAddress())) return hr;
	pTo = (bsVal.length() == 0) ? NULL : bsVal.copy();
	return hr;
}
//m_bsUsrComment
template<typename T>
HRESULT ToUserInfoUsrComment(T *pFrom, LPWSTR &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_UsrComment(bsVal.GetAddress())) return hr;
	pTo = (bsVal.length() == 0) ? NULL : bsVal.copy();
	return hr;
}
//m_bsParams
template<typename T>
HRESULT ToUserInfoParams(T *pFrom, LPWSTR &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_Params(bsVal.GetAddress())) return hr;
	pTo = (bsVal.length() == 0) ? NULL : bsVal.copy();
	return hr;
}
//m_bsWorkstations
template<typename T>
HRESULT ToUserInfoWorkstations(T *pFrom, LPWSTR &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_Workstations(bsVal.GetAddress())) return hr;
	pTo = (bsVal.length() == 0) ? NULL : bsVal.copy();
	return hr;
}
//m_ulLastLogon
template<typename T>
HRESULT ToUserInfoLastLogon(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_LastLogon(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}
//m_ulLastLogoff
template<typename T>
HRESULT ToUserInfoLastLogoff(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_LastLogoff(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}
//m_ulAccntExpires
template<typename T>
HRESULT ToUserInfoAccntExpires(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_AccntExpires(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}
//m_ulMaxStorage
template<typename T>
HRESULT ToUserInfoMaxStorage(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_MaxStorage(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}
//m_ulUnitsPerWeek
template<typename T>
HRESULT ToUserInfoUnitsPerWeek(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_UnitsPerWeek(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}
//m_bLogonHours
template<typename T>
HRESULT ToUserInfoLogonHours(T *pFrom, BYTE **pTo)
{
	HRESULT hr(S_OK);
	long lCount;
	CComPtr<ICLogonHours> pLogonHours;
	if(hr = pFrom->get_LogonHours(&pLogonHours)) return hr;
	if (hr = pLogonHours->get_Count(&lCount)) return hr;
	BYTE bLogonHours[21];
	int byteCounter(0);
	int bitCounter(0);
	int maxBit(7);
	std::bitset<8> bits(0);
	for (long idx = 1; idx <= lCount; idx++)
	{
		CComPtr<ICLogonHour> pFromItem;
		if(hr = pLogonHours->get_Item(idx, &pFromItem)) return hr;
		SHORT shState(0);
		if (hr = pFromItem->get_State(&shState)) return hr;
		if (shState == 0)
			bits.set(bitCounter, false);
		else
			bits.set(bitCounter, true);
		++bitCounter;
		if (bitCounter > maxBit)
		{
			bitCounter = 0;
			bLogonHours[byteCounter] = (BYTE)bits.to_ulong();
			++byteCounter;
		}
	}
	*pTo = bLogonHours;
	return S_OK;
}

inline HRESULT FromUserInfoLogonHours(BYTE *pFrom, ICLogonHours **pTo)
{
	HRESULT hr(S_OK);
	CCLogonHours::CreateInstance(pTo);
	int byteCounter(0);
	int bitCounter(0);
	int maxBit(7);
	std::bitset<8> bits(0);
	bool bNewByte = true;
	if (pFrom[0] == '\0') return (*pTo)->InitialiseAllActive();
	for (long idx = 0; idx < 168; idx++)
	{
		if (bNewByte)
		{
			bits = std::bitset<8>(pFrom[byteCounter]);
			bNewByte = false;
		}
		if (bits.test(bitCounter))
		{
			if (hr = (*pTo)->ActivateItem(idx))
				return hr;
		}
		else
		{
			if (hr = (*pTo)->DeactivateItem(idx))
				return hr;
		}

		++bitCounter;
		if (bitCounter > maxBit)
		{
			bitCounter = 0;
			++byteCounter;
			bNewByte = true;
		}
	}
	return S_OK;
}
//m_ulBadPwdCount
template<typename T>
HRESULT ToUserInfoBadPwdCount(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_BadPwdCount(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}
//m_ulNumLogons
template<typename T>
HRESULT ToUserInfoNumLogons(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_NumLogons(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}
//m_bsLogonServer
template<typename T>
HRESULT ToUserInfoLogonServer(T *pFrom, LPWSTR &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_LogonServer(bsVal.GetAddress())) return hr;
	pTo = (bsVal.length() == 0) ? NULL : bsVal.copy();
	return hr;
}
//m_ulCountryCode
template<typename T>
HRESULT ToUserInfoCountryCode(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_CountryCode(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}
//m_ulCodePage
template<typename T>
HRESULT ToUserInfoCodePage(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_CodePage(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}
//ToUserInfoUserId
template<typename T>
HRESULT ToUserInfoUserId(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_UserId(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}
//ToUserInfoPrimaryGrpId
template<typename T>
HRESULT ToUserInfoPrimaryGrpId(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_PrimaryGrpId(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}
//ToUserInfoProfile
template<typename T>
HRESULT ToUserInfoProfile(T *pFrom, LPWSTR &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_Profile(bsVal.GetAddress())) return hr;
	pTo = (bsVal.length() == 0) ? NULL : bsVal.copy();
	return hr;
}
//ToUserInfoHomeDirDrive
template<typename T>
HRESULT ToUserInfoHomeDirDrive(T *pFrom, LPWSTR &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_HomeDirDrive(bsVal.GetAddress())) return hr;
	pTo = (bsVal.length() == 0) ? NULL : bsVal.copy();
	return hr;
}
//ToUserInfoPwdExpired
template<typename T>
HRESULT ToUserInfoPwdExpired(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_PwdExpired(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}
//ToUserInfoUserSid
template<typename T>
HRESULT ToUserInfoUserSid(T *pFrom, PSID &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_UserSid(bsVal.GetAddress())) return hr;
	if (bsVal.length() == 0)
	{
		pTo = NULL;
		return S_OK;
	}
	if (!(ConvertStringSidToSid(bsVal, &pTo))) return GetLastError();
	return hr;
}

inline HRESULT FromUserInfoUserSid(PSID &pFrom, BSTR *pTo)
{
	HRESULT hr(S_OK);
	LPWSTR temp;
	if (!(ConvertSidToStringSid(pFrom, &temp))) return hr;
	*pTo = ::SysAllocString(temp);
	return hr;
}

