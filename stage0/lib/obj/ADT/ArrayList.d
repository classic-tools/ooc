#include "ADT/ArrayList.oh"
static ADT_ArrayList__Array ADT_ArrayList__CreateArray(OOC_INT32 size, ADT_ArrayList__ArrayList old);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ADT_ArrayList__958 = { (RT0__Struct[]){&_td_Object__Object}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_ArrayList__Array = { (RT0__Struct[]){&_td_ADT_ArrayList__958}, NULL, &_mid, "Array", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_ArrayList__ArrayList = { (RT0__Struct[]){&_td_ADT_ArrayList__ArrayListDesc}, NULL, &_mid, "ArrayList", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_ArrayList__ArrayListDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_ADT_ArrayList__ArrayListDesc}, (void*[]){(void*)ADT_ArrayList__ArrayListDesc_Equals,(void*)ADT_ArrayList__ArrayListDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)ADT_ArrayList__ArrayListDesc_Destroy,(void*)ADT_ArrayList__ArrayListDesc_Load,(void*)ADT_ArrayList__ArrayListDesc_Store,(void*)ADT_ArrayList__ArrayListDesc_Append,(void*)ADT_ArrayList__ArrayListDesc_Clear,(void*)ADT_ArrayList__ArrayListDesc_Contains,(void*)ADT_ArrayList__ArrayListDesc_Copy,(void*)ADT_ArrayList__ArrayListDesc_EnsureCapacity,(void*)ADT_ArrayList__ArrayListDesc_Get,(void*)ADT_ArrayList__ArrayListDesc_IndexOf,(void*)ADT_ArrayList__ArrayListDesc_Insert,(void*)ADT_ArrayList__ArrayListDesc_IsEmpty,(void*)ADT_ArrayList__ArrayListDesc_LastIndexOf,(void*)ADT_ArrayList__ArrayListDesc_Remove,(void*)ADT_ArrayList__ArrayListDesc_RemoveRange,(void*)ADT_ArrayList__ArrayListDesc_Set,(void*)ADT_ArrayList__ArrayListDesc_Size,(void*)ADT_ArrayList__ArrayListDesc_TrimToSize}, &_mid, "ArrayListDesc", 8, 2, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ADT:ArrayList", (RT0__Struct[]) { &_td_ADT_ArrayList__Array, &_td_ADT_ArrayList__ArrayList, &_td_ADT_ArrayList__ArrayListDesc, NULL } };

extern void OOC_ADT_ArrayList_init0() {
  RT0__RegisterModule(&_mid);
  OOC_ADT_ArrayList_init();
}

/* --- */
