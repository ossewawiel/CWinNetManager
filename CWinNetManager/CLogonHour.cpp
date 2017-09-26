// CLogonHour.cpp : Implementation of CCLogonHour

#include "stdafx.h"
#include "CLogonHour.h"


// CCLogonHour



STDMETHODIMP CCLogonHour::Initialise(SHORT shDay, SHORT shHour, SHORT shActive)
{
	mshDay = shDay;
	mshHour = shHour;
	mbState = (shActive == 0) ? 0 : 1;
	return S_OK;
}


STDMETHODIMP CCLogonHour::Activate()
{
	mbState = 1;
	return S_OK;
}


STDMETHODIMP CCLogonHour::Deactivate()
{
	mbState = 0;
	return S_OK;
}


STDMETHODIMP CCLogonHour::get_Day(SHORT* pVal)
{
	*pVal = mshDay;
	return S_OK;
}


STDMETHODIMP CCLogonHour::get_Hour(SHORT* pVal)
{
	*pVal = mshHour;
	return S_OK;
}


STDMETHODIMP CCLogonHour::get_State(SHORT* pVal)
{
	*pVal = mbState;
	return S_OK;
}


