#include <URI.oh>
#include <Strings.oh>
#include <CharClass.oh>
typedef struct URI__ListDesc *URI__List;
typedef struct URI__ListDesc {
  URI__List next;
  URI__URI scheme;
} URI__ListDesc;
static URI__List URI__schemeList;
#define URI__noChannelAvailable 1
static URI__ErrorContext URI__uriContext;
static OOC_CHAR8 URI__Equal(URI_String__String a, OOC_LEN a_0d, URI_String__String b, OOC_LEN b_0d);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI__URI = { (RT0__Struct[]){&_td_URI__URIDesc}, NULL, &_mid, "URI", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI__URIDesc = { (RT0__Struct[]){&_td_URI__URIDesc}, (void*[]){(void*)URI__URIDesc_AppendScheme,(void*)URI__URIDesc_Clone,(void*)URI__URIDesc_Copy,(void*)URI__URIDesc_GetChannel,(void*)URI__URIDesc_GetString,(void*)URI__URIDesc_MakeRelative,(void*)URI__URIDesc_SetSchemeId,(void*)URI__URIDesc_WriteXML}, &_mid, "URIDesc", 4, 0, RT0__strRecord };
RT0__StructDesc _td_URI__Authority = { (RT0__Struct[]){&_td_URI__AuthorityDesc}, NULL, &_mid, "Authority", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI__AuthorityDesc = { (RT0__Struct[]){&_td_URI__AuthorityDesc}, (void*[]){(void*)URI__AuthorityDesc_Append,(void*)URI__AuthorityDesc_Clone,(void*)URI__AuthorityDesc_Copy,(void*)URI__AuthorityDesc_ParseAuthority,(void*)URI__AuthorityDesc_WriteXML}, &_mid, "AuthorityDesc", 0, 0, RT0__strRecord };
RT0__StructDesc _td_URI__Query = { (RT0__Struct[]){&_td_URI__QueryDesc}, NULL, &_mid, "Query", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI__QueryDesc = { (RT0__Struct[]){&_td_URI__QueryDesc}, (void*[]){(void*)URI__QueryDesc_Append,(void*)URI__QueryDesc_Clone,(void*)URI__QueryDesc_Copy,(void*)URI__QueryDesc_ParseQuery,(void*)URI__QueryDesc_WriteXML}, &_mid, "QueryDesc", 0, 0, RT0__strRecord };
RT0__StructDesc _td_URI__Fragment = { (RT0__Struct[]){&_td_URI__FragmentDesc}, NULL, &_mid, "Fragment", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI__FragmentDesc = { (RT0__Struct[]){&_td_URI__FragmentDesc}, (void*[]){(void*)URI__FragmentDesc_Append,(void*)URI__FragmentDesc_Clone,(void*)URI__FragmentDesc_Copy,(void*)URI__FragmentDesc_ParseFragment,(void*)URI__FragmentDesc_WriteXML}, &_mid, "FragmentDesc", 0, 0, RT0__strRecord };
RT0__StructDesc _td_URI__HierarchicalURI = { (RT0__Struct[]){&_td_URI__HierarchicalURIDesc}, NULL, &_mid, "HierarchicalURI", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI__HierarchicalURIDesc = { (RT0__Struct[]){&_td_URI__URIDesc,&_td_URI__HierarchicalURIDesc}, (void*[]){(void*)URI__URIDesc_AppendScheme,(void*)URI__URIDesc_Clone,(void*)URI__HierarchicalURIDesc_Copy,(void*)URI__URIDesc_GetChannel,(void*)URI__URIDesc_GetString,(void*)URI__HierarchicalURIDesc_MakeRelative,(void*)URI__URIDesc_SetSchemeId,(void*)URI__URIDesc_WriteXML,(void*)URI__HierarchicalURIDesc_AppendPath,(void*)URI__HierarchicalURIDesc_ClearPath,(void*)URI__HierarchicalURIDesc_NewAuthority,(void*)URI__HierarchicalURIDesc_NewQuery,(void*)URI__HierarchicalURIDesc_ParsePath,(void*)URI__HierarchicalURIDesc_ResolveRelative,(void*)URI__HierarchicalURIDesc_SetAuthority,(void*)URI__HierarchicalURIDesc_SetQuery}, &_mid, "HierarchicalURIDesc", 12, 1, RT0__strRecord };
RT0__StructDesc _td_URI__OpaqueURI = { (RT0__Struct[]){&_td_URI__OpaqueURIDesc}, NULL, &_mid, "OpaqueURI", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI__OpaqueURIDesc = { (RT0__Struct[]){&_td_URI__URIDesc,&_td_URI__OpaqueURIDesc}, (void*[]){(void*)URI__URIDesc_AppendScheme,(void*)URI__URIDesc_Clone,(void*)URI__URIDesc_Copy,(void*)URI__URIDesc_GetChannel,(void*)URI__URIDesc_GetString,(void*)URI__URIDesc_MakeRelative,(void*)URI__URIDesc_SetSchemeId,(void*)URI__URIDesc_WriteXML,(void*)URI__OpaqueURIDesc_ParseOpaquePart}, &_mid, "OpaqueURIDesc", 4, 1, RT0__strRecord };
RT0__StructDesc _td_URI__Reference = { (RT0__Struct[]){&_td_URI__ReferenceDesc}, NULL, &_mid, "Reference", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI__ReferenceDesc = { (RT0__Struct[]){&_td_URI__ReferenceDesc}, (void*[]){(void*)URI__ReferenceDesc_GetString,(void*)URI__ReferenceDesc_WriteXML}, &_mid, "ReferenceDesc", 8, 0, RT0__strRecord };
RT0__StructDesc _td_URI__URIAttribute = { (RT0__Struct[]){&_td_URI__URIAttributeDesc}, NULL, &_mid, "URIAttribute", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI__URIAttributeDesc = { (RT0__Struct[]){&_td_Msg__AttributeDesc,&_td_URI__URIAttributeDesc}, (void*[]){(void*)URI__URIAttributeDesc_ReplacementText}, &_mid, "URIAttributeDesc", 12, 1, RT0__strRecord };
RT0__StructDesc _td_URI__List = { (RT0__Struct[]){&_td_URI__ListDesc}, NULL, &_mid, "List", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI__ListDesc = { (RT0__Struct[]){&_td_URI__ListDesc}, (void*[]){}, &_mid, "ListDesc", 8, 0, RT0__strRecord };
RT0__StructDesc _td_URI__ErrorContext = { (RT0__Struct[]){&_td_URI__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_URI__ErrorContextDesc}, (void*[]){(void*)URI__ErrorContextDesc_GetTemplate}, &_mid, "ErrorContextDesc", 4, 1, RT0__strRecord };
RT0__StructDesc _td_URI__5948 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 128, 128, RT0__strArray };
RT0__StructDesc _td_URI__7397 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI__7757 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI__12163 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI__13616 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI__17000 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1024, 1024, RT0__strArray };
RT0__StructDesc _td_URI__18185 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI__19662 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI__20556 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI__22993 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 2048, 2048, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI", (RT0__Struct[]) { &_td_URI__URI, &_td_URI__URIDesc, &_td_URI__Authority, &_td_URI__AuthorityDesc, &_td_URI__Query, &_td_URI__QueryDesc, &_td_URI__Fragment, &_td_URI__FragmentDesc, &_td_URI__HierarchicalURI, &_td_URI__HierarchicalURIDesc, &_td_URI__OpaqueURI, &_td_URI__OpaqueURIDesc, &_td_URI__Reference, &_td_URI__ReferenceDesc, &_td_URI__URIAttribute, &_td_URI__URIAttributeDesc, &_td_URI__List, &_td_URI__ListDesc, &_td_URI__ErrorContext, &_td_URI__ErrorContextDesc, NULL } };

extern void OOC_URI_init0() {
  RT0__RegisterModule(&_mid);
  OOC_URI_init();
}

/* --- */
