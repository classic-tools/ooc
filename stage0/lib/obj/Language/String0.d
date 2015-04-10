#include "Language/String0.oh"
#include "RT0.oh"
static Language_String0__String8 Language_String0__NewString8(OOC_INT32 source, OOC_INT32 length);
static Language_String0__String32 Language_String0__NewString32(OOC_INT32 source, OOC_INT32 length);
static void Language_String0__InitBuffer(Language_String0__Buffer b, OOC_INT32 initialCapacity);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Language_String0__String = { (RT0__Struct[]){&_td_Language_String0__StringDesc}, NULL, &_mid, "String", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_String0__StringDesc = { (RT0__Struct[]){&_td_Language_String0__StringDesc}, (void*[]){(void*)Language_String0__StringDesc_CharAt,(void*)Language_String0__StringDesc_Substring}, &_mid, "StringDesc", 4, 0, RT0__strRecord };
RT0__StructDesc _td_Language_String0__Buffer = { (RT0__Struct[]){&_td_Language_String0__BufferDesc}, NULL, &_mid, "Buffer", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_String0__3653 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String0__CharsLatin1 = { (RT0__Struct[]){&_td_Language_String0__3653}, NULL, &_mid, "CharsLatin1", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_String0__3917 = { (RT0__Struct[]){&RT0__longint}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String0__CharsUTF32 = { (RT0__Struct[]){&_td_Language_String0__3917}, NULL, &_mid, "CharsUTF32", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_String0__BufferDesc = { (RT0__Struct[]){&_td_Language_String0__BufferDesc}, (void*[]){(void*)Language_String0__BufferDesc_AppendLatin1Char,(void*)Language_String0__BufferDesc_AppendLatin1Region,(void*)Language_String0__BufferDesc_AppendString,(void*)Language_String0__BufferDesc_AppendUTF32Region,(void*)Language_String0__BufferDesc_CharsLatin1,(void*)Language_String0__BufferDesc_Clear,(void*)Language_String0__BufferDesc_ConvertTo32,(void*)Language_String0__BufferDesc_EnsureCapacity,(void*)Language_String0__BufferDesc_ToString}, &_mid, "BufferDesc", 16, 0, RT0__strRecord };
RT0__StructDesc _td_Language_String0__String8 = { (RT0__Struct[]){&_td_Language_String0__String8Desc}, NULL, &_mid, "String8", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_String0__BufferLatin1 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, "BufferLatin1", 8192, 8192, RT0__strArray };
RT0__StructDesc _td_Language_String0__String8Desc = { (RT0__Struct[]){&_td_Language_String0__StringDesc,&_td_Language_String0__String8Desc}, (void*[]){(void*)Language_String0__String8Desc_CharAt,(void*)Language_String0__String8Desc_Substring,(void*)Language_String0__String8Desc_CharsLatin1}, &_mid, "String8Desc", 8, 1, RT0__strRecord };
RT0__StructDesc _td_Language_String0__String32 = { (RT0__Struct[]){&_td_Language_String0__String32Desc}, NULL, &_mid, "String32", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Language_String0__BufferUTF32 = { (RT0__Struct[]){&RT0__longint}, NULL, &_mid, "BufferUTF32", 8192, 2048, RT0__strArray };
RT0__StructDesc _td_Language_String0__String32Desc = { (RT0__Struct[]){&_td_Language_String0__StringDesc,&_td_Language_String0__String32Desc}, (void*[]){(void*)Language_String0__String32Desc_CharAt,(void*)Language_String0__String32Desc_Substring,(void*)Language_String0__String32Desc_CharsUTF32}, &_mid, "String32Desc", 8, 1, RT0__strRecord };
RT0__StructDesc _td_Language_String0__8102 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String0__8954 = { (RT0__Struct[]){&RT0__longint}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String0__9838 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String0__10216 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String0__10892 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String0__11445 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String0__12508 = { (RT0__Struct[]){&RT0__longint}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_Language_String0__13227 = { (RT0__Struct[]){&RT0__longint}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Language:String0", (RT0__Struct[]) { &_td_Language_String0__String, &_td_Language_String0__StringDesc, &_td_Language_String0__Buffer, &_td_Language_String0__CharsLatin1, &_td_Language_String0__CharsUTF32, &_td_Language_String0__BufferDesc, &_td_Language_String0__String8, &_td_Language_String0__BufferLatin1, &_td_Language_String0__String8Desc, &_td_Language_String0__String32, &_td_Language_String0__BufferUTF32, &_td_Language_String0__String32Desc, NULL } };

extern void OOC_Language_String0_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Language_String0_init();
}

/* --- */
