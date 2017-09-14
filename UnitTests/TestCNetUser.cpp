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
	ASSERT_UINF_NAME(pUserInfo0);
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
	ASSERT_UINF_NAME(pUserInfo1);
	ASSERT_UINF_PWD(pUserInfo1);
	ASSERT_UINF_PWDAGE(pUserInfo1);
	ASSERT_UINF_PRIV(pUserInfo1);
	ASSERT_UINF_HOMEDIR(pUserInfo1);
	ASSERT_UINF_COMNT(pUserInfo1);
	ASSERT_UINF_FLGS(pUserInfo1);
	ASSERT_UINF_SCRPTPATH(pUserInfo1);
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
	ASSERT_UINF_NAME(pUserInfo2);
	ASSERT_UINF_PWD(pUserInfo2);
	ASSERT_UINF_PWDAGE(pUserInfo2);
	ASSERT_UINF_PRIV(pUserInfo2);
	ASSERT_UINF_HOMEDIR(pUserInfo2);
	ASSERT_UINF_COMNT(pUserInfo2);
	ASSERT_UINF_FLGS(pUserInfo2);
	ASSERT_UINF_SCRPTPATH(pUserInfo2);
	ASSERT_UINF_AUTHFLGS(pUserInfo2);
	ASSERT_UINF_FULLNAME(pUserInfo2);
	ASSERT_UINF_USRCMNT(pUserInfo2);
	ASSERT_UINF_PARAMS(pUserInfo2);
	ASSERT_UINF_WRKSTATNS(pUserInfo2);
	ASSERT_UINF_LSTLOGON(pUserInfo2);
	ASSERT_UINF_LSTLOGOFF(pUserInfo2);
	ASSERT_UINF_ACCNTEXPRS(pUserInfo2);
	ASSERT_UINF_MAXSTRG(pUserInfo2);
	ASSERT_UINF_UNTSPWK(pUserInfo2);
	ASSERT_UINF_LOGONHRS(pUserInfo2);
	ASSERT_UINF_BADPWDCNT(pUserInfo2);
	ASSERT_UINF_NUMLOGONS(pUserInfo2);
	ASSERT_UINF_LOGONSRVR(pUserInfo2);
	ASSERT_UINF_CNTRYCDE(pUserInfo2);
	ASSERT_UINF_CDEPAGE(pUserInfo2);
	
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
	ASSERT_UINF_NAME(pUserInfo3);
	ASSERT_UINF_PWD(pUserInfo3);
	ASSERT_UINF_PWDAGE(pUserInfo3);
	ASSERT_UINF_PRIV(pUserInfo3);
	ASSERT_UINF_HOMEDIR(pUserInfo3);
	ASSERT_UINF_COMNT(pUserInfo3);
	ASSERT_UINF_FLGS(pUserInfo3);
	ASSERT_UINF_SCRPTPATH(pUserInfo3);
	ASSERT_UINF_AUTHFLGS(pUserInfo3);
	ASSERT_UINF_FULLNAME(pUserInfo3);
	ASSERT_UINF_USRCMNT(pUserInfo3);
	ASSERT_UINF_PARAMS(pUserInfo3);
	ASSERT_UINF_WRKSTATNS(pUserInfo3);
	ASSERT_UINF_LSTLOGON(pUserInfo3);
	ASSERT_UINF_LSTLOGOFF(pUserInfo3);
	ASSERT_UINF_ACCNTEXPRS(pUserInfo3);
	ASSERT_UINF_MAXSTRG(pUserInfo3);
	ASSERT_UINF_UNTSPWK(pUserInfo3);
	ASSERT_UINF_LOGONHRS(pUserInfo3);
	ASSERT_UINF_BADPWDCNT(pUserInfo3);
	ASSERT_UINF_NUMLOGONS(pUserInfo3);
	ASSERT_UINF_LOGONSRVR(pUserInfo3);
	ASSERT_UINF_CNTRYCDE(pUserInfo3);
	ASSERT_UINF_CDEPAGE(pUserInfo3);
	ASSERT_UINF_USRID(pUserInfo3);
	ASSERT_UINF_PRMGRPID(pUserInfo3);
	ASSERT_UINF_PRFL(pUserInfo3);
	ASSERT_UINF_HOMEDIRDRV(pUserInfo3);
	ASSERT_UINF_PWDEXPRD(pUserInfo3);

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
	ASSERT_UINF_NAME(pUserInfo4);
	ASSERT_UINF_PWD(pUserInfo4);
	ASSERT_UINF_PWDAGE(pUserInfo4);
	ASSERT_UINF_PRIV(pUserInfo4);
	ASSERT_UINF_HOMEDIR(pUserInfo4);
	ASSERT_UINF_COMNT(pUserInfo4);
	ASSERT_UINF_FLGS(pUserInfo4);
	ASSERT_UINF_SCRPTPATH(pUserInfo4);
	ASSERT_UINF_AUTHFLGS(pUserInfo4);
	ASSERT_UINF_FULLNAME(pUserInfo4);
	ASSERT_UINF_USRCMNT(pUserInfo4);
	ASSERT_UINF_PARAMS(pUserInfo4);
	ASSERT_UINF_WRKSTATNS(pUserInfo4);
	ASSERT_UINF_LSTLOGON(pUserInfo4);
	ASSERT_UINF_LSTLOGOFF(pUserInfo4);
	ASSERT_UINF_ACCNTEXPRS(pUserInfo4);
	ASSERT_UINF_MAXSTRG(pUserInfo4);
	ASSERT_UINF_UNTSPWK(pUserInfo4);
	ASSERT_UINF_LOGONHRS(pUserInfo4);
	ASSERT_UINF_BADPWDCNT(pUserInfo4);
	ASSERT_UINF_NUMLOGONS(pUserInfo4);
	ASSERT_UINF_LOGONSRVR(pUserInfo4);
	ASSERT_UINF_CNTRYCDE(pUserInfo4);
	ASSERT_UINF_CDEPAGE(pUserInfo4);
	ASSERT_UINF_USRSID(pUserInfo4);
	ASSERT_UINF_PRMGRPID(pUserInfo4);
	ASSERT_UINF_PRFL(pUserInfo4);
	ASSERT_UINF_HOMEDIRDRV(pUserInfo4);
	ASSERT_UINF_PWDEXPRD(pUserInfo4);

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
	ASSERT_UINF_NAME(pUserInfo10);
	ASSERT_UINF_COMNT(pUserInfo10);
	ASSERT_UINF_USRCMNT(pUserInfo10);
	ASSERT_UINF_FULLNAME(pUserInfo10);
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
	ASSERT_UINF_NAME(pUserInfo11);
	ASSERT_UINF_COMNT(pUserInfo11);
	ASSERT_UINF_USRCMNT(pUserInfo11);
	ASSERT_UINF_FULLNAME(pUserInfo11);
	ASSERT_UINF_PRIV(pUserInfo11);
	ASSERT_UINF_AUTHFLGS(pUserInfo11);
	ASSERT_UINF_PWDAGE(pUserInfo11);
	ASSERT_UINF_HOMEDIR(pUserInfo11);
	ASSERT_UINF_PARAMS(pUserInfo11);
	ASSERT_UINF_LSTLOGON(pUserInfo11);
	ASSERT_UINF_LSTLOGOFF(pUserInfo11);
	ASSERT_UINF_BADPWDCNT(pUserInfo11);
	ASSERT_UINF_NUMLOGONS(pUserInfo11);
	ASSERT_UINF_LOGONSRVR(pUserInfo11);
	ASSERT_UINF_CNTRYCDE(pUserInfo11);
	ASSERT_UINF_WRKSTATNS(pUserInfo11);
	ASSERT_UINF_MAXSTRG(pUserInfo11);
	ASSERT_UINF_UNTSPWK(pUserInfo11);
	ASSERT_UINF_LOGONHRS(pUserInfo11);
	ASSERT_UINF_CDEPAGE(pUserInfo11);
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
	ASSERT_UINF_NAME(pUserInfo20);
	ASSERT_UINF_FULLNAME(pUserInfo20);
	ASSERT_UINF_COMNT(pUserInfo20);
	ASSERT_UINF_FLGS(pUserInfo20);
	ASSERT_UINF_USRID(pUserInfo20);
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
	ASSERT_UINF_PWD(pUserInfo21);
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
	ASSERT_UINF_NAME(pUserInfo22);
	ASSERT_UINF_PWD(pUserInfo22);
	ASSERT_UINF_PWDAGE(pUserInfo22);
	ASSERT_UINF_PRIV(pUserInfo22);
	ASSERT_UINF_HOMEDIR(pUserInfo22);
	ASSERT_UINF_COMNT(pUserInfo22);
	ASSERT_UINF_FLGS(pUserInfo22);
	ASSERT_UINF_SCRPTPATH(pUserInfo22);
	ASSERT_UINF_AUTHFLGS(pUserInfo22);
	ASSERT_UINF_FULLNAME(pUserInfo22);
	ASSERT_UINF_USRCMNT(pUserInfo22);
	ASSERT_UINF_PARAMS(pUserInfo22);
	ASSERT_UINF_WRKSTATNS(pUserInfo22);
	ASSERT_UINF_LSTLOGON(pUserInfo22);
	ASSERT_UINF_LSTLOGOFF(pUserInfo22);
	ASSERT_UINF_ACCNTEXPRS(pUserInfo22);
	ASSERT_UINF_MAXSTRG(pUserInfo22);
	ASSERT_UINF_UNTSPWK(pUserInfo22);
	ASSERT_UINF_LOGONHRS(pUserInfo22);
	ASSERT_UINF_BADPWDCNT(pUserInfo22);
	ASSERT_UINF_NUMLOGONS(pUserInfo22);
	ASSERT_UINF_LOGONSRVR(pUserInfo22);
	ASSERT_UINF_CNTRYCDE(pUserInfo22);
	ASSERT_UINF_CDEPAGE(pUserInfo22);
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
	ASSERT_UINF_NAME(pUserInfo23);
	ASSERT_UINF_FULLNAME(pUserInfo23);
	ASSERT_UINF_COMNT(pUserInfo23);
	ASSERT_UINF_FLGS(pUserInfo23);
	ASSERT_UINF_USRSID(pUserInfo23);
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
	ASSERT_UINF_INTRID(pUserInfo24);
	ASSERT_UINF_FLGS(pUserInfo24);
	ASSERT_UINF_INTRPROVNAME(pUserInfo24);
	ASSERT_UINF_INTRPRINCNAME(pUserInfo24);
	ASSERT_UINF_USRSID(pUserInfo24);
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
	ASSERT_UINF_PWD(pUserInfo1003);
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
	ASSERT_UINF_PRIV(pUserInfo1005);
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
	ASSERT_UINF_HOMEDIR(pUserInfo1006);
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
	ASSERT_UINF_COMNT(pUserInfo1007);
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
	ASSERT_UINF_FLGS(pUserInfo1008);
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
	ASSERT_UINF_SCRPTPATH(pUserInfo1009);
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
	ASSERT_UINF_AUTHFLGS(pUserInfo1010);
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
	ASSERT_UINF_FULLNAME(pUserInfo1011);
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
	ASSERT_UINF_USRCMNT(pUserInfo1012);
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
	ASSERT_UINF_PARAMS(pUserInfo1013);
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
	ASSERT_UINF_WRKSTATNS(pUserInfo1014);
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
	ASSERT_UINF_ACCNTEXPRS(pUserInfo1017);
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
	ASSERT_UINF_MAXSTRG(pUserInfo1018);
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
	ASSERT_UINF_UNTSPWK(pUserInfo1020);
	ASSERT_UINF_LOGONHRS(pUserInfo1020);
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
	ASSERT_UINF_LOGONSRVR(pUserInfo1023);
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
	ASSERT_UINF_CNTRYCDE(pUserInfo1024);
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
	ASSERT_UINF_CDEPAGE(pUserInfo1025);
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
	ASSERT_UINF_PRMGRPID(pUserInfo1051);
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
	ASSERT_UINF_PRFL(pUserInfo1052);
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
	ASSERT_UINF_HOMEDIRDRV(pUserInfo1053);
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