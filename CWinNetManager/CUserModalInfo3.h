// CUserModalInfo3.h : Declaration of the CCUserModalInfo3

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCUserModalInfo3

class ATL_NO_VTABLE CCUserModalInfo3 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserModalInfo3, &CLSID_CUserModalInfo3>,
	public IDispatchImpl<ICUserModalInfo3, &IID_ICUserModalInfo3, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserModalInfo3()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERMODALINFO3)


BEGIN_COM_MAP(CCUserModalInfo3)
	COM_INTERFACE_ENTRY(ICUserModalInfo3)
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



	STDMETHOD(Initialise)(ULONG ulLockoutDuration, ULONG ulLockoutObservationWindow, ULONG ulLockoutThreshold);
	STDMETHOD(get_LockoutDuration)(ULONG* pVal);
	STDMETHOD(get_LockoutObservationWindow)(ULONG* pVal);
	STDMETHOD(get_LockoutThreshold)(ULONG* pVal);
};

OBJECT_ENTRY_AUTO(__uuidof(CUserModalInfo3), CCUserModalInfo3)
