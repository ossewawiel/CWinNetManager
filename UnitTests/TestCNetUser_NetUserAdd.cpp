#include "TestCNetUser.h"

// WHEN_NETUSERADD_WITH_USERINFO1_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// Whenadding a test user with NetUserAdd and UserInfo1 no exception should be 
/// returned
TEST_F(TestCNetUser_Add, when_netuseradd_with_userinfo1_then_return_no_exception)
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

	hr = mpCNetUser->NetUserAdd(NULL, eUserInfoType::uiType1, pUserInfo1);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Now delete the user
	hr = mpCNetUser->NetUserDel(NULL, PAR_UINF_NAME);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
}

// WHEN_NETUSERADD_WITH_USERINFO2_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// Whenadding a test user with NetUserAdd and UserInfo2 no exception should be 
/// returned
TEST_F(TestCNetUser_Add, when_netuseradd_with_userinfo2_then_return_no_exception)
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
		, 0
		, NULL
		, 0
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, &pUserInfo2);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	hr = mpCNetUser->NetUserAdd(NULL, eUserInfoType::uiType2, pUserInfo2);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Now delete the user
	hr = mpCNetUser->NetUserDel(NULL, PAR_UINF_NAME);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
}

// WHEN_NETUSERADD_WITH_USERINFO3_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// Whenadding a test user with NetUserAdd and UserInfo3 no exception should be 
/// returned
TEST_F(TestCNetUser_Add, when_netuseradd_with_userinfo3_then_return_no_exception)
{
	CComPtr<ICUserInfo3> pUserInfo3;
	HRESULT hr = mpCNetUser->GetUserInfo3(
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
		, 0
		, NULL
		, 0
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, 0
		, PAR_UINF_PRIMGRPID
		, PAR_UINF_PRFL
		, PAR_UINF_HOMEDIRDRV
		, 0
		, &pUserInfo3);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	hr = mpCNetUser->NetUserAdd(NULL, eUserInfoType::uiType3, pUserInfo3);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Now delete the user
	hr = mpCNetUser->NetUserDel(NULL, PAR_UINF_NAME);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
}

// WHEN_NETUSERADD_WITH_USERINFO4_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// Whenadding a test user with NetUserAdd and UserInfo4 no exception should be 
/// returned
TEST_F(TestCNetUser_Add, when_netuseradd_with_userinfo4_then_return_no_exception)
{
	CComPtr<ICUserInfo4> pUserInfo4;
	HRESULT hr = mpCNetUser->GetUserInfo4(
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
		, 0
		, NULL
		, 0
		, PAR_UINF_LOGONSERVER
		, PAR_UINF_COUNTRYCODE
		, PAR_UINF_CODEPAGE
		, PAR_EMPTY
		, PAR_UINF_PRIMGRPID
		, PAR_UINF_PRFL
		, PAR_UINF_HOMEDIRDRV
		, 0
		, &pUserInfo4);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	hr = mpCNetUser->NetUserAdd(NULL, eUserInfoType::uiType4, pUserInfo4);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

	//Now delete the user
	hr = mpCNetUser->NetUserDel(NULL, PAR_UINF_NAME);
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
}