// CUserModalsInfo2.cpp : Implementation of CCUserModalsInfo2

#include "stdafx.h"
#include "CUserModalsInfo2.h"
#include "CuserModalsInfoUtils.h"

// CCUserModalsInfo2


STDMETHODIMP CCUserModalsInfo2::Initialise(BSTR bsDomainName, BSTR bsDomainId)
{
	mbsDomainId.Assign(bsDomainId);
	mbsDomainName.Assign(bsDomainName);
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo2::get_DomainName(BSTR* pVal)
{
	*pVal = mbsDomainName.copy();
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo2::get_DomainId(BSTR* pVal)
{
	*pVal = mbsDomainId.copy();
	return S_OK;
}

HRESULT CCUserModalsInfo2::TranslateFromUserModalsInfo(LPUSER_MODALS_INFO_2 & pFrom, ICUserModalsInfo2 ** ppTo)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo2::CreateInstance(ppTo)) return hr;
	_bstr_t bsSid;
	if (hr = FromUserModelsSid(pFrom->usrmod2_domain_id, bsSid.GetAddress())) return hr;
	return (*ppTo)->Initialise(
		_bstr_t(pFrom->usrmod2_domain_name)
		, bsSid);
}

HRESULT CCUserModalsInfo2::TranslateToUserModalsInfo(ICUserModalsInfo2 * pFrom, USER_MODALS_INFO_2 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserModelsDomainName	<ICUserModalsInfo2>(pFrom, pTo.usrmod2_domain_name))	return hr;
	if (hr = ToUserModelsDomainId	<ICUserModalsInfo2>(pFrom, pTo.usrmod2_domain_id))		return hr;
	return hr;
}
