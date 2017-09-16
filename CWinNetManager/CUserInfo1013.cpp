// CUserInfo1013.cpp : Implementation of CCUserInfo1013

#include "stdafx.h"
#include "CUserInfo1013.h"


// CCUserInfo1013

STDMETHODIMP CCUserInfo1013::Initialise(BSTR bsParams)
{
	m_bsParams.Assign(bsParams);
	return S_OK;
}

STDMETHODIMP CCUserInfo1013::get_Params(BSTR * pVal)
{
	*pVal = m_bsParams.copy();
	return S_OK;
}
