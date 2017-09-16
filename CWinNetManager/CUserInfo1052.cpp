// CUserInfo1052.cpp : Implementation of CCUserInfo1052

#include "stdafx.h"
#include "CUserInfo1052.h"


// CCUserInfo1052

STDMETHODIMP CCUserInfo1052::Initialise(BSTR bsProfile)
{
	m_bsProfile.Assign(bsProfile);
	return S_OK;
}

STDMETHODIMP CCUserInfo1052::get_Profile(BSTR * pVal)
{
	*pVal = m_bsProfile.copy();
	return S_OK;
}
