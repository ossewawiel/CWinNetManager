#include "TestCNetUser.h"

// WHEN_CALLING_NETUSERGETLOCALGROUPS0_THEN_RETURN_LOCALGROUPUSERSINFO0_WITH_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserGetLocalGroups0 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual properties should be a valid value
TEST_F(TestCNetUser_Enum, when_calling_netusergetlocalgroups0_then_return_localgroupusersinfo0_with_no_exception)
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

			CComPtr<ICLocalGroupsUserInfo0> pLocalGroupsUserInfo0;
			ASSERT_USERS_GET_LOCAL_GROUPS(mpCNetUser, 0, bsUserName, pLocalGroupsUserInfo0);

			long lGrpCount(0);
			ASSERT_GT_GET_COUNT(pLocalGroupsUserInfo0, lGrpCount);

			for (long grpIdx = 1; grpIdx <= lGrpCount; grpIdx++)
			{
				CComPtr<ICLocalGroupUserInfo0> pLocalGroupUserInfo0;
				ASSERT_GET_ITEM(pLocalGroupsUserInfo0, grpIdx, pLocalGroupUserInfo0);

				ASSERT_LGT_PROP_GET_BSTR(pLocalGroupUserInfo0, get_Name, 0);
			}
		}
}