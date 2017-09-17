// CUserInfo1012.cpp : Implementation of CCUserInfo1012

#include "stdafx.h"
#include "CUserInfo1012.h"


// CCUserInfo1012

STDMETHODIMP CCUserInfo1012::Initialise(BSTR bsUsrComment)
{
	m_bsUsrComment.Assign(bsUsrComment);
	return S_OK;
}

STDMETHODIMP CCUserInfo1012::get_UsrComment(BSTR * pVal)
{
	*pVal = m_bsUsrComment.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo1012::Clear()
{
	m_bsUsrComment = L"";
	return S_OK;
}
