// CNetUserModals.h : Declaration of the CCNetUserModals

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"
#include "CUserModalsInfo0.h"
#include "CUserModalsInfo1.h"
#include "CUserModalsInfo2.h"
#include "CUserModalsInfo3.h"
#include "CUserModalsInfo1001.h"
#include "CUserModalsInfo1002.h"
#include "CUserModalsInfo1003.h"
#include "CUserModalsInfo1004.h"
#include "CUserModalsInfo1005.h"
#include "CUserModalsInfo1006.h"
#include "CUserModalsInfo1007.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCNetUserModals

class ATL_NO_VTABLE CCNetUserModals :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCNetUserModals, &CLSID_CNetUserModals>,
	public IDispatchImpl<ICNetUserModals, &IID_ICNetUserModals, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCNetUserModals()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNETUSERMODALS)


BEGIN_COM_MAP(CCNetUserModals)
	COM_INTERFACE_ENTRY(ICNetUserModals)
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
	STDMETHOD(NetUserModalsGet0)(BSTR bsServerName, ICUserModalsInfo0** ppUserModalsInfo0);
	STDMETHOD(NetUserModalsGet1)(BSTR bsServerName, ICUserModalsInfo1** ppUserModalsInfo1);
	STDMETHOD(NetUserModalsGet2)(BSTR bsServerName, ICUserModalsInfo2** ppUserModalsInfo2);
	STDMETHOD(NetUserModalsGet3)(BSTR bsServerName, ICUserModalsInfo3** ppUserModalsInfo3);
	STDMETHOD(GetUserModalsInfo0)(ULONG ulMinPwdLen, ULONG ulMaxPwdAge, ULONG ulMinPwdAge, ULONG ulForceLogoff, ULONG ulPwdHistLen, ICUserModalsInfo0** ppUserModalsInfo0);
	STDMETHOD(GetUserModalsInfo1)(ULONG ulRole, BSTR bsPrimary, ICUserModalsInfo1** ppUserModalsInfo1);
	STDMETHOD(GetUserModalsInfo2)(BSTR bsDomainName, BSTR bsDomainId, ICUserModalsInfo2** ppUserModalsInfo2);
	STDMETHOD(GetUserModalsInfo3)(ULONG ulLockoutDuration, ULONG ulLockoutObservationWindow, ULONG ulLockoutThreshold, ICUserModalsInfo3** ppUserModalsInfo3);
	STDMETHOD(GetUserModalsInfo1001)(ULONG ulMinPwdLen, ICUserModalsInfo1001** ppUserModalsInfo1001);
	STDMETHOD(GetUserModalsInfo1002)(ULONG ulMaxPwdAge, ICUserModalsInfo1002** ppUserModalsInfo1002);
	STDMETHOD(GetUserModalsInfo1003)(ULONG ulMinPwdAge, ICUserModalsInfo1003** ppUserModalsInfo1003);
	STDMETHOD(GetUserModalsInfo1004)(ULONG ulForceLogoff, ICUserModalsInfo1004** ppUserModalsInfo1004);
	STDMETHOD(GetUserModalsInfo1005)(ULONG ulPwdHistLen, ICUserModalsInfo1005** ppUserModalsInfo1005);
	STDMETHOD(GetUserModalsInfo1006)(ULONG ulRole, ICUserModalsInfo1006** ppUserModalsInfo1006);
	STDMETHOD(GetUserModalsInfo1007)(BSTR bsPrimary, ICUserModalsInfo1007** ppUserModalsInfo1007);
	STDMETHOD(NetUserModalsSet)(BSTR bsServerName, eUserModalsInfoType infoType, IUnknown* pUserModalsInfo);
};

OBJECT_ENTRY_AUTO(__uuidof(CNetUserModals), CCNetUserModals)
