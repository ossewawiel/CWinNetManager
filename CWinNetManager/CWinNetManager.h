

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Oct 16 08:15:32 2017
 */
/* Compiler settings for CWinNetManager.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __CWinNetManager_h__
#define __CWinNetManager_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICLogonHour_FWD_DEFINED__
#define __ICLogonHour_FWD_DEFINED__
typedef interface ICLogonHour ICLogonHour;

#endif 	/* __ICLogonHour_FWD_DEFINED__ */


#ifndef __ICLogonHours_FWD_DEFINED__
#define __ICLogonHours_FWD_DEFINED__
typedef interface ICLogonHours ICLogonHours;

#endif 	/* __ICLogonHours_FWD_DEFINED__ */


#ifndef __ICUserInfo0_FWD_DEFINED__
#define __ICUserInfo0_FWD_DEFINED__
typedef interface ICUserInfo0 ICUserInfo0;

#endif 	/* __ICUserInfo0_FWD_DEFINED__ */


#ifndef __ICUsersInfo0_FWD_DEFINED__
#define __ICUsersInfo0_FWD_DEFINED__
typedef interface ICUsersInfo0 ICUsersInfo0;

#endif 	/* __ICUsersInfo0_FWD_DEFINED__ */


#ifndef __ICUserInfo1_FWD_DEFINED__
#define __ICUserInfo1_FWD_DEFINED__
typedef interface ICUserInfo1 ICUserInfo1;

#endif 	/* __ICUserInfo1_FWD_DEFINED__ */


#ifndef __ICUserInfo2_FWD_DEFINED__
#define __ICUserInfo2_FWD_DEFINED__
typedef interface ICUserInfo2 ICUserInfo2;

#endif 	/* __ICUserInfo2_FWD_DEFINED__ */


#ifndef __ICUserInfo3_FWD_DEFINED__
#define __ICUserInfo3_FWD_DEFINED__
typedef interface ICUserInfo3 ICUserInfo3;

#endif 	/* __ICUserInfo3_FWD_DEFINED__ */


#ifndef __ICUserInfo4_FWD_DEFINED__
#define __ICUserInfo4_FWD_DEFINED__
typedef interface ICUserInfo4 ICUserInfo4;

#endif 	/* __ICUserInfo4_FWD_DEFINED__ */


#ifndef __ICUserInfo10_FWD_DEFINED__
#define __ICUserInfo10_FWD_DEFINED__
typedef interface ICUserInfo10 ICUserInfo10;

#endif 	/* __ICUserInfo10_FWD_DEFINED__ */


#ifndef __ICUserInfo11_FWD_DEFINED__
#define __ICUserInfo11_FWD_DEFINED__
typedef interface ICUserInfo11 ICUserInfo11;

#endif 	/* __ICUserInfo11_FWD_DEFINED__ */


#ifndef __ICUserInfo20_FWD_DEFINED__
#define __ICUserInfo20_FWD_DEFINED__
typedef interface ICUserInfo20 ICUserInfo20;

#endif 	/* __ICUserInfo20_FWD_DEFINED__ */


#ifndef __ICUserInfo21_FWD_DEFINED__
#define __ICUserInfo21_FWD_DEFINED__
typedef interface ICUserInfo21 ICUserInfo21;

#endif 	/* __ICUserInfo21_FWD_DEFINED__ */


#ifndef __ICUserInfo22_FWD_DEFINED__
#define __ICUserInfo22_FWD_DEFINED__
typedef interface ICUserInfo22 ICUserInfo22;

#endif 	/* __ICUserInfo22_FWD_DEFINED__ */


#ifndef __ICUserInfo23_FWD_DEFINED__
#define __ICUserInfo23_FWD_DEFINED__
typedef interface ICUserInfo23 ICUserInfo23;

#endif 	/* __ICUserInfo23_FWD_DEFINED__ */


#ifndef __ICUserInfo24_FWD_DEFINED__
#define __ICUserInfo24_FWD_DEFINED__
typedef interface ICUserInfo24 ICUserInfo24;

#endif 	/* __ICUserInfo24_FWD_DEFINED__ */


#ifndef __ICUserInfo1003_FWD_DEFINED__
#define __ICUserInfo1003_FWD_DEFINED__
typedef interface ICUserInfo1003 ICUserInfo1003;

#endif 	/* __ICUserInfo1003_FWD_DEFINED__ */


#ifndef __ICUserInfo1005_FWD_DEFINED__
#define __ICUserInfo1005_FWD_DEFINED__
typedef interface ICUserInfo1005 ICUserInfo1005;

#endif 	/* __ICUserInfo1005_FWD_DEFINED__ */


#ifndef __ICUserInfo1006_FWD_DEFINED__
#define __ICUserInfo1006_FWD_DEFINED__
typedef interface ICUserInfo1006 ICUserInfo1006;

#endif 	/* __ICUserInfo1006_FWD_DEFINED__ */


#ifndef __ICUserInfo1007_FWD_DEFINED__
#define __ICUserInfo1007_FWD_DEFINED__
typedef interface ICUserInfo1007 ICUserInfo1007;

#endif 	/* __ICUserInfo1007_FWD_DEFINED__ */


#ifndef __ICUserInfo1008_FWD_DEFINED__
#define __ICUserInfo1008_FWD_DEFINED__
typedef interface ICUserInfo1008 ICUserInfo1008;

#endif 	/* __ICUserInfo1008_FWD_DEFINED__ */


#ifndef __ICUserInfo1009_FWD_DEFINED__
#define __ICUserInfo1009_FWD_DEFINED__
typedef interface ICUserInfo1009 ICUserInfo1009;

#endif 	/* __ICUserInfo1009_FWD_DEFINED__ */


#ifndef __ICUserInfo1010_FWD_DEFINED__
#define __ICUserInfo1010_FWD_DEFINED__
typedef interface ICUserInfo1010 ICUserInfo1010;

#endif 	/* __ICUserInfo1010_FWD_DEFINED__ */


#ifndef __ICUserInfo1011_FWD_DEFINED__
#define __ICUserInfo1011_FWD_DEFINED__
typedef interface ICUserInfo1011 ICUserInfo1011;

#endif 	/* __ICUserInfo1011_FWD_DEFINED__ */


#ifndef __ICUserInfo1012_FWD_DEFINED__
#define __ICUserInfo1012_FWD_DEFINED__
typedef interface ICUserInfo1012 ICUserInfo1012;

#endif 	/* __ICUserInfo1012_FWD_DEFINED__ */


#ifndef __ICUserInfo1013_FWD_DEFINED__
#define __ICUserInfo1013_FWD_DEFINED__
typedef interface ICUserInfo1013 ICUserInfo1013;

#endif 	/* __ICUserInfo1013_FWD_DEFINED__ */


#ifndef __ICUserInfo1014_FWD_DEFINED__
#define __ICUserInfo1014_FWD_DEFINED__
typedef interface ICUserInfo1014 ICUserInfo1014;

#endif 	/* __ICUserInfo1014_FWD_DEFINED__ */


#ifndef __ICUserInfo1017_FWD_DEFINED__
#define __ICUserInfo1017_FWD_DEFINED__
typedef interface ICUserInfo1017 ICUserInfo1017;

#endif 	/* __ICUserInfo1017_FWD_DEFINED__ */


#ifndef __ICUserInfo1018_FWD_DEFINED__
#define __ICUserInfo1018_FWD_DEFINED__
typedef interface ICUserInfo1018 ICUserInfo1018;

#endif 	/* __ICUserInfo1018_FWD_DEFINED__ */


#ifndef __ICUserInfo1020_FWD_DEFINED__
#define __ICUserInfo1020_FWD_DEFINED__
typedef interface ICUserInfo1020 ICUserInfo1020;

#endif 	/* __ICUserInfo1020_FWD_DEFINED__ */


#ifndef __ICUserInfo1023_FWD_DEFINED__
#define __ICUserInfo1023_FWD_DEFINED__
typedef interface ICUserInfo1023 ICUserInfo1023;

#endif 	/* __ICUserInfo1023_FWD_DEFINED__ */


#ifndef __ICUserInfo1024_FWD_DEFINED__
#define __ICUserInfo1024_FWD_DEFINED__
typedef interface ICUserInfo1024 ICUserInfo1024;

#endif 	/* __ICUserInfo1024_FWD_DEFINED__ */


#ifndef __ICUserInfo1025_FWD_DEFINED__
#define __ICUserInfo1025_FWD_DEFINED__
typedef interface ICUserInfo1025 ICUserInfo1025;

#endif 	/* __ICUserInfo1025_FWD_DEFINED__ */


#ifndef __ICUserInfo1051_FWD_DEFINED__
#define __ICUserInfo1051_FWD_DEFINED__
typedef interface ICUserInfo1051 ICUserInfo1051;

#endif 	/* __ICUserInfo1051_FWD_DEFINED__ */


#ifndef __ICUserInfo1052_FWD_DEFINED__
#define __ICUserInfo1052_FWD_DEFINED__
typedef interface ICUserInfo1052 ICUserInfo1052;

#endif 	/* __ICUserInfo1052_FWD_DEFINED__ */


#ifndef __ICUserInfo1053_FWD_DEFINED__
#define __ICUserInfo1053_FWD_DEFINED__
typedef interface ICUserInfo1053 ICUserInfo1053;

#endif 	/* __ICUserInfo1053_FWD_DEFINED__ */


#ifndef __ICUsersInfo1_FWD_DEFINED__
#define __ICUsersInfo1_FWD_DEFINED__
typedef interface ICUsersInfo1 ICUsersInfo1;

#endif 	/* __ICUsersInfo1_FWD_DEFINED__ */


#ifndef __ICUsersInfo2_FWD_DEFINED__
#define __ICUsersInfo2_FWD_DEFINED__
typedef interface ICUsersInfo2 ICUsersInfo2;

#endif 	/* __ICUsersInfo2_FWD_DEFINED__ */


#ifndef __ICUsersInfo3_FWD_DEFINED__
#define __ICUsersInfo3_FWD_DEFINED__
typedef interface ICUsersInfo3 ICUsersInfo3;

#endif 	/* __ICUsersInfo3_FWD_DEFINED__ */


#ifndef __ICUsersInfo10_FWD_DEFINED__
#define __ICUsersInfo10_FWD_DEFINED__
typedef interface ICUsersInfo10 ICUsersInfo10;

#endif 	/* __ICUsersInfo10_FWD_DEFINED__ */


#ifndef __ICUsersInfo11_FWD_DEFINED__
#define __ICUsersInfo11_FWD_DEFINED__
typedef interface ICUsersInfo11 ICUsersInfo11;

#endif 	/* __ICUsersInfo11_FWD_DEFINED__ */


#ifndef __ICUsersInfo20_FWD_DEFINED__
#define __ICUsersInfo20_FWD_DEFINED__
typedef interface ICUsersInfo20 ICUsersInfo20;

#endif 	/* __ICUsersInfo20_FWD_DEFINED__ */


#ifndef __ICUsersInfo23_FWD_DEFINED__
#define __ICUsersInfo23_FWD_DEFINED__
typedef interface ICUsersInfo23 ICUsersInfo23;

#endif 	/* __ICUsersInfo23_FWD_DEFINED__ */


#ifndef __ICGroupUserInfo0_FWD_DEFINED__
#define __ICGroupUserInfo0_FWD_DEFINED__
typedef interface ICGroupUserInfo0 ICGroupUserInfo0;

#endif 	/* __ICGroupUserInfo0_FWD_DEFINED__ */


#ifndef __ICGroupsUserInfo0_FWD_DEFINED__
#define __ICGroupsUserInfo0_FWD_DEFINED__
typedef interface ICGroupsUserInfo0 ICGroupsUserInfo0;

#endif 	/* __ICGroupsUserInfo0_FWD_DEFINED__ */


#ifndef __ICGroupUserInfo1_FWD_DEFINED__
#define __ICGroupUserInfo1_FWD_DEFINED__
typedef interface ICGroupUserInfo1 ICGroupUserInfo1;

#endif 	/* __ICGroupUserInfo1_FWD_DEFINED__ */


#ifndef __ICGroupsUserInfo1_FWD_DEFINED__
#define __ICGroupsUserInfo1_FWD_DEFINED__
typedef interface ICGroupsUserInfo1 ICGroupsUserInfo1;

#endif 	/* __ICGroupsUserInfo1_FWD_DEFINED__ */


#ifndef __ICLocalGroupUserInfo0_FWD_DEFINED__
#define __ICLocalGroupUserInfo0_FWD_DEFINED__
typedef interface ICLocalGroupUserInfo0 ICLocalGroupUserInfo0;

#endif 	/* __ICLocalGroupUserInfo0_FWD_DEFINED__ */


#ifndef __ICLocalGroupsUserInfo0_FWD_DEFINED__
#define __ICLocalGroupsUserInfo0_FWD_DEFINED__
typedef interface ICLocalGroupsUserInfo0 ICLocalGroupsUserInfo0;

#endif 	/* __ICLocalGroupsUserInfo0_FWD_DEFINED__ */


#ifndef __ICNetUser_FWD_DEFINED__
#define __ICNetUser_FWD_DEFINED__
typedef interface ICNetUser ICNetUser;

#endif 	/* __ICNetUser_FWD_DEFINED__ */


#ifndef __CNetUser_FWD_DEFINED__
#define __CNetUser_FWD_DEFINED__

#ifdef __cplusplus
typedef class CNetUser CNetUser;
#else
typedef struct CNetUser CNetUser;
#endif /* __cplusplus */

#endif 	/* __CNetUser_FWD_DEFINED__ */


#ifndef __CUserInfo1_FWD_DEFINED__
#define __CUserInfo1_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1 CUserInfo1;
#else
typedef struct CUserInfo1 CUserInfo1;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1_FWD_DEFINED__ */


#ifndef __CUserInfo2_FWD_DEFINED__
#define __CUserInfo2_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo2 CUserInfo2;
#else
typedef struct CUserInfo2 CUserInfo2;
#endif /* __cplusplus */

#endif 	/* __CUserInfo2_FWD_DEFINED__ */


#ifndef __CUserInfo3_FWD_DEFINED__
#define __CUserInfo3_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo3 CUserInfo3;
#else
typedef struct CUserInfo3 CUserInfo3;
#endif /* __cplusplus */

#endif 	/* __CUserInfo3_FWD_DEFINED__ */


#ifndef __CUserInfo4_FWD_DEFINED__
#define __CUserInfo4_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo4 CUserInfo4;
#else
typedef struct CUserInfo4 CUserInfo4;
#endif /* __cplusplus */

#endif 	/* __CUserInfo4_FWD_DEFINED__ */


#ifndef __CUserInfo0_FWD_DEFINED__
#define __CUserInfo0_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo0 CUserInfo0;
#else
typedef struct CUserInfo0 CUserInfo0;
#endif /* __cplusplus */

#endif 	/* __CUserInfo0_FWD_DEFINED__ */


#ifndef __CUserInfo10_FWD_DEFINED__
#define __CUserInfo10_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo10 CUserInfo10;
#else
typedef struct CUserInfo10 CUserInfo10;
#endif /* __cplusplus */

#endif 	/* __CUserInfo10_FWD_DEFINED__ */


#ifndef __CUserInfo11_FWD_DEFINED__
#define __CUserInfo11_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo11 CUserInfo11;
#else
typedef struct CUserInfo11 CUserInfo11;
#endif /* __cplusplus */

#endif 	/* __CUserInfo11_FWD_DEFINED__ */


#ifndef __CUserInfo20_FWD_DEFINED__
#define __CUserInfo20_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo20 CUserInfo20;
#else
typedef struct CUserInfo20 CUserInfo20;
#endif /* __cplusplus */

#endif 	/* __CUserInfo20_FWD_DEFINED__ */


#ifndef __CUserInfo23_FWD_DEFINED__
#define __CUserInfo23_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo23 CUserInfo23;
#else
typedef struct CUserInfo23 CUserInfo23;
#endif /* __cplusplus */

#endif 	/* __CUserInfo23_FWD_DEFINED__ */


#ifndef __CUserInfo24_FWD_DEFINED__
#define __CUserInfo24_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo24 CUserInfo24;
#else
typedef struct CUserInfo24 CUserInfo24;
#endif /* __cplusplus */

#endif 	/* __CUserInfo24_FWD_DEFINED__ */


#ifndef __CUserInfo21_FWD_DEFINED__
#define __CUserInfo21_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo21 CUserInfo21;
#else
typedef struct CUserInfo21 CUserInfo21;
#endif /* __cplusplus */

#endif 	/* __CUserInfo21_FWD_DEFINED__ */


#ifndef __CUserInfo22_FWD_DEFINED__
#define __CUserInfo22_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo22 CUserInfo22;
#else
typedef struct CUserInfo22 CUserInfo22;
#endif /* __cplusplus */

#endif 	/* __CUserInfo22_FWD_DEFINED__ */


#ifndef __CUserInfo1003_FWD_DEFINED__
#define __CUserInfo1003_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1003 CUserInfo1003;
#else
typedef struct CUserInfo1003 CUserInfo1003;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1003_FWD_DEFINED__ */


#ifndef __CUserInfo1005_FWD_DEFINED__
#define __CUserInfo1005_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1005 CUserInfo1005;
#else
typedef struct CUserInfo1005 CUserInfo1005;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1005_FWD_DEFINED__ */


#ifndef __CUserInfo1006_FWD_DEFINED__
#define __CUserInfo1006_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1006 CUserInfo1006;
#else
typedef struct CUserInfo1006 CUserInfo1006;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1006_FWD_DEFINED__ */


#ifndef __CUserInfo1007_FWD_DEFINED__
#define __CUserInfo1007_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1007 CUserInfo1007;
#else
typedef struct CUserInfo1007 CUserInfo1007;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1007_FWD_DEFINED__ */


#ifndef __CUserInfo1008_FWD_DEFINED__
#define __CUserInfo1008_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1008 CUserInfo1008;
#else
typedef struct CUserInfo1008 CUserInfo1008;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1008_FWD_DEFINED__ */


#ifndef __CUserInfo1009_FWD_DEFINED__
#define __CUserInfo1009_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1009 CUserInfo1009;
#else
typedef struct CUserInfo1009 CUserInfo1009;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1009_FWD_DEFINED__ */


#ifndef __CUserInfo1010_FWD_DEFINED__
#define __CUserInfo1010_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1010 CUserInfo1010;
#else
typedef struct CUserInfo1010 CUserInfo1010;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1010_FWD_DEFINED__ */


#ifndef __CUserInfo1011_FWD_DEFINED__
#define __CUserInfo1011_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1011 CUserInfo1011;
#else
typedef struct CUserInfo1011 CUserInfo1011;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1011_FWD_DEFINED__ */


#ifndef __CUserInfo1012_FWD_DEFINED__
#define __CUserInfo1012_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1012 CUserInfo1012;
#else
typedef struct CUserInfo1012 CUserInfo1012;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1012_FWD_DEFINED__ */


#ifndef __CUserInfo1013_FWD_DEFINED__
#define __CUserInfo1013_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1013 CUserInfo1013;
#else
typedef struct CUserInfo1013 CUserInfo1013;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1013_FWD_DEFINED__ */


#ifndef __CUserInfo1014_FWD_DEFINED__
#define __CUserInfo1014_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1014 CUserInfo1014;
#else
typedef struct CUserInfo1014 CUserInfo1014;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1014_FWD_DEFINED__ */


#ifndef __CUserInfo1017_FWD_DEFINED__
#define __CUserInfo1017_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1017 CUserInfo1017;
#else
typedef struct CUserInfo1017 CUserInfo1017;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1017_FWD_DEFINED__ */


#ifndef __CUserInfo1018_FWD_DEFINED__
#define __CUserInfo1018_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1018 CUserInfo1018;
#else
typedef struct CUserInfo1018 CUserInfo1018;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1018_FWD_DEFINED__ */


