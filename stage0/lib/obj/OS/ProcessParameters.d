#include "OS/ProcessParameters.oh"
#include "LongStrings.oh"
#include "CharClass.oh"
#include "C.oh"
#include "RT0.oh"
#include "Language/String0.oh"
typedef struct OS_ProcessParameters__ErrorContextDesc *OS_ProcessParameters__ErrorContext;
typedef struct OS_ProcessParameters__ErrorContextDesc {
  Msg__StringPtr id;
} OS_ProcessParameters__ErrorContextDesc;
static OS_ProcessParameters__ErrorContext OS_ProcessParameters__errorContext;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OS_ProcessParameters__Path = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, "Path", 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OS_ProcessParameters__ErrorContext = { (RT0__Struct[]){&_td_OS_ProcessParameters__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OS_ProcessParameters__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_OS_ProcessParameters__ErrorContextDesc}, (void*[]){(void*)Msg__ContextDesc_GetTemplate}, &_mid, "ErrorContextDesc", 4, 1, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OS:ProcessParameters", (RT0__Struct[]) { &_td_OS_ProcessParameters__Path, &_td_OS_ProcessParameters__ErrorContext, &_td_OS_ProcessParameters__ErrorContextDesc, NULL } };

extern void OOC_OS_ProcessParameters_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OS_ProcessParameters_init();
}

/* --- */
