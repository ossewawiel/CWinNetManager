#include "TestCNetUser.h"

// WHEN_CALLING_NETUSERGETGROUPS0_THEN_RETURN_GROUPUSERSINFO0_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserGetGroups0 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual properties should be a valid value
TEST_F(TestCNetUser_Enum, when_calling_netusergetgroups0_then_return_groupusersinfo0_no_exception)
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

			_bstr_t bsUserName(L"");
			ASSERT_PROP_GET_BSTR(pUserInfo0, get_Name, bsUserName);

			CComPtr<ICGroupsUserInfo0> pGroupsUserInfo0;
			ASSERT_USERS_GET_GROUPS(mpCNetUser, 0, bsUserName, pGroupsUserInfo0);

			long lGrpCount(0);
			ASSERT_GT_GET_COUNT(pGroupsUserInfo0, lGrpCount);

			for (long grpIdx = 1; grpIdx <= lGrpCount; grpIdx++)
			{
				CComPtr<ICGroupUserInfo0> pGroupUserInfo0;
				ASSERT_GET_ITEM(pGroupsUserInfo0, grpIdx, pGroupUserInfo0);

				ASSERT_LGT_PROP_GET_BSTR(pGroupUserInfo0, get_Name, 0);
			}
		}
}

// WHEN_CALLING_NETUSERGETGROUPS1_THEN_RETURN_GROUPUSERSINFO1_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserGetGroups1 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual properties should be a valid value
TEST_F(TestCNetUser_Enum, when_calling_netusergetgroups1_then_return_groupusersinfo1_no_exception)
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

			_bstr_t bsUserName(L"");
			ASSERT_PROP_GET_BSTR(pUserInfo0, get_Name, bsUserName);

			CComPtr<ICGroupsUserInfo1> pGroupsUserInfo1;
			ASSERT_USERS_GET_GROUPS(mpCNetUser, 1, bsUserName, pGroupsUserInfo1);

			long lGrpCount(0);
			ASSERT_GT_GET_COUNT(pGroupsUserInfo1, lGrpCount);

			for (long grpIdx = 1; grpIdx <= lGrpCount; grpIdx++)
			{
				CComPtr<ICGroupUserInfo1> pGroupUserInfo1;
				ASSERT_GET_ITEM(pGroupsUserInfo1, grpIdx, pGroupUserInfo1);

				ASSERT_LGT_PROP_GET_BSTR(pGroupUserInfo1, get_Name, 0);
				ASSERT_GT_PROP_GET_ULONG(pGroupUserInfo1, get_Attributes, 0);
			}
		}
}