#ifndef __CUserInfo1020_FWD_DEFINED__
#define __CUserInfo1020_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1020 CUserInfo1020;
#else
typedef struct CUserInfo1020 CUserInfo1020;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1020_FWD_DEFINED__ */


#ifndef __CUserInfo1023_FWD_DEFINED__
#define __CUserInfo1023_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1023 CUserInfo1023;
#else
typedef struct CUserInfo1023 CUserInfo1023;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1023_FWD_DEFINED__ */


#ifndef __CUserInfo1025_FWD_DEFINED__
#define __CUserInfo1025_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1025 CUserInfo1025;
#else
typedef struct CUserInfo1025 CUserInfo1025;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1025_FWD_DEFINED__ */


#ifndef __CUserInfo1024_FWD_DEFINED__
#define __CUserInfo1024_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1024 CUserInfo1024;
#else
typedef struct CUserInfo1024 CUserInfo1024;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1024_FWD_DEFINED__ */


#ifndef __CUserInfo1051_FWD_DEFINED__
#define __CUserInfo1051_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1051 CUserInfo1051;
#else
typedef struct CUserInfo1051 CUserInfo1051;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1051_FWD_DEFINED__ */


#ifndef __CUserInfo1052_FWD_DEFINED__
#define __CUserInfo1052_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1052 CUserInfo1052;
#else
typedef struct CUserInfo1052 CUserInfo1052;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1052_FWD_DEFINED__ */


#ifndef __CUserInfo1053_FWD_DEFINED__
#define __CUserInfo1053_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUserInfo1053 CUserInfo1053;
#else
typedef struct CUserInfo1053 CUserInfo1053;
#endif /* __cplusplus */

#endif 	/* __CUserInfo1053_FWD_DEFINED__ */


#ifndef __CLogonHour_FWD_DEFINED__
#define __CLogonHour_FWD_DEFINED__

#ifdef __cplusplus
typedef class CLogonHour CLogonHour;
#else
typedef struct CLogonHour CLogonHour;
#endif /* __cplusplus */

#endif 	/* __CLogonHour_FWD_DEFINED__ */


#ifndef __CLogonHours_FWD_DEFINED__
#define __CLogonHours_FWD_DEFINED__

#ifdef __cplusplus
typedef class CLogonHours CLogonHours;
#else
typedef struct CLogonHours CLogonHours;
#endif /* __cplusplus */

#endif 	/* __CLogonHours_FWD_DEFINED__ */


#ifndef __CUsersInfo0_FWD_DEFINED__
#define __CUsersInfo0_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUsersInfo0 CUsersInfo0;
#else
typedef struct CUsersInfo0 CUsersInfo0;
#endif /* __cplusplus */

#endif 	/* __CUsersInfo0_FWD_DEFINED__ */


#ifndef __CUsersInfo1_FWD_DEFINED__
#define __CUsersInfo1_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUsersInfo1 CUsersInfo1;
#else
typedef struct CUsersInfo1 CUsersInfo1;
#endif /* __cplusplus */

#endif 	/* __CUsersInfo1_FWD_DEFINED__ */


#ifndef __CUsersInfo2_FWD_DEFINED__
#define __CUsersInfo2_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUsersInfo2 CUsersInfo2;
#else
typedef struct CUsersInfo2 CUsersInfo2;
#endif /* __cplusplus */

#endif 	/* __CUsersInfo2_FWD_DEFINED__ */


#ifndef __CUsersInfo3_FWD_DEFINED__
#define __CUsersInfo3_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUsersInfo3 CUsersInfo3;
#else
typedef struct CUsersInfo3 CUsersInfo3;
#endif /* __cplusplus */

#endif 	/* __CUsersInfo3_FWD_DEFINED__ */


#ifndef __CUsersInfo10_FWD_DEFINED__
#define __CUsersInfo10_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUsersInfo10 CUsersInfo10;
#else
typedef struct CUsersInfo10 CUsersInfo10;
#endif /* __cplusplus */

#endif 	/* __CUsersInfo10_FWD_DEFINED__ */


#ifndef __CUsersInfo11_FWD_DEFINED__
#define __CUsersInfo11_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUsersInfo11 CUsersInfo11;
#else
typedef struct CUsersInfo11 CUsersInfo11;
#endif /* __cplusplus */

#endif 	/* __CUsersInfo11_FWD_DEFINED__ */


#ifndef __CUsersInfo20_FWD_DEFINED__
#define __CUsersInfo20_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUsersInfo20 CUsersInfo20;
#else
typedef struct CUsersInfo20 CUsersInfo20;
#endif /* __cplusplus */

#endif 	/* __CUsersInfo20_FWD_DEFINED__ */


#ifndef __CUsersInfo23_FWD_DEFINED__
#define __CUsersInfo23_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUsersInfo23 CUsersInfo23;
#else
typedef struct CUsersInfo23 CUsersInfo23;
#endif /* __cplusplus */

#endif 	/* __CUsersInfo23_FWD_DEFINED__ */


#ifndef __CGroupUserInfo0_FWD_DEFINED__
#define __CGroupUserInfo0_FWD_DEFINED__

#ifdef __cplusplus
typedef class CGroupUserInfo0 CGroupUserInfo0;
#else
typedef struct CGroupUserInfo0 CGroupUserInfo0;
#endif /* __cplusplus */

#endif 	/* __CGroupUserInfo0_FWD_DEFINED__ */


#ifndef __CGroupsUserInfo0_FWD_DEFINED__
#define __CGroupsUserInfo0_FWD_DEFINED__

#ifdef __cplusplus
typedef class CGroupsUserInfo0 CGroupsUserInfo0;
#else
typedef struct CGroupsUserInfo0 CGroupsUserInfo0;
#endif /* __cplusplus */

#endif 	/* __CGroupsUserInfo0_FWD_DEFINED__ */


#ifndef __CGroupUserInfo1_FWD_DEFINED__
#define __CGroupUserInfo1_FWD_DEFINED__

#ifdef __cplusplus
typedef class CGroupUserInfo1 CGroupUserInfo1;
#else
typedef struct CGroupUserInfo1 CGroupUserInfo1;
#endif /* __cplusplus */

#endif 	/* __CGroupUserInfo1_FWD_DEFINED__ */


#ifndef __CGroupsUserInfo1_FWD_DEFINED__
#define __CGroupsUserInfo1_FWD_DEFINED__

#ifdef __cplusplus
typedef class CGroupsUserInfo1 CGroupsUserInfo1;
#else
typedef struct CGroupsUserInfo1 CGroupsUserInfo1;
#endif /* __cplusplus */

#endif 	/* __CGroupsUserInfo1_FWD_DEFINED__ */


#ifndef __CLocalGroupsUserInfo0_FWD_DEFINED__
#define __CLocalGroupsUserInfo0_FWD_DEFINED__

#ifdef __cplusplus
typedef class CLocalGroupsUserInfo0 CLocalGroupsUserInfo0;
#else
typedef struct CLocalGroupsUserInfo0 CLocalGroupsUserInfo0;
#endif /* __cplusplus */

#endif 	/* __CLocalGroupsUserInfo0_FWD_DEFINED__ */


#ifndef __CLocalGroupUserInfo0_FWD_DEFINED__
#define __CLocalGroupUserInfo0_FWD_DEFINED__

#ifdef __cplusplus
typedef class CLocalGroupUserInfo0 CLocalGroupUserInfo0;
#else
typedef struct CLocalGroupUserInfo0 CLocalGroupUserInfo0;
#endif /* __cplusplus */

#endif 	/* __CLocalGroupUserInfo0_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_CWinNetManager_0000_0000 */
/* [local] */ 

typedef /* [v1_enum][public] */ 
enum eUserInfoType
    {
        uiType0	= 0,
        uiType1	= 0x1,
        uiType2	= 0x2,
        uiType3	= 0x3,
        uiType4	= 0x4,
        uiType10	= 0xa,
        uiType11	= 0xb,
        uiType20	= 0x14,
        uiType23	= 0x17,
        uiType24	= 0x18,
        uiType1003	= 0x3eb,
        uiType1005	= 0x3ed,
        uiType1006	= 0x3ee,
        uiType1007	= 0x3ef,
        uiType1008	= 0x3f0,
        uiType1009	= 0x3f1,
        uiType1010	= 0x3f2,
        uiType1011	= 0x3f3,
        uiType1012	= 0x3f4,
        uiType1013	= 0x3f5,
        uiType1014	= 0x3f6,
        uiType1017	= 0x3f9,
        uiType1018	= 0x3fa,
        uiType1020	= 0x3fc,
        uiType1023	= 0x3ff,
        uiType1024	= 0x400,
        uiType1025	= 0x401,
        uiType1051	= 0x41b,
        uiType1052	= 0x41c,
        uiType1053	= 0x41d
    } 	eUserInfoType;

typedef /* [v1_enum][public] */ 
enum eGroupUserInfoType
    {
        guiType0	= 0,
        guiType1	= 0x1
    } 	eGroupUserInfoType;

typedef /* [v1_enum][public] */ 
enum eLocalGroupUserInfoType
    {
        lguiType0	= 0
    } 	eLocalGroupUserInfoType;



extern RPC_IF_HANDLE __MIDL_itf_CWinNetManager_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_CWinNetManager_0000_0000_v0_0_s_ifspec;

#ifndef __ICLogonHour_INTERFACE_DEFINED__
#define __ICLogonHour_INTERFACE_DEFINED__

/* interface ICLogonHour */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICLogonHour;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FFB824F6-E615-4DCC-BCFC-4068E2B442F8")
    ICLogonHour : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ SHORT shDay,
            /* [in] */ SHORT shHour,
            /* [in] */ SHORT shActive) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Activate( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Deactivate( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Day( 
            /* [retval][out] */ SHORT *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Hour( 
            /* [retval][out] */ SHORT *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ SHORT *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICLogonHourVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICLogonHour * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICLogonHour * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICLogonHour * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICLogonHour * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICLogonHour * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICLogonHour * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICLogonHour * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICLogonHour * This,
            /* [in] */ SHORT shDay,
            /* [in] */ SHORT shHour,
            /* [in] */ SHORT shActive);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            ICLogonHour * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Deactivate )( 
            ICLogonHour * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Day )( 
            ICLogonHour * This,
            /* [retval][out] */ SHORT *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Hour )( 
            ICLogonHour * This,
            /* [retval][out] */ SHORT *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            ICLogonHour * This,
            /* [retval][out] */ SHORT *pVal);
        
        END_INTERFACE
    } ICLogonHourVtbl;

    interface ICLogonHour
    {
        CONST_VTBL struct ICLogonHourVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICLogonHour_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICLogonHour_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICLogonHour_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICLogonHour_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICLogonHour_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICLogonHour_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICLogonHour_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICLogonHour_Initialise(This,shDay,shHour,shActive)	\
    ( (This)->lpVtbl -> Initialise(This,shDay,shHour,shActive) ) 

#define ICLogonHour_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define ICLogonHour_Deactivate(This)	\
    ( (This)->lpVtbl -> Deactivate(This) ) 

#define ICLogonHour_get_Day(This,pVal)	\
    ( (This)->lpVtbl -> get_Day(This,pVal) ) 

#define ICLogonHour_get_Hour(This,pVal)	\
    ( (This)->lpVtbl -> get_Hour(This,pVal) ) 

#define ICLogonHour_get_State(This,pVal)	\
    ( (This)->lpVtbl -> get_State(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLogonHour_INTERFACE_DEFINED__ */


#ifndef __ICLogonHours_INTERFACE_DEFINED__
#define __ICLogonHours_INTERFACE_DEFINED__

/* interface ICLogonHours */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICLogonHours;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4DFC52BD-D969-4B4F-AC01-CA24EA013CD8")
    ICLogonHours : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearAll( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE InitialiseAllActive( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICLogonHour **ppLogonHour) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Item( 
            /* [in] */ long n,
            /* [in] */ ICLogonHour *pLogonHour) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ActivateLogonHour( 
            /* [in] */ SHORT shDay,
            /* [in] */ SHORT shHour) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeactivateLogonHour( 
            /* [in] */ SHORT shDay,
            /* [in] */ SHORT shHour) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ActivateItem( 
            /* [in] */ long n) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeactivateItem( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICLogonHoursVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICLogonHours * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICLogonHours * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICLogonHours * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICLogonHours * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICLogonHours * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICLogonHours * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICLogonHours * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ClearAll )( 
            ICLogonHours * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *InitialiseAllActive )( 
            ICLogonHours * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICLogonHours * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICLogonHours * This,
            /* [in] */ long n,
            /* [retval][out] */ ICLogonHour **ppLogonHour);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Item )( 
            ICLogonHours * This,
            /* [in] */ long n,
            /* [in] */ ICLogonHour *pLogonHour);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICLogonHours * This,
            /* [retval][out] */ long *pnCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ActivateLogonHour )( 
            ICLogonHours * This,
            /* [in] */ SHORT shDay,
            /* [in] */ SHORT shHour);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeactivateLogonHour )( 
            ICLogonHours * This,
            /* [in] */ SHORT shDay,
            /* [in] */ SHORT shHour);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ActivateItem )( 
            ICLogonHours * This,
            /* [in] */ long n);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeactivateItem )( 
            ICLogonHours * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } ICLogonHoursVtbl;

    interface ICLogonHours
    {
        CONST_VTBL struct ICLogonHoursVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICLogonHours_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICLogonHours_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICLogonHours_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICLogonHours_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICLogonHours_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICLogonHours_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICLogonHours_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICLogonHours_ClearAll(This)	\
    ( (This)->lpVtbl -> ClearAll(This) ) 

#define ICLogonHours_InitialiseAllActive(This)	\
    ( (This)->lpVtbl -> InitialiseAllActive(This) ) 

#define ICLogonHours_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define ICLogonHours_get_Item(This,n,ppLogonHour)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppLogonHour) ) 

#define ICLogonHours_put_Item(This,n,pLogonHour)	\
    ( (This)->lpVtbl -> put_Item(This,n,pLogonHour) ) 

#define ICLogonHours_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ICLogonHours_ActivateLogonHour(This,shDay,shHour)	\
    ( (This)->lpVtbl -> ActivateLogonHour(This,shDay,shHour) ) 

#define ICLogonHours_DeactivateLogonHour(This,shDay,shHour)	\
    ( (This)->lpVtbl -> DeactivateLogonHour(This,shDay,shHour) ) 

#define ICLogonHours_ActivateItem(This,n)	\
    ( (This)->lpVtbl -> ActivateItem(This,n) ) 

#define ICLogonHours_DeactivateItem(This,n)	\
    ( (This)->lpVtbl -> DeactivateItem(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLogonHours_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo0_INTERFACE_DEFINED__
#define __ICUserInfo0_INTERFACE_DEFINED__

/* interface ICUserInfo0 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FAF36C28-4EF0-4108-9AE3-269D46CFEC48")
    ICUserInfo0 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsName) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo0 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo0 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo0 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo0 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo0 * This,
            /* [in] */ BSTR bsName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICUserInfo0 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo0 * This);
        
        END_INTERFACE
    } ICUserInfo0Vtbl;

    interface ICUserInfo0
    {
        CONST_VTBL struct ICUserInfo0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo0_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo0_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo0_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo0_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo0_Initialise(This,bsName)	\
    ( (This)->lpVtbl -> Initialise(This,bsName) ) 

#define ICUserInfo0_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ICUserInfo0_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo0_INTERFACE_DEFINED__ */


#ifndef __ICUsersInfo0_INTERFACE_DEFINED__
#define __ICUsersInfo0_INTERFACE_DEFINED__

/* interface ICUsersInfo0 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUsersInfo0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0BC05692-BC52-423B-B749-42D736A3CD6E")
    ICUsersInfo0 : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo0 **ppUserInfo0) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ICUserInfo0 *pUserInfo0) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUsersInfo0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUsersInfo0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUsersInfo0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUsersInfo0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUsersInfo0 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUsersInfo0 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUsersInfo0 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUsersInfo0 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICUsersInfo0 * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICUsersInfo0 * This,
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo0 **ppUserInfo0);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICUsersInfo0 * This,
            /* [retval][out] */ long *pnCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICUsersInfo0 * This,
            /* [in] */ ICUserInfo0 *pUserInfo0);
        
        END_INTERFACE
    } ICUsersInfo0Vtbl;

    interface ICUsersInfo0
    {
        CONST_VTBL struct ICUsersInfo0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUsersInfo0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUsersInfo0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUsersInfo0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUsersInfo0_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUsersInfo0_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUsersInfo0_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUsersInfo0_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUsersInfo0_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define ICUsersInfo0_get_Item(This,n,ppUserInfo0)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppUserInfo0) ) 

