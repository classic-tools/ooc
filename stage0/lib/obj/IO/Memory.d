#include <IO/Memory.oh>
#include <Strings.oh>
#define IO_Memory__slack 32
static IO_Memory__File IO_Memory__fileList;
static IO_Memory__ErrorContext IO_Memory__errorContext;
static Msg__Msg IO_Memory__GetError(OOC_INT32 code);
static IO_Memory__File IO_Memory__NewFile(OOC_CHAR8 name[], OOC_LEN name_0d);
static void IO_Memory__ExtendFile(IO_Memory__File b, OOC_INT32 newLen);
static IO_Memory__File IO_Memory__FindFile(OOC_CHAR8 name[], OOC_LEN name_0d);
static void IO_Memory__InsertFile(IO_Memory__File b);
static IO_Memory__Channel IO_Memory__Attach(IO_Memory__File b, OOC_UINT32 flags);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_IO_Memory__File = { (RT0__Struct[]){&_td_IO_Memory__FileDesc}, NULL, &_mid, "File", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO_Memory__1923 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_Memory__Data = { (RT0__Struct[]){&_td_IO_Memory__1923}, NULL, &_mid, "Data", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO_Memory__1958 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_Memory__Name = { (RT0__Struct[]){&_td_IO_Memory__1958}, NULL, &_mid, "Name", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO_Memory__FileDesc = { (RT0__Struct[]){&_td_IO_Memory__FileDesc}, (void*[]){}, &_mid, "FileDesc", 24, 0, RT0__strRecord };
RT0__StructDesc _td_IO_Memory__Channel = { (RT0__Struct[]){&_td_IO_Memory__ChannelDesc}, NULL, &_mid, "Channel", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO_Memory__ChannelDesc = { (RT0__Struct[]){&_td_Channel__ChannelDesc,&_td_IO_Memory__ChannelDesc}, (void*[]){(void*)Channel__ChannelDesc_ClearError,(void*)IO_Memory__ChannelDesc_Close,(void*)IO_Memory__ChannelDesc_Flush,(void*)IO_Memory__ChannelDesc_GetModTime,(void*)IO_Memory__ChannelDesc_Length,(void*)IO_Memory__ChannelDesc_NewReader,(void*)IO_Memory__ChannelDesc_NewWriter,(void*)IO_Memory__ChannelDesc_CopyToWriter,(void*)IO_Memory__ChannelDesc_Fingerprint,(void*)IO_Memory__ChannelDesc_Register}, &_mid, "ChannelDesc", 12, 1, RT0__strRecord };
RT0__StructDesc _td_IO_Memory__Reader = { (RT0__Struct[]){&_td_IO_Memory__ReaderDesc}, NULL, &_mid, "Reader", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO_Memory__ReaderDesc = { (RT0__Struct[]){&_td_Channel__ReaderDesc,&_td_IO_Memory__ReaderDesc}, (void*[]){(void*)IO_Memory__ReaderDesc_Available,(void*)Channel__ReaderDesc_ClearError,(void*)IO_Memory__ReaderDesc_Pos,(void*)IO_Memory__ReaderDesc_ReadByte,(void*)IO_Memory__ReaderDesc_ReadBytes,(void*)IO_Memory__ReaderDesc_SetPos}, &_mid, "ReaderDesc", 20, 1, RT0__strRecord };
RT0__StructDesc _td_IO_Memory__Writer = { (RT0__Struct[]){&_td_IO_Memory__WriterDesc}, NULL, &_mid, "Writer", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO_Memory__WriterDesc = { (RT0__Struct[]){&_td_Channel__WriterDesc,&_td_IO_Memory__WriterDesc}, (void*[]){(void*)Channel__WriterDesc_ClearError,(void*)IO_Memory__WriterDesc_Pos,(void*)IO_Memory__WriterDesc_SetPos,(void*)IO_Memory__WriterDesc_WriteByte,(void*)IO_Memory__WriterDesc_WriteBytes,(void*)IO_Memory__WriterDesc_Truncate}, &_mid, "WriterDesc", 20, 1, RT0__strRecord };
RT0__StructDesc _td_IO_Memory__ErrorContext = { (RT0__Struct[]){&_td_IO_Memory__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO_Memory__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_Channel__ErrorContextDesc,&_td_IO_Memory__ErrorContextDesc}, (void*[]){(void*)IO_Memory__ErrorContextDesc_GetTemplate}, &_mid, "ErrorContextDesc", 4, 2, RT0__strRecord };
RT0__StructDesc _td_IO_Memory__3621 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 128, 128, RT0__strArray };
RT0__StructDesc _td_IO_Memory__3945 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_Memory__4725 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_Memory__7143 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_Memory__9596 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_Memory__11476 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_Memory__13672 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_Memory__14100 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_Memory__14867 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_Memory__15492 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"IO:Memory", (RT0__Struct[]) { &_td_IO_Memory__File, &_td_IO_Memory__Data, &_td_IO_Memory__Name, &_td_IO_Memory__FileDesc, &_td_IO_Memory__Channel, &_td_IO_Memory__ChannelDesc, &_td_IO_Memory__Reader, &_td_IO_Memory__ReaderDesc, &_td_IO_Memory__Writer, &_td_IO_Memory__WriterDesc, &_td_IO_Memory__ErrorContext, &_td_IO_Memory__ErrorContextDesc, NULL } };

extern void OOC_IO_Memory_init0() {
  RT0__RegisterModule(&_mid);
  OOC_IO_Memory_init();
}

/* --- */
