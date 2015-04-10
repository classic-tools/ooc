#include "Config/Simple.oh"
#include "ProgramArgs.oh"
#include "IO/Memory.oh"
#include "Config/Source.oh"
#include "Config/Value/String.oh"
#include "Config/Value/Integer.oh"
#include "Config/Value/Boolean.oh"
#include "RT0.oh"
#include "Language/String0.oh"
#define Config_Simple__rootName "configuration"
#define Config_Simple__bufferName "/#Config_Simple#"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Config_Simple__Config = { (RT0__Struct[]){&_td_Config_Simple__ConfigDesc}, NULL, &_mid, "Config", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Config_Simple__ConfigDesc = { (RT0__Struct[]){&_td_Config__ConfigDesc,&_td_Config_Simple__ConfigDesc}, (void*[]){(void*)Config_Simple__ConfigDesc_ConfigFileCmdLineOption,(void*)Config_Simple__ConfigDesc_ConfigFileEnvVar,(void*)Config_Simple__ConfigDesc_Read}, &_mid, "ConfigDesc", 40, 1, RT0__strRecord };
RT0__StructDesc _td_Config_Simple__992 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Config_Simple__2003 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Config:Simple", (RT0__Struct[]) { &_td_Config_Simple__Config, &_td_Config_Simple__ConfigDesc, NULL } };

extern void OOC_Config_Simple_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Config_Simple_init();
}

/* --- */
