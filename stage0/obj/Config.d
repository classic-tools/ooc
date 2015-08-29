#include <Config.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Config__Config = { (RT0__Struct[]){&_td_Config__ConfigDesc}, NULL, &_mid, "Config", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Config__ConfigDesc = { (RT0__Struct[]){&_td_Config__ConfigDesc}, (void*[]){}, &_mid, "ConfigDesc", 0, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Config", (RT0__Struct[]) { &_td_Config__Config, &_td_Config__ConfigDesc, NULL } };

extern void OOC_Config_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Config_init();
}

/* --- */
