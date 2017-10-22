#include "TestCNetUser.h"

// WHEN_CALLING_NETUSERMODALSSET_WITH_USERMODALSINFO0_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserModalsSet with UserModalsInfo0 no exception should be returned.
TEST_F(TestCNetUser_ModalsSet, when_calling_netusermodalsset_with_usermodalsinfo0_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo0> pUserModalsInfo0;
	CUSTOM_ASSERT_SET;
	ASSERT_MODALS_GET(mpCNetUser, 0, pUserModalsInfo0);

	ASSERT_EGT_PROP_GET_ULONG(pUserModalsInfo0, get_MinPwdLen, 0);
	ASSERT_GT_PROP_GET_ULONG(pUserModalsInfo0, get_MaxPwdAge, 0);
	ASSERT_EGT_PROP_GET_ULONG(pUserModalsInfo0, get_MinPwdAge, 0);
	ASSERT_GT_PROP_GET_ULONG(pUserModalsInfo0, get_ForceLogoff, 0);
	ASSERT_EGT_PROP_GET_ULONG(pUserModalsInfo0, get_PwdHistLen, 0);

}