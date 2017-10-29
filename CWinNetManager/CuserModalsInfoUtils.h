#pragma once
#include "stdafx.h"

template<typename T, typename U, typename V>
HRESULT NetUserModalsGetFrom(const _bstr_t &bsServerName, const eUserModalsInfoType umiType, T **pFrom)
{
	HRESULT hr(S_OK);
	if (hr = U::CreateInstance(pFrom)) return hr;
	V pBuf = NULL;
	hr = ::NetUserModalsGet((LPWSTR)bsServerName, umiType, (LPBYTE*)&pBuf);
	if (hr != NERR_Success) return hr;
	if (pBuf == NULL) return hr;
	if (hr = U::TranslateFromUserModalsInfo(pBuf, pFrom)) return hr;
	return hr;
}

template<typename T, typename U, typename V>
HRESULT NetUserModalsSetFrom(_bstr_t bsServerName, eUserModalsInfoType umiType, IUnknown *pFrom)
{
	DWORD dwError;
	HRESULT hr(S_OK);
	V uiTo;
	if (hr = NetUserModalsTranslateFrom<T, U, V>(pFrom, uiTo))	return hr;
	hr = ::NetUserModalsSet(bsServerName, umiType, (LPBYTE)&uiTo, &dwError);
	return hr;
}

template<typename T, typename U, typename V>
HRESULT NetUserModalsTranslateFrom(IUnknown *pFrom, V &pTo)
{
	CComPtr<T> pUserModalsInfo = static_cast<T*>(pFrom);
	return U::TranslateToUserModalsInfo(pUserModalsInfo, pTo);
}

template<typename T>
HRESULT ToUserModelsForceLogoff(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_ForceLogoff(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}

template<typename T>
HRESULT ToUserModelsMaxPwdAge(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_MaxPwdAge(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}

template<typename T>
HRESULT ToUserModelsMinPwdAge(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_MinPwdAge(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}

template<typename T>
HRESULT ToUserModelsMinPwdLen(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_MinPwdLen(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}

template<typename T>
HRESULT ToUserModelsPwdHistLen(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_PwdHistLen(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}

template<typename T>
HRESULT ToUserModelsRole(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_Role(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}

template<typename T>
HRESULT ToUserModelsPrimary(T *pFrom, LPWSTR &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_Primary(bsVal.GetAddress())) return hr;
	pTo = (bsVal.length() == 0) ? NULL : bsVal.copy();
	return hr;
}

template<typename T>
HRESULT ToUserModelsDomainName(T *pFrom, LPWSTR &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_DomainName(bsVal.GetAddress())) return hr;
	pTo = (bsVal.length() == 0) ? NULL : bsVal.copy();
	return hr;
}

template<typename T>
HRESULT ToUserModelsDomainId(T *pFrom, PSID &pTo)
{
	HRESULT hr(S_OK);
	_bstr_t bsVal(L"");
	if (hr = pFrom->get_DomainId(bsVal.GetAddress())) return hr;
	if (bsVal.length() == 0)
	{
		pTo = NULL;
		return S_OK;
	}
	if (!(ConvertStringSidToSid(bsVal, &pTo))) return GetLastError();
	return hr;
}

inline HRESULT FromUserModelsSid(PSID &pFrom, BSTR *pTo)
{
	HRESULT hr(S_OK);
	LPWSTR temp;
	if (!(ConvertSidToStringSid(pFrom, &temp))) return hr;
	*pTo = ::SysAllocString(temp);
	return hr;
}

template<typename T>
HRESULT ToUserModelsLockoutDuration(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_LockoutDuration(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}

template<typename T>
HRESULT ToUserModelsLockoutObservationWindow(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_LockoutObservationWindow(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}

template<typename T>
HRESULT ToUserModelsLockoutThreshold(T *pFrom, DWORD &pTo)
{
	HRESULT hr(S_OK);
	ULONG ulVal(0);
	if (hr = pFrom->get_LockoutThreshold(&ulVal)) return hr;
	pTo = ulVal;
	return hr;
}