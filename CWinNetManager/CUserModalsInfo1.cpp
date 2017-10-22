// CUserModalsInfo1.cpp : Implementation of CCUserModalsInfo1

#include "stdafx.h"
#include "CUserModalsInfo1.h"


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
