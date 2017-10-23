// CUserModalsInfo1005.cpp : Implementation of CCUserModalsInfo1005

#include "stdafx.h"
#include "CUserModalsInfo1005.h"


// CCUserModalsInfo1005



STDMETHODIMP CCUserModalsInfo1005::Initialise(ULONG ulPwdHistLen)
{
	mulPwdHistLen = ulPwdHistLen;
	return S_OK;
}


STDMETHODIMP CCUserModalsInfo1005::get_PwdHistLen(ULONG* pVal)
{
	*pVal = mulPwdHistLen;
	return S_OK;
}
