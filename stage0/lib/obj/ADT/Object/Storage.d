#include "ADT/Object/Storage.oh"
#include "Strings.oh"
#include "BinaryRider.oh"
#include "Msg.oh"
#define ADT_Object_Storage__pointerGap 4
typedef struct ADT_Object_Storage__ErrorContextDesc *ADT_Object_Storage__ErrorContext;
static ADT_Object_Storage__ErrorContext ADT_Object_Storage__errorContext;
static Msg__Msg ADT_Object_Storage__GetError(OOC_INT32 code);
static void ADT_Object_Storage__InitReader(ADT_Object_Storage__Reader r, Channel__Channel ch);
static void ADT_Object_Storage__InitWriter(ADT_Object_Storage__Writer w, Channel__Channel ch);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ADT_Object_Storage__2122 = { (RT0__Struct[]){&_td_ADT_Object_Storage__2122}, (void*[]){}, &_mid, NULL, 12, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_Object_Storage__2113 = { (RT0__Struct[]){&_td_ADT_Object_Storage__2122}, NULL, &_mid, NULL, 12, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_Object_Storage__TypeRefMap = { (RT0__Struct[]){&_td_ADT_Object_Storage__2113}, NULL, &_mid, "TypeRefMap", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Object_Storage__2223 = { (RT0__Struct[]){&_td_ADT_Storable__Object}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_Object_Storage__ObjectArray = { (RT0__Struct[]){&_td_ADT_Object_Storage__2223}, NULL, &_mid, "ObjectArray", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Object_Storage__2283 = { (RT0__Struct[]){&_td_ADT_Object_Storage__2283}, (void*[]){}, &_mid, NULL, 12, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_Object_Storage__2274 = { (RT0__Struct[]){&_td_ADT_Object_Storage__2283}, NULL, &_mid, NULL, 12, 1, RT0__strOpenArray };
RT0__StructDesc _td_ADT_Object_Storage__TypeArray = { (RT0__Struct[]){&_td_ADT_Object_Storage__2274}, NULL, &_mid, "TypeArray", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Object_Storage__CharBuffer = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, "CharBuffer", 256, 256, RT0__strArray };
RT0__StructDesc _td_ADT_Object_Storage__Reader = { (RT0__Struct[]){&_td_ADT_Object_Storage__ReaderDesc}, NULL, &_mid, "Reader", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Object_Storage__ReaderDesc = { (RT0__Struct[]){&_td_BinaryRider__ReaderDesc,&_td_ADT_Storable__ReaderDesc,&_td_ADT_Object_Storage__ReaderDesc}, (void*[]){(void*)BinaryRider__ReaderDesc_Available,(void*)BinaryRider__ReaderDesc_ClearError,(void*)BinaryRider__ReaderDesc_Pos,(void*)BinaryRider__ReaderDesc_ReadBool,(void*)BinaryRider__ReaderDesc_ReadBytes,(void*)BinaryRider__ReaderDesc_ReadBytesOrdered,(void*)BinaryRider__ReaderDesc_ReadChar,(void*)BinaryRider__ReaderDesc_ReadInt,(void*)BinaryRider__ReaderDesc_ReadLChar,(void*)BinaryRider__ReaderDesc_ReadLInt,(void*)BinaryRider__ReaderDesc_ReadLReal,(void*)BinaryRider__ReaderDesc_ReadLString,(void*)BinaryRider__ReaderDesc_ReadNum,(void*)BinaryRider__ReaderDesc_ReadReal,(void*)BinaryRider__ReaderDesc_ReadSInt,(void*)BinaryRider__ReaderDesc_ReadSet,(void*)BinaryRider__ReaderDesc_ReadStr,(void*)BinaryRider__ReaderDesc_ReadString,(void*)BinaryRider__ReaderDesc_SetByteOrder,(void*)BinaryRider__ReaderDesc_SetPos,(void*)ADT_Storable__ReaderDesc_Cancel,(void*)ADT_Object_Storage__ReaderDesc_Disconnect,(void*)ADT_Object_Storage__ReaderDesc_ReadObject,(void*)ADT_Storable__ReaderDesc_ReadVersion}, &_mid, "ReaderDesc", 288, 2, RT0__strRecord };
RT0__StructDesc _td_ADT_Object_Storage__Writer = { (RT0__Struct[]){&_td_ADT_Object_Storage__WriterDesc}, NULL, &_mid, "Writer", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Object_Storage__WriterDesc = { (RT0__Struct[]){&_td_BinaryRider__WriterDesc,&_td_ADT_Storable__WriterDesc,&_td_ADT_Object_Storage__WriterDesc}, (void*[]){(void*)BinaryRider__WriterDesc_ClearError,(void*)BinaryRider__WriterDesc_Pos,(void*)BinaryRider__WriterDesc_SetByteOrder,(void*)BinaryRider__WriterDesc_SetPos,(void*)BinaryRider__WriterDesc_WriteBool,(void*)BinaryRider__WriterDesc_WriteBytes,(void*)BinaryRider__WriterDesc_WriteBytesOrdered,(void*)BinaryRider__WriterDesc_WriteChar,(void*)BinaryRider__WriterDesc_WriteInt,(void*)BinaryRider__WriterDesc_WriteLChar,(void*)BinaryRider__WriterDesc_WriteLInt,(void*)BinaryRider__WriterDesc_WriteLReal,(void*)BinaryRider__WriterDesc_WriteLString,(void*)BinaryRider__WriterDesc_WriteNum,(void*)BinaryRider__WriterDesc_WriteReal,(void*)BinaryRider__WriterDesc_WriteSInt,(void*)BinaryRider__WriterDesc_WriteSet,(void*)BinaryRider__WriterDesc_WriteStr,(void*)BinaryRider__WriterDesc_WriteString,(void*)ADT_Object_Storage__WriterDesc_Disconnect,(void*)ADT_Object_Storage__WriterDesc_WriteObject,(void*)ADT_Storable__WriterDesc_WriteVersion}, &_mid, "WriterDesc", 288, 2, RT0__strRecord };
RT0__StructDesc _td_ADT_Object_Storage__ErrorContext = { (RT0__Struct[]){&_td_ADT_Object_Storage__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_ADT_Object_Storage__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_Channel__ErrorContextDesc,&_td_ADT_Storable__ErrorContextDesc,&_td_ADT_Object_Storage__ErrorContextDesc}, (void*[]){(void*)ADT_Storable__ErrorContextDesc_GetTemplate}, &_mid, "ErrorContextDesc", 4, 3, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ADT:Object:Storage", (RT0__Struct[]) { &_td_ADT_Object_Storage__TypeRefMap, &_td_ADT_Object_Storage__ObjectArray, &_td_ADT_Object_Storage__TypeArray, &_td_ADT_Object_Storage__CharBuffer, &_td_ADT_Object_Storage__Reader, &_td_ADT_Object_Storage__ReaderDesc, &_td_ADT_Object_Storage__Writer, &_td_ADT_Object_Storage__WriterDesc, &_td_ADT_Object_Storage__ErrorContext, &_td_ADT_Object_Storage__ErrorContextDesc, NULL } };

extern void OOC_ADT_Object_Storage_init0() {
  RT0__RegisterModule(&_mid);
  OOC_ADT_Object_Storage_init();
}

/* --- */
