// CUserInfo1025.cpp : Implementation of CCUserInfo1025

#include "stdafx.h"
#include "CUserInfo1025.h"


// CCUserInfo1025

STDMETHODIMP CCUserInfo1025::Initialise(ULONG ulCodePage)
{
	m_ulCodePage = ulCodePage;
	return S_OK;
}

STDMETHODIMP CCUserInfo1025::get_CodePage(ULONG * pVal)
{
	*pVal = m_ulCodePage;
	return S_OK;
}


STDMETHODIMP CCUserInfo1025::Clear()
{
	m_ulCodePage = 0;
	return S_OK;
}
