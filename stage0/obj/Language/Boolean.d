#include "Language/Boolean.oh"
#include "RT0.oh"
#include "Language/String0.oh"
Language_Boolean__Type Language_Boolean__type;
static ADT_String__String Language_Boolean__typeName;
Language_Boolean__Value Language_Boolean__true;
Language_Boolean__Value Language_Boolean__false;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Language_Boolean__Type = { (RT0__Struct[]){&_td_Language_Boolean__TypeDesc}, NULL, &_mid, "Type", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_Boolean__TypeDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__TypeDesc,&_td_Language_Boolean__TypeDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)ADT_Object__ObjectDesc_Equals,(void*)ADT_Object__ObjectDesc_HashCode,(void*)ADT_Object__ObjectDesc_Load,(void*)ADT_Object__ObjectDesc_Store,(void*)Language_Boolean__TypeDesc_ToString,(void*)Language_Boolean__TypeDesc_ValueOf,(void*)Language_Boolean__TypeDesc_Value}, &_mid, "TypeDesc", 0, 2, RT0__strRecord };
RT0__StructDesc _td_Language_Boolean__Value = { (RT0__Struct[]){&_td_Language_Boolean__ValueDesc}, NULL, &_mid, "Value", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_Boolean__ValueDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__ValueDesc,&_td_Language_Boolean__ValueDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)Language_Boolean__ValueDesc_Equals,(void*)Language_Boolean__ValueDesc_HashCode,(void*)Language__ValueDesc_Load,(void*)Language__ValueDesc_Store,(void*)Language_Boolean__ValueDesc_ToString,(void*)Language_Boolean__ValueDesc_Compare}, &_mid, "ValueDesc", 8, 2, RT0__strRecord };
RT0__StructDesc _td_Language_Boolean__1160 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Language:Boolean", (RT0__Struct[]) { &_td_Language_Boolean__Type, &_td_Language_Boolean__TypeDesc, &_td_Language_Boolean__Value, &_td_Language_Boolean__ValueDesc, NULL } };

extern void OOC_Language_Boolean_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Language_Boolean_init();
}

/* --- */
