#include "URI/Scheme/File.oh"
#include "Msg.oh"
#include "Strings.oh"
#include "OS/ProcessParameters.oh"
#include "URI/CharClass.oh"
#include "URI/String.oh"
#include "URI/Parser.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI_Scheme_File__URI = { (RT0__Struct[]){&_td_URI_Scheme_File__URIDesc}, NULL, &_mid, "URI", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI_Scheme_File__URIDesc = { (RT0__Struct[]){&_td_URI__URIDesc,&_td_URI__HierarchicalURIDesc,&_td_URI_Scheme_Hierarchical__GenericDesc,&_td_URI_Scheme_File__URIDesc}, (void*[]){(void*)URI__URIDesc_AppendScheme,(void*)URI_Scheme_File__URIDesc_Clone,(void*)URI_Scheme_Hierarchical__GenericDesc_Copy,(void*)URI_Scheme_File__URIDesc_GetChannel,(void*)URI_Scheme_Hierarchical__GenericDesc_GetString,(void*)URI_Scheme_Hierarchical__GenericDesc_MakeRelative,(void*)URI__URIDesc_SetSchemeId,(void*)URI_Scheme_Hierarchical__GenericDesc_WriteXML,(void*)URI_Scheme_Hierarchical__GenericDesc_AppendPath,(void*)URI_Scheme_Hierarchical__GenericDesc_ClearPath,(void*)URI_Scheme_File__URIDesc_NewAuthority,(void*)URI_Scheme_File__URIDesc_NewQuery,(void*)URI_Scheme_Hierarchical__GenericDesc_ParsePath,(void*)URI_Scheme_Hierarchical__GenericDesc_ResolveRelative,(void*)URI__HierarchicalURIDesc_SetAuthority,(void*)URI__HierarchicalURIDesc_SetQuery,(void*)URI_Scheme_Hierarchical__GenericDesc_AppendSegment,(void*)URI_Scheme_Hierarchical__GenericDesc_RemoveSegment,(void*)URI_Scheme_Hierarchical__GenericDesc_StripSegments,(void*)URI_Scheme_File__URIDesc_GetPath}, &_mid, "URIDesc", 20, 3, RT0__strRecord };
RT0__StructDesc _td_URI_Scheme_File__2179 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI_Scheme_File__2777 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 2048, 2048, RT0__strArray };
RT0__StructDesc _td_URI_Scheme_File__3484 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 4096, 4096, RT0__strArray };
RT0__StructDesc _td_URI_Scheme_File__3981 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI_Scheme_File__4163 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 4096, 4096, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:Scheme:File", (RT0__Struct[]) { &_td_URI_Scheme_File__URI, &_td_URI_Scheme_File__URIDesc, NULL } };

extern void OOC_URI_Scheme_File_init0() {
  RT0__RegisterModule(&_mid);
  OOC_URI_Scheme_File_init();
}

/* --- */
