// CUserInfo1009.cpp : Implementation of CCUserInfo1009

#include "stdafx.h"
#include "CUserInfo1009.h"


// CCUserInfo1009

STDMETHODIMP CCUserInfo1009::Initialise(BSTR bsScriptPath)
{
	m_bsScriptPath.Assign(bsScriptPath);
	return S_OK;
}

STDMETHODIMP CCUserInfo1009::get_ScriptPath(BSTR * pVal)
{
	*pVal = m_bsScriptPath.copy();
	return S_OK;
}
