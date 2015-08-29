#include <ADT/Object/Storage.oh>
#include <Strings.oh>
#define ADT_Object_Storage__pointerGap 4
static void ADT_Object_Storage__InitReader(ADT_Object_Storage__Reader r, IO__ByteChannel ch);
static void ADT_Object_Storage__InitWriter(ADT_Object_Storage__Writer w, IO__ByteChannel ch);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ADT_Object_Storage__2070 = { (RT0__Struct[]){&_td_ADT_Object_Storage__2070}, (void*[]){}, &_mid, NULL, 12, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_Object_Storage__2061 = { (RT0__Struct[]){&_td_ADT_Object_Storage__2070}, NULL, &_mid, NULL, 12, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_Object_Storage__TypeRefMap = { (RT0__Struct[]){&_td_ADT_Object_Storage__2061}, NULL, &_mid, "TypeRefMap", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Object_Storage__2171 = { (RT0__Struct[]){&_td_ADT_Storable__Object}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_Object_Storage__ObjectArray = { (RT0__Struct[]){&_td_ADT_Object_Storage__2171}, NULL, &_mid, "ObjectArray", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Object_Storage__2231 = { (RT0__Struct[]){&_td_ADT_Object_Storage__2231}, (void*[]){}, &_mid, NULL, 12, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_Object_Storage__2222 = { (RT0__Struct[]){&_td_ADT_Object_Storage__2231}, NULL, &_mid, NULL, 12, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_Object_Storage__TypeArray = { (RT0__Struct[]){&_td_ADT_Object_Storage__2222}, NULL, &_mid, "TypeArray", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Object_Storage__CharBuffer = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, "CharBuffer", 256, 256, RT0__strArray };
RT0__StructDesc _td_ADT_Object_Storage__Reader = { (RT0__Struct[]){&_td_ADT_Object_Storage__ReaderDesc}, NULL, &_mid, "Reader", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Object_Storage__ReaderDesc = { (RT0__Struct[]){&_td_IO_BinaryRider__ReaderDesc,&_td_ADT_Storable__ReaderDesc,&_td_ADT_Object_Storage__ReaderDesc}, (void*[]){(void*)IO_BinaryRider__ReaderDesc_ReadBool,(void*)IO_BinaryRider__ReaderDesc_ReadBytes,(void*)IO_BinaryRider__ReaderDesc_ReadBytesOrdered,(void*)IO_BinaryRider__ReaderDesc_ReadChar,(void*)IO_BinaryRider__ReaderDesc_ReadInt,(void*)IO_BinaryRider__ReaderDesc_ReadLChar,(void*)IO_BinaryRider__ReaderDesc_ReadLInt,(void*)IO_BinaryRider__ReaderDesc_ReadLReal,(void*)IO_BinaryRider__ReaderDesc_ReadLString,(void*)IO_BinaryRider__ReaderDesc_ReadNum,(void*)IO_BinaryRider__ReaderDesc_ReadReal,(void*)IO_BinaryRider__ReaderDesc_ReadSInt,(void*)IO_BinaryRider__ReaderDesc_ReadSet,(void*)IO_BinaryRider__ReaderDesc_ReadStr,(void*)IO_BinaryRider__ReaderDesc_ReadString,(void*)IO_BinaryRider__ReaderDesc_SetByteOrder,(void*)IO_BinaryRider__ReaderDesc_SetPos,(void*)ADT_Object_Storage__ReaderDesc_Disconnect,(void*)ADT_Object_Storage__ReaderDesc_ReadObject}, &_mid, "ReaderDesc", 280, 2, RT0__strRecord };
RT0__StructDesc _td_ADT_Object_Storage__Writer = { (RT0__Struct[]){&_td_ADT_Object_Storage__WriterDesc}, NULL, &_mid, "Writer", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Object_Storage__WriterDesc = { (RT0__Struct[]){&_td_IO_BinaryRider__WriterDesc,&_td_ADT_Storable__WriterDesc,&_td_ADT_Object_Storage__WriterDesc}, (void*[]){(void*)IO_BinaryRider__WriterDesc_SetByteOrder,(void*)IO_BinaryRider__WriterDesc_SetPos,(void*)IO_BinaryRider__WriterDesc_WriteBool,(void*)IO_BinaryRider__WriterDesc_WriteBytes,(void*)IO_BinaryRider__WriterDesc_WriteChar,(void*)IO_BinaryRider__WriterDesc_WriteInt,(void*)IO_BinaryRider__WriterDesc_WriteLChar,(void*)IO_BinaryRider__WriterDesc_WriteLInt,(void*)IO_BinaryRider__WriterDesc_WriteLReal,(void*)IO_BinaryRider__WriterDesc_WriteLString,(void*)IO_BinaryRider__WriterDesc_WriteNum,(void*)IO_BinaryRider__WriterDesc_WriteOrdered,(void*)IO_BinaryRider__WriterDesc_WriteReal,(void*)IO_BinaryRider__WriterDesc_WriteSInt,(void*)IO_BinaryRider__WriterDesc_WriteSet,(void*)IO_BinaryRider__WriterDesc_WriteStr,(void*)IO_BinaryRider__WriterDesc_WriteString,(void*)ADT_Object_Storage__WriterDesc_Disconnect,(void*)ADT_Object_Storage__WriterDesc_WriteObject}, &_mid, "WriterDesc", 280, 2, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ADT:Object:Storage", (RT0__Struct[]) { &_td_ADT_Object_Storage__TypeRefMap, &_td_ADT_Object_Storage__ObjectArray, &_td_ADT_Object_Storage__TypeArray, &_td_ADT_Object_Storage__CharBuffer, &_td_ADT_Object_Storage__Reader, &_td_ADT_Object_Storage__ReaderDesc, &_td_ADT_Object_Storage__Writer, &_td_ADT_Object_Storage__WriterDesc, NULL } };

extern void OOC_ADT_Object_Storage_init0() {
  RT0__RegisterModule(&_mid);
  OOC_ADT_Object_Storage_init();
}

static void* _c0;
static void* _c1;
static void* _c2;
static void* _c3;
static void* _c4;
/* --- */
