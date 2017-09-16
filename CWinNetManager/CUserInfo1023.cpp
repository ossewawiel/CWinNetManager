// CUserInfo1023.cpp : Implementation of CCUserInfo1023

#include "stdafx.h"
#include "CUserInfo1023.h"


// CCUserInfo1023

STDMETHODIMP CCUserInfo1023::Initialise(BSTR bsLogonServer)
{
	m_bsLogonServer.Assign(bsLogonServer);
	return S_OK;
}

STDMETHODIMP CCUserInfo1023::get_LogonServer(BSTR * pVal)
{
	*pVal = m_bsLogonServer.copy();
	return S_OK;
}
