// CUserInfo1053.cpp : Implementation of CCUserInfo1053

#include "stdafx.h"
#include "CUserInfo1053.h"
#include "CUserInfoUtils.h"

// CCUserInfo1053

STDMETHODIMP CCUserInfo1053::Initialise(BSTR bsHomeDirDrive)
{
	m_bsHomeDirDrive.Assign(bsHomeDirDrive);
	return S_OK;
}

STDMETHODIMP CCUserInfo1053::get_HomeDirDrive(BSTR * pVal)
{
	*pVal = m_bsHomeDirDrive.copy();
	return S_OK;
}

HRESULT CCUserInfo1053::TranslateToUserInfo(ICUserInfo1053 * pFrom, USER_INFO_1053 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserInfoHomeDirDrive<ICUserInfo1053>(pFrom, pTo.usri1053_home_dir_drive)) return hr;
	return hr;
}


STDMETHODIMP CCUserInfo1053::Clear()
{
	m_bsHomeDirDrive = L"";
	return S_OK;
}
