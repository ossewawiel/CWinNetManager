// CUsersInfo3.h : Declaration of the CCUsersInfo3

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"
#include "CUserInfo3.h"
#include "CEnumUtils.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;
using namespace std;

typedef CComEnumOnSTL<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT,
	_CopyVariantFromAdaptItf<ICUserInfo3>,
	vector< CAdapt< CComPtr<ICUserInfo3> > > >
	CComEnumVariantOnVectorOfCUsersInfo3;

typedef ICollectionOnSTLImpl<IDispatchImpl<ICUsersInfo3, &IID_ICUsersInfo3>,
	vector< CAdapt< CComPtr<ICUserInfo3> > >,
	ICUserInfo3*,
	_CopyItfFromAdaptItf<ICUserInfo3>,
	CComEnumVariantOnVectorOfCUsersInfo3>
	CUsersInfo3CollImpl;

// CCUsersInfo3

class ATL_NO_VTABLE CCUsersInfo3 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUsersInfo3, &CLSID_CUsersInfo3>,
	public CUsersInfo3CollImpl
{
public:
	CCUsersInfo3()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERSINFO3)


BEGIN_COM_MAP(CCUsersInfo3)
	COM_INTERFACE_ENTRY(ICUsersInfo3)
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
	STDMETHOD(Add)(ICUserInfo3* pUserInfo3);


};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUsersInfo3), CCUsersInfo3)
