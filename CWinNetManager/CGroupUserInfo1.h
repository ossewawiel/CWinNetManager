// CGroupUserInfo1.h : Declaration of the CCGroupUserInfo1

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"
#include "comutil.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCGroupUserInfo1

class ATL_NO_VTABLE CCGroupUserInfo1 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCGroupUserInfo1, &CLSID_CGroupUserInfo1>,
	public IDispatchImpl<ICGroupUserInfo1, &IID_ICGroupUserInfo1, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCGroupUserInfo1()
		: mulAttributes(0)
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CGROUPUSERINFO1)


BEGIN_COM_MAP(CCGroupUserInfo1)
	COM_INTERFACE_ENTRY(ICGroupUserInfo1)
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



	STDMETHOD(Initialise)(BSTR bsName, ULONG ulAttributes);
	STDMETHOD(get_Name)(BSTR* pVal);
	STDMETHOD(get_Attributes)(ULONG* pVal);

	static HRESULT TranslateFromGroupUserInfo(LPGROUP_USERS_INFO_1 & pFrom, ICGroupUserInfo1** ppTo);
private:
	_bstr_t mbsName;
	ULONG mulAttributes;
};

OBJECT_ENTRY_AUTO(__uuidof(CGroupUserInfo1), CCGroupUserInfo1)
