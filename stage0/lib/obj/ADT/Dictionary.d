#include <ADT/Dictionary.oh>
typedef OOC_UINT32 ADT_Dictionary__HSet;
static ADT_Dictionary__Dummy ADT_Dictionary__dummy;
#define ADT_Dictionary__minSize 4
#define ADT_Dictionary__maxPoly 28
static OOC_INT32 ADT_Dictionary__polys[29];
static OOC_CHAR8 ADT_Dictionary__IsSet(Object__Object key);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ADT_Dictionary__Entry = { (RT0__Struct[]){&_td_ADT_Dictionary__Entry}, (void*[]){}, &_mid, "Entry", 12, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_Dictionary__2652 = { (RT0__Struct[]){&_td_ADT_Dictionary__Entry}, NULL, &_mid, NULL, 12, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_Dictionary__Table = { (RT0__Struct[]){&_td_ADT_Dictionary__2652}, NULL, &_mid, "Table", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Dictionary__Dictionary = { (RT0__Struct[]){&_td_ADT_Dictionary__DictionaryDesc}, NULL, &_mid, "Dictionary", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Dictionary__DictionaryDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_ADT_Dictionary__DictionaryDesc}, (void*[]){(void*)ADT_Dictionary__DictionaryDesc_Equals,(void*)ADT_Dictionary__DictionaryDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)ADT_Dictionary__DictionaryDesc_Load,(void*)ADT_Dictionary__DictionaryDesc_Store,(void*)ADT_Dictionary__DictionaryDesc_Clear,(void*)ADT_Dictionary__DictionaryDesc_Copy,(void*)ADT_Dictionary__DictionaryDesc_Delete,(void*)ADT_Dictionary__DictionaryDesc_Destroy,(void*)ADT_Dictionary__DictionaryDesc_Get,(void*)ADT_Dictionary__DictionaryDesc_HasKey,(void*)ADT_Dictionary__DictionaryDesc_INIT,(void*)ADT_Dictionary__DictionaryDesc_Insert,(void*)ADT_Dictionary__DictionaryDesc_Keys,(void*)ADT_Dictionary__DictionaryDesc_Lookup,(void*)ADT_Dictionary__DictionaryDesc_Resize,(void*)ADT_Dictionary__DictionaryDesc_Set,(void*)ADT_Dictionary__DictionaryDesc_Size,(void*)ADT_Dictionary__DictionaryDesc_Values}, &_mid, "DictionaryDesc", 20, 2, RT0__strRecord };
RT0__StructDesc _td_ADT_Dictionary__Dummy = { (RT0__Struct[]){&_td_ADT_Dictionary__DummyDesc}, NULL, &_mid, "Dummy", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Dictionary__DummyDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Dictionary__DummyDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)ADT_Dictionary__DummyDesc_Destroy}, &_mid, "DummyDesc", 0, 1, RT0__strRecord };
RT0__StructDesc _td_ADT_Dictionary__4178 = { (RT0__Struct[]){&RT0__longint}, NULL, &_mid, NULL, 116, 29, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ADT:Dictionary", (RT0__Struct[]) { &_td_ADT_Dictionary__Entry, &_td_ADT_Dictionary__Table, &_td_ADT_Dictionary__Dictionary, &_td_ADT_Dictionary__DictionaryDesc, &_td_ADT_Dictionary__Dummy, &_td_ADT_Dictionary__DummyDesc, NULL } };

extern void OOC_ADT_Dictionary_init0() {
  RT0__RegisterModule(&_mid);
  OOC_ADT_Dictionary_init();
}

/* --- */
