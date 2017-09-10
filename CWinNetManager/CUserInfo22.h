// CUserInfo22.h : Declaration of the CCUserInfo22

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCUserInfo22

class ATL_NO_VTABLE CCUserInfo22 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserInfo22, &CLSID_CUserInfo22>,
	public IDispatchImpl<ICUserInfo22, &IID_ICUserInfo22, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserInfo22()
		: m_bsName(L"")
		, m_bsPassword(L"")
		, m_ulPasswordAge(0)
		, m_ulPrivilege(0)
		, m_bsHomeDir(L"")
		, m_bsComment(L"")
		, m_ulFlags(0)
		, m_bsScriptPath(L"")
		, m_ulAuthFlags(0)
		, m_bsFullName(L"")
		, m_bsUsrComment(L"")
		, m_bsParams(L"")
		, m_bsWorkstations(L"")
		, m_ulLastLogon(0)
		, m_ulLastLogoff(0)
		, m_ulAccntExpires(0)
		, m_ulMaxStorage(0)
		, m_ulUnitsPerWeek(0)
		, m_bLogonHours(0)
		, m_ulBadPwdCount(0)
		, m_ulNumLogons(0)
		, m_bsLogonServer(L"")
		, m_ulCountryCode(0)
		, m_ulCodePage(0)
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERINFO22)


BEGIN_COM_MAP(CCUserInfo22)
	COM_INTERFACE_ENTRY(ICUserInfo22)
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
		, BSTR bsPassword
		, ULONG ulPasswordAge
		, ULONG ulPrivilege
		, BSTR bsHomeDir
		, BSTR bsComment
		, ULONG ulFlags
		, BSTR bsScriptPath
		, ULONG ulAuthFlags
		, BSTR bsFullName
		, BSTR bsUsrComment
		, BSTR bsParams
		, BSTR bsWorkstations
		, ULONG ulLastLogon
		, ULONG ulLastLogoff
		, ULONG ulAccntExpires
		, ULONG ulMaxStorage
		, ULONG ulUnitsPerWeek
		, BYTE bLogonHours
		, ULONG ulBadPwdCount
		, ULONG ulNumLogons
		, BSTR bsLogonServer
		, ULONG ulCountryCode
		, ULONG ulCodePage);
	STDMETHOD(get_Name)(BSTR* pVal);
	STDMETHOD(get_Password)(BSTR* pVal);
	STDMETHOD(get_PasswordAge)(ULONG* pVal);
	STDMETHOD(get_Privilege)(ULONG* pVal);
	STDMETHOD(get_HomeDirectory)(BSTR* pVal);
	STDMETHOD(get_Comment)(BSTR* pVal);
	STDMETHOD(get_Flags)(ULONG* pVal);
	STDMETHOD(get_ScriptPath)(BSTR* pVal);
	STDMETHOD(get_AuthFlags)(ULONG* pVal);
	STDMETHOD(get_FullName)(BSTR* pVal);
	STDMETHOD(get_UsrComment)(BSTR* pVal);
	STDMETHOD(get_Params)(BSTR* pVal);
	STDMETHOD(get_Workstations)(BSTR* pVal);
	STDMETHOD(get_LastLogon)(ULONG* pVal);
	STDMETHOD(get_LastLogoff)(ULONG* pVal);
	STDMETHOD(get_AccntExpires)(ULONG* pVal);
	STDMETHOD(get_MaxStorage)(ULONG* pVal);
	STDMETHOD(get_UnitsPerWeek)(ULONG* pVal);
	STDMETHOD(get_LogonHours)(BYTE* pVal);
	STDMETHOD(get_BadPwdCount)(ULONG* pVal);
	STDMETHOD(get_NumLogons)(ULONG* pVal);
	STDMETHOD(get_LogonServer)(BSTR* pVal);
	STDMETHOD(get_CountryCode)(ULONG* pVal);
	STDMETHOD(get_CodePage)(ULONG* pVal);

	private:
		_bstr_t m_bsName;
		_bstr_t m_bsPassword;
		ULONG   m_ulPasswordAge;
		ULONG   m_ulPrivilege;
		_bstr_t m_bsHomeDir;
		_bstr_t m_bsComment;
		ULONG   m_ulFlags;
		_bstr_t m_bsScriptPath;
		ULONG   m_ulAuthFlags;
		_bstr_t m_bsFullName;
		_bstr_t m_bsUsrComment;
		_bstr_t m_bsParams;
		_bstr_t m_bsWorkstations;
		ULONG   m_ulLastLogon;
		ULONG   m_ulLastLogoff;
		ULONG   m_ulAccntExpires;
		ULONG   m_ulMaxStorage;
		ULONG   m_ulUnitsPerWeek;
		BYTE    m_bLogonHours;
		ULONG   m_ulBadPwdCount;
		ULONG   m_ulNumLogons;
		_bstr_t m_bsLogonServer;
		ULONG   m_ulCountryCode;
		ULONG   m_ulCodePage;
};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUserInfo22), CCUserInfo22)
