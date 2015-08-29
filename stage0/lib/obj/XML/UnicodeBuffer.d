#include <XML/UnicodeBuffer.oh>
#include <Strings.oh>
#include <LongStrings.oh>
#include <Exception.oh>
#define XML_UnicodeBuffer__charsPerRead 4096
#define XML_UnicodeBuffer__offsetSizeOfBuffer 32
#define XML_UnicodeBuffer__sizeOutputByteBuffer 8192
#define XML_UnicodeBuffer__sizeOutputUnicodeBuffer 8192
static OOC_INT32 XML_UnicodeBuffer__AutodetectEnc(XML_UnicodeBuffer__Input input, OOC_CHAR8 enc[], OOC_LEN enc_0d);
static void XML_UnicodeBuffer__FlushBytes(volatile XML_UnicodeBuffer__Output out);
static void XML_UnicodeBuffer__Encode(XML_UnicodeBuffer__Output out, OOC_CHAR8 all);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_UnicodeBuffer__268 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_UnicodeBuffer__CharArray = { (RT0__Struct[]){&_td_XML_UnicodeBuffer__268}, NULL, &_mid, "CharArray", 4, -1, RT0__strPointer };
RT0__StructDesc _td_XML_UnicodeBuffer__Input = { (RT0__Struct[]){&_td_XML_UnicodeBuffer__InputDesc}, NULL, &_mid, "Input", 4, -1, RT0__strPointer };
RT0__StructDesc _td_XML_UnicodeBuffer__InputDesc = { (RT0__Struct[]){&_td_XML_UnicodeBuffer__InputDesc}, (void*[]){(void*)XML_UnicodeBuffer__InputDesc_Close,(void*)XML_UnicodeBuffer__InputDesc_NextBlock,(void*)XML_UnicodeBuffer__InputDesc_SetCodec}, &_mid, "InputDesc", 40, 0, RT0__strRecord };
RT0__StructDesc _td_XML_UnicodeBuffer__Output = { (RT0__Struct[]){&_td_XML_UnicodeBuffer__OutputDesc}, NULL, &_mid, "Output", 4, -1, RT0__strPointer };
RT0__StructDesc _td_XML_UnicodeBuffer__OutputDesc = { (RT0__Struct[]){&_td_XML_UnicodeBuffer__OutputDesc}, (void*[]){(void*)XML_UnicodeBuffer__OutputDesc_Flush,(void*)XML_UnicodeBuffer__OutputDesc_Write16,(void*)XML_UnicodeBuffer__OutputDesc_Write16I,(void*)XML_UnicodeBuffer__OutputDesc_Write8,(void*)XML_UnicodeBuffer__OutputDesc_Write8I}, &_mid, "OutputDesc", 36, 0, RT0__strRecord };
RT0__StructDesc _td_XML_UnicodeBuffer__3530 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 8192, 8192, RT0__strArray };
RT0__StructDesc _td_XML_UnicodeBuffer__3519 = { (RT0__Struct[]){&_td_XML_UnicodeBuffer__3530}, NULL, &_mid, NULL, 4, -1, RT0__strPointer };
RT0__StructDesc _td_XML_UnicodeBuffer__3629 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 16384, 8192, RT0__strArray };
RT0__StructDesc _td_XML_UnicodeBuffer__3618 = { (RT0__Struct[]){&_td_XML_UnicodeBuffer__3629}, NULL, &_mid, NULL, 4, -1, RT0__strPointer };
RT0__StructDesc _td_XML_UnicodeBuffer__3754 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_UnicodeBuffer__4724 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 16, 16, RT0__strArray };
RT0__StructDesc _td_XML_UnicodeBuffer__11613 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 256, 256, RT0__strArray };
RT0__StructDesc _td_XML_UnicodeBuffer__15126 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_UnicodeBuffer__15946 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_UnicodeBuffer__16761 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_UnicodeBuffer__16901 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:UnicodeBuffer", (RT0__Struct[]) { &_td_XML_UnicodeBuffer__CharArray, &_td_XML_UnicodeBuffer__Input, &_td_XML_UnicodeBuffer__InputDesc, &_td_XML_UnicodeBuffer__Output, &_td_XML_UnicodeBuffer__OutputDesc, NULL } };

extern void OOC_XML_UnicodeBuffer_init0() {
  RT0__RegisterModule(&_mid);
  OOC_XML_UnicodeBuffer_init();
}

/* --- */
