#include <OOC/Scanner/BasicList.oh>
#include <Strings.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Scanner_BasicList__Symbol = { (RT0__Struct[]){&_td_OOC_Scanner_BasicList__SymbolDesc}, NULL, &_mid, "Symbol", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Scanner_BasicList__SymbolDesc = { (RT0__Struct[]){&_td_OOC_Scanner_BasicList__SymbolDesc}, (void*[]){}, &_mid, "SymbolDesc", 28, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_Scanner_BasicList__Builder = { (RT0__Struct[]){&_td_OOC_Scanner_BasicList__BuilderDesc}, NULL, &_mid, "Builder", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Scanner_BasicList__BuilderDesc = { (RT0__Struct[]){&_td_OOC_Scanner_Builder__BuilderDesc,&_td_OOC_Scanner_BasicList__BuilderDesc}, (void*[]){(void*)OOC_Scanner_BasicList__BuilderDesc_AddSymbol,(void*)OOC_Scanner_Builder__BuilderDesc_SetPragmaHistory,(void*)OOC_Scanner_BasicList__BuilderDesc_Clear}, &_mid, "BuilderDesc", 20, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_Scanner_BasicList__3303 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Scanner:BasicList", (RT0__Struct[]) { &_td_OOC_Scanner_BasicList__Symbol, &_td_OOC_Scanner_BasicList__SymbolDesc, &_td_OOC_Scanner_BasicList__Builder, &_td_OOC_Scanner_BasicList__BuilderDesc, NULL } };

extern void OOC_OOC_Scanner_BasicList_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Scanner_BasicList_init();
}

/* --- */
