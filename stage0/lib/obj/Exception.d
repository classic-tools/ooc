#include <Exception.oh>
#define Exception__maxBacktraceSize 21
Exception__ThreadStatePtr (*Exception__GetThreadState)(void);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Exception__Exception = { (RT0__Struct[]){&_td_Exception__ExceptionDesc}, NULL, &_mid, "Exception", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Exception__ExceptionDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)Exception__ExceptionDesc_INIT,(void*)Exception__ExceptionDesc_Name,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "ExceptionDesc", 92, 0, RT0__strRecord };
RT0__StructDesc _td_Exception__4189 = { (RT0__Struct[]){&RT0__ptr}, NULL, &_mid, NULL, 84, 21, RT0__strArray };
RT0__StructDesc _td_Exception__ContextPtr = { (RT0__Struct[]){NULL}, NULL, &_mid, "ContextPtr", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Exception__ParseError = { (RT0__Struct[]){&_td_Exception__ParseErrorDesc}, NULL, &_mid, "ParseError", 4, -1, RT0__strPointer };
RT0__StructDesc _td_Exception__ParseErrorDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_Exception__ParseErrorDesc}, (void*[]){(void*)Exception__ExceptionDesc_GetMessage,(void*)Exception__ParseErrorDesc_INIT,(void*)Exception__ExceptionDesc_Name,(void*)Exception__ExceptionDesc_WriteBacktrace}, &_mid, "ParseErrorDesc", 96, 1, RT0__strRecord };
RT0__StructDesc _td_Exception__ThreadStatePtr = { (RT0__Struct[]){NULL}, NULL, &_mid, "ThreadStatePtr", 4, -1, RT0__strPointer };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Exception", (RT0__Struct[]) { &_td_Exception__Exception, &_td_Exception__ExceptionDesc, &_td_Exception__ContextPtr, &_td_Exception__ParseError, &_td_Exception__ParseErrorDesc, &_td_Exception__ThreadStatePtr, NULL } };

extern void OOC_Exception_init0() {
  RT0__RegisterModule(&_mid);
  OOC_Exception_init();
}

/* --- */
