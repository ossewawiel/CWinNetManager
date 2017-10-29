#include "TestCNetUserModals.h"

// WHEN_CALLING_NETUSERMODALSGET0_THEN_RETURN_USERMODALSINFO0_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserModalsGet0 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual properties should be a valid value
TEST_F(TestCNetUserModals_Get, when_calling_netusermodalsget0_then_return_usermodalsinfo0_no_exception)
{
	CComPtr<ICUserModalsInfo0> pUserModalsInfo0;
	AssertNetUserModals::NetUserModalsGet0(mpCNetUserModals, &pUserModalsInfo0);

	ASSERT_EGT_PROP_GET_ULONG(pUserModalsInfo0, get_MinPwdLen, 0);
	ASSERT_GT_PROP_GET_ULONG(pUserModalsInfo0, get_MaxPwdAge, 0);
	ASSERT_EGT_PROP_GET_ULONG(pUserModalsInfo0, get_MinPwdAge, 0);
	ASSERT_GT_PROP_GET_ULONG(pUserModalsInfo0, get_ForceLogoff, 0);
	ASSERT_EGT_PROP_GET_ULONG(pUserModalsInfo0, get_PwdHistLen, 0);

}

// WHEN_CALLING_NETUSERMODALSGET1_THEN_RETURN_USERMODALSINFO1_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserModalsGet1 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual properties should be a valid value
TEST_F(TestCNetUserModals_Get, when_calling_netusermodalsget1_then_return_usermodalsinfo1_no_exception)
{
	CComPtr<ICUserModalsInfo1> pUserModalsInfo1;
	AssertNetUserModals::NetUserModalsGet1(mpCNetUserModals, &pUserModalsInfo1);

	ASSERT_GT_PROP_GET_ULONG(pUserModalsInfo1, get_Role, 0);
	ASSERT_LEGT_PROP_GET_BSTR(pUserModalsInfo1, get_Primary, 0);
}

// WHEN_CALLING_NETUSERMODALSGET2_THEN_RETURN_USERMODALSINFO2_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserModalsGet2 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual properties should be a valid value
TEST_F(TestCNetUserModals_Get, when_calling_netusermodalsget2_then_return_usermodalsinfo2_no_exception)
{
	CComPtr<ICUserModalsInfo2> pUserModalsInfo2;
	AssertNetUserModals::NetUserModalsGet2(mpCNetUserModals, &pUserModalsInfo2);

	ASSERT_LGT_PROP_GET_BSTR(pUserModalsInfo2, get_DomainName, 0);
	ASSERT_LGT_PROP_GET_BSTR(pUserModalsInfo2, get_DomainId, 0);
}

// WHEN_CALLING_NETUSERMODALSGET3_THEN_RETURN_USERMODALSINFO3_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserModalsGet3 no exception should be returned and the enum should 
/// have a count bigger than 0 and the individual properties should be a valid value
TEST_F(TestCNetUserModals_Get, when_calling_netusermodalsget3_then_return_usermodalsinfo3_no_exception)
{
	CComPtr<ICUserModalsInfo3> pUserModalsInfo3;
	AssertNetUserModals::NetUserModalsGet3(mpCNetUserModals, &pUserModalsInfo3);

	ASSERT_GT_PROP_GET_ULONG(pUserModalsInfo3, get_LockoutDuration, 0);
	ASSERT_GT_PROP_GET_ULONG(pUserModalsInfo3, get_LockoutObservationWindow, 0);
	ASSERT_EGT_PROP_GET_ULONG(pUserModalsInfo3, get_LockoutThreshold, 0);
}