#include "OOC/Make/WriteMainFileC.oh"
#include "Channel.oh"
#include "Files.oh"
#include "TextRider.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Make_WriteMainFileC__1062 = { (RT0__Struct[]){&_td_OOC_Repository__Module}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Make_WriteMainFileC__1279 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Make_WriteMainFileC__1387 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Make_WriteMainFileC__1422 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1024, 1024, RT0__strArray };
RT0__StructDesc _td_OOC_Make_WriteMainFileC__1822 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Make:WriteMainFileC", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_Make_WriteMainFileC_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Make_WriteMainFileC_init();
}

/* --- */
