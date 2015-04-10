#include "URI/Scheme/CurrentDoc.oh"
#include "CharClass.oh"
#include "RT0.oh"
#include "Language/String0.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI_Scheme_CurrentDoc__CurrentDoc = { (RT0__Struct[]){&_td_URI_Scheme_CurrentDoc__CurrentDocDesc}, NULL, &_mid, "CurrentDoc", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI_Scheme_CurrentDoc__CurrentDocDesc = { (RT0__Struct[]){&_td_URI__URIDesc,&_td_URI_Scheme_CurrentDoc__CurrentDocDesc}, (void*[]){(void*)URI__URIDesc_AppendScheme,(void*)URI_Scheme_CurrentDoc__CurrentDocDesc_Clone,(void*)URI_Scheme_CurrentDoc__CurrentDocDesc_Copy,(void*)URI__URIDesc_GetChannel,(void*)URI_Scheme_CurrentDoc__CurrentDocDesc_GetString,(void*)URI__URIDesc_MakeRelative,(void*)URI__URIDesc_SetSchemeId,(void*)URI_Scheme_CurrentDoc__CurrentDocDesc_WriteXML}, &_mid, "CurrentDocDesc", 4, 1, RT0__strRecord };
RT0__StructDesc _td_URI_Scheme_CurrentDoc__1861 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:Scheme:CurrentDoc", (RT0__Struct[]) { &_td_URI_Scheme_CurrentDoc__CurrentDoc, &_td_URI_Scheme_CurrentDoc__CurrentDocDesc, NULL } };

extern void OOC_URI_Scheme_CurrentDoc_init0() {
  RT0__RegisterModule(&_mid);
  OOC_URI_Scheme_CurrentDoc_init();
}

/* --- */
