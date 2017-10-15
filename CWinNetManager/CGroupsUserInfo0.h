// CGroupsUserInfo0.h : Declaration of the CCGroupsUserInfo0

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"
#include "CGroupUserInfo0.h"
#include "CEnumUtils.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;
using namespace std;

typedef CComEnumOnSTL<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT,
	_CopyVariantFromAdaptItf<ICGroupUserInfo0>,
	vector< CAdapt< CComPtr<ICGroupUserInfo0> > > >
	CComEnumVariantOnVectorOfCGroupsUserInfo0;

typedef ICollectionOnSTLImpl<IDispatchImpl<ICGroupsUserInfo0, &IID_ICGroupsUserInfo0>,
	vector< CAdapt< CComPtr<ICGroupUserInfo0> > >,
	ICGroupUserInfo0*,
	_CopyItfFromAdaptItf<ICGroupUserInfo0>,
	CComEnumVariantOnVectorOfCGroupsUserInfo0>
	CGroupsUserInfo0CollImpl;

// CCGroupsUserInfo0

class ATL_NO_VTABLE CCGroupsUserInfo0 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCGroupsUserInfo0, &CLSID_CGroupsUserInfo0>,
	public CGroupsUserInfo0CollImpl
{
public:
	CCGroupsUserInfo0()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CGROUPSUSERINFO0)


BEGIN_COM_MAP(CCGroupsUserInfo0)
	COM_INTERFACE_ENTRY(ICGroupsUserInfo0)
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
	STDMETHOD(Add)(ICGroupUserInfo0* pGroupUserInfo0);


};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CGroupsUserInfo0), CCGroupsUserInfo0)
