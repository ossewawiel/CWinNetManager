#include "TestCNetUser.h"



// WHEN COCREATEINSTANCE THEN EXPECT NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When COM object gets instantiated via CoCreateInstance no exception should 
/// be returned
TEST(_TestCNetUser, when_cocreateinstance_then_expect_no_exception)
{
	CComPtr<ICNetUser> pCNetUser;
	HRESULT hr = pCNetUser.CoCreateInstance(CLSID_CNetUser);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
}

// WHEN GETUSERINFO0 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo0 with proper parameters then it will return a 
/// UserInfo0 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo0_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo0> pUserInfo0;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_0(mpCNetUser, pUserInfo0);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo0, get_Name, PAR_UINF_NAME);
}

// WHEN GETUSERINFO1 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1 with proper parameters then it will return a 
/// UserInfo1 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1> pUserInfo1;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_1(mpCNetUser, pUserInfo1);
	
	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo1, get_Name,			PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo1, get_Password,		PAR_UINF_PWD);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1, get_PasswordAge,	PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1, get_Privilege,		PAR_UINF_PRIV);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo1, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo1, get_Comment,		PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1, get_Flags,			PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo1, get_ScriptPath,	PAR_UINF_SCRPATH);
}

// WHEN GETUSERINFO2 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo2 with proper parameters then it will return a 
/// UserInfo2 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo2_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo2> pUserInfo2;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_2(mpCNetUser, pLogonHours, pUserInfo2);

	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Name,			PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Password,		PAR_UINF_PWD);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_PasswordAge,	PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_Privilege,		PAR_UINF_PRIV);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Comment,		PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_Flags,			PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_ScriptPath,	PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_AuthFlags,		PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_FullName,		PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_UsrComment,	PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Params,		PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Workstations,	PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_LastLogon,		PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_LastLogoff,	PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_AccntExpires,	PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_MaxStorage,	PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_UnitsPerWeek,	PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo2, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_BadPwdCount,	PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_NumLogons,		PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_LogonServer,	PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_CountryCode,	PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_CodePage,		PAR_UINF_CODEPAGE);
	
}

// WHEN GETUSERINFO3 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo3 with proper parameters then it will return a 
/// UserInfo3 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo3_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo3> pUserInfo3;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_3(mpCNetUser, pLogonHours, pUserInfo3);

	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Password, PAR_UINF_PWD);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PasswordAge, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_Privilege, PAR_UINF_PRIV);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_ScriptPath, PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_AuthFlags, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_LastLogon, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_LastLogoff, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_UnitsPerWeek, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo3, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_BadPwdCount, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_NumLogons, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_CodePage, PAR_UINF_CODEPAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_UserId, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PrimaryGrpId, PAR_UINF_PRIMGRPID);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Profile, PAR_UINF_PRFL);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_HomeDirDrive, PAR_UINF_HOMEDIRDRV);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PwdExpired, PAR_NOT_ZERO);

}

// WHEN GETUSERINFO4 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo4 with proper parameters then it will return a 
/// UserInfo4 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo4_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_4(mpCNetUser, pLogonHours, pUserInfo4)

	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Password, PAR_UINF_PWD);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PasswordAge, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_Privilege, PAR_UINF_PRIV);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_ScriptPath, PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_AuthFlags, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_LastLogon, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_LastLogoff, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_UnitsPerWeek, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo4, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_BadPwdCount, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_NumLogons, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_CodePage, PAR_UINF_CODEPAGE);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_UserSid, PAR_NOT_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PrimaryGrpId, PAR_UINF_PRIMGRPID);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Profile, PAR_UINF_PRFL);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_HomeDirDrive, PAR_UINF_HOMEDIRDRV);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PwdExpired, PAR_NOT_ZERO);

}

// WHEN GETUSERINFO10 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo10 with proper parameters then it will return a 
/// UserInfo10 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo10_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo10> pUserInfo10;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_10(mpCNetUser, pUserInfo10);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_FullName, PAR_UINF_FULLNAME);
}

