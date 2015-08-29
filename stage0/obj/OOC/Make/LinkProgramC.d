#include <OOC/Make/LinkProgramC.oh>
#include <Out.oh>
#include <URI.oh>
#include <URI/Scheme/File.oh>
#include <Object.oh>
#include <ADT/Dictionary.oh>
#include <ADT/ArrayList.oh>
#include <ADT/StringBuffer.oh>
#include <Config.oh>
#include <OS/ProcessManagement.oh>
#include <OOC/Config.oh>
#include <OOC/Config/CCompiler.oh>
#include <OOC/SymbolTable.oh>
static Object__String OOC_Make_LinkProgramC__empty;
static Object__String OOC_Make_LinkProgramC__space;
static Object__StringArrayPtr OOC_Make_LinkProgramC__GetExternalLibs(const OOC_Repository__Module moduleList__ref[], OOC_LEN moduleList_0d, Object__String thisLibrary);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Make_LinkProgramC__1234 = { (RT0__Struct[]){&_td_OOC_Repository__Module}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Make_LinkProgramC__5901 = { (RT0__Struct[]){&_td_OOC_Repository__Module}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Make:LinkProgramC", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_Make_LinkProgramC_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Make_LinkProgramC_init();
}

static void* _c0;
static void* _c1;
static void* _c2;
static void* _c3;
static void* _c4;
static void* _c5;
static void* _c6;
static void* _c7;
/* --- */
