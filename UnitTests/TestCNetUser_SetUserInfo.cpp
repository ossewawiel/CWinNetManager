#include "TestCNetUser.h"

// WHEN_NETUSERSETINFO_WITH_USERINFO0_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo0 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo0_then_return_no_exception)
{
	//Add user
	CComPtr<ICUserInfo1> pUserInfo1;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_1(mpCNetUser, pUserInfo1);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo1, eUserInfoType::uiType1);

	//Set User Info
	CComPtr<ICUserInfo0 > pUserInfo0;
	ASSERT_GET_USER_INFO_0_ALT(mpCNetUser, pUserInfo0);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo0, eUserInfoType::uiType0)

	//Get and check if changed
	pUserInfo0.Detach();
	ASSERT_USER_GET_INFO_0(mpCNetUser, PAR_UINF_NAME_ALT, pUserInfo0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo0, get_Name, PAR_UINF_NAME_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME_ALT);
}

// WHEN_NETUSERSETINFO_WITH_USERINFO1_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1_then_return_no_exception)
{
	CComPtr<ICUserInfo1> pUserInfo1;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_1(mpCNetUser, pUserInfo1);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo1, eUserInfoType::uiType1);

	//Set User Info
	pUserInfo1.Detach();
	ASSERT_GET_USER_INFO_1_ALT(mpCNetUser, pUserInfo1);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1, eUserInfoType::uiType1);

	//Get and check if changed
	pUserInfo1.Detach();
	ASSERT_USER_GET_INFO_1(mpCNetUser, PAR_UINF_NAME, pUserInfo1);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1, get_Privilege, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_HomeDirectory, PAR_UINF_HOMEDIR_ALT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_Comment, PAR_UINF_COMNT_ALT);
	ASSERT_NE_PROP_GET_ULONG(pUserInfo1, get_Flags, PAR_UINF_FLGS_ALT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_ScriptPath, PAR_UINF_SCRPATH_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

//// WHEN_NETUSERSETINFO_WITH_USERINFO2_THEN_RETURN_NO_EXCEPTION
/////////////////////////////////////////////////////////////////////////////////
///// When setting a test user with NetUserSetInfo and UserInfo2 no exception should be 
///// returned
//TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo2_then_return_no_exception)
//{
//	CComPtr<ICUserInfo2> pUserInfo2;
//	CComPtr<ICLogonHours> pLogonHours;
//	CUSTOM_ASSERT_SET;
//	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
//	ASSERT_GET_USER_INFO_2_SET(mpCNetUser, pLogonHours, pUserInfo2);
//	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo2, eUserInfoType::uiType2);
//
//	//pUserInfo2.Detach();
//	//ASSERT_USER_GET_INFO_2(mpCNetUser, PAR_UINF_NAME, pUserInfo2);
//
//	//Set User Info
//	pUserInfo2.Detach();
//	pLogonHours.Detach();
//	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
//	pLogonHours->ClearAll();
//	ASSERT_GET_USER_INFO_2_ALT(mpCNetUser, pLogonHours, pUserInfo2);
//	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo2, eUserInfoType::uiType2);
//
//	//Get and check if changed
//	pUserInfo2.Detach();
//	ASSERT_USER_GET_INFO_2(mpCNetUser, PAR_UINF_NAME, pUserInfo2);
//	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Name, PAR_UINF_NAME);
//	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_Privilege, 0);
//	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_HomeDirectory, PAR_UINF_HOMEDIR_ALT);
//	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Comment, PAR_UINF_COMNT_ALT);
//	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_Flags, PAR_UINF_FLGS_ALT);
//	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_ScriptPath, PAR_UINF_SCRPATH_ALT);
//	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_AuthFlags, PAR_UINF_AUTHFLGS_ALT);
//	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_FullName, PAR_UINF_FULLNAME_ALT);
//	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_UsrComment, PAR_UINF_USRCOMMENT_ALT);
//	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Params, PAR_UINF_PARAMS_ALT);
//	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Workstations, PAR_UINF_WORKSTATIONS_ALT);
//	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_LastLogon, 0);
//	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_LastLogoff, 0);
//	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_AccntExpires, PAR_UINF_ACCNTEXPIRES_ALT);
//	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_MaxStorage, PAR_UINF_MAXSTORAGE_ALT);
//	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_UnitsPerWeek, 0);
//	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo2, get_LogonHours, pLogonHours);
//	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_BadPwdCount, 0);
//	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_NumLogons, 0);
//	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_LogonServer, PAR_UINF_LOGONSERVER);
//	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_CountryCode, PAR_UINF_COUNTRYCODE_ALT);
//	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_CodePage, PAR_UINF_CODEPAGE_ALT);
//
//	//Clean up
//	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
//}

// WHEN_NETUSERSETINFO_WITH_USERINFO1003_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1003 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1003_then_return_no_exception)
{
	CComPtr<ICUserInfo1> pUserInfo1;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_1(mpCNetUser, pUserInfo1);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo1, eUserInfoType::uiType1);

	//Set User Info
	CComPtr<ICUserInfo1003> pUserInfo1003;
	ASSERT_GET_USER_INFO_1003_ALT(mpCNetUser, pUserInfo1003);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1003, eUserInfoType::uiType1003);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

