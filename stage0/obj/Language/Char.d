#include "Language/Char.oh"
#include "Ascii.oh"
#include "RT0.oh"
#include "Language/String0.oh"
#define Language_Char__min 0
#define Language_Char__max 65535
Language_Char__Type Language_Char__type;
static ADT_String__String Language_Char__typeName;
static Language_Char__Value Language_Char__zero;
static void Language_Char__Init(Language_Char__Value v, OOC_INT32 value);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Language_Char__Type = { (RT0__Struct[]){&_td_Language_Char__TypeDesc}, NULL, &_mid, "Type", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_Char__TypeDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__TypeDesc,&_td_Language_Char__TypeDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)ADT_Object__ObjectDesc_Equals,(void*)ADT_Object__ObjectDesc_HashCode,(void*)ADT_Object__ObjectDesc_Load,(void*)ADT_Object__ObjectDesc_Store,(void*)Language_Char__TypeDesc_ToString,(void*)Language_Char__TypeDesc_ValueOf,(void*)Language_Char__TypeDesc_Value}, &_mid, "TypeDesc", 0, 2, RT0__strRecord };
RT0__StructDesc _td_Language_Char__Value = { (RT0__Struct[]){&_td_Language_Char__ValueDesc}, NULL, &_mid, "Value", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_Char__ValueDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__ValueDesc,&_td_Language_Char__ValueDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)Language_Char__ValueDesc_Equals,(void*)Language_Char__ValueDesc_HashCode,(void*)Language_Char__ValueDesc_Load,(void*)Language_Char__ValueDesc_Store,(void*)Language_Char__ValueDesc_ToString,(void*)Language_Char__ValueDesc_Compare}, &_mid, "ValueDesc", 8, 2, RT0__strRecord };
RT0__StructDesc _td_Language_Char__1152 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 16, 16, RT0__strArray };
RT0__StructDesc _td_Language_Char__2556 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_Char__2891 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Language:Char", (RT0__Struct[]) { &_td_Language_Char__Type, &_td_Language_Char__TypeDesc, &_td_Language_Char__Value, &_td_Language_Char__ValueDesc, NULL } };

extern void OOC_Language_Char_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Language_Char_init();
}

/* --- */
