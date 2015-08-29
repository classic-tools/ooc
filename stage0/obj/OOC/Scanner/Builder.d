#include "OOC/Scanner/Builder.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Scanner_Builder__Builder = { (RT0__Struct[]){&_td_OOC_Scanner_Builder__BuilderDesc}, NULL, &_mid, "Builder", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Scanner_Builder__BuilderDesc = { (RT0__Struct[]){&_td_OOC_Scanner_Builder__BuilderDesc}, (void*[]){(void*)OOC_Scanner_Builder__BuilderDesc_AddSymbol,(void*)OOC_Scanner_Builder__BuilderDesc_SetPragmaHistory}, &_mid, "BuilderDesc", 8, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Scanner:Builder", (RT0__Struct[]) { &_td_OOC_Scanner_Builder__Builder, &_td_OOC_Scanner_Builder__BuilderDesc, NULL } };

extern void OOC_OOC_Scanner_Builder_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Scanner_Builder_init();
}

/* --- */
