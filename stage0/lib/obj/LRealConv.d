#include "LRealConv.oh"
#include "libc.oh"
#include "CharClass.oh"
#include "Real0.oh"
#include "RT0.oh"
#include "Language/String0.oh"
#define LRealConv__maxValue "17976931348623157"
#define LRealConv__maxExp 308

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_LRealConv__2120 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_LRealConv__2256 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"LRealConv", (RT0__Struct[]) { NULL } };

extern void OOC_LRealConv_init0() {
  RT0__RegisterModule(&_mid);
  OOC_LRealConv_init();
}

/* --- */
