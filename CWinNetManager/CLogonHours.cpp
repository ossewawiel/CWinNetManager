// CLogonHours.cpp : Implementation of CCLogonHours

#include "stdafx.h"
#include "CLogonHours.h"


// CCLogonHours



STDMETHODIMP CCLogonHours::ClearAll()
{
	HRESULT hr(S_OK);
	for_each(m_coll.begin(), m_coll.end(), [&hr](CAdapt<CComPtr<ICLogonHour>> &n)
	{
		hr = n->Deactivate();
		if (hr) return;
	});
	return hr;
}


STDMETHODIMP CCLogonHours::InitialiseAllActive()
{
	HRESULT hr(S_OK);
	for_each(m_coll.begin(), m_coll.end(), [&hr](CAdapt<CComPtr<ICLogonHour>> &n)
	{
		hr = n->Activate();
		if (hr) return;
	});
	return hr;
}
