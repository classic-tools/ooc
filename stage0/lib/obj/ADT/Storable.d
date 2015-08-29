#include <ADT/Storable.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ADT_Storable__Object = { (RT0__Struct[]){&_td_ADT_Storable__ObjectDesc}, NULL, &_mid, "Object", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Storable__ObjectDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)ADT_Storable__ObjectDesc_Load,(void*)ADT_Storable__ObjectDesc_Store}, &_mid, "ObjectDesc", 0, 1, RT0__strRecord };
RT0__StructDesc _td_ADT_Storable__Reader = { (RT0__Struct[]){&_td_ADT_Storable__ReaderDesc}, NULL, &_mid, "Reader", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Storable__ReaderDesc = { (RT0__Struct[]){&_td_IO_BinaryRider__ReaderDesc,&_td_ADT_Storable__ReaderDesc}, (void*[]){(void*)IO_BinaryRider__ReaderDesc_ReadBool,(void*)IO_BinaryRider__ReaderDesc_ReadBytes,(void*)IO_BinaryRider__ReaderDesc_ReadBytesOrdered,(void*)IO_BinaryRider__ReaderDesc_ReadChar,(void*)IO_BinaryRider__ReaderDesc_ReadInt,(void*)IO_BinaryRider__ReaderDesc_ReadLChar,(void*)IO_BinaryRider__ReaderDesc_ReadLInt,(void*)IO_BinaryRider__ReaderDesc_ReadLReal,(void*)IO_BinaryRider__ReaderDesc_ReadLString,(void*)IO_BinaryRider__ReaderDesc_ReadNum,(void*)IO_BinaryRider__ReaderDesc_ReadReal,(void*)IO_BinaryRider__ReaderDesc_ReadSInt,(void*)IO_BinaryRider__ReaderDesc_ReadSet,(void*)IO_BinaryRider__ReaderDesc_ReadStr,(void*)IO_BinaryRider__ReaderDesc_ReadString,(void*)IO_BinaryRider__ReaderDesc_SetByteOrder,(void*)IO_BinaryRider__ReaderDesc_SetPos,(void*)ADT_Storable__ReaderDesc_Disconnect,(void*)ADT_Storable__ReaderDesc_ReadObject}, &_mid, "ReaderDesc", 8, 1, RT0__strRecord };
RT0__StructDesc _td_ADT_Storable__Writer = { (RT0__Struct[]){&_td_ADT_Storable__WriterDesc}, NULL, &_mid, "Writer", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Storable__WriterDesc = { (RT0__Struct[]){&_td_IO_BinaryRider__WriterDesc,&_td_ADT_Storable__WriterDesc}, (void*[]){(void*)IO_BinaryRider__WriterDesc_SetByteOrder,(void*)IO_BinaryRider__WriterDesc_SetPos,(void*)IO_BinaryRider__WriterDesc_WriteBool,(void*)IO_BinaryRider__WriterDesc_WriteBytes,(void*)IO_BinaryRider__WriterDesc_WriteChar,(void*)IO_BinaryRider__WriterDesc_WriteInt,(void*)IO_BinaryRider__WriterDesc_WriteLChar,(void*)IO_BinaryRider__WriterDesc_WriteLInt,(void*)IO_BinaryRider__WriterDesc_WriteLReal,(void*)IO_BinaryRider__WriterDesc_WriteLString,(void*)IO_BinaryRider__WriterDesc_WriteNum,(void*)IO_BinaryRider__WriterDesc_WriteOrdered,(void*)IO_BinaryRider__WriterDesc_WriteReal,(void*)IO_BinaryRider__WriterDesc_WriteSInt,(void*)IO_BinaryRider__WriterDesc_WriteSet,(void*)IO_BinaryRider__WriterDesc_WriteStr,(void*)IO_BinaryRider__WriterDesc_WriteString,(void*)ADT_Storable__WriterDesc_Disconnect,(void*)ADT_Storable__WriterDesc_WriteObject}, &_mid, "WriterDesc", 8, 1, RT0__strRecord };
RT0__StructDesc _td_ADT_Storable__TypeError = { (RT0__Struct[]){&_td_ADT_Storable__TypeErrorDesc}, NULL, &_mid, "TypeError", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Storable__TypeErrorDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc,&_td_ADT_Storable__TypeErrorDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)IO__ErrorDesc_INIT,(void*)Exception__ExceptionDesc_Name,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "TypeErrorDesc", 92, 2, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ADT:Storable", (RT0__Struct[]) { &_td_ADT_Storable__Object, &_td_ADT_Storable__ObjectDesc, &_td_ADT_Storable__Reader, &_td_ADT_Storable__ReaderDesc, &_td_ADT_Storable__Writer, &_td_ADT_Storable__WriterDesc, &_td_ADT_Storable__TypeError, &_td_ADT_Storable__TypeErrorDesc, NULL } };

extern void OOC_ADT_Storable_init0() {
  RT0__RegisterModule(&_mid);
  OOC_ADT_Storable_init();
}

/* --- */
