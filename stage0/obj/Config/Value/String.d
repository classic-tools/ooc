#include "Config/Value/String.oh"
#include "RT0.oh"
#include "Language/String0.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Config_Value_String__Value = { (RT0__Struct[]){&_td_Config_Value_String__ValueDesc}, NULL, &_mid, "Value", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Config_Value_String__ValueDesc = { (RT0__Struct[]){&_td_Config_Value__ValueDesc,&_td_Config_Value_String__ValueDesc}, (void*[]){(void*)Config_Value_String__ValueDesc_Clone,(void*)Config_Value_String__ValueDesc_DefiningModule,(void*)Config_Value_String__ValueDesc_StringToValue,(void*)Config_Value_String__ValueDesc_ValueToString}, &_mid, "ValueDesc", 4, 1, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Config:Value:String", (RT0__Struct[]) { &_td_Config_Value_String__Value, &_td_Config_Value_String__ValueDesc, NULL } };

extern void OOC_Config_Value_String_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Config_Value_String_init();
}

/* --- */
