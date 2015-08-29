#include <OOC/C/Naming.oh>
#include <IntStr.oh>
#include <Strings.oh>
#include <Object.oh>
#include <ADT/Dictionary.oh>
#include <OOC/Config.oh>
#include <OOC/SymbolTable/Predef.oh>
typedef OOC_CHAR8 OOC_C_Naming__Buffer[2048];
static ADT_Dictionary__Dictionary OOC_C_Naming__keywords;
static Object__String OOC_C_Naming__rwPrefix;
static Object__String OOC_C_Naming__tdPrefix;
static void OOC_C_Naming__Init();

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_C_Naming__Buffer = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, "Buffer", 2048, 2048, RT0__strArray };
RT0__StructDesc _td_OOC_C_Naming__1017 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_C_Naming__4242 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 16, 16, RT0__strArray };
RT0__StructDesc _td_OOC_C_Naming__4921 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_OOC_C_Naming__6572 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:C:Naming", (RT0__Struct[]) { &_td_OOC_C_Naming__Buffer, NULL } };

extern void OOC_OOC_C_Naming_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_C_Naming_init();
}

static void* _c0;
static void* _c1;
static void* _c2;
static void* _c3;
static void* _c4;
static void* _c5;
static void* _c6;
/* --- */
