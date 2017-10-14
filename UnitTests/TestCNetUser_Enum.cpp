#include "TestCNetUser.h"

// WHEN_CALLING_NETUSERENUM0_THEN_RETURN_USERSNFO0_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When changing password with ChangePassword no exception should be 
/// returned
TEST_F(TestCNetUser_Enum, when_calling_netuserenum0_then_return_usersnfo0_no_exception)
{
	CComPtr<ICUsersInfo0> pUsersInfo0;
	CUSTOM_ASSERT_SET;
	ASSERT_USERS_ENUM_0(mpCNetUser, pUsersInfo0);

	long lCount(0);
	hr = pUsersInfo0->get_Count(&lCount);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_TRUE(lCount > 0);

	for (long idx = 1; idx <= lCount; idx++)
	{
		CComPtr<ICUserInfo0> pUserInfo0;
		hr = pUsersInfo0->get_Item(idx, &pUserInfo0);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		_bstr_t bsName(L"");
		hr = pUserInfo0->get_Name(bsName.GetAddress());
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
		ASSERT_TRUE(bsName.length() > 0);
	}
}