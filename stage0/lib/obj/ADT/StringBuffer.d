#include "ADT/StringBuffer.oh"
#include "RT0.oh"
#include "IntStr.oh"
#include "RealStr.oh"
#include "RT0.oh"
#include "Language/String0.oh"
#define ADT_StringBuffer__minimumSize 16
#define ADT_StringBuffer__rtOverhead 16
static OOC_INT32 ADT_StringBuffer__ArraySize(OOC_INT32 len);
static void ADT_StringBuffer__Extend(ADT_StringBuffer__StringBuffer str, OOC_INT32 len, OOC_CHAR8 copyOver);
static ADT_StringBuffer__StringBuffer ADT_StringBuffer__NewLength(OOC_INT32 len);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ADT_StringBuffer__StringBuffer = { (RT0__Struct[]){&_td_ADT_StringBuffer__StringBufferDesc}, NULL, &_mid, "StringBuffer", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_StringBuffer__StringBufferDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_ADT_StringBuffer__StringBufferDesc}, (void*[]){(void*)ADT_StringBuffer__StringBufferDesc_Destroy,(void*)ADT_StringBuffer__StringBufferDesc_Equals,(void*)ADT_StringBuffer__StringBufferDesc_HashCode,(void*)ADT_StringBuffer__StringBufferDesc_Load,(void*)ADT_StringBuffer__StringBufferDesc_Store,(void*)ADT_StringBuffer__StringBufferDesc_ToString,(void*)ADT_StringBuffer__StringBufferDesc_Append,(void*)ADT_StringBuffer__StringBufferDesc_AppendBool,(void*)ADT_StringBuffer__StringBufferDesc_AppendChar,(void*)ADT_StringBuffer__StringBufferDesc_AppendLongInt,(void*)ADT_StringBuffer__StringBufferDesc_AppendObject,(void*)ADT_StringBuffer__StringBufferDesc_AppendReal,(void*)ADT_StringBuffer__StringBufferDesc_AppendRegion,(void*)ADT_StringBuffer__StringBufferDesc_AppendSet,(void*)ADT_StringBuffer__StringBufferDesc_AppendString,(void*)ADT_StringBuffer__StringBufferDesc_Concat,(void*)ADT_StringBuffer__StringBufferDesc_Copy,(void*)ADT_StringBuffer__StringBufferDesc_Delete,(void*)ADT_StringBuffer__StringBufferDesc_Extract,(void*)ADT_StringBuffer__StringBufferDesc_Insert,(void*)ADT_StringBuffer__StringBufferDesc_IsEmpty,(void*)ADT_StringBuffer__StringBufferDesc_Replace,(void*)ADT_StringBuffer__StringBufferDesc_Size}, &_mid, "StringBufferDesc", 8, 1, RT0__strRecord };
RT0__StructDesc _td_ADT_StringBuffer__4189 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_StringBuffer__4563 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_StringBuffer__12111 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_StringBuffer__12690 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_StringBuffer__13452 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_ADT_StringBuffer__13703 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_ADT_StringBuffer__15337 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 256, 256, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ADT:StringBuffer", (RT0__Struct[]) { &_td_ADT_StringBuffer__StringBuffer, &_td_ADT_StringBuffer__StringBufferDesc, NULL } };

extern void OOC_ADT_StringBuffer_init0() {
  RT0__RegisterModule(&_mid);
  OOC_ADT_StringBuffer_init();
}

/* --- */
