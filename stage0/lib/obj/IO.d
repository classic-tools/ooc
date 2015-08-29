#include <IO.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_IO__Channel = { (RT0__Struct[]){&_td_IO__ChannelDesc}, NULL, &_mid, "Channel", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__SelectionKey = { (RT0__Struct[]){&_td_IO__SelectionKeyDesc}, NULL, &_mid, "SelectionKey", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__2046 = { (RT0__Struct[]){&_td_IO__SelectionKey}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO__SelectionKeyList = { (RT0__Struct[]){&_td_IO__2046}, NULL, &_mid, "SelectionKeyList", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__ChannelDesc = { (RT0__Struct[]){&_td_IO__ChannelDesc}, (void*[]){(void*)IO__ChannelDesc_Close,(void*)IO__ChannelDesc_CloseAndRegister,(void*)IO__ChannelDesc_FileDescriptor,(void*)IO__ChannelDesc_KeyForSelector,(void*)IO__ChannelDesc_RegisterWithSelector,(void*)IO__ChannelDesc_SetBlocking,(void*)IO__ChannelDesc_SetPos}, &_mid, "ChannelDesc", 8, 0, RT0__strRecord };
RT0__StructDesc _td_IO__ByteChannel = { (RT0__Struct[]){&_td_IO__ByteChannelDesc}, NULL, &_mid, "ByteChannel", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__ByteChannelDesc = { (RT0__Struct[]){&_td_IO__ChannelDesc,&_td_IO__ByteChannelDesc}, (void*[]){(void*)IO__ChannelDesc_Close,(void*)IO__ChannelDesc_CloseAndRegister,(void*)IO__ChannelDesc_FileDescriptor,(void*)IO__ChannelDesc_KeyForSelector,(void*)IO__ChannelDesc_RegisterWithSelector,(void*)IO__ChannelDesc_SetBlocking,(void*)IO__ChannelDesc_SetPos,(void*)IO__ByteChannelDesc_Flush,(void*)IO__ByteChannelDesc_Read,(void*)IO__ByteChannelDesc_TransferTo,(void*)IO__ByteChannelDesc_Write}, &_mid, "ByteChannelDesc", 8, 1, RT0__strRecord };
RT0__StructDesc _td_IO__Selector = { (RT0__Struct[]){&_td_IO__SelectorDesc}, NULL, &_mid, "Selector", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__SelectorDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_IO__SelectorDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)IO__SelectorDesc_AddSelectionKey,(void*)IO__SelectorDesc_Close,(void*)IO__SelectorDesc_NextKey,(void*)IO__SelectorDesc_RemoveCanceled,(void*)IO__SelectorDesc_RemoveSelectionKey,(void*)IO__SelectorDesc_Select}, &_mid, "SelectorDesc", 8, 1, RT0__strRecord };
RT0__StructDesc _td_IO__SelectionKeyDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_IO__SelectionKeyDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)IO__SelectionKeyDesc_Attach,(void*)IO__SelectionKeyDesc_Cancel,(void*)IO__SelectionKeyDesc_SetInterestOps}, &_mid, "SelectionKeyDesc", 28, 1, RT0__strRecord };
RT0__StructDesc _td_IO__Error = { (RT0__Struct[]){&_td_IO__ErrorDesc}, NULL, &_mid, "Error", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__ErrorDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)IO__ErrorDesc_INIT,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "ErrorDesc", 92, 1, RT0__strRecord };
RT0__StructDesc _td_IO__FileNotFound = { (RT0__Struct[]){&_td_IO__FileNotFoundDesc}, NULL, &_mid, "FileNotFound", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__FileNotFoundDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc,&_td_IO__FileNotFoundDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)IO__ErrorDesc_INIT,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "FileNotFoundDesc", 92, 2, RT0__strRecord };
RT0__StructDesc _td_IO__AccessDenied = { (RT0__Struct[]){&_td_IO__AccessDeniedDesc}, NULL, &_mid, "AccessDenied", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__AccessDeniedDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc,&_td_IO__AccessDeniedDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)IO__ErrorDesc_INIT,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "AccessDeniedDesc", 92, 2, RT0__strRecord };
RT0__StructDesc _td_IO__FileExists = { (RT0__Struct[]){&_td_IO__FileExistsDesc}, NULL, &_mid, "FileExists", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__FileExistsDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc,&_td_IO__FileExistsDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)IO__ErrorDesc_INIT,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "FileExistsDesc", 92, 2, RT0__strRecord };
RT0__StructDesc _td_IO__FileBusy = { (RT0__Struct[]){&_td_IO__FileBusyDesc}, NULL, &_mid, "FileBusy", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__FileBusyDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc,&_td_IO__FileBusyDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)IO__ErrorDesc_INIT,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "FileBusyDesc", 92, 2, RT0__strRecord };
RT0__StructDesc _td_IO__InvalidArgument = { (RT0__Struct[]){&_td_IO__InvalidArgumentDesc}, NULL, &_mid, "InvalidArgument", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__InvalidArgumentDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc,&_td_IO__InvalidArgumentDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)IO__ErrorDesc_INIT,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "InvalidArgumentDesc", 92, 2, RT0__strRecord };
RT0__StructDesc _td_IO__OutOfRange = { (RT0__Struct[]){&_td_IO__OutOfRangeDesc}, NULL, &_mid, "OutOfRange", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__OutOfRangeDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc,&_td_IO__OutOfRangeDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)IO__ErrorDesc_INIT,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "OutOfRangeDesc", 92, 2, RT0__strRecord };
RT0__StructDesc _td_IO__NotImplemented = { (RT0__Struct[]){&_td_IO__NotImplementedDesc}, NULL, &_mid, "NotImplemented", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__NotImplementedDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc,&_td_IO__NotImplementedDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)IO__ErrorDesc_INIT,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "NotImplementedDesc", 92, 2, RT0__strRecord };
RT0__StructDesc _td_IO__FormatError = { (RT0__Struct[]){&_td_IO__FormatErrorDesc}, NULL, &_mid, "FormatError", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__FormatErrorDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc,&_td_IO__FormatErrorDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)IO__ErrorDesc_INIT,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "FormatErrorDesc", 92, 2, RT0__strRecord };
RT0__StructDesc _td_IO__ProtocolError = { (RT0__Struct[]){&_td_IO__ProtocolErrorDesc}, NULL, &_mid, "ProtocolError", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__ProtocolErrorDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc,&_td_IO__ProtocolErrorDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)IO__ErrorDesc_INIT,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "ProtocolErrorDesc", 92, 2, RT0__strRecord };
RT0__StructDesc _td_IO__ErrorResponse = { (RT0__Struct[]){&_td_IO__ErrorResponseDesc}, NULL, &_mid, "ErrorResponse", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO__ErrorResponseDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_IO__ErrorDesc,&_td_IO__ErrorResponseDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)IO__ErrorDesc_INIT,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "ErrorResponseDesc", 92, 2, RT0__strRecord };
RT0__StructDesc _td_IO__15225 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO__16553 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO__17905 = { (RT0__Struct[]){&RT0__byte}, NULL, &_mid, NULL, 8192, 8192, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"IO", (RT0__Struct[]) { &_td_IO__Channel, &_td_IO__SelectionKey, &_td_IO__SelectionKeyList, &_td_IO__ChannelDesc, &_td_IO__ByteChannel, &_td_IO__ByteChannelDesc, &_td_IO__Selector, &_td_IO__SelectorDesc, &_td_IO__SelectionKeyDesc, &_td_IO__Error, &_td_IO__ErrorDesc, &_td_IO__FileNotFound, &_td_IO__FileNotFoundDesc, &_td_IO__AccessDenied, &_td_IO__AccessDeniedDesc, &_td_IO__FileExists, &_td_IO__FileExistsDesc, &_td_IO__FileBusy, &_td_IO__FileBusyDesc, &_td_IO__InvalidArgument, &_td_IO__InvalidArgumentDesc, &_td_IO__OutOfRange, &_td_IO__OutOfRangeDesc, &_td_IO__NotImplemented, &_td_IO__NotImplementedDesc, &_td_IO__FormatError, &_td_IO__FormatErrorDesc, &_td_IO__ProtocolError, &_td_IO__ProtocolErrorDesc, &_td_IO__ErrorResponse, &_td_IO__ErrorResponseDesc, NULL } };

extern void OOC_IO_init0() {
  RT0__RegisterModule(&_mid);
  OOC_IO_init();
}

/* --- */