#define ICUsersInfo0_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ICUsersInfo0_Add(This,pUserInfo0)	\
    ( (This)->lpVtbl -> Add(This,pUserInfo0) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUsersInfo0_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1_INTERFACE_DEFINED__
#define __ICUserInfo1_INTERFACE_DEFINED__

/* interface ICUserInfo1 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("54E16B87-DEA7-4424-A7F9-239AE50DD5F7")
    ICUserInfo1 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPwd,
            /* [in] */ ULONG ulPwdAge,
            /* [in] */ ULONG ulPriv,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PasswordAge( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Privilege( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HomeDirectory( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Comment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ScriptPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICUserInfo1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1 * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPwd,
            /* [in] */ ULONG ulPwdAge,
            /* [in] */ ULONG ulPriv,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            ICUserInfo1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PasswordAge )( 
            ICUserInfo1 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Privilege )( 
            ICUserInfo1 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeDirectory )( 
            ICUserInfo1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Comment )( 
            ICUserInfo1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            ICUserInfo1 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptPath )( 
            ICUserInfo1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1 * This);
        
        END_INTERFACE
    } ICUserInfo1Vtbl;

    interface ICUserInfo1
    {
        CONST_VTBL struct ICUserInfo1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ICUserInfo1_Initialise(This,bsName,bsPwd,ulPwdAge,ulPriv,bsHomeDir,bsComment,ulFlags,bsScriptPath)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,bsPwd,ulPwdAge,ulPriv,bsHomeDir,bsComment,ulFlags,bsScriptPath) ) 

#define ICUserInfo1_get_Password(This,pVal)	\
    ( (This)->lpVtbl -> get_Password(This,pVal) ) 

#define ICUserInfo1_get_PasswordAge(This,pVal)	\
    ( (This)->lpVtbl -> get_PasswordAge(This,pVal) ) 

#define ICUserInfo1_get_Privilege(This,pVal)	\
    ( (This)->lpVtbl -> get_Privilege(This,pVal) ) 

#define ICUserInfo1_get_HomeDirectory(This,pVal)	\
    ( (This)->lpVtbl -> get_HomeDirectory(This,pVal) ) 

#define ICUserInfo1_get_Comment(This,pVal)	\
    ( (This)->lpVtbl -> get_Comment(This,pVal) ) 

#define ICUserInfo1_get_Flags(This,pVal)	\
    ( (This)->lpVtbl -> get_Flags(This,pVal) ) 

#define ICUserInfo1_get_ScriptPath(This,pVal)	\
    ( (This)->lpVtbl -> get_ScriptPath(This,pVal) ) 

#define ICUserInfo1_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo2_INTERFACE_DEFINED__
#define __ICUserInfo2_INTERFACE_DEFINED__

/* interface ICUserInfo2 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("26A49885-E545-4512-87BB-B8AD4A44A450")
    ICUserInfo2 : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PasswordAge( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Privilege( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HomeDirectory( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Comment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ScriptPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AuthFlags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FullName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UsrComment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Params( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Workstations( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastLogon( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastLogoff( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AccntExpires( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxStorage( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UnitsPerWeek( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogonHours( 
            /* [retval][out] */ ICLogonHours **pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BadPwdCount( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NumLogons( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogonServer( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CountryCode( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CodePage( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICUserInfo2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            ICUserInfo2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PasswordAge )( 
            ICUserInfo2 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Privilege )( 
            ICUserInfo2 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeDirectory )( 
            ICUserInfo2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Comment )( 
            ICUserInfo2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            ICUserInfo2 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptPath )( 
            ICUserInfo2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthFlags )( 
            ICUserInfo2 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            ICUserInfo2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsrComment )( 
            ICUserInfo2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Params )( 
            ICUserInfo2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Workstations )( 
            ICUserInfo2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastLogon )( 
            ICUserInfo2 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastLogoff )( 
            ICUserInfo2 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AccntExpires )( 
            ICUserInfo2 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxStorage )( 
            ICUserInfo2 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UnitsPerWeek )( 
            ICUserInfo2 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogonHours )( 
            ICUserInfo2 * This,
            /* [retval][out] */ ICLogonHours **pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BadPwdCount )( 
            ICUserInfo2 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumLogons )( 
            ICUserInfo2 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogonServer )( 
            ICUserInfo2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CountryCode )( 
            ICUserInfo2 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CodePage )( 
            ICUserInfo2 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo2 * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo2 * This);
        
        END_INTERFACE
    } ICUserInfo2Vtbl;

    interface ICUserInfo2
    {
        CONST_VTBL struct ICUserInfo2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo2_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ICUserInfo2_get_Password(This,pVal)	\
    ( (This)->lpVtbl -> get_Password(This,pVal) ) 

#define ICUserInfo2_get_PasswordAge(This,pVal)	\
    ( (This)->lpVtbl -> get_PasswordAge(This,pVal) ) 

#define ICUserInfo2_get_Privilege(This,pVal)	\
    ( (This)->lpVtbl -> get_Privilege(This,pVal) ) 

#define ICUserInfo2_get_HomeDirectory(This,pVal)	\
    ( (This)->lpVtbl -> get_HomeDirectory(This,pVal) ) 

#define ICUserInfo2_get_Comment(This,pVal)	\
    ( (This)->lpVtbl -> get_Comment(This,pVal) ) 

#define ICUserInfo2_get_Flags(This,pVal)	\
    ( (This)->lpVtbl -> get_Flags(This,pVal) ) 

#define ICUserInfo2_get_ScriptPath(This,pVal)	\
    ( (This)->lpVtbl -> get_ScriptPath(This,pVal) ) 

#define ICUserInfo2_get_AuthFlags(This,pVal)	\
    ( (This)->lpVtbl -> get_AuthFlags(This,pVal) ) 

#define ICUserInfo2_get_FullName(This,pVal)	\
    ( (This)->lpVtbl -> get_FullName(This,pVal) ) 

#define ICUserInfo2_get_UsrComment(This,pVal)	\
    ( (This)->lpVtbl -> get_UsrComment(This,pVal) ) 

#define ICUserInfo2_get_Params(This,pVal)	\
    ( (This)->lpVtbl -> get_Params(This,pVal) ) 

#define ICUserInfo2_get_Workstations(This,pVal)	\
    ( (This)->lpVtbl -> get_Workstations(This,pVal) ) 

#define ICUserInfo2_get_LastLogon(This,pVal)	\
    ( (This)->lpVtbl -> get_LastLogon(This,pVal) ) 

#define ICUserInfo2_get_LastLogoff(This,pVal)	\
    ( (This)->lpVtbl -> get_LastLogoff(This,pVal) ) 

#define ICUserInfo2_get_AccntExpires(This,pVal)	\
    ( (This)->lpVtbl -> get_AccntExpires(This,pVal) ) 

#define ICUserInfo2_get_MaxStorage(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxStorage(This,pVal) ) 

#define ICUserInfo2_get_UnitsPerWeek(This,pVal)	\
    ( (This)->lpVtbl -> get_UnitsPerWeek(This,pVal) ) 

#define ICUserInfo2_get_LogonHours(This,pVal)	\
    ( (This)->lpVtbl -> get_LogonHours(This,pVal) ) 

#define ICUserInfo2_get_BadPwdCount(This,pVal)	\
    ( (This)->lpVtbl -> get_BadPwdCount(This,pVal) ) 

#define ICUserInfo2_get_NumLogons(This,pVal)	\
    ( (This)->lpVtbl -> get_NumLogons(This,pVal) ) 

#define ICUserInfo2_get_LogonServer(This,pVal)	\
    ( (This)->lpVtbl -> get_LogonServer(This,pVal) ) 

#define ICUserInfo2_get_CountryCode(This,pVal)	\
    ( (This)->lpVtbl -> get_CountryCode(This,pVal) ) 

#define ICUserInfo2_get_CodePage(This,pVal)	\
    ( (This)->lpVtbl -> get_CodePage(This,pVal) ) 

#define ICUserInfo2_Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage) ) 

#define ICUserInfo2_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo2_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo3_INTERFACE_DEFINED__
#define __ICUserInfo3_INTERFACE_DEFINED__

/* interface ICUserInfo3 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("87BEA5A5-8A49-4573-850A-D1B634D008EB")
    ICUserInfo3 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage,
            /* [in] */ ULONG ulUserId,
            /* [in] */ ULONG ulPrimaryGrpId,
            /* [in] */ BSTR bsProfile,
            /* [in] */ BSTR bsHomeDirDrive,
            /* [in] */ ULONG ulPwdExpired) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PasswordAge( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Privilege( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HomeDirectory( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Comment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ScriptPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AuthFlags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FullName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UsrComment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Params( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Workstations( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastLogon( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastLogoff( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AccntExpires( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxStorage( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UnitsPerWeek( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogonHours( 
            /* [retval][out] */ ICLogonHours **pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BadPwdCount( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NumLogons( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogonServer( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CountryCode( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CodePage( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UserId( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PrimaryGrpId( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Profile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HomeDirDrive( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PwdExpired( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo3 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo3 * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage,
            /* [in] */ ULONG ulUserId,
            /* [in] */ ULONG ulPrimaryGrpId,
            /* [in] */ BSTR bsProfile,
            /* [in] */ BSTR bsHomeDirDrive,
            /* [in] */ ULONG ulPwdExpired);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICUserInfo3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            ICUserInfo3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PasswordAge )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Privilege )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeDirectory )( 
            ICUserInfo3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Comment )( 
            ICUserInfo3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptPath )( 
            ICUserInfo3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthFlags )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            ICUserInfo3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsrComment )( 
            ICUserInfo3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Params )( 
            ICUserInfo3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Workstations )( 
            ICUserInfo3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastLogon )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastLogoff )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AccntExpires )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxStorage )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UnitsPerWeek )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogonHours )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ICLogonHours **pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BadPwdCount )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumLogons )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogonServer )( 
            ICUserInfo3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CountryCode )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CodePage )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserId )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrimaryGrpId )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Profile )( 
            ICUserInfo3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeDirDrive )( 
            ICUserInfo3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PwdExpired )( 
            ICUserInfo3 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo3 * This);
        
        END_INTERFACE
    } ICUserInfo3Vtbl;

    interface ICUserInfo3
    {
        CONST_VTBL struct ICUserInfo3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo3_Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ulUserId,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ulUserId,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired) ) 

#define ICUserInfo3_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ICUserInfo3_get_Password(This,pVal)	\
    ( (This)->lpVtbl -> get_Password(This,pVal) ) 

#define ICUserInfo3_get_PasswordAge(This,pVal)	\
    ( (This)->lpVtbl -> get_PasswordAge(This,pVal) ) 

#define ICUserInfo3_get_Privilege(This,pVal)	\
    ( (This)->lpVtbl -> get_Privilege(This,pVal) ) 

#define ICUserInfo3_get_HomeDirectory(This,pVal)	\
    ( (This)->lpVtbl -> get_HomeDirectory(This,pVal) ) 

#define ICUserInfo3_get_Comment(This,pVal)	\
    ( (This)->lpVtbl -> get_Comment(This,pVal) ) 

#define ICUserInfo3_get_Flags(This,pVal)	\
    ( (This)->lpVtbl -> get_Flags(This,pVal) ) 

#define ICUserInfo3_get_ScriptPath(This,pVal)	\
    ( (This)->lpVtbl -> get_ScriptPath(This,pVal) ) 

#define ICUserInfo3_get_AuthFlags(This,pVal)	\
    ( (This)->lpVtbl -> get_AuthFlags(This,pVal) ) 

#define ICUserInfo3_get_FullName(This,pVal)	\
    ( (This)->lpVtbl -> get_FullName(This,pVal) ) 

#define ICUserInfo3_get_UsrComment(This,pVal)	\
    ( (This)->lpVtbl -> get_UsrComment(This,pVal) ) 

#define ICUserInfo3_get_Params(This,pVal)	\
    ( (This)->lpVtbl -> get_Params(This,pVal) ) 

#define ICUserInfo3_get_Workstations(This,pVal)	\
    ( (This)->lpVtbl -> get_Workstations(This,pVal) ) 

#define ICUserInfo3_get_LastLogon(This,pVal)	\
    ( (This)->lpVtbl -> get_LastLogon(This,pVal) ) 

#define ICUserInfo3_get_LastLogoff(This,pVal)	\
    ( (This)->lpVtbl -> get_LastLogoff(This,pVal) ) 

#define ICUserInfo3_get_AccntExpires(This,pVal)	\
    ( (This)->lpVtbl -> get_AccntExpires(This,pVal) ) 

#define ICUserInfo3_get_MaxStorage(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxStorage(This,pVal) ) 

#define ICUserInfo3_get_UnitsPerWeek(This,pVal)	\
    ( (This)->lpVtbl -> get_UnitsPerWeek(This,pVal) ) 

#define ICUserInfo3_get_LogonHours(This,pVal)	\
    ( (This)->lpVtbl -> get_LogonHours(This,pVal) ) 

#define ICUserInfo3_get_BadPwdCount(This,pVal)	\
    ( (This)->lpVtbl -> get_BadPwdCount(This,pVal) ) 

#define ICUserInfo3_get_NumLogons(This,pVal)	\
    ( (This)->lpVtbl -> get_NumLogons(This,pVal) ) 

#define ICUserInfo3_get_LogonServer(This,pVal)	\
    ( (This)->lpVtbl -> get_LogonServer(This,pVal) ) 

#define ICUserInfo3_get_CountryCode(This,pVal)	\
    ( (This)->lpVtbl -> get_CountryCode(This,pVal) ) 

#define ICUserInfo3_get_CodePage(This,pVal)	\
    ( (This)->lpVtbl -> get_CodePage(This,pVal) ) 

#define ICUserInfo3_get_UserId(This,pVal)	\
    ( (This)->lpVtbl -> get_UserId(This,pVal) ) 

#define ICUserInfo3_get_PrimaryGrpId(This,pVal)	\
    ( (This)->lpVtbl -> get_PrimaryGrpId(This,pVal) ) 

#define ICUserInfo3_get_Profile(This,pVal)	\
    ( (This)->lpVtbl -> get_Profile(This,pVal) ) 

#define ICUserInfo3_get_HomeDirDrive(This,pVal)	\
    ( (This)->lpVtbl -> get_HomeDirDrive(This,pVal) ) 

#define ICUserInfo3_get_PwdExpired(This,pVal)	\
    ( (This)->lpVtbl -> get_PwdExpired(This,pVal) ) 

#define ICUserInfo3_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo3_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo4_INTERFACE_DEFINED__
#define __ICUserInfo4_INTERFACE_DEFINED__

/* interface ICUserInfo4 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8DAFA5B1-C91A-49EA-9152-9DA9157A85C2")
    ICUserInfo4 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage,
            /* [in] */ BSTR bsUserSid,
            /* [in] */ ULONG ulPrimaryGrpId,
            /* [in] */ BSTR bsProfile,
            /* [in] */ BSTR bsHomeDirDrive,
            /* [in] */ ULONG ulPwdExpired) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PasswordAge( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Privilege( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HomeDirectory( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Comment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ScriptPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AuthFlags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FullName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UsrComment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Params( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Workstations( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastLogon( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastLogoff( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AccntExpires( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxStorage( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UnitsPerWeek( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogonHours( 
            /* [retval][out] */ ICLogonHours **pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BadPwdCount( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NumLogons( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogonServer( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CountryCode( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CodePage( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UserSid( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PrimaryGrpId( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Profile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HomeDirDrive( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PwdExpired( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo4 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo4 * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage,
            /* [in] */ BSTR bsUserSid,
            /* [in] */ ULONG ulPrimaryGrpId,
            /* [in] */ BSTR bsProfile,
            /* [in] */ BSTR bsHomeDirDrive,
            /* [in] */ ULONG ulPwdExpired);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICUserInfo4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            ICUserInfo4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PasswordAge )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Privilege )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeDirectory )( 
            ICUserInfo4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Comment )( 
            ICUserInfo4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptPath )( 
            ICUserInfo4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthFlags )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            ICUserInfo4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsrComment )( 
            ICUserInfo4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Params )( 
            ICUserInfo4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Workstations )( 
            ICUserInfo4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastLogon )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastLogoff )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AccntExpires )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxStorage )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UnitsPerWeek )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogonHours )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ICLogonHours **pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BadPwdCount )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumLogons )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogonServer )( 
            ICUserInfo4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CountryCode )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CodePage )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserSid )( 
            ICUserInfo4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrimaryGrpId )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Profile )( 
            ICUserInfo4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeDirDrive )( 
            ICUserInfo4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PwdExpired )( 
            ICUserInfo4 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo4 * This);
        
        END_INTERFACE
    } ICUserInfo4Vtbl;

    interface ICUserInfo4
    {
        CONST_VTBL struct ICUserInfo4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo4_Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,bsUserSid,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,bsUserSid,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired) ) 

#define ICUserInfo4_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ICUserInfo4_get_Password(This,pVal)	\
    ( (This)->lpVtbl -> get_Password(This,pVal) ) 

#define ICUserInfo4_get_PasswordAge(This,pVal)	\
    ( (This)->lpVtbl -> get_PasswordAge(This,pVal) ) 

#define ICUserInfo4_get_Privilege(This,pVal)	\
    ( (This)->lpVtbl -> get_Privilege(This,pVal) ) 

#define ICUserInfo4_get_HomeDirectory(This,pVal)	\
    ( (This)->lpVtbl -> get_HomeDirectory(This,pVal) ) 

#define ICUserInfo4_get_Comment(This,pVal)	\
    ( (This)->lpVtbl -> get_Comment(This,pVal) ) 

#define ICUserInfo4_get_Flags(This,pVal)	\
    ( (This)->lpVtbl -> get_Flags(This,pVal) ) 

#define ICUserInfo4_get_ScriptPath(This,pVal)	\
    ( (This)->lpVtbl -> get_ScriptPath(This,pVal) ) 

#define ICUserInfo4_get_AuthFlags(This,pVal)	\
    ( (This)->lpVtbl -> get_AuthFlags(This,pVal) ) 

#define ICUserInfo4_get_FullName(This,pVal)	\
    ( (This)->lpVtbl -> get_FullName(This,pVal) ) 

#define ICUserInfo4_get_UsrComment(This,pVal)	\
    ( (This)->lpVtbl -> get_UsrComment(This,pVal) ) 

#define ICUserInfo4_get_Params(This,pVal)	\
    ( (This)->lpVtbl -> get_Params(This,pVal) ) 

#define ICUserInfo4_get_Workstations(This,pVal)	\
    ( (This)->lpVtbl -> get_Workstations(This,pVal) ) 

#define ICUserInfo4_get_LastLogon(This,pVal)	\
    ( (This)->lpVtbl -> get_LastLogon(This,pVal) ) 

#define ICUserInfo4_get_LastLogoff(This,pVal)	\
    ( (This)->lpVtbl -> get_LastLogoff(This,pVal) ) 

#define ICUserInfo4_get_AccntExpires(This,pVal)	\
    ( (This)->lpVtbl -> get_AccntExpires(This,pVal) ) 

#define ICUserInfo4_get_MaxStorage(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxStorage(This,pVal) ) 

#define ICUserInfo4_get_UnitsPerWeek(This,pVal)	\
    ( (This)->lpVtbl -> get_UnitsPerWeek(This,pVal) ) 

#define ICUserInfo4_get_LogonHours(This,pVal)	\
    ( (This)->lpVtbl -> get_LogonHours(This,pVal) ) 

#define ICUserInfo4_get_BadPwdCount(This,pVal)	\
    ( (This)->lpVtbl -> get_BadPwdCount(This,pVal) ) 

#define ICUserInfo4_get_NumLogons(This,pVal)	\
    ( (This)->lpVtbl -> get_NumLogons(This,pVal) ) 

#define ICUserInfo4_get_LogonServer(This,pVal)	\
    ( (This)->lpVtbl -> get_LogonServer(This,pVal) ) 

#define ICUserInfo4_get_CountryCode(This,pVal)	\
    ( (This)->lpVtbl -> get_CountryCode(This,pVal) ) 

#define ICUserInfo4_get_CodePage(This,pVal)	\
    ( (This)->lpVtbl -> get_CodePage(This,pVal) ) 

#define ICUserInfo4_get_UserSid(This,pVal)	\
    ( (This)->lpVtbl -> get_UserSid(This,pVal) ) 

#define ICUserInfo4_get_PrimaryGrpId(This,pVal)	\
    ( (This)->lpVtbl -> get_PrimaryGrpId(This,pVal) ) 

#define ICUserInfo4_get_Profile(This,pVal)	\
    ( (This)->lpVtbl -> get_Profile(This,pVal) ) 

#define ICUserInfo4_get_HomeDirDrive(This,pVal)	\
    ( (This)->lpVtbl -> get_HomeDirDrive(This,pVal) ) 

#define ICUserInfo4_get_PwdExpired(This,pVal)	\
    ( (This)->lpVtbl -> get_PwdExpired(This,pVal) ) 

#define ICUserInfo4_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo4_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo10_INTERFACE_DEFINED__
#define __ICUserInfo10_INTERFACE_DEFINED__

/* interface ICUserInfo10 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo10;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("384980B6-F16B-47D5-9EE1-47C7F27E67A1")
    ICUserInfo10 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsComment,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsFullName) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Comment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UsrComment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FullName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo10Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo10 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo10 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo10 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo10 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo10 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo10 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo10 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo10 * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsComment,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsFullName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICUserInfo10 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Comment )( 
            ICUserInfo10 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsrComment )( 
            ICUserInfo10 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            ICUserInfo10 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo10 * This);
        
        END_INTERFACE
    } ICUserInfo10Vtbl;

    interface ICUserInfo10
    {
        CONST_VTBL struct ICUserInfo10Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo10_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo10_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo10_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo10_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo10_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo10_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo10_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo10_Initialise(This,bsName,bsComment,bsUsrComment,bsFullName)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,bsComment,bsUsrComment,bsFullName) ) 

#define ICUserInfo10_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ICUserInfo10_get_Comment(This,pVal)	\
    ( (This)->lpVtbl -> get_Comment(This,pVal) ) 

#define ICUserInfo10_get_UsrComment(This,pVal)	\
    ( (This)->lpVtbl -> get_UsrComment(This,pVal) ) 

#define ICUserInfo10_get_FullName(This,pVal)	\
    ( (This)->lpVtbl -> get_FullName(This,pVal) ) 

#define ICUserInfo10_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo10_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo11_INTERFACE_DEFINED__
#define __ICUserInfo11_INTERFACE_DEFINED__

/* interface ICUserInfo11 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo11;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B97DD7CE-7F31-48B2-B5F9-6E3EB8D52A3D")
    ICUserInfo11 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsComment,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsFullName,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsParams,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulCodePage) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Comment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UsrComment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FullName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Privilege( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AuthFlags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PasswordAge( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HomeDirectory( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Params( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastLogon( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastLogoff( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BadPwdCount( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NumLogons( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogonServer( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CountryCode( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Workstations( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxStorage( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UnitsPerWeek( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogonHours( 
            /* [retval][out] */ ICLogonHours **pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CodePage( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo11Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo11 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo11 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo11 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo11 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo11 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo11 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo11 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo11 * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsComment,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsFullName,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsParams,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulCodePage);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICUserInfo11 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Comment )( 
            ICUserInfo11 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsrComment )( 
            ICUserInfo11 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            ICUserInfo11 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Privilege )( 
            ICUserInfo11 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthFlags )( 
            ICUserInfo11 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PasswordAge )( 
            ICUserInfo11 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeDirectory )( 
            ICUserInfo11 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Params )( 
            ICUserInfo11 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastLogon )( 
            ICUserInfo11 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastLogoff )( 
            ICUserInfo11 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BadPwdCount )( 
            ICUserInfo11 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumLogons )( 
            ICUserInfo11 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogonServer )( 
            ICUserInfo11 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CountryCode )( 
            ICUserInfo11 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Workstations )( 
            ICUserInfo11 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxStorage )( 
            ICUserInfo11 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UnitsPerWeek )( 
            ICUserInfo11 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogonHours )( 
            ICUserInfo11 * This,
            /* [retval][out] */ ICLogonHours **pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CodePage )( 
            ICUserInfo11 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo11 * This);
        
        END_INTERFACE
    } ICUserInfo11Vtbl;

    interface ICUserInfo11
    {
        CONST_VTBL struct ICUserInfo11Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo11_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo11_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo11_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo11_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo11_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo11_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo11_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo11_Initialise(This,bsName,bsComment,bsUsrComment,bsFullName,ulPrivilege,ulAuthFlags,ulPasswordAge,bsHomeDir,bsParams,ulLastLogon,ulLastLogoff,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,bsWorkstations,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulCodePage)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,bsComment,bsUsrComment,bsFullName,ulPrivilege,ulAuthFlags,ulPasswordAge,bsHomeDir,bsParams,ulLastLogon,ulLastLogoff,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,bsWorkstations,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulCodePage) ) 

#define ICUserInfo11_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ICUserInfo11_get_Comment(This,pVal)	\
    ( (This)->lpVtbl -> get_Comment(This,pVal) ) 

#define ICUserInfo11_get_UsrComment(This,pVal)	\
    ( (This)->lpVtbl -> get_UsrComment(This,pVal) ) 

#define ICUserInfo11_get_FullName(This,pVal)	\
    ( (This)->lpVtbl -> get_FullName(This,pVal) ) 

#define ICUserInfo11_get_Privilege(This,pVal)	\
    ( (This)->lpVtbl -> get_Privilege(This,pVal) ) 

#define ICUserInfo11_get_AuthFlags(This,pVal)	\
    ( (This)->lpVtbl -> get_AuthFlags(This,pVal) ) 

#define ICUserInfo11_get_PasswordAge(This,pVal)	\
    ( (This)->lpVtbl -> get_PasswordAge(This,pVal) ) 

#define ICUserInfo11_get_HomeDirectory(This,pVal)	\
    ( (This)->lpVtbl -> get_HomeDirectory(This,pVal) ) 

#define ICUserInfo11_get_Params(This,pVal)	\
    ( (This)->lpVtbl -> get_Params(This,pVal) ) 

#define ICUserInfo11_get_LastLogon(This,pVal)	\
    ( (This)->lpVtbl -> get_LastLogon(This,pVal) ) 

#define ICUserInfo11_get_LastLogoff(This,pVal)	\
    ( (This)->lpVtbl -> get_LastLogoff(This,pVal) ) 

#define ICUserInfo11_get_BadPwdCount(This,pVal)	\
    ( (This)->lpVtbl -> get_BadPwdCount(This,pVal) ) 

#define ICUserInfo11_get_NumLogons(This,pVal)	\
    ( (This)->lpVtbl -> get_NumLogons(This,pVal) ) 

#define ICUserInfo11_get_LogonServer(This,pVal)	\
    ( (This)->lpVtbl -> get_LogonServer(This,pVal) ) 

#define ICUserInfo11_get_CountryCode(This,pVal)	\
    ( (This)->lpVtbl -> get_CountryCode(This,pVal) ) 

#define ICUserInfo11_get_Workstations(This,pVal)	\
    ( (This)->lpVtbl -> get_Workstations(This,pVal) ) 

#define ICUserInfo11_get_MaxStorage(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxStorage(This,pVal) ) 

#define ICUserInfo11_get_UnitsPerWeek(This,pVal)	\
    ( (This)->lpVtbl -> get_UnitsPerWeek(This,pVal) ) 

#define ICUserInfo11_get_LogonHours(This,pVal)	\
    ( (This)->lpVtbl -> get_LogonHours(This,pVal) ) 

#define ICUserInfo11_get_CodePage(This,pVal)	\
    ( (This)->lpVtbl -> get_CodePage(This,pVal) ) 

#define ICUserInfo11_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo11_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo20_INTERFACE_DEFINED__
#define __ICUserInfo20_INTERFACE_DEFINED__

/* interface ICUserInfo20 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo20;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B5BD50A2-3118-4ACB-B393-C4F555296329")
    ICUserInfo20 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ ULONG ulUserId) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FullName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Comment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UserId( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo20Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo20 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo20 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo20 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo20 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo20 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo20 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo20 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo20 * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ ULONG ulUserId);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICUserInfo20 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            ICUserInfo20 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Comment )( 
            ICUserInfo20 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            ICUserInfo20 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserId )( 
            ICUserInfo20 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo20 * This);
        
        END_INTERFACE
    } ICUserInfo20Vtbl;

    interface ICUserInfo20
    {
        CONST_VTBL struct ICUserInfo20Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo20_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo20_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo20_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo20_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo20_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo20_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo20_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo20_Initialise(This,bsName,bsFullName,bsComment,ulFlags,ulUserId)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,bsFullName,bsComment,ulFlags,ulUserId) ) 

#define ICUserInfo20_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ICUserInfo20_get_FullName(This,pVal)	\
    ( (This)->lpVtbl -> get_FullName(This,pVal) ) 

#define ICUserInfo20_get_Comment(This,pVal)	\
    ( (This)->lpVtbl -> get_Comment(This,pVal) ) 

#define ICUserInfo20_get_Flags(This,pVal)	\
    ( (This)->lpVtbl -> get_Flags(This,pVal) ) 

#define ICUserInfo20_get_UserId(This,pVal)	\
    ( (This)->lpVtbl -> get_UserId(This,pVal) ) 

#define ICUserInfo20_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo20_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo21_INTERFACE_DEFINED__
#define __ICUserInfo21_INTERFACE_DEFINED__

/* interface ICUserInfo21 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo21;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B4E3A17B-9F3E-4ECD-B11A-C8F51E568F19")
    ICUserInfo21 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsPassword) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo21Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo21 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo21 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo21 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo21 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo21 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo21 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo21 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo21 * This,
            /* [in] */ BSTR bsPassword);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            ICUserInfo21 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo21 * This);
        
        END_INTERFACE
    } ICUserInfo21Vtbl;

    interface ICUserInfo21
    {
        CONST_VTBL struct ICUserInfo21Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo21_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo21_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo21_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo21_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo21_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo21_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo21_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo21_Initialise(This,bsPassword)	\
    ( (This)->lpVtbl -> Initialise(This,bsPassword) ) 

#define ICUserInfo21_get_Password(This,pVal)	\
    ( (This)->lpVtbl -> get_Password(This,pVal) ) 

#define ICUserInfo21_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo21_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo22_INTERFACE_DEFINED__
#define __ICUserInfo22_INTERFACE_DEFINED__

/* interface ICUserInfo22 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo22;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70A46238-A56B-44DB-A067-E1D6BAC6260B")
    ICUserInfo22 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PasswordAge( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Privilege( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HomeDirectory( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Comment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ScriptPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AuthFlags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FullName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UsrComment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Params( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Workstations( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastLogon( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LastLogoff( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AccntExpires( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxStorage( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UnitsPerWeek( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogonHours( 
            /* [retval][out] */ ICLogonHours **pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BadPwdCount( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NumLogons( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogonServer( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CountryCode( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CodePage( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo22Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo22 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo22 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo22 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo22 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo22 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo22 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo22 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo22 * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICUserInfo22 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            ICUserInfo22 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PasswordAge )( 
            ICUserInfo22 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Privilege )( 
            ICUserInfo22 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeDirectory )( 
            ICUserInfo22 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Comment )( 
            ICUserInfo22 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            ICUserInfo22 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptPath )( 
            ICUserInfo22 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthFlags )( 
            ICUserInfo22 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            ICUserInfo22 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsrComment )( 
            ICUserInfo22 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Params )( 
            ICUserInfo22 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Workstations )( 
            ICUserInfo22 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastLogon )( 
            ICUserInfo22 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastLogoff )( 
            ICUserInfo22 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AccntExpires )( 
            ICUserInfo22 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxStorage )( 
            ICUserInfo22 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UnitsPerWeek )( 
            ICUserInfo22 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogonHours )( 
            ICUserInfo22 * This,
            /* [retval][out] */ ICLogonHours **pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BadPwdCount )( 
            ICUserInfo22 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumLogons )( 
            ICUserInfo22 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogonServer )( 
            ICUserInfo22 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CountryCode )( 
            ICUserInfo22 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CodePage )( 
            ICUserInfo22 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo22 * This);
        
        END_INTERFACE
    } ICUserInfo22Vtbl;

    interface ICUserInfo22
    {
        CONST_VTBL struct ICUserInfo22Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo22_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo22_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo22_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo22_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo22_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo22_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo22_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo22_Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage) ) 

#define ICUserInfo22_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ICUserInfo22_get_Password(This,pVal)	\
    ( (This)->lpVtbl -> get_Password(This,pVal) ) 

#define ICUserInfo22_get_PasswordAge(This,pVal)	\
    ( (This)->lpVtbl -> get_PasswordAge(This,pVal) ) 

#define ICUserInfo22_get_Privilege(This,pVal)	\
    ( (This)->lpVtbl -> get_Privilege(This,pVal) ) 

#define ICUserInfo22_get_HomeDirectory(This,pVal)	\
    ( (This)->lpVtbl -> get_HomeDirectory(This,pVal) ) 

#define ICUserInfo22_get_Comment(This,pVal)	\
    ( (This)->lpVtbl -> get_Comment(This,pVal) ) 

#define ICUserInfo22_get_Flags(This,pVal)	\
    ( (This)->lpVtbl -> get_Flags(This,pVal) ) 

#define ICUserInfo22_get_ScriptPath(This,pVal)	\
    ( (This)->lpVtbl -> get_ScriptPath(This,pVal) ) 

#define ICUserInfo22_get_AuthFlags(This,pVal)	\
    ( (This)->lpVtbl -> get_AuthFlags(This,pVal) ) 

#define ICUserInfo22_get_FullName(This,pVal)	\
    ( (This)->lpVtbl -> get_FullName(This,pVal) ) 

#define ICUserInfo22_get_UsrComment(This,pVal)	\
    ( (This)->lpVtbl -> get_UsrComment(This,pVal) ) 

#define ICUserInfo22_get_Params(This,pVal)	\
    ( (This)->lpVtbl -> get_Params(This,pVal) ) 

#define ICUserInfo22_get_Workstations(This,pVal)	\
    ( (This)->lpVtbl -> get_Workstations(This,pVal) ) 

#define ICUserInfo22_get_LastLogon(This,pVal)	\
    ( (This)->lpVtbl -> get_LastLogon(This,pVal) ) 

#define ICUserInfo22_get_LastLogoff(This,pVal)	\
    ( (This)->lpVtbl -> get_LastLogoff(This,pVal) ) 

#define ICUserInfo22_get_AccntExpires(This,pVal)	\
    ( (This)->lpVtbl -> get_AccntExpires(This,pVal) ) 

#define ICUserInfo22_get_MaxStorage(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxStorage(This,pVal) ) 

#define ICUserInfo22_get_UnitsPerWeek(This,pVal)	\
    ( (This)->lpVtbl -> get_UnitsPerWeek(This,pVal) ) 

#define ICUserInfo22_get_LogonHours(This,pVal)	\
    ( (This)->lpVtbl -> get_LogonHours(This,pVal) ) 

#define ICUserInfo22_get_BadPwdCount(This,pVal)	\
    ( (This)->lpVtbl -> get_BadPwdCount(This,pVal) ) 

#define ICUserInfo22_get_NumLogons(This,pVal)	\
    ( (This)->lpVtbl -> get_NumLogons(This,pVal) ) 

#define ICUserInfo22_get_LogonServer(This,pVal)	\
    ( (This)->lpVtbl -> get_LogonServer(This,pVal) ) 

#define ICUserInfo22_get_CountryCode(This,pVal)	\
    ( (This)->lpVtbl -> get_CountryCode(This,pVal) ) 

#define ICUserInfo22_get_CodePage(This,pVal)	\
    ( (This)->lpVtbl -> get_CodePage(This,pVal) ) 

#define ICUserInfo22_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo22_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo23_INTERFACE_DEFINED__
#define __ICUserInfo23_INTERFACE_DEFINED__

/* interface ICUserInfo23 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo23;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43413C5A-4F4A-4974-9117-6F232FE44F26")
    ICUserInfo23 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsUserSid) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FullName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Comment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UserSid( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo23Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo23 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo23 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo23 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo23 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo23 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo23 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo23 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo23 * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsUserSid);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICUserInfo23 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            ICUserInfo23 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Comment )( 
            ICUserInfo23 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            ICUserInfo23 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserSid )( 
            ICUserInfo23 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo23 * This);
        
        END_INTERFACE
    } ICUserInfo23Vtbl;

    interface ICUserInfo23
    {
        CONST_VTBL struct ICUserInfo23Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo23_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo23_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo23_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo23_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo23_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo23_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo23_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo23_Initialise(This,bsName,bsFullName,bsComment,ulFlags,bsUserSid)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,bsFullName,bsComment,ulFlags,bsUserSid) ) 

#define ICUserInfo23_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ICUserInfo23_get_FullName(This,pVal)	\
    ( (This)->lpVtbl -> get_FullName(This,pVal) ) 

#define ICUserInfo23_get_Comment(This,pVal)	\
    ( (This)->lpVtbl -> get_Comment(This,pVal) ) 

#define ICUserInfo23_get_Flags(This,pVal)	\
    ( (This)->lpVtbl -> get_Flags(This,pVal) ) 

#define ICUserInfo23_get_UserSid(This,pVal)	\
    ( (This)->lpVtbl -> get_UserSid(This,pVal) ) 

#define ICUserInfo23_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo23_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo24_INTERFACE_DEFINED__
#define __ICUserInfo24_INTERFACE_DEFINED__

/* interface ICUserInfo24 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo24;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CFAEE563-8B1F-4E0D-84EA-5146114960EE")
    ICUserInfo24 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ SHORT shInternetIdentity,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsInternetProviderName,
            /* [in] */ BSTR bsInternetPrincipleName,
            /* [in] */ BSTR bsUserSid) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_InternetIdentity( 
            /* [retval][out] */ SHORT *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_InternetProviderName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_InternetPrincipleName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UserSid( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo24Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo24 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo24 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo24 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo24 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo24 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo24 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo24 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo24 * This,
            /* [in] */ SHORT shInternetIdentity,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsInternetProviderName,
            /* [in] */ BSTR bsInternetPrincipleName,
            /* [in] */ BSTR bsUserSid);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternetIdentity )( 
            ICUserInfo24 * This,
            /* [retval][out] */ SHORT *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            ICUserInfo24 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternetProviderName )( 
            ICUserInfo24 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternetPrincipleName )( 
            ICUserInfo24 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserSid )( 
            ICUserInfo24 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo24 * This);
        
        END_INTERFACE
    } ICUserInfo24Vtbl;

    interface ICUserInfo24
    {
        CONST_VTBL struct ICUserInfo24Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo24_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo24_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo24_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo24_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo24_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo24_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo24_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo24_Initialise(This,shInternetIdentity,ulFlags,bsInternetProviderName,bsInternetPrincipleName,bsUserSid)	\
    ( (This)->lpVtbl -> Initialise(This,shInternetIdentity,ulFlags,bsInternetProviderName,bsInternetPrincipleName,bsUserSid) ) 

#define ICUserInfo24_get_InternetIdentity(This,pVal)	\
    ( (This)->lpVtbl -> get_InternetIdentity(This,pVal) ) 

#define ICUserInfo24_get_Flags(This,pVal)	\
    ( (This)->lpVtbl -> get_Flags(This,pVal) ) 

#define ICUserInfo24_get_InternetProviderName(This,pVal)	\
    ( (This)->lpVtbl -> get_InternetProviderName(This,pVal) ) 

#define ICUserInfo24_get_InternetPrincipleName(This,pVal)	\
    ( (This)->lpVtbl -> get_InternetPrincipleName(This,pVal) ) 

#define ICUserInfo24_get_UserSid(This,pVal)	\
    ( (This)->lpVtbl -> get_UserSid(This,pVal) ) 

#define ICUserInfo24_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo24_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1003_INTERFACE_DEFINED__
#define __ICUserInfo1003_INTERFACE_DEFINED__

/* interface ICUserInfo1003 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1003;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("900AA31A-F912-4AB7-B569-AA4A60F4FCE0")
    ICUserInfo1003 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsPassword) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Password( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1003Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1003 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1003 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1003 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1003 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1003 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1003 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1003 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1003 * This,
            /* [in] */ BSTR bsPassword);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Password )( 
            ICUserInfo1003 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1003 * This);
        
        END_INTERFACE
    } ICUserInfo1003Vtbl;

    interface ICUserInfo1003
    {
        CONST_VTBL struct ICUserInfo1003Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1003_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1003_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1003_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1003_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1003_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1003_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1003_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1003_Initialise(This,bsPassword)	\
    ( (This)->lpVtbl -> Initialise(This,bsPassword) ) 

#define ICUserInfo1003_get_Password(This,pVal)	\
    ( (This)->lpVtbl -> get_Password(This,pVal) ) 

#define ICUserInfo1003_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1003_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1005_INTERFACE_DEFINED__
#define __ICUserInfo1005_INTERFACE_DEFINED__

/* interface ICUserInfo1005 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1005;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("498D44B8-FE78-4B58-8416-CF42D2886D83")
    ICUserInfo1005 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ ULONG ulPrivilege) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Privilege( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1005Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1005 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1005 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1005 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1005 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1005 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1005 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1005 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1005 * This,
            /* [in] */ ULONG ulPrivilege);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Privilege )( 
            ICUserInfo1005 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1005 * This);
        
        END_INTERFACE
    } ICUserInfo1005Vtbl;

    interface ICUserInfo1005
    {
        CONST_VTBL struct ICUserInfo1005Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1005_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1005_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1005_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1005_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1005_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1005_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1005_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1005_Initialise(This,ulPrivilege)	\
    ( (This)->lpVtbl -> Initialise(This,ulPrivilege) ) 

#define ICUserInfo1005_get_Privilege(This,pVal)	\
    ( (This)->lpVtbl -> get_Privilege(This,pVal) ) 

#define ICUserInfo1005_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1005_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1006_INTERFACE_DEFINED__
#define __ICUserInfo1006_INTERFACE_DEFINED__

/* interface ICUserInfo1006 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1006;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C74F8FA9-D9E1-4784-ACD8-0F86544D8BB4")
    ICUserInfo1006 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsHomeDir) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HomeDirectory( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1006Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1006 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1006 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1006 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1006 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1006 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1006 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1006 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1006 * This,
            /* [in] */ BSTR bsHomeDir);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeDirectory )( 
            ICUserInfo1006 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1006 * This);
        
        END_INTERFACE
    } ICUserInfo1006Vtbl;

    interface ICUserInfo1006
    {
        CONST_VTBL struct ICUserInfo1006Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1006_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1006_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1006_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1006_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1006_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1006_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1006_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1006_Initialise(This,bsHomeDir)	\
    ( (This)->lpVtbl -> Initialise(This,bsHomeDir) ) 

#define ICUserInfo1006_get_HomeDirectory(This,pVal)	\
    ( (This)->lpVtbl -> get_HomeDirectory(This,pVal) ) 

#define ICUserInfo1006_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1006_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1007_INTERFACE_DEFINED__
#define __ICUserInfo1007_INTERFACE_DEFINED__

/* interface ICUserInfo1007 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1007;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B392B22C-C613-4B4E-8381-1047C66345CB")
    ICUserInfo1007 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsComment) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Comment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1007Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1007 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1007 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1007 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1007 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1007 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1007 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1007 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1007 * This,
            /* [in] */ BSTR bsComment);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Comment )( 
            ICUserInfo1007 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1007 * This);
        
        END_INTERFACE
    } ICUserInfo1007Vtbl;

    interface ICUserInfo1007
    {
        CONST_VTBL struct ICUserInfo1007Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1007_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1007_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1007_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1007_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1007_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1007_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1007_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1007_Initialise(This,bsComment)	\
    ( (This)->lpVtbl -> Initialise(This,bsComment) ) 

#define ICUserInfo1007_get_Comment(This,pVal)	\
    ( (This)->lpVtbl -> get_Comment(This,pVal) ) 

#define ICUserInfo1007_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1007_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1008_INTERFACE_DEFINED__
#define __ICUserInfo1008_INTERFACE_DEFINED__

/* interface ICUserInfo1008 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1008;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BB1F392D-DABF-4FDE-B8C7-6280255AC507")
    ICUserInfo1008 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ ULONG ulFlags) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Flags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1008Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1008 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1008 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1008 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1008 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1008 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1008 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1008 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1008 * This,
            /* [in] */ ULONG ulFlags);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flags )( 
            ICUserInfo1008 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1008 * This);
        
        END_INTERFACE
    } ICUserInfo1008Vtbl;

    interface ICUserInfo1008
    {
        CONST_VTBL struct ICUserInfo1008Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1008_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1008_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1008_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1008_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1008_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1008_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1008_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1008_Initialise(This,ulFlags)	\
    ( (This)->lpVtbl -> Initialise(This,ulFlags) ) 

#define ICUserInfo1008_get_Flags(This,pVal)	\
    ( (This)->lpVtbl -> get_Flags(This,pVal) ) 

#define ICUserInfo1008_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1008_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1009_INTERFACE_DEFINED__
#define __ICUserInfo1009_INTERFACE_DEFINED__

/* interface ICUserInfo1009 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1009;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF9CC675-C817-4F55-8B3C-C96E6EDA54E3")
    ICUserInfo1009 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsScriptPath) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ScriptPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1009Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1009 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1009 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1009 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1009 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1009 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1009 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1009 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1009 * This,
            /* [in] */ BSTR bsScriptPath);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptPath )( 
            ICUserInfo1009 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1009 * This);
        
        END_INTERFACE
    } ICUserInfo1009Vtbl;

    interface ICUserInfo1009
    {
        CONST_VTBL struct ICUserInfo1009Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1009_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1009_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1009_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1009_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1009_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1009_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1009_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1009_Initialise(This,bsScriptPath)	\
    ( (This)->lpVtbl -> Initialise(This,bsScriptPath) ) 

#define ICUserInfo1009_get_ScriptPath(This,pVal)	\
    ( (This)->lpVtbl -> get_ScriptPath(This,pVal) ) 

#define ICUserInfo1009_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1009_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1010_INTERFACE_DEFINED__
#define __ICUserInfo1010_INTERFACE_DEFINED__

/* interface ICUserInfo1010 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1010;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F0C88122-26CB-4014-A042-1BE26AE67ECA")
    ICUserInfo1010 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ ULONG ulAuthFlags) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AuthFlags( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1010Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1010 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1010 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1010 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1010 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1010 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1010 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1010 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1010 * This,
            /* [in] */ ULONG ulAuthFlags);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthFlags )( 
            ICUserInfo1010 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1010 * This);
        
        END_INTERFACE
    } ICUserInfo1010Vtbl;

    interface ICUserInfo1010
    {
        CONST_VTBL struct ICUserInfo1010Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1010_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1010_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1010_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1010_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1010_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1010_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1010_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1010_Initialise(This,ulAuthFlags)	\
    ( (This)->lpVtbl -> Initialise(This,ulAuthFlags) ) 

#define ICUserInfo1010_get_AuthFlags(This,pVal)	\
    ( (This)->lpVtbl -> get_AuthFlags(This,pVal) ) 

#define ICUserInfo1010_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1010_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1011_INTERFACE_DEFINED__
#define __ICUserInfo1011_INTERFACE_DEFINED__

/* interface ICUserInfo1011 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1011;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8440219B-EB30-491B-9B31-30A4ED848401")
    ICUserInfo1011 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsFullName) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FullName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1011Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1011 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1011 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1011 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1011 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1011 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1011 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1011 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1011 * This,
            /* [in] */ BSTR bsFullName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullName )( 
            ICUserInfo1011 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1011 * This);
        
        END_INTERFACE
    } ICUserInfo1011Vtbl;

    interface ICUserInfo1011
    {
        CONST_VTBL struct ICUserInfo1011Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1011_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1011_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1011_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1011_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1011_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1011_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1011_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1011_Initialise(This,bsFullName)	\
    ( (This)->lpVtbl -> Initialise(This,bsFullName) ) 

#define ICUserInfo1011_get_FullName(This,pVal)	\
    ( (This)->lpVtbl -> get_FullName(This,pVal) ) 

#define ICUserInfo1011_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1011_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1012_INTERFACE_DEFINED__
#define __ICUserInfo1012_INTERFACE_DEFINED__

/* interface ICUserInfo1012 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1012;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F9277CC9-E27C-4DF0-8228-15459415CAD6")
    ICUserInfo1012 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsUsrComment) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UsrComment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1012Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1012 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1012 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1012 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1012 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1012 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1012 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1012 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1012 * This,
            /* [in] */ BSTR bsUsrComment);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsrComment )( 
            ICUserInfo1012 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1012 * This);
        
        END_INTERFACE
    } ICUserInfo1012Vtbl;

    interface ICUserInfo1012
    {
        CONST_VTBL struct ICUserInfo1012Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1012_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1012_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1012_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1012_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1012_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1012_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1012_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1012_Initialise(This,bsUsrComment)	\
    ( (This)->lpVtbl -> Initialise(This,bsUsrComment) ) 

#define ICUserInfo1012_get_UsrComment(This,pVal)	\
    ( (This)->lpVtbl -> get_UsrComment(This,pVal) ) 

#define ICUserInfo1012_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1012_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1013_INTERFACE_DEFINED__
#define __ICUserInfo1013_INTERFACE_DEFINED__

/* interface ICUserInfo1013 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1013;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("072BCA73-A103-4B92-B5FA-35DCDA81A2D5")
    ICUserInfo1013 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsParams) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Params( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1013Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1013 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1013 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1013 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1013 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1013 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1013 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1013 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1013 * This,
            /* [in] */ BSTR bsParams);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Params )( 
            ICUserInfo1013 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1013 * This);
        
        END_INTERFACE
    } ICUserInfo1013Vtbl;

    interface ICUserInfo1013
    {
        CONST_VTBL struct ICUserInfo1013Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1013_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1013_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1013_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1013_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1013_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1013_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1013_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1013_Initialise(This,bsParams)	\
    ( (This)->lpVtbl -> Initialise(This,bsParams) ) 

#define ICUserInfo1013_get_Params(This,pVal)	\
    ( (This)->lpVtbl -> get_Params(This,pVal) ) 

#define ICUserInfo1013_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1013_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1014_INTERFACE_DEFINED__
#define __ICUserInfo1014_INTERFACE_DEFINED__

/* interface ICUserInfo1014 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1014;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("078DBB8D-B9AD-4FC1-B19F-4350E6D342C7")
    ICUserInfo1014 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsWorkstations) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Workstations( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1014Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1014 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1014 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1014 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1014 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1014 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1014 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1014 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1014 * This,
            /* [in] */ BSTR bsWorkstations);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Workstations )( 
            ICUserInfo1014 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1014 * This);
        
        END_INTERFACE
    } ICUserInfo1014Vtbl;

    interface ICUserInfo1014
    {
        CONST_VTBL struct ICUserInfo1014Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1014_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1014_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1014_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1014_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1014_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1014_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1014_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1014_Initialise(This,bsWorkstations)	\
    ( (This)->lpVtbl -> Initialise(This,bsWorkstations) ) 

#define ICUserInfo1014_get_Workstations(This,pVal)	\
    ( (This)->lpVtbl -> get_Workstations(This,pVal) ) 

#define ICUserInfo1014_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1014_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1017_INTERFACE_DEFINED__
#define __ICUserInfo1017_INTERFACE_DEFINED__

/* interface ICUserInfo1017 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1017;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C2F6CF6A-C02B-4E60-880A-8D03F2C1D0F9")
    ICUserInfo1017 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ ULONG ulAccntExpires) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AccntExpires( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1017Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1017 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1017 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1017 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1017 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1017 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1017 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1017 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1017 * This,
            /* [in] */ ULONG ulAccntExpires);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AccntExpires )( 
            ICUserInfo1017 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1017 * This);
        
        END_INTERFACE
    } ICUserInfo1017Vtbl;

    interface ICUserInfo1017
    {
        CONST_VTBL struct ICUserInfo1017Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1017_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1017_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1017_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1017_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1017_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1017_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1017_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1017_Initialise(This,ulAccntExpires)	\
    ( (This)->lpVtbl -> Initialise(This,ulAccntExpires) ) 

#define ICUserInfo1017_get_AccntExpires(This,pVal)	\
    ( (This)->lpVtbl -> get_AccntExpires(This,pVal) ) 

#define ICUserInfo1017_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1017_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1018_INTERFACE_DEFINED__
#define __ICUserInfo1018_INTERFACE_DEFINED__

/* interface ICUserInfo1018 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1018;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("84B7C76D-ED3D-4D0B-A753-5512C17A709B")
    ICUserInfo1018 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ ULONG ulMaxStorage) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxStorage( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1018Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1018 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1018 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1018 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1018 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1018 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1018 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1018 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1018 * This,
            /* [in] */ ULONG ulMaxStorage);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxStorage )( 
            ICUserInfo1018 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1018 * This);
        
        END_INTERFACE
    } ICUserInfo1018Vtbl;

    interface ICUserInfo1018
    {
        CONST_VTBL struct ICUserInfo1018Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1018_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1018_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1018_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1018_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1018_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1018_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1018_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1018_Initialise(This,ulMaxStorage)	\
    ( (This)->lpVtbl -> Initialise(This,ulMaxStorage) ) 

#define ICUserInfo1018_get_MaxStorage(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxStorage(This,pVal) ) 

#define ICUserInfo1018_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1018_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1020_INTERFACE_DEFINED__
#define __ICUserInfo1020_INTERFACE_DEFINED__

/* interface ICUserInfo1020 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1020;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91E5BE48-571B-4478-ABC8-BFB0D698785B")
    ICUserInfo1020 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UnitsPerWeek( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogonHours( 
            /* [retval][out] */ ICLogonHours **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1020Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1020 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1020 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1020 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1020 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1020 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1020 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1020 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1020 * This,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UnitsPerWeek )( 
            ICUserInfo1020 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogonHours )( 
            ICUserInfo1020 * This,
            /* [retval][out] */ ICLogonHours **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1020 * This);
        
        END_INTERFACE
    } ICUserInfo1020Vtbl;

    interface ICUserInfo1020
    {
        CONST_VTBL struct ICUserInfo1020Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1020_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1020_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1020_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1020_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1020_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1020_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1020_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1020_Initialise(This,ulUnitsPerWeek,pLogonHours)	\
    ( (This)->lpVtbl -> Initialise(This,ulUnitsPerWeek,pLogonHours) ) 

#define ICUserInfo1020_get_UnitsPerWeek(This,pVal)	\
    ( (This)->lpVtbl -> get_UnitsPerWeek(This,pVal) ) 

#define ICUserInfo1020_get_LogonHours(This,pVal)	\
    ( (This)->lpVtbl -> get_LogonHours(This,pVal) ) 

#define ICUserInfo1020_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1020_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1023_INTERFACE_DEFINED__
#define __ICUserInfo1023_INTERFACE_DEFINED__

/* interface ICUserInfo1023 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1023;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD330CEA-13DD-4D3E-841E-E559CD5F6F7D")
    ICUserInfo1023 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsLogonServer) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LogonServer( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1023Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1023 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1023 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1023 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1023 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1023 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1023 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1023 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1023 * This,
            /* [in] */ BSTR bsLogonServer);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogonServer )( 
            ICUserInfo1023 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1023 * This);
        
        END_INTERFACE
    } ICUserInfo1023Vtbl;

    interface ICUserInfo1023
    {
        CONST_VTBL struct ICUserInfo1023Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1023_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1023_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1023_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1023_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1023_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1023_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1023_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1023_Initialise(This,bsLogonServer)	\
    ( (This)->lpVtbl -> Initialise(This,bsLogonServer) ) 

#define ICUserInfo1023_get_LogonServer(This,pVal)	\
    ( (This)->lpVtbl -> get_LogonServer(This,pVal) ) 

#define ICUserInfo1023_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1023_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1024_INTERFACE_DEFINED__
#define __ICUserInfo1024_INTERFACE_DEFINED__

/* interface ICUserInfo1024 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1024;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("18695385-BE01-44FF-9962-7F1F8EB57AE2")
    ICUserInfo1024 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ ULONG ulCountryCode) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CountryCode( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1024Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1024 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1024 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1024 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1024 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1024 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1024 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1024 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1024 * This,
            /* [in] */ ULONG ulCountryCode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CountryCode )( 
            ICUserInfo1024 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1024 * This);
        
        END_INTERFACE
    } ICUserInfo1024Vtbl;

    interface ICUserInfo1024
    {
        CONST_VTBL struct ICUserInfo1024Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1024_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1024_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1024_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1024_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1024_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1024_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1024_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1024_Initialise(This,ulCountryCode)	\
    ( (This)->lpVtbl -> Initialise(This,ulCountryCode) ) 

#define ICUserInfo1024_get_CountryCode(This,pVal)	\
    ( (This)->lpVtbl -> get_CountryCode(This,pVal) ) 

#define ICUserInfo1024_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1024_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1025_INTERFACE_DEFINED__
#define __ICUserInfo1025_INTERFACE_DEFINED__

/* interface ICUserInfo1025 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1025;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A08D86C4-47EE-4C75-B844-71D66B532760")
    ICUserInfo1025 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ ULONG ulCodePage) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CodePage( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1025Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1025 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1025 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1025 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1025 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1025 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1025 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1025 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1025 * This,
            /* [in] */ ULONG ulCodePage);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CodePage )( 
            ICUserInfo1025 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1025 * This);
        
        END_INTERFACE
    } ICUserInfo1025Vtbl;

    interface ICUserInfo1025
    {
        CONST_VTBL struct ICUserInfo1025Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1025_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1025_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1025_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1025_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1025_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1025_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1025_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1025_Initialise(This,ulCodePage)	\
    ( (This)->lpVtbl -> Initialise(This,ulCodePage) ) 

#define ICUserInfo1025_get_CodePage(This,pVal)	\
    ( (This)->lpVtbl -> get_CodePage(This,pVal) ) 

#define ICUserInfo1025_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1025_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1051_INTERFACE_DEFINED__
#define __ICUserInfo1051_INTERFACE_DEFINED__

/* interface ICUserInfo1051 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1051;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("03BF198D-2AC8-49DF-B657-610B3879DBEB")
    ICUserInfo1051 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ ULONG ulPrimaryGrpId) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PrimaryGrpId( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1051Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1051 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1051 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1051 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1051 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1051 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1051 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1051 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1051 * This,
            /* [in] */ ULONG ulPrimaryGrpId);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PrimaryGrpId )( 
            ICUserInfo1051 * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1051 * This);
        
        END_INTERFACE
    } ICUserInfo1051Vtbl;

    interface ICUserInfo1051
    {
        CONST_VTBL struct ICUserInfo1051Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1051_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1051_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1051_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1051_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1051_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1051_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1051_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1051_Initialise(This,ulPrimaryGrpId)	\
    ( (This)->lpVtbl -> Initialise(This,ulPrimaryGrpId) ) 

#define ICUserInfo1051_get_PrimaryGrpId(This,pVal)	\
    ( (This)->lpVtbl -> get_PrimaryGrpId(This,pVal) ) 

#define ICUserInfo1051_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1051_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1052_INTERFACE_DEFINED__
#define __ICUserInfo1052_INTERFACE_DEFINED__

/* interface ICUserInfo1052 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1052;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0AF7CBB8-DBA4-4AD4-B633-5B50958849D6")
    ICUserInfo1052 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsProfile) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Profile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1052Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1052 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1052 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1052 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1052 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1052 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1052 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1052 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1052 * This,
            /* [in] */ BSTR bsProfile);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Profile )( 
            ICUserInfo1052 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1052 * This);
        
        END_INTERFACE
    } ICUserInfo1052Vtbl;

    interface ICUserInfo1052
    {
        CONST_VTBL struct ICUserInfo1052Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1052_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1052_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1052_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1052_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1052_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1052_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1052_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1052_Initialise(This,bsProfile)	\
    ( (This)->lpVtbl -> Initialise(This,bsProfile) ) 

#define ICUserInfo1052_get_Profile(This,pVal)	\
    ( (This)->lpVtbl -> get_Profile(This,pVal) ) 

#define ICUserInfo1052_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1052_INTERFACE_DEFINED__ */


#ifndef __ICUserInfo1053_INTERFACE_DEFINED__
#define __ICUserInfo1053_INTERFACE_DEFINED__

/* interface ICUserInfo1053 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUserInfo1053;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("81BB6120-B547-4025-8F18-807F6895D984")
    ICUserInfo1053 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsHomeDirDrive) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HomeDirDrive( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUserInfo1053Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUserInfo1053 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUserInfo1053 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUserInfo1053 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUserInfo1053 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUserInfo1053 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUserInfo1053 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUserInfo1053 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICUserInfo1053 * This,
            /* [in] */ BSTR bsHomeDirDrive);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeDirDrive )( 
            ICUserInfo1053 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICUserInfo1053 * This);
        
        END_INTERFACE
    } ICUserInfo1053Vtbl;

    interface ICUserInfo1053
    {
        CONST_VTBL struct ICUserInfo1053Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUserInfo1053_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUserInfo1053_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUserInfo1053_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUserInfo1053_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUserInfo1053_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUserInfo1053_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUserInfo1053_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUserInfo1053_Initialise(This,bsHomeDirDrive)	\
    ( (This)->lpVtbl -> Initialise(This,bsHomeDirDrive) ) 

#define ICUserInfo1053_get_HomeDirDrive(This,pVal)	\
    ( (This)->lpVtbl -> get_HomeDirDrive(This,pVal) ) 

#define ICUserInfo1053_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1053_INTERFACE_DEFINED__ */


#ifndef __ICUsersInfo1_INTERFACE_DEFINED__
#define __ICUsersInfo1_INTERFACE_DEFINED__

/* interface ICUsersInfo1 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUsersInfo1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C3DCF9BC-EB1D-4DAD-8A18-C6666F5FCBDC")
    ICUsersInfo1 : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo1 **ppUserInfo1) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ICUserInfo1 *pUserInfo1) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUsersInfo1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUsersInfo1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUsersInfo1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUsersInfo1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUsersInfo1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUsersInfo1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUsersInfo1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUsersInfo1 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICUsersInfo1 * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICUsersInfo1 * This,
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo1 **ppUserInfo1);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICUsersInfo1 * This,
            /* [retval][out] */ long *pnCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICUsersInfo1 * This,
            /* [in] */ ICUserInfo1 *pUserInfo1);
        
        END_INTERFACE
    } ICUsersInfo1Vtbl;

    interface ICUsersInfo1
    {
        CONST_VTBL struct ICUsersInfo1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUsersInfo1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUsersInfo1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUsersInfo1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUsersInfo1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUsersInfo1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUsersInfo1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUsersInfo1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUsersInfo1_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define ICUsersInfo1_get_Item(This,n,ppUserInfo1)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppUserInfo1) ) 

