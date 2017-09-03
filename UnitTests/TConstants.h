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
const _bstr_t PAR_EMPTY(L"");

