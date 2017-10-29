// CUserModalsInfo3.h : Declaration of the CCUserModalsInfo3

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;
// CCUserModalsInfo3

class ATL_NO_VTABLE CCUserModalsInfo3 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserModalsInfo3, &CLSID_CUserModalsInfo3>,
	public IDispatchImpl<ICUserModalsInfo3, &IID_ICUserModalsInfo3, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserModalsInfo3()
		: mulLockoutDuration(0)
		, mulLockoutObservationWindow(0)
		, mulLockoutThreshold(0)
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERMODALSINFO3)


BEGIN_COM_MAP(CCUserModalsInfo3)
	COM_INTERFACE_ENTRY(ICUserModalsInfo3)
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

	static HRESULT TranslateFromUserModalsInfo(LPUSER_MODALS_INFO_3 & pFrom, ICUserModalsInfo3** ppTo);
	static HRESULT TranslateToUserModalsInfo(ICUserModalsInfo3 * pFrom, USER_MODALS_INFO_3 &pTo);
private:
	unsigned long mulLockoutDuration;
	unsigned long mulLockoutObservationWindow;
	unsigned long mulLockoutThreshold;
};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUserModalsInfo3), CCUserModalsInfo3)