#define ICUsersInfo1_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ICUsersInfo1_Add(This,pUserInfo1)	\
    ( (This)->lpVtbl -> Add(This,pUserInfo1) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUsersInfo1_INTERFACE_DEFINED__ */


#ifndef __ICUsersInfo2_INTERFACE_DEFINED__
#define __ICUsersInfo2_INTERFACE_DEFINED__

/* interface ICUsersInfo2 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUsersInfo2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BE7ED37C-C111-41F7-8180-3CDF57385695")
    ICUsersInfo2 : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo2 **ppUserInfo2) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ICUserInfo2 *pUserInfo2) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUsersInfo2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUsersInfo2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUsersInfo2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUsersInfo2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUsersInfo2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUsersInfo2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUsersInfo2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUsersInfo2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICUsersInfo2 * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICUsersInfo2 * This,
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo2 **ppUserInfo2);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICUsersInfo2 * This,
            /* [retval][out] */ long *pnCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICUsersInfo2 * This,
            /* [in] */ ICUserInfo2 *pUserInfo2);
        
        END_INTERFACE
    } ICUsersInfo2Vtbl;

    interface ICUsersInfo2
    {
        CONST_VTBL struct ICUsersInfo2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUsersInfo2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUsersInfo2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUsersInfo2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUsersInfo2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUsersInfo2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUsersInfo2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUsersInfo2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUsersInfo2_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define ICUsersInfo2_get_Item(This,n,ppUserInfo2)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppUserInfo2) ) 

