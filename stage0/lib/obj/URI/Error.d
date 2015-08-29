#include <URI/Error.oh>
#include <Ascii.oh>
#include <LongStrings.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI_Error__Mapping = { (RT0__Struct[]){&_td_URI_Error__MappingDesc}, NULL, &_mid, "Mapping", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI_Error__MappingDesc = { (RT0__Struct[]){&_td_URI_Error__MappingDesc}, (void*[]){}, &_mid, "MappingDesc", 12, 0, RT0__strRecord };
RT0__StructDesc _td_URI_Error__Context = { (RT0__Struct[]){&_td_URI_Error__ContextDesc}, NULL, &_mid, "Context", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI_Error__ContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_URI_Error__ContextDesc}, (void*[]){(void*)URI_Error__ContextDesc_GetTemplate,(void*)URI_Error__ContextDesc_SetString}, &_mid, "ContextDesc", 8, 1, RT0__strRecord };
RT0__StructDesc _td_URI_Error__2328 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2048, 1024, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:Error", (RT0__Struct[]) { &_td_URI_Error__Mapping, &_td_URI_Error__MappingDesc, &_td_URI_Error__Context, &_td_URI_Error__ContextDesc, NULL } };

extern void OOC_URI_Error_init0() {
  RT0__RegisterModule(&_mid);
  OOC_URI_Error_init();
}

/* --- */
