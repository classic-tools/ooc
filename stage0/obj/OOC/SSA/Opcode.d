#include <OOC/SSA/Opcode.oh>
#include <Log.oh>
#include <Strings.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_SSA_Opcode__30752 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_Opcode__30838 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 16, 16, RT0__strArray };
RT0__StructDesc _td_OOC_SSA_Opcode__31424 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_Opcode__31527 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SSA:Opcode", (RT0__Struct[]) { NULL } };

extern void OOC_OOC_SSA_Opcode_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_SSA_Opcode_init();
}

/* --- */
