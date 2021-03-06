// CUserModalsInfo1.cpp : Implementation of CCUserModalsInfo1

#include "stdafx.h"
#include "CUserModalsInfo1.h"
#include "CuserModalsInfoUtils.h"

// CCUserModalsInfo1

STDMETHODIMP CCUserModalsInfo1::Initialise(ULONG ulRole, BSTR bsPrimary)
{
	mulRole = ulRole;
	mbsPrimary.Assign(bsPrimary);
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo1::get_Role(ULONG* pVal)
{
	*pVal = mulRole;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo1::get_Primary(BSTR* pVal)
{
	*pVal = mbsPrimary.copy();
	return S_OK;
}

HRESULT CCUserModalsInfo1::TranslateFromUserModalsInfo(LPUSER_MODALS_INFO_1 & pFrom, ICUserModalsInfo1 ** ppTo)
{
	HRESULT hr(S_OK);
	if (hr = CCUserModalsInfo1::CreateInstance(ppTo)) return hr;
	return (*ppTo)->Initialise(
		pFrom->usrmod1_role
		, _bstr_t(pFrom->usrmod1_primary));
}

HRESULT CCUserModalsInfo1::TranslateToUserModalsInfo(ICUserModalsInfo1 * pFrom, USER_MODALS_INFO_1 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserModelsRole	<ICUserModalsInfo1>(pFrom, pTo.usrmod1_role))		return hr;
	if (hr = ToUserModelsPrimary<ICUserModalsInfo1>(pFrom, pTo.usrmod1_primary))	return hr;
	return hr;
}
