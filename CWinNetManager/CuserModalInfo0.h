// CuserModalInfo0.h : Declaration of the CCuserModalInfo0

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCuserModalInfo0

class ATL_NO_VTABLE CCUserModalInfo0 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserModalInfo0, &CLSID_CUserModalInfo0>,
	public IDispatchImpl<ICUserModalInfo0, &IID_ICUserModalInfo0, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserModalInfo0()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERMODALINFO0)


BEGIN_COM_MAP(CCUserModalInfo0)
	COM_INTERFACE_ENTRY(ICUserModalInfo0)
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



	STDMETHOD(Initialise)(ULONG ulMinPwdLen, ULONG ulMaxPwdAge, ULONG ulMinPwdAge, ULONG ulForceLogoff, ULONG ulPwdHistLen);
	STDMETHOD(get_MinPwdLen)(ULONG* pVal);
	STDMETHOD(get_MaxPwdAge)(ULONG* pVal);
	STDMETHOD(get_MinPwdAge)(ULONG* pVal);
	STDMETHOD(get_ForceLogoff)(ULONG* pVal);
	STDMETHOD(get_PwdHistLen)(ULONG* pVal);
	STDMETHOD(put_PwdHistLen)(ULONG newVal);
};

OBJECT_ENTRY_AUTO(__uuidof(CUserModalInfo0), CCUserModalInfo0)
