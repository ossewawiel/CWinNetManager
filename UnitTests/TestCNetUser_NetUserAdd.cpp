#include "TestCNetUser.h"


// WHEN_NETUSERADD_WITH_USERINFO1_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// Whenadding a test user with NetUserAdd and UserInfo1 no exception should be 
/// returned
TEST_F(TestCNetUser_Add, when_netuseradd_with_userinfo1_then_return_no_exception)
{
	CComPtr<ICUserInfo1> pUserInfo1;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_1(mpCNetUser, pUserInfo1);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo1, eUserInfoType::uiType1);
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERADD_WITH_USERINFO2_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// Whenadding a test user with NetUserAdd and UserInfo2 no exception should be 
/// returned
TEST_F(TestCNetUser_Add, when_netuseradd_with_userinfo2_then_return_no_exception)
{
	CComPtr<ICUserInfo2> pUserInfo2;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_2_SET(mpCNetUser, pLogonHours, pUserInfo2);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo2, eUserInfoType::uiType2);
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERADD_WITH_USERINFO3_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// Whenadding a test user with NetUserAdd and UserInfo3 no exception should be 
/// returned
TEST_F(TestCNetUser_Add, when_netuseradd_with_userinfo3_then_return_no_exception)
{
	CComPtr<ICUserInfo3> pUserInfo3;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_3_SET(mpCNetUser, pLogonHours, pUserInfo3)
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo3, eUserInfoType::uiType3);
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERADD_WITH_USERINFO4_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// Whenadding a test user with NetUserAdd and UserInfo4 no exception should be 
/// returned
TEST_F(TestCNetUser_Add, when_netuseradd_with_userinfo4_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4)
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}