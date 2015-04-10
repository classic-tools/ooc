#include "OS/Files.oh"
#include "LongStrings.oh"
#include "CharClass.oh"
#include "RT0.oh"
#include "Language/String0.oh"
static OS_Files__ErrorContext OS_Files__errorContext;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OS_Files__Path = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, "Path", 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OS_Files__1365 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OS_Files__Name = { (RT0__Struct[]){&_td_OS_Files__1365}, NULL, &_mid, "Name", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OS_Files__1406 = { (RT0__Struct[]){&_td_OS_Files__Name}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OS_Files__NameArray = { (RT0__Struct[]){&_td_OS_Files__1406}, NULL, &_mid, "NameArray", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OS_Files__ErrorContext = { (RT0__Struct[]){&_td_OS_Files__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OS_Files__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_OS_Files__ErrorContextDesc}, (void*[]){(void*)OS_Files__ErrorContextDesc_GetTemplate}, &_mid, "ErrorContextDesc", 4, 1, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OS:Files", (RT0__Struct[]) { &_td_OS_Files__Path, &_td_OS_Files__Name, &_td_OS_Files__NameArray, &_td_OS_Files__ErrorContext, &_td_OS_Files__ErrorContextDesc, NULL } };

extern void OOC_OS_Files_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OS_Files_init();
}

/* --- */
