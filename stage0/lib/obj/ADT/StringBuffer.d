#include <ADT/StringBuffer.oh>
#include <IntStr.oh>
#include <RealStr.oh>
static void ADT_StringBuffer__Init(ADT_StringBuffer__StringBuffer b, OOC_INT32 initialCapacity);
static OOC_INT32 ADT_StringBuffer__Length(const OOC_CHAR8 data[], OOC_LEN data_0d);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ADT_StringBuffer__1012 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_StringBuffer__CharsLatin1 = { (RT0__Struct[]){&_td_ADT_StringBuffer__1012}, NULL, &_mid, "CharsLatin1", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_StringBuffer__1065 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_StringBuffer__CharsUTF16 = { (RT0__Struct[]){&_td_ADT_StringBuffer__1065}, NULL, &_mid, "CharsUTF16", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_StringBuffer__StringBuffer = { (RT0__Struct[]){&_td_ADT_StringBuffer__StringBufferDesc}, NULL, &_mid, "StringBuffer", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_StringBuffer__StringBufferDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_StringBuffer__StringBufferDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)ADT_StringBuffer__StringBufferDesc_ToString,(void*)ADT_StringBuffer__StringBufferDesc_Append,(void*)ADT_StringBuffer__StringBufferDesc_AppendBool,(void*)ADT_StringBuffer__StringBufferDesc_AppendChar,(void*)ADT_StringBuffer__StringBufferDesc_AppendInt,(void*)ADT_StringBuffer__StringBufferDesc_AppendLatin1,(void*)ADT_StringBuffer__StringBufferDesc_AppendLatin1Char,(void*)ADT_StringBuffer__StringBufferDesc_AppendLatin1Region,(void*)ADT_StringBuffer__StringBufferDesc_AppendLn,(void*)ADT_StringBuffer__StringBufferDesc_AppendReal,(void*)ADT_StringBuffer__StringBufferDesc_AppendSet,(void*)ADT_StringBuffer__StringBufferDesc_AppendUTF16Region,(void*)ADT_StringBuffer__StringBufferDesc_CharAt,(void*)ADT_StringBuffer__StringBufferDesc_CharsLatin1,(void*)ADT_StringBuffer__StringBufferDesc_Clear,(void*)ADT_StringBuffer__StringBufferDesc_ConvertTo16,(void*)ADT_StringBuffer__StringBufferDesc_Delete,(void*)ADT_StringBuffer__StringBufferDesc_EnsureCapacity,(void*)ADT_StringBuffer__StringBufferDesc_Insert}, &_mid, "StringBufferDesc", 16, 1, RT0__strRecord };
RT0__StructDesc _td_ADT_StringBuffer__5060 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_StringBuffer__5689 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_StringBuffer__5893 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_StringBuffer__6468 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_StringBuffer__8248 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_StringBuffer__8446 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_StringBuffer__8832 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_ADT_StringBuffer__9082 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ADT:StringBuffer", (RT0__Struct[]) { &_td_ADT_StringBuffer__CharsLatin1, &_td_ADT_StringBuffer__CharsUTF16, &_td_ADT_StringBuffer__StringBuffer, &_td_ADT_StringBuffer__StringBufferDesc, NULL } };

extern void OOC_ADT_StringBuffer_init0() {
  RT0__RegisterModule(&_mid);
  OOC_ADT_StringBuffer_init();
}

static void* _c0;
static void* _c1;
/* --- */
