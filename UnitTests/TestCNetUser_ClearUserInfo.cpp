#include "TestCNetUser.h"

// WHEN_CLEARING_GETUSERINFO0_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo0 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo0 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo0_then_return_no_exception_and_values_set_to_default)
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
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1_then_return_no_exception_and_values_set_to_default)
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
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_Name, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_Password, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1, get_PasswordAge, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1, get_Privilege, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_HomeDirectory, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_Comment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1, get_Flags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1, get_ScriptPath, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO2_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo2 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo2 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo2_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo2> pUserInfo2; 
	CComPtr<ICLogonHours> pLogonHours;
	HRESULT hr = mpCNetUser->GetLogonHoursAllActive(&pLogonHours);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	hr = mpCNetUser->GetUserInfo2(
		PAR_UINF_NAME
		, PAR_UINF_PWD
		, PAR_NOT_ZERO
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, PAR_NOT_ZERO
		, PAR_UINF_FULLNAME
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_PARAMS
		, PAR_UINF_WORKSTATIONS
		, PAR_NOT_ZERO
		, PAR_NOT_ZERO
		, PAR_UINF_ACCNTEXPIRES
		, PAR_UINF_MAXSTORAGE
		, PAR_NOT_ZERO
		, pLogonHours
		, PAR_NOT_ZERO
		, PAR_NOT_ZERO
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, &pUserInfo2);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo2->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	hr = pLogonHours->ClearAll();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Name, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Password, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_PasswordAge, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_Privilege, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_HomeDirectory, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Comment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_Flags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_ScriptPath, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_AuthFlags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_FullName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_UsrComment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Params, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_Workstations, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_LastLogon, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_LastLogoff, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_AccntExpires, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_MaxStorage, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_UnitsPerWeek, 0);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo2, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_BadPwdCount, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_NumLogons, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo2, get_LogonServer, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_CountryCode, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo2, get_CodePage, 0);

}

// WHEN_CLEARING_GETUSERINFO3_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo3 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo3 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo3_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo3> pUserInfo3;
	CComPtr<ICLogonHours> pLogonHours;
	HRESULT hr = mpCNetUser->GetLogonHoursAllActive(&pLogonHours);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	hr = mpCNetUser->GetUserInfo3(
		PAR_UINF_NAME
		, PAR_UINF_PWD
		, PAR_NOT_ZERO
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, PAR_NOT_ZERO
		, PAR_UINF_FULLNAME
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_PARAMS
		, PAR_UINF_WORKSTATIONS
		, PAR_NOT_ZERO
		, PAR_NOT_ZERO
		, PAR_UINF_ACCNTEXPIRES
		, PAR_UINF_MAXSTORAGE
		, PAR_NOT_ZERO
		, pLogonHours
		, PAR_NOT_ZERO
		, PAR_NOT_ZERO
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, PAR_NOT_ZERO
		, PAR_UINF_PRIMGRPID
		, PAR_UINF_PRFL
		, PAR_UINF_HOMEDIRDRV
		, PAR_NOT_ZERO
		, &pUserInfo3);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo3->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	hr = pLogonHours->ClearAll();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Name, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Password, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PasswordAge, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_Privilege, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_HomeDirectory, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Comment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_Flags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_ScriptPath, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_AuthFlags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_FullName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_UsrComment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Params, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Workstations, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_LastLogon, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_LastLogoff, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_AccntExpires, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_MaxStorage, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_UnitsPerWeek, 0);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo3, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_BadPwdCount, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_NumLogons, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_LogonServer, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_CountryCode, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_CodePage, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_UserId, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PrimaryGrpId, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_Profile, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo3, get_HomeDirDrive, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo3, get_PwdExpired, 0);

}

