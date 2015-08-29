#include <URI/Authority/Unparsed.oh>
#include <Strings.oh>
#include <CharClass.oh>
#include <URI/String.oh>
#include <URI/CharClass.oh>
#define URI_Authority_Unparsed__illegalAuthChar 1
static URI_Error__Context URI_Authority_Unparsed__authContext;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI_Authority_Unparsed__Authority = { (RT0__Struct[]){&_td_URI_Authority_Unparsed__AuthorityDesc}, NULL, &_mid, "Authority", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI_Authority_Unparsed__AuthorityDesc = { (RT0__Struct[]){&_td_URI__AuthorityDesc,&_td_URI_Authority_Unparsed__AuthorityDesc}, (void*[]){(void*)URI_Authority_Unparsed__AuthorityDesc_Append,(void*)URI_Authority_Unparsed__AuthorityDesc_Clone,(void*)URI_Authority_Unparsed__AuthorityDesc_Copy,(void*)URI_Authority_Unparsed__AuthorityDesc_ParseAuthority,(void*)URI_Authority_Unparsed__AuthorityDesc_WriteXML}, &_mid, "AuthorityDesc", 4, 1, RT0__strRecord };
RT0__StructDesc _td_URI_Authority_Unparsed__2801 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:Authority:Unparsed", (RT0__Struct[]) { &_td_URI_Authority_Unparsed__Authority, &_td_URI_Authority_Unparsed__AuthorityDesc, NULL } };

extern void OOC_URI_Authority_Unparsed_init0() {
  RT0__RegisterModule(&_mid);
  OOC_URI_Authority_Unparsed_init();
}

/* --- */
