#include "OOC/Config/CCompiler.oh"
#include "Strings.oh"
#include "Object.oh"
#include "URI/Scheme/File.oh"
#include "Config/Value/String.oh"
#include "OOC/Config.oh"
#include "OOC/Repository.oh"
static Config_Section_Options__Option OOC_Config_CCompiler__cc;
static Config_Section_Options__Option OOC_Config_CCompiler__cppflags;
static Config_Section_Options__Option OOC_Config_CCompiler__cflags;
static Config_Section_Options__Option OOC_Config_CCompiler__ldflags;
Config_Section_Options__Option OOC_Config_CCompiler__libs;
static Config_Section_Options__Option OOC_Config_CCompiler__libtool;
Config_Section_Options__Option OOC_Config_CCompiler__libdir;
Config_Section_Options__Option OOC_Config_CCompiler__install;
static Config_Section_Options__Option OOC_Config_CCompiler__installProgram;
Config_Section_Options__Option OOC_Config_CCompiler__installData;
Config_Section_Options__Option OOC_Config_CCompiler__uninstall;
Config_Section_Options__Option OOC_Config_CCompiler__bindir;
Config_Section_Options__Option OOC_Config_CCompiler__oocdir;
static void OOC_Config_CCompiler__SetCommand(const OOC_CHAR8 mode__ref[], OOC_LEN mode_0d, OOC_CHAR8 cmd[], OOC_LEN cmd_0d);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Config_CCompiler__1405 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Config_CCompiler__1429 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Config_CCompiler__1918 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Config_CCompiler__1949 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 2048, 2048, RT0__strArray };
RT0__StructDesc _td_OOC_Config_CCompiler__3832 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Config_CCompiler__3863 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1024, 1024, RT0__strArray };
RT0__StructDesc _td_OOC_Config_CCompiler__4343 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Config_CCompiler__4367 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Config_CCompiler__4642 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Config_CCompiler__4673 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1024, 1024, RT0__strArray };
RT0__StructDesc _td_OOC_Config_CCompiler__5384 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Config:CCompiler", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_Config_CCompiler_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Config_CCompiler_init();
}

/* --- */
