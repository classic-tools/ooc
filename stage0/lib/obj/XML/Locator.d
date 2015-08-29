#include <XML/Locator.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_Locator__Locator = { (RT0__Struct[]){&_td_XML_Locator__Position}, NULL, &_mid, "Locator", 4, -1, RT0__strPointer };
RT0__StructDesc _td_XML_Locator__Position = { (RT0__Struct[]){&_td_XML_Locator__Position}, (void*[]){}, &_mid, "Position", 20, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Locator__ErrorListener = { (RT0__Struct[]){&_td_XML_Locator__ErrorListenerDesc}, NULL, &_mid, "ErrorListener", 4, -1, RT0__strPointer };
RT0__StructDesc _td_XML_Locator__ErrorListenerDesc = { (RT0__Struct[]){&_td_XML_Locator__ErrorListenerDesc}, (void*[]){(void*)XML_Locator__ErrorListenerDesc_Error}, &_mid, "ErrorListenerDesc", 0, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:Locator", (RT0__Struct[]) { &_td_XML_Locator__Locator, &_td_XML_Locator__Position, &_td_XML_Locator__ErrorListener, &_td_XML_Locator__ErrorListenerDesc, NULL } };

extern void OOC_XML_Locator_init0() {
  RT0__RegisterModule(&_mid);
  OOC_XML_Locator_init();
}

/* --- */
