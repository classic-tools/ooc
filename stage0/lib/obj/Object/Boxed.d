#include <Object/Boxed.oh>
#include <IntStr.oh>
#include <RealStr.oh>
#include <LRealStr.oh>
#include <Strings.oh>
#include <ADT/StringBuffer.oh>
Object_Boxed__Boolean Object_Boxed__true;
Object_Boxed__Boolean Object_Boxed__false;
static Object__String Object_Boxed__trueString;
static Object__String Object_Boxed__falseString;
Object_Boxed__LongReal Object_Boxed__zeroLongReal;
static Object_Boxed__String Object_Boxed__emptyString;
static void Object_Boxed__SetToString(OOC_UINT32 val, OOC_CHAR8 str[], OOC_LEN str_0d);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Object_Boxed__Object = { (RT0__Struct[]){&_td_Object_Boxed__ObjectDesc}, NULL, &_mid, "Object", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Object_Boxed__ObjectDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_Object_Boxed__ObjectDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object_Boxed__ObjectDesc_ToString,(void*)ADT_Storable__ObjectDesc_Destroy,(void*)ADT_Storable__ObjectDesc_Load,(void*)ADT_Storable__ObjectDesc_Store,(void*)Object_Boxed__ObjectDesc_Cmp}, &_mid, "ObjectDesc", 0, 2, RT0__strRecord };
RT0__StructDesc _td_Object_Boxed__1717 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object_Boxed__Boolean = { (RT0__Struct[]){&_td_Object_Boxed__BooleanDesc}, NULL, &_mid, "Boolean", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Object_Boxed__BooleanDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_Object_Boxed__ObjectDesc,&_td_Object_Boxed__BooleanDesc}, (void*[]){(void*)Object_Boxed__BooleanDesc_Equals,(void*)Object_Boxed__BooleanDesc_HashCode,(void*)Object_Boxed__BooleanDesc_ToString,(void*)ADT_Storable__ObjectDesc_Destroy,(void*)Object_Boxed__BooleanDesc_Load,(void*)Object_Boxed__BooleanDesc_Store,(void*)Object_Boxed__BooleanDesc_Cmp}, &_mid, "BooleanDesc", 1, 3, RT0__strRecord };
RT0__StructDesc _td_Object_Boxed__LongReal = { (RT0__Struct[]){&_td_Object_Boxed__LongRealDesc}, NULL, &_mid, "LongReal", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Object_Boxed__LongRealDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_Object_Boxed__ObjectDesc,&_td_Object_Boxed__LongRealDesc}, (void*[]){(void*)Object_Boxed__LongRealDesc_Equals,(void*)Object_Boxed__LongRealDesc_HashCode,(void*)Object_Boxed__LongRealDesc_ToString,(void*)ADT_Storable__ObjectDesc_Destroy,(void*)Object_Boxed__LongRealDesc_Load,(void*)Object_Boxed__LongRealDesc_Store,(void*)Object_Boxed__LongRealDesc_Cmp,(void*)Object_Boxed__LongRealDesc_Add,(void*)Object_Boxed__LongRealDesc_Div,(void*)Object_Boxed__LongRealDesc_Mul,(void*)Object_Boxed__LongRealDesc_Neg,(void*)Object_Boxed__LongRealDesc_Sign,(void*)Object_Boxed__LongRealDesc_Sub,(void*)Object_Boxed__LongRealDesc_ToLongReal}, &_mid, "LongRealDesc", 8, 3, RT0__strRecord };
RT0__StructDesc _td_Object_Boxed__Set = { (RT0__Struct[]){&_td_Object_Boxed__SetDesc}, NULL, &_mid, "Set", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Object_Boxed__SetDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_Object_Boxed__ObjectDesc,&_td_Object_Boxed__SetDesc}, (void*[]){(void*)Object_Boxed__SetDesc_Equals,(void*)Object_Boxed__SetDesc_HashCode,(void*)Object_Boxed__SetDesc_ToString,(void*)ADT_Storable__ObjectDesc_Destroy,(void*)Object_Boxed__SetDesc_Load,(void*)Object_Boxed__SetDesc_Store,(void*)Object_Boxed__SetDesc_Cmp}, &_mid, "SetDesc", 4, 3, RT0__strRecord };
RT0__StructDesc _td_Object_Boxed__String = { (RT0__Struct[]){&_td_Object_Boxed__StringDesc}, NULL, &_mid, "String", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Object_Boxed__StringDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_Object_Boxed__ObjectDesc,&_td_Object_Boxed__StringDesc}, (void*[]){(void*)Object_Boxed__StringDesc_Equals,(void*)Object_Boxed__StringDesc_HashCode,(void*)Object_Boxed__StringDesc_ToString,(void*)ADT_Storable__ObjectDesc_Destroy,(void*)Object_Boxed__StringDesc_Load,(void*)Object_Boxed__StringDesc_Store,(void*)Object_Boxed__StringDesc_Cmp}, &_mid, "StringDesc", 4, 3, RT0__strRecord };
RT0__StructDesc _td_Object_Boxed__2827 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object_Boxed__4230 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object_Boxed__4524 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object_Boxed__5998 = { (RT0__Struct[]){&RT0__set32}, NULL, &_mid, NULL, 8, 2, RT0__strArray };
RT0__StructDesc _td_Object_Boxed__6328 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 128, 128, RT0__strArray };
RT0__StructDesc _td_Object_Boxed__8099 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_Object_Boxed__8174 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 8, 8, RT0__strArray };
RT0__StructDesc _td_Object_Boxed__8946 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 131, 131, RT0__strArray };
RT0__StructDesc _td_Object_Boxed__10035 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 2, 2, RT0__strArray };
RT0__StructDesc _td_Object_Boxed__10613 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Object:Boxed", (RT0__Struct[]) { &_td_Object_Boxed__Object, &_td_Object_Boxed__ObjectDesc, &_td_Object_Boxed__Boolean, &_td_Object_Boxed__BooleanDesc, &_td_Object_Boxed__LongReal, &_td_Object_Boxed__LongRealDesc, &_td_Object_Boxed__Set, &_td_Object_Boxed__SetDesc, &_td_Object_Boxed__String, &_td_Object_Boxed__StringDesc, NULL } };

extern void OOC_Object_Boxed_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Object_Boxed_init();
}

/* --- */