// WHEN GETUSERINFO11 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo11 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo11_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo11> pUserInfo11;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_11(mpCNetUser, pLogonHours, pUserInfo11);

	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_Privilege, PAR_UINF_PRIV);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_AuthFlags, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_PasswordAge, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_LastLogon, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_LastLogoff, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_BadPwdCount, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_NumLogons, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_UnitsPerWeek, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo11, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_CodePage, PAR_UINF_CODEPAGE);
}

// WHEN GETUSERINFO20 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo20 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo20_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo20> pUserInfo20;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_20(mpCNetUser, pUserInfo20);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo20, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo20, get_UserId, PAR_NOT_ZERO);
}

// WHEN GETUSERINFO21 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo21 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo21_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo21> pUserInfo21;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_21(mpCNetUser, pUserInfo21);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo21, get_Password, PAR_UINF_PWD);
}

// WHEN GETUSERINFO22 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo22 with proper parameters then it will return a 
/// UserInfo2 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo22_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo22> pUserInfo22;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	ASSERT_GET_USER_INFO_22(mpCNetUser, pLogonHours, pUserInfo22);

	//set new logon hours
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Password, PAR_UINF_PWD);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_PasswordAge, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_Privilege, PAR_UINF_PRIV);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_ScriptPath, PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_AuthFlags, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_LastLogon, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_LastLogoff, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_UnitsPerWeek, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo22, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_BadPwdCount, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_NumLogons, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_CodePage, PAR_UINF_CODEPAGE);
}

// WHEN GETUSERINFO23 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo23 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo23_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo23> pUserInfo23;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_23(mpCNetUser, pUserInfo23);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo23, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_UserSid, PAR_NOT_EMPTY);
}

// WHEN GETUSERINFO24 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo24 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo24_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo24> pUserInfo24;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_24(mpCNetUser, pUserInfo24);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_SHORT(pUserInfo24, get_InternetIdentity, PAR_UINF_INTRNETID);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo24, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo24, get_InternetProviderName, PAR_UINF_INTRNETPROVNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo24, get_InternetPrincipleName, PAR_UINF_INTRNETPRNCPLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo24, get_UserSid, PAR_NOT_EMPTY);
}

// WHEN GETUSERINFO1003 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1003 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1003_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1003> pUserInfo1003;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_INFO_1003(mpCNetUser, pUserInfo1003);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1003, get_Password, PAR_UINF_PWD);
}

// WHEN GETUSERINFO1005 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1005 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1005_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1005> pUserInfo1005;
	HRESULT hr = mpCNetUser->GetUserInfo1005(PAR_UINF_PRIV, &pUserInfo1005);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1005, get_Privilege, PAR_UINF_PRIV);
}

// WHEN GETUSERINFO1006 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1006 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1006_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1006> pUserInfo1006;
	HRESULT hr = mpCNetUser->GetUserInfo1006(PAR_UINF_HOMEDIR, &pUserInfo1006);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1006, get_HomeDirectory, PAR_UINF_HOMEDIR);
}

// WHEN GETUSERINFO1007 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1007 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1007_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1007> pUserInfo1007;
	HRESULT hr = mpCNetUser->GetUserInfo1007(PAR_UINF_COMNT, &pUserInfo1007);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1007, get_Comment, PAR_UINF_COMNT);
}

// WHEN GETUSERINFO1008 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1008 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1008_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1008> pUserInfo1008;
	HRESULT hr = mpCNetUser->GetUserInfo1008(PAR_UINF_FLGS, &pUserInfo1008);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1008, get_Flags, PAR_UINF_FLGS);
}

// WHEN GETUSERINFO1009 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1009 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1009_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1009> pUserInfo1009;
	HRESULT hr = mpCNetUser->GetUserInfo1009(PAR_UINF_SCRPATH, &pUserInfo1009);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1009, get_ScriptPath, PAR_UINF_SCRPATH);
}

// WHEN GETUSERINFO1010 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1010 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1010_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1010> pUserInfo1010;
	HRESULT hr = mpCNetUser->GetUserInfo1010(PAR_NOT_ZERO, &pUserInfo1010);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1010, get_AuthFlags, PAR_NOT_ZERO);
}

// WHEN GETUSERINFO1011 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1011 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1011_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1011> pUserInfo1011;
	HRESULT hr = mpCNetUser->GetUserInfo1011(PAR_UINF_FULLNAME, &pUserInfo1011);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1011, get_FullName, PAR_UINF_FULLNAME);
}

