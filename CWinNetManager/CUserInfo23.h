// CUserInfo23.h : Declaration of the CCUserInfo23

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCUserInfo23

class ATL_NO_VTABLE CCUserInfo23 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserInfo23, &CLSID_CUserInfo23>,
	public IDispatchImpl<ICUserInfo23, &IID_ICUserInfo23, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserInfo23()
		: m_bsName(L"")
		, m_bsFullName(L"")
		, m_bsComment(L"")
		, m_ulFlags(0)
		, m_bsUserSid(L"")
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERINFO23)


BEGIN_COM_MAP(CCUserInfo23)
	COM_INTERFACE_ENTRY(ICUserInfo23)
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
	STDMETHOD(Initialise)(
		BSTR bsName
		, BSTR bsFullName
		, BSTR bsComment
		, ULONG ulFlags
		, BSTR bsUserSid);
	STDMETHOD(get_Name)(BSTR* pVal);
	STDMETHOD(get_FullName)(BSTR* pVal);
	STDMETHOD(get_Comment)(BSTR* pVal);
	STDMETHOD(get_Flags)(ULONG* pVal);
	STDMETHOD(get_UserSid)(BSTR* pVal);

private:
	_bstr_t m_bsName;
	_bstr_t m_bsFullName;
	_bstr_t m_bsComment;
	ULONG   m_ulFlags;
	_bstr_t m_bsUserSid;


};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUserInfo23), CCUserInfo23)
