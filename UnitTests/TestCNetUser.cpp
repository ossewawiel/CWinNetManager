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
TEST_F(TestCNetUser, when_getuserinfo0_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo0> pUserInfo0;
	HRESULT hr = mpCNetUser->GetUserInfo0(PAR_UINF_NAME, &pUserInfo0);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo0, get_Name, PAR_UINF_NAME);
}

// WHEN GETUSERINFO1 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1 with proper parameters then it will return a 
/// UserInfo1 structure with the correct proeprty values.
TEST_F(TestCNetUser, when_getuserinfo1_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1> pUserInfo1;
	HRESULT hr = mpCNetUser->GetUserInfo1(
		  PAR_UINF_NAME
		, PAR_UINF_PWD
		, PAR_UINF_PWDAGE
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, &pUserInfo1);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	
	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo1, get_Name,			PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo1, get_Password,		PAR_UINF_PWD);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1, get_PasswordAge,	PAR_UINF_PWDAGE);
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
TEST_F(TestCNetUser, when_getuserinfo2_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo2> pUserInfo2;
	HRESULT hr = mpCNetUser->GetUserInfo2(
		  PAR_UINF_NAME
		, PAR_UINF_PWD
		, PAR_UINF_PWDAGE
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, PAR_UINF_AUTHFLAGS
		, PAR_UINF_FULLNAME
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_PARAMS
		, PAR_UINF_WORKSTATIONS
		, PAR_UINF_LASTLOGON
		, PAR_UINF_LASTLOGOFF
		, PAR_UINF_ACCNTEXPIRES
		, PAR_UINF_MAXSTORAGE
		, PAR_UINF_UNITSPERWEEK
		, PAR_UINF_LOGONHOURS
		, PAR_UINF_BADPWDCOUNT
		, PAR_UINF_NUMLOGONS
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, &pUserInfo2);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Name,			PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Password,		PAR_UINF_PWD);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_PasswordAge,	PAR_UINF_PWDAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_Privilege,		PAR_UINF_PRIV);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Comment,		PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_Flags,			PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_ScriptPath,	PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_AuthFlags,		PAR_UINF_AUTHFLAGS);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_FullName,		PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_UsrComment,	PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Params,		PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Workstations,	PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_LastLogon,		PAR_UINF_LASTLOGON);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_LastLogoff,	PAR_UINF_LASTLOGOFF);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_AccntExpires,	PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_MaxStorage,	PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_UnitsPerWeek,	PAR_UINF_UNITSPERWEEK);
	ASSERT_EQ_PROP_GET_BYTE	(pUserInfo2, get_LogonHours,	PAR_UINF_LOGONHOURS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_BadPwdCount,	PAR_UINF_BADPWDCOUNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_NumLogons,		PAR_UINF_NUMLOGONS);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_LogonServer,	PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_CountryCode,	PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_CodePage,		PAR_UINF_CODEPAGE);
	
}

// WHEN GETUSERINFO3 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo3 with proper parameters then it will return a 
/// UserInfo3 structure with the correct proeprty values.
TEST_F(TestCNetUser, when_getuserinfo3_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo3> pUserInfo3;
	HRESULT hr = mpCNetUser->GetUserInfo3(
		  PAR_UINF_NAME
		, PAR_UINF_PWD
		, PAR_UINF_PWDAGE
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, PAR_UINF_AUTHFLAGS
		, PAR_UINF_FULLNAME
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_PARAMS
		, PAR_UINF_WORKSTATIONS
		, PAR_UINF_LASTLOGON
		, PAR_UINF_LASTLOGOFF
		, PAR_UINF_ACCNTEXPIRES
		, PAR_UINF_MAXSTORAGE
		, PAR_UINF_UNITSPERWEEK
		, PAR_UINF_LOGONHOURS
		, PAR_UINF_BADPWDCOUNT
		, PAR_UINF_NUMLOGONS
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, PAR_UINF_USERID
		, PAR_UINF_PRIMGRPID
		, PAR_UINF_PRFL
		, PAR_UINF_HOMEDIRDRV
		, PAR_UINF_PWDEXPIRED
		, &pUserInfo3);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Password, PAR_UINF_PWD);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PasswordAge, PAR_UINF_PWDAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_Privilege, PAR_UINF_PRIV);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_ScriptPath, PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_AuthFlags, PAR_UINF_AUTHFLAGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_LastLogon, PAR_UINF_LASTLOGON);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_LastLogoff, PAR_UINF_LASTLOGOFF);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_UnitsPerWeek, PAR_UINF_UNITSPERWEEK);
	ASSERT_EQ_PROP_GET_BYTE(pUserInfo3, get_LogonHours, PAR_UINF_LOGONHOURS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_BadPwdCount, PAR_UINF_BADPWDCOUNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_NumLogons, PAR_UINF_NUMLOGONS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_CodePage, PAR_UINF_CODEPAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_UserId, PAR_UINF_USERID);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PrimaryGrpId, PAR_UINF_PRIMGRPID);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Profile, PAR_UINF_PRFL);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_HomeDirDrive, PAR_UINF_HOMEDIRDRV);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PwdExpired, PAR_UINF_PWDEXPIRED);

}

