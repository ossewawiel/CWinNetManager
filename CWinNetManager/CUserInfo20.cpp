// CUserInfo20.cpp : Implementation of CCUserInfo20

#include "stdafx.h"
#include "CUserInfo20.h"


// CCUserInfo20

STDMETHODIMP CCUserInfo20::Initialise(
	BSTR bsName
	, BSTR bsFullName
	, BSTR bsComment
	, ULONG ulFlags
	, ULONG ulUserId)
{
	m_bsName.Assign(bsName);
	m_bsFullName.Assign(bsFullName);
	m_bsComment.Assign(bsComment);
	m_ulFlags = ulFlags;
	m_ulUserId = ulUserId;
	return S_OK;
}

STDMETHODIMP CCUserInfo20::get_Name(BSTR * pVal)
{
	*pVal = m_bsName.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo20::get_FullName(BSTR * pVal)
{
	*pVal = m_bsFullName.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo20::get_Comment(BSTR * pVal)
{
	*pVal = m_bsComment.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo20::get_Flags(ULONG * pVal)
{
	*pVal = ULONG(m_ulFlags);
	return S_OK;
}

STDMETHODIMP CCUserInfo20::get_UserId(ULONG * pVal)
{
	*pVal = ULONG(m_ulUserId);
	return S_OK;
}

HRESULT CCUserInfo20::TranslateFromUserInfo(LPUSER_INFO_20 pFrom, ICUserInfo20 ** ppTo)
{
	HRESULT hr(S_OK);
	if (hr = CCUserInfo20::CreateInstance(ppTo)) return hr;
	return (*ppTo)->Initialise(
		_bstr_t(pFrom->usri20_name)
		, _bstr_t(pFrom->usri20_full_name)
		, _bstr_t(pFrom->usri20_comment)
		, pFrom->usri20_flags
		, pFrom->usri20_user_id);
}


STDMETHODIMP CCUserInfo20::Clear()
{
	m_bsName = L"";
		m_bsFullName = L"";
		m_bsComment = L"";
		m_ulFlags = 0;
		m_ulUserId = 0;
	return S_OK;
}
