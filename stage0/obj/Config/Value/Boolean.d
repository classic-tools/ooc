#include <Config/Value/Boolean.oh>
#include <Strings.oh>
#define Config_Value_Boolean__invalidValue 1
static Config_Value_Boolean__ErrorContext Config_Value_Boolean__booleanContext;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Config_Value_Boolean__Value = { (RT0__Struct[]){&_td_Config_Value_Boolean__ValueDesc}, NULL, &_mid, "Value", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Config_Value_Boolean__ValueDesc = { (RT0__Struct[]){&_td_Config_Value__ValueDesc,&_td_Config_Value_Boolean__ValueDesc}, (void*[]){(void*)Config_Value_Boolean__ValueDesc_Clone,(void*)Config_Value_Boolean__ValueDesc_DefiningModule,(void*)Config_Value_Boolean__ValueDesc_StringToValue,(void*)Config_Value_Boolean__ValueDesc_ValueToString}, &_mid, "ValueDesc", 1, 1, RT0__strRecord };
RT0__StructDesc _td_Config_Value_Boolean__ErrorContext = { (RT0__Struct[]){&_td_Config_Value_Boolean__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Config_Value_Boolean__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_Config_Value__ErrorContextDesc,&_td_Config_Value_Boolean__ErrorContextDesc}, (void*[]){(void*)Config_Value_Boolean__ErrorContextDesc_GetTemplate,(void*)Config_Value__ErrorContextDesc_WriteTemplate}, &_mid, "ErrorContextDesc", 4, 2, RT0__strRecord };
RT0__StructDesc _td_Config_Value_Boolean__525 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 256, 128, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Config:Value:Boolean", (RT0__Struct[]) { &_td_Config_Value_Boolean__Value, &_td_Config_Value_Boolean__ValueDesc, &_td_Config_Value_Boolean__ErrorContext, &_td_Config_Value_Boolean__ErrorContextDesc, NULL } };

extern void OOC_Config_Value_Boolean_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Config_Value_Boolean_init();
}

/* --- */