// WHEN GETUSERINFO4 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo4 with proper parameters then it will return a 
/// UserInfo4 structure with the correct proeprty values.
TEST_F(TestCNetUser, when_getuserinfo4_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	HRESULT hr = mpCNetUser->GetUserInfo4(
		PAR_UINF_NAME
		, PAR_UINF_PWD
		, PAR_UINF_PWDAGE
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, PAR_UINF_AUTHFLAGS
		, PAR_UINF_FULLNAME
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_PARAMS
		, PAR_UINF_WORKSTATIONS
		, PAR_UINF_LASTLOGON
		, PAR_UINF_LASTLOGOFF
		, PAR_UINF_ACCNTEXPIRES
		, PAR_UINF_MAXSTORAGE
		, PAR_UINF_UNITSPERWEEK
		, PAR_UINF_LOGONHOURS
		, PAR_UINF_BADPWDCOUNT
		, PAR_UINF_NUMLOGONS
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, PAR_UINF_USERSID
		, PAR_UINF_PRIMGRPID
		, PAR_UINF_PRFL
		, PAR_UINF_HOMEDIRDRV
		, PAR_UINF_PWDEXPIRED
		, &pUserInfo4);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Password, PAR_UINF_PWD);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PasswordAge, PAR_UINF_PWDAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_Privilege, PAR_UINF_PRIV);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_ScriptPath, PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_AuthFlags, PAR_UINF_AUTHFLAGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_LastLogon, PAR_UINF_LASTLOGON);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_LastLogoff, PAR_UINF_LASTLOGOFF);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_UnitsPerWeek, PAR_UINF_UNITSPERWEEK);
	ASSERT_EQ_PROP_GET_BYTE(pUserInfo4, get_LogonHours, PAR_UINF_LOGONHOURS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_BadPwdCount, PAR_UINF_LOGONHOURS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_NumLogons, PAR_UINF_NUMLOGONS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_CodePage, PAR_UINF_CODEPAGE);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_UserSid, PAR_UINF_USERSID);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PrimaryGrpId, PAR_UINF_PRIMGRPID);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Profile, PAR_UINF_PRFL);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_HomeDirDrive, PAR_UINF_HOMEDIRDRV);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PwdExpired, PAR_UINF_PWDEXPIRED);

}

// WHEN GETUSERINFO10 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo10 with proper parameters then it will return a 
/// UserInfo10 structure with the correct proeprty values.
TEST_F(TestCNetUser, when_getuserinfo10_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo10> pUserInfo10;
	HRESULT hr = mpCNetUser->GetUserInfo10(
		PAR_UINF_NAME
		, PAR_UINF_COMNT
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_FULLNAME
		, &pUserInfo10);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

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
TEST_F(TestCNetUser, when_getuserinfo11_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo11> pUserInfo11;
	HRESULT hr = mpCNetUser->GetUserInfo11(
		PAR_UINF_NAME
		, PAR_UINF_COMNT
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_FULLNAME
		, PAR_UINF_PRIV
		, PAR_UINF_AUTHFLAGS
		, PAR_UINF_PWDAGE
		, PAR_UINF_HOMEDIR
		, PAR_UINF_PARAMS
		, PAR_UINF_LASTLOGON
		, PAR_UINF_LASTLOGOFF
		, PAR_UINF_BADPWDCOUNT
		, PAR_UINF_NUMLOGONS
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_WORKSTATIONS
		, PAR_UINF_MAXSTORAGE
		, PAR_UINF_UNITSPERWEEK
		, PAR_UINF_LOGONHOURS
		, PAR_UINF_CODEPAGE
		, &pUserInfo11);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_Privilege, PAR_UINF_PRIV);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_AuthFlags, PAR_UINF_AUTHFLAGS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_PasswordAge, PAR_UINF_PWDAGE);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_LastLogon, PAR_UINF_LASTLOGON);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_LastLogoff, PAR_UINF_LASTLOGOFF);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_BadPwdCount, PAR_UINF_LOGONHOURS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_NumLogons, PAR_UINF_NUMLOGONS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_UnitsPerWeek, PAR_UINF_UNITSPERWEEK);
	ASSERT_EQ_PROP_GET_BYTE(pUserInfo11, get_LogonHours, PAR_UINF_LOGONHOURS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_CodePage, PAR_UINF_CODEPAGE);
}

