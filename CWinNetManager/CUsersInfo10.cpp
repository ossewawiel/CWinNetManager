// CUsersInfo10.cpp : Implementation of CCUsersInfo10

#include "stdafx.h"
#include "CUsersInfo10.h"


// CCUsersInfo10

STDMETHODIMP CCUsersInfo10::Add(ICUserInfo10 * pUserInfo10)
{
	CComPtr<ICUserInfo10> pCom = static_cast<ICUserInfo10*>(pUserInfo10);
	m_coll.push_back(pCom);
	return S_OK;
}
