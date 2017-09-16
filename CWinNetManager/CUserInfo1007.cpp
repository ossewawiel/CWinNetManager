// CUserInfo1007.cpp : Implementation of CCUserInfo1007

#include "stdafx.h"
#include "CUserInfo1007.h"


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
