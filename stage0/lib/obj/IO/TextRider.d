#include <IO/TextRider.oh>
#include <Exception.oh>
#include <Strings.oh>
#include <RealStr.oh>
#include <IntStr.oh>
static void IO_TextRider__SetError(IO_TextRider__Writer w);
static void IO_TextRider__WritePad(IO_TextRider__Writer w, OOC_INT32 n);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_IO_TextRider__Writer = { (RT0__Struct[]){&_td_IO_TextRider__WriterDesc}, NULL, &_mid, "Writer", 4, -1, RT0__strPointer };
RT0__StructDesc _td_IO_TextRider__WriterDesc = { (RT0__Struct[]){&_td_IO_TextRider__WriterDesc}, (void*[]){(void*)IO_TextRider__WriterDesc_SetEol,(void*)IO_TextRider__WriterDesc_WriteBool,(void*)IO_TextRider__WriterDesc_WriteChar,(void*)IO_TextRider__WriterDesc_WriteHex,(void*)IO_TextRider__WriterDesc_WriteInt,(void*)IO_TextRider__WriterDesc_WriteLInt,(void*)IO_TextRider__WriterDesc_WriteLReal,(void*)IO_TextRider__WriterDesc_WriteLRealEng,(void*)IO_TextRider__WriterDesc_WriteLRealFix,(void*)IO_TextRider__WriterDesc_WriteLn,(void*)IO_TextRider__WriterDesc_WriteObject,(void*)IO_TextRider__WriterDesc_WriteReal,(void*)IO_TextRider__WriterDesc_WriteRealEng,(void*)IO_TextRider__WriterDesc_WriteRealFix,(void*)IO_TextRider__WriterDesc_WriteSInt,(void*)IO_TextRider__WriterDesc_WriteSet,(void*)IO_TextRider__WriterDesc_WriteString,(void*)IO_TextRider__WriterDesc_WriteStringRegion}, &_mid, "WriterDesc", 12, 0, RT0__strRecord };
RT0__StructDesc _td_IO_TextRider__1874 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 2, 2, RT0__strArray };
RT0__StructDesc _td_IO_TextRider__2774 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_TextRider__3680 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_TextRider__3929 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_IO_TextRider__5551 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 16, 16, RT0__strArray };
RT0__StructDesc _td_IO_TextRider__7029 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 128, 128, RT0__strArray };
RT0__StructDesc _td_IO_TextRider__7402 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 128, 128, RT0__strArray };
RT0__StructDesc _td_IO_TextRider__7845 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 128, 128, RT0__strArray };
RT0__StructDesc _td_IO_TextRider__8230 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 128, 128, RT0__strArray };
RT0__StructDesc _td_IO_TextRider__8678 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 128, 128, RT0__strArray };
RT0__StructDesc _td_IO_TextRider__9061 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 128, 128, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"IO:TextRider", (RT0__Struct[]) { &_td_IO_TextRider__Writer, &_td_IO_TextRider__WriterDesc, NULL } };

extern void OOC_IO_TextRider_init0() {
  RT0__RegisterModule(&_mid);
  OOC_IO_TextRider_init();
}

/* --- */
