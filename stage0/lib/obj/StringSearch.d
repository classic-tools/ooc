#include "StringSearch.oh"
#include "RT0.oh"
#include "Language/String0.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_StringSearch__Factory = { (RT0__Struct[]){&_td_StringSearch__FactoryDesc}, NULL, &_mid, "Factory", 4, -1, RT0__strPointer };
RT0__StructDesc _td_StringSearch__FactoryDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_StringSearch__FactoryDesc}, (void*[]){(void*)StringSearch__FactoryDesc_Destroy,(void*)ADT_Object__ObjectDesc_Equals,(void*)ADT_Object__ObjectDesc_HashCode,(void*)ADT_Object__ObjectDesc_Load,(void*)ADT_Object__ObjectDesc_Store,(void*)ADT_Object__ObjectDesc_ToString,(void*)StringSearch__FactoryDesc_Compile}, &_mid, "FactoryDesc", 0, 1, RT0__strRecord };
RT0__StructDesc _td_StringSearch__Matcher = { (RT0__Struct[]){&_td_StringSearch__MatcherDesc}, NULL, &_mid, "Matcher", 4, -1, RT0__strPointer };
RT0__StructDesc _td_StringSearch__MatcherDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_StringSearch__MatcherDesc}, (void*[]){(void*)StringSearch__MatcherDesc_Destroy,(void*)ADT_Object__ObjectDesc_Equals,(void*)ADT_Object__ObjectDesc_HashCode,(void*)ADT_Object__ObjectDesc_Load,(void*)ADT_Object__ObjectDesc_Store,(void*)ADT_Object__ObjectDesc_ToString,(void*)StringSearch__MatcherDesc_Match,(void*)StringSearch__MatcherDesc_MatchChars,(void*)StringSearch__MatcherDesc_Search,(void*)StringSearch__MatcherDesc_SearchChars}, &_mid, "MatcherDesc", 12, 1, RT0__strRecord };
RT0__StructDesc _td_StringSearch__MatchObject = { (RT0__Struct[]){&_td_StringSearch__MatchObjectDesc}, NULL, &_mid, "MatchObject", 4, -1, RT0__strPointer };
RT0__StructDesc _td_StringSearch__MatchObjectDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_StringSearch__MatchObjectDesc}, (void*[]){(void*)StringSearch__MatchObjectDesc_Destroy,(void*)ADT_Object__ObjectDesc_Equals,(void*)ADT_Object__ObjectDesc_HashCode,(void*)ADT_Object__ObjectDesc_Load,(void*)ADT_Object__ObjectDesc_Store,(void*)ADT_Object__ObjectDesc_ToString,(void*)StringSearch__MatchObjectDesc_End,(void*)StringSearch__MatchObjectDesc_Start}, &_mid, "MatchObjectDesc", 16, 1, RT0__strRecord };
RT0__StructDesc _td_StringSearch__5650 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_StringSearch__7152 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"StringSearch", (RT0__Struct[]) { &_td_StringSearch__Factory, &_td_StringSearch__FactoryDesc, &_td_StringSearch__Matcher, &_td_StringSearch__MatcherDesc, &_td_StringSearch__MatchObject, &_td_StringSearch__MatchObjectDesc, NULL } };

extern void OOC_StringSearch_init0() {
  RT0__RegisterModule(&_mid);
  OOC_StringSearch_init();
}

/* --- */