// WHEN GETUSERINFO1011 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1012 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1012_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1012> pUserInfo1012;
	HRESULT hr = mpCNetUser->GetUserInfo1012(PAR_UINF_USRCOMMENT, &pUserInfo1012);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1012, get_UsrComment, PAR_UINF_USRCOMMENT);
}

// WHEN GETUSERINFO1013 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1013 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1013_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1013> pUserInfo1013;
	HRESULT hr = mpCNetUser->GetUserInfo1013(PAR_UINF_PARAMS, &pUserInfo1013);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1013, get_Params, PAR_UINF_PARAMS);
}

// WHEN GETUSERINFO1014 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1014 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1014_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1014> pUserInfo1014;
	HRESULT hr = mpCNetUser->GetUserInfo1014(PAR_UINF_WORKSTATIONS, &pUserInfo1014);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1014, get_Workstations, PAR_UINF_WORKSTATIONS);
}

// WHEN GETUSERINFO1017 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1017 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1017_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1017> pUserInfo1017;
	HRESULT hr = mpCNetUser->GetUserInfo1017(PAR_UINF_ACCNTEXPIRES, &pUserInfo1017);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1017, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
}

// WHEN GETUSERINFO1018 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1018 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1018_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1018> pUserInfo1018;
	HRESULT hr = mpCNetUser->GetUserInfo1018(PAR_UINF_MAXSTORAGE, &pUserInfo1018);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1018, get_MaxStorage, PAR_UINF_MAXSTORAGE);
}

// WHEN GETUSERINFO1020 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1020 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1020_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1020> pUserInfo1020;
	CComPtr<ICLogonHours> pLogonHours;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	hr = mpCNetUser->GetUserInfo1020(
		PAR_NOT_ZERO
		, pLogonHours.Detach()
		, &pUserInfo1020);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	ASSERT_GET_LOGONHOURS_ALL_ACTIVE(mpCNetUser, pLogonHours);
	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1020, get_UnitsPerWeek, PAR_NOT_ZERO);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo1020, get_LogonHours, pLogonHours);
}

// WHEN GETUSERINFO1023 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1023 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1023_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1023> pUserInfo1023;
	HRESULT hr = mpCNetUser->GetUserInfo1023(PAR_UINF_LOGONSERVER, &pUserInfo1023);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1023, get_LogonServer, PAR_UINF_LOGONSERVER);
}

// WHEN GETUSERINFO1024 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1024 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1024_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1024> pUserInfo1024;
	HRESULT hr = mpCNetUser->GetUserInfo1024(PAR_UINF_COUNTRYCODE, &pUserInfo1024);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1024, get_CountryCode, PAR_UINF_COUNTRYCODE);
}

// WHEN GETUSERINFO1025 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1025 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1025_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1025> pUserInfo1025;
	HRESULT hr = mpCNetUser->GetUserInfo1025(PAR_UINF_CODEPAGE, &pUserInfo1025);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1025, get_CodePage, PAR_UINF_CODEPAGE);
}

// WHEN GETUSERINFO1051 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1051 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1051_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1051> pUserInfo1051;
	HRESULT hr = mpCNetUser->GetUserInfo1051(PAR_UINF_PRIMGRPID, &pUserInfo1051);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1051, get_PrimaryGrpId, PAR_UINF_PRIMGRPID);
}

// WHEN GETUSERINFO1052 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1052 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1052_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1052> pUserInfo1052;
	HRESULT hr = mpCNetUser->GetUserInfo1052(PAR_UINF_PRFL, &pUserInfo1052);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1052, get_Profile, PAR_UINF_PRFL);
}

// WHEN GETUSERINFO1053 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1053 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser_Get, when_getuserinfo1053_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1053> pUserInfo1053;
	HRESULT hr = mpCNetUser->GetUserInfo1053(PAR_UINF_HOMEDIRDRV, &pUserInfo1053);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1053, get_HomeDirDrive, PAR_UINF_HOMEDIRDRV);
}


