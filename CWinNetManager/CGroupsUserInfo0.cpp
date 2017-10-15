// CGroupsUserInfo0.cpp : Implementation of CCGroupsUserInfo0

#include "stdafx.h"
#include "CGroupsUserInfo0.h"


// CCGroupsUserInfo0

STDMETHODIMP CCGroupsUserInfo0::Add(ICGroupUserInfo0 * pGroupUserInfo0)
{
	CComPtr<ICGroupUserInfo0> pCom = static_cast<ICGroupUserInfo0*>(pGroupUserInfo0);
	m_coll.push_back(pCom);
	return S_OK;
}
