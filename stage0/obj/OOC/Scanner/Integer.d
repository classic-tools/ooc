#include "OOC/Scanner/Integer.oh"
#include "Strings.oh"
#include "IntStr.oh"
#include "RT0.oh"
#include "Language/String0.oh"
#define OOC_Scanner_Integer__outOfRange 1
#define OOC_Scanner_Integer__negativeHexConst 2
static OOC_Scanner_Integer__ErrorContext OOC_Scanner_Integer__integerContext;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Scanner_Integer__ErrorContext = { (RT0__Struct[]){&_td_OOC_Scanner_Integer__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Scanner_Integer__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_OOC_Error__ContextDesc,&_td_OOC_Scanner_Integer__ErrorContextDesc}, (void*[]){(void*)OOC_Scanner_Integer__ErrorContextDesc_GetTemplate,(void*)OOC_Error__ContextDesc_BaseTemplate}, &_mid, "ErrorContextDesc", 4, 2, RT0__strRecord };
RT0__StructDesc _td_OOC_Scanner_Integer__449 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 256, 128, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Scanner:Integer", (RT0__Struct[]) { &_td_OOC_Scanner_Integer__ErrorContext, &_td_OOC_Scanner_Integer__ErrorContextDesc, NULL } };

extern void OOC_OOC_Scanner_Integer_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Scanner_Integer_init();
}

/* --- */
