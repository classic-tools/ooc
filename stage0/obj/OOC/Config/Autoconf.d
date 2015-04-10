#include "OOC/Config/Autoconf.oh"
#include "RT0.oh"
#include "Language/String0.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Config:Autoconf", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_Config_Autoconf_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Config_Autoconf_init();
}

/* --- */
