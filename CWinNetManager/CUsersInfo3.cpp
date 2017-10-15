// CUsersInfo3.cpp : Implementation of CCUsersInfo3

#include "stdafx.h"
#include "CUsersInfo3.h"


// CCUsersInfo3

STDMETHODIMP CCUsersInfo3::Add(ICUserInfo3 * pUserInfo3)
{
	CComPtr<ICUserInfo3> pCom = static_cast<ICUserInfo3*>(pUserInfo3);
	m_coll.push_back(pCom);
	return S_OK;
}