#define ICUsersInfo2_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ICUsersInfo2_Add(This,pUserInfo2)	\
    ( (This)->lpVtbl -> Add(This,pUserInfo2) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUsersInfo2_INTERFACE_DEFINED__ */


#ifndef __ICUsersInfo3_INTERFACE_DEFINED__
#define __ICUsersInfo3_INTERFACE_DEFINED__

/* interface ICUsersInfo3 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUsersInfo3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C20CD927-B051-4C76-9747-EF10135C9A9C")
    ICUsersInfo3 : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo3 **ppUserInfo3) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ICUserInfo3 *pUserInfo3) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUsersInfo3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUsersInfo3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUsersInfo3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUsersInfo3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUsersInfo3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUsersInfo3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUsersInfo3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUsersInfo3 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICUsersInfo3 * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICUsersInfo3 * This,
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo3 **ppUserInfo3);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICUsersInfo3 * This,
            /* [retval][out] */ long *pnCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICUsersInfo3 * This,
            /* [in] */ ICUserInfo3 *pUserInfo3);
        
        END_INTERFACE
    } ICUsersInfo3Vtbl;

    interface ICUsersInfo3
    {
        CONST_VTBL struct ICUsersInfo3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUsersInfo3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUsersInfo3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUsersInfo3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUsersInfo3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUsersInfo3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUsersInfo3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUsersInfo3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUsersInfo3_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define ICUsersInfo3_get_Item(This,n,ppUserInfo3)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppUserInfo3) ) 

