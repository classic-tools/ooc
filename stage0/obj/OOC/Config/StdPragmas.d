#include <OOC/Config/StdPragmas.oh>
#include <Config/Value/Boolean.oh>
#include <Config/Value/Integer.oh>
#include <Config/Value/String.oh>
#include <OOC/Config/Autoconf.oh>
#define OOC_Config_StdPragmas__defaultWarnings OOC_TRUE
#define OOC_Config_StdPragmas__defaultAssertions OOC_TRUE
#define OOC_Config_StdPragmas__defaultStackCheck OOC_FALSE
#define OOC_Config_StdPragmas__defaultConformantMode OOC_FALSE
#define OOC_Config_StdPragmas__defaultIndexCheck OOC_TRUE
#define OOC_Config_StdPragmas__defaultDerefCheck OOC_TRUE
#define OOC_Config_StdPragmas__defaultOverflowCheck OOC_FALSE
#define OOC_Config_StdPragmas__defaultCaseSelectCheck OOC_TRUE
#define OOC_Config_StdPragmas__defaultFunctionResultCheck OOC_TRUE
#define OOC_Config_StdPragmas__defaultTypeGuard OOC_TRUE
#define OOC_Config_StdPragmas__defaultRangeCheck OOC_FALSE
#define OOC_Config_StdPragmas__defaultCompiler "OOC"
#define OOC_Config_StdPragmas__defaultCompilerMajor 2
#define OOC_Config_StdPragmas__defaultCompilerMinor 0
#define OOC_Config_StdPragmas__defaultTargetOS "Unix"
#define OOC_Config_StdPragmas__defaultTargetInteger 64
#define OOC_Config_StdPragmas__defaultTargetAddress 32
#define OOC_Config_StdPragmas__defaultTargetArchMinor ""
Config_Section_Options__Option OOC_Config_StdPragmas__warnings;
Config_Section_Options__Option OOC_Config_StdPragmas__assertions;
Config_Section_Options__Option OOC_Config_StdPragmas__stackCheck;
Config_Section_Options__Option OOC_Config_StdPragmas__conformantMode;
Config_Section_Options__Option OOC_Config_StdPragmas__indexCheck;
Config_Section_Options__Option OOC_Config_StdPragmas__derefCheck;
Config_Section_Options__Option OOC_Config_StdPragmas__overflowCheck;
Config_Section_Options__Option OOC_Config_StdPragmas__caseSelectCheck;
Config_Section_Options__Option OOC_Config_StdPragmas__functionResultCheck;
Config_Section_Options__Option OOC_Config_StdPragmas__typeGuard;
Config_Section_Options__Option OOC_Config_StdPragmas__rangeCheck;
Config_Section_Options__Option OOC_Config_StdPragmas__compiler;
Config_Section_Options__Option OOC_Config_StdPragmas__compilerVersion;
Config_Section_Options__Option OOC_Config_StdPragmas__compilerMajor;
Config_Section_Options__Option OOC_Config_StdPragmas__compilerMinor;
Config_Section_Options__Option OOC_Config_StdPragmas__targetOS;
Config_Section_Options__Option OOC_Config_StdPragmas__targetArch;
Config_Section_Options__Option OOC_Config_StdPragmas__targetArchMinor;
Config_Section_Options__Option OOC_Config_StdPragmas__targetInteger;
Config_Section_Options__Option OOC_Config_StdPragmas__targetAddress;
Config_Section_Options__Option OOC_Config_StdPragmas__targetByteOrder;

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Config:StdPragmas", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_Config_StdPragmas_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Config_StdPragmas_init();
}

/* --- */
