#include <XML/Writer.oh>
#include <Ascii.oh>
#include <Strings.oh>
#include <LongStrings.oh>
#include <IntStr.oh>
#include <RealStr.oh>
static XML_Writer__String XML_Writer__GetString(const OOC_CHAR16 str[], OOC_LEN str_0d);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_Writer__1483 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__String = { (RT0__Struct[]){&_td_XML_Writer__1483}, NULL, &_mid, "String", 4, -1, RT0__strPointer };
RT0__StructDesc _td_XML_Writer__1546 = { (RT0__Struct[]){&_td_XML_Writer__1546}, (void*[]){}, &_mid, NULL, 8, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Writer__1522 = { (RT0__Struct[]){&_td_XML_Writer__1546}, NULL, &_mid, NULL, 8, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__Elements = { (RT0__Struct[]){&_td_XML_Writer__1522}, NULL, &_mid, "Elements", 4, -1, RT0__strPointer };
RT0__StructDesc _td_XML_Writer__Writer = { (RT0__Struct[]){&_td_XML_Writer__WriterDesc}, NULL, &_mid, "Writer", 4, -1, RT0__strPointer };
RT0__StructDesc _td_XML_Writer__WriterDesc = { (RT0__Struct[]){&_td_XML_UnicodeBuffer__OutputDesc,&_td_XML_Writer__WriterDesc}, (void*[]){(void*)XML_UnicodeBuffer__OutputDesc_Flush,(void*)XML_UnicodeBuffer__OutputDesc_Write16,(void*)XML_UnicodeBuffer__OutputDesc_Write16I,(void*)XML_UnicodeBuffer__OutputDesc_Write8,(void*)XML_UnicodeBuffer__OutputDesc_Write8I,(void*)XML_Writer__WriterDesc_AttrBool,(void*)XML_Writer__WriterDesc_AttrInt,(void*)XML_Writer__WriterDesc_AttrStr,(void*)XML_Writer__WriterDesc_AttrString,(void*)XML_Writer__WriterDesc_AttrStringLatin1,(void*)XML_Writer__WriterDesc_AttrURI,(void*)XML_Writer__WriterDesc_CloseStartTag,(void*)XML_Writer__WriterDesc_EmptyTag,(void*)XML_Writer__WriterDesc_EmptyTagLatin1,(void*)XML_Writer__WriterDesc_EndOfText,(void*)XML_Writer__WriterDesc_EndTag,(void*)XML_Writer__WriterDesc_NewLine,(void*)XML_Writer__WriterDesc_SetBaseURI,(void*)XML_Writer__WriterDesc_SetEmptyElementHTML,(void*)XML_Writer__WriterDesc_StartTag,(void*)XML_Writer__WriterDesc_StartTagLatin1,(void*)XML_Writer__WriterDesc_Write,(void*)XML_Writer__WriterDesc_WriteI,(void*)XML_Writer__WriterDesc_WriteLInt,(void*)XML_Writer__WriterDesc_WriteLatin1,(void*)XML_Writer__WriterDesc_WriteLatin1I,(void*)XML_Writer__WriterDesc_WriteRealFix,(void*)XML_Writer__WriterDesc_WriteTextDecl,(void*)XML_Writer__WriterDesc_WriteURI}, &_mid, "WriterDesc", 68, 1, RT0__strRecord };
RT0__StructDesc _td_XML_Writer__1902 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 3, 3, RT0__strArray };
RT0__StructDesc _td_XML_Writer__3653 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__3689 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 256, 256, RT0__strArray };
RT0__StructDesc _td_XML_Writer__4802 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__5362 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__5957 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__6094 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__6271 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1024, 1024, RT0__strArray };
RT0__StructDesc _td_XML_Writer__6508 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_XML_Writer__6688 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 128, 128, RT0__strArray };
RT0__StructDesc _td_XML_Writer__6842 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__7035 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__7899 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__7995 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2048, 1024, RT0__strArray };
RT0__StructDesc _td_XML_Writer__8158 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__8543 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__8577 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2048, 1024, RT0__strArray };
RT0__StructDesc _td_XML_Writer__8745 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__9492 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__9564 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__10303 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__10623 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__10670 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 32, 32, RT0__strArray };
RT0__StructDesc _td_XML_Writer__10830 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__11048 = { (RT0__Struct[]){&RT0__longchar}, NULL, &_mid, NULL, 2, 1, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__11144 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 1024, 1024, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:Writer", (RT0__Struct[]) { &_td_XML_Writer__String, &_td_XML_Writer__Elements, &_td_XML_Writer__Writer, &_td_XML_Writer__WriterDesc, NULL } };

extern void OOC_XML_Writer_init0() {
  RT0__RegisterModule(&_mid);
  OOC_XML_Writer_init();
}

/* --- */
