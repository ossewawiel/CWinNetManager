// CUsersInfo20.h : Declaration of the CCUsersInfo20

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"
#include "CUserInfo20.h"
#include "CEnumUtils.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;
using namespace std;

typedef CComEnumOnSTL<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT,
	_CopyVariantFromAdaptItf<ICUserInfo20>,
	vector< CAdapt< CComPtr<ICUserInfo20> > > >
	CComEnumVariantOnVectorOfCUsersInfo20;

typedef ICollectionOnSTLImpl<IDispatchImpl<ICUsersInfo20, &IID_ICUsersInfo20>,
	vector< CAdapt< CComPtr<ICUserInfo20> > >,
	ICUserInfo20*,
	_CopyItfFromAdaptItf<ICUserInfo20>,
	CComEnumVariantOnVectorOfCUsersInfo20>
	CUsersInfo20CollImpl;

// CCUsersInfo20

class ATL_NO_VTABLE CCUsersInfo20 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUsersInfo20, &CLSID_CUsersInfo20>,
	public CUsersInfo20CollImpl
{
public:
	CCUsersInfo20()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERSINFO20)


BEGIN_COM_MAP(CCUsersInfo20)
	COM_INTERFACE_ENTRY(ICUsersInfo20)
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
	STDMETHOD(Add)(ICUserInfo20* pUserInfo20);


};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUsersInfo20), CCUsersInfo20)
