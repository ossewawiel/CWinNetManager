// CGroupUserInfo0.h : Declaration of the CCGroupUserInfo0

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"
#include "comutil.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCGroupUserInfo0

class ATL_NO_VTABLE CCGroupUserInfo0 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCGroupUserInfo0, &CLSID_CGroupUserInfo0>,
	public IDispatchImpl<ICGroupUserInfo0, &IID_ICGroupUserInfo0, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCGroupUserInfo0()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CGROUPUSERINFO0)


BEGIN_COM_MAP(CCGroupUserInfo0)
	COM_INTERFACE_ENTRY(ICGroupUserInfo0)
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



	STDMETHOD(Initialise)(BSTR bsName);
	STDMETHOD(get_Name)(BSTR* pVal);

	static HRESULT TranslateFromGroupUserInfo(LPGROUP_USERS_INFO_0 & pFrom, ICGroupUserInfo0** ppTo);
private:
	_bstr_t mbsName;
};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CGroupUserInfo0), CCGroupUserInfo0)
