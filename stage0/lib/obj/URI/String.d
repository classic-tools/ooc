#include <URI/String.oh>
#include <Strings.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI_String__String = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, "String", 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI_String__StringPtr = { (RT0__Struct[]){&_td_URI_String__String}, NULL, &_mid, "StringPtr", 4, -1, RT0__strPointer };
RT0__StructDesc _td_URI_String__2817 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_URI_String__2868 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:String", (RT0__Struct[]) { &_td_URI_String__String, &_td_URI_String__StringPtr, NULL } };

extern void OOC_URI_String_init0() {
  RT0__RegisterModule(&_mid);
  OOC_URI_String_init();
}

/* --- */
