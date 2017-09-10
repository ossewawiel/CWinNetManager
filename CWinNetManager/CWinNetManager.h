

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sun Sep 10 15:13:31 2017
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

#ifndef __ICUserInfo0_FWD_DEFINED__
#define __ICUserInfo0_FWD_DEFINED__
typedef interface ICUserInfo0 ICUserInfo0;

#endif 	/* __ICUserInfo0_FWD_DEFINED__ */


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

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo0_INTERFACE_DEFINED__ */


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
            /* [retval][out] */ BYTE *pVal) = 0;
        
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
            /* [in] */ BYTE bLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage) = 0;
        
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
            /* [retval][out] */ BYTE *pVal);
        
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
            /* [in] */ BYTE bLogonHours,
            /* [in] */ ULONG ulBadPwdCount,
            /* [in] */ ULONG ulNumLogons,
            /* [in] */ BSTR bsLogonServer,
            /* [in] */ ULONG ulCountryCode,
            /* [in] */ ULONG ulCodePage);
        
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

#define ICUserInfo2_Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage) ) 

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
            /* [in] */ BYTE bLogonHours,
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
            /* [retval][out] */ BYTE *pVal) = 0;
        
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
            /* [in] */ BYTE bLogonHours,
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
            /* [retval][out] */ BYTE *pVal);
        
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


#define ICUserInfo3_Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ulUserId,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ulUserId,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired) ) 

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
            /* [in] */ BYTE bLogonHours,
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
            /* [retval][out] */ BYTE *pVal) = 0;
        
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
            /* [in] */ BYTE bLogonHours,
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
            /* [retval][out] */ BYTE *pVal);
        
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


#define ICUserInfo4_Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,bsUserSid,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,bsUserSid,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired) ) 

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
            /* [in] */ BYTE bLogonHours,
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
            /* [retval][out] */ BYTE *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CodePage( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
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
            /* [in] */ BYTE bLogonHours,
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
            /* [retval][out] */ BYTE *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CodePage )( 
            ICUserInfo11 * This,
            /* [retval][out] */ ULONG *pVal);
        
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


#define ICUserInfo11_Initialise(This,bsName,bsComment,bsUsrComment,bsFullName,ulPrivilege,ulAuthFlags,ulPasswordAge,bsHomeDir,bsParams,ulLastLogon,ulLastLogoff,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,bsWorkstations,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulCodePage)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,bsComment,bsUsrComment,bsFullName,ulPrivilege,ulAuthFlags,ulPasswordAge,bsHomeDir,bsParams,ulLastLogon,ulLastLogoff,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,bsWorkstations,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulCodePage) ) 

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
            /* [in] */ BYTE bLogonHours,
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
            /* [retval][out] */ BYTE *pVal) = 0;
        
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
            /* [in] */ BYTE bLogonHours,
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
            /* [retval][out] */ BYTE *pVal);
        
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


#define ICUserInfo22_Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage)	\
    ( (This)->lpVtbl -> Initialise(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage) ) 

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

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1003_INTERFACE_DEFINED__ */


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
            /* [in] */ BYTE bLogonHours,
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
            /* [in] */ BYTE bLogonHours,
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
            /* [in] */ BYTE bLogonHours,
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
            /* [in] */ BYTE bLogonHours,
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
            /* [in] */ BYTE bLogonHours,
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
            /* [in] */ BYTE bLogonHours,
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
            /* [in] */ BYTE bLogonHours,
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
            /* [in] */ BYTE bLogonHours,
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
            /* [in] */ BYTE bLogonHours,
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
            /* [in] */ BYTE bLogonHours,
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

#define ICNetUser_GetUserInfo2(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ppUserInfo2)	\
    ( (This)->lpVtbl -> GetUserInfo2(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ppUserInfo2) ) 

#define ICNetUser_GetUserInfo3(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ulUserId,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired,ppUserInfo3)	\
    ( (This)->lpVtbl -> GetUserInfo3(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ulUserId,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired,ppUserInfo3) ) 

