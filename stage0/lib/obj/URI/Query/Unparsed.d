#include "URI/Query/Unparsed.oh"
#include "Strings.oh"
#include "CharClass.oh"
#include "URI/String.oh"
#include "URI/CharClass.oh"
#define URI_Query_Unparsed__illegalQueryChar 1
static URI_Error__Context URI_Query_Unparsed__queryContext;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI_Query_Unparsed__Query = { (RT0__Struct[]){&_td_URI_Query_Unparsed__QueryDesc}, NULL, &_mid, "Query", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI_Query_Unparsed__QueryDesc = { (RT0__Struct[]){&_td_URI__QueryDesc,&_td_URI_Query_Unparsed__QueryDesc}, (void*[]){(void*)URI_Query_Unparsed__QueryDesc_Append,(void*)URI_Query_Unparsed__QueryDesc_Clone,(void*)URI_Query_Unparsed__QueryDesc_Copy,(void*)URI_Query_Unparsed__QueryDesc_ParseQuery,(void*)URI_Query_Unparsed__QueryDesc_WriteXML}, &_mid, "QueryDesc", 4, 1, RT0__strRecord };
RT0__StructDesc _td_URI_Query_Unparsed__2753 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:Query:Unparsed", (RT0__Struct[]) { &_td_URI_Query_Unparsed__Query, &_td_URI_Query_Unparsed__QueryDesc, NULL } };

extern void OOC_URI_Query_Unparsed_init0() {
  RT0__RegisterModule(&_mid);
  OOC_URI_Query_Unparsed_init();
}

/* --- */