// WHEN GETUSERINFO20 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo20 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser, when_getuserinfo20_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo20> pUserInfo20;
	HRESULT hr = mpCNetUser->GetUserInfo20(
		PAR_UINF_NAME
		, PAR_UINF_FULLNAME
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_USERID
		, &pUserInfo20);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo20, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo20, get_UserId, PAR_UINF_USERID);
}

// WHEN GETUSERINFO21 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo21 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser, when_getuserinfo21_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo21> pUserInfo21;
	HRESULT hr = mpCNetUser->GetUserInfo21(PAR_UINF_PWD, &pUserInfo21);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo21, get_Password, PAR_UINF_PWD);
}

// WHEN GETUSERINFO22 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo22 with proper parameters then it will return a 
/// UserInfo2 structure with the correct proeprty values.
TEST_F(TestCNetUser, when_getuserinfo22_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo22> pUserInfo22;
	HRESULT hr = mpCNetUser->GetUserInfo22(
		PAR_UINF_NAME
		, PAR_UINF_PWD
		, PAR_UINF_PWDAGE
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, PAR_UINF_AUTHFLAGS
		, PAR_UINF_FULLNAME
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_PARAMS
		, PAR_UINF_WORKSTATIONS
		, PAR_UINF_LASTLOGON
		, PAR_UINF_LASTLOGOFF
		, PAR_UINF_ACCNTEXPIRES
		, PAR_UINF_MAXSTORAGE
		, PAR_UINF_UNITSPERWEEK
		, PAR_UINF_LOGONHOURS
		, PAR_UINF_BADPWDCOUNT
		, PAR_UINF_NUMLOGONS
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, &pUserInfo22);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Password, PAR_UINF_PWD);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_PasswordAge, PAR_UINF_PWDAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_Privilege, PAR_UINF_PRIV);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_ScriptPath, PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_AuthFlags, PAR_UINF_AUTHFLAGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_LastLogon, PAR_UINF_LASTLOGON);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_LastLogoff, PAR_UINF_LASTLOGOFF);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_UnitsPerWeek, PAR_UINF_UNITSPERWEEK);
	ASSERT_EQ_PROP_GET_BYTE(pUserInfo22, get_LogonHours, PAR_UINF_LOGONHOURS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_BadPwdCount, PAR_UINF_LOGONHOURS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_NumLogons, PAR_UINF_NUMLOGONS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_CodePage, PAR_UINF_CODEPAGE);
}

// WHEN GETUSERINFO23 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo23 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser, when_getuserinfo23_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo23> pUserInfo23;
	HRESULT hr = mpCNetUser->GetUserInfo23(
		PAR_UINF_NAME
		, PAR_UINF_FULLNAME
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_USERSID
		, &pUserInfo23);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_FullName, PAR_UINF_FULLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo23, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_UserSid, PAR_UINF_USERSID);
}

// WHEN GETUSERINFO24 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo24 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser, when_getuserinfo24_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo24> pUserInfo24;
	HRESULT hr = mpCNetUser->GetUserInfo24(
		PAR_UINF_INTRNETID
		, PAR_UINF_FLGS
		, PAR_UINF_INTRNETPROVNAME
		, PAR_UINF_INTRNETPRNCPLNAME
		, PAR_UINF_USERSID
		, &pUserInfo24);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_SHORT(pUserInfo24, get_InternetIdentity, PAR_UINF_INTRNETID);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo24, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo24, get_InternetProviderName, PAR_UINF_INTRNETPROVNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo24, get_InternetPrincipleName, PAR_UINF_INTRNETPRNCPLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo24, get_UserSid, PAR_UINF_USERSID);
}

// WHEN GETUSERINFO1003 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1003 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser, when_getuserinfo1003_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1003> pUserInfo1003;
	HRESULT hr = mpCNetUser->GetUserInfo1003(PAR_UINF_PWD, &pUserInfo1003);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1003, get_Password, PAR_UINF_PWD);
}

// WHEN GETUSERINFO1005 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1005 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser, when_getuserinfo1005_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1006_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1007_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1008_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1009_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1010_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1010> pUserInfo1010;
	HRESULT hr = mpCNetUser->GetUserInfo1010(PAR_UINF_AUTHFLAGS, &pUserInfo1010);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1010, get_AuthFlags, PAR_UINF_AUTHFLAGS);
}

// WHEN GETUSERINFO1011 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1011 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser, when_getuserinfo1011_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1012_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1013_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1014_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1017_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1018_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1020_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1020> pUserInfo1020;
	HRESULT hr = mpCNetUser->GetUserInfo1020(
		PAR_UINF_UNITSPERWEEK
		, PAR_UINF_LOGONHOURS
		, &pUserInfo1020);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1020, get_UnitsPerWeek, PAR_UINF_UNITSPERWEEK);
	ASSERT_EQ_PROP_GET_BYTE(pUserInfo1020, get_LogonHours, PAR_UINF_LOGONHOURS);
}

