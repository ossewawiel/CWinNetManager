#pragma once
#include "stdafx.h"

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
HRESULT ToUserInfoLogonHours(T *pFrom, PBYTE &pTo)
{
	HRESULT hr(S_OK);
	//ICLogonHours* bVal(0);
	//if (hr = pFrom->get_LogonHours(pTo)) return hr;
	//*pTo = bVal;
	return E_FAIL;
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
