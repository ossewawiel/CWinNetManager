// CUserInfo1008.cpp : Implementation of CCUserInfo1008

#include "stdafx.h"
#include "CUserInfo1008.h"


// CCUserInfo1008

STDMETHODIMP CCUserInfo1008::Initialise(ULONG ulFlags)
{
	m_ulFlags = ulFlags;
	return S_OK;
}

STDMETHODIMP CCUserInfo1008::get_Flags(ULONG * pVal)
{
	*pVal = m_ulFlags;
	return S_OK;
}
