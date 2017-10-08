#include "TestCNetUser.h"

// WHEN_NETUSERGETINFO0_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When getting a test user with NetUserGetInfo0 no exception should be 
/// returned
TEST_F(TestCNetUser_GetInfo, when_netusergetinfo0_then_return_no_exception)
{
	CComPtr<ICUserInfo1> pUserInfo1;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_1(mpCNetUser, pUserInfo1);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo1, eUserInfoType::uiType1);

	CComPtr<ICUserInfo0> pUserInfo0;
	ASSERT_USER_GET_INFO_0(mpCNetUser, PAR_UINF_NAME, pUserInfo0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo0, get_Name, PAR_UINF_NAME);

	//Clean Up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERGETINFO1_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When getting a test user with NetUserGetInfo1 no exception should be 
/// returned
TEST_F(TestCNetUser_GetInfo, when_netusergetinfo1_then_return_no_exception)
{
	CComPtr<ICUserInfo1> pUserInfo1;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_1(mpCNetUser, pUserInfo1);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo1, eUserInfoType::uiType1);

	pUserInfo1.Detach();
	ASSERT_USER_GET_INFO_1(mpCNetUser, PAR_UINF_NAME, pUserInfo1);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_ScriptPath, PAR_UINF_SCRPATH);

	//Clean Up
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERGETINFO2_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When getting a test user with NetUserGetInfo2 no exception should be 
/// returned
TEST_F(TestCNetUser_GetInfo, when_netusergetinfo2_then_return_no_exception)
{
	CComPtr<ICUserInfo2> pUserInfo2;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_2_SET(mpCNetUser, pLogonHours,  pUserInfo2);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo2, eUserInfoType::uiType2);

	pLogonHours.Detach();
	pUserInfo2.Detach();
	hr = mpCNetUser->NetUserGetInfo2(NULL, PAR_UINF_NAME, &pUserInfo2);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_PasswordAge, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_Privilege, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_ScriptPath, PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_AuthFlags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_LastLogon, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_LastLogoff, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_UnitsPerWeek, 168);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo2, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_BadPwdCount, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_NumLogons, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_CodePage, PAR_UINF_CODEPAGE);
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERGETINFO3_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When getting a test user with NetUserGetInfo3 no exception should be 
/// returned
TEST_F(TestCNetUser_GetInfo, when_netusergetinfo3_then_return_no_exception)
{
	CComPtr<ICUserInfo3> pUserInfo3;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_3_SET(mpCNetUser, pLogonHours, pUserInfo3);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo3, eUserInfoType::uiType3);

	pLogonHours.Detach();
	pUserInfo3.Detach();
	hr = mpCNetUser->NetUserGetInfo3(NULL, PAR_UINF_NAME, &pUserInfo3);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PasswordAge, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_Privilege, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Comment, PAR_UINF_COMNT);
	ASSERT_NE_PROP_GET_ULONG(pUserInfo3, get_Flags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_ScriptPath, PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_AuthFlags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_LastLogon, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_LastLogoff, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_UnitsPerWeek, 168);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo3, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_BadPwdCount, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_NumLogons, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_CodePage, PAR_UINF_CODEPAGE);
	ASSERT_NE_PROP_GET_ULONG(pUserInfo3, get_UserId, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PrimaryGrpId, PAR_UINF_PRIMGRPID);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Profile, PAR_UINF_PRFL);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_HomeDirDrive, PAR_UINF_HOMEDIRDRV);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PwdExpired, 0);
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERGETINFO4_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When getting a test user with NetUserGetInfo4 no exception should be 
/// returned
TEST_F(TestCNetUser_GetInfo, when_netusergetinfo4_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	pLogonHours.Detach();
	pUserInfo4.Detach();
	hr = mpCNetUser->NetUserGetInfo4(NULL, PAR_UINF_NAME, &pUserInfo4);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PasswordAge, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_Privilege, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Comment, PAR_UINF_COMNT);
	ASSERT_NE_PROP_GET_ULONG(pUserInfo4, get_Flags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_ScriptPath, PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_AuthFlags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_LastLogon, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_LastLogoff, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_UnitsPerWeek, 168);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo4, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_BadPwdCount, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_NumLogons, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_CodePage, PAR_UINF_CODEPAGE);
	ASSERT_NE_PROP_GET_BSTR(pUserInfo4, get_UserSid, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PrimaryGrpId, PAR_UINF_PRIMGRPID);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Profile, PAR_UINF_PRFL);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_HomeDirDrive, PAR_UINF_HOMEDIRDRV);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PwdExpired, 0);
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERGETINFO10_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When getting a test user with NetUserGetInfo10 no exception should be 
/// returned
TEST_F(TestCNetUser_GetInfo, when_netusergetinfo10_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	CComPtr<ICUserInfo10> pUserInfo10;
	hr = mpCNetUser->NetUserGetInfo10(NULL, PAR_UINF_NAME, &pUserInfo10);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERGETINFO11_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When getting a test user with NetUserGetInfo11 no exception should be 
/// returned
TEST_F(TestCNetUser_GetInfo, when_netusergetinfo11_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4_SET(mpCNetUser, pLogonHours, pUserInfo4);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo4, eUserInfoType::uiType4);

	pLogonHours.Detach();
	CComPtr<ICUserInfo11> pUserInfo11;
	hr = mpCNetUser->NetUserGetInfo11(NULL, PAR_UINF_NAME, &pUserInfo11);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_Privilege, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_AuthFlags, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_PasswordAge, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_LastLogon, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_LastLogoff, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_BadPwdCount, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_NumLogons, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_UnitsPerWeek, 168);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo11, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_CodePage, PAR_UINF_CODEPAGE);
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERGETINFO20_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When getting a test user with NetUserGetInfo20 no exception should be 
/// returned
TEST_F(TestCNetUser_GetInfo, when_netusergetinfo20_then_return_no_exception)
{
	CComPtr<ICUserInfo3> pUserInfo3;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_3_SET(mpCNetUser, pLogonHours, pUserInfo3);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo3, eUserInfoType::uiType3);

	CComPtr<ICUserInfo20> pUserInfo20;
	hr = mpCNetUser->NetUserGetInfo20(NULL, PAR_UINF_NAME, &pUserInfo20);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_Comment, PAR_UINF_COMNT);
	ASSERT_NE_PROP_GET_ULONG(pUserInfo20, get_Flags, 0);
	ASSERT_NE_PROP_GET_ULONG(pUserInfo20, get_UserId, 0);
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERGETINFO23_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When getting a test user with NetUserGetInfo23 no exception should be 
/// returned
TEST_F(TestCNetUser_GetInfo, when_netusergetinfo23_then_return_no_exception)
{
	CComPtr<ICUserInfo3> pUserInfo3;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_3_SET(mpCNetUser, pLogonHours, pUserInfo3);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo3, eUserInfoType::uiType3);

	CComPtr<ICUserInfo23> pUserInfo23;
	hr = mpCNetUser->NetUserGetInfo23(NULL, PAR_UINF_NAME, &pUserInfo23);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_Comment, PAR_UINF_COMNT);
	ASSERT_NE_PROP_GET_ULONG(pUserInfo23, get_Flags, 0);
	ASSERT_NE_PROP_GET_BSTR(pUserInfo23, get_UserSid, PAR_EMPTY);
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}

// WHEN_NETUSERGETINFO24_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When getting a test user with NetUserGetInfo24 no exception should be 
/// returned
TEST_F(TestCNetUser_GetInfo, when_netusergetinfo24_then_return_no_exception)
{
	CComPtr<ICUserInfo3> pUserInfo3;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_3_SET(mpCNetUser, pLogonHours, pUserInfo3);
	ASSERT_ADD_USER_INFO(mpCNetUser, pUserInfo3, eUserInfoType::uiType3);

	CComPtr<ICUserInfo24> pUserInfo24;
	hr = mpCNetUser->NetUserGetInfo24(NULL, PAR_UINF_NAME, &pUserInfo24);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	ASSERT_EQ_PROP_GET_SHORT(pUserInfo24, get_InternetIdentity, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo24, get_Flags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo24, get_InternetProviderName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo24, get_InternetPrincipleName, PAR_EMPTY);
	ASSERT_NE_PROP_GET_BSTR(pUserInfo24, get_UserSid, PAR_EMPTY);
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}