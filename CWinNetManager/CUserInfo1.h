// CUserInfo1.h : Declaration of the CCUserInfo1

#pragma once
#include "resource.h"       // main symbols



#include "CWinNetManager.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCUserInfo1

class ATL_NO_VTABLE CCUserInfo1 :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CCUserInfo1, &CLSID_CUserInfo1>,
	public ISupportErrorInfo,
	public IDispatchImpl<ICUserInfo1, &IID_ICUserInfo1, &LIBID_CWinNetManagerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCUserInfo1()
		: m_ulPwdAge(0)
		, m_ulPriv(0)
		, m_ulFlgs(0)
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CUSERINFO1)


BEGIN_COM_MAP(CCUserInfo1)
	COM_INTERFACE_ENTRY(ICUserInfo1)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY_AGGREGATE(IID_IMarshal, m_pUnkMarshaler.p)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


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
	STDMETHOD(Initialise)(BSTR bsName, BSTR bsPwd, ULONG ulPwdAge, ULONG ulPriv, BSTR bsHomeDir, BSTR bsComment, ULONG ulFlags, BSTR bsScriptPath);
	STDMETHOD(get_Password)(BSTR* pVal);
	STDMETHOD(get_Name)(BSTR* pVal);
	STDMETHOD(get_PasswordAge)(ULONG* pVal);
	STDMETHOD(get_Privilege)(ULONG* pVal);
	STDMETHOD(get_HomeDirectory)(BSTR* pVal);
	STDMETHOD(get_Comment)(BSTR* pVal);
	STDMETHOD(get_Flags)(ULONG* pVal);
	STDMETHOD(get_ScriptPath)(BSTR* pVal);
	STDMETHOD(Clear)();

	static HRESULT CCUserInfo1::TranslateToUserInfo(ICUserInfo1 * pFrom, USER_INFO_1 &pTo);
	static HRESULT TranslateFromUserInfo(LPUSER_INFO_1 pFrom, ICUserInfo1 ** ppTo);
private:
	_bstr_t m_bsName;
	_bstr_t m_bsPwd;
	unsigned long m_ulPwdAge;
	unsigned long m_ulPriv;
	_bstr_t m_bsHomeDir;
	_bstr_t m_bsComment;
	unsigned long m_ulFlgs;
	_bstr_t m_bsScriptPath;

};

OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(__uuidof(CUserInfo1), CCUserInfo1)
