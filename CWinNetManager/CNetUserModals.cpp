// CNetUserModals.cpp : Implementation of CCNetUserModals

#include "stdafx.h"
#include "CNetUserModals.h"
#include "CUserModalsInfoUtils.h"


// CCNetUserModals

STDMETHODIMP CCNetUserModals::NetUserModalsGet0(BSTR bsServerName, ICUserModalsInfo0** ppUserModalsInfo0)
{
	return NetUserModalsGetFrom<ICUserModalsInfo0, CCUserModalsInfo0, LPUSER_MODALS_INFO_0>(bsServerName, eUserModalsInfoType::umiType0, ppUserModalsInfo0);
}

STDMETHODIMP CCNetUserModals::NetUserModalsGet1(BSTR bsServerName, ICUserModalsInfo1** ppUserModalsInfo1)
{
	return NetUserModalsGetFrom<ICUserModalsInfo1, CCUserModalsInfo1, LPUSER_MODALS_INFO_1>(bsServerName, eUserModalsInfoType::umiType1, ppUserModalsInfo1);
}

STDMETHODIMP CCNetUserModals::NetUserModalsGet2(BSTR bsServerName, ICUserModalsInfo2** ppUserModalsInfo2)
{
	return NetUserModalsGetFrom<ICUserModalsInfo2, CCUserModalsInfo2, LPUSER_MODALS_INFO_2>(bsServerName, eUserModalsInfoType::umiType2, ppUserModalsInfo2);
}

STDMETHODIMP CCNetUserModals::NetUserModalsGet3(BSTR bsServerName, ICUserModalsInfo3** ppUserModalsInfo3)
{
	return NetUserModalsGetFrom<ICUserModalsInfo3, CCUserModalsInfo3, LPUSER_MODALS_INFO_3>(bsServerName, eUserModalsInfoType::umiType3, ppUserModalsInfo3);
}


STDMETHODIMP CCNetUserModals::GetUserModalsInfo0(ULONG ulMinPwdLen, ULONG ulMaxPwdAge, ULONG ulMinPwdAge, ULONG ulForceLogoff, ULONG ulPwdHistLen, ICUserModalsInfo0** ppUserModalsInfo0)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo0::CreateInstance(ppUserModalsInfo0)) return hr;
	if (hr = (*ppUserModalsInfo0)->Initialise(ulMinPwdLen, ulMaxPwdAge, ulMinPwdAge, ulForceLogoff, ulPwdHistLen)) return hr;
	return S_OK;
}


STDMETHODIMP CCNetUserModals::GetUserModalsInfo1(ULONG ulRole, BSTR bsPrimary, ICUserModalsInfo1** ppUserModalsInfo1)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo1::CreateInstance(ppUserModalsInfo1)) return hr;
	if (hr = (*ppUserModalsInfo1)->Initialise(ulRole, bsPrimary)) return hr;
	return S_OK;
}


STDMETHODIMP CCNetUserModals::GetUserModalsInfo2(BSTR bsDomainName, BSTR bsDomainId, ICUserModalsInfo2** ppUserModalsInfo2)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo2::CreateInstance(ppUserModalsInfo2)) return hr;
	if (hr = (*ppUserModalsInfo2)->Initialise(bsDomainName, bsDomainId)) return hr;
	return S_OK;
}


STDMETHODIMP CCNetUserModals::GetUserModalsInfo3(ULONG ulLockoutDuration, ULONG ulLockoutObservationWindow, ULONG ulLockoutThreshold, ICUserModalsInfo3** ppUserModalsInfo3)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo3::CreateInstance(ppUserModalsInfo3)) return hr;
	if (hr = (*ppUserModalsInfo3)->Initialise(ulLockoutDuration, ulLockoutObservationWindow, ulLockoutThreshold)) return hr;
	return S_OK;
}


