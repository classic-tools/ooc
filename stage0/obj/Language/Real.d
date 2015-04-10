#include "Language/Real.oh"
#include "RealStr.oh"
#include "LRealStr.oh"
#include "RT0.oh"
#include "Language/String0.oh"
Language_Real__Type Language_Real__type;
static ADT_String__String Language_Real__typeName;
Language_Real__Value Language_Real__zero;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Language_Real__Value = { (RT0__Struct[]){&_td_Language_Real__ValueDesc}, NULL, &_mid, "Value", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_Real__ValueDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__ValueDesc,&_td_Language_Real__ValueDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)Language_Real__ValueDesc_Equals,(void*)Language_Real__ValueDesc_HashCode,(void*)Language_Real__ValueDesc_Load,(void*)Language_Real__ValueDesc_Store,(void*)Language_Real__ValueDesc_ToString,(void*)Language_Real__ValueDesc_Compare,(void*)Language_Real__ValueDesc_Difference,(void*)Language_Real__ValueDesc_Negate,(void*)Language_Real__ValueDesc_Product,(void*)Language_Real__ValueDesc_Quotient,(void*)Language_Real__ValueDesc_Sign,(void*)Language_Real__ValueDesc_Sum,(void*)Language_Real__ValueDesc_ToReal}, &_mid, "ValueDesc", 16, 2, RT0__strRecord };
RT0__StructDesc _td_Language_Real__Type = { (RT0__Struct[]){&_td_Language_Real__TypeDesc}, NULL, &_mid, "Type", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_Real__TypeDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__TypeDesc,&_td_Language_Real__TypeDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)ADT_Object__ObjectDesc_Equals,(void*)ADT_Object__ObjectDesc_HashCode,(void*)ADT_Object__ObjectDesc_Load,(void*)ADT_Object__ObjectDesc_Store,(void*)Language_Real__TypeDesc_ToString,(void*)Language_Real__TypeDesc_ValueOf,(void*)Language_Real__TypeDesc_Value,(void*)Language_Real__TypeDesc_ValueOfLiteral}, &_mid, "TypeDesc", 0, 2, RT0__strRecord };
RT0__StructDesc _td_Language_Real__1101 = { (RT0__Struct[]){&RT0__set32}, NULL, &_mid, NULL, 8, 2, RT0__strArray };
RT0__StructDesc _td_Language_Real__1413 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 128, 128, RT0__strArray };
RT0__StructDesc _td_Language_Real__2587 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_Real__2852 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Language:Real", (RT0__Struct[]) { &_td_Language_Real__Value, &_td_Language_Real__ValueDesc, &_td_Language_Real__Type, &_td_Language_Real__TypeDesc, NULL } };

extern void OOC_Language_Real_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Language_Real_init();
}

/* --- */
