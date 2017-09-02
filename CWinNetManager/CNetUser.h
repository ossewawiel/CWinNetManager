// CNetUser.h : Declaration of the CCNetUser

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCNetUser

class ATL_NO_VTABLE CCNetUser :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCNetUser, &CLSID_CNetUser>,
	public IDispatchImpl<ICNetUser, &IID_ICNetUser, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCNetUser()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNETUSER)


BEGIN_COM_MAP(CCNetUser)
	COM_INTERFACE_ENTRY(ICNetUser)
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



	STDMETHOD(GetUserInfo1)(BSTR bsName, BSTR bsPwd, ULONG ulPwdAge, ULONG ulPriv, BSTR bsHomeDir, BSTR bsComment, ULONG ulFlags, BSTR bsScriptPath, ICUserInfo1** ppUserInfo1);
	STDMETHOD(NetUserAdd)(BSTR bsServerName, IUnknown* pUserInfo);
};

OBJECT_ENTRY_AUTO(__uuidof(CNetUser), CCNetUser)