// WHEN GETUSERINFO1023 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1023 with proper parameters then it will return a 
/// UserInfo11 structure with the correct proeprty values.
TEST_F(TestCNetUser, when_getuserinfo1023_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1024_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1025_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1051_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1052_with_proper_parameters_then_return_no_exception)
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
TEST_F(TestCNetUser, when_getuserinfo1053_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo1053> pUserInfo1053;
	HRESULT hr = mpCNetUser->GetUserInfo1053(PAR_UINF_HOMEDIRDRV, &pUserInfo1053);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1053, get_HomeDirDrive, PAR_UINF_HOMEDIRDRV);
}

// WHEN_CLEARING_GETUSERINFO0_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo0 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo0 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo0_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo0> pUserInfo0;
	HRESULT hr = mpCNetUser->GetUserInfo0(PAR_UINF_NAME, &pUserInfo0);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	hr = pUserInfo0->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo0, get_Name, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO1_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1> pUserInfo1;
	HRESULT hr = mpCNetUser->GetUserInfo1(
		PAR_UINF_NAME
		, PAR_UINF_PWD
		, 0
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, &pUserInfo1);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	hr = pUserInfo1->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo1, get_Name,			PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo1, get_Password,		PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1, get_PasswordAge,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1, get_Privilege,		0);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo1, get_HomeDirectory, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo1, get_Comment,		PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1, get_Flags,			0);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo1, get_ScriptPath,	PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO2_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo2 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo2 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo2_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo2> pUserInfo2;
	HRESULT hr = mpCNetUser->GetUserInfo2(
		PAR_UINF_NAME
		, PAR_UINF_PWD
		, PAR_UINF_PWDAGE
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, PAR_UINF_AUTHFLAGS
		, PAR_UINF_FULLNAME
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_PARAMS
		, PAR_UINF_WORKSTATIONS
		, PAR_UINF_LASTLOGON
		, PAR_UINF_LASTLOGOFF
		, PAR_UINF_ACCNTEXPIRES
		, PAR_UINF_MAXSTORAGE
		, PAR_UINF_UNITSPERWEEK
		, PAR_UINF_LOGONHOURS
		, PAR_UINF_BADPWDCOUNT
		, PAR_UINF_NUMLOGONS
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, &pUserInfo2);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo2->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Name,			PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Password,		PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_PasswordAge,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_Privilege,		0);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_HomeDirectory, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Comment,		PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_Flags,			0);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_ScriptPath,	PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_AuthFlags,		0);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_FullName,		PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_UsrComment,	PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Params,		PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_Workstations,	PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_LastLogon,		0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_LastLogoff,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_AccntExpires,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_MaxStorage,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_UnitsPerWeek,	0);
	ASSERT_EQ_PROP_GET_BYTE	(pUserInfo2, get_LogonHours,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_BadPwdCount,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_NumLogons,		0);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo2, get_LogonServer,	PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_CountryCode,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_CodePage,		0);

}

// WHEN_CLEARING_GETUSERINFO3_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo3 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo3 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo3_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo3> pUserInfo3;
	HRESULT hr = mpCNetUser->GetUserInfo3(
		PAR_UINF_NAME
		, PAR_UINF_PWD
		, PAR_UINF_PWDAGE
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, PAR_UINF_AUTHFLAGS
		, PAR_UINF_FULLNAME
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_PARAMS
		, PAR_UINF_WORKSTATIONS
		, PAR_UINF_LASTLOGON
		, PAR_UINF_LASTLOGOFF
		, PAR_UINF_ACCNTEXPIRES
		, PAR_UINF_MAXSTORAGE
		, PAR_UINF_UNITSPERWEEK
		, PAR_UINF_LOGONHOURS
		, PAR_UINF_BADPWDCOUNT
		, PAR_UINF_NUMLOGONS
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, PAR_UINF_USERID
		, PAR_UINF_PRIMGRPID
		, PAR_UINF_PRFL
		, PAR_UINF_HOMEDIRDRV
		, PAR_UINF_PWDEXPIRED
		, &pUserInfo3);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo3->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo3, get_Name,			PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo3, get_Password,		PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PasswordAge,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_Privilege,		0);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo3, get_HomeDirectory, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo3, get_Comment,		PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_Flags,			0);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo3, get_ScriptPath,	PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_AuthFlags,		0);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo3, get_FullName,		PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo3, get_UsrComment,	PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo3, get_Params,		PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo3, get_Workstations,	PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_LastLogon,		0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_LastLogoff,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_AccntExpires,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_MaxStorage,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_UnitsPerWeek,	0);
	ASSERT_EQ_PROP_GET_BYTE	(pUserInfo3, get_LogonHours,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_BadPwdCount,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_NumLogons,		0);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo3, get_LogonServer,	PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_CountryCode,	0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_CodePage,		0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_UserId,		0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PrimaryGrpId,	0);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo3, get_Profile,		PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR	(pUserInfo3, get_HomeDirDrive,	PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PwdExpired,	0);

}

