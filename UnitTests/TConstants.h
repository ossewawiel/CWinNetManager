#pragma once
#include "stdafx.h"

const _bstr_t PAR_UNK_SRV_NAME(L"UnknownServer");

/// USER INFO CONSTANTS
///////////////////////////////////////////////////////////////////////////////
const _bstr_t	PAR_UINF_NAME(L"TestUserName");
const _bstr_t	PAR_UINF_NAME_ALT(L"TestUserNameALt");
const _bstr_t	PAR_UINF_PWD(L"TestPassword");
const _bstr_t	PAR_UINF_PWD_ALT(L"TestPasswordAlt");
const ULONG		PAR_UINF_PRIV(USER_PRIV_USER);
const ULONG		PAR_UINF_PRIV_ALT(USER_PRIV_ADMIN);
const _bstr_t	PAR_UINF_HOMEDIR(L"TestHomeDirectory");
const _bstr_t	PAR_UINF_HOMEDIR_ALT(L"TestHomeDirectoryAlt");
const _bstr_t	PAR_UINF_COMNT(L"TestComment");
const _bstr_t	PAR_UINF_COMNT_ALT(L"TestCommentAlt");
const ULONG		PAR_UINF_FLGS(UF_SCRIPT);
const ULONG		PAR_UINF_FLGS_ALT(UF_SCRIPT | UF_ACCOUNTDISABLE);
const _bstr_t	PAR_UINF_SCRPATH(L"TestPath");
const _bstr_t	PAR_UINF_SCRPATH_ALT(L"TestPathAlt");
const ULONG		PAR_UINF_AUTHFLGS_ALT(AF_OP_PRINT);
const _bstr_t	PAR_UINF_FULLNAME(L"FullName");
const _bstr_t	PAR_UINF_FULLNAME_ALT(L"FullNameAlt");
const _bstr_t	PAR_UINF_USRCOMMENT(L"UserComment");
const _bstr_t	PAR_UINF_USRCOMMENT_ALT(L"UserCommentAlt");
const _bstr_t	PAR_UINF_PARAMS(L"Parameters");
const _bstr_t	PAR_UINF_PARAMS_ALT(L"ParametersAlt");
const _bstr_t	PAR_UINF_WORKSTATIONS(L"Workstations");
const _bstr_t	PAR_UINF_WORKSTATIONS_ALT(L"WorkstationsAlt");
const ULONG		PAR_UINF_ACCNTEXPIRES(TIMEQ_FOREVER);
const ULONG		PAR_UINF_ACCNTEXPIRES_ALT(123456);
const ULONG		PAR_UINF_MAXSTORAGE(USER_MAXSTORAGE_UNLIMITED);
const ULONG		PAR_UINF_MAXSTORAGE_ALT(1234);
const BYTE		PAR_UINF_LOGONHOURS(NULL);
const ULONG		PAR_UINF_COUNTRYCODE(2);
const ULONG		PAR_UINF_COUNTRYCODE_ALT(3);
const ULONG		PAR_UINF_CODEPAGE(3);
const ULONG		PAR_UINF_CODEPAGE_ALT(4);
const ULONG		PAR_UINF_PRIMGRPID(DOMAIN_GROUP_RID_USERS);
const ULONG		PAR_UINF_PRIMGRPID_ALT(DOMAIN_GROUP_RID_USERS);
const _bstr_t	PAR_UINF_PRFL(L"ProfilePath");
const _bstr_t	PAR_UINF_PRFL_ALT(L"ProfilePathAlt");
const _bstr_t	PAR_UINF_HOMEDIRDRV(L"C");
const _bstr_t	PAR_UINF_HOMEDIRDRV_ALT(L"D");
const ULONG		PAR_UINF_AUTHFLAGS(0);
const ULONG		PAR_UINF_PWDAGE(0);
const ULONG		PAR_UINF_LASTLOGON(0);
const ULONG		PAR_UINF_LASTLOGOFF(0);
const ULONG		PAR_UINF_BADPWDCOUNT(0);
const ULONG		PAR_UINF_NUMLOGONS(0);
const _bstr_t	PAR_UINF_LOGONSERVER(L"\\\\*");
const ULONG		PAR_UINF_UNITSPERWEEK(0);
const _bstr_t	PAR_UINF_USERSID(L"");
const ULONG		PAR_UINF_PWDEXPIRED(0);
const ULONG		PAR_UINF_USERID(0);
const SHORT		PAR_UINF_INTRNETID(true);
const _bstr_t	PAR_UINF_INTRNETPROVNAME(L"TestInternetProviderName");
const _bstr_t	PAR_UINF_INTRNETPRNCPLNAME(L"TestInternetPrincipleName");
const _bstr_t	PAR_EMPTY(L"");
const _bstr_t	PAR_NOT_EMPTY(L"***");
const ULONG		PAR_NOT_ZERO(50);
const BYTE		PAR_NOT_NULLBYTE(3);
const ULONG		PAR_ZERO(0);
CONST ULONG		PAR_UMINF_MAXPWDAGE(TIMEQ_FOREVER);
CONST ULONG		PAR_UMINFFORCELOGOFF(TIMEQ_FOREVER);

