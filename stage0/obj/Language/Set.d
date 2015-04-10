#include "Language/Set.oh"
#include "ADT/StringBuffer.oh"
#include "RT0.oh"
#include "Language/String0.oh"
Language_Set__Type Language_Set__type;
static ADT_String__String Language_Set__typeName;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Language_Set__Value = { (RT0__Struct[]){&_td_Language_Set__ValueDesc}, NULL, &_mid, "Value", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_Set__ValueDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__ValueDesc,&_td_Language_Set__ValueDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)Language_Set__ValueDesc_Equals,(void*)Language_Set__ValueDesc_HashCode,(void*)Language_Set__ValueDesc_Load,(void*)Language_Set__ValueDesc_Store,(void*)Language_Set__ValueDesc_ToString,(void*)Language_Set__ValueDesc_Compare,(void*)Language_Set__ValueDesc_ToLInt}, &_mid, "ValueDesc", 8, 2, RT0__strRecord };
RT0__StructDesc _td_Language_Set__Type = { (RT0__Struct[]){&_td_Language_Set__TypeDesc}, NULL, &_mid, "Type", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_Set__TypeDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__TypeDesc,&_td_Language_Set__TypeDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)ADT_Object__ObjectDesc_Equals,(void*)ADT_Object__ObjectDesc_HashCode,(void*)ADT_Object__ObjectDesc_Load,(void*)ADT_Object__ObjectDesc_Store,(void*)Language_Set__TypeDesc_ToString,(void*)Language_Set__TypeDesc_ValueOf}, &_mid, "TypeDesc", 0, 2, RT0__strRecord };
RT0__StructDesc _td_Language_Set__882 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Language:Set", (RT0__Struct[]) { &_td_Language_Set__Value, &_td_Language_Set__ValueDesc, &_td_Language_Set__Type, &_td_Language_Set__TypeDesc, NULL } };

extern void OOC_Language_Set_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Language_Set_init();
}

/* --- */
