#include "URI/Scheme/Hierarchical.oh"
#include "Strings.oh"
#include "CharClass.oh"
#include "URI/String.oh"
#include "URI/CharClass.oh"
#include "URI/Authority/Unparsed.oh"
#include "URI/Query/Unparsed.oh"
#include "RT0.oh"
#include "Language/String0.oh"
#define URI_Scheme_Hierarchical__illegalPathChar 1
static URI_Error__Context URI_Scheme_Hierarchical__pathContext;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI_Scheme_Hierarchical__Parameter = { (RT0__Struct[]){&_td_URI_Scheme_Hierarchical__ParameterDesc}, NULL, &_mid, "Parameter", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI_Scheme_Hierarchical__ParameterDesc = { (RT0__Struct[]){&_td_URI_Scheme_Hierarchical__ParameterDesc}, (void*[]){(void*)URI_Scheme_Hierarchical__ParameterDesc_Append,(void*)URI_Scheme_Hierarchical__ParameterDesc_Clone,(void*)URI_Scheme_Hierarchical__ParameterDesc_Copy,(void*)URI_Scheme_Hierarchical__ParameterDesc_WriteXML}, &_mid, "ParameterDesc", 8, 0, RT0__strRecord };
RT0__StructDesc _td_URI_Scheme_Hierarchical__Segment = { (RT0__Struct[]){&_td_URI_Scheme_Hierarchical__SegmentDesc}, NULL, &_mid, "Segment", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI_Scheme_Hierarchical__SegmentDesc = { (RT0__Struct[]){&_td_URI_Scheme_Hierarchical__SegmentDesc}, (void*[]){(void*)URI_Scheme_Hierarchical__SegmentDesc_Append,(void*)URI_Scheme_Hierarchical__SegmentDesc_AppendParameter,(void*)URI_Scheme_Hierarchical__SegmentDesc_Clone,(void*)URI_Scheme_Hierarchical__SegmentDesc_Copy,(void*)URI_Scheme_Hierarchical__SegmentDesc_WriteXML}, &_mid, "SegmentDesc", 16, 0, RT0__strRecord };
RT0__StructDesc _td_URI_Scheme_Hierarchical__Generic = { (RT0__Struct[]){&_td_URI_Scheme_Hierarchical__GenericDesc}, NULL, &_mid, "Generic", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI_Scheme_Hierarchical__GenericDesc = { (RT0__Struct[]){&_td_URI__URIDesc,&_td_URI__HierarchicalURIDesc,&_td_URI_Scheme_Hierarchical__GenericDesc}, (void*[]){(void*)URI__URIDesc_AppendScheme,(void*)URI_Scheme_Hierarchical__GenericDesc_Clone,(void*)URI_Scheme_Hierarchical__GenericDesc_Copy,(void*)URI__URIDesc_GetChannel,(void*)URI_Scheme_Hierarchical__GenericDesc_GetString,(void*)URI_Scheme_Hierarchical__GenericDesc_MakeRelative,(void*)URI__URIDesc_SetSchemeId,(void*)URI_Scheme_Hierarchical__GenericDesc_WriteXML,(void*)URI_Scheme_Hierarchical__GenericDesc_AppendPath,(void*)URI_Scheme_Hierarchical__GenericDesc_ClearPath,(void*)URI_Scheme_Hierarchical__GenericDesc_NewAuthority,(void*)URI_Scheme_Hierarchical__GenericDesc_NewQuery,(void*)URI_Scheme_Hierarchical__GenericDesc_ParsePath,(void*)URI_Scheme_Hierarchical__GenericDesc_ResolveRelative,(void*)URI__HierarchicalURIDesc_SetAuthority,(void*)URI__HierarchicalURIDesc_SetQuery,(void*)URI_Scheme_Hierarchical__GenericDesc_AppendSegment,(void*)URI_Scheme_Hierarchical__GenericDesc_RemoveSegment,(void*)URI_Scheme_Hierarchical__GenericDesc_StripSegments}, &_mid, "GenericDesc", 20, 2, RT0__strRecord };
RT0__StructDesc _td_URI_Scheme_Hierarchical__3460 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI_Scheme_Hierarchical__5314 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI_Scheme_Hierarchical__14103 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_URI_Scheme_Hierarchical__15043 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI_Scheme_Hierarchical__15486 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:Scheme:Hierarchical", (RT0__Struct[]) { &_td_URI_Scheme_Hierarchical__Parameter, &_td_URI_Scheme_Hierarchical__ParameterDesc, &_td_URI_Scheme_Hierarchical__Segment, &_td_URI_Scheme_Hierarchical__SegmentDesc, &_td_URI_Scheme_Hierarchical__Generic, &_td_URI_Scheme_Hierarchical__GenericDesc, NULL } };

extern void OOC_URI_Scheme_Hierarchical_init0() {
  RT0__RegisterModule(&_mid);
  OOC_URI_Scheme_Hierarchical_init();
}

/* --- */
