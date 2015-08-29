#include "URI/Scheme/Opaque.oh"
#include "CharClass.oh"
#include "URI/CharClass.oh"
#include "URI/String.oh"
#define URI_Scheme_Opaque__illegalOpaqueChar 1
static URI_Error__Context URI_Scheme_Opaque__opaqueContext;
static OOC_INT16 URI_Scheme_Opaque__IsValidOpaqueStr(const URI_String__String str__ref, OOC_LEN str_0d);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI_Scheme_Opaque__Generic = { (RT0__Struct[]){&_td_URI_Scheme_Opaque__GenericDesc}, NULL, &_mid, "Generic", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI_Scheme_Opaque__GenericDesc = { (RT0__Struct[]){&_td_URI__URIDesc,&_td_URI__OpaqueURIDesc,&_td_URI_Scheme_Opaque__GenericDesc}, (void*[]){(void*)URI__URIDesc_AppendScheme,(void*)URI_Scheme_Opaque__GenericDesc_Clone,(void*)URI_Scheme_Opaque__GenericDesc_Copy,(void*)URI__URIDesc_GetChannel,(void*)URI_Scheme_Opaque__GenericDesc_GetString,(void*)URI__URIDesc_MakeRelative,(void*)URI__URIDesc_SetSchemeId,(void*)URI_Scheme_Opaque__GenericDesc_WriteXML,(void*)URI_Scheme_Opaque__GenericDesc_ParseOpaquePart}, &_mid, "GenericDesc", 8, 2, RT0__strRecord };
RT0__StructDesc _td_URI_Scheme_Opaque__3081 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:Scheme:Opaque", (RT0__Struct[]) { &_td_URI_Scheme_Opaque__Generic, &_td_URI_Scheme_Opaque__GenericDesc, NULL } };

extern void OOC_URI_Scheme_Opaque_init0() {
  RT0__RegisterModule(&_mid);
  OOC_URI_Scheme_Opaque_init();
}

/* --- */
