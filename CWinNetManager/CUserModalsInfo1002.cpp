// CUserModalsInfo1002.cpp : Implementation of CCUserModalsInfo1002

#include "stdafx.h"
#include "CUserModalsInfo1002.h"


// CCUserModalsInfo1002



STDMETHODIMP CCUserModalsInfo1002::Initialise(ULONG ulMaxPwdAge)
{
	mulMaxPwdAge = ulMaxPwdAge;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo1002::get_MaxPwdAge(ULONG* pVal)
{
	*pVal = mulMaxPwdAge;
	return S_OK;
}
