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
