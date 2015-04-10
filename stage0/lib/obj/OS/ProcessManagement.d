#include "OS/ProcessManagement.oh"
#include "RT0.oh"
#include "Language/String0.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OS_ProcessManagement__1282 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OS:ProcessManagement", (RT0__Struct[]) { NULL } };

extern void OOC_OS_ProcessManagement_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OS_ProcessManagement_init();
}

/* --- */
