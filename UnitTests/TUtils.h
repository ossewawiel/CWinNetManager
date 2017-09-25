#pragma once
#include "stdafx.h"

#define ASSERT_EQ_PROP_GET_BSTR(uinfObject, getProperty, eqTo) \
	_bstr_t bs##getProperty(L"*"); \
	HRESULT hr##getProperty(S_OK); \
	hr##getProperty =  ##uinfObject->##getProperty(bs##getProperty.GetAddress()); \
	ASSERT_FALSE(hr##getProperty) << TUtils::GetLastErrorAsString(hr##getProperty); \
	ASSERT_EQ(##eqTo, bs##getProperty);

#define ASSERT_EQ_PROP_GET_ULONG(uinfObject, getProperty, eqTo) \
	ULONG ul##getProperty(100); \
	HRESULT hr##getProperty(S_OK); \
	hr##getProperty =  ##uinfObject->##getProperty(&ul##getProperty); \
	ASSERT_FALSE(hr##getProperty) << TUtils::GetLastErrorAsString(hr##getProperty); \
	ASSERT_EQ(##eqTo, ul##getProperty);

#define ASSERT_EQ_PROP_GET_CLOGONHOURS(uinfObject, getProperty, eqTo) \
	CComPtr<ICLogonHours> p##getProperty; \
	HRESULT hr##getProperty(S_OK); \
	hr##getProperty =  ##uinfObject->##getProperty(&p##getProperty); \
	ASSERT_FALSE(hr##getProperty) << TUtils::GetLastErrorAsString(hr##getProperty); \
	ASSERT_TRUE(TUtils::CompareCLogonHours(p##getProperty, eqTo));

#define ASSERT_EQ_PROP_GET_SHORT(uinfObject, getProperty, eqTo) \
	SHORT sh##getProperty(100); \
	HRESULT hr##getProperty(S_OK); \
	hr##getProperty =  ##uinfObject->##getProperty(&sh##getProperty); \
	ASSERT_FALSE(hr##getProperty) << TUtils::GetLastErrorAsString(hr##getProperty); \
	ASSERT_EQ(##eqTo, sh##getProperty);

namespace TUtils
{
	static _bstr_t GetLastErrorAsString(HRESULT hr)
	{
		// Thanks Jamin Grey
		// https://stackoverflow.com/questions/1387064/how-to-get-the-error-message-from-the-error-code-returned-by-getlasterror
		// Get the error message, if any.
		DWORD errorMessageID = ::GetLastError();
		if (errorMessageID == 0)
		{
			_com_error err(hr);
			return err.ErrorMessage(); //No error message has been recorded
		}

		LPSTR messageBuffer = nullptr;
		size_t size = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
			NULL, errorMessageID, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)&messageBuffer, 0, NULL);

		_bstr_t message(messageBuffer);

		//Free the buffer.
		LocalFree(messageBuffer);

		return message;
	}

	static bool CompareCLogonHours(ICLogonHours* pLeft, ICLogonHours* pRight)
	{
		if (pLeft == NULL) return false;
		if (pRight == NULL) return false;

		long lCountLeft;
		pLeft->get_Count(&lCountLeft);
		long lCountRight;
		pRight->get_Count(&lCountRight);
		if (lCountLeft != lCountRight) return false;
		for (long idx = 1; idx <= lCountLeft; idx++)
		{
			CComPtr<ICLogonHour> pLeftItem;
			pLeft->get_Item(idx, &pLeftItem);

			CComPtr<ICLogonHour> pRighttItem;
			pRight->get_Item(idx, &pRighttItem);

			SHORT leftShort;
			pLeftItem->get_Day(&leftShort);

			SHORT rightShort;
			pRighttItem->get_Day(&rightShort);

			if (leftShort != rightShort) return false;
			if (leftShort <= 0 || leftShort > 7) return false;
			if (rightShort <= 0 || rightShort > 7) return false;

			leftShort = 0;
			pLeftItem->get_Hour(&leftShort);

			rightShort = 0;
			pRighttItem->get_Hour(&rightShort);

			if (leftShort != rightShort) return false;
			if (leftShort < 0 || leftShort > 23) return false;
			if (rightShort < 0 || rightShort > 23) return false;

			leftShort = 0;
			pLeftItem->get_State(&leftShort);

			rightShort = 0;
			pRighttItem->get_State(&rightShort);

			if (leftShort != rightShort) return false;
			if (leftShort < 0 || leftShort > 1) return false;
			if (rightShort < 0 || rightShort > 1) return false;

			return true;
		}
	}
	//static void ASSERT_USRINF_NAME()
}


