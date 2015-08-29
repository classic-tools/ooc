#include <OOC/SymbolTable/InterfaceDescr.oh>
#include <Strings.oh>
#include <Object.oh>
#include <ADT/ArrayList.oh>
#include <XML/Writer.oh>
#include <XML/UnicodeCodec/Latin1.oh>
#include <OOC/Repository.oh>
#include <OOC/SymbolTable/GetClass.oh>
#include <OOC/SymbolTable/Namespace.oh>
#include <OOC/Doc/Output/XML.oh>
#define OOC_SymbolTable_InterfaceDescr__dtdPackageName "OOC"
#define OOC_SymbolTable_InterfaceDescr__dtdResourcePath "xml/interface-description.dtd"
static URI__URI OOC_SymbolTable_InterfaceDescr__dtdSystemId;
static URI__URI OOC_SymbolTable_InterfaceDescr__GetSystemId(OOC_Config_Repositories__Section repositories);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__2532 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__2683 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 2048, 2048, RT0__strArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__6309 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__6424 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__6863 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__7079 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 2048, 2048, RT0__strArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__10193 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__14379 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 2048, 2048, RT0__strArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__15454 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 2048, 2048, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SymbolTable:InterfaceDescr", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_SymbolTable_InterfaceDescr_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_SymbolTable_InterfaceDescr_init();
}

/* --- */
