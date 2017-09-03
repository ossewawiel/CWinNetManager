

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sun Sep 03 19:31:02 2017
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

#ifndef __ICUserInfo1_FWD_DEFINED__
#define __ICUserInfo1_FWD_DEFINED__
typedef interface ICUserInfo1 ICUserInfo1;

#endif 	/* __ICUserInfo1_FWD_DEFINED__ */


#ifndef __ICUserInfo2_FWD_DEFINED__
#define __ICUserInfo2_FWD_DEFINED__
typedef interface ICUserInfo2 ICUserInfo2;

#endif 	/* __ICUserInfo2_FWD_DEFINED__ */


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
        uiTYpe10	= 0x10,
        uiTYpe11	= 0x11,
        uiTYpe20	= 0x20,
        uiTYpe23	= 0x23,
        uiTYpe24	= 0x24
    } 	eUserInfoType;



extern RPC_IF_HANDLE __MIDL_itf_CWinNetManager_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_CWinNetManager_0000_0000_v0_0_s_ifspec;

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


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo2_INTERFACE_DEFINED__ */


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
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserAdd( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ IUnknown *pUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserDel( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NetUserGetInfo( 
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [in] */ eUserInfoType userInfoType,
            /* [retval][out] */ IUnknown **ppUserInfo) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CastToUserInfo1( 
            /* [in] */ IUnknown *pUnk,
            /* [retval][out] */ ICUserInfo1 **ppUserInfo1) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNetUserInfo2( 
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
            /* [in] */ BYTE bLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage,
            /* [retval][out] */ ICUserInfo2 **ppUserInfo2) = 0;
        
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserAdd )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ IUnknown *pUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserDel )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NetUserGetInfo )( 
            ICNetUser * This,
            /* [in] */ BSTR bsServerName,
            /* [in] */ BSTR bsUserName,
            /* [in] */ eUserInfoType userInfoType,
            /* [retval][out] */ IUnknown **ppUserInfo);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CastToUserInfo1 )( 
            ICNetUser * This,
            /* [in] */ IUnknown *pUnk,
            /* [retval][out] */ ICUserInfo1 **ppUserInfo1);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNetUserInfo2 )( 
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
            /* [in] */ BYTE bLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage,
            /* [retval][out] */ ICUserInfo2 **ppUserInfo2);
        
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


#define ICNetUser_GetUserInfo1(This,bsName,bsPwd,ulPwdAge,ulPriv,bsHomeDir,bsComment,ulFlags,bsScriptPath,ppUserInfo1)	\
    ( (This)->lpVtbl -> GetUserInfo1(This,bsName,bsPwd,ulPwdAge,ulPriv,bsHomeDir,bsComment,ulFlags,bsScriptPath,ppUserInfo1) ) 

#define ICNetUser_NetUserAdd(This,bsServerName,pUserInfo)	\
    ( (This)->lpVtbl -> NetUserAdd(This,bsServerName,pUserInfo) ) 

#define ICNetUser_NetUserDel(This,bsServerName,bsUserName)	\
    ( (This)->lpVtbl -> NetUserDel(This,bsServerName,bsUserName) ) 

#define ICNetUser_NetUserGetInfo(This,bsServerName,bsUserName,userInfoType,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo(This,bsServerName,bsUserName,userInfoType,ppUserInfo) ) 

#define ICNetUser_CastToUserInfo1(This,pUnk,ppUserInfo1)	\
    ( (This)->lpVtbl -> CastToUserInfo1(This,pUnk,ppUserInfo1) ) 

#define ICNetUser_GetNetUserInfo2(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ppUserInfo2)	\
    ( (This)->lpVtbl -> GetNetUserInfo2(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ppUserInfo2) ) 

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


