// CUserInfo1051.cpp : Implementation of CCUserInfo1051

#include "stdafx.h"
#include "CUserInfo1051.h"
#include "CUserInfoUtils.h"

// CCUserInfo1051

STDMETHODIMP CCUserInfo1051::Initialise(ULONG ulPrimaryGrpId)
{
	m_ulPrimaryGrpId = ulPrimaryGrpId;
	return S_OK;
}

STDMETHODIMP CCUserInfo1051::get_PrimaryGrpId(ULONG * pVal)
{
	*pVal = m_ulPrimaryGrpId;
	return S_OK;
}

HRESULT CCUserInfo1051::TranslateToUserInfo(ICUserInfo1051 * pFrom, USER_INFO_1051 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserInfoPrimaryGrpId<ICUserInfo1051>(pFrom, pTo.usri1051_primary_group_id)) return hr;
	return hr;
}


STDMETHODIMP CCUserInfo1051::Clear()
{
	m_ulPrimaryGrpId = 0;
	return S_OK;
}