#define ICNetUser_GetUserInfo4(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,bsUserSid,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired,ppUserInfo4)	\
    ( (This)->lpVtbl -> GetUserInfo4(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,bsUserSid,ulPrimaryGrpId,bsProfile,bsHomeDirDrive,ulPwdExpired,ppUserInfo4) ) 

#define ICNetUser_GetUserInfo10(This,bsName,bsComment,bsUsrComment,bsFullName,ppUserInfo10)	\
    ( (This)->lpVtbl -> GetUserInfo10(This,bsName,bsComment,bsUsrComment,bsFullName,ppUserInfo10) ) 

#define ICNetUser_GetUserInfo11(This,bsName,bsComment,bsUsrComment,bsFullName,ulPrivilege,ulAuthFlags,ulPasswordAge,bsHomeDir,bsParams,ulLastLogon,ulLastLogoff,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,bsWorkstations,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulCodePage,ppUserInfo11)	\
    ( (This)->lpVtbl -> GetUserInfo11(This,bsName,bsComment,bsUsrComment,bsFullName,ulPrivilege,ulAuthFlags,ulPasswordAge,bsHomeDir,bsParams,ulLastLogon,ulLastLogoff,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,bsWorkstations,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulCodePage,ppUserInfo11) ) 

#define ICNetUser_GetUserInfo20(This,bsName,bsFullName,bsComment,ulFlags,ulUserId,ppUserInfo20)	\
    ( (This)->lpVtbl -> GetUserInfo20(This,bsName,bsFullName,bsComment,ulFlags,ulUserId,ppUserInfo20) ) 

#define ICNetUser_GetUserInfo21(This,bsPassword,ppUserInfo21)	\
    ( (This)->lpVtbl -> GetUserInfo21(This,bsPassword,ppUserInfo21) ) 

#define ICNetUser_GetUserInfo22(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ppUserInfo22)	\
    ( (This)->lpVtbl -> GetUserInfo22(This,bsName,bsPassword,ulPasswordAge,ulPrivilege,bsHomeDir,bsComment,ulFlags,bsScriptPath,ulAuthFlags,bsFullName,bsUsrComment,bsParams,bsWorkstations,ulLastLogon,ulLastLogoff,ulAccntExpires,ulMaxStorage,ulUnitsPerWeek,bLogonHours,ulBadPwdCount,ulNumLogons,bsLogonServer,ulCountryCode,ulCodePage,ppUserInfo22) ) 

#define ICNetUser_GetUserInfo23(This,bsName,bsFullName,bsComment,ulFlags,bsUserSid,ppUserInfo23)	\
    ( (This)->lpVtbl -> GetUserInfo23(This,bsName,bsFullName,bsComment,ulFlags,bsUserSid,ppUserInfo23) ) 

#define ICNetUser_GetUserInfo24(This,shInternetIdentity,ulFlags,bsInternetProviderName,bsInternetPrincipleName,bsUserSid,ppUserInfo24)	\
    ( (This)->lpVtbl -> GetUserInfo24(This,shInternetIdentity,ulFlags,bsInternetProviderName,bsInternetPrincipleName,bsUserSid,ppUserInfo24) ) 

#define ICNetUser_GetUserInfo1003(This,bsPassword,ppUserInfo1003)	\
    ( (This)->lpVtbl -> GetUserInfo1003(This,bsPassword,ppUserInfo1003) ) 

#define ICNetUser_NetUserAdd(This,bsServerName,pUserInfo)	\
    ( (This)->lpVtbl -> NetUserAdd(This,bsServerName,pUserInfo) ) 

#define ICNetUser_NetUserDel(This,bsServerName,bsUserName)	\
    ( (This)->lpVtbl -> NetUserDel(This,bsServerName,bsUserName) ) 

#define ICNetUser_NetUserGetInfo(This,bsServerName,bsUserName,userInfoType,ppUserInfo)	\
    ( (This)->lpVtbl -> NetUserGetInfo(This,bsServerName,bsUserName,userInfoType,ppUserInfo) ) 

#define ICNetUser_CastToUserInfo1(This,pUnk,ppUserInfo1)	\
    ( (This)->lpVtbl -> CastToUserInfo1(This,pUnk,ppUserInfo1) ) 

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


