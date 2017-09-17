// CUserInfo1053.cpp : Implementation of CCUserInfo1053

#include "stdafx.h"
#include "CUserInfo1053.h"


// CCUserInfo1053

STDMETHODIMP CCUserInfo1053::Initialise(BSTR bsHomeDirDrive)
{
	m_bsHomeDirDrive.Assign(bsHomeDirDrive);
	return S_OK;
}

STDMETHODIMP CCUserInfo1053::get_HomeDirDrive(BSTR * pVal)
{
	*pVal = m_bsHomeDirDrive.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo1053::Clear()
{
	m_bsHomeDirDrive = L"";
	return S_OK;
}
