#include <IO.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_IO__Channel = { (RT0__Struct[]){&_td_IO__ChannelDesc}, NULL, &_mid, "Channel", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__SelectionKey = { (RT0__Struct[]){&_td_IO__SelectionKeyDesc}, NULL, &_mid, "SelectionKey", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__2045 = { (RT0__Struct[]){&_td_IO__SelectionKey}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO__SelectionKeyList = { (RT0__Struct[]){&_td_IO__2045}, NULL, &_mid, "SelectionKeyList", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__ChannelDesc = { (RT0__Struct[]){&_td_IO__ChannelDesc}, (void*[]){(void*)IO__ChannelDesc_Close,(void*)IO__ChannelDesc_CloseAndRegister,(void*)IO__ChannelDesc_FileDescriptor,(void*)IO__ChannelDesc_KeyForSelector,(void*)IO__ChannelDesc_RegisterWithSelector,(void*)IO__ChannelDesc_SetBlocking,(void*)IO__ChannelDesc_SetPos}, &_mid, "ChannelDesc", 8, 0, RT0__strRecord };
RT0__StructDesc _td_IO__ByteChannel = { (RT0__Struct[]){&_td_IO__ByteChannelDesc}, NULL, &_mid, "ByteChannel", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__ByteChannelDesc = { (RT0__Struct[]){&_td_IO__ChannelDesc,&_td_IO__ByteChannelDesc}, (void*[]){(void*)IO__ChannelDesc_Close,(void*)IO__ChannelDesc_CloseAndRegister,(void*)IO__ChannelDesc_FileDescriptor,(void*)IO__ChannelDesc_KeyForSelector,(void*)IO__ChannelDesc_RegisterWithSelector,(void*)IO__ChannelDesc_SetBlocking,(void*)IO__ChannelDesc_SetPos,(void*)IO__ByteChannelDesc_Flush,(void*)IO__ByteChannelDesc_Read,(void*)IO__ByteChannelDesc_TransferTo,(void*)IO__ByteChannelDesc_Write}, &_mid, "ByteChannelDesc", 8, 1, RT0__strRecord };
RT0__StructDesc _td_IO__Selector = { (RT0__Struct[]){&_td_IO__SelectorDesc}, NULL, &_mid, "Selector", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__SelectorDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_IO__SelectorDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)IO__SelectorDesc_AddSelectionKey,(void*)IO__SelectorDesc_Close,(void*)IO__SelectorDesc_NextKey,(void*)IO__SelectorDesc_RemoveCanceled,(void*)IO__SelectorDesc_RemoveSelectionKey,(void*)IO__SelectorDesc_Select}, &_mid, "SelectorDesc", 8, 1, RT0__strRecord };
RT0__StructDesc _td_IO__SelectionKeyDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_IO__SelectionKeyDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)IO__SelectionKeyDesc_Attach,(void*)IO__SelectionKeyDesc_Cancel,(void*)IO__SelectionKeyDesc_SetInterestOps}, &_mid, "SelectionKeyDesc", 28, 1, RT0__strRecord };
RT0__StructDesc _td_IO__Error = { (RT0__Struct[]){&_td_IO__ErrorDesc}, NULL, &_mid, "Error", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__ErrorDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "ErrorDesc", 92, 1, RT0__strRecord };
RT0__StructDesc _td_IO__FileNotFound = { (RT0__Struct[]){&_td_IO__FileNotFoundDesc}, NULL, &_mid, "FileNotFound", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__FileNotFoundDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc,&_td_IO__FileNotFoundDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "FileNotFoundDesc", 92, 2, RT0__strRecord };
RT0__StructDesc _td_IO__NotImplemented = { (RT0__Struct[]){&_td_IO__NotImplementedDesc}, NULL, &_mid, "NotImplemented", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__NotImplementedDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc,&_td_IO__NotImplementedDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "NotImplementedDesc", 92, 2, RT0__strRecord };
RT0__StructDesc _td_IO__FormatError = { (RT0__Struct[]){&_td_IO__FormatErrorDesc}, NULL, &_mid, "FormatError", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__FormatErrorDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc,&_td_IO__FormatErrorDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "FormatErrorDesc", 92, 2, RT0__strRecord };
RT0__StructDesc _td_IO__14128 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO__15458 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO__16801 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 8192, 8192, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"IO", (RT0__Struct[]) { &_td_IO__Channel, &_td_IO__SelectionKey, &_td_IO__SelectionKeyList, &_td_IO__ChannelDesc, &_td_IO__ByteChannel, &_td_IO__ByteChannelDesc, &_td_IO__Selector, &_td_IO__SelectorDesc, &_td_IO__SelectionKeyDesc, &_td_IO__Error, &_td_IO__ErrorDesc, &_td_IO__FileNotFound, &_td_IO__FileNotFoundDesc, &_td_IO__NotImplemented, &_td_IO__NotImplementedDesc, &_td_IO__FormatError, &_td_IO__FormatErrorDesc, NULL } };

extern void OOC_IO_init0() {
  RT0__RegisterModule(&_mid);
  OOC_IO_init();
}

/* --- */
