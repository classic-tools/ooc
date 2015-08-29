#include <OOC/Scanner.oh>
#include <Ascii.oh>
#include <OOC/Scanner/InputBuffer.oh>
#include <OOC/Scanner/Pragma.oh>
#define OOC_Scanner__sizeKWTable 128
static OOC_Scanner_InputBuffer__CharArray OOC_Scanner__kwStr[128][2];
static OOC_INT8 OOC_Scanner__kwSym[128][2];
#define OOC_Scanner__commentNotClosed 1
#define OOC_Scanner__illegalStringChar 2
#define OOC_Scanner__stringNotEnded 3
#define OOC_Scanner__notWithinComment 4
#define OOC_Scanner__illegalSymbol 5
#define OOC_Scanner__illegalExponent 6
#define OOC_Scanner__illegalHexDigit 7
#define OOC_Scanner__notWithinPragma 8
static OOC_Scanner__ErrorContext OOC_Scanner__scannerContext;
static void OOC_Scanner__InitKeywords();

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Scanner__2950 = { (RT0__Struct[]){&_td_OOC_Scanner_InputBuffer__CharArray}, NULL, &_mid, NULL, 8, 2, RT0__strArray };
RT0__StructDesc _td_OOC_Scanner__2933 = { (RT0__Struct[]){&_td_OOC_Scanner__2950}, NULL, &_mid, NULL, 1024, 128, RT0__strArray };
RT0__StructDesc _td_OOC_Scanner__3056 = { (RT0__Struct[]){&RT0__shortint}, NULL, &_mid, NULL, 2, 2, RT0__strArray };
RT0__StructDesc _td_OOC_Scanner__3039 = { (RT0__Struct[]){&_td_OOC_Scanner__3056}, NULL, &_mid, NULL, 256, 128, RT0__strArray };
RT0__StructDesc _td_OOC_Scanner__ErrorContext = { (RT0__Struct[]){&_td_OOC_Scanner__ErrorContextDesc}, NULL, &_mid, "ErrorContext", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_Scanner__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_OOC_Error__ContextDesc,&_td_OOC_Scanner__ErrorContextDesc}, (void*[]){(void*)OOC_Scanner__ErrorContextDesc_GetTemplate,(void*)OOC_Error__ContextDesc_BaseTemplate}, &_mid, "ErrorContextDesc", 4, 2, RT0__strRecord };
RT0__StructDesc _td_OOC_Scanner__3728 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 256, 128, RT0__strArray };
RT0__StructDesc _td_OOC_Scanner__7769 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_Scanner__21959 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Scanner", (RT0__Struct[]) { &_td_OOC_Scanner__ErrorContext, &_td_OOC_Scanner__ErrorContextDesc, NULL } };

extern void OOC_OOC_Scanner_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_Scanner_init();
}

/* --- */
