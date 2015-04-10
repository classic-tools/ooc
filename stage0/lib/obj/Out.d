#include "Out.oh"
#include "RT0.oh"
#include "Language/String0.oh"
TextRider__Writer Out__writer;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Out__2240 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Out", (RT0__Struct[]) { NULL } };

extern void OOC_Out_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Out_init();
}

/* --- */
