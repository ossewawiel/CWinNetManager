// CUserInfo1.cpp : Implementation of CCUserInfo1

#include "stdafx.h"
#include "CUserInfo1.h"


// CCUserInfo1

STDMETHODIMP CCUserInfo1::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ICUserInfo1
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CCUserInfo1::get_Name(BSTR* pVal)
{
	*pVal = m_bsName.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo1::Initialise(BSTR bsName, BSTR bsPwd, ULONG ulPwdAge, ULONG ulPriv, BSTR bsHomeDir, BSTR bsComment, ULONG ulFlags, BSTR bsScriptPath)
{
	m_bsName.Assign   (bsName);
	m_bsPwd.Assign    (bsPwd);
	m_ulPwdAge       = ulPwdAge;
	m_ulPriv         = ulPriv;
	m_bsHomeDir.Assign(bsHomeDir);
	m_bsComment.Assign(bsComment);
	m_ulFlgs         = ulFlags;
	m_bsScriptPath.Assign(bsScriptPath);
	return S_OK;
}


STDMETHODIMP CCUserInfo1::get_Password(BSTR* pVal)
{
	*pVal = m_bsPwd.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo1::get_PasswordAge(ULONG* pVal)
{
	*pVal = ULONG(m_ulPwdAge);
	return S_OK;
}


STDMETHODIMP CCUserInfo1::get_Privilege(ULONG* pVal)
{
	*pVal = ULONG(m_ulPriv);
	return S_OK;
}


STDMETHODIMP CCUserInfo1::get_HomeDirectory(BSTR* pVal)
{
	*pVal = m_bsHomeDir.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo1::get_Comment(BSTR* pVal)
{
	*pVal = m_bsComment.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo1::get_Flags(ULONG* pVal)
{
	*pVal = ULONG(m_ulFlgs);
	return S_OK;
}


STDMETHODIMP CCUserInfo1::get_ScriptPath(BSTR* pVal)
{
	*pVal = m_bsScriptPath.copy();
	return S_OK;
}


STDMETHODIMP CCUserInfo1::Clear()
{
	m_bsComment		= L"";
	m_bsHomeDir		= L"";
	m_bsName		= L"";
	m_bsPwd			= L"";
	m_bsScriptPath	= L"";
	m_ulFlgs		= 0;
	m_ulPriv		= 0;
	m_ulPwdAge		= 0;
	return			S_OK;
}
