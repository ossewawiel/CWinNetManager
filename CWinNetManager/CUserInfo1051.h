// CUserInfo1051.h : Declaration of the CCUserInfo1051

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCUserInfo1051

class ATL_NO_VTABLE CCUserInfo1051 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserInfo1051, &CLSID_CUserInfo1051>,
	public IDispatchImpl<ICUserInfo1051, &IID_ICUserInfo1051, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserInfo1051()
		: m_ulPrimaryGrpId(0)
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERINFO1051)


BEGIN_COM_MAP(CCUserInfo1051)
	COM_INTERFACE_ENTRY(ICUserInfo1051)
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
	STDMETHOD(Initialise)(ULONG ulPrimaryGrpId);
	STDMETHOD(get_PrimaryGrpId)(ULONG* pVal);

private:
	ULONG m_ulPrimaryGrpId;
};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUserInfo1051), CCUserInfo1051)