#define ICUsersInfo3_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ICUsersInfo3_Add(This,pUserInfo3)	\
    ( (This)->lpVtbl -> Add(This,pUserInfo3) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUsersInfo3_INTERFACE_DEFINED__ */


#ifndef __ICUsersInfo10_INTERFACE_DEFINED__
#define __ICUsersInfo10_INTERFACE_DEFINED__

/* interface ICUsersInfo10 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUsersInfo10;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2F77FF1C-1F57-4E38-A8DC-9798859F78E0")
    ICUsersInfo10 : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo10 **ppUserInfo10) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ICUserInfo10 *pUserInfo10) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUsersInfo10Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUsersInfo10 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUsersInfo10 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUsersInfo10 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUsersInfo10 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUsersInfo10 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUsersInfo10 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUsersInfo10 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICUsersInfo10 * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICUsersInfo10 * This,
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo10 **ppUserInfo10);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICUsersInfo10 * This,
            /* [retval][out] */ long *pnCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICUsersInfo10 * This,
            /* [in] */ ICUserInfo10 *pUserInfo10);
        
        END_INTERFACE
    } ICUsersInfo10Vtbl;

    interface ICUsersInfo10
    {
        CONST_VTBL struct ICUsersInfo10Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUsersInfo10_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUsersInfo10_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUsersInfo10_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUsersInfo10_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUsersInfo10_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUsersInfo10_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUsersInfo10_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUsersInfo10_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define ICUsersInfo10_get_Item(This,n,ppUserInfo10)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppUserInfo10) ) 

#define ICUsersInfo10_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ICUsersInfo10_Add(This,pUserInfo10)	\
    ( (This)->lpVtbl -> Add(This,pUserInfo10) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUsersInfo10_INTERFACE_DEFINED__ */


#ifndef __ICUsersInfo11_INTERFACE_DEFINED__
#define __ICUsersInfo11_INTERFACE_DEFINED__

/* interface ICUsersInfo11 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUsersInfo11;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EFF7F298-96F0-4CB8-ADAA-535F08BDF52D")
    ICUsersInfo11 : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo11 **ppUserInfo11) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ICUserInfo11 *pUserInfo11) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUsersInfo11Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUsersInfo11 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUsersInfo11 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUsersInfo11 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUsersInfo11 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUsersInfo11 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUsersInfo11 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUsersInfo11 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICUsersInfo11 * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICUsersInfo11 * This,
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo11 **ppUserInfo11);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICUsersInfo11 * This,
            /* [retval][out] */ long *pnCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICUsersInfo11 * This,
            /* [in] */ ICUserInfo11 *pUserInfo11);
        
        END_INTERFACE
    } ICUsersInfo11Vtbl;

    interface ICUsersInfo11
    {
        CONST_VTBL struct ICUsersInfo11Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUsersInfo11_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUsersInfo11_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUsersInfo11_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUsersInfo11_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUsersInfo11_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUsersInfo11_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUsersInfo11_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUsersInfo11_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define ICUsersInfo11_get_Item(This,n,ppUserInfo11)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppUserInfo11) ) 

#define ICUsersInfo11_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ICUsersInfo11_Add(This,pUserInfo11)	\
    ( (This)->lpVtbl -> Add(This,pUserInfo11) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUsersInfo11_INTERFACE_DEFINED__ */


#ifndef __ICUsersInfo20_INTERFACE_DEFINED__
#define __ICUsersInfo20_INTERFACE_DEFINED__

/* interface ICUsersInfo20 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUsersInfo20;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D06A27EF-0F2C-4169-8E42-86559D079D94")
    ICUsersInfo20 : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo20 **ppUserInfo20) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ICUserInfo20 *pUserInfo20) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUsersInfo20Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUsersInfo20 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUsersInfo20 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUsersInfo20 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUsersInfo20 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUsersInfo20 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUsersInfo20 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUsersInfo20 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICUsersInfo20 * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICUsersInfo20 * This,
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo20 **ppUserInfo20);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICUsersInfo20 * This,
            /* [retval][out] */ long *pnCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICUsersInfo20 * This,
            /* [in] */ ICUserInfo20 *pUserInfo20);
        
        END_INTERFACE
    } ICUsersInfo20Vtbl;

    interface ICUsersInfo20
    {
        CONST_VTBL struct ICUsersInfo20Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUsersInfo20_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUsersInfo20_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUsersInfo20_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUsersInfo20_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUsersInfo20_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUsersInfo20_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUsersInfo20_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUsersInfo20_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define ICUsersInfo20_get_Item(This,n,ppUserInfo20)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppUserInfo20) ) 

#define ICUsersInfo20_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ICUsersInfo20_Add(This,pUserInfo20)	\
    ( (This)->lpVtbl -> Add(This,pUserInfo20) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUsersInfo20_INTERFACE_DEFINED__ */


#ifndef __ICUsersInfo23_INTERFACE_DEFINED__
#define __ICUsersInfo23_INTERFACE_DEFINED__

/* interface ICUsersInfo23 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICUsersInfo23;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E0823A05-4F9B-420B-ADF5-A214E07615C7")
    ICUsersInfo23 : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo23 **ppUserInfo23) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ICUserInfo23 *pUserInfo23) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICUsersInfo23Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICUsersInfo23 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICUsersInfo23 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICUsersInfo23 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICUsersInfo23 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICUsersInfo23 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICUsersInfo23 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICUsersInfo23 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICUsersInfo23 * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICUsersInfo23 * This,
            /* [in] */ long n,
            /* [retval][out] */ ICUserInfo23 **ppUserInfo23);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICUsersInfo23 * This,
            /* [retval][out] */ long *pnCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICUsersInfo23 * This,
            /* [in] */ ICUserInfo23 *pUserInfo23);
        
        END_INTERFACE
    } ICUsersInfo23Vtbl;

    interface ICUsersInfo23
    {
        CONST_VTBL struct ICUsersInfo23Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICUsersInfo23_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICUsersInfo23_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICUsersInfo23_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICUsersInfo23_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICUsersInfo23_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICUsersInfo23_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICUsersInfo23_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICUsersInfo23_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define ICUsersInfo23_get_Item(This,n,ppUserInfo23)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppUserInfo23) ) 

#define ICUsersInfo23_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ICUsersInfo23_Add(This,pUserInfo23)	\
    ( (This)->lpVtbl -> Add(This,pUserInfo23) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUsersInfo23_INTERFACE_DEFINED__ */


#ifndef __ICGroupUserInfo0_INTERFACE_DEFINED__
#define __ICGroupUserInfo0_INTERFACE_DEFINED__

/* interface ICGroupUserInfo0 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICGroupUserInfo0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6A782E23-3986-44F0-A2A4-0692C109C022")
    ICGroupUserInfo0 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsName) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICGroupUserInfo0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICGroupUserInfo0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICGroupUserInfo0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICGroupUserInfo0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICGroupUserInfo0 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICGroupUserInfo0 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICGroupUserInfo0 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICGroupUserInfo0 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICGroupUserInfo0 * This,
            /* [in] */ BSTR bsName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICGroupUserInfo0 * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ICGroupUserInfo0Vtbl;

    interface ICGroupUserInfo0
    {
        CONST_VTBL struct ICGroupUserInfo0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICGroupUserInfo0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICGroupUserInfo0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICGroupUserInfo0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICGroupUserInfo0_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICGroupUserInfo0_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICGroupUserInfo0_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICGroupUserInfo0_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICGroupUserInfo0_Initialise(This,bsName)	\
    ( (This)->lpVtbl -> Initialise(This,bsName) ) 

#define ICGroupUserInfo0_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICGroupUserInfo0_INTERFACE_DEFINED__ */


#ifndef __ICGroupsUserInfo0_INTERFACE_DEFINED__
#define __ICGroupsUserInfo0_INTERFACE_DEFINED__

/* interface ICGroupsUserInfo0 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICGroupsUserInfo0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5AD6D8F7-2974-4C6A-8309-535A7E711D69")
    ICGroupsUserInfo0 : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICGroupUserInfo0 **ppGroupUserInfo0) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ICGroupUserInfo0 *pGroupUserInfo0) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICGroupsUserInfo0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICGroupsUserInfo0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICGroupsUserInfo0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICGroupsUserInfo0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICGroupsUserInfo0 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICGroupsUserInfo0 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICGroupsUserInfo0 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICGroupsUserInfo0 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICGroupsUserInfo0 * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICGroupsUserInfo0 * This,
            /* [in] */ long n,
            /* [retval][out] */ ICGroupUserInfo0 **ppGroupUserInfo0);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICGroupsUserInfo0 * This,
            /* [retval][out] */ long *pnCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICGroupsUserInfo0 * This,
            /* [in] */ ICGroupUserInfo0 *pGroupUserInfo0);
        
        END_INTERFACE
    } ICGroupsUserInfo0Vtbl;

    interface ICGroupsUserInfo0
    {
        CONST_VTBL struct ICGroupsUserInfo0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICGroupsUserInfo0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICGroupsUserInfo0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICGroupsUserInfo0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICGroupsUserInfo0_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICGroupsUserInfo0_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICGroupsUserInfo0_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICGroupsUserInfo0_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICGroupsUserInfo0_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define ICGroupsUserInfo0_get_Item(This,n,ppGroupUserInfo0)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppGroupUserInfo0) ) 

#define ICGroupsUserInfo0_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ICGroupsUserInfo0_Add(This,pGroupUserInfo0)	\
    ( (This)->lpVtbl -> Add(This,pGroupUserInfo0) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICGroupsUserInfo0_INTERFACE_DEFINED__ */


#ifndef __ICGroupUserInfo1_INTERFACE_DEFINED__
#define __ICGroupUserInfo1_INTERFACE_DEFINED__

/* interface ICGroupUserInfo1 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICGroupUserInfo1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8F144BC6-A45D-4BD6-828F-5D3FE5AA937B")
    ICGroupUserInfo1 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsName,
            /* [in] */ ULONG ulAttributes) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Attributes( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICGroupUserInfo1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICGroupUserInfo1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICGroupUserInfo1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICGroupUserInfo1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICGroupUserInfo1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICGroupUserInfo1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICGroupUserInfo1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICGroupUserInfo1 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICGroupUserInfo1 * This,
            /* [in] */ BSTR bsName,
            /* [in] */ ULONG ulAttributes);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICGroupUserInfo1 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            ICGroupUserInfo1 * This,
            /* [retval][out] */ ULONG *pVal);
        
        END_INTERFACE
    } ICGroupUserInfo1Vtbl;

    interface ICGroupUserInfo1
    {
        CONST_VTBL struct ICGroupUserInfo1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICGroupUserInfo1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICGroupUserInfo1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICGroupUserInfo1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICGroupUserInfo1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICGroupUserInfo1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICGroupUserInfo1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICGroupUserInfo1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICGroupUserInfo1_Initialise(This,bsName,ulAttributes)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,ulAttributes) ) 

#define ICGroupUserInfo1_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ICGroupUserInfo1_get_Attributes(This,pVal)	\
    ( (This)->lpVtbl -> get_Attributes(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICGroupUserInfo1_INTERFACE_DEFINED__ */


#ifndef __ICGroupsUserInfo1_INTERFACE_DEFINED__
#define __ICGroupsUserInfo1_INTERFACE_DEFINED__

/* interface ICGroupsUserInfo1 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICGroupsUserInfo1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CADE0F40-6E57-4B31-B13C-119D02FD85DF")
    ICGroupsUserInfo1 : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICGroupUserInfo1 **ppGroupUserInfo1) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ICGroupUserInfo1 *pGroupUserInfo1) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICGroupsUserInfo1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICGroupsUserInfo1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICGroupsUserInfo1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICGroupsUserInfo1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICGroupsUserInfo1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICGroupsUserInfo1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICGroupsUserInfo1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICGroupsUserInfo1 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICGroupsUserInfo1 * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICGroupsUserInfo1 * This,
            /* [in] */ long n,
            /* [retval][out] */ ICGroupUserInfo1 **ppGroupUserInfo1);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICGroupsUserInfo1 * This,
            /* [retval][out] */ long *pnCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICGroupsUserInfo1 * This,
            /* [in] */ ICGroupUserInfo1 *pGroupUserInfo1);
        
        END_INTERFACE
    } ICGroupsUserInfo1Vtbl;

    interface ICGroupsUserInfo1
    {
        CONST_VTBL struct ICGroupsUserInfo1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICGroupsUserInfo1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICGroupsUserInfo1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICGroupsUserInfo1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICGroupsUserInfo1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICGroupsUserInfo1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICGroupsUserInfo1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICGroupsUserInfo1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICGroupsUserInfo1_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define ICGroupsUserInfo1_get_Item(This,n,ppGroupUserInfo1)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppGroupUserInfo1) ) 

