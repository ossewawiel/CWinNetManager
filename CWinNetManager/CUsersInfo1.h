// CUsersInfo1.h : Declaration of the CCUsersInfo1

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"
#include "CUserInfo1.h"
#include "CEnumUtils.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;
using namespace std;

typedef CComEnumOnSTL<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT,
	_CopyVariantFromAdaptItf<ICUserInfo1>,
	vector< CAdapt< CComPtr<ICUserInfo1> > > >
	CComEnumVariantOnVectorOfCUsersInfo1;

typedef ICollectionOnSTLImpl<IDispatchImpl<ICUsersInfo1, &IID_ICUsersInfo1>,
	vector< CAdapt< CComPtr<ICUserInfo1> > >,
	ICUserInfo1*,
	_CopyItfFromAdaptItf<ICUserInfo1>,
	CComEnumVariantOnVectorOfCUsersInfo1>
	CUsersInfo1CollImpl;

// CCUsersInfo1

class ATL_NO_VTABLE CCUsersInfo1 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUsersInfo1, &CLSID_CUsersInfo1>,
	public CUsersInfo1CollImpl
{
public:
	CCUsersInfo1()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERSINFO1)


BEGIN_COM_MAP(CCUsersInfo1)
	COM_INTERFACE_ENTRY(ICUsersInfo1)
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
	STDMETHOD(Add)(ICUserInfo1* pUserInfo1);


};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUsersInfo1), CCUsersInfo1)