// WHEN_CLEARING_GETUSERINFO4_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo4 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo4 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo4_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	HRESULT hr = mpCNetUser->GetUserInfo4(
		PAR_UINF_NAME
		, PAR_UINF_PWD
		, PAR_UINF_PWDAGE
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, PAR_UINF_AUTHFLAGS
		, PAR_UINF_FULLNAME
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_PARAMS
		, PAR_UINF_WORKSTATIONS
		, PAR_UINF_LASTLOGON
		, PAR_UINF_LASTLOGOFF
		, PAR_UINF_ACCNTEXPIRES
		, PAR_UINF_MAXSTORAGE
		, PAR_UINF_UNITSPERWEEK
		, PAR_UINF_LOGONHOURS
		, PAR_UINF_BADPWDCOUNT
		, PAR_UINF_NUMLOGONS
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, PAR_UINF_USERSID
		, PAR_UINF_PRIMGRPID
		, PAR_UINF_PRFL
		, PAR_UINF_HOMEDIRDRV
		, PAR_UINF_PWDEXPIRED
		, &pUserInfo4);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo4->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Password, PAR_UINF_PWD);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PasswordAge, PAR_UINF_PWDAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_Privilege, PAR_UINF_PRIV);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_ScriptPath, PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_AuthFlags, PAR_UINF_AUTHFLAGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_FullName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_LastLogon, PAR_UINF_LASTLOGON);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_LastLogoff, PAR_UINF_LASTLOGOFF);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_UnitsPerWeek, PAR_UINF_UNITSPERWEEK);
	ASSERT_EQ_PROP_GET_BYTE(pUserInfo4, get_LogonHours, PAR_UINF_LOGONHOURS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_BadPwdCount, PAR_UINF_LOGONHOURS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_NumLogons, PAR_UINF_NUMLOGONS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_CodePage, PAR_UINF_CODEPAGE);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_UserSid, PAR_UINF_USERSID);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PrimaryGrpId, PAR_UINF_PRIMGRPID);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Profile, PAR_UINF_PRFL);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_HomeDirDrive, PAR_UINF_HOMEDIRDRV);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PwdExpired, PAR_UINF_PWDEXPIRED);

}

// WHEN_CLEARING_GETUSERINFO10_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo10 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo10 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo10_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo10> pUserInfo10;
	HRESULT hr = mpCNetUser->GetUserInfo10(
		PAR_UINF_NAME
		, PAR_UINF_COMNT
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_FULLNAME
		, &pUserInfo10);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo10->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_FullName, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO11_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo11 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo11 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo11_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo11> pUserInfo11;
	HRESULT hr = mpCNetUser->GetUserInfo11(
		PAR_UINF_NAME
		, PAR_UINF_COMNT
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_FULLNAME
		, PAR_UINF_PRIV
		, PAR_UINF_AUTHFLAGS
		, PAR_UINF_PWDAGE
		, PAR_UINF_HOMEDIR
		, PAR_UINF_PARAMS
		, PAR_UINF_LASTLOGON
		, PAR_UINF_LASTLOGOFF
		, PAR_UINF_BADPWDCOUNT
		, PAR_UINF_NUMLOGONS
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_WORKSTATIONS
		, PAR_UINF_MAXSTORAGE
		, PAR_UINF_UNITSPERWEEK
		, PAR_UINF_LOGONHOURS
		, PAR_UINF_CODEPAGE
		, &pUserInfo11);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo11->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_FullName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_Privilege, PAR_UINF_PRIV);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_AuthFlags, PAR_UINF_AUTHFLAGS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_PasswordAge, PAR_UINF_PWDAGE);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_LastLogon, PAR_UINF_LASTLOGON);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_LastLogoff, PAR_UINF_LASTLOGOFF);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_BadPwdCount, PAR_UINF_LOGONHOURS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_NumLogons, PAR_UINF_NUMLOGONS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_UnitsPerWeek, PAR_UINF_UNITSPERWEEK);
	ASSERT_EQ_PROP_GET_BYTE(pUserInfo11, get_LogonHours, PAR_UINF_LOGONHOURS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_CodePage, PAR_UINF_CODEPAGE);
}

// WHEN_CLEARING_GETUSERINFO20_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo20 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo20 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo20_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo20> pUserInfo20;
	HRESULT hr = mpCNetUser->GetUserInfo20(
		PAR_UINF_NAME
		, PAR_UINF_FULLNAME
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_USERID
		, &pUserInfo20);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo20->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_FullName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo20, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo20, get_UserId, PAR_UINF_USERID);
}

// WHEN_CLEARING_GETUSERINFO21_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo21 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo21 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo21_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo21> pUserInfo21;
	HRESULT hr = mpCNetUser->GetUserInfo21(PAR_UINF_PWD, &pUserInfo21);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo21->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo21, get_Password, PAR_UINF_PWD);
}

