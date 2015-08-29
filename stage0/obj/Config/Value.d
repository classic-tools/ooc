#include <Config/Value.oh>
#include <Strings.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Config_Value__String = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, "String", 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Config_Value__StringPtr = { (RT0__Struct[]){&_td_Config_Value__String}, NULL, &_mid, "StringPtr", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Config_Value__Value = { (RT0__Struct[]){&_td_Config_Value__ValueDesc}, NULL, &_mid, "Value", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Config_Value__ValueDesc = { (RT0__Struct[]){&_td_Config_Value__ValueDesc}, (void*[]){(void*)Config_Value__ValueDesc_Clone,(void*)Config_Value__ValueDesc_DefiningModule,(void*)Config_Value__ValueDesc_StringToValue,(void*)Config_Value__ValueDesc_ValueToString}, &_mid, "ValueDesc", 0, 0, RT0__strRecord };
RT0__StructDesc _td_Config_Value__261 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Config_Value__PrototypeName = { (RT0__Struct[]){&_td_Config_Value__261}, NULL, &_mid, "PrototypeName", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Config_Value__Prototype = { (RT0__Struct[]){&_td_Config_Value__PrototypeDesc}, NULL, &_mid, "Prototype", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Config_Value__PrototypeDesc = { (RT0__Struct[]){&_td_Config_Value__PrototypeDesc}, (void*[]){}, &_mid, "PrototypeDesc", 12, 0, RT0__strRecord };
RT0__StructDesc _td_Config_Value__PrototypeList = { (RT0__Struct[]){&_td_Config_Value__PrototypeListDesc}, NULL, &_mid, "PrototypeList", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Config_Value__PrototypeListDesc = { (RT0__Struct[]){&_td_Config_Value__PrototypeListDesc}, (void*[]){(void*)Config_Value__PrototypeListDesc_GetClone,(void*)Config_Value__PrototypeListDesc_RegisterPrototype}, &_mid, "PrototypeListDesc", 4, 0, RT0__strRecord };
RT0__StructDesc _td_Config_Value__ErrorContext = { (RT0__Struct[]){&_td_Config_Value__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Config_Value__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_Config_Value__ErrorContextDesc}, (void*[]){(void*)Msg__ContextDesc_GetTemplate,(void*)Config_Value__ErrorContextDesc_WriteTemplate}, &_mid, "ErrorContextDesc", 4, 1, RT0__strRecord };
RT0__StructDesc _td_Config_Value__1529 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Config_Value__2155 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Config:Value", (RT0__Struct[]) { &_td_Config_Value__String, &_td_Config_Value__StringPtr, &_td_Config_Value__Value, &_td_Config_Value__ValueDesc, &_td_Config_Value__PrototypeName, &_td_Config_Value__Prototype, &_td_Config_Value__PrototypeDesc, &_td_Config_Value__PrototypeList, &_td_Config_Value__PrototypeListDesc, &_td_Config_Value__ErrorContext, &_td_Config_Value__ErrorContextDesc, NULL } };

extern void OOC_Config_Value_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Config_Value_init();
}

/* --- */
