// CUserInfo1014.h : Declaration of the CCUserInfo1014

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCUserInfo1014

class ATL_NO_VTABLE CCUserInfo1014 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserInfo1014, &CLSID_CUserInfo1014>,
	public IDispatchImpl<ICUserInfo1014, &IID_ICUserInfo1014, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserInfo1014()
		: m_bsWorkstations(L"")
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERINFO1014)


BEGIN_COM_MAP(CCUserInfo1014)
	COM_INTERFACE_ENTRY(ICUserInfo1014)
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
	STDMETHOD(Initialise)(BSTR bsWorkstations);
	STDMETHOD(get_Workstations)(BSTR* pVal);

	static HRESULT TranslateToUserInfo(ICUserInfo1014 * pFrom, USER_INFO_1014 &pTo);
private:
	_bstr_t m_bsWorkstations;
public:
	STDMETHOD(Clear)();
};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUserInfo1014), CCUserInfo1014)