// WHEN_CLEARING_GETUSERINFO4_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo4 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo4 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo4_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	CComPtr<ICLogonHours> pLogonHours;
	HRESULT hr = mpCNetUser->GetLogonHoursAllActive(&pLogonHours);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	hr = mpCNetUser->GetUserInfo4(
		PAR_UINF_NAME
		, PAR_UINF_PWD
		, PAR_NOT_ZERO
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, PAR_NOT_ZERO
		, PAR_UINF_FULLNAME
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_PARAMS
		, PAR_UINF_WORKSTATIONS
		, PAR_NOT_ZERO
		, PAR_NOT_ZERO
		, PAR_UINF_ACCNTEXPIRES
		, PAR_UINF_MAXSTORAGE
		, PAR_NOT_ZERO
		, pLogonHours
		, PAR_NOT_ZERO
		, PAR_NOT_ZERO
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, PAR_NOT_EMPTY
		, PAR_UINF_PRIMGRPID
		, PAR_UINF_PRFL
		, PAR_UINF_HOMEDIRDRV
		, PAR_NOT_ZERO
		, &pUserInfo4);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo4->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	hr = pLogonHours->ClearAll();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Name, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Password, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PasswordAge, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_Privilege, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_HomeDirectory, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Comment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_Flags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_ScriptPath, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_AuthFlags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_FullName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_UsrComment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Params, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Workstations, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_LastLogon, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_LastLogoff, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_AccntExpires, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_MaxStorage, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_UnitsPerWeek, 0);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo4, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_BadPwdCount, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_NumLogons, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_LogonServer, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_CountryCode, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_CodePage, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_UserSid, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PrimaryGrpId, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_Profile, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo4, get_HomeDirDrive, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo4, get_PwdExpired, 0);

}

// WHEN_CLEARING_GETUSERINFO10_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo10 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo10 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo10_then_return_no_exception_and_values_set_to_default)
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
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_Name, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_Comment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_UsrComment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo10, get_FullName, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO11_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo11 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo11 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo11_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo11> pUserInfo11;
	CComPtr<ICLogonHours> pLogonHours;
	HRESULT hr = mpCNetUser->GetLogonHoursAllActive(&pLogonHours);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	hr = mpCNetUser->GetUserInfo11(
		PAR_UINF_NAME
		, PAR_UINF_COMNT
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_FULLNAME
		, PAR_UINF_PRIV
		, PAR_NOT_ZERO
		, PAR_NOT_ZERO
		, PAR_UINF_HOMEDIR
		, PAR_UINF_PARAMS
		, PAR_NOT_ZERO
		, PAR_NOT_ZERO
		, PAR_NOT_ZERO
		, PAR_NOT_ZERO
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_WORKSTATIONS
		, PAR_UINF_MAXSTORAGE
		, PAR_NOT_ZERO
		, pLogonHours
		, PAR_UINF_CODEPAGE
		, &pUserInfo11);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo11->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	hr = pLogonHours->ClearAll();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Name, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Comment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_UsrComment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_FullName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_Privilege, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_AuthFlags, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_PasswordAge, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_HomeDirectory, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Params, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_LastLogon, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_LastLogoff, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_BadPwdCount, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_NumLogons, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_LogonServer, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_CountryCode, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo11, get_Workstations, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_MaxStorage, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_UnitsPerWeek, 0);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo11, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo11, get_CodePage, 0);
}

// WHEN_CLEARING_GETUSERINFO20_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo20 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo20 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo20_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo20> pUserInfo20;
	HRESULT hr = mpCNetUser->GetUserInfo20(
		PAR_UINF_NAME
		, PAR_UINF_FULLNAME
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_NOT_ZERO
		, &pUserInfo20);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo20->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_Name, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_FullName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo20, get_Comment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo20, get_Flags, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo20, get_UserId, 0);
}

