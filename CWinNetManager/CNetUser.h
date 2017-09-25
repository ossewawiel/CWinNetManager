// CNetUser.h : Declaration of the CCNetUser

#pragma once
#include "resource.h"       // main symbols
#include "CWinNetManager.h"
#include "CUserInfo0.h"
#include "CUserInfo1.h"
#include "CUserInfo2.h"
#include "CUserInfo3.h"
#include "CUserInfo4.h"
#include "CUserInfo10.h"
#include "CUserInfo11.h"
#include "CUserInfo20.h"
#include "CUserInfo21.h"
#include "CUserInfo22.h"
#include "CUserInfo23.h"
#include "CUserInfo24.h"
#include "CUserInfo1003.h"
#include "CUserInfo1005.h"
#include "CUserInfo1006.h"
#include "CUserInfo1007.h"
#include "CUserInfo1008.h"
#include "CUserInfo1009.h"
#include "CUserInfo1010.h"
#include "CUserInfo1011.h"
#include "CUserInfo1012.h"
#include "CUserInfo1013.h"
#include "CUserInfo1014.h"
#include "CUserInfo1017.h"
#include "CUserInfo1018.h"
#include "CUserInfo1020.h"
#include "CUserInfo1023.h"
#include "CUserInfo1024.h"
#include "CUserInfo1025.h"
#include "CUserInfo1051.h"
#include "CUserInfo1052.h"
#include "CUserInfo1053.h"
#include "CLogonHours.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCNetUser

class ATL_NO_VTABLE CCNetUser :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCNetUser, &CLSID_CNetUser>,
	public IDispatchImpl<ICNetUser, &IID_ICNetUser, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCNetUser()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNETUSER)


BEGIN_COM_MAP(CCNetUser)
	COM_INTERFACE_ENTRY(ICNetUser)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY_AGGREGATE(IID_IMarshal, m_pUnkMarshaler.p)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()
	DECLARE_GET_CONTROLLING_UNKNOWN()

	HRESULT FinalConstruct()
	{
		return CoCreateFreeThreadedMarshaler(
			GetControllingUnknown(), &m_pUnkMarshaler.p);
	}

	void FinalRelease()
	{
		m_pUnkMarshaler.Release();
	}

	CComPtr<IUnknown> m_pUnkMarshaler;

