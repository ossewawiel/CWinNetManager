#include "TestCNetUser.h"

// WHEN_CHANGEPASSWORD_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When changing password with ChangePassword no exception should be 
/// returned
TEST_F(TestCNetUser_ChangePassword, when_changepassword_then_return_no_exception)
{
	CComPtr<ICUserInfo1> pUserInfo1;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_1(mpCNetUser, pUserInfo1);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo1, eUserInfoType::uiType1);

	mpCNetUser->NetUserChangePassword(NULL, PAR_UINF_NAME, PAR_UINF_PWD, PAR_UINF_PWD_ALT);

	//Clean Up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}