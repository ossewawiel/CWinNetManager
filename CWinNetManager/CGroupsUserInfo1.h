// CGroupsUserInfo1.h : Declaration of the CCGroupsUserInfo1

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"
#include "CGroupUserInfo1.h"
#include "CEnumUtils.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;
using namespace std;

typedef CComEnumOnSTL<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT,
	_CopyVariantFromAdaptItf<ICGroupUserInfo1>,
	vector< CAdapt< CComPtr<ICGroupUserInfo1> > > >
	CComEnumVariantOnVectorOfCGroupsUserInfo1;

typedef ICollectionOnSTLImpl<IDispatchImpl<ICGroupsUserInfo1, &IID_ICGroupsUserInfo1>,
	vector< CAdapt< CComPtr<ICGroupUserInfo1> > >,
	ICGroupUserInfo1*,
	_CopyItfFromAdaptItf<ICGroupUserInfo1>,
	CComEnumVariantOnVectorOfCGroupsUserInfo1>
	CGroupsUserInfo1CollImpl;

// CCGroupsUserInfo1

class ATL_NO_VTABLE CCGroupsUserInfo1 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCGroupsUserInfo1, &CLSID_CGroupsUserInfo1>,
	public CGroupsUserInfo1CollImpl
{
public:
	CCGroupsUserInfo1()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CGROUPSUSERINFO1)


BEGIN_COM_MAP(CCGroupsUserInfo1)
	COM_INTERFACE_ENTRY(ICGroupsUserInfo1)
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
	STDMETHOD(Add)(ICGroupUserInfo1* pGroupUserInfo1);


};

OBJECT_ENTRY_AUTO(__uuidof(CGroupsUserInfo1), CCGroupsUserInfo1)