//// WHEN_NETUSERSETINFO_WITH_USERINFO1005_THEN_RETURN_NO_EXCEPTION
/////////////////////////////////////////////////////////////////////////////////
///// When setting a test user with NetUserSetInfo and UserInfo1005 no exception should be 
///// returned
//TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1005_then_return_no_exception)
//{
//	CComPtr<ICUserInfo1> pUserInfo1;
//	CUSTOM_ASSERT_SET;
//	ASSERT_GET_USER_INFO_1(mpCNetUser, pUserInfo1);
//	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo1, eUserInfoType::uiType1);
//
//	//Set User Info
//	CComPtr<ICUserInfo1005> pUserInfo1005;
//	ASSERT_GET_USER_INFO_1005_ALT(mpCNetUser, pUserInfo1005);
//	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1005, eUserInfoType::uiType1005);
//
//	//Get and check if changed
//	pUserInfo1005.Detach();
//	ASSERT_USER_GET_INFO_1005(mpCNetUser, PAR_UINF_NAME, pUserInfo1005);
//	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1005, get_Privilege, PAR_UINF_PRIV_ALT);
//
//	//Clean up
//	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
//}

// WHEN_NETUSERSETINFO_WITH_USERINFO1006_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1006 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1006_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	//Set User Info
	CComPtr<ICUserInfo1006> pUserInfo1006;
	ASSERT_GET_USER_INFO_1006_ALT(mpCNetUser, pUserInfo1006);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1006, eUserInfoType::uiType1006);

	//Get and check if changed
	pUserInfo4.Detach();
	ASSERT_USER_GET_INFO_4(mpCNetUser, PAR_UINF_NAME, pUserInfo4);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_HomeDirectory, PAR_UINF_HOMEDIR_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERSETINFO_WITH_USERINFO1007_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1007 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1007_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	//Set User Info
	CComPtr<ICUserInfo1007> pUserInfo1007;
	ASSERT_GET_USER_INFO_1007_ALT(mpCNetUser, pUserInfo1007);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1007, eUserInfoType::uiType1007);

	//Get and check if changed
	pUserInfo4.Detach();
	ASSERT_USER_GET_INFO_4(mpCNetUser, PAR_UINF_NAME, pUserInfo4);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Comment, PAR_UINF_COMNT_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERSETINFO_WITH_USERINFO1008_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1008 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1008_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	//Set User Info
	CComPtr<ICUserInfo1008> pUserInfo1008;
	ASSERT_GET_USER_INFO_1008_ALT(mpCNetUser, pUserInfo1008);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1008, eUserInfoType::uiType1008);

	//Get and check if changed
	pUserInfo4.Detach();
	ASSERT_USER_GET_INFO_4(mpCNetUser, PAR_UINF_NAME, pUserInfo4);
	ASSERT_NE_PROP_GET_ULONG(pUserInfo4, get_Flags, PAR_UINF_FLGS_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERSETINFO_WITH_USERINFO1009_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1009 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1009_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	//Set User Info
	CComPtr<ICUserInfo1009> pUserInfo1009;
	ASSERT_GET_USER_INFO_1009_ALT(mpCNetUser, pUserInfo1009);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1009, eUserInfoType::uiType1009);

	//Get and check if changed
	pUserInfo4.Detach();
	ASSERT_USER_GET_INFO_4(mpCNetUser, PAR_UINF_NAME, pUserInfo4);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_ScriptPath, PAR_UINF_SCRPATH_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERSETINFO_WITH_USERINFO1010_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1010 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1010_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	//Set User Info
	CComPtr<ICUserInfo1010> pUserInfo1010;
	ASSERT_GET_USER_INFO_1010_ALT(mpCNetUser, pUserInfo1010);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1010, eUserInfoType::uiType1010);

	//Get and check if changed
	pUserInfo4.Detach();
	ASSERT_USER_GET_INFO_4(mpCNetUser, PAR_UINF_NAME, pUserInfo4);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_AuthFlags, PAR_UINF_AUTHFLGS_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERSETINFO_WITH_USERINFO1011_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1011 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1011_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	//Set User Info
	CComPtr<ICUserInfo1011> pUserInfo1011;
	ASSERT_GET_USER_INFO_1011_ALT(mpCNetUser, pUserInfo1011);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1011, eUserInfoType::uiType1011);

	//Get and check if changed
	pUserInfo4.Detach();
	ASSERT_USER_GET_INFO_4(mpCNetUser, PAR_UINF_NAME, pUserInfo4);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_FullName, PAR_UINF_FULLNAME_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERSETINFO_WITH_USERINFO1012_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1012 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1012_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	//Set User Info
	CComPtr<ICUserInfo1012> pUserInfo1012;
	ASSERT_GET_USER_INFO_1012_ALT(mpCNetUser, pUserInfo1012);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1012, eUserInfoType::uiType1012);

	//Get and check if changed
	pUserInfo4.Detach();
	ASSERT_USER_GET_INFO_4(mpCNetUser, PAR_UINF_NAME, pUserInfo4);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_UsrComment, PAR_UINF_USRCOMMENT_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERSETINFO_WITH_USERINFO1014_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1014 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1014_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	//Set User Info
	CComPtr<ICUserInfo1014> pUserInfo1014;
	ASSERT_GET_USER_INFO_1014_ALT(mpCNetUser, pUserInfo1014);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1014, eUserInfoType::uiType1014);

	//Get and check if changed
	pUserInfo4.Detach();
	ASSERT_USER_GET_INFO_4(mpCNetUser, PAR_UINF_NAME, pUserInfo4);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Workstations, PAR_UINF_WORKSTATIONS_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERSETINFO_WITH_USERINFO1017_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1017 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1017_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	//Set User Info
	CComPtr<ICUserInfo1017> pUserInfo1017;
	ASSERT_GET_USER_INFO_1017_ALT(mpCNetUser, pUserInfo1017);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1017, eUserInfoType::uiType1017);

	//Get and check if changed
	pUserInfo4.Detach();
	ASSERT_USER_GET_INFO_4(mpCNetUser, PAR_UINF_NAME, pUserInfo4);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_AccntExpires, PAR_UINF_ACCNTEXPIRES_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERSETINFO_WITH_USERINFO1020_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1020 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1020_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	//Set User Info
	CComPtr<ICUserInfo1020> pUserInfo1020;
	pLogonHours.Detach();
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	pLogonHours->ClearAll();
	ASSERT_GET_USER_INFO_1020_ALT(mpCNetUser, pLogonHours, pUserInfo1020);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1020, eUserInfoType::uiType1020);

	//Get and check if changed
	pUserInfo4.Detach();
	ASSERT_USER_GET_INFO_4(mpCNetUser, PAR_UINF_NAME, pUserInfo4);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo4, get_LogonHours, pLogonHours);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERSETINFO_WITH_USERINFO1024_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1024 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1024_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	//Set User Info
	CComPtr<ICUserInfo1024> pUserInfo1024;
	ASSERT_GET_USER_INFO_1024_ALT(mpCNetUser, pUserInfo1024);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1024, eUserInfoType::uiType1024);

	//Get and check if changed
	pUserInfo4.Detach();
	ASSERT_USER_GET_INFO_4(mpCNetUser, PAR_UINF_NAME, pUserInfo4);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_CountryCode, PAR_UINF_COUNTRYCODE_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERSETINFO_WITH_USERINFO1051_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1051 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1051_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	//Set User Info
	CComPtr<ICUserInfo1051> pUserInfo1051;
	ASSERT_GET_USER_INFO_1051_ALT(mpCNetUser, pUserInfo1051);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1051, eUserInfoType::uiType1051);

	//Get and check if changed
	pUserInfo4.Detach();
	ASSERT_USER_GET_INFO_4(mpCNetUser, PAR_UINF_NAME, pUserInfo4);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PrimaryGrpId, PAR_UINF_PRIMGRPID_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERSETINFO_WITH_USERINFO1052_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1052 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1052_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	//Set User Info
	CComPtr<ICUserInfo1052> pUserInfo1052;
	ASSERT_GET_USER_INFO_1052_ALT(mpCNetUser, pUserInfo1052);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1052, eUserInfoType::uiType1052);

	//Get and check if changed
	pUserInfo4.Detach();
	ASSERT_USER_GET_INFO_4(mpCNetUser, PAR_UINF_NAME, pUserInfo4);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Profile, PAR_UINF_PRFL_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERSETINFO_WITH_USERINFO1053_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When setting a test user with NetUserSetInfo and UserInfo1053 no exception should be 
/// returned
TEST_F(TestCNetUser_SetInfo, when_netusersetinfo_with_userinfo1053_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	//Set User Info
	CComPtr<ICUserInfo1053> pUserInfo1053;
	ASSERT_GET_USER_INFO_1053_ALT(mpCNetUser, pUserInfo1053);
	ASSERT_SET_USER_INFO(mpCNetUser, PAR_UINF_NAME, pUserInfo1053, eUserInfoType::uiType1053);

	//Get and check if changed
	pUserInfo4.Detach();
	ASSERT_USER_GET_INFO_4(mpCNetUser, PAR_UINF_NAME, pUserInfo4);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_HomeDirDrive, PAR_UINF_HOMEDIRDRV_ALT);

	//Clean up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}