// dllmain.h : Declaration of module class.

class CCWinNetManagerModule : public ATL::CAtlDllModuleT< CCWinNetManagerModule >
{
public :
	DECLARE_LIBID(LIBID_CWinNetManagerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_CWINNETMANAGER, "{90B14CFA-C1B5-4494-92BB-D698262004E3}")
};

extern class CCWinNetManagerModule _AtlModule;