// WHEN_CLEARING_GETUSERINFO22_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo22 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo22 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo22_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo22> pUserInfo22;
	HRESULT hr = mpCNetUser->GetUserInfo22(
		PAR_UINF_NAME
		, PAR_UINF_PWD
		, PAR_UINF_PWDAGE
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, PAR_UINF_AUTHFLAGS
		, PAR_UINF_FULLNAME
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_PARAMS
		, PAR_UINF_WORKSTATIONS
		, PAR_UINF_LASTLOGON
		, PAR_UINF_LASTLOGOFF
		, PAR_UINF_ACCNTEXPIRES
		, PAR_UINF_MAXSTORAGE
		, PAR_UINF_UNITSPERWEEK
		, PAR_UINF_LOGONHOURS
		, PAR_UINF_BADPWDCOUNT
		, PAR_UINF_NUMLOGONS
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, &pUserInfo22);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo22->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Password, PAR_UINF_PWD);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_PasswordAge, PAR_UINF_PWDAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_Privilege, PAR_UINF_PRIV);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_HomeDirectory, PAR_UINF_HOMEDIR);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_ScriptPath, PAR_UINF_SCRPATH);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_AuthFlags, PAR_UINF_AUTHFLAGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_FullName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_UsrComment, PAR_UINF_USRCOMMENT);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Params, PAR_UINF_PARAMS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Workstations, PAR_UINF_WORKSTATIONS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_LastLogon, PAR_UINF_LASTLOGON);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_LastLogoff, PAR_UINF_LASTLOGOFF);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_MaxStorage, PAR_UINF_MAXSTORAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_UnitsPerWeek, PAR_UINF_UNITSPERWEEK);
	ASSERT_EQ_PROP_GET_BYTE(pUserInfo22, get_LogonHours, PAR_UINF_LOGONHOURS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_BadPwdCount, PAR_UINF_LOGONHOURS);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_NumLogons, PAR_UINF_NUMLOGONS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_LogonServer, PAR_UINF_LOGONSERVER);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_CountryCode, PAR_UINF_COUNTRYCODE);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_CodePage, PAR_UINF_CODEPAGE);
}

// WHEN_CLEARING_GETUSERINFO23_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo23 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo23 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo23_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo23> pUserInfo23;
	HRESULT hr = mpCNetUser->GetUserInfo23(
		PAR_UINF_NAME
		, PAR_UINF_FULLNAME
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_USERSID
		, &pUserInfo23);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo23->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_Name, PAR_UINF_NAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_FullName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_Comment, PAR_UINF_COMNT);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo23, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_UserSid, PAR_UINF_USERSID);
}

// WHEN_CLEARING_GETUSERINFO24_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo24 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo24 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo24_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo24> pUserInfo24;
	HRESULT hr = mpCNetUser->GetUserInfo24(
		PAR_UINF_INTRNETID
		, PAR_UINF_FLGS
		, PAR_UINF_INTRNETPROVNAME
		, PAR_UINF_INTRNETPRNCPLNAME
		, PAR_UINF_USERSID
		, &pUserInfo24);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo24->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_SHORT(pUserInfo24, get_InternetIdentity, PAR_UINF_INTRNETID);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo24, get_Flags, PAR_UINF_FLGS);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo24, get_InternetProviderName, PAR_UINF_INTRNETPROVNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo24, get_InternetPrincipleName, PAR_UINF_INTRNETPRNCPLNAME);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo24, get_UserSid, PAR_UINF_USERSID);
}

// WHEN_CLEARING_GETUSERINFO1003_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1003 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1003 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1003_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1003> pUserInfo1003;
	HRESULT hr = mpCNetUser->GetUserInfo1003(PAR_UINF_PWD, &pUserInfo1003);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1003->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1003, get_Password, PAR_UINF_PWD);
}

// WHEN_CLEARING_GETUSERINFO1005_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1005 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1005 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1005_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1005> pUserInfo1005;
	HRESULT hr = mpCNetUser->GetUserInfo1005(PAR_UINF_PRIV, &pUserInfo1005);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1005->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1005, get_Privilege, PAR_UINF_PRIV);
}

// WHEN_CLEARING_GETUSERINFO1006_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1006 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1006 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1006_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1006> pUserInfo1006;
	HRESULT hr = mpCNetUser->GetUserInfo1006(PAR_UINF_HOMEDIR, &pUserInfo1006);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1006->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1006, get_HomeDirectory, PAR_UINF_HOMEDIR);
}

// WHEN_CLEARING_GETUSERINFO1007_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1007 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1007 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1007_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1007> pUserInfo1007;
	HRESULT hr = mpCNetUser->GetUserInfo1007(PAR_UINF_COMNT, &pUserInfo1007);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1007->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1007, get_Comment, PAR_UINF_COMNT);
}

