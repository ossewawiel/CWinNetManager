#include "TestCNetUserModals.h"

// WHEN_CALLING_NETUSERMODALSSET_WITH_USERMODALSINFO0_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserModalsSet with UserModalsInfo0 no exception should be returned.
TEST_F(TestCNetUserModals_Set, when_calling_netusermodalsset_with_usermodalsinfo0_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo0> pUserModalsInfo0;
	HRESULT hr(S_OK);
	AssertNetUserModals::NetUserModalsGet0(mpCNetUserModals, &pUserModalsInfo0);
	AssertNetUserModals::NetUserModalsSet<ICUserModalsInfo0>(mpCNetUserModals, eUserModalsInfoType::umiType0, pUserModalsInfo0);
}
// WHEN_CALLING_NETUSERMODALSSET_WITH_USERMODALSINFO1_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserModalsSet with UserModalsInfo1 no exception should be returned.
TEST_F(TestCNetUserModals_Set, when_calling_netusermodalsset_with_usermodalsinfo1_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo1> pUserModalsInfo1;
	HRESULT hr(S_OK);
	AssertNetUserModals::NetUserModalsGet1(mpCNetUserModals, &pUserModalsInfo1);
	AssertNetUserModals::NetUserModalsSet<ICUserModalsInfo1>(mpCNetUserModals, eUserModalsInfoType::umiType1, pUserModalsInfo1);
}

// WHEN_CALLING_NETUSERMODALSSET_WITH_USERMODALSINFO2_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserModalsSet with UserModalsInfo2 no exception should be returned.
TEST_F(TestCNetUserModals_Set, when_calling_netusermodalsset_with_usermodalsinfo2_then_return_no_exception)
{
	//CComPtr<ICUserModalsInfo2> pUserModalsInfo2;
	//HRESULT hr(S_OK);
	//AssertNetUserModals::NetUserModalsGet2(mpCNetUserModals, &pUserModalsInfo2);
	//AssertNetUserModals::NetUserModalsSet<ICUserModalsInfo2>(mpCNetUserModals, eUserModalsInfoType::umiType2, pUserModalsInfo2);
}

// WHEN_CALLING_NETUSERMODALSSET_WITH_USERMODALSINFO3_THEN_RETURN_NO_EXCEPTION
///////////////////////////////////////////////////////////////////////////////
/// When calling NetUserModalsSet with UserModalsInfo3 no exception should be returned.
TEST_F(TestCNetUserModals_Set, when_calling_netusermodalsset_with_usermodalsinfo3_then_return_no_exception)
{
	CComPtr<ICUserModalsInfo3> pUserModalsInfo3;
	HRESULT hr(S_OK);
	AssertNetUserModals::NetUserModalsGet3(mpCNetUserModals, &pUserModalsInfo3);
	AssertNetUserModals::NetUserModalsSet<ICUserModalsInfo3>(mpCNetUserModals, eUserModalsInfoType::umiType3, pUserModalsInfo3);
}

