#include <XML/Writer.oh>
#include <Ascii.oh>
#include <Strings.oh>
#include <LongStrings.oh>
#include <IntStr.oh>
#include <RealStr.oh>
static XML_Writer__String XML_Writer__GetString(const OOC_CHAR16 str[], OOC_LEN str_0d);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_Writer__1478 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__String = { (RT0__Struct[]){&_td_XML_Writer__1478}, NULL, &_mid, "String", 4, -1, RT0__strPointer };
RT0__StructDesc _td_XML_Writer__1541 = { (RT0__Struct[]){&_td_XML_Writer__1541}, (void*[]){}, &_mid, NULL, 8, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Writer__1517 = { (RT0__Struct[]){&_td_XML_Writer__1541}, NULL, &_mid, NULL, 8, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__Elements = { (RT0__Struct[]){&_td_XML_Writer__1517}, NULL, &_mid, "Elements", 4, -1, RT0__strPointer };
RT0__StructDesc _td_XML_Writer__Writer = { (RT0__Struct[]){&_td_XML_Writer__WriterDesc}, NULL, &_mid, "Writer", 4, -1, RT0__strPointer };
RT0__StructDesc _td_XML_Writer__WriterDesc = { (RT0__Struct[]){&_td_XML_UnicodeBuffer__OutputDesc,&_td_XML_Writer__WriterDesc}, (void*[]){(void*)XML_UnicodeBuffer__OutputDesc_Flush,(void*)XML_UnicodeBuffer__OutputDesc_Write16,(void*)XML_UnicodeBuffer__OutputDesc_Write16I,(void*)XML_UnicodeBuffer__OutputDesc_Write8,(void*)XML_UnicodeBuffer__OutputDesc_Write8I,(void*)XML_Writer__WriterDesc_AttrBool,(void*)XML_Writer__WriterDesc_AttrInt,(void*)XML_Writer__WriterDesc_AttrStr,(void*)XML_Writer__WriterDesc_AttrString,(void*)XML_Writer__WriterDesc_AttrStringLatin1,(void*)XML_Writer__WriterDesc_AttrURI,(void*)XML_Writer__WriterDesc_CloseStartTag,(void*)XML_Writer__WriterDesc_EmptyTag,(void*)XML_Writer__WriterDesc_EmptyTagLatin1,(void*)XML_Writer__WriterDesc_EndOfText,(void*)XML_Writer__WriterDesc_EndTag,(void*)XML_Writer__WriterDesc_NewLine,(void*)XML_Writer__WriterDesc_SetBaseURI,(void*)XML_Writer__WriterDesc_SetEmptyElementHTML,(void*)XML_Writer__WriterDesc_StartTag,(void*)XML_Writer__WriterDesc_StartTagLatin1,(void*)XML_Writer__WriterDesc_Write,(void*)XML_Writer__WriterDesc_WriteI,(void*)XML_Writer__WriterDesc_WriteLInt,(void*)XML_Writer__WriterDesc_WriteLatin1,(void*)XML_Writer__WriterDesc_WriteLatin1I,(void*)XML_Writer__WriterDesc_WriteRealFix,(void*)XML_Writer__WriterDesc_WriteTextDecl,(void*)XML_Writer__WriterDesc_WriteURI}, &_mid, "WriterDesc", 72, 1, RT0__strRecord };
RT0__StructDesc _td_XML_Writer__1897 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 3, 3, RT0__strArray };
RT0__StructDesc _td_XML_Writer__3648 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__3684 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 256, 256, RT0__strArray };
RT0__StructDesc _td_XML_Writer__4797 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__5357 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__5952 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__6089 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__6266 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1024, 1024, RT0__strArray };
RT0__StructDesc _td_XML_Writer__6503 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_XML_Writer__6683 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 128, 128, RT0__strArray };
RT0__StructDesc _td_XML_Writer__6837 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__7030 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__7894 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__7990 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2048, 1024, RT0__strArray };
RT0__StructDesc _td_XML_Writer__8153 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__8538 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__8572 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2048, 1024, RT0__strArray };
RT0__StructDesc _td_XML_Writer__8740 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__9487 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__9559 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__10298 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__10618 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__10665 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_XML_Writer__10825 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__11043 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__11139 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1024, 1024, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:Writer", (RT0__Struct[]) { &_td_XML_Writer__String, &_td_XML_Writer__Elements, &_td_XML_Writer__Writer, &_td_XML_Writer__WriterDesc, NULL } };

extern void OOC_XML_Writer_init0() {
  RT0__RegisterModule(&_mid);
  OOC_XML_Writer_init();
}

/* --- */
