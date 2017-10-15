// CUsersInfo1.cpp : Implementation of CCUsersInfo1

#include "stdafx.h"
#include "CUsersInfo1.h"


// CCUsersInfo1

STDMETHODIMP CCUsersInfo1::Add(ICUserInfo1 * pUserInfo1)
{
	CComPtr<ICUserInfo1> pCom = static_cast<ICUserInfo1*>(pUserInfo1);
	m_coll.push_back(pCom);
	return S_OK;
}
