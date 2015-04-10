#include "Language/String.oh"
#include "RT0.oh"
#include "Language/String0.oh"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Language_String__Value = { (RT0__Struct[]){&_td_Language_String__ValueDesc}, NULL, &_mid, "Value", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_String__ValueDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_Language__ValueDesc,&_td_Language_String__ValueDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)Language__ValueDesc_Equals,(void*)Language__ValueDesc_HashCode,(void*)Language__ValueDesc_Load,(void*)Language__ValueDesc_Store,(void*)Language__ValueDesc_ToString,(void*)Language__ValueDesc_Compare,(void*)Language_String__ValueDesc_Length}, &_mid, "ValueDesc", 4, 2, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Language:String", (RT0__Struct[]) { &_td_Language_String__Value, &_td_Language_String__ValueDesc, NULL } };

extern void OOC_Language_String_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Language_String_init();
}

/* --- */
