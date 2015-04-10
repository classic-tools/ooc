#include "Language/String8.oh"
#include "ADT/StringBuffer.oh"
#include "RT0.oh"
#include "Language/String0.oh"
Language_String8__Type Language_String8__type;
static ADT_String__String Language_String8__typeName;
static Language_String8__Value Language_String8__empty;
static void Language_String8__Init(Language_String8__Value v, ADT_String__String value);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Language_String8__Type = { (RT0__Struct[]){&_td_Language_String8__TypeDesc}, NULL, &_mid, "Type", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_String8__TypeDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__TypeDesc,&_td_Language_String8__TypeDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)ADT_Object__ObjectDesc_Equals,(void*)ADT_Object__ObjectDesc_HashCode,(void*)ADT_Object__ObjectDesc_Load,(void*)ADT_Object__ObjectDesc_Store,(void*)Language_String8__TypeDesc_ToString,(void*)Language_String8__TypeDesc_ValueOf,(void*)Language_String8__TypeDesc_Value}, &_mid, "TypeDesc", 0, 2, RT0__strRecord };
RT0__StructDesc _td_Language_String8__Value = { (RT0__Struct[]){&_td_Language_String8__ValueDesc}, NULL, &_mid, "Value", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_String8__ValueDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__ValueDesc,&_td_Language_String__ValueDesc,&_td_Language_String8__ValueDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)Language_String8__ValueDesc_Equals,(void*)Language_String8__ValueDesc_HashCode,(void*)Language_String8__ValueDesc_Load,(void*)Language_String8__ValueDesc_Store,(void*)Language_String8__ValueDesc_ToString,(void*)Language_String8__ValueDesc_Compare,(void*)Language_String8__ValueDesc_Length,(void*)Language_String8__ValueDesc_CharAt,(void*)Language_String8__ValueDesc_Concat}, &_mid, "ValueDesc", 8, 3, RT0__strRecord };
RT0__StructDesc _td_Language_String8__765 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String8__931 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String8__1160 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strArray };
RT0__StructDesc _td_Language_String8__2070 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 2, 2, RT0__strArray };
RT0__StructDesc _td_Language_String8__2825 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Language:String8", (RT0__Struct[]) { &_td_Language_String8__Type, &_td_Language_String8__TypeDesc, &_td_Language_String8__Value, &_td_Language_String8__ValueDesc, NULL } };

extern void OOC_Language_String8_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Language_String8_init();
}

/* --- */
