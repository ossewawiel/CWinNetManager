// CUsersInfo2.cpp : Implementation of CCUsersInfo2

#include "stdafx.h"
#include "CUsersInfo2.h"


// CCUsersInfo2

STDMETHODIMP CCUsersInfo2::Add(ICUserInfo2 * pUserInfo2)
{
	CComPtr<ICUserInfo2> pCom = static_cast<ICUserInfo2*>(pUserInfo2);
	m_coll.push_back(pCom);
	return S_OK;
}
