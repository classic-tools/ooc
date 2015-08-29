#include <XML/EntityResolver.oh>
#include <LongStrings.oh>
#include <Strings.oh>
#include <URI/Parser.oh>
#include <URI/CharClass.oh>
#include <XML/UnicodeCodec.oh>
#include <XML/UnicodeCodec/UTF8.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_EntityResolver__Resolver = { (RT0__Struct[]){&_td_XML_EntityResolver__ResolverDesc}, NULL, &_mid, "Resolver", 4, -1, RT0__strPointer };
RT0__StructDesc _td_XML_EntityResolver__ResolverDesc = { (RT0__Struct[]){&_td_XML_EntityResolver__ResolverDesc}, (void*[]){(void*)XML_EntityResolver__ResolverDesc_GetURI}, &_mid, "ResolverDesc", 0, 0, RT0__strRecord };
RT0__StructDesc _td_XML_EntityResolver__1586 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 8192, 8192, RT0__strArray };
RT0__StructDesc _td_XML_EntityResolver__1618 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 4, 4, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:EntityResolver", (RT0__Struct[]) { &_td_XML_EntityResolver__Resolver, &_td_XML_EntityResolver__ResolverDesc, NULL } };

extern void OOC_XML_EntityResolver_init0() {
  RT0__RegisterModule(&_mid);
  OOC_XML_EntityResolver_init();
}

/* --- */
