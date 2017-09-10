// CUserInfo1003.cpp : Implementation of CCUserInfo1003

#include "stdafx.h"
#include "CUserInfo1003.h"


// CCUserInfo1003
STDMETHODIMP CCUserInfo1003::Initialise(BSTR bsPassword)
{
	m_bsPassword.Assign(bsPassword);
	return S_OK;
}

STDMETHODIMP CCUserInfo1003::get_Password(BSTR * pVal)
{
	*pVal = m_bsPassword.copy();
	return S_OK;
}
