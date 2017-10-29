#pragma once
#include "stdafx.h"
#include "TUtils.h"
#include "TConstants.h"

class TestCNetUserModals :
	public ::testing::Test
{
public:
	CComPtr<ICNetUserModals> mpCNetUserModals;

	void SetUp()
	{
		HRESULT hr = mpCNetUserModals.CoCreateInstance(CLSID_CNetUserModals);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	}

	void TearDown()
	{
		mpCNetUserModals.Release();
	}
};

class TestCNetUserModals_GetModals : public TestCNetUserModals {};
class TestCNetUserModals_Get : public TestCNetUserModals {};
class TestCNetUserModals_Set : public TestCNetUserModals {};

namespace AssertNetUserModals
{
	static void GetUserModalsInfo0(ICNetUserModals *netUserModals, ICUserModalsInfo0 **retVal)
	{
		HRESULT hr(S_OK);
		hr = netUserModals->GetUserModalsInfo0(PAR_ZERO, PAR_UMINF_MAXPWDAGE, PAR_ZERO, PAR_UMINFFORCELOGOFF, PAR_ZERO, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
	static void GetUserModalsInfo1(ICNetUserModals *netUserModals, ICUserModalsInfo1 **retVal)
	{
		HRESULT hr(S_OK);
		hr = netUserModals->GetUserModalsInfo1(PAR_ZERO, PAR_EMPTY, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
	static void GetUserModalsInfo2(ICNetUserModals *netUserModals, ICUserModalsInfo2 **retVal)
	{
		HRESULT hr(S_OK);
		hr = netUserModals->GetUserModalsInfo2(PAR_NOT_EMPTY, PAR_NOT_EMPTY, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
	static void GetUserModalsInfo3(ICNetUserModals *netUserModals, ICUserModalsInfo3 **retVal)
	{
		HRESULT hr(S_OK);
		hr = netUserModals->GetUserModalsInfo3(PAR_ZERO, PAR_ZERO, PAR_ZERO, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
	static void GetUserModalsInfo1001(ICNetUserModals *netUserModals, ICUserModalsInfo1001 **retVal)
	{
		HRESULT hr(S_OK);
		hr = netUserModals->GetUserModalsInfo1001(PAR_ZERO, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
	static void GetUserModalsInfo1002(ICNetUserModals *netUserModals, ICUserModalsInfo1002 **retVal)
	{
		HRESULT hr(S_OK);
		hr = netUserModals->GetUserModalsInfo1002(PAR_UMINF_MAXPWDAGE, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
	static void GetUserModalsInfo1003(ICNetUserModals *netUserModals, ICUserModalsInfo1003 **retVal)
	{
		HRESULT hr(S_OK);
		hr = netUserModals->GetUserModalsInfo1003(PAR_ZERO, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
	static void GetUserModalsInfo1004(ICNetUserModals *netUserModals, ICUserModalsInfo1004 **retVal)
	{
		HRESULT hr(S_OK);
		hr = netUserModals->GetUserModalsInfo1004(PAR_UMINFFORCELOGOFF, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
	static void GetUserModalsInfo1005(ICNetUserModals *netUserModals, ICUserModalsInfo1005 **retVal)
	{
		HRESULT hr(S_OK);
		hr = netUserModals->GetUserModalsInfo1005(PAR_ZERO, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
	static void GetUserModalsInfo1006(ICNetUserModals *netUserModals, ICUserModalsInfo1006 **retVal)
	{
		HRESULT hr(S_OK);
		hr = netUserModals->GetUserModalsInfo1006(PAR_ZERO, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
	static void GetUserModalsInfo1007(ICNetUserModals *netUserModals, ICUserModalsInfo1007 **retVal)
	{
		HRESULT hr(S_OK);
		hr = netUserModals->GetUserModalsInfo1007(PAR_ZERO, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr); 
		ASSERT_FALSE(retVal == NULL);
	}
	////////////////////////////////////////////////////////////////////////////
	static void NetUserModalsGet0(ICNetUserModals *netUserModals, ICUserModalsInfo0 **retVal)
	{
		HRESULT hr(S_OK);
		hr = netUserModals->NetUserModalsGet0(NULL, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
	static void NetUserModalsGet1(ICNetUserModals *netUserModals, ICUserModalsInfo1 **retVal)
	{
		HRESULT hr(S_OK);
		hr = netUserModals->NetUserModalsGet1(NULL, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
	static void NetUserModalsGet2(ICNetUserModals *netUserModals, ICUserModalsInfo2 **retVal)
	{
		HRESULT hr(S_OK);
		hr = netUserModals->NetUserModalsGet2(NULL, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
	static void NetUserModalsGet3(ICNetUserModals *netUserModals, ICUserModalsInfo3 **retVal)
	{
		HRESULT hr = netUserModals->NetUserModalsGet3(NULL, retVal);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
	/////////////////////////////////////////////////////////
	template<typename T>
	static void NetUserModalsSet(ICNetUserModals *netUserModals, eUserModalsInfoType infoType, T *retVal)
	{
		CComPtr<T> info = static_cast<T*>(retVal);
		HRESULT hr = netUserModals->NetUserModalsSet(NULL, infoType, info);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_FALSE(retVal == NULL);
	}
}