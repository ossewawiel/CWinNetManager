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
		, 0
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, &pUserInfo1);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	
	// now check if all the properties have the correct values
	_bstr_t bsTemp(L"");
	hr = pUserInfo1->get_Name(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_NAME, bsTemp);

	bsTemp = L"";
	hr = pUserInfo1->get_Password(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_PWD, bsTemp);

	ULONG ulTemp(5);
	hr = pUserInfo1->get_PasswordAge(&ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(0, ulTemp);

	ulTemp = 0;
	hr = pUserInfo1->get_Privilege(&ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_PRIV, ulTemp);

	bsTemp = L"";
	hr = pUserInfo1->get_HomeDirectory(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_HOMEDIR, bsTemp);

	bsTemp = L"";
	hr = pUserInfo1->get_Comment(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_COMNT, bsTemp);

	ulTemp = 0;
	hr = pUserInfo1->get_Flags(&ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_FLGS, ulTemp);

	bsTemp = L"*";
	hr = pUserInfo1->get_ScriptPath(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, bsTemp);
}

// WHEN GETUSERINFO2 WITH PROPER PARAMETERS THEN RETURN NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserInfo2 with proper parameters then it will return a 
/// UserInfo1 structure with the correct proeprty values.
TEST_F(TestCNetUser, when_getuserinfo2_with_proper_parameters_then_return_no_exception)
{
	CComPtr<ICUserInfo2> pUserInfo2;
	HRESULT hr = mpCNetUser->GetUserInfo2(
		PAR_UINF_NAME
		, PAR_UINF_PWD
		, 0
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, 0
		, PAR_UINF_FULLNAME
		, PAR_UINF_USRCOMMENT
		, PAR_UINF_PARAMS
		, PAR_UINF_WORKSTATIONS
		, 0
		, 0
		, PAR_UINF_ACCNTEXPIRES
		, PAR_UINF_MAXSTORAGE
		, 0
		, PAR_UINF_LOGONHOURS
		, 0
		, 0
		, NULL
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, &pUserInfo2);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	// now check if all the properties have the correct values
	_bstr_t bsTemp(L"");
	hr = pUserInfo2->get_Name(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_NAME, bsTemp);

	bsTemp = L"";
	hr = pUserInfo2->get_Password(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_PWD, bsTemp);

	ULONG ulTemp(5);
	hr = pUserInfo2->get_PasswordAge(&ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_PWDAGE, ulTemp);

	ulTemp = 0;
	hr = pUserInfo2->get_Privilege(&ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_PRIV, ulTemp);

	bsTemp = L"";
	hr = pUserInfo2->get_HomeDirectory(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_HOMEDIR, bsTemp);

	bsTemp = L"";
	hr = pUserInfo2->get_Comment(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_COMNT, bsTemp);

	ulTemp = 0;
	hr = pUserInfo2->get_Flags(&ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_FLGS, ulTemp);

	bsTemp = L"*";
	hr = pUserInfo2->get_ScriptPath(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, bsTemp);

	ulTemp = 0;
	hr = pUserInfo2->get_AuthFlags(ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, ulTemp);

	bsTemp = L"*";
	hr = pUserInfo2->get_FullName(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, bsTemp);

	bsTemp = L"*";
	hr = pUserInfo2->get_UsrComment(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, bsTemp);

	bsTemp = L"*";
	hr = pUserInfo2->get_Params(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, bsTemp);

	bsTemp = L"*";
	hr = pUserInfo2->get_Workstations(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, bsTemp);

	ulTemp = 0;
	hr = pUserInfo2->get_LastLogon(ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, ulTemp);

	ulTemp = 0;
	hr = pUserInfo2->get_LastLogof(ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, ulTemp);

	ulTemp = 0;
	hr = pUserInfo2->get_AccntExpires(ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, ulTemp);

	ulTemp = 0;
	hr = pUserInfo2->get_MaxStorage(ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, ulTemp);

	ulTemp = 0;
	hr = pUserInfo2->get_UnitsPerWeek(ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, ulTemp);

	BYTE bTemp = 0;
	hr = pUserInfo2->get_LogonHours(bTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, bTemp);

	ulTemp = 0;
	hr = pUserInfo2->get_BadPwdCount(ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, ulTemp);

	ulTemp = 0;
	hr = pUserInfo2->get_NumLogons(ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, ulTemp);

	bsTemp = L"*";
	hr = pUserInfo2->get_LogonServer(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, bsTemp);
	
	ulTemp = 0;
	hr = pUserInfo2->get_CountryCode(ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, ulTemp);
	
	ulTemp = 0;
	hr = pUserInfo2->get_CodePAge(ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_UINF_SCRPATH, ulTemp);
	
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
	_bstr_t bsTemp(L"*");
	hr = pUserInfo1->get_Name(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_EMPTY, bsTemp);

	bsTemp = L"*";
	hr = pUserInfo1->get_Password(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_EMPTY, bsTemp);

	ULONG ulTemp(100);
	hr = pUserInfo1->get_PasswordAge(&ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(0, ulTemp);

	ulTemp = 100;
	hr = pUserInfo1->get_Privilege(&ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(0, ulTemp);

	bsTemp = L"*";
	hr = pUserInfo1->get_HomeDirectory(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_EMPTY, bsTemp);

	bsTemp = L"*";
	hr = pUserInfo1->get_Comment(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_EMPTY, bsTemp);

	ulTemp = 100;
	hr = pUserInfo1->get_Flags(&ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(0, ulTemp);

	bsTemp = L"*";
	hr = pUserInfo1->get_ScriptPath(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	ASSERT_EQ(PAR_EMPTY, bsTemp);
}

// WHEN NETUSERADD WITH USERINFO1 THENRETURN NO EXCEPTION
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