#define ICGroupsUserInfo1_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ICGroupsUserInfo1_Add(This,pGroupUserInfo1)	\
    ( (This)->lpVtbl -> Add(This,pGroupUserInfo1) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICGroupsUserInfo1_INTERFACE_DEFINED__ */


#ifndef __ICLocalGroupUserInfo0_INTERFACE_DEFINED__
#define __ICLocalGroupUserInfo0_INTERFACE_DEFINED__

/* interface ICLocalGroupUserInfo0 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICLocalGroupUserInfo0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CECBA229-0710-4C7D-A33B-653ED87D40FB")
    ICLocalGroupUserInfo0 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialise( 
            /* [in] */ BSTR bsName) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICLocalGroupUserInfo0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICLocalGroupUserInfo0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICLocalGroupUserInfo0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICLocalGroupUserInfo0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICLocalGroupUserInfo0 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICLocalGroupUserInfo0 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICLocalGroupUserInfo0 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICLocalGroupUserInfo0 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialise )( 
            ICLocalGroupUserInfo0 * This,
            /* [in] */ BSTR bsName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICLocalGroupUserInfo0 * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ICLocalGroupUserInfo0Vtbl;

    interface ICLocalGroupUserInfo0
    {
        CONST_VTBL struct ICLocalGroupUserInfo0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICLocalGroupUserInfo0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICLocalGroupUserInfo0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICLocalGroupUserInfo0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICLocalGroupUserInfo0_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICLocalGroupUserInfo0_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICLocalGroupUserInfo0_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICLocalGroupUserInfo0_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICLocalGroupUserInfo0_Initialise(This,bsName)	\
    ( (This)->lpVtbl -> Initialise(This,bsName) ) 

#define ICLocalGroupUserInfo0_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLocalGroupUserInfo0_INTERFACE_DEFINED__ */


#ifndef __ICLocalGroupsUserInfo0_INTERFACE_DEFINED__
#define __ICLocalGroupsUserInfo0_INTERFACE_DEFINED__

/* interface ICLocalGroupsUserInfo0 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICLocalGroupsUserInfo0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0EB1120A-4651-49B9-BC6D-B882984B7FBD")
    ICLocalGroupsUserInfo0 : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICLocalGroupUserInfo0 **ppLocalGroupUserInfo0) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ICLocalGroupUserInfo0 *pLocalGroupUserInfo0) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICLocalGroupsUserInfo0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICLocalGroupsUserInfo0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICLocalGroupsUserInfo0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICLocalGroupsUserInfo0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICLocalGroupsUserInfo0 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICLocalGroupsUserInfo0 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICLocalGroupsUserInfo0 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICLocalGroupsUserInfo0 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICLocalGroupsUserInfo0 * This,
            /* [retval][out] */ IUnknown **ppUnk);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICLocalGroupsUserInfo0 * This,
            /* [in] */ long n,
            /* [retval][out] */ ICLocalGroupUserInfo0 **ppLocalGroupUserInfo0);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICLocalGroupsUserInfo0 * This,
            /* [retval][out] */ long *pnCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICLocalGroupsUserInfo0 * This,
            /* [in] */ ICLocalGroupUserInfo0 *pLocalGroupUserInfo0);
        
        END_INTERFACE
    } ICLocalGroupsUserInfo0Vtbl;

    interface ICLocalGroupsUserInfo0
    {
        CONST_VTBL struct ICLocalGroupsUserInfo0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICLocalGroupsUserInfo0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICLocalGroupsUserInfo0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICLocalGroupsUserInfo0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICLocalGroupsUserInfo0_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICLocalGroupsUserInfo0_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICLocalGroupsUserInfo0_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICLocalGroupsUserInfo0_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICLocalGroupsUserInfo0_get__NewEnum(This,ppUnk)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 

#define ICLocalGroupsUserInfo0_get_Item(This,n,ppLocalGroupUserInfo0)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppLocalGroupUserInfo0) ) 

#define ICLocalGroupsUserInfo0_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ICLocalGroupsUserInfo0_Add(This,pLocalGroupUserInfo0)	\
    ( (This)->lpVtbl -> Add(This,pLocalGroupUserInfo0) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLocalGroupsUserInfo0_INTERFACE_DEFINED__ */


#ifndef __ICNetUser_INTERFACE_DEFINED__
#define __ICNetUser_INTERFACE_DEFINED__

/* interface ICNetUser */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICNetUser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6F0101CF-7948-4472-8542-044189587EFB")
    ICNetUser : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo0( 
            /* [in] */ BSTR bsName,
            /* [retval][out] */ ICUserInfo0 **ppUserInfo0) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPwd,
            /* [in] */ ULONG ulPwdAge,
            /* [in] */ ULONG ulPriv,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [retval][out] */ ICUserInfo1 **ppUserInfo1) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo2( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage,
            /* [retval][out] */ ICUserInfo2 **ppUserInfo2) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo3( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage,
            /* [in] */ ULONG ulUserId,
            /* [in] */ ULONG ulPrimaryGrpId,
            /* [in] */ BSTR bsProfile,
            /* [in] */ BSTR bsHomeDirDrive,
            /* [in] */ ULONG ulPwdExpired,
            /* [retval][out] */ ICUserInfo3 **ppUserInfo3) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo4( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage,
            /* [in] */ BSTR bsUserSid,
            /* [in] */ ULONG ulPrimaryGrpId,
            /* [in] */ BSTR bsProfile,
            /* [in] */ BSTR bsHomeDirDrive,
            /* [in] */ ULONG ulPwdExpired,
            /* [retval][out] */ ICUserInfo4 **ppUserInfo4) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo10( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsComment,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsFullName,
            /* [retval][out] */ ICUserInfo10 **ppUserInfo10) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo11( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsComment,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsFullName,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsParams,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulCodePage,
            /* [retval][out] */ ICUserInfo11 **ppUserInfo11) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo20( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ ULONG ulUserId,
            /* [retval][out] */ ICUserInfo20 **ppUserInfo20) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo21( 
            /* [in] */ BSTR bsPassword,
            /* [retval][out] */ ICUserInfo21 **ppUserInfo21) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo22( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage,
            /* [retval][out] */ ICUserInfo22 **ppUserInfo22) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo23( 
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsUserSid,
            /* [retval][out] */ ICUserInfo23 **ppUserInfo23) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo24( 
            /* [in] */ SHORT shInternetIdentity,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsInternetProviderName,
            /* [in] */ BSTR bsInternetPrincipleName,
            /* [in] */ BSTR bsUserSid,
            /* [retval][out] */ ICUserInfo24 **ppUserInfo24) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1003( 
            /* [in] */ BSTR bsPassword,
            /* [retval][out] */ ICUserInfo1003 **ppUserInfo1003) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1005( 
            /* [in] */ ULONG ulPrivilege,
            /* [retval][out] */ ICUserInfo1005 **ppUserInfo1005) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1006( 
            /* [in] */ BSTR bsHomeDir,
            /* [retval][out] */ ICUserInfo1006 **ppUserInfo1006) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1007( 
            /* [in] */ BSTR bsComment,
            /* [retval][out] */ ICUserInfo1007 **ppUserInfo1007) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1008( 
            /* [in] */ ULONG ulFlags,
            /* [retval][out] */ ICUserInfo1008 **ppUserInfo1008) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1009( 
            /* [in] */ BSTR bsScriptPath,
            /* [retval][out] */ ICUserInfo1009 **ppUserInfo1009) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1010( 
            /* [in] */ ULONG ulAuthFlags,
            /* [retval][out] */ ICUserInfo1010 **ppUserInfo1010) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1011( 
            /* [in] */ BSTR bsFullName,
            /* [retval][out] */ ICUserInfo1011 **ppUserInfo1011) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1012( 
            /* [in] */ BSTR bsUsrComment,
            /* [retval][out] */ ICUserInfo1012 **ppUserInfo1012) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1013( 
            /* [in] */ BSTR bsParams,
            /* [retval][out] */ ICUserInfo1013 **ppUserInfo1013) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1014( 
            /* [in] */ BSTR bsWorkstations,
            /* [retval][out] */ ICUserInfo1014 **ppUserInfo1014) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1017( 
            /* [in] */ ULONG ulAccntExpires,
            /* [retval][out] */ ICUserInfo1017 **ppUserInfo1017) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1018( 
            /* [in] */ ULONG ulMaxStorage,
            /* [retval][out] */ ICUserInfo1018 **ppUserInfo1018) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1020( 
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [retval][out] */ ICUserInfo1020 **ppUserInfo1020) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1023( 
            /* [in] */ BSTR bsLogonServer,
            /* [retval][out] */ ICUserInfo1023 **ppUserInfo1023) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1024( 
            /* [in] */ ULONG ulCountryCode,
            /* [retval][out] */ ICUserInfo1024 **ppUserInfo1024) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1025( 
            /* [in] */ ULONG ulCodePage,
            /* [retval][out] */ ICUserInfo1025 **ppUserInfo1025) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1051( 
            /* [in] */ ULONG ulPrimaryGrpId,
            /* [retval][out] */ ICUserInfo1051 **ppUserInfo1051) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1052( 
            /* [in] */ BSTR bsProfile,
            /* [retval][out] */ ICUserInfo1052 **ppUserInfo1052) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetUserInfo1053( 
            /* [in] */ BSTR bsHomeDirDrive,
            /* [retval][out] */ ICUserInfo1053 **ppUserInfo1053) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserAdd( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ eUserInfoType userInfoType,
            /* [in] */ IUnknown *pUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserDel( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo0( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo0 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetLogonHoursAllActive( 
            /* [retval][out] */ ICLogonHours **pLogonHours) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserSetInfo( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [in] */ eUserInfoType userInfoType,
            /* [in] */ IUnknown *pUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo2( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo2 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo3( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo3 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo4( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo4 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo10( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo10 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo11( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo11 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo20( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo20 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo23( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo23 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo24( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo24 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1003( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1003 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1005( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1005 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1006( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1006 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1007( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1007 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1008( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1008 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1009( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1009 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1010( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1010 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1011( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1011 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1012( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1012 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1014( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1014 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1017( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1017 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1020( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1020 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1024( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1024 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1051( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1051 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1052( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1052 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo1053( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1053 **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserChangePassword( 
            /* [in] */ BSTR bsDomainName,
            /* [in] */ BSTR bsUserName,
            /* [in] */ BSTR bsOldPwd,
            /* [in] */ BSTR bsNewPwd) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserEnum0( 
            /* [in] */ BSTR bsServerName,
            /* [retval][out] */ ICUsersInfo0 **ppUsersInfo0) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserEnum1( 
            /* [in] */ BSTR bsServerName,
            /* [retval][out] */ ICUsersInfo1 **ppUsersInfo1) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserEnum2( 
            /* [in] */ BSTR bsServerName,
            /* [retval][out] */ ICUsersInfo2 **ppUsersInfo2) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserEnum3( 
            /* [in] */ BSTR bsServerName,
            /* [retval][out] */ ICUsersInfo3 **ppUsersInfo3) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserEnum10( 
            /* [in] */ BSTR bsServerName,
            /* [retval][out] */ ICUsersInfo10 **ppUsersInfo10) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserEnum11( 
            /* [in] */ BSTR bsServerName,
            /* [retval][out] */ ICUsersInfo11 **ppUsersInfo11) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserEnum20( 
            /* [in] */ BSTR bsServerName,
            /* [retval][out] */ ICUsersInfo20 **ppUsersInfo20) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetGroups0( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICGroupsUserInfo0 **ppGroupsUserInfo0) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetGroups1( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICGroupsUserInfo1 **ppGroupsUserInfo1) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetLocalGroups0( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICLocalGroupsUserInfo0 **ppLocalGroupsUserInfo0) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICNetUserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICNetUser * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICNetUser * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICNetUser * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICNetUser * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICNetUser * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICNetUser * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICNetUser * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo0 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsName,
            /* [retval][out] */ ICUserInfo0 **ppUserInfo0);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPwd,
            /* [in] */ ULONG ulPwdAge,
            /* [in] */ ULONG ulPriv,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [retval][out] */ ICUserInfo1 **ppUserInfo1);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo2 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage,
            /* [retval][out] */ ICUserInfo2 **ppUserInfo2);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo3 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage,
            /* [in] */ ULONG ulUserId,
            /* [in] */ ULONG ulPrimaryGrpId,
            /* [in] */ BSTR bsProfile,
            /* [in] */ BSTR bsHomeDirDrive,
            /* [in] */ ULONG ulPwdExpired,
            /* [retval][out] */ ICUserInfo3 **ppUserInfo3);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo4 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage,
            /* [in] */ BSTR bsUserSid,
            /* [in] */ ULONG ulPrimaryGrpId,
            /* [in] */ BSTR bsProfile,
            /* [in] */ BSTR bsHomeDirDrive,
            /* [in] */ ULONG ulPwdExpired,
            /* [retval][out] */ ICUserInfo4 **ppUserInfo4);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo10 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsComment,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsFullName,
            /* [retval][out] */ ICUserInfo10 **ppUserInfo10);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo11 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsComment,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsFullName,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsParams,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulCodePage,
            /* [retval][out] */ ICUserInfo11 **ppUserInfo11);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo20 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ ULONG ulUserId,
            /* [retval][out] */ ICUserInfo20 **ppUserInfo20);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo21 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsPassword,
            /* [retval][out] */ ICUserInfo21 **ppUserInfo21);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo22 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsPassword,
            /* [in] */ ULONG ulPasswordAge,
            /* [in] */ ULONG ulPrivilege,
            /* [in] */ BSTR bsHomeDir,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsScriptPath,
            /* [in] */ ULONG ulAuthFlags,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsUsrComment,
            /* [in] */ BSTR bsParams,
            /* [in] */ BSTR bsWorkstations,
            /* [in] */ ULONG ulLastLogon,
            /* [in] */ ULONG ulLastLogoff,
            /* [in] */ ULONG ulAccntExpires,
            /* [in] */ ULONG ulMaxStorage,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage,
            /* [retval][out] */ ICUserInfo22 **ppUserInfo22);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo23 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsName,
            /* [in] */ BSTR bsFullName,
            /* [in] */ BSTR bsComment,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsUserSid,
            /* [retval][out] */ ICUserInfo23 **ppUserInfo23);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo24 )( 
            ICNetUser * This,
            /* [in] */ SHORT shInternetIdentity,
            /* [in] */ ULONG ulFlags,
            /* [in] */ BSTR bsInternetProviderName,
            /* [in] */ BSTR bsInternetPrincipleName,
            /* [in] */ BSTR bsUserSid,
            /* [retval][out] */ ICUserInfo24 **ppUserInfo24);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1003 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsPassword,
            /* [retval][out] */ ICUserInfo1003 **ppUserInfo1003);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1005 )( 
            ICNetUser * This,
            /* [in] */ ULONG ulPrivilege,
            /* [retval][out] */ ICUserInfo1005 **ppUserInfo1005);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1006 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsHomeDir,
            /* [retval][out] */ ICUserInfo1006 **ppUserInfo1006);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1007 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsComment,
            /* [retval][out] */ ICUserInfo1007 **ppUserInfo1007);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1008 )( 
            ICNetUser * This,
            /* [in] */ ULONG ulFlags,
            /* [retval][out] */ ICUserInfo1008 **ppUserInfo1008);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1009 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsScriptPath,
            /* [retval][out] */ ICUserInfo1009 **ppUserInfo1009);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1010 )( 
            ICNetUser * This,
            /* [in] */ ULONG ulAuthFlags,
            /* [retval][out] */ ICUserInfo1010 **ppUserInfo1010);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1011 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsFullName,
            /* [retval][out] */ ICUserInfo1011 **ppUserInfo1011);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1012 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsUsrComment,
            /* [retval][out] */ ICUserInfo1012 **ppUserInfo1012);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1013 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsParams,
            /* [retval][out] */ ICUserInfo1013 **ppUserInfo1013);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1014 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsWorkstations,
            /* [retval][out] */ ICUserInfo1014 **ppUserInfo1014);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1017 )( 
            ICNetUser * This,
            /* [in] */ ULONG ulAccntExpires,
            /* [retval][out] */ ICUserInfo1017 **ppUserInfo1017);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1018 )( 
            ICNetUser * This,
            /* [in] */ ULONG ulMaxStorage,
            /* [retval][out] */ ICUserInfo1018 **ppUserInfo1018);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1020 )( 
            ICNetUser * This,
            /* [in] */ ULONG ulUnitsPerWeek,
            /* [in] */ ICLogonHours *pLogonHours,
            /* [retval][out] */ ICUserInfo1020 **ppUserInfo1020);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1023 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsLogonServer,
            /* [retval][out] */ ICUserInfo1023 **ppUserInfo1023);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1024 )( 
            ICNetUser * This,
            /* [in] */ ULONG ulCountryCode,
            /* [retval][out] */ ICUserInfo1024 **ppUserInfo1024);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1025 )( 
            ICNetUser * This,
            /* [in] */ ULONG ulCodePage,
            /* [retval][out] */ ICUserInfo1025 **ppUserInfo1025);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1051 )( 
            ICNetUser * This,
            /* [in] */ ULONG ulPrimaryGrpId,
            /* [retval][out] */ ICUserInfo1051 **ppUserInfo1051);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1052 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsProfile,
            /* [retval][out] */ ICUserInfo1052 **ppUserInfo1052);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetUserInfo1053 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsHomeDirDrive,
            /* [retval][out] */ ICUserInfo1053 **ppUserInfo1053);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserAdd )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ eUserInfoType userInfoType,
            /* [in] */ IUnknown *pUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserDel )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo0 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo0 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetLogonHoursAllActive )( 
            ICNetUser * This,
            /* [retval][out] */ ICLogonHours **pLogonHours);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserSetInfo )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [in] */ eUserInfoType userInfoType,
            /* [in] */ IUnknown *pUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo2 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo2 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo3 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo3 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo4 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo4 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo10 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo10 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo11 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo11 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo20 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo20 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo23 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo23 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo24 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo24 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1003 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1003 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1005 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1005 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1006 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1006 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1007 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1007 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1008 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1008 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1009 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1009 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1010 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1010 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1011 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1011 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1012 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1012 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1014 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1014 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1017 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1017 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1020 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1020 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1024 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1024 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1051 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1051 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1052 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1052 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo1053 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICUserInfo1053 **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserChangePassword )( 
            ICNetUser * This,
            /* [in] */ BSTR bsDomainName,
            /* [in] */ BSTR bsUserName,
            /* [in] */ BSTR bsOldPwd,
            /* [in] */ BSTR bsNewPwd);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserEnum0 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [retval][out] */ ICUsersInfo0 **ppUsersInfo0);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserEnum1 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [retval][out] */ ICUsersInfo1 **ppUsersInfo1);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserEnum2 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [retval][out] */ ICUsersInfo2 **ppUsersInfo2);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserEnum3 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [retval][out] */ ICUsersInfo3 **ppUsersInfo3);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserEnum10 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [retval][out] */ ICUsersInfo10 **ppUsersInfo10);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserEnum11 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [retval][out] */ ICUsersInfo11 **ppUsersInfo11);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserEnum20 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [retval][out] */ ICUsersInfo20 **ppUsersInfo20);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetGroups0 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICGroupsUserInfo0 **ppGroupsUserInfo0);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetGroups1 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICGroupsUserInfo1 **ppGroupsUserInfo1);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetLocalGroups0 )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [retval][out] */ ICLocalGroupsUserInfo0 **ppLocalGroupsUserInfo0);
        
        END_INTERFACE
    } ICNetUserVtbl;

    interface ICNetUser
    {
        CONST_VTBL struct ICNetUserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICNetUser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICNetUser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICNetUser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICNetUser_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICNetUser_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICNetUser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICNetUser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICNetUser_GetUserInfo0(This,bsName,ppUserInfo0)	\
    ( (This)->lpVtbl -> GetUserInfo0(This,bsName,ppUserInfo0) ) 

#define ICNetUser_GetUserInfo1(This,bsName,bsPwd,ulPwdAge,ulPriv,bsHomeDir,bsComment,ulFlags,bsScriptPath,ppUserInfo1)	\
    ( (This)->lpVtbl -> GetUserInfo1(This,bsName,bsPwd,ulPwdAge,ulPriv,bsHomeDir,bsComment,ulFlags,bsScriptPath,ppUserInfo1) ) 

#define ICNetUser_GetUserInfo2(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ppUserInfo2)	\
    ( (This)->lpVtbl -> GetUserInfo2(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ppUserInfo2) ) 

#define ICNetUser_GetUserInfo3(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ulUserId,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired,ppUserInfo3)	\
    ( (This)->lpVtbl -> GetUserInfo3(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ulUserId,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired,ppUserInfo3) ) 

#define ICNetUser_GetUserInfo4(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,bsUserSid,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired,ppUserInfo4)	\
    ( (This)->lpVtbl -> GetUserInfo4(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,bsUserSid,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired,ppUserInfo4) ) 

#define ICNetUser_GetUserInfo10(This,bsName,bsComment,bsUsrComment,bsFullName,ppUserInfo10)	\
    ( (This)->lpVtbl -> GetUserInfo10(This,bsName,bsComment,bsUsrComment,bsFullName,ppUserInfo10) ) 

#define ICNetUser_GetUserInfo11(This,bsName,bsComment,bsUsrComment,bsFullName,ulPrivilege,ulAuthFlags,ulPasswordAge,bsHomeDir,bsParams,ulLastLogon,ulLastLogoff,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,bsWorkstations,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulCodePage,ppUserInfo11)	\
    ( (This)->lpVtbl -> GetUserInfo11(This,bsName,bsComment,bsUsrComment,bsFullName,ulPrivilege,ulAuthFlags,ulPasswordAge,bsHomeDir,bsParams,ulLastLogon,ulLastLogoff,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,bsWorkstations,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulCodePage,ppUserInfo11) ) 

#define ICNetUser_GetUserInfo20(This,bsName,bsFullName,bsComment,ulFlags,ulUserId,ppUserInfo20)	\
    ( (This)->lpVtbl -> GetUserInfo20(This,bsName,bsFullName,bsComment,ulFlags,ulUserId,ppUserInfo20) ) 

#define ICNetUser_GetUserInfo21(This,bsPassword,ppUserInfo21)	\
    ( (This)->lpVtbl -> GetUserInfo21(This,bsPassword,ppUserInfo21) ) 

#define ICNetUser_GetUserInfo22(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ppUserInfo22)	\
    ( (This)->lpVtbl -> GetUserInfo22(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,pLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ppUserInfo22) ) 

#define ICNetUser_GetUserInfo23(This,bsName,bsFullName,bsComment,ulFlags,bsUserSid,ppUserInfo23)	\
    ( (This)->lpVtbl -> GetUserInfo23(This,bsName,bsFullName,bsComment,ulFlags,bsUserSid,ppUserInfo23) ) 

#define ICNetUser_GetUserInfo24(This,shInternetIdentity,ulFlags,bsInternetProviderName,bsInternetPrincipleName,bsUserSid,ppUserInfo24)	\
    ( (This)->lpVtbl -> GetUserInfo24(This,shInternetIdentity,ulFlags,bsInternetProviderName,bsInternetPrincipleName,bsUserSid,ppUserInfo24) ) 

#define ICNetUser_GetUserInfo1003(This,bsPassword,ppUserInfo1003)	\
    ( (This)->lpVtbl -> GetUserInfo1003(This,bsPassword,ppUserInfo1003) ) 

#define ICNetUser_GetUserInfo1005(This,ulPrivilege,ppUserInfo1005)	\
    ( (This)->lpVtbl -> GetUserInfo1005(This,ulPrivilege,ppUserInfo1005) ) 

#define ICNetUser_GetUserInfo1006(This,bsHomeDir,ppUserInfo1006)	\
    ( (This)->lpVtbl -> GetUserInfo1006(This,bsHomeDir,ppUserInfo1006) ) 

#define ICNetUser_GetUserInfo1007(This,bsComment,ppUserInfo1007)	\
    ( (This)->lpVtbl -> GetUserInfo1007(This,bsComment,ppUserInfo1007) ) 

#define ICNetUser_GetUserInfo1008(This,ulFlags,ppUserInfo1008)	\
    ( (This)->lpVtbl -> GetUserInfo1008(This,ulFlags,ppUserInfo1008) ) 

#define ICNetUser_GetUserInfo1009(This,bsScriptPath,ppUserInfo1009)	\
    ( (This)->lpVtbl -> GetUserInfo1009(This,bsScriptPath,ppUserInfo1009) ) 

#define ICNetUser_GetUserInfo1010(This,ulAuthFlags,ppUserInfo1010)	\
    ( (This)->lpVtbl -> GetUserInfo1010(This,ulAuthFlags,ppUserInfo1010) ) 

#define ICNetUser_GetUserInfo1011(This,bsFullName,ppUserInfo1011)	\
    ( (This)->lpVtbl -> GetUserInfo1011(This,bsFullName,ppUserInfo1011) ) 

#define ICNetUser_GetUserInfo1012(This,bsUsrComment,ppUserInfo1012)	\
    ( (This)->lpVtbl -> GetUserInfo1012(This,bsUsrComment,ppUserInfo1012) ) 

#define ICNetUser_GetUserInfo1013(This,bsParams,ppUserInfo1013)	\
    ( (This)->lpVtbl -> GetUserInfo1013(This,bsParams,ppUserInfo1013) ) 

#define ICNetUser_GetUserInfo1014(This,bsWorkstations,ppUserInfo1014)	\
    ( (This)->lpVtbl -> GetUserInfo1014(This,bsWorkstations,ppUserInfo1014) ) 

#define ICNetUser_GetUserInfo1017(This,ulAccntExpires,ppUserInfo1017)	\
    ( (This)->lpVtbl -> GetUserInfo1017(This,ulAccntExpires,ppUserInfo1017) ) 

#define ICNetUser_GetUserInfo1018(This,ulMaxStorage,ppUserInfo1018)	\
    ( (This)->lpVtbl -> GetUserInfo1018(This,ulMaxStorage,ppUserInfo1018) ) 

#define ICNetUser_GetUserInfo1020(This,ulUnitsPerWeek,pLogonHours,ppUserInfo1020)	\
    ( (This)->lpVtbl -> GetUserInfo1020(This,ulUnitsPerWeek,pLogonHours,ppUserInfo1020) ) 

#define ICNetUser_GetUserInfo1023(This,bsLogonServer,ppUserInfo1023)	\
    ( (This)->lpVtbl -> GetUserInfo1023(This,bsLogonServer,ppUserInfo1023) ) 

#define ICNetUser_GetUserInfo1024(This,ulCountryCode,ppUserInfo1024)	\
    ( (This)->lpVtbl -> GetUserInfo1024(This,ulCountryCode,ppUserInfo1024) ) 

#define ICNetUser_GetUserInfo1025(This,ulCodePage,ppUserInfo1025)	\
    ( (This)->lpVtbl -> GetUserInfo1025(This,ulCodePage,ppUserInfo1025) ) 

#define ICNetUser_GetUserInfo1051(This,ulPrimaryGrpId,ppUserInfo1051)	\
    ( (This)->lpVtbl -> GetUserInfo1051(This,ulPrimaryGrpId,ppUserInfo1051) ) 

#define ICNetUser_GetUserInfo1052(This,bsProfile,ppUserInfo1052)	\
    ( (This)->lpVtbl -> GetUserInfo1052(This,bsProfile,ppUserInfo1052) ) 

#define ICNetUser_GetUserInfo1053(This,bsHomeDirDrive,ppUserInfo1053)	\
    ( (This)->lpVtbl -> GetUserInfo1053(This,bsHomeDirDrive,ppUserInfo1053) ) 

#define ICNetUser_NetUserAdd(This,bsServerName,userInfoType,pUserInfo)	\
    ( (This)->lpVtbl -> NetUserAdd(This,bsServerName,userInfoType,pUserInfo) ) 

#define ICNetUser_NetUserDel(This,bsServerName,bsUserName)	\
    ( (This)->lpVtbl -> NetUserDel(This,bsServerName,bsUserName) ) 

#define ICNetUser_NetUserGetInfo0(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo0(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_GetLogonHoursAllActive(This,pLogonHours)	\
    ( (This)->lpVtbl -> GetLogonHoursAllActive(This,pLogonHours) ) 

#define ICNetUser_NetUserSetInfo(This,bsServerName,bsUserName,userInfoType,pUserInfo)	\
    ( (This)->lpVtbl -> NetUserSetInfo(This,bsServerName,bsUserName,userInfoType,pUserInfo) ) 

#define ICNetUser_NetUserGetInfo1(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo2(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo2(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo3(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo3(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo4(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo4(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo10(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo10(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo11(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo11(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo20(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo20(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo23(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo23(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo24(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo24(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1003(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1003(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1005(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1005(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1006(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1006(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1007(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1007(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1008(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1008(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1009(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1009(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1010(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1010(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1011(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1011(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1012(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1012(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1014(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1014(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1017(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1017(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1020(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1020(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1024(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1024(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1051(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1051(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1052(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1052(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserGetInfo1053(This,bsServerName,bsUserName,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo1053(This,bsServerName,bsUserName,ppUserInfo) ) 

#define ICNetUser_NetUserChangePassword(This,bsDomainName,bsUserName,bsOldPwd,bsNewPwd)	\
    ( (This)->lpVtbl -> NetUserChangePassword(This,bsDomainName,bsUserName,bsOldPwd,bsNewPwd) ) 

#define ICNetUser_NetUserEnum0(This,bsServerName,ppUsersInfo0)	\
    ( (This)->lpVtbl -> NetUserEnum0(This,bsServerName,ppUsersInfo0) ) 

#define ICNetUser_NetUserEnum1(This,bsServerName,ppUsersInfo1)	\
    ( (This)->lpVtbl -> NetUserEnum1(This,bsServerName,ppUsersInfo1) ) 

#define ICNetUser_NetUserEnum2(This,bsServerName,ppUsersInfo2)	\
    ( (This)->lpVtbl -> NetUserEnum2(This,bsServerName,ppUsersInfo2) ) 

#define ICNetUser_NetUserEnum3(This,bsServerName,ppUsersInfo3)	\
    ( (This)->lpVtbl -> NetUserEnum3(This,bsServerName,ppUsersInfo3) ) 

#define ICNetUser_NetUserEnum10(This,bsServerName,ppUsersInfo10)	\
    ( (This)->lpVtbl -> NetUserEnum10(This,bsServerName,ppUsersInfo10) ) 

#define ICNetUser_NetUserEnum11(This,bsServerName,ppUsersInfo11)	\
    ( (This)->lpVtbl -> NetUserEnum11(This,bsServerName,ppUsersInfo11) ) 

#define ICNetUser_NetUserEnum20(This,bsServerName,ppUsersInfo20)	\
    ( (This)->lpVtbl -> NetUserEnum20(This,bsServerName,ppUsersInfo20) ) 

#define ICNetUser_NetUserGetGroups0(This,bsServerName,bsUserName,ppGroupsUserInfo0)	\
    ( (This)->lpVtbl -> NetUserGetGroups0(This,bsServerName,bsUserName,ppGroupsUserInfo0) ) 

#define ICNetUser_NetUserGetGroups1(This,bsServerName,bsUserName,ppGroupsUserInfo1)	\
    ( (This)->lpVtbl -> NetUserGetGroups1(This,bsServerName,bsUserName,ppGroupsUserInfo1) ) 

#define ICNetUser_NetUserGetLocalGroups0(This,bsServerName,bsUserName,ppLocalGroupsUserInfo0)	\
    ( (This)->lpVtbl -> NetUserGetLocalGroups0(This,bsServerName,bsUserName,ppLocalGroupsUserInfo0) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICNetUser_INTERFACE_DEFINED__ */



#ifndef __CWinNetManagerLib_LIBRARY_DEFINED__
#define __CWinNetManagerLib_LIBRARY_DEFINED__

/* library CWinNetManagerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_CWinNetManagerLib;

EXTERN_C const CLSID CLSID_CNetUser;

#ifdef __cplusplus

class DECLSPEC_UUID("0DDF380E-2C9E-404A-9B6C-1EBCAAF9607C")
CNetUser;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1;

#ifdef __cplusplus

class DECLSPEC_UUID("6C44397A-7257-4456-B53C-7CC1BF813528")
CUserInfo1;
#endif

EXTERN_C const CLSID CLSID_CUserInfo2;

#ifdef __cplusplus

class DECLSPEC_UUID("2DDD4CDA-8B20-4691-9DD5-74D2F38FC6C0")
CUserInfo2;
#endif

EXTERN_C const CLSID CLSID_CUserInfo3;

#ifdef __cplusplus

class DECLSPEC_UUID("F5DBD051-1A62-42E5-9969-68B9CEBC7883")
CUserInfo3;
#endif

EXTERN_C const CLSID CLSID_CUserInfo4;

#ifdef __cplusplus

class DECLSPEC_UUID("787E4219-89B2-4F4E-90D1-30D072670F97")
CUserInfo4;
#endif

EXTERN_C const CLSID CLSID_CUserInfo0;

#ifdef __cplusplus

class DECLSPEC_UUID("C037BEF2-BEBD-49E0-9DB6-4D4794779D7E")
CUserInfo0;
#endif

EXTERN_C const CLSID CLSID_CUserInfo10;

#ifdef __cplusplus

class DECLSPEC_UUID("8B3BBA8F-DA8F-42F0-AC4E-B2683F532288")
CUserInfo10;
#endif

EXTERN_C const CLSID CLSID_CUserInfo11;

#ifdef __cplusplus

class DECLSPEC_UUID("8CEBAEB7-C22C-4991-8EB0-C76C0B7AFD22")
CUserInfo11;
#endif

EXTERN_C const CLSID CLSID_CUserInfo20;

#ifdef __cplusplus

class DECLSPEC_UUID("7593B81E-BF5B-4891-A3C7-AAB1312EA8B1")
CUserInfo20;
#endif

EXTERN_C const CLSID CLSID_CUserInfo23;

#ifdef __cplusplus

class DECLSPEC_UUID("31B91AEE-9B62-4A72-B6C2-E52237599FB4")
CUserInfo23;
#endif

EXTERN_C const CLSID CLSID_CUserInfo24;

#ifdef __cplusplus

class DECLSPEC_UUID("8B9ECA46-8580-4938-A7DB-F43178B3CEDA")
CUserInfo24;
#endif

EXTERN_C const CLSID CLSID_CUserInfo21;

#ifdef __cplusplus

class DECLSPEC_UUID("9DE3BA70-1AA7-4285-B99F-6FC85D61DC8E")
CUserInfo21;
#endif

EXTERN_C const CLSID CLSID_CUserInfo22;

#ifdef __cplusplus

class DECLSPEC_UUID("0C3057B8-1401-4BC1-9FAE-963C8888A448")
CUserInfo22;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1003;

#ifdef __cplusplus

class DECLSPEC_UUID("0BDA0AF5-05A3-4C15-AAEA-416D6A4012F5")
CUserInfo1003;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1005;

#ifdef __cplusplus

class DECLSPEC_UUID("2179D331-C313-4F5F-BE6E-F1DF0CDCC5F2")
CUserInfo1005;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1006;

#ifdef __cplusplus

class DECLSPEC_UUID("36F830BD-D6D5-40DF-B67F-FCBFFF22FF28")
CUserInfo1006;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1007;

#ifdef __cplusplus

class DECLSPEC_UUID("1393F0E0-389E-46C0-863B-804404CD09EB")
CUserInfo1007;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1008;

#ifdef __cplusplus

class DECLSPEC_UUID("D424BA6C-EA4B-45B7-B54A-4C1ECB8B9B23")
CUserInfo1008;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1009;

#ifdef __cplusplus

class DECLSPEC_UUID("6D68995C-6E27-48B7-86D7-19FB43FE0158")
CUserInfo1009;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1010;

#ifdef __cplusplus

class DECLSPEC_UUID("F3B84B6C-8EBD-4463-AF55-1B4320DEBE88")
CUserInfo1010;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1011;

#ifdef __cplusplus

class DECLSPEC_UUID("1023B8C6-740A-4F44-B94C-F3DA519F330C")
CUserInfo1011;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1012;

#ifdef __cplusplus

class DECLSPEC_UUID("7BFC1A24-3D49-4039-9386-98301834E7E1")
CUserInfo1012;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1013;

#ifdef __cplusplus

class DECLSPEC_UUID("04543656-0900-4677-93A5-2B6C4BB73437")
CUserInfo1013;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1014;

#ifdef __cplusplus

class DECLSPEC_UUID("2037D943-73CC-43D7-86F2-78AF5CF0D929")
CUserInfo1014;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1017;

#ifdef __cplusplus

class DECLSPEC_UUID("2BC695D4-585E-43A4-BE74-F2C02B46A994")
CUserInfo1017;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1018;

#ifdef __cplusplus

class DECLSPEC_UUID("2C93746E-3F31-4E32-9E91-3CC0AD67AC1B")
CUserInfo1018;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1020;

#ifdef __cplusplus

class DECLSPEC_UUID("FF3A2DA0-7797-49CB-8491-D524F033109B")
CUserInfo1020;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1023;

#ifdef __cplusplus

class DECLSPEC_UUID("32E31B6D-29E3-49EA-8C88-37575DC7C812")
CUserInfo1023;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1025;

#ifdef __cplusplus

class DECLSPEC_UUID("46A671D6-F698-4B1E-AEAA-09BCD4463100")
CUserInfo1025;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1024;

#ifdef __cplusplus

class DECLSPEC_UUID("ECB6D3A7-E2D4-4F0E-964E-538A517FB7BF")
CUserInfo1024;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1051;

#ifdef __cplusplus

class DECLSPEC_UUID("555770A5-DFE2-4579-9197-83DF950AACA9")
CUserInfo1051;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1052;

#ifdef __cplusplus

class DECLSPEC_UUID("B4CAC0B5-B9A1-4DDC-AE3D-4A28B5CF5F98")
CUserInfo1052;
#endif

EXTERN_C const CLSID CLSID_CUserInfo1053;

#ifdef __cplusplus

class DECLSPEC_UUID("EE03A171-E0C5-41EA-A6F5-7C4707EAD7FD")
CUserInfo1053;
#endif

EXTERN_C const CLSID CLSID_CLogonHour;

#ifdef __cplusplus

class DECLSPEC_UUID("93C17FF1-D1E9-48F4-AE76-C95382A12B86")
CLogonHour;
#endif

EXTERN_C const CLSID CLSID_CLogonHours;

#ifdef __cplusplus

class DECLSPEC_UUID("A6C10DD1-C14C-4429-BB6A-CF2FC55E6073")
CLogonHours;
#endif

EXTERN_C const CLSID CLSID_CUsersInfo0;

#ifdef __cplusplus

class DECLSPEC_UUID("60B50DE1-A7CF-4F60-AFCF-AA46B2BADC9C")
CUsersInfo0;
#endif

EXTERN_C const CLSID CLSID_CUsersInfo1;

#ifdef __cplusplus

class DECLSPEC_UUID("B106262B-652C-458B-BE83-1EAAF807EE52")
CUsersInfo1;
#endif

EXTERN_C const CLSID CLSID_CUsersInfo2;

#ifdef __cplusplus

class DECLSPEC_UUID("AA8F2BC5-E301-4019-A9B3-9A8AD494CF7E")
CUsersInfo2;
#endif

EXTERN_C const CLSID CLSID_CUsersInfo3;

#ifdef __cplusplus

class DECLSPEC_UUID("7C52D6E8-CE0F-4877-A8B4-57B7F48941A5")
CUsersInfo3;
#endif

EXTERN_C const CLSID CLSID_CUsersInfo10;

#ifdef __cplusplus

class DECLSPEC_UUID("4CE5CC79-EFA5-47D4-897C-87EC6E9467BE")
CUsersInfo10;
#endif

EXTERN_C const CLSID CLSID_CUsersInfo11;

#ifdef __cplusplus

class DECLSPEC_UUID("B31EE0BE-9B48-415C-BD1D-3F42D267701C")
CUsersInfo11;
#endif

EXTERN_C const CLSID CLSID_CUsersInfo20;

#ifdef __cplusplus

class DECLSPEC_UUID("386EED73-DD10-41E6-A97F-483FAFF3EA16")
CUsersInfo20;
#endif

EXTERN_C const CLSID CLSID_CUsersInfo23;

#ifdef __cplusplus

class DECLSPEC_UUID("75D92636-750D-4880-9BF1-6EE08E1FC766")
CUsersInfo23;
#endif

EXTERN_C const CLSID CLSID_CGroupUserInfo0;

#ifdef __cplusplus

class DECLSPEC_UUID("3DD903CB-01D1-40BE-BFEB-513931362168")
CGroupUserInfo0;
#endif

EXTERN_C const CLSID CLSID_CGroupsUserInfo0;

#ifdef __cplusplus

class DECLSPEC_UUID("4B086E5E-70C1-4424-90B3-8CCD0A64944D")
CGroupsUserInfo0;
#endif

EXTERN_C const CLSID CLSID_CGroupUserInfo1;

#ifdef __cplusplus

class DECLSPEC_UUID("0DF2D039-C172-4D50-BB0D-C31E711F257B")
CGroupUserInfo1;
#endif

EXTERN_C const CLSID CLSID_CGroupsUserInfo1;

#ifdef __cplusplus

class DECLSPEC_UUID("40E54F89-9F42-4C52-8C05-E2F2047955FA")
CGroupsUserInfo1;
#endif

EXTERN_C const CLSID CLSID_CLocalGroupsUserInfo0;

#ifdef __cplusplus

class DECLSPEC_UUID("C4335A13-25C6-4B9A-8DAA-BDB207D1158D")
CLocalGroupsUserInfo0;
#endif

EXTERN_C const CLSID CLSID_CLocalGroupUserInfo0;

#ifdef __cplusplus

class DECLSPEC_UUID("0492574E-7E72-4F06-91D1-CB7DCE1D4FE1")
CLocalGroupUserInfo0;
#endif
#endif /* __CWinNetManagerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


