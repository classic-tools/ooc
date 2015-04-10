#include "Config/Value/Integer.oh"
#include "Strings.oh"
#include "IntStr.oh"
#include "RT0.oh"
#include "Language/String0.oh"
#define Config_Value_Integer__strOutOfRange 1
#define Config_Value_Integer__strWrongFormat 2
#define Config_Value_Integer__strEmpty 3
static Config_Value_Integer__ErrorContext Config_Value_Integer__integerContext;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Config_Value_Integer__Value = { (RT0__Struct[]){&_td_Config_Value_Integer__ValueDesc}, NULL, &_mid, "Value", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Config_Value_Integer__ValueDesc = { (RT0__Struct[]){&_td_Config_Value__ValueDesc,&_td_Config_Value_Integer__ValueDesc}, (void*[]){(void*)Config_Value_Integer__ValueDesc_Clone,(void*)Config_Value_Integer__ValueDesc_DefiningModule,(void*)Config_Value_Integer__ValueDesc_StringToValue,(void*)Config_Value_Integer__ValueDesc_ValueToString}, &_mid, "ValueDesc", 4, 1, RT0__strRecord };
RT0__StructDesc _td_Config_Value_Integer__ErrorContext = { (RT0__Struct[]){&_td_Config_Value_Integer__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Config_Value_Integer__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_Config_Value__ErrorContextDesc,&_td_Config_Value_Integer__ErrorContextDesc}, (void*[]){(void*)Config_Value_Integer__ErrorContextDesc_GetTemplate,(void*)Config_Value__ErrorContextDesc_WriteTemplate}, &_mid, "ErrorContextDesc", 4, 2, RT0__strRecord };
RT0__StructDesc _td_Config_Value_Integer__625 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 256, 128, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Config:Value:Integer", (RT0__Struct[]) { &_td_Config_Value_Integer__Value, &_td_Config_Value_Integer__ValueDesc, &_td_Config_Value_Integer__ErrorContext, &_td_Config_Value_Integer__ErrorContextDesc, NULL } };

extern void OOC_Config_Value_Integer_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Config_Value_Integer_init();
}

/* --- */
