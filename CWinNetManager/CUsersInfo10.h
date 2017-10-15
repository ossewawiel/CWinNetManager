// CUsersInfo10.h : Declaration of the CCUsersInfo10

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"
#include "CUserInfo10.h"
#include "CEnumUtils.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;
using namespace std;

typedef CComEnumOnSTL<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT,
	_CopyVariantFromAdaptItf<ICUserInfo10>,
	vector< CAdapt< CComPtr<ICUserInfo10> > > >
	CComEnumVariantOnVectorOfCUsersInfo10;

typedef ICollectionOnSTLImpl<IDispatchImpl<ICUsersInfo10, &IID_ICUsersInfo10>,
	vector< CAdapt< CComPtr<ICUserInfo10> > >,
	ICUserInfo10*,
	_CopyItfFromAdaptItf<ICUserInfo10>,
	CComEnumVariantOnVectorOfCUsersInfo10>
	CUsersInfo10CollImpl;

// CCUsersInfo10

class ATL_NO_VTABLE CCUsersInfo10 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUsersInfo10, &CLSID_CUsersInfo10>,
	public CUsersInfo10CollImpl
{
public:
	CCUsersInfo10()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERSINFO10)


BEGIN_COM_MAP(CCUsersInfo10)
	COM_INTERFACE_ENTRY(ICUsersInfo10)
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
	STDMETHOD(Add)(ICUserInfo10* pUserInfo10);


};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUsersInfo10), CCUsersInfo10)
