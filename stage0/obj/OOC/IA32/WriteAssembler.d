#include "OOC/IA32/WriteAssembler.oh"
#include "Ascii.oh"
#include "IntStr.oh"
#include "Log.oh"
#include "Out.oh"
#include "StdChannels.oh"
#include "Strings.oh"
#include "ADT/String.oh"
#include "OOC/SymbolTable.oh"
#include "OOC/SymbolTable/Predef.oh"
#include "OOC/SSA.oh"
#include "OOC/SSA/Opcode.oh"
#include "OOC/SSA/Opnd.oh"
#include "OOC/SSA/Schedule.oh"
#include "OOC/C/Naming.oh"
#include "OOC/IA32/Writer.oh"
#include "OOC/SSA/IRtoSSA.oh"
#include "OOC/SSA/XML.oh"
#include "OOC/SSA/DeadCodeElimination.oh"
#include "OOC/SSA/Destore.oh"
#include "Language.oh"
#include "Language/Boolean.oh"
#include "Language/Integer.oh"
#include "Language/String8.oh"
#include "Language/String16.oh"
#include "Language/Real.oh"
#include "Language/Set.oh"
#include "RT0.oh"
#include "Language/String0.oh"
typedef OOC_CHAR8 OOC_IA32_WriteAssembler__Buffer[256];
static void OOC_IA32_WriteAssembler__WriteInstrList(OOC_IA32_Writer__Writer w, OOC_SSA_Schedule__Block b);
static void OOC_IA32_WriteAssembler__WriteBlocks(OOC_IA32_Writer__Writer w, OOC_SSA_Schedule__Block domRoot);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_IA32_WriteAssembler__Translator = { (RT0__Struct[]){&_td_OOC_IA32_WriteAssembler__TranslatorDesc}, NULL, &_mid, "Translator", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_IA32_WriteAssembler__TranslatorDesc = { (RT0__Struct[]){&_td_OOC_Make_TranslateToIA32__TranslatorDesc,&_td_OOC_IA32_WriteAssembler__TranslatorDesc}, (void*[]){(void*)OOC_Make_TranslateToIA32__TranslatorDesc_SetProcedureList,(void*)OOC_Make_TranslateToIA32__TranslatorDesc_SetWriter,(void*)OOC_Make_TranslateToIA32__TranslatorDesc_WriteNestedProcedures,(void*)OOC_IA32_WriteAssembler__TranslatorDesc_WriteProcBody,(void*)OOC_Make_TranslateToIA32__TranslatorDesc_WriteProcedure}, &_mid, "TranslatorDesc", 32, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_IA32_WriteAssembler__Buffer = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, "Buffer", 256, 256, RT0__strArray };
RT0__StructDesc _td_OOC_IA32_WriteAssembler__2367 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_IA32_WriteAssembler__6598 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_OOC_IA32_WriteAssembler__6792 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:IA32:WriteAssembler", (RT0__Struct[]) { &_td_OOC_IA32_WriteAssembler__Translator, &_td_OOC_IA32_WriteAssembler__TranslatorDesc, &_td_OOC_IA32_WriteAssembler__Buffer, NULL } };

extern void OOC_OOC_IA32_WriteAssembler_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_IA32_WriteAssembler_init();
}

/* --- */