STDMETHODIMP CCNetUserModals::GetUserModalsInfo1001(ULONG ulMinPwdLen, ICUserModalsInfo1001** ppUserModalsInfo1001)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo1001::CreateInstance(ppUserModalsInfo1001)) return hr;
	if (hr = (*ppUserModalsInfo1001)->Initialise(ulMinPwdLen)) return hr;
	return S_OK;
}


STDMETHODIMP CCNetUserModals::GetUserModalsInfo1002(ULONG ulMaxPwdAge, ICUserModalsInfo1002** ppUserModalsInfo1002)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo1002::CreateInstance(ppUserModalsInfo1002)) return hr;
	if (hr = (*ppUserModalsInfo1002)->Initialise(ulMaxPwdAge)) return hr;
	return S_OK;
}


STDMETHODIMP CCNetUserModals::GetUserModalsInfo1003(ULONG ulMinPwdAge, ICUserModalsInfo1003** ppUserModalsInfo1003)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo1003::CreateInstance(ppUserModalsInfo1003)) return hr;
	if (hr = (*ppUserModalsInfo1003)->Initialise(ulMinPwdAge)) return hr;
	return S_OK;
}


STDMETHODIMP CCNetUserModals::GetUserModalsInfo1004(ULONG ulForceLogoff, ICUserModalsInfo1004** ppUserModalsInfo1004)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo1004::CreateInstance(ppUserModalsInfo1004)) return hr;
	if (hr = (*ppUserModalsInfo1004)->Initialise(ulForceLogoff)) return hr;
	return S_OK;
}


STDMETHODIMP CCNetUserModals::GetUserModalsInfo1005(ULONG ulPwdHistLen, ICUserModalsInfo1005** ppUserModalsInfo1005)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo1005::CreateInstance(ppUserModalsInfo1005)) return hr;
	if (hr = (*ppUserModalsInfo1005)->Initialise(ulPwdHistLen)) return hr;
	return S_OK;
}


STDMETHODIMP CCNetUserModals::GetUserModalsInfo1006(ULONG ulRole, ICUserModalsInfo1006** ppUserModalsInfo1006)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo1006::CreateInstance(ppUserModalsInfo1006)) return hr;
	if (hr = (*ppUserModalsInfo1006)->Initialise(ulRole)) return hr;
	return S_OK;
}


STDMETHODIMP CCNetUserModals::GetUserModalsInfo1007(BSTR bsPrimary, ICUserModalsInfo1007** ppUserModalsInfo1007)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo1007::CreateInstance(ppUserModalsInfo1007)) return hr;
	if (hr = (*ppUserModalsInfo1007)->Initialise(bsPrimary)) return hr;
	return S_OK;
}


STDMETHODIMP CCNetUserModals::NetUserModalsSet(BSTR bsServerName, eUserModalsInfoType infoType, IUnknown* pUserModalsInfo)
{
	HRESULT hr(S_OK);
	//check for supported UserInfo Interfaces and convert to 
	if (infoType == eUserModalsInfoType::umiType0)
		return NetUserModalsSetFrom<ICUserModalsInfo0, CCUserModalsInfo0, USER_MODALS_INFO_0>(bsServerName, infoType, pUserModalsInfo);
	else if (infoType == eUserModalsInfoType::umiType1)
		return NetUserModalsSetFrom<ICUserModalsInfo1, CCUserModalsInfo1, USER_MODALS_INFO_1>(bsServerName, infoType, pUserModalsInfo);
	else if (infoType == eUserModalsInfoType::umiType2)
		return NetUserModalsSetFrom<ICUserModalsInfo2, CCUserModalsInfo2, USER_MODALS_INFO_2>(bsServerName, infoType, pUserModalsInfo);
	else if (infoType == eUserModalsInfoType::umiType3)
		return NetUserModalsSetFrom<ICUserModalsInfo3, CCUserModalsInfo3, USER_MODALS_INFO_3>(bsServerName, infoType, pUserModalsInfo);
	else
		return E_NOINTERFACE;

	return S_OK;
}
