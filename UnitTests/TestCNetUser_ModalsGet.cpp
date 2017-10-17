#include "TestCNetUser.h"

// WHEN_CALLING_NETUSERMODALSGET0_THEN_RETURN_USERMODALSINFO0_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserModalsGet0 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual properties should be a valid value
TEST_F(TestCNetUser_ModalsGet, when_calling_netusermodalsget0_then_return_usermodalsinfo0_no_exception)
{
	CComPtr<ICUserModalsInfo0> pUserModalsInfo0;
	CUSTOM_ASSERT_SET;
	ASSERT_MODALS_GET(mpCNetUser, 0, pUserModalsInfo0);

	long lCount(0);
	ASSERT_GT_GET_COUNT(pUserModalsInfo0, lCount)

	for (long idx = 1; idx <= lCount; idx++)
	{
		CComPtr<ICUserModalInfo0> pUserModalInfo0;
		ASSERT_GET_ITEM(pUserModalsInfo0, idx, pUserModalInfo0);

		ASSERT_GT_PROP_GET_ULONG(pUserModalInfo0, get_MinPwdLen, 0);
		ASSERT_GT_PROP_GET_ULONG(pUserModalInfo0, get_MaxPwdAge, 0);
		ASSERT_GT_PROP_GET_ULONG(pUserModalInfo0, get_MinPwdAge, 0);
		ASSERT_GT_PROP_GET_ULONG(pUserModalInfo0, get_ForceLogoff, 0);
		ASSERT_GT_PROP_GET_ULONG(pUserModalInfo0, get_PwdHistLen, 0);
	}
}

// WHEN_CALLING_NETUSERMODALSGET1_THEN_RETURN_USERMODALSINFO1_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserModalsGet1 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual properties should be a valid value
TEST_F(TestCNetUser_ModalsGet, when_calling_netusermodalsget1_then_return_usermodalsinfo1_no_exception)
{
	CComPtr<ICUserModalsInfo1> pUserModalsInfo1;
	CUSTOM_ASSERT_SET;
	ASSERT_MODALS_GET(mpCNetUser, 1, pUserModalsInfo1);

	long lCount(0);
	ASSERT_GT_GET_COUNT(pUserModalsInfo1, lCount)

		for (long idx = 1; idx <= lCount; idx++)
		{
			CComPtr<ICUserModalInfo1> pUserModalInfo1;
			ASSERT_GET_ITEM(pUserModalsInfo1, idx, pUserModalInfo1);

			ASSERT_GT_PROP_GET_ULONG(pUserModalInfo1, get_Role, 0);
			ASSERT_LGT_PROP_GET_BSTR(pUserModalInfo1, get_Primary, 0);
		}
}

// WHEN_CALLING_NETUSERMODALSGET2_THEN_RETURN_USERMODALSINFO2_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserModalsGet2 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual properties should be a valid value
TEST_F(TestCNetUser_ModalsGet, when_calling_netusermodalsget2_then_return_usermodalsinfo2_no_exception)
{
	CComPtr<ICUserModalsInfo2> pUserModalsInfo2;
	CUSTOM_ASSERT_SET;
	ASSERT_MODALS_GET(mpCNetUser, 2, pUserModalsInfo2);

	long lCount(0);
	ASSERT_GT_GET_COUNT(pUserModalsInfo2, lCount)

		for (long idx = 1; idx <= lCount; idx++)
		{
			CComPtr<ICUserModalInfo2> pUserModalInfo2;
			ASSERT_GET_ITEM(pUserModalsInfo2, idx, pUserModalInfo2);

			ASSERT_LGT_PROP_GET_BSTR(pUserModalInfo2, get_DomainName, 0);
			ASSERT_LGT_PROP_GET_BSTR(pUserModalInfo2, get_DomainId, 0);
		}
}

// WHEN_CALLING_NETUSERMODALSGET3_THEN_RETURN_USERMODALSINFO3_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserModalsGet3 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual properties should be a valid value
TEST_F(TestCNetUser_ModalsGet, when_calling_netusermodalsget3_then_return_usermodalsinfo3_no_exception)
{
	CComPtr<ICUserModalsInfo3> pUserModalsInfo3;
	CUSTOM_ASSERT_SET;
	ASSERT_MODALS_GET(mpCNetUser, 3, pUserModalsInfo3);

	long lCount(0);
	ASSERT_GT_GET_COUNT(pUserModalsInfo3, lCount)

		for (long idx = 1; idx <= lCount; idx++)
		{
			CComPtr<ICUserModalInfo3> pUserModalInfo3;
			ASSERT_GET_ITEM(pUserModalsInfo3, idx, pUserModalInfo3);

			ASSERT_GT_PROP_GET_ULONG(pUserModalInfo0, get_LockoutDuration, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserModalInfo0, get_LockoutObservationWindow, 0);
			ASSERT_GT_PROP_GET_ULONG(pUserModalInfo0, get_Threshold, 0);
		}
}