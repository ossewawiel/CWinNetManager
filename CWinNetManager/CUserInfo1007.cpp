// CUserInfo1007.cpp : Implementation of CCUserInfo1007

#include "stdafx.h"
#include "CUserInfo1007.h"
#include "CUserInfoUtils.h"

// CCUserInfo1007

STDMETHODIMP CCUserInfo1007::Initialise(BSTR bsComment)
{
	m_bsComment.Assign(bsComment);
	return S_OK;
}

STDMETHODIMP CCUserInfo1007::get_Comment(BSTR * pVal)
{
	*pVal = m_bsComment.copy();
	return S_OK;
}

HRESULT CCUserInfo1007::TranslateToUserInfo(ICUserInfo1007 * pFrom, USER_INFO_1007 & pTo)
{
	HRESULT hr(S_OK);
	if (hr = ToUserInfoComment<ICUserInfo1007>(pFrom, pTo.usri1007_comment)) return hr;
	return hr;
}


STDMETHODIMP CCUserInfo1007::Clear()
{
	m_bsComment = L"";
	return S_OK;
}
