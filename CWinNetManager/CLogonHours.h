// CLogonHours.h : Declaration of the CCLogonHours

#pragma once
#include "resource.h"       // main symbols
#include "CWinNetManager.h"
#include "CLogonHour.h"
#include "CEnumUtils.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace std;
using namespace ATL;



typedef CComEnumOnSTL<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT,
	_CopyVariantFromAdaptItf<ICLogonHour>,
	vector< CAdapt< CComPtr<ICLogonHour> > > >
	CComEnumVariantOnVectorOfCLogonHours;

typedef ICollectionOnSTLImpl<IDispatchImpl<ICLogonHours, &IID_ICLogonHours>,
	vector< CAdapt< CComPtr<ICLogonHour> > >,
	ICLogonHour*,
	_CopyItfFromAdaptItf<ICLogonHour>,
	CComEnumVariantOnVectorOfCLogonHours>
	CLogonHoursCollImpl;
// CCLogonHours

class ATL_NO_VTABLE CCLogonHours :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCLogonHours, &CLSID_CLogonHours>,
	public CLogonHoursCollImpl
{
public:
	CCLogonHours()
	{
		m_pUnkMarshaler = NULL;
		//fill vector with items
		for (int iDay = 1; iDay <= 7; iDay++)
		{
			for (int iHour = 0; iHour <= 23; iHour++)
			{
				CComPtr<ICLogonHour> pLH;
				CCLogonHour::CreateInstance(&pLH);
				pLH->Initialise(iDay, iHour, 0);
				m_coll.push_back(pLH);
			}
		}
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CLOGONHOURS)


BEGIN_COM_MAP(CCLogonHours)
	COM_INTERFACE_ENTRY(ICLogonHours)
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
	STDMETHOD(ClearAll)();
	STDMETHOD(InitialiseAllActive)();
	STDMETHOD(put_Item)(long n, ICLogonHour* pLogonHour);
	STDMETHOD(ActivateLogonHour)(SHORT shDay, SHORT shHour);
	STDMETHOD(DeactivateLogonHour)(SHORT shDay, SHORT shHour);
	STDMETHOD(ActivateItem)(long n);
	STDMETHOD(DeactivateItem)(long n);
};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CLogonHours), CCLogonHours)
