// CGroupUserInfo0.cpp : Implementation of CCGroupUserInfo0

#include "stdafx.h"
#include "CGroupUserInfo0.h"


// CCGroupUserInfo0



STDMETHODIMP CCGroupUserInfo0::Initialise(BSTR bsName)
{
	mbsName.Assign(bsName);
	return S_OK;
}


STDMETHODIMP CCGroupUserInfo0::get_Name(BSTR* pVal)
{
	*pVal = mbsName.copy();
	return S_OK;
}

HRESULT CCGroupUserInfo0::TranslateFromGroupUserInfo(LPGROUP_USERS_INFO_0 & pFrom, ICGroupUserInfo0 ** ppTo)
{
	HRESULT hr(S_OK);
	if (hr = CCGroupUserInfo0::CreateInstance(ppTo)) return hr;
	return (*ppTo)->Initialise(_bstr_t(pFrom->grui0_name));
}
