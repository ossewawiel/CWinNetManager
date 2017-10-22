#include "TestCNetUser.h"

// WHEN_CALLING_GETUSERMODALS0_WITH_VALID_VALUES_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserModals0 with with valid values no exception should be returned.
TEST_F(TestCNetUser_GetModals, when_calling_getusermodals0_with_valid_values_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo0> pUserModalsInfo0;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_MODALS_INFO_0(mpCNetUser, pUserModalsInfo0);

	ASSERT_EQ_PROP_GET_ULONG(pUserModalsInfo0, get_MinPwdLen, PAR_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserModalsInfo0, get_MaxPwdAge, PAR_UMINF_MAXPWDAGE);
	ASSERT_EQ_PROP_GET_ULONG(pUserModalsInfo0, get_MinPwdAge, PAR_ZERO);
	ASSERT_EQ_PROP_GET_ULONG(pUserModalsInfo0, get_ForceLogoff, PAR_UMINFFORCELOGOFF);
	ASSERT_EQ_PROP_GET_ULONG(pUserModalsInfo0, get_PwdHistLen, PAR_ZERO);
}

// WHEN_CALLING_GETUSERMODALS1_WITH_VALID_VALUES_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserModals1 with with valid values no exception should be returned.
TEST_F(TestCNetUser_GetModals, when_calling_getusermodals1_with_valid_values_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo1> pUserModalsInfo1;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_MODALS_INFO_1(mpCNetUser, pUserModalsInfo1);

	ASSERT_EQ_PROP_GET_ULONG(pUserModalsInfo1, get_Role, PAR_ZERO);
	ASSERT_EQ_PROP_GET_BSTR(pUserModalsInfo1, get_Primary, PAR_EMPTY);
}

// WHEN_CALLING_GETUSERMODALS2_WITH_VALID_VALUES_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserModals2 with with valid values no exception should be returned.
TEST_F(TestCNetUser_GetModals, when_calling_getusermodals2_with_valid_values_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo2> pUserModalsInfo2;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_MODALS_INFO_2(mpCNetUser, pUserModalsInfo2);

	ASSERT_EQ_PROP_GET_BSTR(pUserModalsInfo2, get_DomainName, PAR_NOT_EMPTY);
	ASSERT_EQ_PROP_GET_BSTR(pUserModalsInfo2, get_DomainId, PAR_NOT_EMPTY);
}

// WHEN_CALLING_GETUSERMODALS3_WITH_VALID_VALUES_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserModals3 with with valid values no exception should be returned.
TEST_F(TestCNetUser_GetModals, when_calling_getusermodals3_with_valid_values_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo3> pUserModalsInfo3;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_MODALS_INFO_3(mpCNetUser, pUserModalsInfo3);

	ASSERT_GT_PROP_GET_ULONG(pUserModalsInfo3, get_LockoutDuration, PAR_ZERO);
	ASSERT_GT_PROP_GET_ULONG(pUserModalsInfo3, get_LockoutObservationWindow, PAR_ZERO);
	ASSERT_EGT_PROP_GET_ULONG(pUserModalsInfo3, get_LockoutThreshold, PAR_ZERO);
}

// WHEN_CALLING_GETUSERMODALS1001_WITH_VALID_VALUES_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserModals1001 with with valid values no exception should be returned.
TEST_F(TestCNetUser_GetModals, when_calling_getusermodals1001_with_valid_values_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo1001> pUserModalsInfo1001;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_MODALS_INFO_1001(mpCNetUser, pUserModalsInfo1001);

	ASSERT_EQ_PROP_GET_ULONG(pUserModalsInfo1001, get_MinPwdLen, PAR_ZERO);
}

// WHEN_CALLING_GETUSERMODALS1002_WITH_VALID_VALUES_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserModals1002 with with valid values no exception should be returned.
TEST_F(TestCNetUser_GetModals, when_calling_getusermodals1002_with_valid_values_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo1002> pUserModalsInfo1002;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_MODALS_INFO_1002(mpCNetUser, pUserModalsInfo1002);

	ASSERT_EQ_PROP_GET_ULONG(pUserModalsInfo1002, get_MaxPwdAge, PAR_UMINF_MAXPWDAGE);
}

// WHEN_CALLING_GETUSERMODALS1003_WITH_VALID_VALUES_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserModals1003 with with valid values no exception should be returned.
TEST_F(TestCNetUser_GetModals, when_calling_getusermodals1003_with_valid_values_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo1003> pUserModalsInfo1003;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_MODALS_INFO_1003(mpCNetUser, pUserModalsInfo1003);

	ASSERT_EQ_PROP_GET_ULONG(pUserModalsInfo1003, get_MinPwdAge, PAR_ZERO);
}

// WHEN_CALLING_GETUSERMODALS1004_WITH_VALID_VALUES_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserModals1004 with with valid values no exception should be returned.
TEST_F(TestCNetUser_GetModals, when_calling_getusermodals1004_with_valid_values_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo1004> pUserModalsInfo1004;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_MODALS_INFO_1004(mpCNetUser, pUserModalsInfo1004);

	ASSERT_EQ_PROP_GET_ULONG(pUserModalsInfo1004, get_ForceLogoff, PAR_UMINFFORCELOGOFF);
}

// WHEN_CALLING_GETUSERMODALS1005_WITH_VALID_VALUES_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserModals1005 with with valid values no exception should be returned.
TEST_F(TestCNetUser_GetModals, when_calling_getusermodals1005_with_valid_values_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo1005> pUserModalsInfo1005;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_MODALS_INFO_1005(mpCNetUser, pUserModalsInfo1005);

	ASSERT_EQ_PROP_GET_ULONG(pUserModalsInfo1005, get_PwdHistLen, PAR_ZERO);
}

// WHEN_CALLING_GETUSERMODALS1006_WITH_VALID_VALUES_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserModals1006 with with valid values no exception should be returned.
TEST_F(TestCNetUser_GetModals, when_calling_getusermodals1006_with_valid_values_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo1006> pUserModalsInfo1006;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_MODALS_INFO_1006(mpCNetUser, pUserModalsInfo1006);

	ASSERT_EQ_PROP_GET_ULONG(pUserModalsInfo1006, get_Role, PAR_ZERO);
}

// WHEN_CALLING_GETUSERMODALS1007_WITH_VALID_VALUES_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling GetUserModals1007 with with valid values no exception should be returned.
TEST_F(TestCNetUser_GetModals, when_calling_getusermodals1007_with_valid_values_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo1007> pUserModalsInfo1007;
	CUSTOM_ASSERT_SET;
	ASSERT_GET_USER_MODALS_INFO_1007(mpCNetUser, pUserModalsInfo1007);

	ASSERT_EQ_PROP_GET_BSTR(pUserModalsInfo1007, get_Primary, PAR_EMPTY);
}