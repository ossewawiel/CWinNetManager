// CUserInfo1017.cpp : Implementation of CCUserInfo1017

#include "stdafx.h"
#include "CUserInfo1017.h"


// CCUserInfo1017

STDMETHODIMP CCUserInfo1017::Initialise(ULONG ulAccntExpires)
{
	m_ulAccntExpires = ulAccntExpires;
	return S_OK;
}

STDMETHODIMP CCUserInfo1017::get_AccntExpires(ULONG * pVal)
{
	*pVal = m_ulAccntExpires;
	return S_OK;
}
