#include "OOC/Make/WriteMainFileAssembler.oh"
#include "Ascii.oh"
#include "Channel.oh"
#include "Files.oh"
#include "TextRider.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Make_WriteMainFileAssembler__1099 = { (RT0__Struct[]){&_td_OOC_Repository__Module}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Make_WriteMainFileAssembler__1318 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Make_WriteMainFileAssembler__1426 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Make_WriteMainFileAssembler__1461 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1024, 1024, RT0__strArray };
RT0__StructDesc _td_OOC_Make_WriteMainFileAssembler__1861 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Make_WriteMainFileAssembler__2135 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Make_WriteMainFileAssembler__2253 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Make:WriteMainFileAssembler", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_Make_WriteMainFileAssembler_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Make_WriteMainFileAssembler_init();
}

/* --- */
