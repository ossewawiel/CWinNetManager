

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat Sep 02 18:54:15 2017
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


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


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

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICUserInfo1_INTERFACE_DEFINED__ */


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


