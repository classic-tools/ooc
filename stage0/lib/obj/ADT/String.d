#include "ADT/String.oh"
#include "RT0.oh"
#include "Language/String0.oh"
static OOC_INT8 ADT_String__CompareRegion(OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 pos, OOC_INT32 endPos, OOC_CHAR8 dest[], OOC_LEN dest_0d, OOC_INT32 destPos);
static void ADT_String__CopyRegion(OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 pos, OOC_INT32 endPos, OOC_CHAR8 dest[], OOC_LEN dest_0d, OOC_INT32 destPos);
static OOC_INT32 ADT_String__ArraySize(OOC_INT32 size);
static void ADT_String__InitString(ADT_String__String str, OOC_INT32 length);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ADT_String__CharArray = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, "CharArray", 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_String__CharArrayPtr = { (RT0__Struct[]){&_td_ADT_String__CharArray}, NULL, &_mid, "CharArrayPtr", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_String__String = { (RT0__Struct[]){&_td_ADT_String__StringDesc}, NULL, &_mid, "String", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_String__StringDesc = { (RT0__Struct[]){&_td_ADT_Object__ObjectDesc,&_td_ADT_Object__StringDesc,&_td_ADT_String__StringDesc}, (void*[]){(void*)ADT_Object__ObjectDesc_Destroy,(void*)ADT_String__StringDesc_Equals,(void*)ADT_String__StringDesc_HashCode,(void*)ADT_String__StringDesc_Load,(void*)ADT_String__StringDesc_Store,(void*)ADT_String__StringDesc_ToString,(void*)ADT_String__StringDesc_Compare,(void*)ADT_String__StringDesc_CompareRegion,(void*)ADT_String__StringDesc_CompareRegionArray,(void*)ADT_String__StringDesc_Concat,(void*)ADT_String__StringDesc_EndsWith,(void*)ADT_String__StringDesc_Extract,(void*)ADT_String__StringDesc_FindFirst,(void*)ADT_String__StringDesc_FindLast,(void*)ADT_String__StringDesc_GetChar,(void*)ADT_String__StringDesc_GetChars,(void*)ADT_String__StringDesc_GetCharsRegion,(void*)ADT_String__StringDesc_IndexOf,(void*)ADT_String__StringDesc_LastIndexOf,(void*)ADT_String__StringDesc_Map,(void*)ADT_String__StringDesc_Size,(void*)ADT_String__StringDesc_StartsWith}, &_mid, "StringDesc", 8, 2, RT0__strRecord };
RT0__StructDesc _td_ADT_String__StringArray = { (RT0__Struct[]){&_td_ADT_String__String}, NULL, &_mid, "StringArray", 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_String__StringArrayPtr = { (RT0__Struct[]){&_td_ADT_String__StringArray}, NULL, &_mid, "StringArrayPtr", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_String__1576 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_String__1625 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_String__2432 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_String__2481 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_String__3783 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_String__4197 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_String__4852 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_String__5112 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_String__6305 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_String__6753 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_String__9687 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ADT:String", (RT0__Struct[]) { &_td_ADT_String__CharArray, &_td_ADT_String__CharArrayPtr, &_td_ADT_String__String, &_td_ADT_String__StringDesc, &_td_ADT_String__StringArray, &_td_ADT_String__StringArrayPtr, NULL } };

extern void OOC_ADT_String_init0() {
  RT0__RegisterModule(&_mid);
  OOC_ADT_String_init();
}

/* --- */
