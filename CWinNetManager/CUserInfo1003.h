// CUserInfo1003.h : Declaration of the CCUserInfo1003

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCUserInfo1003

class ATL_NO_VTABLE CCUserInfo1003 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserInfo1003, &CLSID_CUserInfo1003>,
	public IDispatchImpl<ICUserInfo1003, &IID_ICUserInfo1003, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserInfo1003()
		: m_bsPassword(L"")
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERINFO1003)


BEGIN_COM_MAP(CCUserInfo1003)
	COM_INTERFACE_ENTRY(ICUserInfo1003)
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
	STDMETHOD(Initialise)(BSTR bsPassword);
	STDMETHOD(get_Password)(BSTR* pVal);

	static HRESULT TranslateToUserInfo(ICUserInfo1003 * pFrom, USER_INFO_1003 &pTo);

private:
	_bstr_t m_bsPassword;


public:
	STDMETHOD(Clear)();
};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUserInfo1003), CCUserInfo1003)