// WHEN_CLEARING_GETUSERINFO1008_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1008 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1008 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1008_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1008> pUserInfo1008;
	HRESULT hr = mpCNetUser->GetUserInfo1008(PAR_UINF_FLGS, &pUserInfo1008);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1008->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1008, get_Flags, PAR_UINF_FLGS);
}

// WHEN_CLEARING_GETUSERINFO1009_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1009 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1009 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1009_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1009> pUserInfo1009;
	HRESULT hr = mpCNetUser->GetUserInfo1009(PAR_UINF_SCRPATH, &pUserInfo1009);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1009->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1009, get_ScriptPath, PAR_UINF_SCRPATH);
}

// WHEN_CLEARING_GETUSERINFO1010_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1010 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1010 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1010_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1010> pUserInfo1010;
	HRESULT hr = mpCNetUser->GetUserInfo1010(PAR_UINF_AUTHFLAGS, &pUserInfo1010);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1010->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1010, get_AuthFlags, PAR_UINF_AUTHFLAGS);
}

// WHEN_CLEARING_GETUSERINFO1011_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1011 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1011 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1011_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1011> pUserInfo1011;
	HRESULT hr = mpCNetUser->GetUserInfo1011(PAR_UINF_FULLNAME, &pUserInfo1011);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1011->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1011, get_FullName, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO1012_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1012 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1012 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1012_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1012> pUserInfo1012;
	HRESULT hr = mpCNetUser->GetUserInfo1012(PAR_UINF_USRCOMMENT, &pUserInfo1012);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1012->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1012, get_UsrComment, PAR_UINF_USRCOMMENT);
}

// WHEN_CLEARING_GETUSERINFO1013_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1013 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1013 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1013_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1013> pUserInfo1013;
	HRESULT hr = mpCNetUser->GetUserInfo1013(PAR_UINF_PARAMS, &pUserInfo1013);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1013->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1013, get_Params, PAR_UINF_PARAMS);
}

// WHEN_CLEARING_GETUSERINFO1014_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1014 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1014 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1014_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1014> pUserInfo1014;
	HRESULT hr = mpCNetUser->GetUserInfo1014(PAR_UINF_WORKSTATIONS, &pUserInfo1014);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1014->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1014, get_Workstations, PAR_UINF_WORKSTATIONS);
}

// WHEN_CLEARING_GETUSERINFO1017_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1017 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1017 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1017_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1017> pUserInfo1017;
	HRESULT hr = mpCNetUser->GetUserInfo1017(PAR_UINF_ACCNTEXPIRES, &pUserInfo1017);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1017->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1017, get_AccntExpires, PAR_UINF_ACCNTEXPIRES);
}

// WHEN_CLEARING_GETUSERINFO1018_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1018 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1018 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1018_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1018> pUserInfo1018;
	HRESULT hr = mpCNetUser->GetUserInfo1018(PAR_UINF_MAXSTORAGE, &pUserInfo1018);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1018->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1018, get_MaxStorage, PAR_UINF_MAXSTORAGE);
}

// WHEN_CLEARING_GETUSERINFO1020_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1020 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1020 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1020_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1020> pUserInfo1020;
	HRESULT hr = mpCNetUser->GetUserInfo1020(
		PAR_UINF_UNITSPERWEEK
		, PAR_UINF_LOGONHOURS
		, &pUserInfo1020);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1020->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1020, get_UnitsPerWeek, PAR_UINF_UNITSPERWEEK);
	ASSERT_EQ_PROP_GET_BYTE(pUserInfo1020, get_LogonHours, PAR_UINF_LOGONHOURS);
}

// WHEN_CLEARING_GETUSERINFO1023_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1023 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1023 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1023_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1023> pUserInfo1023;
	HRESULT hr = mpCNetUser->GetUserInfo1023(PAR_UINF_LOGONSERVER, &pUserInfo1023);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1023->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1023, get_LogonServer, PAR_UINF_LOGONSERVER);
}

// WHEN_CLEARING_GETUSERINFO1024_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1024 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1024 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1024_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1024> pUserInfo1024;
	HRESULT hr = mpCNetUser->GetUserInfo1024(PAR_UINF_COUNTRYCODE, &pUserInfo1024);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1024->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1024, get_CountryCode, PAR_UINF_COUNTRYCODE);
}

// WHEN_CLEARING_GETUSERINFO1025_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1025 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1025 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1025_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1025> pUserInfo1025;
	HRESULT hr = mpCNetUser->GetUserInfo1025(PAR_UINF_CODEPAGE, &pUserInfo1025);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1025->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1025, get_CodePage, PAR_UINF_CODEPAGE);
}

