#include "TestCNetUser.h"

// WHEN COCREATEINSTANCE THEN EXPECT NO EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When COM object gets instantiated via CoCreateInstance no exception should 
/// be returned
TEST(_TestCNetUser, when_cocreateinstance_then_expect_no_exception)
{
	CComPtr<ICNetUser> pCNetUser;
	HRESULT hr = pCNetUser.CoCreateInstance(CLSID_CNetUser);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString();
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
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString();
	
	// now check if all the properties have the correct values
	_bstr_t bsTemp(L"");
	hr = pUserInfo1->get_Name(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString();
	ASSERT_EQ(PAR_UINF_NAME, bsTemp);

	bsTemp = L"";
	hr = pUserInfo1->get_Password(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString();
	ASSERT_EQ(PAR_UINF_PWD, bsTemp);

	ULONG ulTemp(5);
	hr = pUserInfo1->get_PasswordAge(&ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString();
	ASSERT_EQ(PAR_UINF_PWDAGE, ulTemp);

	ulTemp = 0;
	hr = pUserInfo1->get_Privilege(&ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString();
	ASSERT_EQ(PAR_UINF_PRIV, ulTemp);

	bsTemp = L"";
	hr = pUserInfo1->get_HomeDirectory(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString();
	ASSERT_EQ(PAR_UINF_HOMEDIR, bsTemp);

	bsTemp = L"";
	hr = pUserInfo1->get_Comment(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString();
	ASSERT_EQ(PAR_UINF_COMNT, bsTemp);

	ulTemp = 0;
	hr = pUserInfo1->get_Flags(&ulTemp);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString();
	ASSERT_EQ(PAR_UINF_FLGS, ulTemp);

	bsTemp = L"*";
	hr = pUserInfo1->get_ScriptPath(bsTemp.GetAddress());
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString();
	ASSERT_EQ(PAR_UINF_SCRPATH, bsTemp);
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
		, PAR_UINF_PWDAGE
		, PAR_UINF_PRIV
		, PAR_UINF_HOMEDIR
		, PAR_UINF_COMNT
		, PAR_UINF_FLGS
		, PAR_UINF_SCRPATH
		, &pUserInfo1);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString();

	hr = mpCNetUser->NetUserAdd(NULL, pUserInfo1);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString();
}