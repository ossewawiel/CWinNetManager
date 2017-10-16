// CLocalGroupsUserInfo.cpp : Implementation of CCLocalGroupsUserInfo

#include "stdafx.h"
#include "CLocalGroupsUserInfo0.h"


// CCLocalGroupsUserInfo

STDMETHODIMP CCLocalGroupsUserInfo0::Add(ICLocalGroupUserInfo0 * pLocalGroupUserInfo0)
{
	CComPtr<ICLocalGroupUserInfo0> pCom = static_cast<ICLocalGroupUserInfo0*>(pLocalGroupUserInfo0);
	m_coll.push_back(pCom);
	return S_OK;
}
