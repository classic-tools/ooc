#include "Language.oh"
#include "RT0.oh"
#include "Language/String0.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Language__Type = { (RT0__Struct[]){&_td_Language__TypeDesc}, NULL, &_mid, "Type", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language__TypeDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__TypeDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)ADT_Object__ObjectDesc_Equals,(void*)ADT_Object__ObjectDesc_HashCode,(void*)ADT_Object__ObjectDesc_Load,(void*)ADT_Object__ObjectDesc_Store,(void*)Language__TypeDesc_ToString,(void*)Language__TypeDesc_ValueOf}, &_mid, "TypeDesc", 0, 1, RT0__strRecord };
RT0__StructDesc _td_Language__Value = { (RT0__Struct[]){&_td_Language__ValueDesc}, NULL, &_mid, "Value", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language__ValueDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__ValueDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)Language__ValueDesc_Equals,(void*)Language__ValueDesc_HashCode,(void*)Language__ValueDesc_Load,(void*)Language__ValueDesc_Store,(void*)Language__ValueDesc_ToString,(void*)Language__ValueDesc_Compare}, &_mid, "ValueDesc", 4, 1, RT0__strRecord };
RT0__StructDesc _td_Language__1958 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Language", (RT0__Struct[]) { &_td_Language__Type, &_td_Language__TypeDesc, &_td_Language__Value, &_td_Language__ValueDesc, NULL } };

extern void OOC_Language_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Language_init();
}

/* --- */
