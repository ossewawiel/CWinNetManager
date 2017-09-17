// CUserInfo1018.cpp : Implementation of CCUserInfo1018

#include "stdafx.h"
#include "CUserInfo1018.h"


// CCUserInfo1018

STDMETHODIMP CCUserInfo1018::Initialise(ULONG ulMaxStorage)
{
	m_ulMaxStorage = ulMaxStorage;
	return S_OK;
}

STDMETHODIMP CCUserInfo1018::get_MaxStorage(ULONG * pVal)
{
	*pVal = m_ulMaxStorage;
	return S_OK;
}


STDMETHODIMP CCUserInfo1018::Clear()
{
	m_ulMaxStorage = 0;
	return S_OK;
}
