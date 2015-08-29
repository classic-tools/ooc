#include "ADT/Storable.oh"
static ADT_Storable__ErrorContext ADT_Storable__errorContext;
static Msg__Msg ADT_Storable__GetError(OOC_INT32 code);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ADT_Storable__Object = { (RT0__Struct[]){&_td_ADT_Storable__ObjectDesc}, NULL, &_mid, "Object", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Storable__ObjectDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)ADT_Storable__ObjectDesc_Destroy,(void*)ADT_Storable__ObjectDesc_Load,(void*)ADT_Storable__ObjectDesc_Store}, &_mid, "ObjectDesc", 0, 1, RT0__strRecord };
RT0__StructDesc _td_ADT_Storable__Reader = { (RT0__Struct[]){&_td_ADT_Storable__ReaderDesc}, NULL, &_mid, "Reader", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Storable__ReaderDesc = { (RT0__Struct[]){&_td_BinaryRider__ReaderDesc,&_td_ADT_Storable__ReaderDesc}, (void*[]){(void*)BinaryRider__ReaderDesc_Available,(void*)BinaryRider__ReaderDesc_ClearError,(void*)BinaryRider__ReaderDesc_Pos,(void*)BinaryRider__ReaderDesc_ReadBool,(void*)BinaryRider__ReaderDesc_ReadBytes,(void*)BinaryRider__ReaderDesc_ReadBytesOrdered,(void*)BinaryRider__ReaderDesc_ReadChar,(void*)BinaryRider__ReaderDesc_ReadInt,(void*)BinaryRider__ReaderDesc_ReadLChar,(void*)BinaryRider__ReaderDesc_ReadLInt,(void*)BinaryRider__ReaderDesc_ReadLReal,(void*)BinaryRider__ReaderDesc_ReadLString,(void*)BinaryRider__ReaderDesc_ReadNum,(void*)BinaryRider__ReaderDesc_ReadReal,(void*)BinaryRider__ReaderDesc_ReadSInt,(void*)BinaryRider__ReaderDesc_ReadSet,(void*)BinaryRider__ReaderDesc_ReadStr,(void*)BinaryRider__ReaderDesc_ReadString,(void*)BinaryRider__ReaderDesc_SetByteOrder,(void*)BinaryRider__ReaderDesc_SetPos,(void*)ADT_Storable__ReaderDesc_Cancel,(void*)ADT_Storable__ReaderDesc_Disconnect,(void*)ADT_Storable__ReaderDesc_ReadObject,(void*)ADT_Storable__ReaderDesc_ReadVersion}, &_mid, "ReaderDesc", 16, 1, RT0__strRecord };
RT0__StructDesc _td_ADT_Storable__Writer = { (RT0__Struct[]){&_td_ADT_Storable__WriterDesc}, NULL, &_mid, "Writer", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Storable__WriterDesc = { (RT0__Struct[]){&_td_BinaryRider__WriterDesc,&_td_ADT_Storable__WriterDesc}, (void*[]){(void*)BinaryRider__WriterDesc_ClearError,(void*)BinaryRider__WriterDesc_Pos,(void*)BinaryRider__WriterDesc_SetByteOrder,(void*)BinaryRider__WriterDesc_SetPos,(void*)BinaryRider__WriterDesc_WriteBool,(void*)BinaryRider__WriterDesc_WriteBytes,(void*)BinaryRider__WriterDesc_WriteBytesOrdered,(void*)BinaryRider__WriterDesc_WriteChar,(void*)BinaryRider__WriterDesc_WriteInt,(void*)BinaryRider__WriterDesc_WriteLChar,(void*)BinaryRider__WriterDesc_WriteLInt,(void*)BinaryRider__WriterDesc_WriteLReal,(void*)BinaryRider__WriterDesc_WriteLString,(void*)BinaryRider__WriterDesc_WriteNum,(void*)BinaryRider__WriterDesc_WriteReal,(void*)BinaryRider__WriterDesc_WriteSInt,(void*)BinaryRider__WriterDesc_WriteSet,(void*)BinaryRider__WriterDesc_WriteStr,(void*)BinaryRider__WriterDesc_WriteString,(void*)ADT_Storable__WriterDesc_Disconnect,(void*)ADT_Storable__WriterDesc_WriteObject,(void*)ADT_Storable__WriterDesc_WriteVersion}, &_mid, "WriterDesc", 16, 1, RT0__strRecord };
RT0__StructDesc _td_ADT_Storable__String = { (RT0__Struct[]){&_td_ADT_Storable__StringDesc}, NULL, &_mid, "String", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Storable__StringDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_ADT_Storable__StringDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)ADT_Storable__ObjectDesc_Destroy,(void*)ADT_Storable__ObjectDesc_Load,(void*)ADT_Storable__ObjectDesc_Store}, &_mid, "StringDesc", 0, 2, RT0__strRecord };
RT0__StructDesc _td_ADT_Storable__ErrorContext = { (RT0__Struct[]){&_td_ADT_Storable__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Storable__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_Channel__ErrorContextDesc,&_td_ADT_Storable__ErrorContextDesc}, (void*[]){(void*)ADT_Storable__ErrorContextDesc_GetTemplate}, &_mid, "ErrorContextDesc", 4, 2, RT0__strRecord };
RT0__StructDesc _td_ADT_Storable__4508 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 64, 64, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ADT:Storable", (RT0__Struct[]) { &_td_ADT_Storable__Object, &_td_ADT_Storable__ObjectDesc, &_td_ADT_Storable__Reader, &_td_ADT_Storable__ReaderDesc, &_td_ADT_Storable__Writer, &_td_ADT_Storable__WriterDesc, &_td_ADT_Storable__String, &_td_ADT_Storable__StringDesc, &_td_ADT_Storable__ErrorContext, &_td_ADT_Storable__ErrorContextDesc, NULL } };

extern void OOC_ADT_Storable_init0() {
  RT0__RegisterModule(&_mid);
  OOC_ADT_Storable_init();
}

/* --- */
