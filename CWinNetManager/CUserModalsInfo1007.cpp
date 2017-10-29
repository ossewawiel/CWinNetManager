// CUserModalsInfo1007.cpp : Implementation of CCUserModalsInfo1007

#include "stdafx.h"
#include "CUserModalsInfo1007.h"
#include "CuserModalsInfoUtils.h"

// CCUserModalsInfo1007



STDMETHODIMP CCUserModalsInfo1007::Initialise(BSTR bsPrimary)
{
	mbsPrimary.Assign(bsPrimary);
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo1007::get_Primary(BSTR* pVal)
{
	*pVal = mbsPrimary.copy();
	return S_OK;
}

HRESULT CCUserModalsInfo1007::TranslateToUserModalsInfo(ICUserModalsInfo1007 * pFrom, LPUSER_MODALS_INFO_1007 & pTo)
{
	return E_NOTIMPL;
}