// WHEN_CLEARING_GETUSERINFO21_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo21 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo21 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo21_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo21> pUserInfo21;
	HRESULT hr = mpCNetUser->GetUserInfo21(PAR_UINF_PWD, &pUserInfo21);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo21->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo21, get_Password, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO22_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo22 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo22 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo22_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo22> pUserInfo22;
	CComPtr<ICLogonHours> pLogonHours;
	HRESULT hr = mpCNetUser->GetLogonHoursAllActive(&pLogonHours);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	hr = mpCNetUser->GetUserInfo22(
		PAR_UINF_NAME
		, PAR_UINF_PWD
		, PAR_NOT_ZERO
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, PAR_NOT_ZERO
		, PAR_UINF_FULLNAME
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_PARAMS
		, PAR_UINF_WORKSTATIONS
		, PAR_NOT_ZERO
		, PAR_NOT_ZERO
		, PAR_UINF_ACCNTEXPIRES
		, PAR_UINF_MAXSTORAGE
		, PAR_NOT_ZERO
		, pLogonHours
		, PAR_NOT_ZERO
		, PAR_NOT_ZERO
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, &pUserInfo22);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo22->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	hr = pLogonHours->ClearAll();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Name, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Password, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_PasswordAge, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_Privilege, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_HomeDirectory, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Comment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_Flags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_ScriptPath, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_AuthFlags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_FullName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_UsrComment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Params, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_Workstations, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_LastLogon, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_LastLogoff, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_AccntExpires, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_MaxStorage, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_UnitsPerWeek, 0);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo22, get_LogonHours, pLogonHours);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_BadPwdCount, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_NumLogons, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo22, get_LogonServer, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_CountryCode, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo22, get_CodePage, 0);
}

// WHEN_CLEARING_GETUSERINFO23_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo23 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo23 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo23_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo23> pUserInfo23;
	HRESULT hr = mpCNetUser->GetUserInfo23(
		PAR_UINF_NAME
		, PAR_UINF_FULLNAME
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_NOT_EMPTY
		, &pUserInfo23);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo23->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_Name, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_FullName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_Comment, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo23, get_Flags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo23, get_UserSid, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO24_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo24 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo24 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo24_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo24> pUserInfo24;
	HRESULT hr = mpCNetUser->GetUserInfo24(
		PAR_UINF_INTRNETID
		, PAR_UINF_FLGS
		, PAR_UINF_INTRNETPROVNAME
		, PAR_UINF_INTRNETPRNCPLNAME
		, PAR_NOT_EMPTY
		, &pUserInfo24);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo24->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_SHORT(pUserInfo24, get_InternetIdentity, 0);
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo24, get_Flags, 0);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo24, get_InternetProviderName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo24, get_InternetPrincipleName, PAR_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo24, get_UserSid, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO1003_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1003 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1003 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1003_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1003> pUserInfo1003;
	HRESULT hr = mpCNetUser->GetUserInfo1003(PAR_UINF_PWD, &pUserInfo1003);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1003->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1003, get_Password, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO1005_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1005 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1005 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1005_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1005> pUserInfo1005;
	HRESULT hr = mpCNetUser->GetUserInfo1005(PAR_UINF_PRIV, &pUserInfo1005);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1005->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1005, get_Privilege, 0);
}

// WHEN_CLEARING_GETUSERINFO1006_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1006 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1006 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1006_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1006> pUserInfo1006;
	HRESULT hr = mpCNetUser->GetUserInfo1006(PAR_UINF_HOMEDIR, &pUserInfo1006);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1006->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1006, get_HomeDirectory, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO1007_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1007 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1007 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1007_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1007> pUserInfo1007;
	HRESULT hr = mpCNetUser->GetUserInfo1007(PAR_UINF_COMNT, &pUserInfo1007);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1007->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1007, get_Comment, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO1008_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1008 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1008 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1008_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1008> pUserInfo1008;
	HRESULT hr = mpCNetUser->GetUserInfo1008(PAR_UINF_FLGS, &pUserInfo1008);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1008->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1008, get_Flags, 0);
}

// WHEN_CLEARING_GETUSERINFO1009_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1009 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1009 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1009_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1009> pUserInfo1009;
	HRESULT hr = mpCNetUser->GetUserInfo1009(PAR_UINF_SCRPATH, &pUserInfo1009);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1009->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1009, get_ScriptPath, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO1010_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1010 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1010 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1010_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1010> pUserInfo1010;
	HRESULT hr = mpCNetUser->GetUserInfo1010(PAR_NOT_ZERO, &pUserInfo1010);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1010->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1010, get_AuthFlags, 0);
}

