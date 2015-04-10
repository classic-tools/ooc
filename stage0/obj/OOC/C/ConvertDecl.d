#include "OOC/C/ConvertDecl.oh"
#include "ADT/String.oh"
#include "Language/Integer.oh"
#include "OOC/SymbolTable/Predef.oh"
#include "OOC/C/Naming.oh"
#include "RT0.oh"
#include "Language/String0.oh"
#define OOC_C_ConvertDecl__modeWriteExported 0
#define OOC_C_ConvertDecl__modeWritePrivate 1
#define OOC_C_ConvertDecl__modeWriteFctDef 2
#define OOC_C_ConvertDecl__modeFormalParameter 3
static OOC_C_DeclWriter__Declaration OOC_C_ConvertDecl__ConvertDecl(OOC_C_DeclWriter__Writer w, OOC_SymbolTable__Declaration item, OOC_INT8 mode);

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:C:ConvertDecl", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_C_ConvertDecl_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_C_ConvertDecl_init();
}

/* --- */
