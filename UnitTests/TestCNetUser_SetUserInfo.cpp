#include "TestCNetUser.h"

// WHEN_NETUSERSETINFO0_WITH_USERINFO0_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo0 no exception should be 
/// returned
TEST_F(TestCNetUser_Add, when_netusersetinfo0_with_userinfo0_then_return_no_exception)
{
	CComPtr<ICUserInfo1> pUserInfo1;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_1(mpCNetUser, pUserInfo1);

	hr = mpCNetUser->NetUserAdd(NULL, eUserInfoType::uiType1, pUserInfo1);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Now Set User Info
	CComPtr<ICUserInfo0 > pUserInfo0;
	ASSERT_GET_USER_INFO_0_ALT(mpCNetUser, pUserInfo0);

	hr = mpCNetUser->NetUserSetInfo(NULL, PAR_UINF_NAME, eUserInfoType::uiType0, pUserInfo0);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME_ALT);
}

// WHEN_NETUSERSETINFO1_WITH_USERINFO1_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInf1 and UserInfo1 no exception should be 
/// returned
TEST_F(TestCNetUser_Add, when_netusersetinfo1_with_userinfo1_then_return_no_exception)
{
	//CComPtr<ICUserInfo1> pUserInfo1;
	//CUSTOM_ASSERT_SET;
	//ASSERT_GET_USER_INFO_1(mpCNetUser, pUserInfo1);

	//hr = mpCNetUser->NetUserAdd(NULL, eUserInfoType::uiType1, pUserInfo1);
	//ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	//
	////Now Set User Info
	//pUserInfo1.Detach();
	//ASSERT_GET_USER_INFO_1_ALT(mpCNetUser, pUserInfo1);

	//hr = mpCNetUser->NetUserSetInfo(NULL, PAR_UINF_NAME, eUserInfoType::uiType1, pUserInfo1);
	//ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	////Now delete the user
	//hr = mpCNetUser->NetUserDel(NULL, PAR_UINF_NAME_ALT);
	//ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
}