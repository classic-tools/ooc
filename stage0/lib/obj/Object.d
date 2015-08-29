#include <Object.oh>
#include <RT0.oh>
Object__String Object__emptyString;
static Object__String8 Object__NewString8(OOC_INT32 source, OOC_INT32 length);
static Object__String32 Object__NewString32(OOC_INT32 source, OOC_INT32 length);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Object__Object = { (RT0__Struct[]){&_td_Object__ObjectDesc}, NULL, &_mid, "Object", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Object__ObjectArray = { (RT0__Struct[]){&_td_Object__Object}, NULL, &_mid, "ObjectArray", 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object__ObjectArrayPtr = { (RT0__Struct[]){&_td_Object__ObjectArray}, NULL, &_mid, "ObjectArrayPtr", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Object__ObjectDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString}, &_mid, "ObjectDesc", 0, 0, RT0__strRecord };
RT0__StructDesc _td_Object__String = { (RT0__Struct[]){&_td_Object__StringDesc}, NULL, &_mid, "String", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Object__StringArray = { (RT0__Struct[]){&_td_Object__String}, NULL, &_mid, "StringArray", 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object__StringArrayPtr = { (RT0__Struct[]){&_td_Object__StringArray}, NULL, &_mid, "StringArrayPtr", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Object__StringDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_Object__StringDesc}, (void*[]){(void*)Object__StringDesc_Equals,(void*)Object__StringDesc_HashCode,(void*)Object__StringDesc_ToString,(void*)Object__StringDesc_CharAt,(void*)Object__StringDesc_Compare,(void*)Object__StringDesc_Concat,(void*)Object__StringDesc_IndexOf,(void*)Object__StringDesc_Substring}, &_mid, "StringDesc", 4, 1, RT0__strRecord };
RT0__StructDesc _td_Object__1804 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object__CharsLatin1 = { (RT0__Struct[]){&_td_Object__1804}, NULL, &_mid, "CharsLatin1", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Object__2078 = { (RT0__Struct[]){&RT0__ucs4char}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object__CharsUCS4 = { (RT0__Struct[]){&_td_Object__2078}, NULL, &_mid, "CharsUCS4", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Object__String8 = { (RT0__Struct[]){&_td_Object__String8Desc}, NULL, &_mid, "String8", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Object__String8Desc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_Object__StringDesc,&_td_Object__String8Desc}, (void*[]){(void*)Object__String8Desc_Equals,(void*)Object__String8Desc_HashCode,(void*)Object__StringDesc_ToString,(void*)Object__String8Desc_CharAt,(void*)Object__String8Desc_Compare,(void*)Object__StringDesc_Concat,(void*)Object__String8Desc_IndexOf,(void*)Object__String8Desc_Substring,(void*)Object__String8Desc_CharsLatin1}, &_mid, "String8Desc", 8, 2, RT0__strRecord };
RT0__StructDesc _td_Object__String32 = { (RT0__Struct[]){&_td_Object__String32Desc}, NULL, &_mid, "String32", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Object__String32Desc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_Object__StringDesc,&_td_Object__String32Desc}, (void*[]){(void*)Object__String32Desc_Equals,(void*)Object__String32Desc_HashCode,(void*)Object__StringDesc_ToString,(void*)Object__String32Desc_CharAt,(void*)Object__String32Desc_Compare,(void*)Object__StringDesc_Concat,(void*)Object__String32Desc_IndexOf,(void*)Object__String32Desc_Substring,(void*)Object__String32Desc_CharsUCS4}, &_mid, "String32Desc", 8, 2, RT0__strRecord };
RT0__StructDesc _td_Object__3124 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object__3590 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 280, 280, RT0__strArray };
RT0__StructDesc _td_Object__8811 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object__9184 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object__9850 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object__10397 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object__11449 = { (RT0__Struct[]){&RT0__ucs4char}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object__12162 = { (RT0__Struct[]){&RT0__ucs4char}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Object", (RT0__Struct[]) { &_td_Object__Object, &_td_Object__ObjectArray, &_td_Object__ObjectArrayPtr, &_td_Object__ObjectDesc, &_td_Object__String, &_td_Object__StringArray, &_td_Object__StringArrayPtr, &_td_Object__StringDesc, &_td_Object__CharsLatin1, &_td_Object__CharsUCS4, &_td_Object__String8, &_td_Object__String8Desc, &_td_Object__String32, &_td_Object__String32Desc, NULL } };

extern void OOC_Object_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Object_init();
}

/* --- */
