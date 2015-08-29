#include "OOC/Config/Assembler.oh"
#include "Strings.oh"
#include "URI/Scheme/File.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Config_Assembler__1005 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Config_Assembler__1036 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 2048, 2048, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Config:Assembler", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_Config_Assembler_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Config_Assembler_init();
}

/* --- */
