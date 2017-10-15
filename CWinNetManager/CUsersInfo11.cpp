// CUsersInfo11.cpp : Implementation of CCUsersInfo11

#include "stdafx.h"
#include "CUsersInfo11.h"


// CCUsersInfo11

STDMETHODIMP CCUsersInfo11::Add(ICUserInfo11 * pUserInfo11)
{
	CComPtr<ICUserInfo11> pCom = static_cast<ICUserInfo11*>(pUserInfo11);
	m_coll.push_back(pCom);
	return S_OK;
}
