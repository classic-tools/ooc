#include "URI/Authority/ServerBased.oh"
#include "Strings.oh"
#include "IntStr.oh"
#include "CharClass.oh"
#include "URI/CharClass.oh"
#include "RT0.oh"
#include "Language/String0.oh"
#define URI_Authority_ServerBased__defaultPort -1
#define URI_Authority_ServerBased__illegalUserInfoChar 1
#define URI_Authority_ServerBased__malformedIPv4Address 2
#define URI_Authority_ServerBased__malformedHostName 3
#define URI_Authority_ServerBased__emptyHostName 4
#define URI_Authority_ServerBased__malformedPort 5
#define URI_Authority_ServerBased__portOutOfRange 6
#define URI_Authority_ServerBased__junkAfterAuthority 7
static URI_Error__Context URI_Authority_ServerBased__serverContext;
static Msg__Msg URI_Authority_ServerBased__ParseHost(URI_String__StringPtr str, OOC_INT16 offset);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI_Authority_ServerBased__Authority = { (RT0__Struct[]){&_td_URI_Authority_ServerBased__AuthorityDesc}, NULL, &_mid, "Authority", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI_Authority_ServerBased__AuthorityDesc = { (RT0__Struct[]){&_td_URI__AuthorityDesc,&_td_URI_Authority_ServerBased__AuthorityDesc}, (void*[]){(void*)URI_Authority_ServerBased__AuthorityDesc_Append,(void*)URI_Authority_ServerBased__AuthorityDesc_Clone,(void*)URI_Authority_ServerBased__AuthorityDesc_Copy,(void*)URI_Authority_ServerBased__AuthorityDesc_ParseAuthority,(void*)URI_Authority_ServerBased__AuthorityDesc_WriteXML}, &_mid, "AuthorityDesc", 16, 1, RT0__strRecord };
RT0__StructDesc _td_URI_Authority_ServerBased__7876 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_URI_Authority_ServerBased__8530 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI_Authority_ServerBased__8559 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:Authority:ServerBased", (RT0__Struct[]) { &_td_URI_Authority_ServerBased__Authority, &_td_URI_Authority_ServerBased__AuthorityDesc, NULL } };

extern void OOC_URI_Authority_ServerBased_init0() {
  RT0__RegisterModule(&_mid);
  OOC_URI_Authority_ServerBased_init();
}

/* --- */