// WHEN_CLEARING_GETUSERINFO1051_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1051 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1051 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1051_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1051> pUserInfo1051;
	HRESULT hr = mpCNetUser->GetUserInfo1051(PAR_UINF_PRIMGRPID, &pUserInfo1051);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1051->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1051, get_PrimaryGrpId, PAR_UINF_PRIMGRPID);
}

// WHEN_CLEARING_GETUSERINFO1052_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1052 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1052 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1052_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1052> pUserInfo1052;
	HRESULT hr = mpCNetUser->GetUserInfo1052(PAR_UINF_PRFL, &pUserInfo1052);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1052->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1052, get_Profile, PAR_UINF_PRFL);
}

// WHEN_CLEARING_GETUSERINFO1053_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1053 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1053 structure with the default property values.
TEST_F(TestCNetUser, when_clearing_getuserinfo1053_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1053> pUserInfo1053;
	HRESULT hr = mpCNetUser->GetUserInfo1053(PAR_UINF_HOMEDIRDRV, &pUserInfo1053);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1053->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1053, get_HomeDirDrive, PAR_UINF_HOMEDIRDRV);
}

// WHEN NETUSERADD WITH USERINFO1 THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// Whenadding a test user with NetUserAdd and UserInfo1 no exception should be 
/// returned
TEST_F(TestCNetUser, when_netuseradd_with_userinfo1_then_return_no_exception)
{
	CComPtr<ICUserInfo1> pUserInfo1;
	HRESULT hr = mpCNetUser->GetUserInfo1(
		PAR_UINF_NAME
		, PAR_UINF_PWD
		, 0
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, &pUserInfo1);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	hr = mpCNetUser->NetUserAdd(NULL, pUserInfo1);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Now delete the user
	hr = mpCNetUser->NetUserDel(NULL, PAR_UINF_NAME);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
}

// WHEN_NETUSERADD_WITH_USERINFO1_THEN_RETURN_NETUSERGETINFO_WITH_USERINFO1_AND_SAME_VALUES
///////////////////////////////////////////////////////////////////////////////
/// When adding a test user with NetUserAdd and UserInfo1 no exception should be 
/// returned and NetUserGetInfo with UserInfo1 should have the same values
TEST_F(TestCNetUser, when_netuseradd_with_userinfo1_then_return_netusergetinfo_with_userinfo1_and_same_values)
{
	CComPtr<ICUserInfo1> pUserInfo1;
	HRESULT hr = mpCNetUser->GetUserInfo1(
		  PAR_UINF_NAME
		, PAR_UINF_PWD
		, 0
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, &pUserInfo1);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	hr = mpCNetUser->NetUserAdd(NULL, pUserInfo1);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Now Clear UserInfo1
	pUserInfo1.Release();
	//ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Now Get the user details
	CComPtr<IUnknown> pUnk;
	hr = mpCNetUser->NetUserGetInfo(NULL, PAR_UINF_NAME, eUserInfoType::uiType1, (IUnknown**)&pUserInfo1); // &pUnk);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now compaire if it is the same
	_bstr_t bsTemp(L"*");
	hr = pUserInfo1->get_Name(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_NAME, bsTemp);

	bsTemp = L"*";
	hr = pUserInfo1->get_Password(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_EMPTY, bsTemp);

	//Pasdword age can be changed by the system, do not test

	//Privilege can be changed by the system, do not test

	bsTemp = L"*";
	hr = pUserInfo1->get_HomeDirectory(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_HOMEDIR, bsTemp);

	bsTemp = L"*";
	hr = pUserInfo1->get_Comment(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_COMNT, bsTemp);

	// Flags can be changed by the system, do not test

	bsTemp = L"*";
	hr = pUserInfo1->get_ScriptPath(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, bsTemp);
	
	//Now delete the user
	hr = mpCNetUser->NetUserDel(NULL, PAR_UINF_NAME);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
}

// WHEN_NETUSERDEL_WITH_NON_EXISTING_USER_THEN_RETURN_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When deleting a non existing test user with NetUserDel an exception should be 
/// returned
TEST_F(TestCNetUser, when_netuserdel_with_non_existing_user_then_return_exception)
{
	HRESULT hr = mpCNetUser->NetUserDel(NULL, PAR_UINF_NAME);
	ASSERT_TRUE(hr == NERR_UserNotFound) << TUtils::GetLastErrorAsString(hr);
}

// WHEN_NETUSERGETINFO_WITH_NON_EXISTING_USER_THEN_RETURN_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When getting info on a non existing test user with NetUserGetInfo an exception should be 
/// returned
TEST_F(TestCNetUser, when_netusergetinfo_with_non_existing_user_then_return_exception)
{
	CComPtr<IUnknown> pUnk;
	HRESULT hr = mpCNetUser->NetUserGetInfo(NULL, PAR_UINF_NAME, eUserInfoType::uiType1, &pUnk);
	ASSERT_TRUE(hr == NERR_UserNotFound) << TUtils::GetLastErrorAsString(hr);
}