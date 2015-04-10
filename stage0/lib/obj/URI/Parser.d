#include "URI/Parser.oh"
#include "Strings.oh"
#include "URI/CharClass.oh"
#include "URI/String.oh"
#include "URI/Scheme/Hierarchical.oh"
#include "URI/Scheme/Opaque.oh"
#include "URI/Scheme/CurrentDoc.oh"
#include "RT0.oh"
#include "Language/String0.oh"
#define URI_Parser__illegalSchemeChar 1
#define URI_Parser__expectedHierarchicalPath 2
#define URI_Parser__expectedOpaquePart 3
#define URI_Parser__authorityNotSupported 4
#define URI_Parser__queryNotSupported 5
#define URI_Parser__junkAfterURI 6
#define URI_Parser__absoluteWithoutPath 7
#define URI_Parser__emptyOpaquePart 8
#define URI_Parser__invalidRelativeReference 9
static URI_Error__Context URI_Parser__uriContext;
static URI__HierarchicalURI URI_Parser__defaultHierarchical;
static URI__OpaqueURI URI_Parser__defaultOpaque;

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:Parser", (RT0__Struct[]) { NULL } };

extern void OOC_URI_Parser_init0() {
  RT0__RegisterModule(&_mid);
  OOC_URI_Parser_init();
}

/* --- */
