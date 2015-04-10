#include "OOC/SSA/Algebraic.oh"
#include "Language.oh"
#include "Language/Integer.oh"
#include "OOC/SSA/Opcode.oh"
#include "OOC/SSA/Opnd.oh"
#include "RT0.oh"
#include "Language/String0.oh"
typedef struct OOC_SSA_Algebraic__WorklistDesc *OOC_SSA_Algebraic__Worklist;
typedef struct OOC_SSA_Algebraic__WorklistDesc {
  OOC_SSA_Algebraic__Worklist next;
  OOC_SSA__Instr instr;
} OOC_SSA_Algebraic__WorklistDesc;
#define OOC_SSA_Algebraic__maxPower2 63
static Language_Integer__Value OOC_SSA_Algebraic__intZero;
static Language_Integer__Value OOC_SSA_Algebraic__intOne;
static Language_Integer__Value OOC_SSA_Algebraic__intTwo;
static Language_Integer__Value OOC_SSA_Algebraic__power2[64];
static OOC_INT32 OOC_SSA_Algebraic__IsPowerOf2(Language_Integer__Value value);
static void OOC_SSA_Algebraic__Init();

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_SSA_Algebraic__Worklist = { (RT0__Struct[]){&_td_OOC_SSA_Algebraic__WorklistDesc}, NULL, &_mid, "Worklist", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Algebraic__WorklistDesc = { (RT0__Struct[]){&_td_OOC_SSA_Algebraic__WorklistDesc}, (void*[]){}, &_mid, "WorklistDesc", 8, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA_Algebraic__1226 = { (RT0__Struct[]){&_td_Language_Integer__Value}, NULL, &_mid, NULL, 256, 64, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SSA:Algebraic", (RT0__Struct[]) { &_td_OOC_SSA_Algebraic__Worklist, &_td_OOC_SSA_Algebraic__WorklistDesc, NULL } };

extern void OOC_OOC_SSA_Algebraic_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_SSA_Algebraic_init();
}

/* --- */
