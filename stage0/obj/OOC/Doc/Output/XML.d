#include "OOC/Doc/Output/XML.oh"
#include "Strings.oh"
#include "ADT/Object.oh"
#include "XML/UnicodeCodec/Latin1.oh"
#include "RT0.oh"
#include "Language/String0.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Doc_Output_XML__1637 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 2048, 2048, RT0__strArray };
RT0__StructDesc _td_OOC_Doc_Output_XML__2559 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_OOC_Doc_Output_XML__2621 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Doc_Output_XML__5658 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Doc:Output:XML", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_Doc_Output_XML_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Doc_Output_XML_init();
}

/* --- */
