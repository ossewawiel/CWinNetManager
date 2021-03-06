// CLogonHour.h : Declaration of the CCLogonHour

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCLogonHour

class ATL_NO_VTABLE CCLogonHour :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCLogonHour, &CLSID_CLogonHour>,
	public IDispatchImpl<ICLogonHour, &IID_ICLogonHour, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCLogonHour()
		: mshDay(0)
		, mshHour(0)
		, mbState(0)
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CLOGONHOUR)


BEGIN_COM_MAP(CCLogonHour)
	COM_INTERFACE_ENTRY(ICLogonHour)
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
	STDMETHOD(Initialise)(SHORT shDay, SHORT shHour, SHORT shActive);
	STDMETHOD(Activate)();
	STDMETHOD(Deactivate)();
	STDMETHOD(get_Day)(SHORT* pVal);
	STDMETHOD(get_Hour)(SHORT* pVal);
	STDMETHOD(get_State)(SHORT* pVal);

private:
	SHORT mshDay;
	SHORT mshHour;
	SHORT mbState;
};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CLogonHour), CCLogonHour)
