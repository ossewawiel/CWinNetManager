#pragma once
#include "stdafx.h"

#define ASSERT_UINF_NAME(uinfObject) \
	_bstr_t bsName(L"*"); \
	ASSERT_FALSE(##uinfObject->get_Name(bsName.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_NAME, bsName);

#define ASSERT_UINF_PWD(uinfObject) \
	_bstr_t bsPwd(L"*"); \
	ASSERT_FALSE(##uinfObject->get_Password(bsPwd.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_PWD, bsPwd);

#define ASSERT_UINF_PWDAGE(uinfObject) \
	ULONG ulPwdAge(1); \
	ASSERT_FALSE(##uinfObject->get_PasswordAge(&ulPwdAge)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_PWDAGE, ulPwdAge);

#define ASSERT_UINF_PRIV(uinfObject) \
	ULONG ulPriv(0); \
	ASSERT_FALSE(##uinfObject->get_Privilege(&ulPriv)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_PRIV, ulPriv);

#define ASSERT_UINF_HOMEDIR(uinfObject) \
	_bstr_t bsHomeDir(L""); \
	ASSERT_FALSE(##uinfObject->get_HomeDirectory(bsHomeDir.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_HOMEDIR, bsHomeDir);

#define ASSERT_UINF_COMNT(uinfObject) \
	_bstr_t bsCmnt(L"*"); \
	ASSERT_FALSE(##uinfObject->get_Comment(bsCmnt.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_COMNT, bsCmnt);

#define ASSERT_UINF_FLGS(uinfObject) \
	ULONG ulFlgs(0); \
	ASSERT_FALSE(##uinfObject->get_Flags(&ulFlgs)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_FLGS, ulFlgs);

#define ASSERT_UINF_SCRPTPATH(uinfObject) \
	_bstr_t bsScrptPath(L"*"); \
	ASSERT_FALSE(##uinfObject->get_ScriptPath(bsScrptPath.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_SCRPATH, bsScrptPath);

#define ASSERT_UINF_AUTHFLGS(uinfObject) \
	ULONG ulAuthFlgs(1); \
	ASSERT_FALSE(##uinfObject->get_AuthFlags(&ulAuthFlgs)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_AUTHFLAGS, ulAuthFlgs);

#define ASSERT_UINF_FULLNAME(uinfObject) \
	_bstr_t bsFullName(L"*"); \
	ASSERT_FALSE(##uinfObject->get_FullName(bsFullName.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_FULLNAME, bsFullName);

#define ASSERT_UINF_USRCMNT(uinfObject) \
	_bstr_t bsUsrCmnt(L"*"); \
	ASSERT_FALSE(##uinfObject->get_UsrComment(bsUsrCmnt.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_USRCOMMENT, bsUsrCmnt);

#define ASSERT_UINF_PARAMS(uinfObject) \
	_bstr_t bsParams(L"*"); \
	ASSERT_FALSE(##uinfObject->get_Params(bsParams.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_PARAMS, bsParams);

#define ASSERT_UINF_WRKSTATNS(uinfObject) \
	_bstr_t bsWrkStatns(L"*"); \
	ASSERT_FALSE(##uinfObject->get_Workstations(bsWrkStatns.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_WORKSTATIONS, bsWrkStatns);

#define ASSERT_UINF_LSTLOGON(uinfObject) \
	ULONG ulLstLogon(1); \
	ASSERT_FALSE(##uinfObject->get_LastLogon(&ulLstLogon)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_LASTLOGON, ulLstLogon);

#define ASSERT_UINF_LSTLOGOFF(uinfObject) \
	ULONG ulLstLogoff(1); \
	ASSERT_FALSE(##uinfObject->get_LastLogoff(&ulLstLogoff)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_LASTLOGOFF, ulLstLogoff);

#define ASSERT_UINF_ACCNTEXPRS(uinfObject) \
	ULONG ulAccntExprs(1); \
	ASSERT_FALSE(##uinfObject->get_AccntExpires(&ulAccntExprs)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_ACCNTEXPIRES, ulAccntExprs);

#define ASSERT_UINF_MAXSTRG(uinfObject) \
	ULONG ulMaxStrg(1); \
	ASSERT_FALSE(##uinfObject->get_MaxStorage(&ulMaxStrg)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_MAXSTORAGE, ulMaxStrg);

#define ASSERT_UINF_UNTSPWK(uinfObject) \
	ULONG ulUntsPWk(1); \
	ASSERT_FALSE(##uinfObject->get_UnitsPerWeek(&ulUntsPWk)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_UNITSPERWEEK, ulUntsPWk);

#define ASSERT_UINF_LOGONHRS(uinfObject) \
	BYTE ulLogonHrs(1); \
	ASSERT_FALSE(##uinfObject->get_LogonHours(&ulLogonHrs)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_LOGONHOURS, ulLogonHrs);

#define ASSERT_UINF_BADPWDCNT(uinfObject) \
	ULONG ulBadPwdCnt(1); \
	ASSERT_FALSE(##uinfObject->get_BadPwdCount(&ulBadPwdCnt)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_BADPWDCOUNT, ulBadPwdCnt);

#define ASSERT_UINF_NUMLOGONS(uinfObject) \
	ULONG ulNumLogons(1); \
	ASSERT_FALSE(##uinfObject->get_NumLogons(&ulNumLogons)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_NUMLOGONS, ulNumLogons);

#define ASSERT_UINF_LOGONSRVR(uinfObject) \
	_bstr_t bsLogonSrvr(L"*"); \
	ASSERT_FALSE(##uinfObject->get_LogonServer(bsLogonSrvr.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_LOGONSERVER, bsLogonSrvr);

#define ASSERT_UINF_CNTRYCDE(uinfObject) \
	ULONG ulCntryCde(1); \
	ASSERT_FALSE(##uinfObject->get_CountryCode(&ulCntryCde)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_COUNTRYCODE, ulCntryCde);

#define ASSERT_UINF_CDEPAGE(uinfObject) \
	ULONG ulCdePage(1); \
	ASSERT_FALSE(##uinfObject->get_CodePage(&ulCdePage)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_CODEPAGE, ulCdePage);

#define ASSERT_UINF_USRID(uinfObject) \
	ULONG ulUsrId(1); \
	ASSERT_FALSE(##uinfObject->get_UserId(&ulUsrId)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_USERID, ulUsrId);

#define ASSERT_UINF_USRSID(uinfObject) \
	_bstr_t bsUsrSid(L"*"); \
	ASSERT_FALSE(##uinfObject->get_UserSid(bsUsrSid.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_USERSID, bsUsrSid);

#define ASSERT_UINF_PRMGRPID(uinfObject) \
	ULONG ulPrmGrpId(1); \
	ASSERT_FALSE(##uinfObject->get_PrimaryGrpId(&ulPrmGrpId)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_PRIMGRPID, ulPrmGrpId);

#define ASSERT_UINF_PRFL(uinfObject) \
	_bstr_t bsPrfl(L"*"); \
	ASSERT_FALSE(##uinfObject->get_Profile(bsPrfl.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_PRFL, bsPrfl);

#define ASSERT_UINF_HOMEDIRDRV(uinfObject) \
	_bstr_t bsHomeDirDrv(L"*"); \
	ASSERT_FALSE(##uinfObject->get_HomeDirDrive(bsHomeDirDrv.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_HOMEDIRDRV, bsHomeDirDrv);

#define ASSERT_UINF_PWDEXPRD(uinfObject) \
	ULONG ulPwdExprd(1); \
	ASSERT_FALSE(##uinfObject->get_PwdExpired(&ulPwdExprd)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_PWDEXPIRED, ulPwdExprd);

#define ASSERT_UINF_INTRID(uinfObject) \
	SHORT shIntrId(1); \
	ASSERT_FALSE(##uinfObject->get_InternetIdentity(&shIntrId)) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_INTRNETID, shIntrId);

#define ASSERT_UINF_INTRPROVNAME(uinfObject) \
	_bstr_t bsIntrProvName(L"*"); \
	ASSERT_FALSE(##uinfObject->get_InternetProviderName(bsIntrProvName.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_INTRNETPROVNAME, bsIntrProvName);

#define ASSERT_UINF_INTRPRINCNAME(uinfObject) \
	_bstr_t bsIntrPrincName(L"*"); \
	ASSERT_FALSE(##uinfObject->get_InternetPrincipleName(bsIntrPrincName.GetAddress())) \
	<< TUtils::GetLastErrorAsString(hr); \
	ASSERT_EQ(PAR_UINF_INTRNETPRNCPLNAME, bsIntrPrincName);

namespace TUtils
{
	static _bstr_t GetLastErrorAsString(HRESULT hr)
	{
		// Thanks Jamin Grey
		// https://stackoverflow.com/questions/1387064/how-to-get-the-error-message-from-the-error-code-returned-by-getlasterror
		// Get the error message, if any.
		DWORD errorMessageID = ::GetLastError();
		if (errorMessageID == 0)
		{
			_com_error err(hr);
			return err.ErrorMessage(); //No error message has been recorded
		}

		LPSTR messageBuffer = nullptr;
		size_t size = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
			NULL, errorMessageID, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)&messageBuffer, 0, NULL);

		_bstr_t message(messageBuffer);

		//Free the buffer.
		LocalFree(messageBuffer);

		return message;
	}

	//static void ASSERT_USRINF_NAME()
}


