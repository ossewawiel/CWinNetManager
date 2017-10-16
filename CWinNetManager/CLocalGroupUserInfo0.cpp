// CLocalGroupUserInfo.cpp : Implementation of CCLocalGroupUserInfo

#include "stdafx.h"
#include "CLocalGroupUserInfo0.h"


// CCLocalGroupUserInfo



STDMETHODIMP CCLocalGroupUserInfo0::Initialise(BSTR bsName)
{
	mbsName.Assign(bsName);
	return S_OK;
}


STDMETHODIMP CCLocalGroupUserInfo0::get_Name(BSTR* pVal)
{
	*pVal = mbsName.copy();
	return S_OK;
}

HRESULT CCLocalGroupUserInfo0::TranslateFromLocalGroupUserInfo(LPLOCALGROUP_USERS_INFO_0 & pFrom, ICLocalGroupUserInfo0 ** ppTo)
{
	HRESULT hr(S_OK);
	if (hr = CCLocalGroupUserInfo0::CreateInstance(ppTo)) return hr;
	return (*ppTo)->Initialise(_bstr_t(pFrom->lgrui0_name));
}
