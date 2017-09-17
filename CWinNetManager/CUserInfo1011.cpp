// CUserInfo1011.cpp : Implementation of CCUserInfo1011

#include "stdafx.h"
#include "CUserInfo1011.h"


// CCUserInfo1011

STDMETHODIMP CCUserInfo1011::Initialise(BSTR bsFullName)
{
	m_bsFullName.Assign(bsFullName);
	return S_OK;
}

STDMETHODIMP CCUserInfo1011::get_FullName(BSTR * pVal)
{
	*pVal = m_bsFullName.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo1011::Clear()
{
	m_bsFullName = L"";
	return S_OK;
}
