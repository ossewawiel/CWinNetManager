// CUserModalInfo1.h : Declaration of the CCUserModalInfo1

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCUserModalInfo1

class ATL_NO_VTABLE CCUserModalInfo1 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserModalInfo1, &CLSID_CUserModalInfo1>,
	public IDispatchImpl<ICUserModalInfo1, &IID_ICUserModalInfo1, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserModalInfo1()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERMODALINFO1)


BEGIN_COM_MAP(CCUserModalInfo1)
	COM_INTERFACE_ENTRY(ICUserModalInfo1)
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



	STDMETHOD(Initialise)(ULONG ulRole, BSTR bsPrimary);
	STDMETHOD(get_Role)(ULONG* pVal);
	STDMETHOD(get_Primary)(BSTR* pVal);
};

OBJECT_ENTRY_AUTO(__uuidof(CUserModalInfo1), CCUserModalInfo1)
