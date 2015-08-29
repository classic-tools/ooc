#include <OOC/Config/Pragmas.oh>
#include <Config/Parser.oh>
static void OOC_Config_Pragmas__Init(OOC_Config_Pragmas__Section s, const Config_Parser__String id__ref, OOC_LEN id_0d, Config__PrototypeMap prototypeMap);
static void OOC_Config_Pragmas__InitHistory(OOC_Config_Pragmas__History h, OOC_Config_Pragmas__Section startVariables);
static Config__Variable OOC_Config_Pragmas__GetValue(OOC_Config_Pragmas__History h, OOC_Config_Pragmas__Variable var, OOC_INT32 charPos);
static void OOC_Config_Pragmas__LastCharPos(OOC_Config_Pragmas__History h, OOC_INT32 charPos);
static void OOC_Config_Pragmas__SetValue(OOC_Config_Pragmas__Variable var, OOC_INT32 charPos, Config__Variable value);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Config_Pragmas__Section = { (RT0__Struct[]){&_td_OOC_Config_Pragmas__SectionDesc}, NULL, &_mid, "Section", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Config_Pragmas__SectionDesc = { (RT0__Struct[]){&_td_Config_Section__SectionDesc,&_td_Config_Section_Options__SectionDesc,&_td_OOC_Config_Pragmas__SectionDesc}, (void*[]){(void*)Config_Section_Options__SectionDesc_DumpContent,(void*)Config_Section_Options__SectionDesc_ProcessElements,(void*)OOC_Config_Pragmas__SectionDesc_Clone,(void*)OOC_Config_Pragmas__SectionDesc_Copy,(void*)Config_Section_Options__SectionDesc_Get,(void*)Config_Section_Options__SectionDesc_GetValue,(void*)Config_Section_Options__SectionDesc_Set}, &_mid, "SectionDesc", 12, 2, RT0__strRecord };
RT0__StructDesc _td_OOC_Config_Pragmas__Variable = { (RT0__Struct[]){&_td_OOC_Config_Pragmas__VariableDesc}, NULL, &_mid, "Variable", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Config_Pragmas__1172 = { (RT0__Struct[]){&_td_Config__Variable}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Config_Pragmas__ValueArray = { (RT0__Struct[]){&_td_OOC_Config_Pragmas__1172}, NULL, &_mid, "ValueArray", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Config_Pragmas__1226 = { (RT0__Struct[]){&RT0__longint}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Config_Pragmas__CharPosArray = { (RT0__Struct[]){&_td_OOC_Config_Pragmas__1226}, NULL, &_mid, "CharPosArray", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Config_Pragmas__VariableDesc = { (RT0__Struct[]){&_td_OOC_Config_Pragmas__VariableDesc}, (void*[]){}, &_mid, "VariableDesc", 20, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_Config_Pragmas__History = { (RT0__Struct[]){&_td_OOC_Config_Pragmas__HistoryDesc}, NULL, &_mid, "History", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Config_Pragmas__HistoryDesc = { (RT0__Struct[]){&_td_OOC_Config_Pragmas__HistoryDesc}, (void*[]){(void*)OOC_Config_Pragmas__HistoryDesc_GetValue,(void*)OOC_Config_Pragmas__HistoryDesc_Pop,(void*)OOC_Config_Pragmas__HistoryDesc_Push,(void*)OOC_Config_Pragmas__HistoryDesc_SetValue}, &_mid, "HistoryDesc", 20, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Config:Pragmas", (RT0__Struct[]) { &_td_OOC_Config_Pragmas__Section, &_td_OOC_Config_Pragmas__SectionDesc, &_td_OOC_Config_Pragmas__Variable, &_td_OOC_Config_Pragmas__ValueArray, &_td_OOC_Config_Pragmas__CharPosArray, &_td_OOC_Config_Pragmas__VariableDesc, &_td_OOC_Config_Pragmas__History, &_td_OOC_Config_Pragmas__HistoryDesc, NULL } };

extern void OOC_OOC_Config_Pragmas_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Config_Pragmas_init();
}

static void* _c0;
static void* _c1;
static void* _c2;
static void* _c3;
/* --- */