public:


	STDMETHOD(GetUserInfo0)(
		BSTR bsName
		, ICUserInfo0** ppUserInfo0);

	STDMETHOD(GetUserInfo1)(
		BSTR bsName
		, BSTR bsPwd
		, ULONG ulPwdAge
		, ULONG ulPriv
		, BSTR bsHomeDir
		, BSTR bsComment
		, ULONG ulFlags
		, BSTR bsScriptPath
		, ICUserInfo1** ppUserInfo1);

	STDMETHOD(GetUserInfo2)(
		BSTR bsName
		, BSTR bsPassword
		, ULONG ulPasswordAge
		, ULONG ulPrivilege
		, BSTR bsHomeDir
		, BSTR bsComment
		, ULONG ulFlags
		, BSTR bsScriptPath
		, ULONG ulAuthFlags
		, BSTR bsFullName
		, BSTR bsUsrComment
		, BSTR bsParams
		, BSTR bsWorkstations
		, ULONG ulLastLogon
		, ULONG ulLastLogoff
		, ULONG ulAccntExpires
		, ULONG ulMaxStorage
		, ULONG ulUnitsPerWeek
		, ICLogonHours* bLogonHours
		, ULONG ulBadPwdCount
		, ULONG ulNumLogons
		, BSTR bsLogonServer
		, ULONG ulCountryCode
		, ULONG ulCodePage
		, ICUserInfo2** ppUserInfo2);

	STDMETHOD(GetUserInfo3)(
		BSTR bsName
		, BSTR bsPassword
		, ULONG ulPasswordAge
		, ULONG ulPrivilege
		, BSTR bsHomeDir
		, BSTR bsComment
		, ULONG ulFlags
		, BSTR bsScriptPath
		, ULONG ulAuthFlags
		, BSTR bsFullName
		, BSTR bsUsrComment
		, BSTR bsParams
		, BSTR bsWorkstations
		, ULONG ulLastLogon
		, ULONG ulLastLogoff
		, ULONG ulAccntExpires
		, ULONG ulMaxStorage
		, ULONG ulUnitsPerWeek
		, ICLogonHours* bLogonHours
		, ULONG ulBadPwdCount
		, ULONG ulNumLogons
		, BSTR bsLogonServer
		, ULONG ulCountryCode
		, ULONG ulCodePage
		, ULONG ulUserId
		, ULONG ulPrimaryGrpId
		, BSTR bsProfile
		, BSTR bsHomeDirDrive
		, ULONG ulPwdExpired
		, ICUserInfo3** ppUserInfo3);

	STDMETHOD(GetUserInfo4)(
		BSTR bsName
		, BSTR bsPassword
		, ULONG ulPasswordAge
		, ULONG ulPrivilege
		, BSTR bsHomeDir
		, BSTR bsComment
		, ULONG ulFlags
		, BSTR bsScriptPath
		, ULONG ulAuthFlags
		, BSTR bsFullName
		, BSTR bsUsrComment
		, BSTR bsParams
		, BSTR bsWorkstations
		, ULONG ulLastLogon
		, ULONG ulLastLogoff
		, ULONG ulAccntExpires
		, ULONG ulMaxStorage
		, ULONG ulUnitsPerWeek
		, ICLogonHours* bLogonHours
		, ULONG ulBadPwdCount
		, ULONG ulNumLogons
		, BSTR bsLogonServer
		, ULONG ulCountryCode
		, ULONG ulCodePage
		, BSTR bsUserSid
		, ULONG ulPrimaryGrpId
		, BSTR bsProfile
		, BSTR bsHomeDirDrive
		, ULONG ulPwdExpired
		, ICUserInfo4** ppUserInfo4);

	STDMETHOD(GetUserInfo10)(
		  BSTR bsName
		, BSTR bsComment
		, BSTR bsUsrComment
		, BSTR bsFullName
		, ICUserInfo10** ppUserInfo10);

	STDMETHOD(GetUserInfo11)(
		  BSTR bsName
		, BSTR bsComment
		, BSTR bsUsrComment
		, BSTR bsFullName
		, ULONG ulPrivilege
		, ULONG ulAuthFlags
		, ULONG ulPasswordAge
		, BSTR bsHomeDir
		, BSTR bsParams
		, ULONG ulLastLogon
		, ULONG ulLastLogoff
		, ULONG ulBadPwdCount
		, ULONG ulNumLogons
		, BSTR bsLogonServer
		, ULONG ulCountryCode
		, BSTR bsWorkstations
		, ULONG ulMaxStorage
		, ULONG ulUnitsPerWeek
		, ICLogonHours* bLogonHours
		, ULONG ulCodePage
		, ICUserInfo11** ppUserInfo11);

	STDMETHOD(GetUserInfo20)(
		BSTR bsName
		, BSTR bsFullName
		, BSTR bsComment
		, ULONG ulFlags
		, ULONG ulUserId
		, ICUserInfo20** ppUserInfo20);

	STDMETHOD(GetUserInfo21)(BSTR bsPassword, ICUserInfo21** ppUserInfo21);

	STDMETHOD(GetUserInfo22)(
		BSTR bsName
		, BSTR bsPassword
		, ULONG ulPasswordAge
		, ULONG ulPrivilege
		, BSTR bsHomeDir
		, BSTR bsComment
		, ULONG ulFlags
		, BSTR bsScriptPath
		, ULONG ulAuthFlags
		, BSTR bsFullName
		, BSTR bsUsrComment
		, BSTR bsParams
		, BSTR bsWorkstations
		, ULONG ulLastLogon
		, ULONG ulLastLogoff
		, ULONG ulAccntExpires
		, ULONG ulMaxStorage
		, ULONG ulUnitsPerWeek
		, ICLogonHours* bLogonHours
		, ULONG ulBadPwdCount
		, ULONG ulNumLogons
		, BSTR bsLogonServer
		, ULONG ulCountryCode
		, ULONG ulCodePage
		, ICUserInfo22** ppUserInfo22);

	STDMETHOD(GetUserInfo23)(
		BSTR bsName
		, BSTR bsFullName
		, BSTR bsComment
		, ULONG ulFlags
		, BSTR bsUserSid
		, ICUserInfo23** ppUserInfo23);

	STDMETHOD(GetUserInfo24)(
		SHORT shInternetIdentity
		, ULONG ulFlags
		, BSTR bsInternetProviderName
		, BSTR bsInternetPrincipleName
		, BSTR bsUserSid
		, ICUserInfo24** ppUserInfo24);

	STDMETHOD(GetUserInfo1003)(BSTR bsPassword, ICUserInfo1003** ppUserInfo1003);
	STDMETHOD(GetUserInfo1005)(ULONG ulPrivilege, ICUserInfo1005** ppUserInfo1005);
	STDMETHOD(GetUserInfo1006)(BSTR bsHomeDir, ICUserInfo1006** ppUserInfo1006);
	STDMETHOD(GetUserInfo1007)(BSTR bsComment, ICUserInfo1007** ppUserInfo1007);
	STDMETHOD(GetUserInfo1008)(ULONG ulFlags, ICUserInfo1008** ppUserInfo1008);
	STDMETHOD(GetUserInfo1009)(BSTR bsScriptPath, ICUserInfo1009** ppUserInfo1009);
	STDMETHOD(GetUserInfo1010)(ULONG ulAuthFlags, ICUserInfo1010** ppUserInfo1010);
	STDMETHOD(GetUserInfo1011)(BSTR bsFullName, ICUserInfo1011** ppUserInfo1011);
	STDMETHOD(GetUserInfo1012)(BSTR bsUsrComment, ICUserInfo1012** ppUserInfo1012);
	STDMETHOD(GetUserInfo1013)(BSTR bsParams, ICUserInfo1013** ppUserInfo1013);
	STDMETHOD(GetUserInfo1014)(BSTR bsWorkstations, ICUserInfo1014** ppUserInfo1014);
	STDMETHOD(GetUserInfo1017)(ULONG ulAccntExpires, ICUserInfo1017** ppUserInfo1017);
	STDMETHOD(GetUserInfo1018)(ULONG ulMaxStorage, ICUserInfo1018** ppUserInfo1018);
	STDMETHOD(GetUserInfo1020)(
		ULONG ulUnitsPerWeek
		, ICLogonHours* bLogonHours
		, ICUserInfo1020** ppUserInfo1020);
	STDMETHOD(GetUserInfo1023)(BSTR bsLogonServer, ICUserInfo1023** ppUserInfo1023);
	STDMETHOD(GetUserInfo1024)(ULONG ulCountryCode, ICUserInfo1024** ppUserInfo1024);
	STDMETHOD(GetUserInfo1025)(ULONG ulCodePage, ICUserInfo1025** ppUserInfo1025);
	STDMETHOD(GetUserInfo1051)(ULONG ulPrimaryGrpId, ICUserInfo1051** ppUserInfo1051);
	STDMETHOD(GetUserInfo1052)(BSTR bsProfile, ICUserInfo1052** ppUserInfo1052);
	STDMETHOD(GetUserInfo1053)(BSTR bsHomeDirDrive, ICUserInfo1053** ppUserInfo1053);


	STDMETHOD(NetUserAdd)(BSTR bsServerName, eUserInfoType userInfoType, IUnknown* pUserInfo);
	STDMETHOD(NetUserDel)(BSTR bsServerName, BSTR bsUserName);
	STDMETHOD(NetUserGetInfo)(BSTR bsServerName, BSTR bsUserName, eUserInfoType userInfoType, IUnknown** ppUserInfo);
	STDMETHOD(CastToUserInfo1)(IUnknown* pUnk, ICUserInfo1** ppUserInfo1);

	private:
		HRESULT TranslateToUserInfo1(ICUserInfo1* pICUserInfo1, PUSER_INFO_1 pUserInfo1);
public:
	STDMETHOD(GetLogonHoursAllActive)(ICLogonHours** ppLogonHours);
};

OBJECT_ENTRY_AUTO(__uuidof(CNetUser), CCNetUser)
