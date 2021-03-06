// CUserModalInfo2.h : Declaration of the CCUserModalInfo2

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCUserModalInfo2

class ATL_NO_VTABLE CCUserModalInfo2 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserModalInfo2, &CLSID_CUserModalInfo2>,
	public IDispatchImpl<ICUserModalInfo2, &IID_ICUserModalInfo2, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserModalInfo2()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERMODALINFO2)


BEGIN_COM_MAP(CCUserModalInfo2)
	COM_INTERFACE_ENTRY(ICUserModalInfo2)
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



	STDMETHOD(Initialise)(BSTR bsDomainName, BSTR bsDomainId);
	STDMETHOD(get_DomainName)(BSTR* pVal);
	STDMETHOD(get_DomainId)(BSTR* pVal);
};

OBJECT_ENTRY_AUTO(__uuidof(CUserModalInfo2), CCUserModalInfo2)
