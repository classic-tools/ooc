#include "BinaryRider.oh"
#include "Strings.oh"
#include "RT0.oh"
#include "Language/String0.oh"
static OOC_INT8 BinaryRider__systemByteOrder;
typedef struct BinaryRider__ErrorContextDesc *BinaryRider__ErrorContext;
static BinaryRider__ErrorContext BinaryRider__errorContext;
static Msg__Msg BinaryRider__GetError(OOC_INT32 code);
static void BinaryRider__SetDefaultByteOrder(OOC_CHAR8 x[], OOC_LEN x_0d);
static void BinaryRider__Init();

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_BinaryRider__Reader = { (RT0__Struct[]){&_td_BinaryRider__ReaderDesc}, NULL, &_mid, "Reader", 4, -1, RT0__strPointer };
RT0__StructDesc _td_BinaryRider__ReaderDesc = { (RT0__Struct[]){&_td_BinaryRider__ReaderDesc}, (void*[]){(void*)BinaryRider__ReaderDesc_Available,(void*)BinaryRider__ReaderDesc_ClearError,(void*)BinaryRider__ReaderDesc_Pos,(void*)BinaryRider__ReaderDesc_ReadBool,(void*)BinaryRider__ReaderDesc_ReadBytes,(void*)BinaryRider__ReaderDesc_ReadBytesOrdered,(void*)BinaryRider__ReaderDesc_ReadChar,(void*)BinaryRider__ReaderDesc_ReadInt,(void*)BinaryRider__ReaderDesc_ReadLChar,(void*)BinaryRider__ReaderDesc_ReadLInt,(void*)BinaryRider__ReaderDesc_ReadLReal,(void*)BinaryRider__ReaderDesc_ReadLString,(void*)BinaryRider__ReaderDesc_ReadNum,(void*)BinaryRider__ReaderDesc_ReadReal,(void*)BinaryRider__ReaderDesc_ReadSInt,(void*)BinaryRider__ReaderDesc_ReadSet,(void*)BinaryRider__ReaderDesc_ReadString,(void*)BinaryRider__ReaderDesc_SetByteOrder,(void*)BinaryRider__ReaderDesc_SetPos}, &_mid, "ReaderDesc", 16, 0, RT0__strRecord };
RT0__StructDesc _td_BinaryRider__Writer = { (RT0__Struct[]){&_td_BinaryRider__WriterDesc}, NULL, &_mid, "Writer", 4, -1, RT0__strPointer };
RT0__StructDesc _td_BinaryRider__WriterDesc = { (RT0__Struct[]){&_td_BinaryRider__WriterDesc}, (void*[]){(void*)BinaryRider__WriterDesc_ClearError,(void*)BinaryRider__WriterDesc_Pos,(void*)BinaryRider__WriterDesc_SetByteOrder,(void*)BinaryRider__WriterDesc_SetPos,(void*)BinaryRider__WriterDesc_WriteBool,(void*)BinaryRider__WriterDesc_WriteBytes,(void*)BinaryRider__WriterDesc_WriteBytesOrdered,(void*)BinaryRider__WriterDesc_WriteChar,(void*)BinaryRider__WriterDesc_WriteInt,(void*)BinaryRider__WriterDesc_WriteLChar,(void*)BinaryRider__WriterDesc_WriteLInt,(void*)BinaryRider__WriterDesc_WriteLReal,(void*)BinaryRider__WriterDesc_WriteLString,(void*)BinaryRider__WriterDesc_WriteNum,(void*)BinaryRider__WriterDesc_WriteReal,(void*)BinaryRider__WriterDesc_WriteSInt,(void*)BinaryRider__WriterDesc_WriteSet,(void*)BinaryRider__WriterDesc_WriteString}, &_mid, "WriterDesc", 16, 0, RT0__strRecord };
RT0__StructDesc _td_BinaryRider__ErrorContext = { (RT0__Struct[]){&_td_BinaryRider__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_BinaryRider__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_Channel__ErrorContextDesc,&_td_BinaryRider__ErrorContextDesc}, (void*[]){(void*)Channel__ErrorContextDesc_GetTemplate}, &_mid, "ErrorContextDesc", 4, 2, RT0__strRecord };
RT0__StructDesc _td_BinaryRider__3710 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__4036 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__5169 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__5854 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__9150 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__9480 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__10486 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__10761 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__14337 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"BinaryRider", (RT0__Struct[]) { &_td_BinaryRider__Reader, &_td_BinaryRider__ReaderDesc, &_td_BinaryRider__Writer, &_td_BinaryRider__WriterDesc, &_td_BinaryRider__ErrorContext, &_td_BinaryRider__ErrorContextDesc, NULL } };

extern void OOC_BinaryRider_init0() {
  RT0__RegisterModule(&_mid);
  OOC_BinaryRider_init();
}

/* --- */
