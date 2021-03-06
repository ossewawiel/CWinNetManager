// CUserModalsInfo1004.h : Declaration of the CCUserModalsInfo1004

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCUserModalsInfo1004

class ATL_NO_VTABLE CCUserModalsInfo1004 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserModalsInfo1004, &CLSID_CUserModalsInfo1004>,
	public IDispatchImpl<ICUserModalsInfo1004, &IID_ICUserModalsInfo1004, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserModalsInfo1004()
		: mulForceLogoff(0)
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERMODALSINFO1004)


BEGIN_COM_MAP(CCUserModalsInfo1004)
	COM_INTERFACE_ENTRY(ICUserModalsInfo1004)
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



	STDMETHOD(Initialise)(ULONG ulForceLogoff);
	STDMETHOD(get_ForceLogoff)(ULONG* pVal);

	static HRESULT TranslateToUserModalsInfo(ICUserModalsInfo1004 * pFrom, LPUSER_MODALS_INFO_1004 &pTo);
private:
	unsigned long mulForceLogoff;
};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUserModalsInfo1004), CCUserModalsInfo1004)
