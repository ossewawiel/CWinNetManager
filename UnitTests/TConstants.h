#pragma once
#include "stdafx.h"

const _bstr_t PAR_UNK_SRV_NAME(L"UnknownServer");

/// USER INFO CONSTANTS
///////////////////////////////////////////////////////////////////////////////
const _bstr_t	PAR_UINF_NAME(L"TestUserName");
const _bstr_t	PAR_UINF_PWD(L"TestPassword");
const ULONG		PAR_UINF_PRIV(USER_PRIV_USER);
const _bstr_t	PAR_UINF_HOMEDIR(L"TestHomeDirectory");
const _bstr_t	PAR_UINF_COMNT(L"TestComment");
const ULONG		PAR_UINF_FLGS(UF_SCRIPT);
const _bstr_t	PAR_UINF_SCRPATH(L"TestPath");
const _bstr_t	PAR_UINF_FULLNAME(L"FullName");
const _bstr_t	PAR_UINF_USRCOMMENT(L"UserComment");
const _bstr_t	PAR_UINF_PARAMS(L"Parameters");
const _bstr_t	PAR_UINF_WORKSTATIONS(L"Workstations");
const ULONG		PAR_UINF_ACCNTEXPIRES(TIMEQ_FOREVER);
const ULONG		PAR_UINF_MAXSTORAGE(USER_MAXSTORAGE_UNLIMITED);
const BYTE		PAR_UINF_LOGONHOURS(NULL);
const ULONG		PAR_UINF_COUNTRYCODE(2);
const ULONG		PAR_UINF_CODEPAGE(3);
const ULONG		PAR_UINF_PRIMGRPID(DOMAIN_GROUP_RID_USERS);
const _bstr_t	PAR_UINF_PRFL(L"ProfilePath");
const _bstr_t	PAR_UINF_HOMEDIRDRV(L"C");
const ULONG		PAR_UINF_AUTHFLAGS(0);
const ULONG		PAR_UINF_PWDAGE(0);
const ULONG		PAR_UINF_LASTLOGON(0);
const ULONG		PAR_UINF_LASTLOGOFF(0);
const ULONG		PAR_UINF_BADPWDCOUNT(0);
const ULONG		PAR_UINF_NUMLOGONS(0);
const _bstr_t	PAR_UINF_LOGONSERVER(L"");
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

