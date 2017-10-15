// CGroupUserInfo1.cpp : Implementation of CCGroupUserInfo1

#include "stdafx.h"
#include "CGroupUserInfo1.h"


// CCGroupUserInfo1



STDMETHODIMP CCGroupUserInfo1::Initialise(BSTR bsName, ULONG ulAttributes)
{
	mbsName.Assign(bsName);
	mulAttributes = ulAttributes;
	return S_OK;
}


STDMETHODIMP CCGroupUserInfo1::get_Name(BSTR* pVal)
{
	*pVal = mbsName.copy();
	return S_OK;
}


STDMETHODIMP CCGroupUserInfo1::get_Attributes(ULONG* pVal)
{
	*pVal = mulAttributes;
	return S_OK;
}

HRESULT CCGroupUserInfo1::TranslateFromGroupUserInfo(LPGROUP_USERS_INFO_1 & pFrom, ICGroupUserInfo1 ** ppTo)
{
	HRESULT hr(S_OK);
	if (hr = CCGroupUserInfo1::CreateInstance(ppTo)) return hr;
	return (*ppTo)->Initialise(_bstr_t(pFrom->grui1_name), pFrom->grui1_attributes);
}
