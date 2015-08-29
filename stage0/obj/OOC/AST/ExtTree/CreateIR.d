#include <OOC/AST/ExtTree/CreateIR.oh>
#include <Log.oh>
#include <Object/BigInt.oh>
#include <OOC/Scanner/Symbol.oh>
#include <OOC/Scanner/Builder/BasicList.oh>
#include <OOC/SymbolTable/TypeRules.oh>
#include <OOC/SymbolTable/Predef.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:AST:ExtTree:CreateIR", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_AST_ExtTree_CreateIR_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_AST_ExtTree_CreateIR_init();
}

/* --- */
