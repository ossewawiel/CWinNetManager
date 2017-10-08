// CUserInfo24.h : Declaration of the CCUserInfo24

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCUserInfo24

class ATL_NO_VTABLE CCUserInfo24 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserInfo24, &CLSID_CUserInfo24>,
	public IDispatchImpl<ICUserInfo24, &IID_ICUserInfo24, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserInfo24()
		: m_shInternetIdentity(0)
		, m_ulFlags(0)
		, m_bsInternetProviderName(L"")
		, m_bsInternetPrincipleName(L"")
		, m_bsUserSid(L"")
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERINFO24)


BEGIN_COM_MAP(CCUserInfo24)
	COM_INTERFACE_ENTRY(ICUserInfo24)
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
	STDMETHOD(Initialise)(
		SHORT shInternetIdentity
		, ULONG ulFlags
		, BSTR bsInternetProviderName
		, BSTR bsInternetPrincipleName
		, BSTR bsUserSid);
	STDMETHOD(get_InternetIdentity)(SHORT* pVal);
	STDMETHOD(get_Flags)(ULONG* pVal);
	STDMETHOD(get_InternetProviderName)(BSTR* pVal);
	STDMETHOD(get_InternetPrincipleName)(BSTR* pVal);
	STDMETHOD(get_UserSid)(BSTR* pVal);

	static HRESULT TranslateFromUserInfo(LPUSER_INFO_24 pFrom, ICUserInfo24 ** ppTo);

private:
	SHORT   m_shInternetIdentity;
	ULONG   m_ulFlags;
	_bstr_t m_bsInternetProviderName;
	_bstr_t m_bsInternetPrincipleName;
	_bstr_t m_bsUserSid;
public:
	STDMETHOD(Clear)();
};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUserInfo24), CCUserInfo24)
