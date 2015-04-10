#include "OOC/SSA/IRtoSSA.oh"
#include "Log.oh"
#include "Language/String.oh"
#include "Language/String8.oh"
#include "Language/Integer.oh"
#include "OOC/SymbolTable.oh"
#include "OOC/SymbolTable/Predef.oh"
#include "OOC/SymbolTable/TypeRules.oh"
#include "OOC/SSA/Opcode.oh"
#include "OOC/SSA/Opnd.oh"
#include "OOC/SSA/Result.oh"
#include "OOC/SSA/Allocator.oh"
#include "RT0.oh"
#include "Language/String0.oh"
static void OOC_SSA_IRtoSSA__AddStoreBackwardFeed(OOC_SSA__ProcBlock pb, OOC_SSA__Instr loopEnd, OOC_SSA__Result storeArg);

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SSA:IRtoSSA", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_SSA_IRtoSSA_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_SSA_IRtoSSA_init();
}

/* --- */
