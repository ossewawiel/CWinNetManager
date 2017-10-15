// CGroupsUserInfo1.cpp : Implementation of CCGroupsUserInfo1

#include "stdafx.h"
#include "CGroupsUserInfo1.h"


// CCGroupsUserInfo1

STDMETHODIMP CCGroupsUserInfo1::Add(ICGroupUserInfo1 * pGroupUserInfo1)
{
	CComPtr<ICGroupUserInfo1> pCom = static_cast<ICGroupUserInfo1*>(pGroupUserInfo1);
	m_coll.push_back(pCom);
	return S_OK;
}
