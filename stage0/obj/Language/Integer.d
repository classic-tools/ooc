#include "Language/Integer.oh"
#include "RT0.oh"
#include "Language/String0.oh"
Language_Integer__Type Language_Integer__type;
static ADT_String__String Language_Integer__typeName;
static Language_Integer__Value Language_Integer__minus1;
Language_Integer__Value Language_Integer__zero;
static Language_Integer__Value Language_Integer__one;
static Language_Integer__Value Language_Integer__NewInt(Integers__Integer val);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Language_Integer__Value = { (RT0__Struct[]){&_td_Language_Integer__ValueDesc}, NULL, &_mid, "Value", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_Integer__ValueDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__ValueDesc,&_td_Language_Integer__ValueDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)Language_Integer__ValueDesc_Equals,(void*)Language_Integer__ValueDesc_HashCode,(void*)Language_Integer__ValueDesc_Load,(void*)Language_Integer__ValueDesc_Store,(void*)Language_Integer__ValueDesc_ToString,(void*)Language_Integer__ValueDesc_Compare,(void*)Language_Integer__ValueDesc_Ash,(void*)Language_Integer__ValueDesc_Difference,(void*)Language_Integer__ValueDesc_Negate,(void*)Language_Integer__ValueDesc_Product,(void*)Language_Integer__ValueDesc_Quotient,(void*)Language_Integer__ValueDesc_Remainder,(void*)Language_Integer__ValueDesc_Sign,(void*)Language_Integer__ValueDesc_Sum,(void*)Language_Integer__ValueDesc_ToInt}, &_mid, "ValueDesc", 8, 2, RT0__strRecord };
RT0__StructDesc _td_Language_Integer__Type = { (RT0__Struct[]){&_td_Language_Integer__TypeDesc}, NULL, &_mid, "Type", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_Integer__TypeDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__TypeDesc,&_td_Language_Integer__TypeDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)ADT_Object__ObjectDesc_Equals,(void*)ADT_Object__ObjectDesc_HashCode,(void*)ADT_Object__ObjectDesc_Load,(void*)ADT_Object__ObjectDesc_Store,(void*)Language_Integer__TypeDesc_ToString,(void*)Language_Integer__TypeDesc_ValueOf,(void*)Language_Integer__TypeDesc_Value}, &_mid, "TypeDesc", 0, 2, RT0__strRecord };
RT0__StructDesc _td_Language_Integer__1078 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_Integer__2255 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 128, 128, RT0__strArray };
RT0__StructDesc _td_Language_Integer__3733 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Language:Integer", (RT0__Struct[]) { &_td_Language_Integer__Value, &_td_Language_Integer__ValueDesc, &_td_Language_Integer__Type, &_td_Language_Integer__TypeDesc, NULL } };

extern void OOC_Language_Integer_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Language_Integer_init();
}

/* --- */
