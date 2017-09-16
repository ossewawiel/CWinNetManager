// CUserInfo1010.cpp : Implementation of CCUserInfo1010

#include "stdafx.h"
#include "CUserInfo1010.h"


// CCUserInfo1010

STDMETHODIMP CCUserInfo1010::Initialise(ULONG ulAuthFlags)
{
	m_ulAuthFlags = ulAuthFlags;
	return S_OK;
}

STDMETHODIMP CCUserInfo1010::get_AuthFlags(ULONG * pVal)
{
	*pVal = m_ulAuthFlags;
	return S_OK;
}