//// WHEN_NETUSERADD_WITH_USERINFO1_THEN_RETURN_NETUSERGETINFO_WITH_USERINFO1_AND_SAME_VALUES
/////////////////////////////////////////////////////////////////////////////////
///// When adding a test user with NetUserAdd and UserInfo1 no exception should be 
///// returned and NetUserGetInfo with UserInfo1 should have the same values
//TEST_F(TestCNetUser, when_netuseradd_with_userinfo1_then_return_netusergetinfo_with_userinfo1_and_same_values)
//{
//	CComPtr<ICUserInfo1> pUserInfo1;
//	HRESULT hr = mpCNetUser->GetUserInfo1(
//		  PAR_UINF_NAME
//		, PAR_UINF_PWD
//		, 0
//		, PAR_UINF_PRIV
//		, PAR_UINF_HOMEDIR
//		, PAR_UINF_COMNT
//		, PAR_UINF_FLGS
//		, PAR_UINF_SCRPATH
//		, &pUserInfo1);
//	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
//
//	hr = mpCNetUser->NetUserAdd(NULL, eUserInfoType::uiType1, pUserInfo1);
//	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
//
//	//Now Clear UserInfo1
//	pUserInfo1.Release();
//	//ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
//
//	//Now Get the user details
//	CComPtr<IUnknown> pUnk;
//	hr = mpCNetUser->NetUserGetInfo(NULL, PAR_UINF_NAME, eUserInfoType::uiType1, (IUnknown**)&pUserInfo1); // &pUnk);
//	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
//
//	// now compaire if it is the same
//	_bstr_t bsTemp(L"*");
//	hr = pUserInfo1->get_Name(bsTemp.GetAddress());
//	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
//	ASSERT_EQ(PAR_UINF_NAME, bsTemp);
//
//	bsTemp = L"*";
//	hr = pUserInfo1->get_Password(bsTemp.GetAddress());
//	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
//	ASSERT_EQ(PAR_EMPTY, bsTemp);
//
//	//Pasdword age can be changed by the system, do not test
//
//	//Privilege can be changed by the system, do not test
//
//	bsTemp = L"*";
//	hr = pUserInfo1->get_HomeDirectory(bsTemp.GetAddress());
//	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
//	ASSERT_EQ(PAR_UINF_HOMEDIR, bsTemp);
//
//	bsTemp = L"*";
//	hr = pUserInfo1->get_Comment(bsTemp.GetAddress());
//	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
//	ASSERT_EQ(PAR_UINF_COMNT, bsTemp);
//
//	// Flags can be changed by the system, do not test
//
//	bsTemp = L"*";
//	hr = pUserInfo1->get_ScriptPath(bsTemp.GetAddress());
//	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
//	ASSERT_EQ(PAR_UINF_SCRPATH, bsTemp);
//	
//	//Now delete the user
//	hr = mpCNetUser->NetUserDel(NULL, PAR_UINF_NAME);
//	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
//}
//
//// WHEN_NETUSERDEL_WITH_NON_EXISTING_USER_THEN_RETURN_EXCEPTION
/////////////////////////////////////////////////////////////////////////////////
///// When deleting a non existing test user with NetUserDel an exception should be 
///// returned
//TEST_F(TestCNetUser, when_netuserdel_with_non_existing_user_then_return_exception)
//{
//	HRESULT hr = mpCNetUser->NetUserDel(NULL, PAR_UINF_NAME);
//	ASSERT_TRUE(hr == NERR_UserNotFound) << TUtils::GetLastErrorAsString(hr);
//}
//
//// WHEN_NETUSERGETINFO_WITH_NON_EXISTING_USER_THEN_RETURN_EXCEPTION
/////////////////////////////////////////////////////////////////////////////////
///// When getting info on a non existing test user with NetUserGetInfo an exception should be 
///// returned
//TEST_F(TestCNetUser, when_netusergetinfo_with_non_existing_user_then_return_exception)
//{
//	CComPtr<IUnknown> pUnk;
//	HRESULT hr = mpCNetUser->NetUserGetInfo(NULL, PAR_UINF_NAME, eUserInfoType::uiType1, &pUnk);
//	ASSERT_TRUE(hr == NERR_UserNotFound) << TUtils::GetLastErrorAsString(hr);
//}