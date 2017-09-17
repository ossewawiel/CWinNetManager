// CUserInfo10.cpp : Implementation of CCUserInfo10

#include "stdafx.h"
#include "CUserInfo10.h"


// CCUserInfo10
STDMETHODIMP CCUserInfo10::Initialise(
	BSTR  bsName
	, BSTR  bsComment
	, BSTR  bsUsrComment
	, BSTR  bsFullName)
{
	m_bsName.Assign(bsName);
	m_bsComment.Assign(bsComment);
	m_bsUsrComment.Assign(bsUsrComment);
	m_bsFullName.Assign(bsFullName);
	return S_OK;
}

STDMETHODIMP CCUserInfo10::get_Name(BSTR* pVal)
{
	*pVal = m_bsName.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo10::get_Comment(BSTR* pVal)
{
	*pVal = m_bsComment.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo10::get_UsrComment(BSTR* pVal)
{
	*pVal = m_bsUsrComment.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo10::get_FullName(BSTR* pVal)
{
	*pVal = m_bsFullName.copy();
	return S_OK;
}





STDMETHODIMP CCUserInfo10::Clear()
{
	m_bsName = L"";
	m_bsComment = L"";
	m_bsUsrComment = L"";
	m_bsFullName = L"";
	return S_OK;
}
