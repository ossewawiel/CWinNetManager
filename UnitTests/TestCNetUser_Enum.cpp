#include "TestCNetUser.h"

// WHEN_CALLING_NETUSERENUM0_THEN_RETURN_USERSNFO0_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserEnum0 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual ite properties should be a valid value
TEST_F(TestCNetUser_Enum, when_calling_netuserenum0_then_return_usersnfo0_no_exception)
{
	CComPtr<ICUsersInfo0> pUsersInfo0;
	CUSTOM_ASSERT_SET;
	ASSERT_USERS_ENUM(mpCNetUser, 0, pUsersInfo0);

	long lCount(0);
	ASSERT_GT_GET_COUNT(pUsersInfo0, lCount)

	for (long idx = 1; idx <= lCount; idx++)
	{
		CComPtr<ICUserInfo0> pUserInfo0;
		ASSERT_GET_ITEM(pUsersInfo0, idx, pUserInfo0);

		ASSERT_LGT_PROP_GET_BSTR(pUserInfo0, get_Name, 0);
	}
}

// WHEN_CALLING_NETUSERENUM1_THEN_RETURN_USERSNFO1_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserEnum1 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual ite properties should be a valid value
TEST_F(TestCNetUser_Enum, when_calling_netuserenum1_then_return_usersnfo1_no_exception)
{
	CComPtr<ICUsersInfo1> pUsersInfo1;
	CUSTOM_ASSERT_SET;
	ASSERT_USERS_ENUM(mpCNetUser, 1, pUsersInfo1);

	long lCount(0);
	ASSERT_GT_GET_COUNT(pUsersInfo1, lCount)

		for (long idx = 1; idx <= lCount; idx++)
		{
			CComPtr<ICUserInfo1> pUserInfo1;
			ASSERT_GET_ITEM(pUsersInfo1, idx, pUserInfo1);

			ASSERT_LGT_PROP_GET_BSTR(pUserInfo1, get_Name, 0);
		}
}

// WHEN_CALLING_NETUSERENUM2_THEN_RETURN_USERSNFO2_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserEnum2 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual ite properties should be a valid value
TEST_F(TestCNetUser_Enum, when_calling_netuserenum2_then_return_usersnfo2_no_exception)
{
	CComPtr<ICUsersInfo2> pUsersInfo2;
	CUSTOM_ASSERT_SET;
	ASSERT_USERS_ENUM(mpCNetUser, 2, pUsersInfo2);

	long lCount(0);
	ASSERT_GT_GET_COUNT(pUsersInfo2, lCount)

		for (long idx = 1; idx <= lCount; idx++)
		{
			CComPtr<ICUserInfo2> pUserInfo2;
			ASSERT_GET_ITEM(pUsersInfo2, idx, pUserInfo2);

			ASSERT_LGT_PROP_GET_BSTR(pUserInfo2, get_Name, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserInfo2, get_AccntExpires, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserInfo2, get_MaxStorage, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserInfo2, get_UnitsPerWeek, 0);
			ASSERT_LGT_PROP_GET_BSTR(pUserInfo2, get_LogonServer, 0);
		}
}

// WHEN_CALLING_NETUSERENUM3_THEN_RETURN_USERSNFO3_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserEnum3 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual ite properties should be a valid value
TEST_F(TestCNetUser_Enum, when_calling_netuserenum3_then_return_usersnfo3_no_exception)
{
	CComPtr<ICUsersInfo3> pUsersInfo3;
	CUSTOM_ASSERT_SET;
	ASSERT_USERS_ENUM(mpCNetUser, 3, pUsersInfo3);

	long lCount(0);
	ASSERT_GT_GET_COUNT(pUsersInfo3, lCount)

		for (long idx = 1; idx <= lCount; idx++)
		{
			CComPtr<ICUserInfo3> pUserInfo3;
			ASSERT_GET_ITEM(pUsersInfo3, idx, pUserInfo3);

			ASSERT_LGT_PROP_GET_BSTR(pUserInfo3, get_Name, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserInfo3, get_Flags, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserInfo3, get_AccntExpires, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserInfo3, get_MaxStorage, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserInfo3, get_UnitsPerWeek, 0);
			ASSERT_LGT_PROP_GET_BSTR(pUserInfo3, get_LogonServer, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserInfo3, get_UserId, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserInfo3, get_PrimaryGrpId, 0);
		}
}

// WHEN_CALLING_NETUSERENUM10_THEN_RETURN_USERSNFO10_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserEnum10 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual ite properties should be a valid value
TEST_F(TestCNetUser_Enum, when_calling_netuserenum10_then_return_usersnfo10_no_exception)
{
	CComPtr<ICUsersInfo10> pUsersInfo10;
	CUSTOM_ASSERT_SET;
	ASSERT_USERS_ENUM(mpCNetUser, 10, pUsersInfo10);

	long lCount(0);
	ASSERT_GT_GET_COUNT(pUsersInfo10, lCount)

		for (long idx = 1; idx <= lCount; idx++)
		{
			CComPtr<ICUserInfo10> pUserInfo10;
			ASSERT_GET_ITEM(pUsersInfo10, idx, pUserInfo10);

			ASSERT_LGT_PROP_GET_BSTR(pUserInfo10, get_Name, 0);
		}
}

// WHEN_CALLING_NETUSERENUM11_THEN_RETURN_USERSNFO11_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserEnum11 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual ite properties should be a valid value
TEST_F(TestCNetUser_Enum, when_calling_netuserenum11_then_return_usersnfo11_no_exception)
{
	CComPtr<ICUsersInfo11> pUsersInfo11;
	CUSTOM_ASSERT_SET;
	ASSERT_USERS_ENUM(mpCNetUser, 11, pUsersInfo11);

	long lCount(0);
	ASSERT_GT_GET_COUNT(pUsersInfo11, lCount)

		for (long idx = 1; idx <= lCount; idx++)
		{
			CComPtr<ICUserInfo11> pUserInfo11;
			ASSERT_GET_ITEM(pUsersInfo11, idx, pUserInfo11);

			ASSERT_LGT_PROP_GET_BSTR(pUserInfo11, get_Name, 0);
			ASSERT_LGT_PROP_GET_BSTR(pUserInfo11, get_LogonServer, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserInfo11, get_MaxStorage, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserInfo11, get_UnitsPerWeek, 0);
		}
}

// WHEN_CALLING_NETUSERENUM20_THEN_RETURN_USERSNFO20_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserEnum20 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual ite properties should be a valid value
TEST_F(TestCNetUser_Enum, when_calling_netuserenum20_then_return_usersnfo20_no_exception)
{
	CComPtr<ICUsersInfo20> pUsersInfo20;
	CUSTOM_ASSERT_SET;
	ASSERT_USERS_ENUM(mpCNetUser, 20, pUsersInfo20);

	long lCount(0);
	ASSERT_GT_GET_COUNT(pUsersInfo20, lCount)

		for (long idx = 1; idx <= lCount; idx++)
		{
			CComPtr<ICUserInfo20> pUserInfo20;
			ASSERT_GET_ITEM(pUsersInfo20, idx, pUserInfo20);

			ASSERT_LGT_PROP_GET_BSTR(pUserInfo20, get_Name, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserInfo20, get_Flags, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserInfo20, get_UserId, 0);
		}
}

