// CUserInfo1051.cpp : Implementation of CCUserInfo1051

#include "stdafx.h"
#include "CUserInfo1051.h"


// CCUserInfo1051

STDMETHODIMP CCUserInfo1051::Initialise(ULONG ulPrimaryGrpId)
{
	m_ulPrimaryGrpId = ulPrimaryGrpId;
	return S_OK;
}

STDMETHODIMP CCUserInfo1051::get_PrimaryGrpId(ULONG * pVal)
{
	*pVal = m_ulPrimaryGrpId;
	return S_OK;
}
