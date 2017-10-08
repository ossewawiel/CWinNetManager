// CUserInfo1006.cpp : Implementation of CCUserInfo1006

#include "stdafx.h"
#include "CUserInfo1006.h"
#include "CUserInfoUtils.h"

// CCUserInfo1006

STDMETHODIMP CCUserInfo1006::Initialise(BSTR bsHomeDir)
{
	m_bsHomeDir.Assign(bsHomeDir);
	return S_OK;
}

STDMETHODIMP CCUserInfo1006::get_HomeDirectory(BSTR * pVal)
{
	*pVal = m_bsHomeDir.copy();
	return S_OK;
}

HRESULT CCUserInfo1006::TranslateToUserInfo(ICUserInfo1006 * pFrom, USER_INFO_1006 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserInfoHomeDirectory<ICUserInfo1006>(pFrom, pTo.usri1006_home_dir)) return hr;
	return hr;
}


STDMETHODIMP CCUserInfo1006::Clear()
{
	m_bsHomeDir = L"";
	return S_OK;
}
