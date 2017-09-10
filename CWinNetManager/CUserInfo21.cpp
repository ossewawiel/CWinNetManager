// CUserInfo21.cpp : Implementation of CCUserInfo21

#include "stdafx.h"
#include "CUserInfo21.h"


// CCUserInfo21

STDMETHODIMP CCUserInfo21::Initialise(BSTR bsPassword)
{
	m_bsPassword.Assign(bsPassword);
	return S_OK;
}

STDMETHODIMP CCUserInfo21::get_Password(BSTR * pVal)
{
	*pVal = m_bsPassword.copy();
	return S_OK;
}
