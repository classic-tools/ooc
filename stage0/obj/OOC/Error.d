#include "OOC/Error.oh"
#include "TextRider.oh"
#include "LongStrings.oh"
#include "CharClass.oh"
OOC_INT8 OOC_Error__style;
OOC_INT32 OOC_Error__minErrorDistance;
#define OOC_Error__posAttr "pos"
#define OOC_Error__columnAttr "column"
#define OOC_Error__lineAttr "line"
static OOC_CHAR8 OOC_Error__IsWarning(Msg__Msg msg);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Error__Context = { (RT0__Struct[]){&_td_OOC_Error__ContextDesc}, NULL, &_mid, "Context", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Error__ContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_OOC_Error__ContextDesc}, (void*[]){(void*)Msg__ContextDesc_GetTemplate,(void*)OOC_Error__ContextDesc_BaseTemplate}, &_mid, "ContextDesc", 4, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_Error__List = { (RT0__Struct[]){&_td_OOC_Error__ListDesc}, NULL, &_mid, "List", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Error__ListDesc = { (RT0__Struct[]){&_td_Msg__MsgListDesc,&_td_OOC_Error__ListDesc}, (void*[]){(void*)OOC_Error__ListDesc_Append,(void*)Msg__MsgListDesc_AppendList,(void*)OOC_Error__ListDesc_NoErrors,(void*)OOC_Error__ListDesc_SetAdjustCharPos,(void*)OOC_Error__ListDesc_Write}, &_mid, "ListDesc", 272, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_Error__1367 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 256, 256, RT0__strArray };
RT0__StructDesc _td_OOC_Error__2930 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Error__3315 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 256, 128, RT0__strArray };
RT0__StructDesc _td_OOC_Error__4809 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 16384, 8192, RT0__strArray };
RT0__StructDesc _td_OOC_Error__6398 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 8192, 8192, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Error", (RT0__Struct[]) { &_td_OOC_Error__Context, &_td_OOC_Error__ContextDesc, &_td_OOC_Error__List, &_td_OOC_Error__ListDesc, NULL } };

extern void OOC_OOC_Error_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Error_init();
}

/* --- */
