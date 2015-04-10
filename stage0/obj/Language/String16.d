#include "Language/String16.oh"
#include "LongStrings.oh"
#include "RT0.oh"
#include "Language/String0.oh"
Language_String16__Type Language_String16__type;
static ADT_String__String Language_String16__typeName;
static Language_String16__CharArray Language_String16__emptyArray;
static Language_String16__Value Language_String16__empty;
static void Language_String16__Init(Language_String16__Value v, Language_String16__CharArray value);
static Language_String16__Value Language_String16__New(Language_String16__CharArray value);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Language_String16__Type = { (RT0__Struct[]){&_td_Language_String16__TypeDesc}, NULL, &_mid, "Type", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_String16__TypeDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__TypeDesc,&_td_Language_String16__TypeDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)ADT_Object__ObjectDesc_Equals,(void*)ADT_Object__ObjectDesc_HashCode,(void*)ADT_Object__ObjectDesc_Load,(void*)ADT_Object__ObjectDesc_Store,(void*)Language_String16__TypeDesc_ToString,(void*)Language_String16__TypeDesc_ValueOf,(void*)Language_String16__TypeDesc_Value}, &_mid, "TypeDesc", 0, 2, RT0__strRecord };
RT0__StructDesc _td_Language_String16__Value = { (RT0__Struct[]){&_td_Language_String16__ValueDesc}, NULL, &_mid, "Value", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_String16__291 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String16__CharArray = { (RT0__Struct[]){&_td_Language_String16__291}, NULL, &_mid, "CharArray", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_String16__ValueDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__ValueDesc,&_td_Language_String__ValueDesc,&_td_Language_String16__ValueDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)Language_String16__ValueDesc_Equals,(void*)Language_String16__ValueDesc_HashCode,(void*)Language_String16__ValueDesc_Load,(void*)Language_String16__ValueDesc_Store,(void*)Language_String16__ValueDesc_ToString,(void*)Language_String16__ValueDesc_Compare,(void*)Language_String16__ValueDesc_Length,(void*)Language_String16__ValueDesc_CharAt,(void*)Language_String16__ValueDesc_Concat}, &_mid, "ValueDesc", 8, 3, RT0__strRecord };
RT0__StructDesc _td_Language_String16__830 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String16__1163 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String16__1492 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String16__1729 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strArray };
RT0__StructDesc _td_Language_String16__4294 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Language:String16", (RT0__Struct[]) { &_td_Language_String16__Type, &_td_Language_String16__TypeDesc, &_td_Language_String16__Value, &_td_Language_String16__CharArray, &_td_Language_String16__ValueDesc, NULL } };

extern void OOC_Language_String16_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Language_String16_init();
}

/* --- */
