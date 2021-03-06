// CUserModalsInfo1007.h : Declaration of the CCUserModalsInfo1007

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"
#include "comutil.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCUserModalsInfo1007

class ATL_NO_VTABLE CCUserModalsInfo1007 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserModalsInfo1007, &CLSID_CUserModalsInfo1007>,
	public IDispatchImpl<ICUserModalsInfo1007, &IID_ICUserModalsInfo1007, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserModalsInfo1007()
		: mbsPrimary(L"")
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERMODALSINFO1007)


BEGIN_COM_MAP(CCUserModalsInfo1007)
	COM_INTERFACE_ENTRY(ICUserModalsInfo1007)
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



	STDMETHOD(Initialise)(BSTR bsPrimary);
	STDMETHOD(get_Primary)(BSTR* pVal);

	static HRESULT TranslateToUserModalsInfo(ICUserModalsInfo1007 * pFrom, LPUSER_MODALS_INFO_1007 &pTo);
private:
	_bstr_t mbsPrimary;
};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUserModalsInfo1007), CCUserModalsInfo1007)
