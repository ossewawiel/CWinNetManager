// CUserInfo23.cpp : Implementation of CCUserInfo23

#include "stdafx.h"
#include "CUserInfo23.h"


// CCUserInfo23

STDMETHODIMP CCUserInfo23::Initialise(
	BSTR bsName
	, BSTR bsFullName
	, BSTR bsComment
	, ULONG ulFlags
	, BSTR bsUserSid)
{
	m_bsName.Assign(bsName);
	m_bsFullName.Assign(bsFullName);
	m_bsComment.Assign(bsComment);
	m_ulFlags = ulFlags;
	m_bsUserSid.Assign(bsUserSid);
	return S_OK;
}

STDMETHODIMP CCUserInfo23::get_Name(BSTR * pVal)
{
	*pVal = m_bsName.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo23::get_FullName(BSTR * pVal)
{
	*pVal = m_bsFullName.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo23::get_Comment(BSTR * pVal)
{
	*pVal = m_bsComment.copy();
	return S_OK;
}

STDMETHODIMP CCUserInfo23::get_Flags(ULONG * pVal)
{
	*pVal = ULONG(m_ulFlags);
	return S_OK;
}

STDMETHODIMP CCUserInfo23::get_UserSid(BSTR * pVal)
{
	*pVal = m_bsUserSid.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo23::Clear()
{
	m_bsName = L"";
	m_bsFullName = L"";
	m_bsComment = L"";
	m_ulFlags = 0;
	m_bsUserSid = L"";
	return S_OK;
}
