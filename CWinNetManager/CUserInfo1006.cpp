// CUserInfo1006.cpp : Implementation of CCUserInfo1006

#include "stdafx.h"
#include "CUserInfo1006.h"


// CCUserInfo1006

STDMETHODIMP CCUserInfo1006::Initialise(BSTR bsHomeDir)
{
	m_bsHomeDir.Assign(bsHomeDir);
	return S_OK;
}

STDMETHODIMP CCUserInfo1006::get_HomeDirectory(BSTR * pVal)
{
	*pVal = m_bsHomeDir.copy();
	return S_OK;
}