// WHEN_CLEARING_GETUSERINFO1011_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1011 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1011 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1011_then_return_no_exception_and_values_set_to_default)
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
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1012_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1012> pUserInfo1012;
	HRESULT hr = mpCNetUser->GetUserInfo1012(PAR_UINF_USRCOMMENT, &pUserInfo1012);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1012->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1012, get_UsrComment, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO1013_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1013 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1013 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1013_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1013> pUserInfo1013;
	HRESULT hr = mpCNetUser->GetUserInfo1013(PAR_UINF_PARAMS, &pUserInfo1013);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1013->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1013, get_Params, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO1014_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1014 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1014 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1014_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1014> pUserInfo1014;
	HRESULT hr = mpCNetUser->GetUserInfo1014(PAR_UINF_WORKSTATIONS, &pUserInfo1014);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1014->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1014, get_Workstations, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO1017_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1017 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1017 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1017_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1017> pUserInfo1017;
	HRESULT hr = mpCNetUser->GetUserInfo1017(PAR_UINF_ACCNTEXPIRES, &pUserInfo1017);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1017->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1017, get_AccntExpires, 0);
}

// WHEN_CLEARING_GETUSERINFO1018_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1018 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1018 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1018_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1018> pUserInfo1018;
	HRESULT hr = mpCNetUser->GetUserInfo1018(PAR_UINF_MAXSTORAGE, &pUserInfo1018);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1018->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1018, get_MaxStorage, 0);
}

// WHEN_CLEARING_GETUSERINFO1020_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1020 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1020 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1020_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1020> pUserInfo1020;
	CComPtr<ICLogonHours> pLogonHours;
	HRESULT hr = mpCNetUser->GetLogonHoursAllActive(&pLogonHours);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	hr = mpCNetUser->GetUserInfo1020(
		PAR_NOT_ZERO
		, pLogonHours
		, &pUserInfo1020);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1020->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	hr = pLogonHours->ClearAll();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1020, get_UnitsPerWeek, 0);
	ASSERT_EQ_PROP_GET_CLOGONHOURS(pUserInfo1020, get_LogonHours, pLogonHours);
}

// WHEN_CLEARING_GETUSERINFO1023_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1023 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1023 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1023_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1023> pUserInfo1023;
	HRESULT hr = mpCNetUser->GetUserInfo1023(PAR_NOT_EMPTY, &pUserInfo1023);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1023->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1023, get_LogonServer, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO1024_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1024 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1024 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1024_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1024> pUserInfo1024;
	HRESULT hr = mpCNetUser->GetUserInfo1024(PAR_UINF_COUNTRYCODE, &pUserInfo1024);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1024->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1024, get_CountryCode, 0);
}

// WHEN_CLEARING_GETUSERINFO1025_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1025 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1025 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1025_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1025> pUserInfo1025;
	HRESULT hr = mpCNetUser->GetUserInfo1025(PAR_UINF_CODEPAGE, &pUserInfo1025);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1025->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1025, get_CodePage, 0);
}

// WHEN_CLEARING_GETUSERINFO1051_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1051 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1051 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1051_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1051> pUserInfo1051;
	HRESULT hr = mpCNetUser->GetUserInfo1051(PAR_UINF_PRIMGRPID, &pUserInfo1051);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1051->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_ULONG(pUserInfo1051, get_PrimaryGrpId, 0);
}

// WHEN_CLEARING_GETUSERINFO1052_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1052 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1052 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1052_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1052> pUserInfo1052;
	HRESULT hr = mpCNetUser->GetUserInfo1052(PAR_UINF_PRFL, &pUserInfo1052);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1052->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1052, get_Profile, PAR_EMPTY);
}

// WHEN_CLEARING_GETUSERINFO1053_THEN_RETURN_NO_EXCEPTION_AND_VALUES_SET_TO_DEFAULT
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo1053 with proper parameters and clearing it with Clear() then it will return a 
/// UserInfo1053 structure with the default property values.
TEST_F(TestCNetUser_Clear, when_clearing_getuserinfo1053_then_return_no_exception_and_values_set_to_default)
{
	CComPtr<ICUserInfo1053> pUserInfo1053;
	HRESULT hr = mpCNetUser->GetUserInfo1053(PAR_UINF_HOMEDIRDRV, &pUserInfo1053);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Clear the structure
	hr = pUserInfo1053->Clear();
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	ASSERT_EQ_PROP_GET_BSTR(pUserInfo1053, get_HomeDirDrive, PAR_EMPTY);
}