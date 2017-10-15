// CUsersInfo20.cpp : Implementation of CCUsersInfo20

#include "stdafx.h"
#include "CUsersInfo20.h"


// CCUsersInfo20

STDMETHODIMP CCUsersInfo20::Add(ICUserInfo20 * pUserInfo20)
{
	CComPtr<ICUserInfo20> pCom = static_cast<ICUserInfo20*>(pUserInfo20);
	m_coll.push_back(pCom);
	return S_OK;
}
