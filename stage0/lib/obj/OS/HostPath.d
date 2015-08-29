#include <OS/HostPath.oh>
typedef struct OS_HostPath__ErrorContextDesc *OS_HostPath__ErrorContext;
typedef struct OS_HostPath__ErrorContextDesc {
  Msg__StringPtr id;
} OS_HostPath__ErrorContextDesc;
static OS_HostPath__ErrorContext OS_HostPath__errorContext;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OS_HostPath__Path = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, "Path", 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OS_HostPath__ErrorContext = { (RT0__Struct[]){&_td_OS_HostPath__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OS_HostPath__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_OS_HostPath__ErrorContextDesc}, (void*[]){(void*)Msg__ContextDesc_GetTemplate}, &_mid, "ErrorContextDesc", 4, 1, RT0__strRecord };
RT0__StructDesc _td_OS_HostPath__3734 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OS_HostPath__3853 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OS:HostPath", (RT0__Struct[]) { &_td_OS_HostPath__Path, &_td_OS_HostPath__ErrorContext, &_td_OS_HostPath__ErrorContextDesc, NULL } };

extern void OOC_OS_HostPath_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OS_HostPath_init();
}

/* --- */
