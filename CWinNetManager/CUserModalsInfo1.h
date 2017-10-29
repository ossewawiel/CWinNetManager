// CUserModalsInfo1.h : Declaration of the CCUserModalsInfo1

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"
#include "comutil.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;
// CCUserModalsInfo1

class ATL_NO_VTABLE CCUserModalsInfo1 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserModalsInfo1, &CLSID_CUserModalsInfo1>,
	public IDispatchImpl<ICUserModalsInfo1, &IID_ICUserModalsInfo1, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserModalsInfo1()
		: mulRole(0)
		, mbsPrimary(L"")
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERMODALSINFO1)


BEGIN_COM_MAP(CCUserModalsInfo1)
	COM_INTERFACE_ENTRY(ICUserModalsInfo1)
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

	static HRESULT TranslateFromUserModalsInfo(LPUSER_MODALS_INFO_1 & pFrom, ICUserModalsInfo1** ppTo);
	static HRESULT TranslateToUserModalsInfo(ICUserModalsInfo1 * pFrom, USER_MODALS_INFO_1 &pTo);
private:
	unsigned long mulRole;
	_bstr_t mbsPrimary;
};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUserModalsInfo1), CCUserModalsInfo1)
