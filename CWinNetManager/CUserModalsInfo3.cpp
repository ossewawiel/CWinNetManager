// CUserModalsInfo3.cpp : Implementation of CCUserModalsInfo3

#include "stdafx.h"
#include "CUserModalsInfo3.h"
#include "CuserModalsInfoUtils.h"

// CCUserModalsInfo3

STDMETHODIMP CCUserModalsInfo3::Initialise(ULONG ulLockoutDuration, ULONG ulLockoutObservationWindow, ULONG ulLockoutThreshold)
{
	mulLockoutDuration = ulLockoutDuration;
	mulLockoutObservationWindow = ulLockoutObservationWindow;
	mulLockoutThreshold = ulLockoutThreshold;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo3::get_LockoutDuration(ULONG* pVal)
{
	*pVal = mulLockoutDuration;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo3::get_LockoutObservationWindow(ULONG* pVal)
{
	*pVal = mulLockoutObservationWindow;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo3::get_LockoutThreshold(ULONG* pVal)
{
	*pVal = mulLockoutThreshold;
	return S_OK;
}

HRESULT CCUserModalsInfo3::TranslateFromUserModalsInfo(LPUSER_MODALS_INFO_3 & pFrom, ICUserModalsInfo3 ** ppTo)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo3::CreateInstance(ppTo)) return hr;
	return (*ppTo)->Initialise(
		pFrom->usrmod3_lockout_duration
		, pFrom->usrmod3_lockout_observation_window
		, pFrom->usrmod3_lockout_threshold);
}

HRESULT CCUserModalsInfo3::TranslateToUserModalsInfo(ICUserModalsInfo3 * pFrom, USER_MODALS_INFO_3 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserModelsLockoutDuration			<ICUserModalsInfo3>(pFrom, pTo.usrmod3_lockout_duration))				return hr;
	if (hr = ToUserModelsLockoutObservationWindow	<ICUserModalsInfo3>(pFrom, pTo.usrmod3_lockout_observation_window))		return hr;
	if (hr = ToUserModelsLockoutThreshold			<ICUserModalsInfo3>(pFrom, pTo.usrmod3_lockout_threshold))				return hr;
	return hr;
}
