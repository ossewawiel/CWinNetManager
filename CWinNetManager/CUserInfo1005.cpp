// CUserInfo1005.cpp : Implementation of CCUserInfo1005

#include "stdafx.h"
#include "CUserInfo1005.h"


// CCUserInfo1005

STDMETHODIMP CCUserInfo1005::Initialise(ULONG ulPrivilege)
{
	m_ulPrivilege = ulPrivilege;
	return S_OK;
}

STDMETHODIMP CCUserInfo1005::get_Privilege(ULONG * pVal)
{
	*pVal =m_ulPrivilege;
	return S_OK;
}
