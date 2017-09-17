// CUserInfo11.h : Declaration of the CCUserInfo11

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCUserInfo11

class ATL_NO_VTABLE CCUserInfo11 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserInfo11, &CLSID_CUserInfo11>,
	public IDispatchImpl<ICUserInfo11, &IID_ICUserInfo11, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserInfo11()
		: m_bsName(L"")
	, m_bsComment(L"")
	, m_bsUsrComment(L"")
	, m_bsFullName(L"")
	, m_ulPrivilege(0)
	, m_ulAuthFlags(0)
	, m_ulPasswordAge(0)
	, m_bsHomeDir(L"")
	, m_bsParams(L"")
	, m_ulLastLogon(0)
	, m_ulLastLogoff(0)
	, m_ulBadPwdCount(0)
	, m_ulNumLogons(0)
	, m_bsLogonServer(L"")
	, m_ulCountryCode(0)
	, m_bsWorkstations(L"")
	, m_ulMaxStorage(0)
	, m_ulUnitsPerWeek(0)
	, m_bLogonHours(0)
	, m_ulCodePage(0)
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERINFO11)


BEGIN_COM_MAP(CCUserInfo11)
	COM_INTERFACE_ENTRY(ICUserInfo11)
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
		, BSTR bsComment
		, BSTR bsUsrComment
		, BSTR bsFullName
		, ULONG ulPrivilege
		, ULONG ulAuthFlags
		, ULONG ulPasswordAge
		, BSTR bsHomeDir
		, BSTR bsParams
		, ULONG ulLastLogon
		, ULONG ulLastLogoff
		, ULONG ulBadPwdCount
		, ULONG ulNumLogons
		, BSTR bsLogonServer
		, ULONG ulCountryCode
		, BSTR bsWorkstations
		, ULONG ulMaxStorage
		, ULONG ulUnitsPerWeek
		, BYTE bLogonHours
		, ULONG ulCodePage);
	STDMETHOD(get_Name)(BSTR* pVal);
	STDMETHOD(get_Comment)(BSTR* pVal);
	STDMETHOD(get_UsrComment)(BSTR* pVal);
	STDMETHOD(get_FullName)(BSTR* pVal);
	STDMETHOD(get_Privilege)(ULONG* pVal);
	STDMETHOD(get_AuthFlags)(ULONG* pVal);
	STDMETHOD(get_PasswordAge)(ULONG* pVal);
	STDMETHOD(get_HomeDirectory)(BSTR* pVal);
	STDMETHOD(get_Params)(BSTR* pVal);
	STDMETHOD(get_LastLogon)(ULONG* pVal);
	STDMETHOD(get_LastLogoff)(ULONG* pVal);
	STDMETHOD(get_BadPwdCount)(ULONG* pVal);
	STDMETHOD(get_NumLogons)(ULONG* pVal);
	STDMETHOD(get_LogonServer)(BSTR* pVal);
	STDMETHOD(get_CountryCode)(ULONG* pVal);
	STDMETHOD(get_Workstations)(BSTR* pVal);
	STDMETHOD(get_MaxStorage)(ULONG* pVal);
	STDMETHOD(get_UnitsPerWeek)(ULONG* pVal);
	STDMETHOD(get_LogonHours)(BYTE* pVal);
	STDMETHOD(get_CodePage)(ULONG* pVal);

private:
	_bstr_t m_bsName;
	_bstr_t m_bsComment;
	_bstr_t m_bsUsrComment;
	_bstr_t m_bsFullName;
	ULONG m_ulPrivilege;
	ULONG m_ulAuthFlags;
	ULONG m_ulPasswordAge;
	_bstr_t m_bsHomeDir;
	_bstr_t m_bsParams;
	ULONG m_ulLastLogon;
	ULONG m_ulLastLogoff;
	ULONG m_ulBadPwdCount;
	ULONG m_ulNumLogons;
	_bstr_t m_bsLogonServer;
	ULONG m_ulCountryCode;
	_bstr_t m_bsWorkstations;
	ULONG m_ulMaxStorage;
	ULONG m_ulUnitsPerWeek;
	BYTE m_bLogonHours;
	ULONG m_ulCodePage;
public:
	STDMETHOD(Clear)();
};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUserInfo11), CCUserInfo11)
