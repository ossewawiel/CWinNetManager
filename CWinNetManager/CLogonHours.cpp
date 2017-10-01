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

STDMETHODIMP CCLogonHours::put_Item(long n, ICLogonHour * pLogonHour)
{
	m_coll[n] = pLogonHour;
	return S_OK;
}

STDMETHODIMP CCLogonHours::ActivateLogonHour(SHORT shDay, SHORT shHour)
{
	HRESULT hr(S_OK);
	auto it = std::find_if(m_coll.begin(), m_coll.end(), [&hr, &shDay, &shHour](CAdapt<CComPtr<ICLogonHour>> &n)
	{
		SHORT curDay;
		hr = n->get_Day(&curDay);
		SHORT curHour;
		hr = n->get_Hour(&curHour);
		return curDay == shDay && curHour == shHour;
	});
	if(it != std::end(m_coll))
		hr = (*it)->Activate();
	return hr;
}

STDMETHODIMP CCLogonHours::DeactivateLogonHour(SHORT shDay, SHORT shHour)
{
	HRESULT hr(S_OK);
	auto it = std::find_if(m_coll.begin(), m_coll.end(), [&hr, &shDay, &shHour](CAdapt<CComPtr<ICLogonHour>> &n)
	{
		SHORT curDay;
		hr = n->get_Day(&curDay);
		SHORT curHour;
		hr = n->get_Hour(&curHour);
		return curDay == shDay && curHour == shHour;
	});
	if (it != std::end(m_coll))
		hr = (*it)->Deactivate();
	return hr;
}

STDMETHODIMP CCLogonHours::ActivateItem(long n)
{
	return m_coll[n]->Activate();
}

STDMETHODIMP CCLogonHours::DeactivateItem(long n)
{
	return m_coll[n]->Deactivate();
}
