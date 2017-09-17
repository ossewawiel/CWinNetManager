// CUserInfo0.cpp : Implementation of CCUserInfo0

#include "stdafx.h"
#include "CUserInfo0.h"


// CCUserInfo0


STDMETHODIMP CCUserInfo0::Initialise(BSTR bsName)
{
	m_bsName.Assign(bsName);
	return S_OK;
}

STDMETHODIMP CCUserInfo0::get_Name(BSTR* pVal)
{
	*pVal = m_bsName.copy();
	return S_OK;
}

USER_INFO_0 CCUserInfo0::TranslateToUserInfo(ICUserInfo0 * pICUserInfo0)
{
	return USER_INFO_0();
}

STDMETHODIMP CCUserInfo0::Clear()
{
	m_bsName = L"";
	return S_OK;
}
