// CUsersInfo23.cpp : Implementation of CCUsersInfo23

#include "stdafx.h"
#include "CUsersInfo23.h"


// CCUsersInfo23

STDMETHODIMP CCUsersInfo23::Add(ICUserInfo23 * pUserInfo23)
{
	CComPtr<ICUserInfo23> pCom = static_cast<ICUserInfo23*>(pUserInfo23);
	m_coll.push_back(pCom);
	return S_OK;
}
