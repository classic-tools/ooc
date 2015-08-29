#include "OOC/C/RuntimeData.oh"
#include "TextRider.oh"
#include "ADT/ArrayList.oh"
#include "OOC/Config.oh"
#include "OOC/SymbolTable/Namespace.oh"
#include "OOC/C/Naming.oh"
#define OOC_C_RuntimeData__structTypeDesc "RT0__StructDesc"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_C_RuntimeData__1719 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:C:RuntimeData", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_C_RuntimeData_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_C_RuntimeData_init();
}

/* --- */
