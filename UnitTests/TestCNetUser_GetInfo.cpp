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
	hr = mpCNetUser->NetUserGetInfo0(NULL, PAR_UINF_NAME, &pUserInfo0);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	ASSERT_EQ_PROP_GET_BSTR(pUserInfo0, get_Name, PAR_UINF_NAME);
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
	hr = mpCNetUser->NetUserGetInfo1(NULL, PAR_UINF_NAME, &pUserInfo1);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_ScriptPath, PAR_UINF_SCRPATH);
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
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_ScriptPath, PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_AuthFlags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Workstations, PAR_UINF_WORKSTATIONS);
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
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_ScriptPath, PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_AuthFlags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_UnitsPerWeek, 168);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo3, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_BadPwdCount, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_NumLogons, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_CodePage, PAR_UINF_CODEPAGE);
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
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_ScriptPath, PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_AuthFlags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_UnitsPerWeek, 168);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo4, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_BadPwdCount, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_NumLogons, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_CodePage, PAR_UINF_CODEPAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PrimaryGrpId, PAR_UINF_PRIMGRPID);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Profile, PAR_UINF_PRFL);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_HomeDirDrive, PAR_UINF_HOMEDIRDRV);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PwdExpired, 0);
	ASSERT_DELETE_USER(mpCNetUser, PAR_UINF_NAME);
}