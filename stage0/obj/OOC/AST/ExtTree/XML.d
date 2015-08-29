#include <OOC/AST/ExtTree/XML.oh>
#include <OOC/Scanner/Symbol.oh>
#include <OOC/AST.oh>
#include <XML/Writer.oh>
#include <XML/UnicodeCodec/Latin1.oh>
#include <OOC/Doc.oh>
#include <OOC/Doc/Output/XML.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:AST:ExtTree:XML", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_AST_ExtTree_XML_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_AST_ExtTree_XML_init();
}

/* --- */
