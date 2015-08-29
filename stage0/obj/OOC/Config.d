#include <OOC/Config.oh>
#include <RT0.oh>
#include <Config/Value/String.oh>
#include <Config/Source/CmdLine.oh>
#include <Config/Simple.oh>
#include <OOC/Config/Pragmas/StdPragmas.oh>
#include <OOC/Config/Autoconf.oh>
#include <OOC/Config/Repositories/FileSystem.oh>
Config_Section_Options__Section OOC_Config__options;
static Config_Source_CmdLine__CmdLine OOC_Config__cmdLine;
Config_Section_Arguments__Section OOC_Config__arguments;
OOC_Config_Pragmas__Section OOC_Config__pragmas;
OOC_Config_Repositories__Section OOC_Config__repositories;
#define OOC_Config__configEnvVar "OO2CRC"
static Config_Simple__Config OOC_Config__config;
Config_Section_Options__Option OOC_Config__xsltproc;
static void OOC_Config__InitConfig(const OOC_CHAR8 defaultConfigFile__ref[], OOC_LEN defaultConfigFile_0d);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Config__719 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Config__1029 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Config__1394 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Config", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_Config_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Config_init();
}

/* --- */
