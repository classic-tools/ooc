#include <IO/StdChannels.oh>
typedef IO_StdChannels__Channel IO_StdChannels__ChannelList[];
IO__ByteChannel IO_StdChannels__stdin;
IO__ByteChannel IO_StdChannels__stdout;
IO__ByteChannel IO_StdChannels__stderr;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_IO_StdChannels__Channel = { (RT0__Struct[]){&_td_IO_StdChannels__ChannelDesc}, NULL, &_mid, "Channel", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO_StdChannels__ChannelList = { (RT0__Struct[]){&_td_IO_StdChannels__Channel}, NULL, &_mid, "ChannelList", 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_StdChannels__ChannelDesc = { (RT0__Struct[]){&_td_IO__ChannelDesc,&_td_IO__ByteChannelDesc,&_td_IO_StdChannels__ChannelDesc}, (void*[]){(void*)IO__ChannelDesc_Close,(void*)IO__ChannelDesc_CloseAndRegister,(void*)IO_StdChannels__ChannelDesc_FileDescriptor,(void*)IO__ChannelDesc_KeyForSelector,(void*)IO__ChannelDesc_RegisterWithSelector,(void*)IO_StdChannels__ChannelDesc_SetBlocking,(void*)IO__ChannelDesc_SetPos,(void*)IO__ByteChannelDesc_Flush,(void*)IO_StdChannels__ChannelDesc_Read,(void*)IO__ByteChannelDesc_TransferTo,(void*)IO_StdChannels__ChannelDesc_Write}, &_mid, "ChannelDesc", 12, 2, RT0__strRecord };
RT0__StructDesc _td_IO_StdChannels__1335 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_StdChannels__1490 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"IO:StdChannels", (RT0__Struct[]) { &_td_IO_StdChannels__Channel, &_td_IO_StdChannels__ChannelList, &_td_IO_StdChannels__ChannelDesc, NULL } };

extern void OOC_IO_StdChannels_init0() {
  RT0__RegisterModule(&_mid);
  OOC_IO_StdChannels_init();
}

/* --- */
