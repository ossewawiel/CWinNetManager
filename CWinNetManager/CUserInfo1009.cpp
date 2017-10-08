// CUserInfo1009.cpp : Implementation of CCUserInfo1009

#include "stdafx.h"
#include "CUserInfo1009.h"
#include "CUserInfoUtils.h"

// CCUserInfo1009

STDMETHODIMP CCUserInfo1009::Initialise(BSTR bsScriptPath)
{
	m_bsScriptPath.Assign(bsScriptPath);
	return S_OK;
}

STDMETHODIMP CCUserInfo1009::get_ScriptPath(BSTR * pVal)
{
	*pVal = m_bsScriptPath.copy();
	return S_OK;
}

HRESULT CCUserInfo1009::TranslateToUserInfo(ICUserInfo1009 * pFrom, USER_INFO_1009 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserInfoScriptPath<ICUserInfo1009>(pFrom, pTo.usri1009_script_path)) return hr;
	return hr;
}


STDMETHODIMP CCUserInfo1009::Clear()
{
	m_bsScriptPath = L"";
	return S_OK;
}
