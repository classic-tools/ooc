#include <oo2c.oh>
#include <StdChannels.oh>
#include <Strings.oh>
#include <Out.oh>
#include <Err.oh>
#include <Object.oh>
#include <URI.oh>
#include <URI/Scheme/File.oh>
#include <ADT/StringBuffer.oh>
#include <IO.oh>
#include <OS/ProcessManagement.oh>
#include <Config/Section/Arguments.oh>
#include <Config/Section/Options.oh>
#include <Config/Value/Boolean.oh>
#include <Config/Value/Integer.oh>
#include <Config/Value/String.oh>
#include <OOC/Logger.oh>
#include <OOC/Config.oh>
#include <OOC/Config/CCompiler.oh>
#include <OOC/Package.oh>
#include <OOC/SymbolTable/Builder.oh>
#include <OOC/Config/StdPragmas.oh>
#include <OOC/Error.oh>
#include <OOC/Repository.oh>
#include <OOC/Repository/FileSystem.oh>
#include <OOC/Make.oh>
#include <OOC/SSA/Stats.oh>
#define oo2c__buildPackage (-1)
#define oo2c__installPackage (-2)
#define oo2c__uninstallPackage (-3)
#define oo2c__updateRepository (-4)
#define oo2c__getOption (-5)
#define oo2c__buildPackageDoc (-6)
static OOC_Error__List oo2c__cfgErrList;
static OOC_Error__List oo2c__errList;
static OOC_INT32 oo2c__i;
static Config_Value__StringPtr oo2c__arg;
static OOC_INT8 oo2c__mode;
static Config_Section_Options__Option oo2c__command;
static Config_Section_Options__Option oo2c__forceUpdate;
static Config_Section_Options__Option oo2c__listUses;
static Config_Section_Options__Option oo2c__useStderr;
static Config_Section_Options__Option oo2c__writeStats;
static Config_Section_Options__Option oo2c__errorStyle;
static Config_Section_Options__Option oo2c__showHelp;
static Config_Section_Options__Option oo2c__showVersion;
static OOC_Make__Rules oo2c__makeRules;
static OOC_Repository__Repository oo2c__rep;
static OOC_Package__Package oo2c__pkg;
static OOC_Package__Package oo2c__pkgInfo;
static OOC_CHAR8 oo2c__ok;
static OOC_CHAR8 oo2c__forceUpdateRepository;
static OOC_CHAR8 oo2c__doInstall;
static Config_Section_Options__Option oo2c__option;
static OOC_Repository__Module oo2c__module;
static void oo2c__NewConfig(void);
static OOC_Repository__Module oo2c__GetModule(Object__String moduleName);
static OOC_CHAR8 oo2c__BuildPackage(OOC_Package__Package pkg, OOC_Repository__Repository rep, OOC_CHAR8 install);
static void oo2c__UninstallPackage(OOC_Package__Package pkg);
static OOC_CHAR8 oo2c__BuildPackageDoc(OOC_Package__Package pkg);
static void oo2c__WriteHelp(void);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_oo2c__5870 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"oo2c", (RT0__Struct[]) { NULL } };

extern void OOC_oo2c_init0() {
  RT0__RegisterModule(&_mid);
  OOC_oo2c_init();
}

static void* _c0;
static void* _c1;
static void* _c2;
static void* _c3;
static void* _c4;
static void* _c5;
static void* _c6;
static void* _c7;
/* --- */
