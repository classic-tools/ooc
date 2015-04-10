#include "OOC/SymbolTable/Predef.oh"
#include "Strings.oh"
#include "Language/Boolean.oh"
#include "Language/String8.oh"
#include "Language/String16.oh"
#include "Language/Real.oh"
#include "OOC/Config/Autoconf.oh"
#include "RT0.oh"
#include "Language/String0.oh"
static Language__Value OOC_SymbolTable_Predef__minConst[16];
static Language__Value OOC_SymbolTable_Predef__maxConst[16];
OOC_SymbolTable__Name OOC_SymbolTable_Predef__nameStringModule;
OOC_SymbolTable__Name OOC_SymbolTable_Predef__nameStringType;
static OOC_SymbolTable__Name OOC_SymbolTable_Predef__GetName(const OOC_CHAR8 name__ref[], OOC_LEN name_0d);
static OOC_SymbolTable__PredefType OOC_SymbolTable_Predef__PredefType(OOC_SymbolTable_Builder__Builder stb, OOC_SymbolTable__Module module, OOC_INT16 id, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_INT32 size, OOC_INT16 align, Language__Value minValue, Language__Value maxValue);
static void OOC_SymbolTable_Predef__TypeAlias(OOC_SymbolTable_Builder__Builder stb, OOC_SymbolTable__Module module, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_SymbolTable__PredefType baseType);
static void OOC_SymbolTable_Predef__PredefProc(OOC_SymbolTable_Builder__Builder stb, OOC_SymbolTable__Module module, OOC_INT16 id, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_INT16 minArgs, OOC_INT16 maxArgs);
static void OOC_SymbolTable_Predef__Init();

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_SymbolTable_Predef__3535 = { (RT0__Struct[]){&_td_Language__Value}, NULL, &_mid, NULL, 64, 16, RT0__strArray };
RT0__StructDesc _td_OOC_SymbolTable_Predef__5444 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Predef__5821 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Predef__6517 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Predef__6849 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Predef__7585 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SymbolTable:Predef", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_SymbolTable_Predef_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_SymbolTable_Predef_init();
}

/* --- */
