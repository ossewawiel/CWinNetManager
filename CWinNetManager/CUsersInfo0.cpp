// CUsersInfo0.cpp : Implementation of CCUsersInfo0

#include "stdafx.h"
#include "CUsersInfo0.h"


// CCUsersInfo0

STDMETHODIMP CCUsersInfo0::Add(ICUserInfo0 * pUserInfo0)
{
	CComPtr<ICUserInfo0> pCom = static_cast<ICUserInfo0*>(pUserInfo0);
	m_coll.push_back(pCom);
	return S_OK;
}
