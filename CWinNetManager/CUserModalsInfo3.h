// CUserModalsInfo3.h : Declaration of the CCUserModalsInfo3

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"
#include "CuserModalInfo3.h"
#include "CEnumUtils.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;
using namespace std;

typedef CComEnumOnSTL<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT,
	_CopyVariantFromAdaptItf<CCUserModalInfo3>,
	vector< CAdapt< CComPtr<CCUserModalInfo3> > > >
	CComEnumVariantOnVectorOfCUserModalsInfo3;

typedef ICollectionOnSTLImpl<IDispatchImpl<ICUserModalsInfo3, &IID_ICUserModalsInfo3>,
	vector< CAdapt< CComPtr<CCUserModalInfo3> > >,
	CCUserModalInfo3*,
	_CopyItfFromAdaptItf<CCUserModalInfo3>,
	CComEnumVariantOnVectorOfCUserModalsInfo3>
	CUserModalsInfo3CollImpl;
// CCUserModalsInfo3

class ATL_NO_VTABLE CCUserModalsInfo3 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserModalsInfo3, &CLSID_CUserModalsInfo3>,
	public CUserModalsInfo3CollImpl
{
public:
	CCUserModalsInfo3()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERMODALSINFO3)


BEGIN_COM_MAP(CCUserModalsInfo3)
	COM_INTERFACE_ENTRY(ICUserModalsInfo3)
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
	STDMETHOD(Add)(ICUserModalsInfo3* pUserModalsInfo3);


};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUserModalsInfo3), CCUserModalsInfo3)
