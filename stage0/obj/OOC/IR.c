#include <OOC/IR.d>
#include <__oo2c.h>
#include <setjmp.h>

static void OOC_IR__AppendContext(ADT_StringBuffer__StringBuffer buffer, OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)item;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39075)))), &_td_OOC_SymbolTable__DeclarationDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39065)))), 39065);
  goto l7;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39109))+4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l6;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39162))+4);
  i2 = (OOC_INT32)buffer;
  OOC_IR__AppendContext((ADT_StringBuffer__StringBuffer)i2, (OOC_SymbolTable__Item)i1);
l6:
  i1 = (OOC_INT32)buffer;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39213))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 39218))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39213))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39218))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 39222)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39195)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i1, (void*)(_check_pointer(i2, 39222)), i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39238)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i1, 46u);
l7:
  return;
  ;
}

Object__String OOC_IR__TypeName(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;
  ADT_StringBuffer__StringBuffer name;

  i0 = (OOC_INT32)ADT_StringBuffer__New((Object__String)((OOC_INT32)_c0));
  name = (ADT_StringBuffer__StringBuffer)i0;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39635))+4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39682))+4);
  OOC_IR__AppendContext((ADT_StringBuffer__StringBuffer)i0, (OOC_SymbolTable__Item)i2);
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39708))+24);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l26;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39809)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i2) goto l24;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40004)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i2) goto l22;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40067)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i2) goto l20;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40135)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l18;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40194)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i2) goto l16;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 40187)))), 40187);
  goto l27;
l16:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40220)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "RECORD", 7);
  goto l27;
l18:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40160)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "ARRAY", 6);
  goto l27;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40097)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "PROCEDURE", 10);
  goto l27;
l22:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40031)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "POINTER", 8);
  goto l27;
l24:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39903)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "PredefType(", 12);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 39958))+40);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39943)))), ADT_StringBuffer__StringBufferDesc_AppendInt)),ADT_StringBuffer__StringBufferDesc_AppendInt)((ADT_StringBuffer__StringBuffer)i0, i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39974)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, ")", 2);
  goto l27;
l26:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39757))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 39768))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 39773))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39757))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39768))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39773))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 39777)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39739)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(_check_pointer(i2, 39777)), i1);
l27:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40272)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
  return (Object__String)i0;
  ;
}

static void OOC_IR__LogTypeName(const OOC_CHAR8 message__ref[], OOC_LEN message_0d, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(message,OOC_CHAR8 ,message_0d)

  OOC_INITIALIZE_VPAR(message__ref,message,OOC_CHAR8 ,message_0d)
  i0 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_IR__TypeName((OOC_SymbolTable__Type)i0);
  Log__Object((void*)(OOC_INT32)message, message_0d, (Object__Object)i0);
  return;
  ;
}

void OOC_IR__ErrorContextDesc_GetTemplate(OOC_IR__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 40612))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){85,110,100,101,99,108,97,114,101,100,32,105,100,101,110,116,105,102,105,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,105,100,101,110,116,105,102,105,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){78,117,109,98,101,114,32,111,117,116,32,111,102,32,114,97,110,103,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){67,104,97,114,97,99,116,101,114,32,118,97,108,117,101,32,111,117,116,32,111,102,32,114,97,110,103,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,118,97,108,105,100,32,116,121,112,101,32,102,111,114,32,111,112,101,114,97,116,111,114,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){85,110,107,110,111,119,110,32,111,112,101,114,97,116,111,114,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 7:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,99,111,109,112,97,116,105,98,108,101,32,116,121,112,101,115,32,102,111,114,32,111,112,101,114,97,116,111,114,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 8:
    _copy_16((const void*)((OOC_CHAR16[]){68,105,118,105,115,111,114,32,105,115,32,122,101,114,111,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 9:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,105,115,32,110,111,116,32,99,111,110,115,116,97,110,116,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 10:
    _copy_16((const void*)((OOC_CHAR16[]){86,97,108,117,101,32,111,117,116,32,111,102,32,114,97,110,103,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 11:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,97,121,32,110,111,116,32,98,101,32,112,97,115,115,101,100,32,98,121,32,114,101,102,101,114,101,110,99,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 12:
    _copy_16((const void*)((OOC_CHAR16[]){65,114,103,117,109,101,110,116,32,110,111,116,32,99,111,109,112,97,116,105,98,108,101,32,119,105,116,104,32,102,111,114,109,97,108,32,116,121,112,101,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 24:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,110,111,116,32,99,111,109,112,97,116,105,98,108,101,32,119,105,116,104,32,118,97,114,105,97,98,108,101,32,116,121,112,101,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 13:
    _copy_16((const void*)((OOC_CHAR16[]){87,114,111,110,103,32,110,117,109,98,101,114,32,111,102,32,97,114,103,117,109,101,110,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 14:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,116,101,103,101,114,32,99,111,110,115,116,97,110,116,32,105,110,32,116,104,101,32,114,97,110,103,101,32,96,36,123,115,116,97,114,116,125,32,60,61,32,120,32,60,32,36,123,101,110,100,125,39,32,114,101,113,117,105,114,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 15:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,97,110,32,97,114,114,97,121,32,118,97,108,117,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 16:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,110,97,109,101,32,101,120,112,101,99,116,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 17:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,109,117,115,116,32,98,101,32,97,110,32,101,120,116,101,110,115,105,111,110,32,111,102,32,116,104,101,32,108,101,102,116,32,111,112,101,114,97,110,100,39,115,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 18:
    _copy_16((const void*)((OOC_CHAR16[]){77,73,78,47,77,65,88,32,105,115,32,110,111,116,32,97,112,112,108,105,99,97,98,108,101,32,116,111,32,116,104,105,115,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 19:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,105,110,116,101,103,101,114,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 20:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,114,101,99,111,114,100,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 21:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,112,111,105,110,116,101,114,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 22:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,116,121,112,101,32,66,79,79,76,69,65,78,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 23:
    _copy_16((const void*)((OOC_CHAR16[]){79,112,101,114,97,116,111,114,32,109,97,121,32,110,111,116,32,98,101,32,97,112,112,108,105,101,100,32,116,111,32,102,117,110,99,116,105,111,110,32,114,101,115,117,108,116,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 25:
    _copy_16((const void*)((OOC_CHAR16[]){69,88,73,84,32,111,117,116,115,105,100,101,32,111,102,32,76,79,79,80,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 26:
    _copy_16((const void*)((OOC_CHAR16[]){83,101,108,101,99,116,32,101,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,105,110,116,101,103,101,114,32,111,114,32,99,104,97,114,97,99,116,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 27:
    _copy_16((const void*)((OOC_CHAR16[]){76,97,98,101,108,32,110,111,116,32,105,110,32,116,121,112,101,32,111,102,32,115,101,108,101,99,116,32,101,120,112,114,101,115,115,105,111,110,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 28:
    _copy_16((const void*)((OOC_CHAR16[]){76,97,98,101,108,32,97,108,114,101,97,100,121,32,105,110,32,117,115,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 29:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,109,117,115,116,32,98,101,32,97,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 30:
    _copy_16((const void*)((OOC_CHAR16[]){83,116,101,112,32,118,97,108,117,101,32,110,111,116,32,105,110,32,116,121,112,101,32,111,102,32,108,111,111,112,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 31:
    _copy_16((const void*)((OOC_CHAR16[]){83,116,101,112,32,118,97,108,117,101,32,109,117,115,116,32,110,111,116,32,98,101,32,122,101,114,111,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 32:
    _copy_16((const void*)((OOC_CHAR16[]){82,69,84,85,82,78,32,109,117,115,116,32,110,111,116,32,112,114,111,118,105,100,101,32,97,32,114,101,115,117,108,116,32,118,97,108,117,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 33:
    _copy_16((const void*)((OOC_CHAR16[]){82,69,84,85,82,78,32,109,117,115,116,32,112,114,111,118,105,100,101,32,97,32,114,101,115,117,108,116,32,118,97,108,117,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 34:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,118,97,114,105,97,98,108,101,32,105,115,32,114,101,97,100,45,111,110,108,121,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 35:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,109,117,115,116,32,98,101,32,97,32,112,114,111,99,101,100,117,114,101,32,100,101,115,105,103,110,97,116,111,114,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 36:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,105,115,32,97,32,102,117,110,99,116,105,111,110,32,112,114,111,99,101,100,117,114,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 37:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,105,115,32,110,111,116,32,97,32,102,117,110,99,116,105,111,110,32,112,114,111,99,101,100,117,114,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 38:
    _copy_16((const void*)((OOC_CHAR16[]){84,111,111,32,102,101,119,32,97,114,103,117,109,101,110,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 39:
    _copy_16((const void*)((OOC_CHAR16[]){84,111,111,32,109,97,110,121,32,97,114,103,117,109,101,110,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 40:
    _copy_16((const void*)((OOC_CHAR16[]){65,114,103,117,109,101,110,116,32,110,111,116,32,99,111,109,112,97,116,105,98,108,101,32,119,105,116,104,32,102,111,114,109,97,108,32,86,65,82,32,112,97,114,97,109,101,116,101,114,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 41:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,116,101,114,110,97,108,32,101,114,114,111,114,58,32,78,97,109,101,32,114,101,100,105,114,101,99,116,105,111,110,32,102,97,105,108,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 42:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,112,97,114,97,109,101,116,101,114,32,105,115,32,114,101,97,100,45,111,110,108,121,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 43:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,118,97,114,105,97,98,108,101,32,104,97,115,32,110,111,32,100,121,110,97,109,105,99,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 44:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,110,117,109,101,114,105,99,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 45:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,97,32,99,104,97,114,97,99,116,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 46:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,114,101,97,108,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 47:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,104,97,115,32,110,111,32,102,105,120,101,100,32,115,105,122,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 48:
    _copy_16((const void*)((OOC_CHAR16[]){65,114,103,117,109,101,110,116,32,109,117,115,116,32,98,101,32,97,32,99,104,97,114,97,99,116,101,114,32,97,114,114,97,121,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 49:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,115,101,116,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 50:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,109,117,115,116,32,98,101,32,97,32,112,111,105,110,116,101,114,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 51:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,101,120,112,114,101,115,115,105,111,110,32,104,97,115,32,110,111,32,97,100,100,114,101,115,115,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 52:
    _copy_16((const void*)((OOC_CHAR16[]){83,105,122,101,32,109,105,115,109,97,116,99,104,32,98,101,116,119,101,101,110,32,116,121,112,101,32,97,110,100,32,101,120,112,114,101,115,115,105,111,110,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 53:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,85,110,117,115,101,100,32,111,98,106,101,99,116,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 54:
    _copy_16((const void*)((OOC_CHAR16[]){76,101,110,103,116,104,32,111,102,32,116,104,105,115,32,97,114,114,97,121,32,118,97,108,117,101,32,99,97,110,110,111,116,32,98,101,32,100,101,116,101,114,109,105,110,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 55:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,118,97,114,105,97,98,108,101,32,104,97,115,32,110,111,32,116,121,112,101,32,116,97,103,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 56:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,110,110,111,116,32,99,114,101,97,116,101,32,97,110,32,105,110,115,116,97,110,99,101,32,97,110,32,97,98,115,116,114,97,99,116,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 57:
    _copy_16((const void*)((OOC_CHAR16[]){65,98,115,116,114,97,99,116,32,112,114,111,99,101,100,117,114,101,32,99,97,110,110,111,116,32,104,97,118,101,32,97,32,66,69,71,73,78,32,112,97,114,116,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 58:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,108,108,101,100,32,112,114,111,99,101,100,117,114,101,32,105,115,32,100,101,99,108,97,114,101,100,32,97,98,115,116,114,97,99,116,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 59:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,108,108,101,100,32,112,114,111,99,101,100,117,114,101,32,110,111,116,32,100,101,102,105,110,101,100,32,105,110,32,98,97,115,101,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 60:
    _copy_16((const void*)((OOC_CHAR16[]){83,117,112,101,114,32,99,97,108,108,32,99,97,110,32,111,110,108,121,32,97,112,112,108,121,32,116,111,32,116,104,101,32,100,105,114,101,99,116,32,98,97,115,101,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 61:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,82,101,100,117,110,100,97,110,116,32,116,121,112,101,32,116,101,115,116,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 62:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,105,115,32,110,111,116,32,97,110,32,101,120,116,101,110,115,105,111,110,32,111,102,32,96,69,120,99,101,112,116,105,111,110,46,69,120,99,101,112,116,105,111,110,39,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 63:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,99,101,112,116,105,111,110,32,96,36,123,109,111,100,117,108,101,125,46,36,123,110,97,109,101,125,39,32,110,101,105,116,104,101,114,32,99,97,117,103,104,116,32,110,111,114,32,112,97,115,115,101,100,32,117,112,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 64:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,69,120,99,101,112,116,105,111,110,32,96,36,123,109,111,100,117,108,101,125,46,36,123,110,97,109,101,125,39,32,110,111,116,32,99,97,117,103,104,116,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 65:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,85,110,114,101,97,99,104,97,98,108,101,32,103,117,97,114,100,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 66:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,84,121,112,101,32,109,97,116,99,104,101,115,32,110,111,110,101,32,111,102,32,116,104,101,32,114,97,105,115,101,100,32,101,120,99,101,112,116,105,111,110,115,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 67:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,116,101,115,116,32,114,101,113,117,105,114,101,115,32,115,116,97,116,105,99,32,116,121,112,101,32,105,110,115,116,97,110,99,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 69:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,105,115,32,110,111,116,32,97,32,112,97,114,97,109,101,116,114,105,99,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 70:
    _copy_16((const void*)((OOC_CHAR16[]){84,111,111,32,102,101,119,32,116,121,112,101,32,97,114,103,117,109,101,110,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 71:
    _copy_16((const void*)((OOC_CHAR16[]){84,111,111,32,109,97,110,121,32,116,121,112,101,32,97,114,103,117,109,101,110,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 72:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,105,115,32,110,111,116,32,97,110,32,101,120,116,101,110,115,105,111,110,32,111,102,32,116,104,101,32,116,121,112,101,32,98,111,117,110,100,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 73:
    _copy_16((const void*)((OOC_CHAR16[]){78,111,116,32,97,32,114,101,99,111,114,100,32,112,111,105,110,116,101,114,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  case 74:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,78,111,32,99,97,108,108,32,116,111,32,116,104,101,32,98,97,115,101,32,116,121,112,101,39,115,32,73,78,73,84,32,112,114,111,99,101,100,117,114,101,0}),(void*)(OOC_INT32)t,128);
    goto l76;
  default:
    _failed_case(i1, 40604);
    goto l76;
  }
l76:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45859)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

static void OOC_IR__InitGuardedVar(OOC_IR__GuardedVar gv, OOC_SymbolTable__VarDecl var, OOC_SymbolTable__Name name, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT8 exportMark;

  i0 = (OOC_INT32)var;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 46209))+28);
  exportMark = i1;
  i2 = i1==0;
  if (!i2) goto l4;
  exportMark = 2;
  i1=2;
l4:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 46361))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46415))+32);
  i4 = (OOC_INT32)gv;
  i5 = (OOC_INT32)name;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i4, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Name)i5, i2, i1, (OOC_Doc__Document)i3);
  *(OOC_INT32*)((_check_pointer(i4, 46434))+48) = i0;
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i4, 46453))+52) = i0;
  return;
  ;
}

static OOC_IR__GuardedVar OOC_IR__NewGuardedVar(OOC_SymbolTable__VarDecl var, OOC_SymbolTable__Name name, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__GuardedVar.baseTypes[0]);
  i1 = (OOC_INT32)var;
  i2 = (OOC_INT32)name;
  i3 = (OOC_INT32)type;
  OOC_IR__InitGuardedVar((OOC_IR__GuardedVar)i0, (OOC_SymbolTable__VarDecl)i1, (OOC_SymbolTable__Name)i2, (OOC_SymbolTable__Type)i3);
  return (OOC_IR__GuardedVar)i0;
  ;
}

OOC_SymbolTable__Module OOC_IR__GuardedVarDesc_Module(OOC_IR__GuardedVar gv) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)gv;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46802))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46802))+48);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46807)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  return (OOC_SymbolTable__Module)i0;
  ;
}

void OOC_IR__InitNode(OOC_IR__Node n, OOC_Scanner_SymList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)n;
  i1 = (OOC_INT32)sym;
  *(OOC_INT32*)(_check_pointer(i0, 46993)) = i1;
  return;
  ;
}

void OOC_IR__NodeDesc_Accept(OOC_IR__Node node, OOC_IR__Visitor v) {

  return;
  ;
}

OOC_IR__Expression OOC_IR__ConstFoldDesc_TryConstFold(OOC_IR__ConstFold c, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)c;
  *(OOC_INT32*)((_check_pointer(i0, 47406))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)expr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47430)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47450))+4);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47510))+4);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  return (OOC_IR__Expression)i1;
l4:
  _failed_function(47121); return 0;
  ;
}

void OOC_IR__BuilderDesc_ErrSym(OOC_IR__Builder b, OOC_INT32 code, OOC_Scanner_SymList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)OOC_IR__irContext;
  i1 = code;
  i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
  e = (Msg__Msg)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47698))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 47709));
  i3 = (OOC_INT32)sym;
  i2 = i3!=i2;
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i3, 47795))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47769)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i3, 47837))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47810)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i3, 47882))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47853)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47900))+8);
  OOC_Error__ListDesc_Append((OOC_Error__List)i2, (Msg__Msg)i0);
l4:
  *(OOC_INT32*)((_check_pointer(i1, 47937))+36) = i0;
  return;
  ;
}

void OOC_IR__BuilderDesc_SetNameToType(OOC_IR__Builder b, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Module module;
  OOC_CHAR8 name[256];

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48222))+24);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l31;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48678)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48705)))), &_td_OOC_SymbolTable__TypeNameDesc);
  if (i1) goto l29;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48855)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48911)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48972)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49024)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49078)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i1) goto l19;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49135)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l17;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49129)))), 49129);
  goto l40;
l17:
  _copy_8((const void*)"unknown",(void*)(OOC_INT32)name,256);
  goto l40;
l19:
  _copy_8((const void*)"TYPE_VAR",(void*)(OOC_INT32)name,256);
  goto l40;
l21:
  _copy_8((const void*)"RECORD",(void*)(OOC_INT32)name,256);
  goto l40;
l23:
  _copy_8((const void*)"ARRAY",(void*)(OOC_INT32)name,256);
  goto l40;
l25:
  _copy_8((const void*)"PROCEDURE",(void*)(OOC_INT32)name,256);
  goto l40;
l27:
  _copy_8((const void*)"POINTER",(void*)(OOC_INT32)name,256);
  goto l40;
l29:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48740))+40);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48747))+12);
  _copy_8((const void*)(_check_pointer(i1, 48751)),(void*)(OOC_INT32)name,256);
  Strings__Append(".", 2, (void*)(OOC_INT32)name, 256);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48823))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48829))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48823))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48829))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 48833)), 0);
  Strings__Append((void*)(_check_pointer(i1, 48833)), i0, (void*)(OOC_INT32)name, 256);
  goto l40;
l31:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48266))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48266))+24);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48277)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i2);
  module = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48304))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 48309))+12);
  i2 = _check_pointer(i2, 48313);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT8, 48313)));
  i2 = i2==35u;
  if (i2) goto l34;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48333)))), &_td_OOC_SymbolTable__TypeVarDesc);
  
  goto l36;
l34:
  i2=1u;
l36:
  if (i2) goto l38;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48531))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48536))+12);
  _copy_8((const void*)(_check_pointer(i1, 48540)),(void*)(OOC_INT32)name,256);
  Strings__Append(".", 2, (void*)(OOC_INT32)name, 256);
  goto l39;
l38:
  _copy_8((const void*)"",(void*)(OOC_INT32)name,256);
l39:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48621))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48632))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48637))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48621))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48632))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48637))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 48641)), 0);
  Strings__Append((void*)(_check_pointer(i1, 48641)), i0, (void*)(OOC_INT32)name, 256);
l40:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49207))+36);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49207))+36);
  i2 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)name, 256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49217)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i2);
  return;
  ;
}

static OOC_CHAR8 OOC_IR__GetPragmaValue(OOC_IR__Builder b, Config_Section_Options__Option pragma, OOC_INT32 charPos) {
  register OOC_INT32 i0,i1,i2;
  Config__Variable value;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)pragma;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49443))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49474))+4);
  i2 = charPos;
  i0 = (OOC_INT32)OOC_Config_Pragmas__HistoryDesc_GetValue((OOC_Config_Pragmas__History)i0, (Object__String)i1, i2);
  value = (Config__Variable)i0;
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49515)))), &_td_Config__BooleanVarDesc, 49515)), 49526));
  return i0;
  ;
}

void OOC_IR__BuilderDesc_WarnSym(OOC_IR__Builder b, OOC_INT32 code, OOC_Scanner_SymList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)OOC_IR__irContext;
  i1 = code;
  i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
  e = (Msg__Msg)i0;
  i1 = (OOC_INT32)sym;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 49724))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49698)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 49764))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49737)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 49807))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49778)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i2);
  i2 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i2, 49949))+36) = i0;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 50021))+16);
  i3 = (OOC_INT32)OOC_Config_StdPragmas__warnings;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 50039))+8);
  OOC_Error__ListDesc_Append((OOC_Error__List)i1, (Msg__Msg)i0);
l4:
  return;
  ;
}

void OOC_IR__BuilderDesc_WarnName(OOC_IR__Builder b, OOC_INT32 code, OOC_SymbolTable__Name name) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50199))+12);
  i1 = _check_pointer(i1, 50203);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 50203)));
  i1 = i1!=45u;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT32*)(_check_pointer(i0, 50266));
  i2 = (OOC_INT32)OOC_Config_StdPragmas__warnings;
  i3 = (OOC_INT32)b;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i3, (Config_Section_Options__Option)i2, i1);
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)OOC_IR__irContext;
  i2 = code;
  i1 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i1, i2);
  e = (Msg__Msg)i1;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 50458));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50431)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 50501))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50473)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "line", 5, i2);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 50547))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50517)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "column", 7, i0);
  i0 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50565))+8);
  OOC_Error__ListDesc_Append((OOC_Error__List)i2, (Msg__Msg)i1);
  *(OOC_INT32*)((_check_pointer(i0, 50595))+36) = i1;
l7:
  return;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_ErrExpr(OOC_IR__Builder b, OOC_INT32 code, OOC_Scanner_SymList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = code;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50728)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, i1, (OOC_Scanner_SymList__Symbol)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50760))+20);
  return (OOC_IR__Const)i0;
  ;
}

OOC_SymbolTable__Name OOC_IR__BuilderDesc_GetName(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Name name;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  name = (OOC_SymbolTable__Name)i0;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50923))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 50933))+16);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 50943))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 50954))+24);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i1);
  return (OOC_SymbolTable__Name)i0;
  ;
}

OOC_SymbolTable__Name OOC_IR__BuilderDesc_GetName2(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  OOC_Scanner_InputBuffer__CharArray s;
  OOC_SymbolTable__Name name;

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i0+1));
  s = (OOC_Scanner_InputBuffer__CharArray)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 51182)), 0);
  _copy_8((const void*)(OOC_INT32)str,(void*)(_check_pointer(i0, 51182)),i1);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  name = (OOC_SymbolTable__Name)i1;
  i2 = (OOC_INT32)sym;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 51237))+16);
  i4 = *(OOC_INT32*)((_check_pointer(i2, 51247))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 51258))+24);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i0, i3, i4, i2);
  return (OOC_SymbolTable__Name)i1;
  ;
}

OOC_SymbolTable__Type OOC_IR__BuilderDesc_AssertType(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51559)))), &_td_OOC_IR__TypeRefDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 51679));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51648)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 16, (OOC_Scanner_SymList__Symbol)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51703))+4);
  return (OOC_SymbolTable__Type)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51589))+12);
  return (OOC_SymbolTable__Type)i0;
l4:
  _failed_function(51325); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertBoolean(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51987))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51994)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52027))+4);
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52038)))), &_td_OOC_SymbolTable__PredefTypeDesc, 52038)), 52049))+40);
  i1 = i1==0;
  
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 52146));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52119)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 22, (OOC_Scanner_SymList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l8;
l7:
  return (OOC_IR__Expression)i0;
l8:
  _failed_function(51761); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_Fold(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52265))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52265))+12);
  i2 = (OOC_INT32)expr;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52275)))), OOC_IR__ConstFoldDesc_TryConstFold)),OOC_IR__ConstFoldDesc_TryConstFold)((OOC_IR__ConstFold)i0, (OOC_IR__Expression)i2);
  return (OOC_IR__Expression)i0;
  ;
}

static OOC_CHAR8 OOC_IR__IsPredefType(OOC_SymbolTable__Type type, OOC_INT16 id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52398)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52429)))), &_td_OOC_SymbolTable__PredefTypeDesc, 52429)), 52440))+40);
  i1 = id;
  i0 = i0==i1;
  
l4:
  return i0;
  ;
}

void OOC_IR__BuilderDesc_CheckFunctionOp(OOC_IR__Builder b, OOC_IR__Expression expr, OOC_Scanner_SymList__Symbol op) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53795)))), &_td_OOC_IR__PredefProcDesc);
  if (i1) goto l3;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53819)))), &_td_OOC_IR__CallDesc);
  
  goto l5;
l3:
  i0=1u;
l5:
  if (!i0) goto l7;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)op;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53838)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 23, (OOC_Scanner_SymList__Symbol)i1);
l7:
  return;
  ;
}

void OOC_IR__InitExpression(OOC_IR__Expression expr, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitNode((OOC_IR__Node)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 54128))+4) = i1;
  return;
  ;
}

static void OOC_IR__InitConst(OOC_IR__Const _const, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, Object_Boxed__Object value) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)_const;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitExpression((OOC_IR__Expression)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 54437))+8) = i1;
  return;
  ;
}

static OOC_IR__Const OOC_IR__NewConst(OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, Object_Boxed__Object value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)type;
  _assert((i0!=(OOC_INT32)0), 127, 54607);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)value;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Const.baseTypes[0]);
  OOC_IR__InitConst((OOC_IR__Const)i3, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)i2);
  return (OOC_IR__Const)i3;
  ;
}

void OOC_IR__VisitorDesc_VisitConst(OOC_IR__Visitor v, OOC_IR__Const _const) {

  return;
  ;
}

void OOC_IR__ConstDesc_Accept(OOC_IR__Const _const, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)_const;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54861)))), OOC_IR__VisitorDesc_VisitConst)),OOC_IR__VisitorDesc_VisitConst)((OOC_IR__Visitor)i0, (OOC_IR__Const)i1);
  return;
  ;
}

Object__String OOC_IR__ConstDesc_ToString(OOC_IR__Const _const) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_const;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54964))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55031))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55031))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55038)))), Object_Boxed__ObjectDesc_ToString)),Object_Boxed__ObjectDesc_ToString)((Object_Boxed__Object)i0);
  return (Object__String)i0;
  goto l4;
l3:
  return (Object__String)((OOC_INT32)_c1);
l4:
  _failed_function(54922); return 0;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_NewConst(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, Object_Boxed__Object value) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)value;
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  return (OOC_IR__Const)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewStringConst(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55340))+8);
  i1 = _check_pointer(i1, 55345);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(2, i2, OOC_UINT8, 55345)));
  i1 = i1!=0u;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55361))+8);
  i1 = _check_pointer(i1, 55366);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(3, i2, OOC_UINT8, 55366)));
  i1 = i1==0u;
  
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(13);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55807))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55807))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 55812)), 0);
  i2 = (OOC_INT32)Object_Boxed__ParseString((void*)(_check_pointer(i2, 55812)), i3);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
  goto l8;
l7:
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55680))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55680))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 55685)), 0);
  i2 = (OOC_INT32)Object_Boxed__ParseString((void*)(_check_pointer(i2, 55685)), i3);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
l8:
  _failed_function(55278); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIntConst10(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;
  Object_BigInt__BigInt v;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55979))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55979))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 55984)), 0);
  i1 = (OOC_INT32)Object_BigInt__NewLatin1((void*)(_check_pointer(i1, 55984)), i2, 10);
  v = (Object_BigInt__BigInt)i1;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i1 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 56021)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 3, (OOC_Scanner_SymList__Symbol)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 56069))+20);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(55872); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIntConst16(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 epos;

  epos = 0;
  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56328))+8);
  i1 = _check_pointer(i1, 56332);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 56332)));
  i1 = i1!=72u;
  if (i1) goto l3;
  i1=0;
  goto l9;
l3:
  i1=0;
l4_loop:
  i1 = i1+1;
  epos = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56328))+8);
  i2 = _check_pointer(i2, 56332);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 56332)));
  i2 = i2!=72u;
  if (i2) goto l4_loop;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56410))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56410))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 56414)), 0);
  i1 = (OOC_INT32)Object_BigInt__NewLatin1Region((void*)(_check_pointer(i2, 56414)), i3, 0, i1, 16);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_AssertConst(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56813)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 56934));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 56902)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 9, (OOC_Scanner_SymList__Symbol)i0);
  return (OOC_IR__Const)i0;
  goto l4;
l3:
  return (OOC_IR__Const)i0;
l4:
  _failed_function(56532); return 0;
  ;
}

OOC_INT32 OOC_IR__BuilderDesc_AssertIntConst(OOC_IR__Builder b, OOC_IR__Expression expr, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__Const _const;
  OOC_INT32 v;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57500)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  _const = (OOC_IR__Const)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57539))+20);
  i2 = i1!=i2;
  if (!i2) goto l20;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 57589))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  if (!i2) goto l16;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 57620))+8);
  i2 = Object_BigInt__BigIntDesc_ToLongInt((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 57635)))), &_td_Object_BigInt__BigIntDesc, 57635)));
  v = i2;
  i3 = start;
  i3 = i3<=i2;
  if (i3) goto l7;
  i3=0u;
  goto l13;
l7:
  i3 = end;
  i4 = i3==(-2147483647-1);
  if (i4) goto l10;
  i3 = i2<i3;
  
  goto l13;
l10:
  i3=1u;
l13:
  if (!i3) goto l16;
  return i2;
l16:
  i2 = start;
  i3 = end;
  i4 = i2<i3;
  if (!i4) goto l20;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 57894));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57858)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 14, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57911))+36);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57911))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57922)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i4, "start", 6, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57964))+36);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57964))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57975)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "end", 4, i3);
l20:
  i0 = start;
  return i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertInteger(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_BigInt__BigInt v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58348))+4);
  i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58378))+20);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58428));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58404)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 19, (OOC_Scanner_SymList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  v = (Object_BigInt__BigInt)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58501));
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertReal(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_Boxed__LongReal v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58868))+4);
  i1 = OOC_SymbolTable_TypeRules__IsRealType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58898))+20);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58945));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58924)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 46, (OOC_Scanner_SymList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewLongReal(1.0000000000000000);
  v = (Object_Boxed__LongReal)i1;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 59022));
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertNumeric(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_BigInt__BigInt v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59398))+4);
  i1 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59428))+20);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 59478));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59454)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 44, (OOC_Scanner_SymList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  v = (Object_BigInt__BigInt)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 59551));
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertChar(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_Boxed__String v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59912))+4);
  i1 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59942))+20);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 59994));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59968)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 45, (OOC_Scanner_SymList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewString((Object__String)((OOC_INT32)_c2));
  v = (Object_Boxed__String)i1;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 60071));
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertSet(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_Boxed__Set v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 60397))+4);
  i1 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 60427))+20);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 60473));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60453)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 49, (OOC_Scanner_SymList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewSet(0u);
  v = (Object_Boxed__Set)i1;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(10);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 60546));
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewRealConst(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_INT16 type) {
  register OOC_INT32 i0,i1,i2;
  Object_Boxed__Object v;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 60787))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 60787))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 60792)), 0);
  i1 = (OOC_INT32)Object_Boxed__ParseLongRealLiteral((void*)(_check_pointer(i1, 60792)), i2);
  v = (Object_Boxed__Object)i1;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = type;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i2);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i1 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60825)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 3, (OOC_Scanner_SymList__Symbol)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 60873))+20);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(60651); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewCharConst16(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 v;
  auto OOC_INT32 OOC_IR__BuilderDesc_NewCharConst16_ValueOf(const OOC_CHAR8 str[], OOC_LEN str_0d);
    
    OOC_INT32 OOC_IR__BuilderDesc_NewCharConst16_ValueOf(const OOC_CHAR8 str[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 i;
      OOC_INT32 hexCount;
      OOC_INT32 ord;
      auto OOC_INT32 OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(OOC_CHAR8 ch);
      auto OOC_CHAR8 OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexToInt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_CHAR8 end, OOC_INT32 *result);
        
        OOC_INT32 OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(OOC_CHAR8 ch) {
          register OOC_INT32 i0;

          i0 = ch;
          i0 = _cap(i0);
          switch (i0) {
          case 48u ... 57u:
            return (i0-48);
            goto l5;
          case 65u ... 70u:
            return (i0+(-55));
            goto l5;
          default:
            return (-1);
            goto l5;
          }
l5:
          _failed_function(61223); return 0;
          ;
        }

        
        OOC_CHAR8 OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexToInt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_CHAR8 end, OOC_INT32 *result) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

          OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
          *result = 0;
          i = 0;
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 61617)));
          i1 = end;
          i0 = i0!=i1;
          if (!i0) goto l11;
          i0=0;
l3_loop:
          i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 61673)));
          i2 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i2);
          i3 = *result;
          i2 = ((2147483647-i2)>>4)<i3;
          if (!i2) goto l6;
          return 0u;
l6:
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 61784)));
          i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i0);
          *result = ((i3*16)+i0);
          i0 = i;
          i0 = i0+1;
          i = i0;
          i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 61617)));
          i2 = i2!=i1;
          if (i2) goto l3_loop;
l11:
          return 1u;
          ;
        }


      i = 0;
      hexCount = 0;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 61921)));
      i0 = i0!=0u;
      if (i0) goto l3;
      i0=0;i1=0;
      goto l13;
l3:
      i0=0;i1=0;
l4_loop:
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 61959)));
      i2 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i2);
      i2 = i2>=0;
      if (!i2) goto l8;
      i1 = i1+1;
      hexCount = i1;
      
l8:
      i0 = i0+1;
      i = i0;
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 61921)));
      i2 = i2!=0u;
      if (i2) goto l4_loop;
l13:
      i2 = i0==3;
      if (i2) goto l16;
      i2=0u;
      goto l18;
l16:
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 62063)));
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 62072)));
      i2 = i2==i3;
      
l18:
      if (i2) goto l20;
      i2=0u;
      goto l26;
l20:
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 62086)));
      i2 = i2==34u;
      if (i2) goto l23;
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 62104)));
      i2 = i2==39u;
      
      goto l26;
l23:
      i2=1u;
l26:
      if (i2) goto l52;
      i2 = i0>=2;
      if (i2) goto l30;
      i2=0u;
      goto l32;
l30:
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 62234)));
      i2 = i2==88u;
      
l32:
      if (i2) goto l34;
      i0=0u;
      goto l36;
l34:
      i0 = (i1+1)==i0;
      
l36:
      if (i0) goto l38;
      return (-1);
      goto l53;
l38:
      i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexToInt((void*)(OOC_INT32)str, str_0d, 88u, (void*)(OOC_INT32)&ord);
      if (i0) goto l41;
      i0=0u;
      goto l43;
l41:
      i0 = ord;
      i0 = 0<=i0;
      
l43:
      if (i0) goto l45;
      i0=0u;
      goto l47;
l45:
      i0 = ord;
      i0 = i0<=1114111;
      
l47:
      if (i0) goto l49;
      return (-1);
      goto l53;
l49:
      i0 = ord;
      return i0;
      goto l53;
l52:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, str_0d, OOC_UINT8, 62202)));
      return i0;
l53:
      _failed_function(61114); return 0;
      ;
    }


  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62701))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62701))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 62706)), 0);
  i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf((void*)(_check_pointer(i1, 62706)), i0);
  v = i0;
  i1 = i0<0;
  if (i1) goto l11;
  i1 = i0<=255;
  if (i1) goto l9;
  i1 = i0<=65535;
  if (i1) goto l7;
  i0 = (OOC_INT32)Object__NewUCS4Char(i0);
  i1=i0;i0=3;
  goto l10;
l7:
  i0 = (OOC_INT32)Object__NewUCS4Char(i0);
  i1=i0;i0=2;
  goto l10;
l9:
  i0 = (OOC_INT32)Object__NewLatin1Char(i0);
  i1=i0;i0=1;
l10:
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i0);
  i1 = (OOC_INT32)Object_Boxed__NewString((Object__String)i1);
  i2 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l12;
l11:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62737)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 4, (OOC_Scanner_SymList__Symbol)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62788))+20);
  return (OOC_IR__Expression)i0;
l12:
  _failed_function(61000); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewNil(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(16);
  i1 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)(OOC_INT32)0);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSize(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression type) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Type t;
  OOC_INT32 size;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63537)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  t = (OOC_SymbolTable__Type)i2;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 63565))+32);
  i3 = i3<0;
  if (i3) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i2, 63661))+32);
  size = i1;
  
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 63613));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63588)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 47, (OOC_Scanner_SymList__Symbol)i1);
  size = 1;
  i1=1;
l4:
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)Object_BigInt__NewInt(i1);
  i3 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63689)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_GetOne(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63876)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
  return (OOC_IR__Const)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_ValidSetElement(OOC_IR__Builder b, OOC_IR__Expression expr, OOC_SymbolTable__Type set) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Object_Boxed__Object val;
  Object_BigInt__BigInt min;
  Object_BigInt__BigInt max;
  Object_BigInt__BigInt element;
  auto OOC_IR__Expression OOC_IR__BuilderDesc_ValidSetElement_MinElement(void);
    
    OOC_IR__Expression OOC_IR__BuilderDesc_ValidSetElement_MinElement(void) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)expr;
      i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(4);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 64630));
      i3 = (OOC_INT32)min;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64616)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i3);
      return (OOC_IR__Expression)i0;
      ;
    }


  i0 = (OOC_INT32)set;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetMin((OOC_SymbolTable__Type)i0);
  val = (Object_Boxed__Object)i1;
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64751)))), &_td_Object_BigInt__BigIntDesc, 64751);
  min = (Object_BigInt__BigInt)i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetMax((OOC_SymbolTable__Type)i0);
  val = (Object_Boxed__Object)i0;
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64809)))), &_td_Object_BigInt__BigIntDesc, 64809);
  max = (Object_BigInt__BigInt)i0;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)expr;
  i3 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i2, (OOC_IR__Expression)i3);
  expr = (OOC_IR__Expression)i3;
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 64868)))), &_td_OOC_IR__ConstDesc);
  if (!i4) goto l10;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 64900))+8);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 64914)))), &_td_Object_BigInt__BigIntDesc, 64914);
  element = (Object_BigInt__BigInt)i4;
  i5 = Object_BigInt__BigIntDesc_Cmp((Object_BigInt__BigInt)i4, (Object__Object)i1);
  i5 = i5<0;
  if (i5) goto l5;
  i4 = Object_BigInt__BigIntDesc_Cmp((Object_BigInt__BigInt)i4, (Object__Object)i0);
  i4 = i4>0;
  
  goto l7;
l5:
  i4=1u;
l7:
  if (!i4) goto l10;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 65030));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 64995)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 14, (OOC_Scanner_SymList__Symbol)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 65047))+36);
  i1 = Object_BigInt__BigIntDesc_ToLongInt((Object_BigInt__BigInt)i1);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 65047))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 65058)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i4, "start", 6, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 65110))+36);
  i0 = Object_BigInt__BigIntDesc_ToLongInt((Object_BigInt__BigInt)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 65110))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 65121)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i2, "end", 4, (i0+1));
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_ValidSetElement_MinElement();
  return (OOC_IR__Expression)i0;
l10:
  i0 = (OOC_INT32)expr;
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__InitOperator(OOC_IR__Operator op, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitExpression((OOC_IR__Expression)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  return;
  ;
}

static void OOC_IR__InitAbs(OOC_IR__Abs abs, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression operand) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)operand;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65714))+4);
  i2 = (OOC_INT32)abs;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 65730))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewAbs(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression operand) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Abs.baseTypes[0]);
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)operand;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertNumeric((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  OOC_IR__InitAbs((OOC_IR__Abs)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1);
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitAbs(OOC_IR__Visitor v, OOC_IR__Abs abs) {

  return;
  ;
}

void OOC_IR__AbsDesc_Accept(OOC_IR__Abs abs, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)abs;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66099)))), OOC_IR__VisitorDesc_VisitAbs)),OOC_IR__VisitorDesc_VisitAbs)((OOC_IR__Visitor)i0, (OOC_IR__Abs)i1);
  return;
  ;
}

static void OOC_IR__InitAdr(OOC_IR__Adr adr, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(12);
  i1 = (OOC_INT32)adr;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)design;
  *(OOC_INT32*)((_check_pointer(i1, 66370))+8) = i0;
  return;
  ;
}

OOC_IR__Adr OOC_IR__BuilderDesc_NewAdr(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2;
  OOC_IR__Adr adr;
  auto OOC_IR__Expression OOC_IR__BuilderDesc_NewAdr_AssertAddressable(OOC_IR__Expression expr);
    
    OOC_IR__Expression OOC_IR__BuilderDesc_NewAdr_AssertAddressable(OOC_IR__Expression expr) {
      register OOC_INT32 i0,i1;
      OOC_IR__Expression e;
      OOC_CHAR8 hasAddress;
      OOC_CHAR8 dummy;

      i0 = (OOC_INT32)expr;
      e = (OOC_IR__Expression)i0;
      hasAddress = 1u;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66688)))), &_td_OOC_IR__VarDesc);
      if (i1) goto l30;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66706)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l28;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66726)))), &_td_OOC_IR__IndexDesc);
      if (i1) goto l26;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66746)))), &_td_OOC_IR__SelectFieldDesc);
      if (i1) goto l24;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66772)))), &_td_OOC_IR__TypeGuardDesc);
      if (i1) goto l22;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66796)))), &_td_OOC_IR__ProcedureRefDesc);
      if (i1) goto l20;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66823)))), &_td_OOC_IR__ConstDesc);
      if (i1) goto l15;
      hasAddress = 0u;
      i0=0u;
      goto l31;
l15:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 66863))+4);
      i1 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i1);
      if (!i1) goto l18;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 66935))+4);
      i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i0);
      i1 = (OOC_INT32)b;
      i0 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i1, (void*)(OOC_INT32)&expr, (OOC_SymbolTable__Type)i0);
      dummy = i0;
l18:
      i0 = (OOC_INT32)expr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 67000))+4);
      i0 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i0);
      hasAddress = i0;
      
      goto l31;
l20:
      i0=1u;
      goto l31;
l22:
      i0=1u;
      goto l31;
l24:
      i0=1u;
      goto l31;
l26:
      i0=1u;
      goto l31;
l28:
      i0=1u;
      goto l31;
l30:
      i0=1u;
l31:
      i0 = !i0;
      if (!i0) goto l34;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)expr;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 67122));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67094)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 51, (OOC_Scanner_SymList__Symbol)i1);
l34:
      i0 = (OOC_INT32)expr;
      return (OOC_IR__Expression)i0;
      ;
    }


  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Adr.baseTypes[0]);
  adr = (OOC_IR__Adr)i0;
  i1 = (OOC_INT32)design;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_NewAdr_AssertAddressable((OOC_IR__Expression)i1);
  i2 = (OOC_INT32)sym;
  OOC_IR__InitAdr((OOC_IR__Adr)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1);
  i0 = (OOC_INT32)adr;
  return (OOC_IR__Adr)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitAdr(OOC_IR__Visitor v, OOC_IR__Adr adr) {

  return;
  ;
}

void OOC_IR__AdrDesc_Accept(OOC_IR__Adr adr, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)adr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67422)))), OOC_IR__VisitorDesc_VisitAdr)),OOC_IR__VisitorDesc_VisitAdr)((OOC_IR__Visitor)i0, (OOC_IR__Adr)i1);
  return;
  ;
}

static void OOC_IR__InitAsh(OOC_IR__Ash ash, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression exp) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)ash;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i1, 67701))+8) = i0;
  i0 = (OOC_INT32)exp;
  *(OOC_INT32*)((_check_pointer(i1, 67726))+12) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewAsh(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression exp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Ash.baseTypes[0]);
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)value;
  i2 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i3 = (OOC_INT32)exp;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i1, (OOC_IR__Expression)i3);
  i3 = (OOC_INT32)sym;
  OOC_IR__InitAsh((OOC_IR__Ash)i0, (OOC_Scanner_SymList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitAsh(OOC_IR__Visitor v, OOC_IR__Ash ash) {

  return;
  ;
}

void OOC_IR__AshDesc_Accept(OOC_IR__Ash ash, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)ash;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68110)))), OOC_IR__VisitorDesc_VisitAsh)),OOC_IR__VisitorDesc_VisitAsh)((OOC_IR__Visitor)i0, (OOC_IR__Ash)i1);
  return;
  ;
}

static void OOC_IR__InitBinaryArith(OOC_IR__BinaryArith op, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = variant;
  *(OOC_INT8*)((_check_pointer(i0, 68420))+8) = i1;
  i1 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i0, 68447))+12) = i1;
  i1 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i0, 68468))+16) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewBinaryArith(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__BinaryArith op;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__BinaryArith.baseTypes[0]);
  op = (OOC_IR__BinaryArith)i0;
  i1 = (OOC_INT32)left;
  i2 = (OOC_INT32)right;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 68694))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 68706))+4);
  i3 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i4);
  _assert(i3, 127, 68671);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 68771))+4);
  i4 = (OOC_INT32)sym;
  i5 = variant;
  OOC_IR__InitBinaryArith((OOC_IR__BinaryArith)i0, (OOC_Scanner_SymList__Symbol)i4, i5, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, (OOC_SymbolTable__Type)i3);
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitBinaryArith(OOC_IR__Visitor v, OOC_IR__BinaryArith op) {

  return;
  ;
}

void OOC_IR__BinaryArithDesc_Accept(OOC_IR__BinaryArith op, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)op;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68976)))), OOC_IR__VisitorDesc_VisitBinaryArith)),OOC_IR__VisitorDesc_VisitBinaryArith)((OOC_IR__Visitor)i0, (OOC_IR__BinaryArith)i1);
  return;
  ;
}

static void OOC_IR__InitBooleanOp(OOC_IR__BooleanOp op, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = variant;
  *(OOC_INT8*)((_check_pointer(i0, 69287))+8) = i1;
  i1 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i0, 69314))+12) = i1;
  i1 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i0, 69335))+16) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewBooleanOp(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__BooleanOp op;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__BooleanOp.baseTypes[0]);
  op = (OOC_IR__BooleanOp)i0;
  i1 = (OOC_INT32)left;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69544))+4);
  i2 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 69555)))), &_td_OOC_SymbolTable__PredefTypeDesc, 69555)), 69566))+40);
  _assert((i2==0), 127, 69532);
  i2 = (OOC_INT32)right;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69607))+4);
  i3 = *(OOC_INT16*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 69618)))), &_td_OOC_SymbolTable__PredefTypeDesc, 69618)), 69629))+40);
  _assert((i3==0), 127, 69594);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69707))+4);
  i4 = (OOC_INT32)sym;
  i5 = variant;
  OOC_IR__InitBooleanOp((OOC_IR__BooleanOp)i0, (OOC_Scanner_SymList__Symbol)i4, i5, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, (OOC_SymbolTable__Type)i3);
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitBooleanOp(OOC_IR__Visitor v, OOC_IR__BooleanOp op) {

  return;
  ;
}

void OOC_IR__BooleanOpDesc_Accept(OOC_IR__BooleanOp op, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)op;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69902)))), OOC_IR__VisitorDesc_VisitBooleanOp)),OOC_IR__VisitorDesc_VisitBooleanOp)((OOC_IR__Visitor)i0, (OOC_IR__BooleanOp)i1);
  return;
  ;
}

static void OOC_IR__InitCap(OOC_IR__Cap cap, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70143))+4);
  i2 = (OOC_INT32)cap;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 70159))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewCap(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Cap.baseTypes[0]);
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)expr;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertChar((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  OOC_IR__InitCap((OOC_IR__Cap)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1);
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitCap(OOC_IR__Visitor v, OOC_IR__Cap cap) {

  return;
  ;
}

void OOC_IR__CapDesc_Accept(OOC_IR__Cap cap, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)cap;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70516)))), OOC_IR__VisitorDesc_VisitCap)),OOC_IR__VisitorDesc_VisitCap)((OOC_IR__Visitor)i0, (OOC_IR__Cap)i1);
  return;
  ;
}

static void OOC_IR__InitChangeElement(OOC_IR__ChangeElement ch, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression set, OOC_IR__Expression element) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)set;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70834))+4);
  i2 = (OOC_INT32)ch;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  i1 = variant;
  *(OOC_INT8*)((_check_pointer(i2, 70849))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 70877))+12) = i0;
  i0 = (OOC_INT32)element;
  *(OOC_INT32*)((_check_pointer(i2, 70897))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewChangeElement(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression set, OOC_IR__Expression element) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ChangeElement.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = variant;
  i3 = (OOC_INT32)set;
  i4 = (OOC_INT32)element;
  OOC_IR__InitChangeElement((OOC_IR__ChangeElement)i0, (OOC_Scanner_SymList__Symbol)i1, i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4);
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitChangeElement(OOC_IR__Visitor v, OOC_IR__ChangeElement ch) {

  return;
  ;
}

void OOC_IR__ChangeElementDesc_Accept(OOC_IR__ChangeElement ch, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)ch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71414)))), OOC_IR__VisitorDesc_VisitChangeElement)),OOC_IR__VisitorDesc_VisitChangeElement)((OOC_IR__Visitor)i0, (OOC_IR__ChangeElement)i1);
  return;
  ;
}

static void OOC_IR__InitCompare(OOC_IR__Compare op, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(0);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i1, 71730))+12) = i0;
  i0 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i1, 71751))+16) = i0;
  i0 = variant;
  *(OOC_INT8*)((_check_pointer(i1, 71774))+8) = i0;
  return;
  ;
}

OOC_IR__Compare OOC_IR__BuilderDesc_NewCompare(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT8 variant;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 72017))+4);
  switch (i1) {
  case 9:
    variant = 10;
    goto l9;
  case 10:
    variant = 11;
    goto l9;
  case 11:
    variant = 12;
    goto l9;
  case 12:
    variant = 13;
    goto l9;
  case 13:
    variant = 14;
    goto l9;
  case 14:
    variant = 15;
    goto l9;
  default:
    _failed_case(i1, 72009);
    goto l9;
  }
l9:
  i1 = (OOC_INT32)left;
  i2 = (OOC_INT32)right;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Compare.baseTypes[0]);
  i4 = variant;
  OOC_IR__InitCompare((OOC_IR__Compare)i3, (OOC_Scanner_SymList__Symbol)i0, i4, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2);
  return (OOC_IR__Compare)i3;
  ;
}

void OOC_IR__VisitorDesc_VisitCompare(OOC_IR__Visitor v, OOC_IR__Compare op) {

  return;
  ;
}

void OOC_IR__CompareDesc_Accept(OOC_IR__Compare op, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)op;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72486)))), OOC_IR__VisitorDesc_VisitCompare)),OOC_IR__VisitorDesc_VisitCompare)((OOC_IR__Visitor)i0, (OOC_IR__Compare)i1);
  return;
  ;
}

static void OOC_IR__InitConcat(OOC_IR__Concat op, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__ExpressionList strings) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)strings;
  *(OOC_INT32*)((_check_pointer(i0, 72786))+8) = i1;
  return;
  ;
}

OOC_IR__Concat OOC_IR__BuilderDesc_NewConcat(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__ExpressionList strings) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT16 id;
  OOC_INT32 i;
  OOC_SymbolTable__Type type;
  OOC_INT16 tid;
  OOC_CHAR8 dummy;

  id = (-1);
  i0 = (OOC_INT32)strings;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 73058)), 0);
  i2 = (OOC_INT32)sym;
  i3 = 0<i1;
  if (i3) goto l3;
  i1=(-1);
  goto l28;
l3:
  i3 = (OOC_INT32)b;
  i4=0;i5=(-1);
l4_loop:
  i6 = _check_pointer(i0, 73087);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 73087))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 73090))+4);
  type = (OOC_SymbolTable__Type)i6;
  tid = 32767;
  i7 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i6);
  if (i7) goto l18;
  i7 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i6);
  if (i7) goto l12;
  i6 = OOC_SymbolTable_TypeRules__IsSTRING((OOC_SymbolTable__Type)i6);
  i6 = !i6;
  if (!i6) goto l11;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 73581)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 7, (OOC_Scanner_SymList__Symbol)i2);
l11:
  i6=32767;
  goto l19;
l12:
  i7 = _check_pointer(i0, 73339);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i6 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i6);
  i6 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i3, (void*)(i7+(_check_index(i4, i8, OOC_UINT32, 73339))*4), (OOC_SymbolTable__Type)i6);
  if (i6) goto l15;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 73456)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 7, (OOC_Scanner_SymList__Symbol)i2);
  i6=32767;
  goto l19;
l15:
  i6 = _check_pointer(i0, 73403);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 73403))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 73406))+4);
  i6 = *(OOC_INT16*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 73416)))), &_td_OOC_SymbolTable__PredefTypeDesc, 73416)), 73427))+40);
  tid = i6;
  
  goto l19;
l18:
  i6 = *(OOC_INT16*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 73218)))), &_td_OOC_SymbolTable__PredefTypeDesc, 73218)), 73229))+40);
  tid = i6;
  
l19:
  i7 = i6>i5;
  if (!i7) goto l23;
  id = i6;
  i5=i6;
l23:
  i4 = i4+1;
  i = i4;
  i6 = i4<i1;
  if (i6) goto l4_loop;
l27:
  i1=i5;
l28:
  i3 = i1<32767;
  if (i3) goto l42;
  i1 = (OOC_INT32)b;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 73896))+32);
  type = (OOC_SymbolTable__Type)i3;
  i = 0;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i0, 73940)), 0);
  i5 = 0<i4;
  if (!i5) goto l41;
  i5=0;
l33_loop:
  i6 = _check_pointer(i0, 73983);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 73983))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 73986))+4);
  i6 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i6);
  if (!i6) goto l36;
  i6 = _check_pointer(i0, 74091);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i1, (void*)(i6+(_check_index(i5, i7, OOC_UINT32, 74091))*4), (OOC_SymbolTable__Type)i3);
  dummy = i6;
  _assert(i6, 127, 74113);
l36:
  i5 = i5+1;
  i = i5;
  i6 = i5<i4;
  if (i6) goto l33_loop;
l41:
  i1=i3;
  goto l51;
l42:
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i1);
  type = (OOC_SymbolTable__Type)i1;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 73786)), 0);
  i4 = 0<i3;
  if (!i4) goto l51;
  i4 = (OOC_INT32)b;
  i5=0;
l45_loop:
  i6 = _check_pointer(i0, 73826);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i4, (void*)(i6+(_check_index(i5, i7, OOC_UINT32, 73826))*4), (OOC_SymbolTable__Type)i1);
  dummy = i6;
  _assert(i6, 127, 73846);
  i5 = i5+1;
  i = i5;
  i6 = i5<i3;
  if (i6) goto l45_loop;
l51:
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Concat.baseTypes[0]);
  OOC_IR__InitConcat((OOC_IR__Concat)i3, (OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i1, (OOC_IR__ExpressionList)i0);
  return (OOC_IR__Concat)i3;
  ;
}

void OOC_IR__VisitorDesc_VisitConcat(OOC_IR__Visitor v, OOC_IR__Concat op) {

  return;
  ;
}

void OOC_IR__ConcatDesc_Accept(OOC_IR__Concat op, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)op;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74393)))), OOC_IR__VisitorDesc_VisitConcat)),OOC_IR__VisitorDesc_VisitConcat)((OOC_IR__Visitor)i0, (OOC_IR__Concat)i1);
  return;
  ;
}

static void OOC_IR__InitConstructor(OOC_IR__Constructor cons, OOC_Scanner_SymList__Symbol sym, OOC_IR__NewObject alloc, OOC_IR__Call init) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)alloc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 74696))+4);
  i2 = (OOC_INT32)cons;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 74712))+8) = i0;
  i0 = (OOC_INT32)init;
  *(OOC_INT32*)((_check_pointer(i2, 74737))+12) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewConstructor(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression type, OOC_IR__ExpressionList arguments, OOC_SymbolTable__Item context, OOC_Scanner_SymList__Symbol endOfArgsSym) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SymbolTable__Type consType;
  OOC_SymbolTable__Type ptr;
  OOC_SymbolTable__Type qualRecord;
  OOC_SymbolTable__Record consClass;
  OOC_SymbolTable__Name n;
  OOC_SymbolTable__Declaration initDecl;
  OOC_IR__Call init;
  OOC_IR__Expression pseudoDesign;
  OOC_IR__Expression expr;

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)b;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75302)))), &_td_OOC_IR__TypeRefDesc));
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75342)))), &_td_OOC_IR__TypeRefDesc, 75342)), 75350))+12);
  i2 = OOC_SymbolTable_TypeRules__IsRecordPointer((OOC_SymbolTable__Type)i2);
  i2 = !i2;
  
  goto l5;
l3:
  i2=1u;
l5:
  if (!i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 75415));
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75380)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 73, (OOC_Scanner_SymList__Symbol)i2);
  return (OOC_IR__Expression)i2;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75452)))), &_td_OOC_IR__TypeRefDesc, 75452)), 75460))+12);
  i0 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i0);
  consType = (OOC_SymbolTable__Type)i0;
  i2 = (OOC_INT32)OOC_SymbolTable_TypeRules__PointerBaseType((OOC_SymbolTable__Type)i0);
  ptr = (OOC_SymbolTable__Type)i2;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75576)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i2);
  qualRecord = (OOC_SymbolTable__Type)i3;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 75605)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  ptr = (OOC_SymbolTable__Type)i2;
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 75642)))), &_td_OOC_SymbolTable__RecordDesc, 75642);
  consClass = (OOC_SymbolTable__Record)i2;
  i4 = (OOC_INT32)sym;
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75710)))), OOC_IR__BuilderDesc_GetName2)),OOC_IR__BuilderDesc_GetName2)((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i4, "INIT", 5);
  n = (OOC_SymbolTable__Name)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 75770))+52);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 75770))+52);
  i7 = (OOC_INT32)context;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 75773)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i5, 0u);
  initDecl = (OOC_SymbolTable__Declaration)i2;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75828))+16);
  OOC_SymbolTable_Uses__Mark((OOC_SymbolTable__Declaration)i2, (OOC_SymbolTable_Uses__Uses)i6, (OOC_SymbolTable__Name)i5);
  init = (OOC_IR__Call)0;
  i5 = i2==0;
  if (i5) goto l10;
  i5 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 75894)))), &_td_OOC_SymbolTable__ProcDeclDesc));
  
  goto l12;
l10:
  i5=1u;
l12:
  if (i5) goto l18;
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76057)))), OOC_IR__BuilderDesc_NewNil)),OOC_IR__BuilderDesc_NewNil)((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i4);
  pseudoDesign = (OOC_IR__Expression)i5;
  i2 = (OOC_INT32)OOC_IR__BuilderDesc_NewSelectProc((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i4, (OOC_IR__Expression)i5, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__ProcDecl)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 76191)))), &_td_OOC_SymbolTable__ProcDeclDesc, 76191)), (OOC_Scanner_SymList__Symbol)i4, 1u);
  pseudoDesign = (OOC_IR__Expression)i2;
  i3 = (OOC_INT32)endOfArgsSym;
  i5 = (OOC_INT32)arguments;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76229)))), OOC_IR__BuilderDesc_NewCall)),OOC_IR__BuilderDesc_NewCall)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2, (OOC_IR__ExpressionList)i5, 0u, (OOC_SymbolTable__Item)i7, (OOC_Scanner_SymList__Symbol)i3);
  expr = (OOC_IR__Expression)i2;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 76309)))), &_td_OOC_IR__CallDesc);
  if (i3) goto l16;
  i2=0;
  goto l22;
l16:
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 76344)))), &_td_OOC_IR__CallDesc, 76344);
  
  goto l22;
l18:
  i2 = (OOC_INT32)arguments;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 75939)), 0);
  i3 = i3!=0;
  if (!i3) goto l21;
  i2 = _check_pointer(i2, 76004);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 76004))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 76007));
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75968)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 39, (OOC_Scanner_SymList__Symbol)i2);
  return (OOC_IR__Expression)i2;
l21:
  i2=0;
l22:
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Constructor.baseTypes[0]);
  i0 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewNewObject((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i4, (OOC_SymbolTable__Type)i0, (OOC_IR__ExpressionList)0);
  OOC_IR__InitConstructor((OOC_IR__Constructor)i3, (OOC_Scanner_SymList__Symbol)i4, (OOC_IR__NewObject)i0, (OOC_IR__Call)i2);
  return (OOC_IR__Expression)i3;
  ;
}

void OOC_IR__VisitorDesc_VisitConstructor(OOC_IR__Visitor v, OOC_IR__Constructor cons) {

  return;
  ;
}

void OOC_IR__ConstructorDesc_Accept(OOC_IR__Constructor cons, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)cons;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76708)))), OOC_IR__VisitorDesc_VisitConstructor)),OOC_IR__VisitorDesc_VisitConstructor)((OOC_IR__Visitor)i0, (OOC_IR__Constructor)i1);
  return;
  ;
}

static void OOC_IR__InitCurrentException(OOC_IR__CurrentException ce, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)ce;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  *(OOC_INT32*)((_check_pointer(i0, 77026))+8) = (OOC_INT32)0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewCurrentException(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CurrentException.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitCurrentException((OOC_IR__CurrentException)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitCurrentException(OOC_IR__Visitor v, OOC_IR__CurrentException ce) {

  return;
  ;
}

void OOC_IR__CurrentExceptionDesc_Accept(OOC_IR__CurrentException ce, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)ce;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77513)))), OOC_IR__VisitorDesc_VisitCurrentException)),OOC_IR__VisitorDesc_VisitCurrentException)((OOC_IR__Visitor)i0, (OOC_IR__CurrentException)i1);
  return;
  ;
}

static void OOC_IR__InitDeref(OOC_IR__Deref d, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression pointer, OOC_CHAR8 checkPointer) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Type baseType;

  i0 = (OOC_INT32)pointer;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77870))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77870))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77875)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  baseType = (OOC_SymbolTable__Type)i1;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77911)))), OOC_SymbolTable__TypeDesc_Bound)),OOC_SymbolTable__TypeDesc_Bound)((OOC_SymbolTable__Type)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77950)))), &_td_OOC_SymbolTable__PointerDesc, 77950)), 77958))+40);
  baseType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78007))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78007))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 78012)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i1);
  i2 = (OOC_INT32)d;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 78038))+8) = i0;
  i0 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i2, 78065))+12) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewDeref(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SymbolTable__Type type;
  OOC_SymbolTable__Record _class;
  OOC_IR__Deref i;

  i0 = (OOC_INT32)design;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78281)))), &_td_OOC_IR__SelectProcDesc);
  if (i1) goto l7;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)b;
  OOC_IR__BuilderDesc_CheckFunctionOp((OOC_IR__Builder)i2, (OOC_IR__Expression)i0, (OOC_Scanner_SymList__Symbol)i1);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79040))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79040))+4);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 79045)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i4);
  type = (OOC_SymbolTable__Type)i3;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 79072)))), OOC_SymbolTable__TypeDesc_Bound)),OOC_SymbolTable__TypeDesc_Bound)((OOC_SymbolTable__Type)i3);
  i3 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 79081)))), &_td_OOC_SymbolTable__PointerDesc));
  if (i3) goto l5;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Deref.baseTypes[0]);
  i = (OOC_IR__Deref)i3;
  i4 = *(OOC_INT32*)((_check_pointer(i1, 79279))+16);
  i5 = (OOC_INT32)OOC_Config_StdPragmas__derefCheck;
  i2 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i5, i4);
  OOC_IR__InitDeref((OOC_IR__Deref)i3, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i0, i2);
  return (OOC_IR__Expression)i3;
  goto l19;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 79145));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 79118)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i2, 21, (OOC_Scanner_SymList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l19;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78358))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78358))+12);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78369)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  type = (OOC_SymbolTable__Type)i1;
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78405)))), &_td_OOC_SymbolTable__RecordDesc, 78405);
  _class = (OOC_SymbolTable__Record)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 78443))+52);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78504))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 78511))+56);
  i1 = (OOC_INT32)OOC_SymbolTable_Namespace__ExtendedDesc_GetSuperProcByIndex((OOC_SymbolTable_Namespace__Extended)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78457)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 78457)), i2);
  *(OOC_INT32*)((_check_pointer(i0, 78426))+20) = i1;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 78541))+29);
  if (i1) goto l17;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78629))+20);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l15;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78743))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 78751))+64);
  *(OOC_INT32*)((_check_pointer(i0, 78727))+4) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 78779))+28) = 1u;
  *(OOC_UINT8*)((_check_pointer(i0, 78817))+29) = 1u;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78857))+20);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 78864))+50);
  if (!i1) goto l14;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78892)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 58, (OOC_Scanner_SymList__Symbol)i2);
l14:
  return (OOC_IR__Expression)i0;
  goto l19;
l15:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78665)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 59, (OOC_Scanner_SymList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l19;
l17:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78575)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 60, (OOC_Scanner_SymList__Symbol)i1);
  return (OOC_IR__Expression)i0;
l19:
  _failed_function(78138); return 0;
  ;
}

void OOC_IR__VisitorDesc_VisitDeref(OOC_IR__Visitor v, OOC_IR__Deref index) {

  return;
  ;
}

void OOC_IR__DerefDesc_Accept(OOC_IR__Deref index, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)index;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 79482)))), OOC_IR__VisitorDesc_VisitDeref)),OOC_IR__VisitorDesc_VisitDeref)((OOC_IR__Visitor)i0, (OOC_IR__Deref)i1);
  return;
  ;
}

static void OOC_IR__InitEntier(OOC_IR__Entier entier, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)entier;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i1, 79777))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewEntier(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Entier.baseTypes[0]);
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)expr;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertReal((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  OOC_IR__InitEntier((OOC_IR__Entier)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1);
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitEntier(OOC_IR__Visitor v, OOC_IR__Entier entier) {

  return;
  ;
}

void OOC_IR__EntierDesc_Accept(OOC_IR__Entier entier, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)entier;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80179)))), OOC_IR__VisitorDesc_VisitEntier)),OOC_IR__VisitorDesc_VisitEntier)((OOC_IR__Visitor)i0, (OOC_IR__Entier)i1);
  return;
  ;
}

static void OOC_IR__InitIndex(OOC_IR__Index i, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression array, OOC_IR__Expression index, OOC_CHAR8 checkIndex) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Type elementType;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80538))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80538))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80543)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  elementType = (OOC_SymbolTable__Type)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80590)))), &_td_OOC_SymbolTable__ArrayDesc, 80590)), 80596))+44);
  elementType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80646))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80646))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 80651)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i1);
  i2 = (OOC_INT32)i;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 80680))+8) = i0;
  i0 = (OOC_INT32)index;
  *(OOC_INT32*)((_check_pointer(i2, 80702))+12) = i0;
  i0 = checkIndex;
  *(OOC_UINT8*)((_check_pointer(i2, 80724))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIndex(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression array, OOC_IR__Expression index) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_CHAR8 checkIndex;
  OOC_SymbolTable__Type type;
  OOC_SymbolTable__Array a;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 81027))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_StdPragmas__indexCheck;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  checkIndex = i1;
  i3 = (OOC_INT32)array;
  OOC_IR__BuilderDesc_CheckFunctionOp((OOC_IR__Builder)i2, (OOC_IR__Expression)i3, (OOC_Scanner_SymList__Symbol)i0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 81092))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 81092))+4);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 81097)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i5);
  type = (OOC_SymbolTable__Type)i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 81122)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i5) goto l3;
  {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
  goto l4;
l3:
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 81159)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i3);
  array = (OOC_IR__Expression)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 81203))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 81203))+4);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 81208)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i5);
  type = (OOC_SymbolTable__Type)i4;
  {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
l4:
  i5 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 81243)))), &_td_OOC_SymbolTable__ArrayDesc));
  if (i5) goto l18;
  i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 81332)))), &_td_OOC_SymbolTable__ArrayDesc, 81332);
  a = (OOC_SymbolTable__Array)i3;
  if (i1) goto l9;
  i1=0u;
  goto l10;
l9:
  i1 = *(OOC_UINT8*)((_check_pointer(i3, 81374))+41);
  
l10:
  checkIndex = i1;
  i5 = (OOC_INT32)index;
  i5 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  index = (OOC_IR__Expression)i5;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 81444)))), &_td_OOC_IR__ConstDesc);
  if (!i6) goto l17;
  i6 = *(OOC_UINT8*)((_check_pointer(i3, 81470))+40);
  if (i6) goto l15;
  i3 = *(OOC_INT32*)((_check_pointer(i3, 81763))+52);
  i2 = OOC_IR__BuilderDesc_AssertIntConst((OOC_IR__Builder)i2, (OOC_IR__Expression)i5, 0, i3);
  goto l17;
l15:
  i2 = OOC_IR__BuilderDesc_AssertIntConst((OOC_IR__Builder)i2, (OOC_IR__Expression)i5, 0, 2147483647);
l17:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Index.baseTypes[0]);
  OOC_IR__InitIndex((OOC_IR__Index)i2, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i4, (OOC_IR__Expression)i5, i1);
  return (OOC_IR__Expression)i2;
  goto l19;
l18:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 81276)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i2, 15, (OOC_Scanner_SymList__Symbol)i0);
  return (OOC_IR__Expression)i0;
l19:
  _failed_function(80792); return 0;
  ;
}

void OOC_IR__VisitorDesc_VisitIndex(OOC_IR__Visitor v, OOC_IR__Index index) {

  return;
  ;
}

void OOC_IR__IndexDesc_Accept(OOC_IR__Index index, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)index;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82045)))), OOC_IR__VisitorDesc_VisitIndex)),OOC_IR__VisitorDesc_VisitIndex)((OOC_IR__Visitor)i0, (OOC_IR__Index)i1);
  return;
  ;
}

static void OOC_IR__InitLen(OOC_IR__Len len, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression array, OOC_IR__Expression arrayVariable, OOC_INT32 dim) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)len;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = variant;
  *(OOC_INT8*)((_check_pointer(i1, 82392))+8) = i0;
  i0 = (OOC_INT32)array;
  *(OOC_INT32*)((_check_pointer(i1, 82421))+12) = i0;
  i0 = (OOC_INT32)arrayVariable;
  *(OOC_INT32*)((_check_pointer(i1, 82446))+20) = i0;
  i0 = dim;
  *(OOC_INT32*)((_check_pointer(i1, 82487))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewLen(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression array, OOC_INT32 dim) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_IR__Len len;
  OOC_IR__Expression arrayVariable;
  OOC_SymbolTable__Type type;
  OOC_INT8 variant;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82765))+4);
  i1 = OOC_SymbolTable_TypeRules__IsArray((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82797))+4);
  i1 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 82839));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82816)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 15, (OOC_Scanner_SymList__Symbol)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 82860))+20);
  return (OOC_IR__Expression)i1;
l7:
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Len.baseTypes[0]);
  len = (OOC_IR__Len)i1;
  arrayVariable = (OOC_IR__Expression)i0;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82955)))), &_td_OOC_IR__IndexDesc);
  if (i2) goto l10;
  i2=i0;
  goto l16;
l10:
  i2=i0;
l11_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 83005)))), &_td_OOC_IR__IndexDesc, 83005)), 83011))+8);
  i3 = dim;
  arrayVariable = (OOC_IR__Expression)i2;
  dim = (i3+1);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 82955)))), &_td_OOC_IR__IndexDesc);
  if (i3) goto l11_loop;
l16:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 83072))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 83072))+4);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 83077)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i4);
  type = (OOC_SymbolTable__Type)i3;
  i4 = dim;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 83102)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i5) goto l31;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 83174)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i5) goto l21;
  i5=0u;
  goto l23;
l21:
  i5 = OOC_SymbolTable__ArrayDesc_GetOpenDimensions((OOC_SymbolTable__Array)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 83217)))), &_td_OOC_SymbolTable__ArrayDesc, 83217)));
  i5 = i4>=i5;
  
l23:
  if (i5) goto l29;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 83307)))), &_td_OOC_IR__VarDesc);
  if (i5) goto l27;
  variant = 19;
  i5=19;
  goto l32;
l27:
  variant = 18;
  i5=18;
  goto l32;
l29:
  variant = 17;
  i5=17;
  goto l32;
l31:
  variant = 16;
  i5=16;
l32:
  i6 = i5==19;
  if (!i6) goto l37;
  i6=1u;
l37:
  if (i6) goto l39;
  i3=0u;
  goto l41;
l39:
  i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 83502)))), &_td_OOC_SymbolTable__ArrayDesc, 83502)), 83508))+41);
  i3 = !i3;
  
l41:
  if (!i3) goto l43;
  i3 = (OOC_INT32)b;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 83572));
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 83542)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i3, 54, (OOC_Scanner_SymList__Symbol)i6);
  return (OOC_IR__Expression)i3;
l43:
  i3 = (OOC_INT32)sym;
  OOC_IR__InitLen((OOC_IR__Len)i1, (OOC_Scanner_SymList__Symbol)i3, i5, (OOC_IR__Expression)i0, (OOC_IR__Expression)i2, i4);
  return (OOC_IR__Expression)i1;
  ;
}

void OOC_IR__VisitorDesc_VisitLen(OOC_IR__Visitor v, OOC_IR__Len len) {

  return;
  ;
}

void OOC_IR__LenDesc_Accept(OOC_IR__Len len, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)len;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83813)))), OOC_IR__VisitorDesc_VisitLen)),OOC_IR__VisitorDesc_VisitLen)((OOC_IR__Visitor)i0, (OOC_IR__Len)i1);
  return;
  ;
}

static void OOC_IR__InitNegate(OOC_IR__Negate neg, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84058))+4);
  i2 = (OOC_INT32)neg;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 84074))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewNegate(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Negate.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)expr;
  OOC_IR__InitNegate((OOC_IR__Negate)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i2);
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitNegate(OOC_IR__Visitor v, OOC_IR__Negate neg) {

  return;
  ;
}

void OOC_IR__NegateDesc_Accept(OOC_IR__Negate neg, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)neg;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84443)))), OOC_IR__VisitorDesc_VisitNegate)),OOC_IR__VisitorDesc_VisitNegate)((OOC_IR__Visitor)i0, (OOC_IR__Negate)i1);
  return;
  ;
}

static void OOC_IR__InitNewBlock(OOC_IR__NewBlock _new, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression size) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)_new;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)size;
  *(OOC_INT32*)((_check_pointer(i0, 84747))+8) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewNewBlock(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression size) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__NewBlock.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)size;
  OOC_IR__InitNewBlock((OOC_IR__NewBlock)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i3);
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitNewBlock(OOC_IR__Visitor v, OOC_IR__NewBlock _new) {

  return;
  ;
}

void OOC_IR__NewBlockDesc_Accept(OOC_IR__NewBlock _new, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)_new;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85190)))), OOC_IR__VisitorDesc_VisitNewBlock)),OOC_IR__VisitorDesc_VisitNewBlock)((OOC_IR__Visitor)i0, (OOC_IR__NewBlock)i1);
  return;
  ;
}

static void OOC_IR__InitNewObject(OOC_IR__NewObject _new, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__ExpressionList length) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)_new;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)length;
  *(OOC_INT32*)((_check_pointer(i0, 85505))+8) = i1;
  return;
  ;
}

OOC_IR__NewObject OOC_IR__BuilderDesc_NewNewObject(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__ExpressionList args) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_IR__ExpressionList length;
  OOC_INT32 i;

  i0 = (OOC_INT32)args;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l11;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 85845)), 0);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], (i1-1));
  length = (OOC_IR__ExpressionList)i1;
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 85883)), 0);
  i3 = 0<i2;
  if (!i3) goto l10;
  i3 = (OOC_INT32)b;
  i4=0;
l5_loop:
  i5 = _check_pointer(i1, 85905);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = _check_pointer(i0, 85932);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i9 = i4+1;
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i9, i8, OOC_UINT32, 85932))*4);
  i7 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i3, (OOC_IR__Expression)i7);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 85905))*4) = i7;
  i = i9;
  i4 = i9<i2;
  if (!i4) goto l10;
  i4=i9;
  goto l5_loop;
l10:
  i0=i1;
  goto l12;
l11:
  i0=(OOC_INT32)0;
l12:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__NewObject.baseTypes[0]);
  OOC_IR__InitNewObject((OOC_IR__NewObject)i3, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_IR__ExpressionList)i0);
  return (OOC_IR__NewObject)i3;
  ;
}

void OOC_IR__VisitorDesc_VisitNewObject(OOC_IR__Visitor v, OOC_IR__NewObject _new) {

  return;
  ;
}

void OOC_IR__NewObjectDesc_Accept(OOC_IR__NewObject _new, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)_new;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86214)))), OOC_IR__VisitorDesc_VisitNewObject)),OOC_IR__VisitorDesc_VisitNewObject)((OOC_IR__Visitor)i0, (OOC_IR__NewObject)i1);
  return;
  ;
}

static void OOC_IR__InitNot(OOC_IR__Not neg, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86456))+4);
  i2 = (OOC_INT32)neg;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 86472))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewNot(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Not.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)expr;
  OOC_IR__InitNot((OOC_IR__Not)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i2);
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitNot(OOC_IR__Visitor v, OOC_IR__Not neg) {

  return;
  ;
}

void OOC_IR__NotDesc_Accept(OOC_IR__Not neg, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)neg;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86814)))), OOC_IR__VisitorDesc_VisitNot)),OOC_IR__VisitorDesc_VisitNot)((OOC_IR__Visitor)i0, (OOC_IR__Not)i1);
  return;
  ;
}

static void OOC_IR__InitOdd(OOC_IR__Odd odd, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(0);
  i1 = (OOC_INT32)odd;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i1, 87087))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewOdd(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Odd.baseTypes[0]);
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)expr;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOdd((OOC_IR__Odd)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1);
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitOdd(OOC_IR__Visitor v, OOC_IR__Odd odd) {

  return;
  ;
}

void OOC_IR__OddDesc_Accept(OOC_IR__Odd odd, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)odd;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87447)))), OOC_IR__VisitorDesc_VisitOdd)),OOC_IR__VisitorDesc_VisitOdd)((OOC_IR__Visitor)i0, (OOC_IR__Odd)i1);
  return;
  ;
}

static void OOC_IR__InitSelectField(OOC_IR__SelectField sf, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression record, OOC_SymbolTable__FieldDecl field, OOC_Scanner_SymList__Symbol fieldSym) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type recordType;
  OOC_SymbolTable__Type ptr;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87861))+4);
  recordType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87889)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  i3 = (OOC_INT32)field;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 87907))+4);
  i2 = i2!=i4;
  if (!i2) goto l9;
l4_loop:
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87942)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  ptr = (OOC_SymbolTable__Type)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 88001)))), &_td_OOC_SymbolTable__RecordDesc, 88001)), 88008))+40);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87984)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i2);
  recordType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87889)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 87907))+4);
  i2 = i2!=i4;
  if (i2) goto l4_loop;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 88085))+48);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 88071)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)sf;
  i4 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_SymList__Symbol)i4, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 88100))+8) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 88125))+12) = i3;
  i0 = (OOC_INT32)fieldSym;
  *(OOC_INT32*)((_check_pointer(i2, 88148))+16) = i0;
  return;
  ;
}

OOC_IR__SelectField OOC_IR__BuilderDesc_NewSelectField(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression record, OOC_SymbolTable__FieldDecl field, OOC_Scanner_SymList__Symbol fieldSym) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SelectField.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)record;
  i3 = (OOC_INT32)field;
  i4 = (OOC_INT32)fieldSym;
  OOC_IR__InitSelectField((OOC_IR__SelectField)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i2, (OOC_SymbolTable__FieldDecl)i3, (OOC_Scanner_SymList__Symbol)i4);
  return (OOC_IR__SelectField)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitSelectField(OOC_IR__Visitor v, OOC_IR__SelectField sf) {

  return;
  ;
}

void OOC_IR__SelectFieldDesc_Accept(OOC_IR__SelectField sf, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)sf;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 88657)))), OOC_IR__VisitorDesc_VisitSelectField)),OOC_IR__VisitorDesc_VisitSelectField)((OOC_IR__Visitor)i0, (OOC_IR__SelectField)i1);
  return;
  ;
}

static void OOC_IR__InitSelectProc(OOC_IR__SelectProc sp, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression receiver, OOC_CHAR8 checkPointer, OOC_SymbolTable__Type recordType, OOC_SymbolTable__ProcDecl tbProc, OOC_Scanner_SymList__Symbol tbProcSym, OOC_CHAR8 isStaticCall) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type _class;
  OOC_SymbolTable__Type baseRecord;
  OOC_SymbolTable__Type ptr;

  i0 = (OOC_INT32)sp;
  i1 = (OOC_INT32)recordType;
  *(OOC_INT32*)((_check_pointer(i0, 89129))+12) = i1;
  i2 = (OOC_INT32)tbProc;
  i3 = (OOC_INT32)OOC_SymbolTable__ProcDeclDesc_Class((OOC_SymbolTable__ProcDecl)i2);
  _class = (OOC_SymbolTable__Type)i3;
  baseRecord = (OOC_SymbolTable__Type)i1;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 89299)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  i4 = i4!=i3;
  if (!i4) goto l9;
l4_loop:
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 89345)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  ptr = (OOC_SymbolTable__Type)i4;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 89404)))), &_td_OOC_SymbolTable__RecordDesc, 89404)), 89411))+40);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 89387)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i4);
  baseRecord = (OOC_SymbolTable__Type)i1;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 89299)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  i4 = i4!=i3;
  if (i4) goto l4_loop;
l9:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 89485))+64);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 89470)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i3);
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)receiver;
  *(OOC_INT32*)((_check_pointer(i0, 89506))+8) = i1;
  i1 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i0, 89536))+16) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 89574))+20) = i2;
  i1 = (OOC_INT32)tbProcSym;
  *(OOC_INT32*)((_check_pointer(i0, 89600))+24) = i1;
  i1 = isStaticCall;
  *(OOC_UINT8*)((_check_pointer(i0, 89632))+28) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 89670))+29) = 0u;
  return;
  ;
}

OOC_IR__SelectProc OOC_IR__BuilderDesc_NewSelectProc(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression receiver, OOC_SymbolTable__Type recordType, OOC_SymbolTable__ProcDecl tbProc, OOC_Scanner_SymList__Symbol tbProcSym, OOC_CHAR8 isStaticCall) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 90166))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_StdPragmas__derefCheck;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  i2 = (OOC_INT32)receiver;
  i3 = (OOC_INT32)recordType;
  i4 = (OOC_INT32)tbProc;
  i5 = (OOC_INT32)tbProcSym;
  i6 = isStaticCall;
  i7 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SelectProc.baseTypes[0]);
  OOC_IR__InitSelectProc((OOC_IR__SelectProc)i7, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i2, i1, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__ProcDecl)i4, (OOC_Scanner_SymList__Symbol)i5, i6);
  return (OOC_IR__SelectProc)i7;
  ;
}

void OOC_IR__VisitorDesc_VisitSelectProc(OOC_IR__Visitor v, OOC_IR__SelectProc sp) {

  return;
  ;
}

void OOC_IR__SelectProcDesc_Accept(OOC_IR__SelectProc sp, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)sp;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 90500)))), OOC_IR__VisitorDesc_VisitSelectProc)),OOC_IR__VisitorDesc_VisitSelectProc)((OOC_IR__Visitor)i0, (OOC_IR__SelectProc)i1);
  return;
  ;
}

static void OOC_IR__InitSetMember(OOC_IR__SetMember op, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression element, OOC_IR__Expression set) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(0);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)element;
  *(OOC_INT32*)((_check_pointer(i1, 90802))+8) = i0;
  i0 = (OOC_INT32)set;
  *(OOC_INT32*)((_check_pointer(i1, 90829))+12) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSetMember(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression element, OOC_IR__Expression set) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__SetMember op;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SetMember.baseTypes[0]);
  op = (OOC_IR__SetMember)i0;
  i1 = (OOC_INT32)set;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 91061))+4);
  i3 = (OOC_INT32)b;
  i4 = (OOC_INT32)element;
  i2 = (OOC_INT32)OOC_IR__BuilderDesc_ValidSetElement((OOC_IR__Builder)i3, (OOC_IR__Expression)i4, (OOC_SymbolTable__Type)i2);
  i3 = (OOC_INT32)sym;
  OOC_IR__InitSetMember((OOC_IR__SetMember)i0, (OOC_Scanner_SymList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitSetMember(OOC_IR__Visitor v, OOC_IR__SetMember op) {

  return;
  ;
}

void OOC_IR__SetMemberDesc_Accept(OOC_IR__SetMember op, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)op;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91261)))), OOC_IR__VisitorDesc_VisitSetMember)),OOC_IR__VisitorDesc_VisitSetMember)((OOC_IR__Visitor)i0, (OOC_IR__SetMember)i1);
  return;
  ;
}

static void OOC_IR__InitSetOp(OOC_IR__SetOp op, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = variant;
  *(OOC_INT8*)((_check_pointer(i0, 91558))+8) = i1;
  i1 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i0, 91585))+12) = i1;
  i1 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i0, 91606))+16) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSetOp(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__SetOp op;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SetOp.baseTypes[0]);
  op = (OOC_IR__SetOp)i0;
  i1 = (OOC_INT32)left;
  i2 = (OOC_INT32)right;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 91815))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 91827))+4);
  i3 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i4);
  _assert(i3, 127, 91792);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 91886))+4);
  i4 = (OOC_INT32)sym;
  i5 = variant;
  OOC_IR__InitSetOp((OOC_IR__SetOp)i0, (OOC_Scanner_SymList__Symbol)i4, i5, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, (OOC_SymbolTable__Type)i3);
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitSetOp(OOC_IR__Visitor v, OOC_IR__SetOp op) {

  return;
  ;
}

void OOC_IR__SetOpDesc_Accept(OOC_IR__SetOp op, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)op;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 92061)))), OOC_IR__VisitorDesc_VisitSetOp)),OOC_IR__VisitorDesc_VisitSetOp)((OOC_IR__Visitor)i0, (OOC_IR__SetOp)i1);
  return;
  ;
}

static void OOC_IR__InitSetRange(OOC_IR__SetRange range, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression from, OOC_IR__Expression to) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(10);
  i1 = (OOC_INT32)range;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)from;
  *(OOC_INT32*)((_check_pointer(i1, 92381))+8) = i0;
  i0 = (OOC_INT32)to;
  *(OOC_INT32*)((_check_pointer(i1, 92405))+12) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSetRange(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression from, OOC_IR__Expression to, OOC_CHAR8 isSet) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Type set;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(10);
  set = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT32)from;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = (OOC_INT32)to;
  i2 = i2==(OOC_INT32)0;
  
l5:
  if (i2) goto l11;
  i2 = isSet;
  if (i2) goto l9;
  i0=i1;
  goto l10;
l9:
  i2 = (OOC_INT32)b;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_ValidSetElement((OOC_IR__Builder)i2, (OOC_IR__Expression)i1, (OOC_SymbolTable__Type)i0);
  i3 = (OOC_INT32)to;
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_ValidSetElement((OOC_IR__Builder)i2, (OOC_IR__Expression)i3, (OOC_SymbolTable__Type)i0);
  to = (OOC_IR__Expression)i0;
  i0=i1;
l10:
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SetRange.baseTypes[0]);
  i2 = (OOC_INT32)to;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitSetRange((OOC_IR__SetRange)i1, (OOC_Scanner_SymList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__Expression)i2);
  return (OOC_IR__Expression)i1;
  goto l12;
l11:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)Object_Boxed__NewSet(0u);
  i3 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92702)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
l12:
  _failed_function(92460); return 0;
  ;
}

void OOC_IR__VisitorDesc_VisitSetRange(OOC_IR__Visitor v, OOC_IR__SetRange range) {

  return;
  ;
}

void OOC_IR__SetRangeDesc_Accept(OOC_IR__SetRange range, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)range;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93197)))), OOC_IR__VisitorDesc_VisitSetRange)),OOC_IR__VisitorDesc_VisitSetRange)((OOC_IR__Visitor)i0, (OOC_IR__SetRange)i1);
  return;
  ;
}

OOC_CHAR8 OOC_IR__SetRangeDesc_IsEmpty(OOC_IR__SetRange range) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)range;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93357))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93364)))), &_td_OOC_IR__ConstDesc, 93364)), 93370))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93357))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93389))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 93364)))), &_td_OOC_IR__ConstDesc, 93364)), 93370))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93394)))), &_td_OOC_IR__ConstDesc, 93394)), 93400))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93377)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i2, (Object__Object)i0);
  return (i0>0);
  ;
}

OOC_CHAR8 OOC_IR__SetRangeDesc_IntersectsWith(OOC_IR__SetRange range, OOC_IR__SetRange range2) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)range;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93627))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93631)))), &_td_OOC_IR__ConstDesc, 93631)), 93637))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93627))+12);
  i3 = (OOC_INT32)range2;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 93656))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 93631)))), &_td_OOC_IR__ConstDesc, 93631)), 93637))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 93662)))), &_td_OOC_IR__ConstDesc, 93662)), 93668))+8);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93643)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i2, (Object__Object)i4);
  i1 = i1<0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93700))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93706)))), &_td_OOC_IR__ConstDesc, 93706)), 93712))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93700))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 93731))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93706)))), &_td_OOC_IR__ConstDesc, 93706)), 93712))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 93735)))), &_td_OOC_IR__ConstDesc, 93735)), 93741))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93718)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i0, (Object__Object)i2);
  i0 = i0>0;
  
  goto l4;
l3:
  i0=1u;
l4:
  return (!i0);
  ;
}

static void OOC_IR__InitShift(OOC_IR__Shift shift, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression by, OOC_CHAR8 rotate) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)value;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 94036))+4);
  i2 = (OOC_INT32)shift;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 94054))+8) = i0;
  i0 = (OOC_INT32)by;
  *(OOC_INT32*)((_check_pointer(i2, 94081))+12) = i0;
  i0 = rotate;
  *(OOC_UINT8*)((_check_pointer(i2, 94102))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewShift(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression by, OOC_CHAR8 rotate) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__Shift shift;
  auto OOC_IR__Expression OOC_IR__BuilderDesc_NewShift_AssertShiftable(OOC_IR__Expression expr);
    
    OOC_IR__Expression OOC_IR__BuilderDesc_NewShift_AssertShiftable(OOC_IR__Expression expr) {
      register OOC_INT32 i0,i1,i2,i3;
      Object_BigInt__BigInt v;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 94421))+20);
      i2 = (OOC_INT32)expr;
      i1 = i2!=i1;
      if (!i1) goto l18;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 94472))+4);
      i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
      if (i1) goto l5;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 94513))+4);
      i1 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i1);
      
      goto l7;
l5:
      i1=1u;
l7:
      if (i1) goto l9;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 94556))+4);
      i1 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i1, 11);
      
      goto l11;
l9:
      i1=1u;
l11:
      if (i1) goto l13;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 94609))+4);
      i1 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i1);
      
      goto l14;
l13:
      i1=1u;
l14:
      i1 = !i1;
      if (!i1) goto l18;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 94660));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94633)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 5, (OOC_Scanner_SymList__Symbol)i1);
      i0 = (OOC_INT32)Object_BigInt__NewInt(1);
      v = (Object_BigInt__BigInt)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 94730));
      i3 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i0);
      i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i0);
      return (OOC_IR__Expression)i0;
l18:
      return (OOC_IR__Expression)i2;
      ;
    }


  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Shift.baseTypes[0]);
  shift = (OOC_IR__Shift)i0;
  i1 = (OOC_INT32)value;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_NewShift_AssertShiftable((OOC_IR__Expression)i1);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)by;
  i2 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i2, (OOC_IR__Expression)i3);
  i3 = (OOC_INT32)sym;
  i4 = rotate;
  OOC_IR__InitShift((OOC_IR__Shift)i0, (OOC_Scanner_SymList__Symbol)i3, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, i4);
  i0 = (OOC_INT32)shift;
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitShift(OOC_IR__Visitor v, OOC_IR__Shift shift) {

  return;
  ;
}

void OOC_IR__ShiftDesc_Accept(OOC_IR__Shift shift, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)shift;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95135)))), OOC_IR__VisitorDesc_VisitShift)),OOC_IR__VisitorDesc_VisitShift)((OOC_IR__Visitor)i0, (OOC_IR__Shift)i1);
  return;
  ;
}

static void OOC_IR__InitTypeCast(OOC_IR__TypeCast cast, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)cast;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 95443))+8) = i1;
  return;
  ;
}

OOC_IR__TypeCast OOC_IR__BuilderDesc_NewTypeCast(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression typeExpr, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)typeExpr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95682)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  i1 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i1);
  type = (OOC_SymbolTable__Type)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 95718))+32);
  i2 = i2<0;
  if (i2) goto l3;
  i2 = (OOC_INT32)expr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 95737))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 95742))+32);
  i2 = i2<0;
  
  goto l4;
l3:
  i2=1u;
l4:
  i3 = (OOC_INT32)expr;
  if (i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 95780))+4);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 95768))+32);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 95785))+32);
  i2 = i4!=i2;
  
  goto l9;
l7:
  i2=1u;
l9:
  if (!i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 95836));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95804)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 52, (OOC_Scanner_SymList__Symbol)i2);
l11:
  i0 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeCast.baseTypes[0]);
  OOC_IR__InitTypeCast((OOC_IR__TypeCast)i2, (OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__Type)i1, (OOC_IR__Expression)i3);
  return (OOC_IR__TypeCast)i2;
  ;
}

void OOC_IR__VisitorDesc_VisitTypeCast(OOC_IR__Visitor v, OOC_IR__TypeCast cast) {

  return;
  ;
}

void OOC_IR__TypeCastDesc_Accept(OOC_IR__TypeCast cast, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)cast;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96097)))), OOC_IR__VisitorDesc_VisitTypeCast)),OOC_IR__VisitorDesc_VisitTypeCast)((OOC_IR__Visitor)i0, (OOC_IR__TypeCast)i1);
  return;
  ;
}

static void OOC_IR__InitTypeConv(OOC_IR__TypeConv conv, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)conv;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 96404))+8) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeConv(OOC_IR__Builder b, OOC_SymbolTable__Type type, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__TypeConv conv;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 96571))+4);
  i2 = (OOC_INT32)type;
  i1 = i1==i2;
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96686)))), &_td_OOC_IR__TypeConvDesc);
  if (i1) goto l5;
  i1=0u;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 96727))+4);
  i1 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
  
l7:
  if (!i1) goto l10;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96794)))), &_td_OOC_IR__TypeConvDesc, 96794)), 96803))+8);
  expr = (OOC_IR__Expression)i0;
  
l10:
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeConv.baseTypes[0]);
  conv = (OOC_IR__TypeConv)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 96869));
  OOC_IR__InitTypeConv((OOC_IR__TypeConv)i1, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i0);
  return (OOC_IR__Expression)i1;
  goto l12;
l11:
  return (OOC_IR__Expression)i0;
l12:
  _failed_function(96465); return 0;
  ;
}

void OOC_IR__VisitorDesc_VisitTypeConv(OOC_IR__Visitor v, OOC_IR__TypeConv conv) {

  return;
  ;
}

void OOC_IR__TypeConvDesc_Accept(OOC_IR__TypeConv conv, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)conv;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 97086)))), OOC_IR__VisitorDesc_VisitTypeConv)),OOC_IR__VisitorDesc_VisitTypeConv)((OOC_IR__Visitor)i0, (OOC_IR__TypeConv)i1);
  return;
  ;
}

OOC_CHAR8 OOC_IR__BuilderDesc_Widen(OOC_IR__Builder b, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98570))+4);
  i2 = (OOC_INT32)type;
  _assert((i1!=(OOC_INT32)0), 127, 98558);
  _assert((i2!=(OOC_INT32)0), 127, 98588);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98643))+4);
  i0 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  if (i0) goto l99;
  i0 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98762))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 98769)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l93;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99099))+4);
  i0 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  if (i0) goto l91;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99348))+4);
  i0 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i2);
  if (i0) goto l89;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99510))+4);
  i0 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i0, 16);
  if (i0) goto l11;
  i0=0u;
  goto l13;
l11:
  i0 = OOC_SymbolTable_TypeRules__IsNilCompatible((OOC_SymbolTable__Type)i2);
  
l13:
  if (i0) goto l87;
  i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i2, 12);
  if (i0) goto l17;
  i0=0u;
  goto l19;
l17:
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99740))+4);
  i0 = OOC_SymbolTable_TypeRules__IsPtrCompatible((OOC_SymbolTable__Type)i0);
  
l19:
  if (i0) goto l85;
  i0 = (OOC_INT32)*expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 99841)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l23;
  i1=0u;
  goto l25;
l23:
  i1 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i2);
  
l25:
  if (i1) goto l27;
  i0=0u;
  goto l29;
l27:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99921))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l29:
  if (i0) goto l31;
  i0=0u;
  goto l33;
l31:
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 100036))+4);
  i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i1);
  i0 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  
l33:
  if (i0) goto l83;
  i0 = (OOC_INT32)*expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 100202)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l37;
  i0=0u;
  goto l39;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100246))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l39:
  if (i0) goto l41;
  i0=0u;
  goto l43;
l41:
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 100279)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l43:
  if (i0) goto l45;
  i0=0u;
  goto l47;
l45:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 100329)))), &_td_OOC_SymbolTable__ArrayDesc, 100329)), 100335))+44);
  i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
  
l47:
  if (i0) goto l81;
  i0 = (OOC_INT32)*expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 100508)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l51;
  i1=0u;
  goto l53;
l51:
  i1 = OOC_SymbolTable_TypeRules__IsObject((OOC_SymbolTable__Type)i2);
  
l53:
  if (i1) goto l55;
  i0=0u;
  goto l57;
l55:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100581))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l57:
  if (i0) goto l79;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 100754)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i0) goto l61;
  i0=0u;
  goto l63;
l61:
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__PointerBaseType((OOC_SymbolTable__Type)i2);
  i0 = OOC_SymbolTable_TypeRules__IsArrayOfChar((OOC_SymbolTable__Type)i0, 0u);
  
l63:
  if (i0) goto l65;
  i0=0u;
  goto l67;
l65:
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 100853)))), &_td_OOC_SymbolTable__PointerDesc, 100853)), 100861))+48);
  
l67:
  if (i0) goto l69;
  i0=0u;
  goto l75;
l69:
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__PointerBaseType((OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)b;
  i0 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i1, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i0);
  if (i0) goto l72;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100973))+4);
  i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__PointerBaseType((OOC_SymbolTable__Type)i2);
  i0 = OOC_SymbolTable_TypeRules__IsArrayCompatible((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  
  goto l75;
l72:
  i0=1u;
l75:
  if (i0) goto l77;
  return 0u;
  goto l100;
l77:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*expr;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 101231));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 101218)))), OOC_IR__BuilderDesc_NewAdr)),OOC_IR__BuilderDesc_NewAdr)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1);
  *expr = (OOC_IR__Expression)i0;
  return 1u;
  goto l100;
l79:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100696))+32);
  i2 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i1, (OOC_IR__Expression)i2);
  *expr = (OOC_IR__Expression)i0;
  return 1u;
  goto l100;
l81:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 100468)))), &_td_OOC_SymbolTable__ArrayDesc, 100468)), 100474))+44);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i0);
  i1 = (OOC_INT32)b;
  i0 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i1, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i0);
  return i0;
  goto l100;
l83:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 100128)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  *expr = (OOC_IR__Expression)i0;
  return 1u;
  goto l100;
l85:
  return 1u;
  goto l100;
l87:
  return 1u;
  goto l100;
l89:
  return 1u;
  goto l100;
l91:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 99253)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  *expr = (OOC_IR__Expression)i0;
  return 1u;
  goto l100;
l93:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 98918)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l96;
  i0=0u;
  goto l97;
l96:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99030))+4);
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__Type)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 98980)))), &_td_OOC_SymbolTable__FormalParsDesc, 98980)), (OOC_SymbolTable__FormalPars)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 99041)))), &_td_OOC_SymbolTable__FormalParsDesc, 99041)), 0u);
  
l97:
  return i0;
  goto l100;
l99:
  return 1u;
l100:
  _failed_function(97147); return 0;
  ;
}

OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign(OOC_IR__Builder b, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;
  OOC_IR__Expression oldExpr;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign_LengthOk(void);
    
    OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign_LengthOk(void) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)*expr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101842))+4);
      i1 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i1);
      if (i1) goto l3;
      return 1u;
      goto l8;
l3:
      i1 = (OOC_INT32)type;
      i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 101875)))), &_td_OOC_SymbolTable__ArrayDesc, 101875)), 101881))+40);
      if (i2) goto l6;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 101960)))), &_td_OOC_IR__ConstDesc, 101960)), 101966))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 101980)))), &_td_Object_Boxed__StringDesc, 101980)), 101987));
      i0 = *(OOC_INT32*)(_check_pointer(i0, 101994));
      i1 = *(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 102032)))), &_td_OOC_SymbolTable__ArrayDesc, 102032)), 102038))+52);
      return (i0<i1);
      goto l8;
l6:
      return 0u;
l8:
      _failed_function(101779); return 0;
      ;
    }


  i0 = (OOC_INT32)*expr;
  oldExpr = (OOC_IR__Expression)i0;
  i1 = (OOC_INT32)type;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 102168)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i2) goto l3;
  i2=0u;
  goto l9;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102207))+4);
  i2 = i1==i2;
  if (i2) goto l6;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102235))+4);
  i2 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i2, 16);
  
  goto l7;
l6:
  i2=1u;
l7:
  i2 = !i2;
  
l9:
  if (i2) goto l27;
  i2 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i1, 11);
  if (i2) goto l13;
  i2=0u;
  goto l15;
l13:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102498))+4);
  i2 = OOC_SymbolTable_TypeRules__IsByteCompatible((OOC_SymbolTable__Type)i2);
  
l15:
  if (i2) goto l21;
  i2 = (OOC_INT32)b;
  i1 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i2, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i1);
  if (i1) goto l19;
  i1=0u;
  goto l23;
l19:
  i1 = OOC_IR__BuilderDesc_WidenForAssign_LengthOk();
  
  goto l23;
l21:
  i1=1u;
l23:
  if (i1) goto l25;
  *expr = (OOC_IR__Expression)i0;
  return 0u;
  goto l28;
l25:
  return 1u;
  goto l28;
l27:
  return 0u;
l28:
  _failed_function(101339); return 0;
  ;
}

OOC_CHAR8 OOC_IR__BuilderDesc_WidenToCommon(OOC_IR__Builder b, OOC_IR__Expression *left, OOC_IR__Expression *right) {
  register OOC_INT32 i0,i1,i2;
  auto OOC_SymbolTable__Type OOC_IR__BuilderDesc_WidenToCommon_CommonBase(OOC_SymbolTable__Type t1, OOC_SymbolTable__Type t2);
    
    OOC_SymbolTable__Type OOC_IR__BuilderDesc_WidenToCommon_CommonBase(OOC_SymbolTable__Type t1, OOC_SymbolTable__Type t2) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)t1;
      i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
      i1 = (OOC_INT32)t2;
      i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i1);
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l3;
      i2=0u;
      goto l5;
l3:
      i2 = i1!=(OOC_INT32)0;
      
l5:
      if (i2) goto l7;
      return (OOC_SymbolTable__Type)(OOC_INT32)0;
      goto l12;
l7:
      i2 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      if (!i2) goto l11;
      i0=i1;
l11:
      i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i0);
      return (OOC_SymbolTable__Type)i0;
l12:
      _failed_function(103241); return 0;
      ;
    }


  i0 = (OOC_INT32)*right;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103776))+4);
  i1 = (OOC_INT32)b;
  i0 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i1, (void*)(OOC_INT32)left, (OOC_SymbolTable__Type)i0);
  if (i0) goto l3;
  i0 = (OOC_INT32)*left;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103805))+4);
  i0 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i1, (void*)(OOC_INT32)right, (OOC_SymbolTable__Type)i0);
  
  goto l5;
l3:
  i0=1u;
l5:
  if (i0) goto l21;
  i0 = (OOC_INT32)*left;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 103848)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l9;
  i1=0u;
  goto l11;
l9:
  i1 = (OOC_INT32)*right;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 103867)))), &_td_OOC_IR__ConstDesc);
  
l11:
  if (!i1) goto l22;
  i1 = (OOC_INT32)*right;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 103909))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 103921))+4);
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_WidenToCommon_CommonBase((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l22;
  i1 = (OOC_INT32)b;
  i2 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i1, (void*)(OOC_INT32)left, (OOC_SymbolTable__Type)i0);
  if (i2) goto l17;
  i0=0u;
  goto l18;
l17:
  i0 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i1, (void*)(OOC_INT32)right, (OOC_SymbolTable__Type)i0);
  
l18:
  _assert(i0, 127, 104014);
  return 1u;
  goto l22;
l21:
  return 1u;
l22:
  return 0u;
  ;
}

static void OOC_IR__MakeAssignmentCompatible(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)type;
  i2 = OOC_IR__BuilderDesc_WidenForAssign((OOC_IR__Builder)i0, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i1);
  i2 = !i2;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 104535))+20);
  i3 = (OOC_INT32)*expr;
  i2 = i3!=i2;
  
l5:
  if (!i2) goto l7;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104559)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 24, (OOC_Scanner_SymList__Symbol)i2);
  OOC_IR__BuilderDesc_SetNameToType((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i1);
l7:
  return;
  ;
}

static void OOC_IR__InitTypeTag(OOC_IR__TypeTag tag, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)tag;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)design;
  *(OOC_INT32*)((_check_pointer(i1, 104922))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeTag(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)design;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105113))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105113))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105118)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  type = (OOC_SymbolTable__Type)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105144)))), &_td_OOC_SymbolTable__RecordDesc));
  if (i2) goto l3;
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105172)))), &_td_OOC_SymbolTable__RecordDesc, 105172)), 105179))+38);
  i1 = !i1;
  
  goto l5;
l3:
  i1=1u;
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 105231));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105206)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 55, (OOC_Scanner_SymList__Symbol)i2);
l7:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeTag.baseTypes[0]);
  OOC_IR__InitTypeTag((OOC_IR__TypeTag)i2, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i0);
  return (OOC_IR__Expression)i2;
  ;
}

void OOC_IR__VisitorDesc_VisitTypeTag(OOC_IR__Visitor v, OOC_IR__TypeTag tag) {

  return;
  ;
}

void OOC_IR__TypeTagDesc_Accept(OOC_IR__TypeTag tag, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)tag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105483)))), OOC_IR__VisitorDesc_VisitTypeTag)),OOC_IR__VisitorDesc_VisitTypeTag)((OOC_IR__Visitor)i0, (OOC_IR__TypeTag)i1);
  return;
  ;
}

static void OOC_IR__InitTypeTest(OOC_IR__TypeTest test, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr, OOC_SymbolTable__Type referenceType, OOC_CHAR8 checkPointer, OOC_IR__Expression origExpr, OOC_IR__TypeRef origType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(0);
  i1 = (OOC_INT32)test;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i1, 105938))+8) = i0;
  i0 = (OOC_INT32)referenceType;
  *(OOC_INT32*)((_check_pointer(i1, 105962))+12) = i0;
  i0 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i1, 106004))+16) = i0;
  i0 = (OOC_INT32)origExpr;
  *(OOC_INT32*)((_check_pointer(i1, 106044))+20) = i0;
  i0 = (OOC_INT32)origType;
  *(OOC_INT32*)((_check_pointer(i1, 106076))+24) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeTest(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression expr, OOC_IR__Expression referenceType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SymbolTable__Type refType;
  OOC_IR__Expression origExpr;
  OOC_CHAR8 checkPointer;
  OOC_IR__TypeTest test;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewTypeTest_HasDynamicType(OOC_IR__Expression expr);
    
    OOC_CHAR8 OOC_IR__BuilderDesc_NewTypeTest_HasDynamicType(OOC_IR__Expression expr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Type type;

      i0 = (OOC_INT32)expr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106456))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106456))+4);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 106461)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
      type = (OOC_SymbolTable__Type)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 106488)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i2) goto l15;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 106661)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i0) goto l9;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 106750)))), &_td_OOC_SymbolTable__TypeVarDesc);
      if (i0) goto l7;
      return 0u;
      goto l24;
l7:
      return 1u;
      goto l24;
l9:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 106709))+40);
      i0 = OOC_SymbolTable_TypeRules__IsRecord((OOC_SymbolTable__Type)i0);
      if (i0) goto l12;
      i0=0u;
      goto l13;
l12:
      i0 = *(OOC_UINT8*)((_check_pointer(i1, 106727))+49);
      i0 = !i0;
      
l13:
      return i0;
      goto l24;
l15:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106526)))), &_td_OOC_IR__VarDesc));
      if (i1) goto l22;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106555)))), &_td_OOC_IR__VarDesc, 106555)), 106559))+8);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 106569)))), &_td_OOC_SymbolTable__VarDeclDesc, 106569)), 106577))+59);
      if (i1) goto l20;
      i0=0u;
      goto l23;
l20:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106609)))), &_td_OOC_IR__VarDesc, 106609)), 106613))+8);
      i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106623)))), &_td_OOC_SymbolTable__VarDeclDesc, 106623)), 106631))+64);
      
      goto l23;
l22:
      i0=1u;
l23:
      return i0;
l24:
      _failed_function(106354); return 0;
      ;
    }


  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)referenceType;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106946)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  i2 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i2);
  refType = (OOC_SymbolTable__Type)i2;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l34;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 107049)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i3) goto l32;
  i3 = (OOC_INT32)expr;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 107171))+4);
  i2 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i4);
  i2 = !i2;
  if (i2) goto l30;
  i0 = OOC_IR__BuilderDesc_NewTypeTest_HasDynamicType((OOC_IR__Expression)i3);
  i0 = !i0;
  if (i0) goto l28;
  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107596))+4);
  i2 = (OOC_INT32)refType;
  i1 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
  if (!i1) goto l11;
  i1 = (OOC_INT32)referenceType;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 107658));
  i3 = (OOC_INT32)b;
  OOC_IR__BuilderDesc_WarnSym((OOC_IR__Builder)i3, 61, (OOC_Scanner_SymList__Symbol)i1);
l11:
  origExpr = (OOC_IR__Expression)i0;
  i1 = (OOC_INT32)sym;
  i3 = *(OOC_INT32*)((_check_pointer(i1, 107774))+16);
  i4 = (OOC_INT32)OOC_Config_StdPragmas__derefCheck;
  i5 = (OOC_INT32)b;
  i3 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i5, (Config_Section_Options__Option)i4, i3);
  checkPointer = i3;
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107797)))), &_td_OOC_IR__DerefDesc);
  if (i4) goto l22;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107867))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 107873)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i4) goto l16;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107897))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 107903)))), &_td_OOC_SymbolTable__TypeVarDesc);
  
  goto l18;
l16:
  i4=1u;
l18:
  if (!i4) goto l21;
  i2 = (OOC_INT32)OOC_SymbolTable_TypeRules__PointerBaseType((OOC_SymbolTable__Type)i2);
  refType = (OOC_SymbolTable__Type)i2;
  
l21:
  i4=i2;i2=i0;
  goto l23;
l22:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107833)))), &_td_OOC_IR__DerefDesc, 107833)), 107839))+8);
  expr = (OOC_IR__Expression)i4;
  {register OOC_INT32 h0=i2;i2=i4;i4=h0;}
l23:
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeTest.baseTypes[0]);
  test = (OOC_IR__TypeTest)i5;
  i6 = (OOC_INT32)referenceType;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 108025)))), &_td_OOC_IR__TypeRefDesc);
  if (i7) goto l26;
  i6=(OOC_INT32)0;
  goto l27;
l26:
  i6 = _type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 108075)))), &_td_OOC_IR__TypeRefDesc, 108075);
  
l27:
  OOC_IR__InitTypeTest((OOC_IR__TypeTest)i5, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i2, (OOC_SymbolTable__Type)i4, i3, (OOC_IR__Expression)i0, (OOC_IR__TypeRef)i6);
  return (OOC_IR__Expression)i5;
  goto l35;
l28:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 107546));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107516)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 43, (OOC_Scanner_SymList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l35;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 107240));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107197)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 17, (OOC_Scanner_SymList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l35;
l32:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 107123));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107084)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 67, (OOC_Scanner_SymList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l35;
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107017))+20);
  return (OOC_IR__Expression)i0;
l35:
  _failed_function(106144); return 0;
  ;
}

void OOC_IR__VisitorDesc_VisitTypeTest(OOC_IR__Visitor v, OOC_IR__TypeTest test) {

  return;
  ;
}

void OOC_IR__TypeTestDesc_Accept(OOC_IR__TypeTest test, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)test;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108409)))), OOC_IR__VisitorDesc_VisitTypeTest)),OOC_IR__VisitorDesc_VisitTypeTest)((OOC_IR__Visitor)i0, (OOC_IR__TypeTest)i1);
  return;
  ;
}

static void OOC_IR__InitTypeGuard(OOC_IR__TypeGuard guard, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__TypeTest test, OOC_CHAR8 checkPointer, OOC_CHAR8 checkType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)guard;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)test;
  *(OOC_INT32*)((_check_pointer(i0, 108783))+8) = i1;
  i1 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i0, 108808))+12) = i1;
  i1 = checkType;
  *(OOC_UINT8*)((_check_pointer(i0, 108849))+13) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeGuard(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression design, OOC_IR__TypeRef ref) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SymbolTable__Type guardType;
  OOC_IR__Expression test;
  OOC_IR__TypeGuard guard;

  i0 = (OOC_INT32)ref;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109126))+12);
  guardType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)design;
  i4 = (OOC_INT32)sym;
  OOC_IR__BuilderDesc_CheckFunctionOp((OOC_IR__Builder)i2, (OOC_IR__Expression)i3, (OOC_Scanner_SymList__Symbol)i4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 109182)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i4, (OOC_IR__Expression)i3, (OOC_IR__Expression)i0);
  test = (OOC_IR__Expression)i0;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109224)))), &_td_OOC_IR__TypeTestDesc);
  if (i3) goto l3;
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeGuard.baseTypes[0]);
  guard = (OOC_IR__TypeGuard)i3;
  i1 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i1);
  i5 = *(OOC_INT32*)((_check_pointer(i4, 109388))+16);
  i6 = (OOC_INT32)OOC_Config_StdPragmas__derefCheck;
  i5 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i6, i5);
  i6 = *(OOC_INT32*)((_check_pointer(i4, 109456))+16);
  i7 = (OOC_INT32)OOC_Config_StdPragmas__typeGuard;
  i2 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i7, i6);
  OOC_IR__InitTypeGuard((OOC_IR__TypeGuard)i3, (OOC_Scanner_SymList__Symbol)i4, (OOC_SymbolTable__Type)i1, (OOC_IR__TypeTest)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109315)))), &_td_OOC_IR__TypeTestDesc, 109315)), i5, i2);
  return (OOC_IR__Expression)i3;
l4:
  _failed_function(108921); return 0;
  ;
}

void OOC_IR__VisitorDesc_VisitTypeGuard(OOC_IR__Visitor v, OOC_IR__TypeGuard test) {

  return;
  ;
}

void OOC_IR__TypeGuardDesc_Accept(OOC_IR__TypeGuard test, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)test;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109687)))), OOC_IR__VisitorDesc_VisitTypeGuard)),OOC_IR__VisitorDesc_VisitTypeGuard)((OOC_IR__Visitor)i0, (OOC_IR__TypeGuard)i1);
  return;
  ;
}

static void OOC_IR__InitReference(OOC_IR__Reference ref, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)ref;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  OOC_IR__InitExpression((OOC_IR__Expression)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i0, 110011))+8) = i1;
  return;
  ;
}

static void OOC_IR__InitModuleRef(OOC_IR__ModuleRef modRef, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__Module decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)modRef;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitReference((OOC_IR__Reference)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Declaration)i3);
  return;
  ;
}

OOC_IR__ModuleRef OOC_IR__BuilderDesc_NewModuleRef(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__Module decl) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__ModuleRef modRef;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ModuleRef.baseTypes[0]);
  modRef = (OOC_IR__ModuleRef)i0;
  i1 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 110524))+28);
  i2 = (OOC_INT32)name;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitModuleRef((OOC_IR__ModuleRef)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Module)i3);
  return (OOC_IR__ModuleRef)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitModuleRef(OOC_IR__Visitor v, OOC_IR__ModuleRef modRef) {

  return;
  ;
}

void OOC_IR__ModuleRefDesc_Accept(OOC_IR__ModuleRef modRef, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)modRef;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110743)))), OOC_IR__VisitorDesc_VisitModuleRef)),OOC_IR__VisitorDesc_VisitModuleRef)((OOC_IR__Visitor)i0, (OOC_IR__ModuleRef)i1);
  return;
  ;
}

static void OOC_IR__InitPredefProc(OOC_IR__PredefProc pproc, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__PredefProc decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)pproc;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitReference((OOC_IR__Reference)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Declaration)i3);
  return;
  ;
}

static OOC_IR__PredefProc OOC_IR__NewPredefProc(OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__PredefProc decl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__PredefProc.baseTypes[0]);
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)decl;
  OOC_IR__InitPredefProc((OOC_IR__PredefProc)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)(OOC_INT32)0, (OOC_SymbolTable__PredefProc)i2);
  return (OOC_IR__PredefProc)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitPredefProc(OOC_IR__Visitor v, OOC_IR__PredefProc pproc) {

  return;
  ;
}

void OOC_IR__PredefProcDesc_Accept(OOC_IR__PredefProc pproc, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)pproc;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111469)))), OOC_IR__VisitorDesc_VisitPredefProc)),OOC_IR__VisitorDesc_VisitPredefProc)((OOC_IR__Visitor)i0, (OOC_IR__PredefProc)i1);
  return;
  ;
}

static void OOC_IR__InitProcedureRef(OOC_IR__ProcedureRef procRef, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__ProcDecl decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 111756))+64);
  i2 = (OOC_INT32)procRef;
  i3 = (OOC_INT32)name;
  OOC_IR__InitReference((OOC_IR__Reference)i2, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Declaration)i0);
  return;
  ;
}

static OOC_IR__ProcedureRef OOC_IR__NewProcedureRef(OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__ProcDecl decl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ProcedureRef.baseTypes[0]);
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)decl;
  OOC_IR__InitProcedureRef((OOC_IR__ProcedureRef)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__ProcDecl)i2);
  return (OOC_IR__ProcedureRef)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitProcedureRef(OOC_IR__Visitor v, OOC_IR__ProcedureRef procRef) {

  return;
  ;
}

void OOC_IR__ProcedureRefDesc_Accept(OOC_IR__ProcedureRef procRef, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procRef;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 112198)))), OOC_IR__VisitorDesc_VisitProcedureRef)),OOC_IR__VisitorDesc_VisitProcedureRef)((OOC_IR__Visitor)i0, (OOC_IR__ProcedureRef)i1);
  return;
  ;
}

static void OOC_IR__InitTypeRef(OOC_IR__TypeRef typeRef, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__TypeDecl decl, OOC_SymbolTable__Type qualType) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)typeRef;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitReference((OOC_IR__Reference)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Declaration)i3);
  i1 = (OOC_INT32)qualType;
  *(OOC_INT32*)((_check_pointer(i0, 112552))+12) = i1;
  return;
  ;
}

OOC_IR__TypeRef OOC_IR__BuilderDesc_NewTypeRef(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__TypeDecl decl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_SymbolTable__Type qualType;
  OOC_SymbolTable__TypeRefArray arguments;
  OOC_INT32 i;
  OOC_IR__TypeRef typeRef;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 112803))+48);
  qualType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 112826))+28);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 112856)))), &_td_OOC_SymbolTable__TypeVarDesc));
  
l5:
  if (!i2) goto l16;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 112980))+28);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 112989))+20);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 112996)), 0);
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], i2);
  arguments = (OOC_SymbolTable__TypeRefArray)i2;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 113034)), 0);
  i4 = 0<i3;
  if (!i4) goto l15;
  i4 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i5=0;
l10_loop:
  i6 = _check_pointer(i2, 113075);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = OOC_ARRAY_LENGTH((_check_pointer(i2, 113075)), 0);
  i8 = _check_index(i5, i8, OOC_UINT32, 113075);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 113088))+28);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 113097))+20);
  i8 = _check_pointer(i8, 113104);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 113104))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 113107))+40);
  OOC_SymbolTable__InitTypeRef((void*)(i6+(_check_index(i5, i7, OOC_UINT32, 113075))*8), (RT0__Struct)i4, (OOC_SymbolTable__Type)i8);
  i5 = i5+1;
  i = i5;
  i6 = i5<i3;
  if (i6) goto l10_loop;
l15:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 113174))+20);
  i1 = (OOC_INT32)OOC_SymbolTable__NewQualType((OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Position)i3, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__TypeRefArray)i2);
  qualType = (OOC_SymbolTable__Type)i1;
  
l16:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeRef.baseTypes[0]);
  typeRef = (OOC_IR__TypeRef)i2;
  i3 = (OOC_INT32)b;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 113305))+24);
  i4 = (OOC_INT32)name;
  OOC_IR__InitTypeRef((OOC_IR__TypeRef)i2, (OOC_Scanner_SymList__Symbol)i4, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__TypeDecl)i0, (OOC_SymbolTable__Type)i1);
  return (OOC_IR__TypeRef)i2;
  ;
}

void OOC_IR__VisitorDesc_VisitTypeRef(OOC_IR__Visitor v, OOC_IR__TypeRef typeRef) {

  return;
  ;
}

void OOC_IR__TypeRefDesc_Accept(OOC_IR__TypeRef typeRef, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)typeRef;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 113524)))), OOC_IR__VisitorDesc_VisitTypeRef)),OOC_IR__VisitorDesc_VisitTypeRef)((OOC_IR__Visitor)i0, (OOC_IR__TypeRef)i1);
  return;
  ;
}

static void OOC_IR__InitVar(OOC_IR__Var var, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__VarDecl decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitReference((OOC_IR__Reference)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Declaration)i3);
  return;
  ;
}

OOC_IR__Var OOC_IR__BuilderDesc_NewVar(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol name, OOC_SymbolTable__VarDecl decl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
  OOC_IR__Var var;
  OOC_SymbolTable__TypeRefArray args;
  OOC_SymbolTable__TypeVarArray params;
  OOC_SymbolTable__TypeRefArray recordArgs;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Var.baseTypes[0]);
  var = (OOC_IR__Var)i0;
  i1 = (OOC_INT32)decl;
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 114090))+57);
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 114109))+48);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 114114))+28);
  i2 = i2!=(OOC_INT32)0;
  
l5:
  if (i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115736))+48);
  i2 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i2);
  
  goto l53;
l7:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 114381))+48);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 114386))+28);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 114395))+20);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 114402)), 0);
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], i2);
  args = (OOC_SymbolTable__TypeRefArray)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 114421))+48);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 114427)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i3) goto l10;
  i3=0u;
  goto l12;
l10:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 114459))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 114469)))), &_td_OOC_SymbolTable__PointerDesc, 114469)), 114477))+40);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 114487)))), &_td_OOC_SymbolTable__QualTypeDesc);
  
l12:
  if (i3) goto l22;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115434))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 115439))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 115448))+20);
  params = (OOC_SymbolTable__TypeVarArray)i3;
  i = 0;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 115487)), 0);
  i5 = 0<i4;
  if (!i5) goto l52;
  i5 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i6=0;
l16_loop:
  i7 = _check_pointer(i2, 115525);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i9 = OOC_ARRAY_LENGTH((_check_pointer(i2, 115525)), 0);
  i9 = _check_index(i6, i9, OOC_UINT32, 115525);
  i9 = _check_pointer(i3, 115536);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i6, i10, OOC_UINT32, 115536))*4);
  OOC_SymbolTable__InitTypeRef((void*)(i7+(_check_index(i6, i8, OOC_UINT32, 115525))*8), (RT0__Struct)i5, (OOC_SymbolTable__Type)i9);
  i6 = i6+1;
  i = i6;
  i7 = i6<i4;
  if (i7) goto l16_loop;
  goto l52;
l22:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 114825))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 114835)))), &_td_OOC_SymbolTable__PointerDesc, 114835)), 114843))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 114870)))), &_td_OOC_SymbolTable__QualTypeDesc, 114870)), 114879))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 114893)))), &_td_OOC_SymbolTable__RecordDesc, 114893)), 114900))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 114909))+20);
  params = (OOC_SymbolTable__TypeVarArray)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 114944))+48);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 114954)))), &_td_OOC_SymbolTable__PointerDesc, 114954)), 114962))+40);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 114976)))), &_td_OOC_SymbolTable__QualTypeDesc, 114976)), 114985))+48);
  recordArgs = (OOC_SymbolTable__TypeRefArray)i4;
  i = 0;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i2, 115027)), 0);
  i6 = 0<i5;
  if (!i6) goto l52;
  i6 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i7=0;
l25_loop:
  j = 0;
  i8 = OOC_ARRAY_LENGTH((_check_pointer(i4, 115088)), 0);
  i8 = 0!=i8;
  if (i8) goto l28;
  i8=0u;
  goto l30;
l28:
  i8 = _check_pointer(i4, 115121);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115136))+48);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 115141))+28);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 115150))+20);
  i10 = _check_pointer(i10, 115157);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(0, i9, OOC_UINT32, 115121))*8);
  i9 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i7, i11, OOC_UINT32, 115157))*4);
  i8 = i8!=i9;
  
l30:
  if (i8) goto l32;
  i8=0;
  goto l42;
l32:
  i8=0;
l33_loop:
  i8 = i8+1;
  j = i8;
  i9 = OOC_ARRAY_LENGTH((_check_pointer(i4, 115088)), 0);
  i9 = i8!=i9;
  if (i9) goto l36;
  i9=0u;
  goto l38;
l36:
  i9 = _check_pointer(i4, 115121);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115136))+48);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 115141))+28);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 115150))+20);
  i11 = _check_pointer(i11, 115157);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i8, i10, OOC_UINT32, 115121))*8);
  i10 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i7, i12, OOC_UINT32, 115157))*4);
  i9 = i9!=i10;
  
l38:
  if (i9) goto l33_loop;
l42:
  i9 = OOC_ARRAY_LENGTH((_check_pointer(i4, 115232)), 0);
  i9 = i8==i9;
  if (i9) goto l45;
  i9 = _check_pointer(i2, 115356);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i11 = OOC_ARRAY_LENGTH((_check_pointer(i2, 115356)), 0);
  i11 = _check_index(i7, i11, OOC_UINT32, 115356);
  i11 = _check_pointer(i3, 115367);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i8, i12, OOC_UINT32, 115367))*4);
  OOC_SymbolTable__InitTypeRef((void*)(i9+(_check_index(i7, i10, OOC_UINT32, 115356))*8), (RT0__Struct)i6, (OOC_SymbolTable__Type)i8);
  goto l46;
l45:
  i8 = _check_pointer(i2, 115273);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i10 = OOC_ARRAY_LENGTH((_check_pointer(i2, 115273)), 0);
  i10 = _check_index(i7, i10, OOC_UINT32, 115273);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115282))+48);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 115287))+28);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 115296))+20);
  i10 = _check_pointer(i10, 115303);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i7, i11, OOC_UINT32, 115303))*4);
  OOC_SymbolTable__InitTypeRef((void*)(i8+(_check_index(i7, i9, OOC_UINT32, 115273))*8), (RT0__Struct)i6, (OOC_SymbolTable__Type)i10);
l46:
  i7 = i7+1;
  i = i7;
  i8 = i7<i5;
  if (i8) goto l25_loop;
l52:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115604))+48);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115668))+48);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 115673))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 115609))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115624))+48);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 115682))+20);
  i2 = (OOC_INT32)OOC_SymbolTable__NewTypeClosure((OOC_SymbolTable__Position)i3, (OOC_SymbolTable__Type)i5, (OOC_SymbolTable__TypeVarArray)i4, (OOC_SymbolTable__TypeRefArray)i2);
  
l53:
  i2 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i2);
  i3 = (OOC_INT32)name;
  OOC_IR__InitVar((OOC_IR__Var)i0, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__VarDecl)i1);
  return (OOC_IR__Var)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitVar(OOC_IR__Visitor v, OOC_IR__Var var) {

  return;
  ;
}

void OOC_IR__VarDesc_Accept(OOC_IR__Var var, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)var;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 115961)))), OOC_IR__VisitorDesc_VisitVar)),OOC_IR__VisitorDesc_VisitVar)((OOC_IR__Visitor)i0, (OOC_IR__Var)i1);
  return;
  ;
}

void OOC_IR__InitStatement(OOC_IR__Statement statm, OOC_Scanner_SymList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(17);
  i1 = (OOC_INT32)statm;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitExpression((OOC_IR__Expression)i1, (OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  return;
  ;
}

static void OOC_IR__InitAssert(OOC_IR__Assert assert, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression predicate, OOC_INT32 code, OOC_CHAR8 disabled) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)assert;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)predicate;
  *(OOC_INT32*)((_check_pointer(i0, 116544))+8) = i1;
  i1 = code;
  *(OOC_INT32*)((_check_pointer(i0, 116580))+12) = i1;
  i1 = disabled;
  *(OOC_UINT8*)((_check_pointer(i0, 116606))+16) = i1;
  return;
  ;
}

OOC_IR__Assert OOC_IR__BuilderDesc_NewAssert(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression predicate, OOC_IR__Expression code, OOC_CHAR8 disabled) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__Assert assert;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Assert.baseTypes[0]);
  assert = (OOC_IR__Assert)i0;
  i1 = (OOC_INT32)predicate;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l4;
  i2 = (OOC_INT32)b;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 116905)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1);
  
l4:
  i2 = (OOC_INT32)code;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  i3 = (OOC_INT32)b;
  i2 = OOC_IR__BuilderDesc_AssertIntConst((OOC_IR__Builder)i3, (OOC_IR__Expression)i2, 0, 128);
  
  goto l8;
l7:
  i2=127;
l8:
  i3 = (OOC_INT32)sym;
  i4 = disabled;
  OOC_IR__InitAssert((OOC_IR__Assert)i0, (OOC_Scanner_SymList__Symbol)i3, (OOC_IR__Expression)i1, i2, i4);
  return (OOC_IR__Assert)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitAssert(OOC_IR__Visitor v, OOC_IR__Assert assert) {

  return;
  ;
}

void OOC_IR__AssertDesc_Accept(OOC_IR__Assert assert, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)assert;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 117333)))), OOC_IR__VisitorDesc_VisitAssert)),OOC_IR__VisitorDesc_VisitAssert)((OOC_IR__Visitor)i0, (OOC_IR__Assert)i1);
  return;
  ;
}

void OOC_IR__InitAssignment(OOC_IR__Assignment assignment, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression variable, OOC_IR__Expression value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)assignment;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)variable;
  *(OOC_INT32*)((_check_pointer(i0, 117662))+8) = i1;
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 117700))+12) = i1;
  return;
  ;
}

void OOC_IR__BuilderDesc_AssertVar(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 117828));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 117841))+4);
  i2 = OOC_SymbolTable_TypeRules__IsReadOnlyType((OOC_SymbolTable__Module)i2, (OOC_SymbolTable__Type)i3);
  if (i2) goto l36;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 117924)))), &_td_OOC_IR__VarDesc);
  if (i2) goto l23;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 118194)))), &_td_OOC_IR__DerefDesc);
  if (i2) goto l37;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 118274)))), &_td_OOC_IR__IndexDesc);
  if (i2) goto l20;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 118370)))), &_td_OOC_IR__SelectFieldDesc);
  if (i2) goto l15;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 118596)))), &_td_OOC_IR__TypeGuardDesc);
  if (i2) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 118733));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 118706)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 29, (OOC_Scanner_SymList__Symbol)i1);
  goto l37;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 118636))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 118642))+8);
  OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  goto l37;
l15:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 118413))+8);
  OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i0, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 118501))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 118487));
  i2 = OOC_SymbolTable_TypeRules__IsReadOnly((OOC_SymbolTable__Module)i3, (OOC_SymbolTable__Declaration)i2);
  if (!i2) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 118558))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 118526)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_SymList__Symbol)i1);
  goto l37;
l20:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 118311))+8);
  OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  goto l37;
l23:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 117974))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 117960));
  i2 = OOC_SymbolTable_TypeRules__IsReadOnly((OOC_SymbolTable__Module)i3, (OOC_SymbolTable__Declaration)i2);
  if (i2) goto l33;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 118057))+8);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 118063)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i2) goto l28;
  i2=0u;
  goto l30;
l28:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 118085))+8);
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 118095)))), &_td_OOC_SymbolTable__VarDeclDesc, 118095)), 118103))+62);
  
l30:
  if (!i2) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 118162));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 118131)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 42, (OOC_Scanner_SymList__Symbol)i1);
  goto l37;
l33:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 118030));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 117998)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_SymList__Symbol)i1);
  goto l37;
l36:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 117892));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 117860)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_SymList__Symbol)i1);
l37:
  return;
  ;
}

OOC_IR__Statement OOC_IR__BuilderDesc_NewAssignment(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression variable, OOC_IR__Expression value) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)variable;
  OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 119035))+4);
  i3 = (OOC_INT32)sym;
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i3, (void*)(OOC_INT32)&value, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)value;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 119074))+4);
  i4 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i4);
  if (i4) goto l11;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 119294))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 119301)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i4) goto l5;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 119324))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 119331)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l7;
l5:
  i4=1u;
l7:
  if (i4) goto l9;
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Assignment.baseTypes[0]);
  OOC_IR__InitAssignment((OOC_IR__Assignment)i0, (OOC_Scanner_SymList__Symbol)i3, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2);
  return (OOC_IR__Statement)i0;
  goto l12;
l9:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 119426)))), OOC_IR__BuilderDesc_NewCopy)),OOC_IR__BuilderDesc_NewCopy)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
  return (OOC_IR__Statement)i0;
  goto l12;
l11:
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 119247)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i3, (OOC_IR__Expression)i1, 0);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 119238)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 119167)))), OOC_IR__BuilderDesc_NewCopyString)),OOC_IR__BuilderDesc_NewCopyString)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1, (OOC_IR__Expression)i4);
  return (OOC_IR__Statement)i0;
l12:
  _failed_function(118802); return 0;
  ;
}

void OOC_IR__VisitorDesc_VisitAssignment(OOC_IR__Visitor v, OOC_IR__Assignment assignment) {

  return;
  ;
}

void OOC_IR__AssignmentDesc_Accept(OOC_IR__Assignment assignment, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)assignment;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 119776)))), OOC_IR__VisitorDesc_VisitAssignment)),OOC_IR__VisitorDesc_VisitAssignment)((OOC_IR__Visitor)i0, (OOC_IR__Assignment)i1);
  return;
  ;
}

static void OOC_IR__InitAssignOp(OOC_IR__AssignOp ao, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)op;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 120018)))), &_td_OOC_IR__BinaryArithDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 120089)))), &_td_OOC_IR__ChangeElementDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 120085)))), 120085);
  goto l8;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 120141))+12);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)ao;
  OOC_IR__InitAssignment((OOC_IR__Assignment)i3, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
  goto l8;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 120068))+12);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)ao;
  OOC_IR__InitAssignment((OOC_IR__Assignment)i3, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
l8:
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewAssignOp(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 120303)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__AssignOp.baseTypes[0]);
  OOC_IR__InitAssignOp((OOC_IR__AssignOp)i2, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i0);
  return (OOC_IR__Expression)i2;
  goto l4;
l3:
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 120328))+20);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(120206); return 0;
  ;
}

void OOC_IR__VisitorDesc_VisitAssignOp(OOC_IR__Visitor v, OOC_IR__AssignOp ao) {

  return;
  ;
}

void OOC_IR__AssignOpDesc_Accept(OOC_IR__AssignOp ao, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)ao;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 120636)))), OOC_IR__VisitorDesc_VisitAssignOp)),OOC_IR__VisitorDesc_VisitAssignOp)((OOC_IR__Visitor)i0, (OOC_IR__AssignOp)i1);
  return;
  ;
}

static void OOC_IR__InitCall(OOC_IR__Call call, OOC_IR__Expression design, OOC_IR__ExpressionList arguments, OOC_SymbolTable__VarDeclArray formalPars) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Type resultType;

  i0 = (OOC_INT32)design;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 120979));
  i2 = (OOC_INT32)call;
  OOC_IR__InitStatement((OOC_IR__Statement)i2, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 121044))+4);
  i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__FunctionResultType((OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i1);
  resultType = (OOC_SymbolTable__Type)i1;
  i3 = i1!=0;
  if (!i3) goto l4;
  *(OOC_INT32*)((_check_pointer(i2, 121135))+4) = i1;
l4:
  *(OOC_INT32*)((_check_pointer(i2, 121173))+8) = i0;
  i0 = (OOC_INT32)arguments;
  *(OOC_INT32*)((_check_pointer(i2, 121201))+12) = i0;
  i0 = (OOC_INT32)formalPars;
  *(OOC_INT32*)((_check_pointer(i2, 121235))+16) = i0;
  return;
  ;
}

void OOC_IR__VisitorDesc_VisitCall(OOC_IR__Visitor v, OOC_IR__Call call) {

  return;
  ;
}

void OOC_IR__CallDesc_Accept(OOC_IR__Call call, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)call;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 121415)))), OOC_IR__VisitorDesc_VisitCall)),OOC_IR__VisitorDesc_VisitCall)((OOC_IR__Visitor)i0, (OOC_IR__Call)i1);
  return;
  ;
}

static void OOC_IR__InitCopy(OOC_IR__Copy cp, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_CHAR8 checkDynamicType) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)cp;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i0, 121714))+8) = i1;
  i1 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i0, 121740))+12) = i1;
  i1 = checkDynamicType;
  *(OOC_UINT8*)((_check_pointer(i0, 121762))+16) = i1;
  return;
  ;
}

OOC_IR__Copy OOC_IR__BuilderDesc_NewCopy(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewCopy_HasDynamicType(OOC_IR__Expression dest);
    
    OOC_CHAR8 OOC_IR__BuilderDesc_NewCopy_HasDynamicType(OOC_IR__Expression dest) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)dest;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 122030))+4);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 122037)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 122058))+4);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 122068)))), &_td_OOC_SymbolTable__RecordDesc, 122068)), 122075))+38);
      
l5:
      if (!i1) goto l14;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 122112)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l12;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 122170)))), &_td_OOC_IR__VarDesc);
      if (!i1) goto l14;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 122205)))), &_td_OOC_IR__VarDesc, 122205)), 122209))+8);
      i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 122220)))), &_td_OOC_SymbolTable__VarDeclDesc, 122220)), 122228))+59);
      return i0;
      goto l14;
l12:
      return 1u;
l14:
      return 0u;
      ;
    }


  i0 = (OOC_INT32)dest;
  i1 = OOC_IR__BuilderDesc_NewCopy_HasDynamicType((OOC_IR__Expression)i0);
  if (i1) goto l3;
  i1=0u;
  goto l4;
l3:
  i1 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 122429))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_StdPragmas__typeGuard;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  
l4:
  i2 = (OOC_INT32)source;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Copy.baseTypes[0]);
  i4 = (OOC_INT32)sym;
  OOC_IR__InitCopy((OOC_IR__Copy)i3, (OOC_Scanner_SymList__Symbol)i4, (OOC_IR__Expression)i2, (OOC_IR__Expression)i0, i1);
  return (OOC_IR__Copy)i3;
  ;
}

void OOC_IR__VisitorDesc_VisitCopy(OOC_IR__Visitor v, OOC_IR__Copy cp) {

  return;
  ;
}

void OOC_IR__CopyDesc_Accept(OOC_IR__Copy cp, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)cp;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 122673)))), OOC_IR__VisitorDesc_VisitCopy)),OOC_IR__VisitorDesc_VisitCopy)((OOC_IR__Visitor)i0, (OOC_IR__Copy)i1);
  return;
  ;
}

static void OOC_IR__InitCopyParameter(OOC_IR__CopyParameter cp, OOC_Scanner_SymList__Symbol sym, OOC_IR__Var param) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)cp;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)param;
  *(OOC_INT32*)((_check_pointer(i0, 122936))+8) = i1;
  return;
  ;
}

OOC_IR__CopyParameter OOC_IR__BuilderDesc_NewCopyParameter(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Var param) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CopyParameter.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)param;
  OOC_IR__InitCopyParameter((OOC_IR__CopyParameter)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Var)i2);
  return (OOC_IR__CopyParameter)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitCopyParameter(OOC_IR__Visitor v, OOC_IR__CopyParameter cp) {

  return;
  ;
}

void OOC_IR__CopyParameterDesc_Accept(OOC_IR__CopyParameter cp, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)cp;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 123360)))), OOC_IR__VisitorDesc_VisitCopyParameter)),OOC_IR__VisitorDesc_VisitCopyParameter)((OOC_IR__Visitor)i0, (OOC_IR__CopyParameter)i1);
  return;
  ;
}

static void OOC_IR__InitCopyString(OOC_IR__CopyString cp, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression maxLength) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)cp;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i0, 123674))+8) = i1;
  i1 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i0, 123700))+12) = i1;
  i1 = (OOC_INT32)maxLength;
  *(OOC_INT32*)((_check_pointer(i0, 123722))+16) = i1;
  return;
  ;
}

OOC_IR__CopyString OOC_IR__BuilderDesc_NewCopyString(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression maxLength) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type baseChar;
  OOC_CHAR8 ok;
  OOC_IR__CopyString cp;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)dest;
  OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 124040))+4);
  i2 = OOC_SymbolTable_TypeRules__IsArrayOfChar((OOC_SymbolTable__Type)i2, 1u);
  i2 = !i2;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 124096));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124065)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_SymList__Symbol)i2);
l3:
  i2 = (OOC_INT32)source;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 124132)))), &_td_OOC_IR__ConstDesc);
  if (i3) goto l9;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 124602))+4);
  i3 = OOC_SymbolTable_TypeRules__IsArrayOfChar((OOC_SymbolTable__Type)i3, 1u);
  i3 = !i3;
  if (!i3) goto l14;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 124660));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124627)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_SymList__Symbol)i2);
  goto l14;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 124389))+4);
  i2 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i2);
  baseChar = (OOC_SymbolTable__Type)i2;
  i3 = i2==0;
  if (i3) goto l12;
  i2 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i2);
  i2 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i0, (void*)(OOC_INT32)&source, (OOC_SymbolTable__Type)i2);
  ok = i2;
  goto l14;
l12:
  i2 = (OOC_INT32)source;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 124471));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124438)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_SymList__Symbol)i2);
l14:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CopyString.baseTypes[0]);
  cp = (OOC_IR__CopyString)i2;
  i3 = (OOC_INT32)maxLength;
  i4 = (OOC_INT32)source;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124739)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i3);
  i3 = (OOC_INT32)sym;
  OOC_IR__InitCopyString((OOC_IR__CopyString)i2, (OOC_Scanner_SymList__Symbol)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
  return (OOC_IR__CopyString)i2;
  ;
}

void OOC_IR__VisitorDesc_VisitCopyString(OOC_IR__Visitor v, OOC_IR__CopyString cp) {

  return;
  ;
}

void OOC_IR__CopyStringDesc_Accept(OOC_IR__CopyString cp, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)cp;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124951)))), OOC_IR__VisitorDesc_VisitCopyString)),OOC_IR__VisitorDesc_VisitCopyString)((OOC_IR__Visitor)i0, (OOC_IR__CopyString)i1);
  return;
  ;
}

void OOC_IR__InitExit(OOC_IR__Exit exit, OOC_Scanner_SymList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)exit;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  *(OOC_INT32*)((_check_pointer(i0, 125188))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 125211))+12) = 0;
  return;
  ;
}

OOC_IR__Exit OOC_IR__BuilderDesc_NewExit(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Exit.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  OOC_IR__InitExit((OOC_IR__Exit)i0, (OOC_Scanner_SymList__Symbol)i1);
  return (OOC_IR__Exit)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitExit(OOC_IR__Visitor v, OOC_IR__Exit exit) {

  return;
  ;
}

void OOC_IR__ExitDesc_Accept(OOC_IR__Exit exit, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)exit;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 125548)))), OOC_IR__VisitorDesc_VisitExit)),OOC_IR__VisitorDesc_VisitExit)((OOC_IR__Visitor)i0, (OOC_IR__Exit)i1);
  return;
  ;
}

static void OOC_IR__InitForStatm(OOC_IR__ForStatm forStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression var, OOC_IR__Expression start, OOC_IR__Expression end, OOC_IR__Expression step, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)forStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)var;
  *(OOC_INT32*)((_check_pointer(i0, 125907))+8) = i1;
  i1 = (OOC_INT32)start;
  *(OOC_INT32*)((_check_pointer(i0, 125933))+12) = i1;
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 125963))+16) = i1;
  i1 = (OOC_INT32)step;
  *(OOC_INT32*)((_check_pointer(i0, 125989))+20) = i1;
  i1 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i0, 126017))+24) = i1;
  return;
  ;
}

OOC_IR__ForStatm OOC_IR__BuilderDesc_NewForStatm(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression var, OOC_IR__Expression start, OOC_IR__Expression end, OOC_IR__Expression step, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)step;
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l3;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(4);
  i2 = (OOC_INT32)Object_BigInt__NewInt(1);
  i3 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 126321)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  step = (OOC_IR__Expression)i0;
l3:
  i0 = (OOC_INT32)var;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 126424)))), &_td_OOC_IR__VarDesc));
  if (i1) goto l21;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 126510))+4);
  i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 126593))+4);
  i2 = (OOC_INT32)b;
  i1 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i2, (void*)(OOC_INT32)&step, (OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (i1) goto l17;
  i1 = (OOC_INT32)start;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 126718))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 126701));
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i1, (void*)(OOC_INT32)&start, (OOC_SymbolTable__Type)i3);
  i1 = (OOC_INT32)end;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 126780))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 126765));
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i1, (void*)(OOC_INT32)&end, (OOC_SymbolTable__Type)i3);
  i1 = (OOC_INT32)step;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 126804)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1);
  step = (OOC_IR__Expression)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 126857))+4);
  i3 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i3);
  if (i3) goto l12;
  i3=0u;
  goto l14;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 126899)))), &_td_OOC_IR__ConstDesc, 126899)), 126905))+8);
  i4 = (OOC_INT32)Object_BigInt__zero;
  i3 = Object_BigInt__BigIntDesc_Cmp((Object_BigInt__BigInt)i4, (Object__Object)i3);
  i3 = i3==0;
  
l14:
  if (!i3) goto l22;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 126959));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 126933)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 31, (OOC_Scanner_SymList__Symbol)i1);
  goto l22;
l17:
  i1 = (OOC_INT32)step;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 126644));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 126613)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 30, (OOC_Scanner_SymList__Symbol)i1);
  goto l22;
l19:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 126555));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 126530)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 19, (OOC_Scanner_SymList__Symbol)i2);
  goto l22;
l21:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 126470));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 126444)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 29, (OOC_Scanner_SymList__Symbol)i2);
l22:
  i1 = (OOC_INT32)body;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ForStatm.baseTypes[0]);
  i3 = (OOC_INT32)start;
  i4 = (OOC_INT32)end;
  i5 = (OOC_INT32)step;
  i6 = (OOC_INT32)sym;
  OOC_IR__InitForStatm((OOC_IR__ForStatm)i2, (OOC_Scanner_SymList__Symbol)i6, (OOC_IR__Expression)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i1);
  return (OOC_IR__ForStatm)i2;
  ;
}

void OOC_IR__VisitorDesc_VisitForStatm(OOC_IR__Visitor v, OOC_IR__ForStatm forStatm) {

  return;
  ;
}

void OOC_IR__ForStatmDesc_Accept(OOC_IR__ForStatm forStatm, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)forStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 127274)))), OOC_IR__VisitorDesc_VisitForStatm)),OOC_IR__VisitorDesc_VisitForStatm)((OOC_IR__Visitor)i0, (OOC_IR__ForStatm)i1);
  return;
  ;
}

static void OOC_IR__InitIfStatm(OOC_IR__IfStatm ifStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ifStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i0, 127609))+8) = i1;
  i1 = (OOC_INT32)pathTrue;
  *(OOC_INT32*)((_check_pointer(i0, 127638))+12) = i1;
  i1 = (OOC_INT32)pathFalse;
  *(OOC_INT32*)((_check_pointer(i0, 127673))+16) = i1;
  return;
  ;
}

OOC_IR__IfStatm OOC_IR__BuilderDesc_NewIfStatm(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__IfStatm ifStatm;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__IfStatm.baseTypes[0]);
  ifStatm = (OOC_IR__IfStatm)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)guard;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 127955)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)pathTrue;
  i4 = (OOC_INT32)pathFalse;
  OOC_IR__InitIfStatm((OOC_IR__IfStatm)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__StatementSeq)i3, (OOC_IR__StatementSeq)i4);
  return (OOC_IR__IfStatm)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitIfStatm(OOC_IR__Visitor v, OOC_IR__IfStatm ifStatm) {

  return;
  ;
}

void OOC_IR__IfStatmDesc_Accept(OOC_IR__IfStatm ifStatm, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)ifStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 128193)))), OOC_IR__VisitorDesc_VisitIfStatm)),OOC_IR__VisitorDesc_VisitIfStatm)((OOC_IR__Visitor)i0, (OOC_IR__IfStatm)i1);
  return;
  ;
}

static void OOC_IR__InitCase(OOC_IR__Case _case, OOC_Scanner_SymList__Symbol sym, OOC_IR__CaseLabels labels, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_case;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)labels;
  *(OOC_INT32*)((_check_pointer(i0, 128495))+8) = i1;
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 128523))+12) = i1;
  return;
  ;
}

OOC_IR__Case OOC_IR__BuilderDesc_NewCase(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__CaseLabels labels, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  OOC_IR__SetRange range;

  i0 = (OOC_INT32)labels;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 128790)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT32)b;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 128819);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 128819))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 128823)))), &_td_OOC_IR__SetRangeDesc, 128823);
  range = (OOC_IR__SetRange)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 128875))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 128855)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  *(OOC_INT32*)((_check_pointer(i4, 128845))+8) = i5;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 128923))+12);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 128903)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  *(OOC_INT32*)((_check_pointer(i4, 128895))+12) = i5;
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)statmSeq;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Case.baseTypes[0]);
  OOC_IR__InitCase((OOC_IR__Case)i3, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__CaseLabels)i0, (OOC_IR__StatementSeq)i2);
  return (OOC_IR__Case)i3;
  ;
}

void OOC_IR__VisitorDesc_VisitCase(OOC_IR__Visitor v, OOC_IR__Case _case) {

  return;
  ;
}

void OOC_IR__CaseDesc_Accept(OOC_IR__Case _case, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)_case;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129171)))), OOC_IR__VisitorDesc_VisitCase)),OOC_IR__VisitorDesc_VisitCase)((OOC_IR__Visitor)i0, (OOC_IR__Case)i1);
  return;
  ;
}

void OOC_IR__CaseDesc_CheckLabels(OOC_IR__Case _case, OOC_IR__Builder b, OOC_SymbolTable__Type type, OOC_IR__CaseList caseList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 deleted;
  OOC_INT32 i;
  OOC_IR__SetRange range;
  OOC_CHAR8 inUse;
  OOC_INT32 j;
  OOC_IR__CaseLabels _new;
  auto OOC_CHAR8 OOC_IR__CaseDesc_CheckLabels_IntersectsWith(OOC_IR__SetRange range, OOC_IR__CaseLabels list, OOC_INT32 end);
    
    OOC_CHAR8 OOC_IR__CaseDesc_CheckLabels_IntersectsWith(OOC_IR__SetRange range, OOC_IR__CaseLabels list, OOC_INT32 end) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;

      i = 0;
      i0 = end;
      i1 = 0!=i0;
      if (!i1) goto l15;
      i1 = (OOC_INT32)list;
      i2 = (OOC_INT32)range;
      i3=0;
l3_loop:
      i4 = _check_pointer(i1, 129629);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 129629))*4);
      i4 = i4!=(OOC_INT32)0;
      if (i4) goto l6;
      i4=0u;
      goto l8;
l6:
      i4 = _check_pointer(i1, 129669);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 129669))*4);
      i4 = OOC_IR__SetRangeDesc_IntersectsWith((OOC_IR__SetRange)i2, (OOC_IR__SetRange)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 129673)))), &_td_OOC_IR__SetRangeDesc, 129673)));
      
l8:
      if (!i4) goto l10;
      return 1u;
l10:
      i3 = i3+1;
      i = i3;
      i4 = i3!=i0;
      if (i4) goto l3_loop;
l15:
      return 0u;
      ;
    }


  deleted = 0;
  i0 = (OOC_INT32)_case;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129853))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 129861)), 0);
  i = 0;
  i1 = 0<i0;
  if (!i1) goto l44;
  i1 = !0u;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)_case;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 129888))+8);
  i4 = _check_pointer(i4, 129896);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 129896))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 129900)))), &_td_OOC_IR__SetRangeDesc, 129900);
  range = (OOC_IR__SetRange)i4;
  i5 = (OOC_INT32)b;
  i6 = (OOC_INT32)type;
  i7 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i5, (void*)((_check_pointer(i4, 129936))+8), (OOC_SymbolTable__Type)i6);
  i7 = !i7;
  if (i7) goto l38;
  i6 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i5, (void*)((_check_pointer(i4, 130115))+12), (OOC_SymbolTable__Type)i6);
  i6 = !i6;
  if (i6) goto l36;
  i4 = OOC_IR__SetRangeDesc_IsEmpty((OOC_IR__SetRange)i4);
  if (i4) goto l34;
  inUse = 0u;
  j = 0;
  i2 = (OOC_INT32)caseList;
  i2 = _check_pointer(i2, 130475);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT32, 130475))*4);
  i2 = i2!=i3;
  if (i2) goto l12;
  i2=0u;
  goto l14;
l12:
  i2=i1;
l14:
  if (i2) goto l16;
  i2=0u;
  goto l27;
l16:
  i2=0;
l17_loop:
  i3 = (OOC_INT32)caseList;
  i4 = _check_pointer(i3, 130549);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 130549))*4);
  i3 = _check_pointer(i3, 130610);
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i5, OOC_UINT32, 130610))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 130613))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 130552))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 130621)), 0);
  i4 = (OOC_INT32)range;
  i2 = OOC_IR__CaseDesc_CheckLabels_IntersectsWith((OOC_IR__SetRange)i4, (OOC_IR__CaseLabels)i3, i2);
  i3 = j;
  inUse = i2;
  i3 = i3+1;
  j = i3;
  i4 = (OOC_INT32)caseList;
  i4 = _check_pointer(i4, 130475);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 130475))*4);
  i5 = (OOC_INT32)_case;
  i4 = i4!=i5;
  if (i4) goto l20;
  i4=0u;
  goto l22;
l20:
  i4 = !i2;
  
l22:
  if (!i4) goto l27;
  i2=i3;
  goto l17_loop;
l27:
  if (i2) goto l29;
  i2 = (OOC_INT32)_case;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 130711))+8);
  i3 = i;
  i4 = (OOC_INT32)range;
  i2 = OOC_IR__CaseDesc_CheckLabels_IntersectsWith((OOC_IR__SetRange)i4, (OOC_IR__CaseLabels)i2, i3);
  
  goto l30;
l29:
  i2=1u;
l30:
  inUse = i2;
  if (!i2) goto l39;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)range;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 130789));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 130758)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 28, (OOC_Scanner_SymList__Symbol)i3);
  goto l39;
l34:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 130366))+8);
  i3 = _check_pointer(i3, 130374);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 130374))*4) = 0;
  deleted = (i5+1);
  goto l39;
l36:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 130174))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 130178));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 130141)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i5, 27, (OOC_Scanner_SymList__Symbol)i4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 130198))+8);
  i3 = _check_pointer(i3, 130206);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 130206))*4) = 0;
  deleted = (i5+1);
  goto l39;
l38:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 129997))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 130003));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 129964)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i5, 27, (OOC_Scanner_SymList__Symbol)i4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 130023))+8);
  i3 = _check_pointer(i3, 130031);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 130031))*4) = 0;
  deleted = (i5+1);
l39:
  i2 = i;
  i2 = i2+1;
  i = i2;
  i3 = i2<i0;
  if (i3) goto l3_loop;
l44:
  i0 = deleted;
  i1 = i0!=0;
  if (!i1) goto l60;
  i1 = (OOC_INT32)_case;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 130882))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 130890)), 0);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseLabels.baseTypes[0], (i2-i0));
  _new = (OOC_IR__CaseLabels)i0;
  j = (-1);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 130946)), 0);
  i3 = 0<i2;
  if (!i3) goto l59;
  i3=(-1);i4=0;
l49_loop:
  
l50_loop:
  i3 = i3+1;
  j = i3;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 131007))+8);
  i5 = _check_pointer(i5, 131015);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 131015))*4);
  i5 = i5!=0;
  if (!i5) goto l50_loop;
l54:
  i5 = _check_pointer(i0, 131038);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 131049))+8);
  i7 = _check_pointer(i7, 131057);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i3, i8, OOC_UINT32, 131057))*4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 131038))*4) = i7;
  i4 = i4+1;
  i = i4;
  i5 = i4<i2;
  if (i5) goto l49_loop;
l59:
  *(OOC_INT32*)((_check_pointer(i1, 131083))+8) = i0;
l60:
  return;
  ;
}

static void OOC_IR__InitCaseStatm(OOC_IR__CaseStatm caseStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression select, OOC_IR__CaseList caseList, OOC_IR__StatementSeq _default, OOC_CHAR8 checkMatch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)caseStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)select;
  *(OOC_INT32*)((_check_pointer(i0, 131491))+8) = i1;
  i1 = (OOC_INT32)caseList;
  *(OOC_INT32*)((_check_pointer(i0, 131524))+12) = i1;
  i1 = (OOC_INT32)_default;
  *(OOC_INT32*)((_check_pointer(i0, 131561))+16) = i1;
  i1 = checkMatch;
  *(OOC_UINT8*)((_check_pointer(i0, 131596))+20) = i1;
  return;
  ;
}

OOC_IR__CaseStatm OOC_IR__BuilderDesc_NewCaseStatm(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression select, OOC_IR__CaseList caseList, OOC_IR__StatementSeq _default) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_IR__CaseStatm caseStatm;
  OOC_INT32 i;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseStatm.baseTypes[0]);
  caseStatm = (OOC_IR__CaseStatm)i0;
  i1 = (OOC_INT32)select;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 131925))+4);
  i2 = OOC_SymbolTable_TypeRules__IsValidCaseSelector((OOC_SymbolTable__Type)i2);
  i2 = !i2;
  if (i2) goto l11;
  i2 = (OOC_INT32)caseList;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 132032)), 0);
  i4 = 0<i3;
  if (!i4) goto l12;
  i4 = (OOC_INT32)b;
  i5=0;
l5_loop:
  i6 = _check_pointer(i2, 132056);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 132083))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 132056))*4);
  OOC_IR__CaseDesc_CheckLabels((OOC_IR__Case)i6, (OOC_IR__Builder)i4, (OOC_SymbolTable__Type)i8, (OOC_IR__CaseList)i2);
  i5 = i5+1;
  i = i5;
  i6 = i5<i3;
  if (i6) goto l5_loop;
  goto l12;
l11:
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 131982));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 131945)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 26, (OOC_Scanner_SymList__Symbol)i3);
l12:
  i2 = (OOC_INT32)sym;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 132253))+16);
  i4 = (OOC_INT32)OOC_Config_StdPragmas__caseSelectCheck;
  i5 = (OOC_INT32)b;
  i3 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i5, (Config_Section_Options__Option)i4, i3);
  i4 = (OOC_INT32)_default;
  i5 = (OOC_INT32)caseList;
  OOC_IR__InitCaseStatm((OOC_IR__CaseStatm)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__CaseList)i5, (OOC_IR__StatementSeq)i4, i3);
  return (OOC_IR__CaseStatm)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitCaseStatm(OOC_IR__Visitor v, OOC_IR__CaseStatm caseStatm) {

  return;
  ;
}

void OOC_IR__CaseStatmDesc_Accept(OOC_IR__CaseStatm caseStatm, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)caseStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132469)))), OOC_IR__VisitorDesc_VisitCaseStatm)),OOC_IR__VisitorDesc_VisitCaseStatm)((OOC_IR__Visitor)i0, (OOC_IR__CaseStatm)i1);
  return;
  ;
}

static void OOC_IR__InitLoopStatm(OOC_IR__LoopStatm loopStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)loopStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i0, 132786))+8) = i1;
  return;
  ;
}

OOC_IR__LoopStatm OOC_IR__BuilderDesc_NewLoopStatm(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__LoopStatm.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)body;
  OOC_IR__InitLoopStatm((OOC_IR__LoopStatm)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__StatementSeq)i2);
  return (OOC_IR__LoopStatm)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitLoopStatm(OOC_IR__Visitor v, OOC_IR__LoopStatm loopStatm) {

  return;
  ;
}

void OOC_IR__LoopStatmDesc_Accept(OOC_IR__LoopStatm loopStatm, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)loopStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133254)))), OOC_IR__VisitorDesc_VisitLoopStatm)),OOC_IR__VisitorDesc_VisitLoopStatm)((OOC_IR__Visitor)i0, (OOC_IR__LoopStatm)i1);
  return;
  ;
}

static void OOC_IR__InitMoveBlock(OOC_IR__MoveBlock move, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression size) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)move;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i0, 133568))+8) = i1;
  i1 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i0, 133596))+12) = i1;
  i1 = (OOC_INT32)size;
  *(OOC_INT32*)((_check_pointer(i0, 133620))+16) = i1;
  return;
  ;
}

OOC_IR__MoveBlock OOC_IR__BuilderDesc_NewMoveBlock(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression size) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__MoveBlock.baseTypes[0]);
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)source;
  i2 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i3 = (OOC_INT32)dest;
  i3 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i1, (OOC_IR__Expression)i3);
  i4 = (OOC_INT32)size;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i1, (OOC_IR__Expression)i4);
  i4 = (OOC_INT32)sym;
  OOC_IR__InitMoveBlock((OOC_IR__MoveBlock)i0, (OOC_Scanner_SymList__Symbol)i4, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i1);
  return (OOC_IR__MoveBlock)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitMoveBlock(OOC_IR__Visitor v, OOC_IR__MoveBlock move) {

  return;
  ;
}

void OOC_IR__MoveBlockDesc_Accept(OOC_IR__MoveBlock move, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)move;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134205)))), OOC_IR__VisitorDesc_VisitMoveBlock)),OOC_IR__VisitorDesc_VisitMoveBlock)((OOC_IR__Visitor)i0, (OOC_IR__MoveBlock)i1);
  return;
  ;
}

static void OOC_IR__InitRaise(OOC_IR__Raise raise, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression exception) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)raise;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)exception;
  *(OOC_INT32*)((_check_pointer(i0, 134471))+8) = i1;
  return;
  ;
}

OOC_IR__Raise OOC_IR__BuilderDesc_NewRaise(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression exception) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)exception;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134656))+4);
  i1 = OOC_SymbolTable_TypeRules__IsException((OOC_SymbolTable__Type)i1);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 134795));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 134764)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 62, (OOC_Scanner_SymList__Symbol)i0);
  return (OOC_IR__Raise)0;
  goto l4;
l3:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Raise.baseTypes[0]);
  OOC_IR__InitRaise((OOC_IR__Raise)i2, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i0);
  return (OOC_IR__Raise)i2;
l4:
  _failed_function(134538); return 0;
  ;
}

void OOC_IR__VisitorDesc_VisitRaise(OOC_IR__Visitor v, OOC_IR__Raise raise) {

  return;
  ;
}

void OOC_IR__RaiseDesc_Accept(OOC_IR__Raise raise, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)raise;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134987)))), OOC_IR__VisitorDesc_VisitRaise)),OOC_IR__VisitorDesc_VisitRaise)((OOC_IR__Visitor)i0, (OOC_IR__Raise)i1);
  return;
  ;
}

static void OOC_IR__InitRepeatStatm(OOC_IR__RepeatStatm repeatStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__StatementSeq body, OOC_IR__Expression exitCondition) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)repeatStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i0, 135337))+8) = i1;
  i1 = (OOC_INT32)exitCondition;
  *(OOC_INT32*)((_check_pointer(i0, 135368))+12) = i1;
  return;
  ;
}

OOC_IR__RepeatStatm OOC_IR__BuilderDesc_NewRepeatStatm(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__StatementSeq body, OOC_IR__Expression exitCondition) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__RepeatStatm repeatStatm;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__RepeatStatm.baseTypes[0]);
  repeatStatm = (OOC_IR__RepeatStatm)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)exitCondition;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 135692)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)body;
  OOC_IR__InitRepeatStatm((OOC_IR__RepeatStatm)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__StatementSeq)i3, (OOC_IR__Expression)i1);
  return (OOC_IR__RepeatStatm)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitRepeatStatm(OOC_IR__Visitor v, OOC_IR__RepeatStatm repeatStatm) {

  return;
  ;
}

void OOC_IR__RepeatStatmDesc_Accept(OOC_IR__RepeatStatm repeatStatm, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)repeatStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 135949)))), OOC_IR__VisitorDesc_VisitRepeatStatm)),OOC_IR__VisitorDesc_VisitRepeatStatm)((OOC_IR__Visitor)i0, (OOC_IR__RepeatStatm)i1);
  return;
  ;
}

static void OOC_IR__InitReturn(OOC_IR__Return _return, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression result) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_return;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)result;
  *(OOC_INT32*)((_check_pointer(i0, 136227))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 136257))+12) = 0;
  return;
  ;
}

OOC_IR__Return OOC_IR__BuilderDesc_NewReturn(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression result) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Return.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)result;
  OOC_IR__InitReturn((OOC_IR__Return)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i2);
  return (OOC_IR__Return)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitReturn(OOC_IR__Visitor v, OOC_IR__Return _return) {

  return;
  ;
}

void OOC_IR__ReturnDesc_Accept(OOC_IR__Return _return, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)_return;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 136654)))), OOC_IR__VisitorDesc_VisitReturn)),OOC_IR__VisitorDesc_VisitReturn)((OOC_IR__Visitor)i0, (OOC_IR__Return)i1);
  return;
  ;
}

static void OOC_IR__InitCatchClause(OOC_IR__CatchClause _catch, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__Type exceptionType, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_catch;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)exceptionType;
  *(OOC_INT32*)((_check_pointer(i0, 137010))+8) = i1;
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 137052))+12) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 137084))+16) = 0u;
  return;
  ;
}

OOC_IR__CatchClause OOC_IR__BuilderDesc_NewCatchClause(OOC_IR__Builder b, OOC_IR__Expression guardType, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__CatchClause _catch;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CatchClause.baseTypes[0]);
  _catch = (OOC_IR__CatchClause)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)guardType;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 137355)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  type = (OOC_SymbolTable__Type)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 137415));
  i5 = (OOC_INT32)statmSeq;
  OOC_IR__InitCatchClause((OOC_IR__CatchClause)i0, (OOC_Scanner_SymList__Symbol)i4, (OOC_SymbolTable__Type)i3, (OOC_IR__StatementSeq)i5);
  i3 = OOC_SymbolTable_TypeRules__IsException((OOC_SymbolTable__Type)i3);
  i3 = !i3;
  if (!i3) goto l4;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 137510));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 137479)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 62, (OOC_Scanner_SymList__Symbol)i2);
  *(OOC_UINT8*)((_check_pointer(i0, 137528))+16) = 1u;
l4:
  return (OOC_IR__CatchClause)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitCatchClause(OOC_IR__Visitor v, OOC_IR__CatchClause _catch) {

  return;
  ;
}

void OOC_IR__CatchClauseDesc_Accept(OOC_IR__CatchClause _catch, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)_catch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 137810)))), OOC_IR__VisitorDesc_VisitCatchClause)),OOC_IR__VisitorDesc_VisitCatchClause)((OOC_IR__Visitor)i0, (OOC_IR__CatchClause)i1);
  return;
  ;
}

static void OOC_IR__InitTryStatm(OOC_IR__TryStatm tryStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__StatementSeq statmSeq, OOC_IR__CatchList catchList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)tryStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 138034))+8) = i1;
  i1 = (OOC_INT32)catchList;
  *(OOC_INT32*)((_check_pointer(i0, 138069))+12) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 138106))+16) = (OOC_INT32)0;
  return;
  ;
}

OOC_IR__TryStatm OOC_IR__BuilderDesc_NewTryStatm(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__StatementSeq statmSeq, OOC_IR__CatchList catchList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT32)catchList;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 138381)), 0);
  i2 = 0<i1;
  if (!i2) goto l28;
  i2 = (OOC_INT32)b;
  i3=0;
l3_loop:
  j = 0;
  i4 = i3!=0;
  if (i4) goto l6;
  i4=0u;
  goto l8;
l6:
  i4 = _check_pointer(i0, 138452);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 138452))*4);
  i5 = _check_pointer(i0, 138520);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT32, 138520))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 138455))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 138523))+8);
  i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i4, (OOC_SymbolTable__Type)i5);
  i4 = !i4;
  
l8:
  if (i4) goto l10;
  i4=0;
  goto l20;
l10:
  i4=0;
l11_loop:
  i4 = i4+1;
  j = i4;
  i5 = i3!=i4;
  if (i5) goto l14;
  i5=0u;
  goto l16;
l14:
  i5 = _check_pointer(i0, 138452);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 138452))*4);
  i6 = _check_pointer(i0, 138520);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 138520))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 138455))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 138523))+8);
  i5 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i6);
  i5 = !i5;
  
l16:
  if (i5) goto l11_loop;
l20:
  i4 = i3!=i4;
  if (!i4) goto l23;
  i4 = _check_pointer(i0, 138636);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 138636))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 138639));
  OOC_IR__BuilderDesc_WarnSym((OOC_IR__Builder)i2, 65, (OOC_Scanner_SymList__Symbol)i4);
  i4 = _check_pointer(i0, 138663);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 138663))*4);
  *(OOC_UINT8*)((_check_pointer(i4, 138666))+16) = 1u;
l23:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l28:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)statmSeq;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TryStatm.baseTypes[0]);
  OOC_IR__InitTryStatm((OOC_IR__TryStatm)i3, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__StatementSeq)i2, (OOC_IR__CatchList)i0);
  return (OOC_IR__TryStatm)i3;
  ;
}

void OOC_IR__VisitorDesc_VisitTryStatm(OOC_IR__Visitor v, OOC_IR__TryStatm tryStatm) {

  return;
  ;
}

void OOC_IR__TryStatmDesc_Accept(OOC_IR__TryStatm tryStatm, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)tryStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 139014)))), OOC_IR__VisitorDesc_VisitTryStatm)),OOC_IR__VisitorDesc_VisitTryStatm)((OOC_IR__Visitor)i0, (OOC_IR__TryStatm)i1);
  return;
  ;
}

static void OOC_IR__InitWhileStatm(OOC_IR__WhileStatm whileStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)whileStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i0, 139355))+8) = i1;
  i1 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i0, 139387))+12) = i1;
  return;
  ;
}

OOC_IR__WhileStatm OOC_IR__BuilderDesc_NewWhileStatm(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__WhileStatm whileStatm;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__WhileStatm.baseTypes[0]);
  whileStatm = (OOC_IR__WhileStatm)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)guard;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 139670)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)body;
  OOC_IR__InitWhileStatm((OOC_IR__WhileStatm)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__StatementSeq)i3);
  return (OOC_IR__WhileStatm)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitWhileStatm(OOC_IR__Visitor v, OOC_IR__WhileStatm whileStatm) {

  return;
  ;
}

void OOC_IR__WhileStatmDesc_Accept(OOC_IR__WhileStatm whileStatm, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)whileStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 139917)))), OOC_IR__VisitorDesc_VisitWhileStatm)),OOC_IR__VisitorDesc_VisitWhileStatm)((OOC_IR__Visitor)i0, (OOC_IR__WhileStatm)i1);
  return;
  ;
}

static void OOC_IR__InitWithStatm(OOC_IR__WithStatm withStatm, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse, OOC_CHAR8 checkMatch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)withStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i0, 140316))+8) = i1;
  i1 = (OOC_INT32)pathTrue;
  *(OOC_INT32*)((_check_pointer(i0, 140347))+12) = i1;
  i1 = (OOC_INT32)pathFalse;
  *(OOC_INT32*)((_check_pointer(i0, 140384))+16) = i1;
  i1 = checkMatch;
  *(OOC_UINT8*)((_check_pointer(i0, 140423))+20) = i1;
  return;
  ;
}

OOC_IR__WithStatm OOC_IR__BuilderDesc_NewWithStatm(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 140755))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_StdPragmas__typeGuard;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  i2 = (OOC_INT32)guard;
  i3 = (OOC_INT32)pathTrue;
  i4 = (OOC_INT32)pathFalse;
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__WithStatm.baseTypes[0]);
  OOC_IR__InitWithStatm((OOC_IR__WithStatm)i5, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__StatementSeq)i3, (OOC_IR__StatementSeq)i4, i1);
  return (OOC_IR__WithStatm)i5;
  ;
}

void OOC_IR__VisitorDesc_VisitWithStatm(OOC_IR__Visitor v, OOC_IR__WithStatm withStatm) {

  return;
  ;
}

void OOC_IR__WithStatmDesc_Accept(OOC_IR__WithStatm withStatm, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)withStatm;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141072)))), OOC_IR__VisitorDesc_VisitWithStatm)),OOC_IR__VisitorDesc_VisitWithStatm)((OOC_IR__Visitor)i0, (OOC_IR__WithStatm)i1);
  return;
  ;
}

void OOC_IR__BuilderDesc_CheckExit(OOC_IR__Builder b, OOC_SymbolTable__ProcDecl procDecl, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2;
  OOC_IR__LoopStatm currentLoop;
  OOC_IR__TryStatm currentTry;
  OOC_INT32 enclosingTry;
  OOC_INT32 enclosingTryLastLoop;
  OOC_CHAR8 initWithoutSuper;
  OOC_SymbolTable__Record procClass;
  auto void OOC_IR__BuilderDesc_CheckExit_CheckException(OOC_SymbolTable__Type exception, OOC_Scanner_SymList__Symbol sym);
  auto void OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq(OOC_IR__StatementSeq statmSeq);
    
    void OOC_IR__BuilderDesc_CheckExit_CheckException(OOC_SymbolTable__Type exception, OOC_Scanner_SymList__Symbol sym) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_IR__TryStatm _try;
      OOC_INT32 i;
      OOC_SymbolTable__ExceptionNameArray raises;
      OOC_SymbolTable__Module module;

      i0 = (OOC_INT32)exception;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142078)))), OOC_SymbolTable__TypeDesc_IsCheckedException)),OOC_SymbolTable__TypeDesc_IsCheckedException)((OOC_SymbolTable__Type)i0);
      if (!i1) goto l47;
      i1 = (OOC_INT32)currentTry;
      _try = (OOC_IR__TryStatm)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l24;
l5_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 142290))+12);
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 142300)), 0);
      i3 = 0<i2;
      if (!i3) goto l19;
      i3=0;
l8_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 142343))+12);
      i4 = _check_pointer(i4, 142353);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 142353))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 142356))+8);
      i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i4, (OOC_SymbolTable__Type)i0);
      if (!i4) goto l11;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 142437))+12);
      i4 = _check_pointer(i4, 142447);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 142447))*4);
      *(OOC_UINT8*)((_check_pointer(i4, 142450))+16) = 1u;
l11:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 142565))+12);
      i4 = _check_pointer(i4, 142575);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 142575))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 142578))+8);
      i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i4);
      if (!i4) goto l14;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 142616))+12);
      i4 = _check_pointer(i4, 142626);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 142626))*4);
      *(OOC_UINT8*)((_check_pointer(i4, 142629))+16) = 1u;
      return;
l14:
      i3 = i3+1;
      i = i3;
      i4 = i3<i2;
      if (i4) goto l8_loop;
l19:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 142723))+16);
      _try = (OOC_IR__TryStatm)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l5_loop;
l24:
      i1 = (OOC_INT32)procDecl;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l38;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 142821))+64);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 142832))+60);
      raises = (OOC_SymbolTable__ExceptionNameArray)i1;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 142875)), 0);
      i = 0;
      i3 = 0<i2;
      if (!i3) goto l38;
      i3=0;
l29_loop:
      i4 = _check_pointer(i1, 142932);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 142932))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 142935))+20);
      i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i4);
      if (!i4) goto l32;
      return;
l32:
      i3 = i3+1;
      i = i3;
      i4 = i3<i2;
      if (i4) goto l29_loop;
l38:
      i1 = (OOC_INT32)procDecl;
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l41;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 143074))+4);
      i1 = i1==(OOC_INT32)0;
      
      goto l43;
l41:
      i1=1u;
l43:
      if (i1) goto l45;
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)sym;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 143191)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 63, (OOC_Scanner_SymList__Symbol)i2);
      goto l46;
l45:
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)sym;
      OOC_IR__BuilderDesc_WarnSym((OOC_IR__Builder)i1, 64, (OOC_Scanner_SymList__Symbol)i2);
l46:
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143265)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
      module = (OOC_SymbolTable__Module)i1;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 143285))+36);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 143381))+20);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 143386))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 143381))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 143386))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 143390)), 0);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 143285))+36);
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i4, 143390)), i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 143295)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i2, "module", 7, (Msg__StringPtr)i1);
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 143404))+36);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143501))+24);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 143512))+20);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 143517))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143501))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143512))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143517))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 143404))+36);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 143521)), 0);
      i0 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i3, 143521)), i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 143414)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i1, "name", 5, (Msg__StringPtr)i0);
l47:
      return;
      ;
    }

    
    void OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq(OOC_IR__StatementSeq statmSeq) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 i;
      auto void OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm(OOC_IR__Statement statm);
      auto void OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr(OOC_IR__Expression expr);
      auto void OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm(OOC_IR__Statement statm);
        
        void OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr(OOC_IR__Expression expr) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_INT32 i;

          i0 = (OOC_INT32)expr;
          i1 = i0==(OOC_INT32)0;
          if (!i1) goto l3;
          return;
l3:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143869)))), &_td_OOC_IR__ConstDesc);
          if (i1) goto l156;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143918)))), &_td_OOC_IR__AbsDesc);
          if (i1) goto l154;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143976)))), &_td_OOC_IR__AdrDesc);
          if (i1) goto l152;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144033)))), &_td_OOC_IR__AshDesc);
          if (i1) goto l150;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144120)))), &_td_OOC_IR__BinaryArithDesc);
          if (i1) goto l148;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144216)))), &_td_OOC_IR__BooleanOpDesc);
          if (i1) goto l146;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144310)))), &_td_OOC_IR__CapDesc);
          if (i1) goto l144;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144368)))), &_td_OOC_IR__CompareDesc);
          if (i1) goto l142;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144460)))), &_td_OOC_IR__ConcatDesc);
          if (i1) goto l132;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144589)))), &_td_OOC_IR__ConstructorDesc);
          if (i1) goto l130;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144685)))), &_td_OOC_IR__CurrentExceptionDesc);
          if (i1) goto l128;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144755)))), &_td_OOC_IR__ChangeElementDesc);
          if (i1) goto l126;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144854)))), &_td_OOC_IR__DerefDesc);
          if (i1) goto l124;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144914)))), &_td_OOC_IR__EntierDesc);
          if (i1) goto l122;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144975)))), &_td_OOC_IR__IndexDesc);
          if (i1) goto l120;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145066)))), &_td_OOC_IR__LenDesc);
          if (i1) goto l118;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145122)))), &_td_OOC_IR__NegateDesc);
          if (i1) goto l116;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145183)))), &_td_OOC_IR__NewBlockDesc);
          if (i1) goto l114;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145243)))), &_td_OOC_IR__NewObjectDesc);
          if (i1) goto l101;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145432)))), &_td_OOC_IR__NotDesc);
          if (i1) goto l99;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145490)))), &_td_OOC_IR__OddDesc);
          if (i1) goto l97;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145548)))), &_td_OOC_IR__ReferenceDesc);
          if (i1) goto l156;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145601)))), &_td_OOC_IR__SelectFieldDesc);
          if (i1) goto l94;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145666)))), &_td_OOC_IR__SelectProcDesc);
          if (i1) goto l92;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145732)))), &_td_OOC_IR__SetMemberDesc);
          if (i1) goto l90;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145827)))), &_td_OOC_IR__SetOpDesc);
          if (i1) goto l88;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145917)))), &_td_OOC_IR__SetRangeDesc);
          if (i1) goto l86;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146007)))), &_td_OOC_IR__ShiftDesc);
          if (i1) goto l84;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146095)))), &_td_OOC_IR__TypeCastDesc);
          if (i1) goto l82;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146155)))), &_td_OOC_IR__TypeConvDesc);
          if (i1) goto l80;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146215)))), &_td_OOC_IR__TypeTagDesc);
          if (i1) goto l78;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146276)))), &_td_OOC_IR__TypeTestDesc);
          if (i1) goto l76;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146336)))), &_td_OOC_IR__TypeGuardDesc);
          if (i1) goto l74;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146408)))), &_td_OOC_IR__CallDesc);
          if (i1) goto l72;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146402)))), 146402);
          goto l156;
l72:
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm((OOC_IR__Statement)i0);
          goto l156;
l74:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146375))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l76:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146314))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l78:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146252))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l80:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146193))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l82:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146133))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l84:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146042))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146075))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l86:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145955))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145987))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l88:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145862))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145894))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l90:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145771))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145806))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l92:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145706))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l94:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145642))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l97:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145523))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l99:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145465))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l101:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145276))+8);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l156;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145330))+8);
          i = 0;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 145337)), 0);
          i2 = 0<i1;
          if (!i2) goto l156;
          i2=0;
l106_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145373))+8);
          i3 = _check_pointer(i3, 145380);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 145380))*4);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l106_loop;
          goto l156;
l114:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145221))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l116:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145158))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l118:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145099))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l120:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145010))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145043))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l122:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144950))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l124:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144889))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l126:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144798))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144829))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l128:
          i1 = (OOC_INT32)currentTry;
          *(OOC_INT32*)((_check_pointer(i0, 144721))+8) = i1;
          goto l156;
l130:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144630))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144663))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l132:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144504))+8);
          i = 0;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 144512)), 0);
          i2 = 0<i1;
          if (!i2) goto l156;
          i2=0;
l135_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144546))+8);
          i3 = _check_pointer(i3, 144554);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 144554))*4);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l135_loop;
          goto l156;
l142:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144405))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144437))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l144:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144343))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l146:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144255))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144287))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l148:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144161))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144193))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l150:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144066))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144099))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l152:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144009))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l156;
l154:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143951))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
l156:
          return;
          ;
        }

        
        void OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm(OOC_IR__Statement statm) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_INT32 i;
          OOC_SymbolTable__Type type;
          OOC_SymbolTable__FormalPars fpars;
          OOC_IR__LoopStatm oldLoop;
          OOC_INT32 oldEnclTryLastLoop;
          auto OOC_CHAR8 OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm_IsInitSuper(OOC_IR__Expression design);
            
            OOC_CHAR8 OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm_IsInitSuper(OOC_IR__Expression design) {
              register OOC_INT32 i0,i1,i2;

              i0 = (OOC_INT32)design;
              i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146774)))), &_td_OOC_IR__SelectProcDesc);
              if (i1) goto l3;
              return 0u;
              goto l16;
l3:
              i1 = *(OOC_UINT8*)((_check_pointer(i0, 146812))+29);
              i1 = !i1;
              if (i1) goto l6;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146851))+8);
              i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 146861)))), &_td_OOC_IR__VarDesc));
              
              goto l8;
l6:
              i1=1u;
l8:
              if (i1) goto l10;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146894))+8);
              i2 = (OOC_INT32)procDecl;
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 146924))+64);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 146904)))), &_td_OOC_IR__VarDesc, 146904)), 146908))+8);
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 146935))+40);
              i1 = i1!=i2;
              
              goto l12;
l10:
              i1=1u;
l12:
              if (i1) goto l14;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147087))+20);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147094))+20);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147099))+12);
              return ((
              _cmp8((const void*)(_check_pointer(i0, 147103)),(const void*)"INIT"))==0);
              goto l16;
l14:
              return 0u;
l16:
              _failed_function(146697); return 0;
              ;
            }


          i0 = (OOC_INT32)statm;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147262)))), &_td_OOC_IR__AssertDesc);
          if (i1) goto l139;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147327)))), &_td_OOC_IR__AssignmentDesc);
          if (i1) goto l137;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147469)))), &_td_OOC_IR__CallDesc);
          if (i1) goto l112;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147980)))), &_td_OOC_IR__CopyDesc);
          if (i1) goto l110;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148073)))), &_td_OOC_IR__CopyParameterDesc);
          if (i1) goto l140;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148131)))), &_td_OOC_IR__CopyStringDesc);
          if (i1) goto l107;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148230)))), &_td_OOC_IR__ExitDesc);
          if (i1) goto l101;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148491)))), &_td_OOC_IR__ForStatmDesc);
          if (i1) goto l99;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148690)))), &_td_OOC_IR__IfStatmDesc);
          if (i1) goto l97;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148839)))), &_td_OOC_IR__CaseDesc);
          if (i1) goto l95;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148907)))), &_td_OOC_IR__CaseStatmDesc);
          if (i1) goto l85;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 149139)))), &_td_OOC_IR__LoopStatmDesc);
          if (i1) goto l83;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 149464)))), &_td_OOC_IR__MoveBlockDesc);
          if (i1) goto l81;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 149562)))), &_td_OOC_IR__RaiseDesc);
          if (i1) goto l79;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 149685)))), &_td_OOC_IR__RepeatStatmDesc);
          if (i1) goto l77;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 149798)))), &_td_OOC_IR__ReturnDesc);
          if (i1) goto l60;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 150550)))), &_td_OOC_IR__TryStatmDesc);
          if (i1) goto l43;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 151164)))), &_td_OOC_IR__WhileStatmDesc);
          if (i1) goto l41;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 151268)))), &_td_OOC_IR__WithStatmDesc);
          if (i1) goto l39;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 151261)))), 151261);
          goto l140;
l39:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 151308))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 151347))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 151390))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l140;
l41:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 151205))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 151244))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l140;
l43:
          i1 = (OOC_INT32)procDecl;
          i2 = enclosingTry;
          *(OOC_UINT8*)((_check_pointer(i1, 150582))+76) = 1u;
          enclosingTry = (i2+1);
          i1 = (OOC_INT32)currentTry;
          *(OOC_INT32*)((_check_pointer(i0, 150648))+16) = i1;
          currentTry = (OOC_IR__TryStatm)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150737))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150778))+16);
          i2 = enclosingTry;
          currentTry = (OOC_IR__TryStatm)i1;
          enclosingTry = (i2-1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150855))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 150865)), 0);
          i = 0;
          i2 = 0<i1;
          if (!i2) goto l140;
          i2=0;
l46_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150893))+12);
          i3 = _check_pointer(i3, 150903);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 150903))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 150906))+8);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150893))+12);
          i4 = _check_pointer(i4, 150903);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 150903))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 150906))+8);
          i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 150920)))), OOC_SymbolTable__TypeDesc_IsCheckedException)),OOC_SymbolTable__TypeDesc_IsCheckedException)((OOC_SymbolTable__Type)i4);
          if (i3) goto l49;
          i3=0u;
          goto l51;
l49:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150965))+12);
          i3 = _check_pointer(i3, 150975);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 150975))*4);
          i3 = *(OOC_UINT8*)((_check_pointer(i3, 150978))+16);
          i3 = !i3;
          
l51:
          if (!i3) goto l53;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 151041))+12);
          i3 = _check_pointer(i3, 151051);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 151051))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 151054));
          i4 = (OOC_INT32)b;
          OOC_IR__BuilderDesc_WarnSym((OOC_IR__Builder)i4, 66, (OOC_Scanner_SymList__Symbol)i3);
l53:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 151109))+12);
          i3 = _check_pointer(i3, 151119);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 151119))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 151122))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l46_loop;
          goto l140;
l60:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149835))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)procDecl;
          i2 = i1==0;
          if (i2) goto l63;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 149900))+64);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 149912))+44);
          i2 = i2==0;
          
          goto l65;
l63:
          i2=1u;
l65:
          if (i2) goto l71;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150189))+8);
          i2 = i2==0;
          if (i2) goto l69;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150334))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 150423))+64);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 150434))+44);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 150342));
          i3 = (OOC_INT32)b;
          i1 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i1);
          OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i3, (OOC_Scanner_SymList__Symbol)i2, (void*)((_check_pointer(i0, 150354))+8), (OOC_SymbolTable__Type)i1);
          goto l75;
l69:
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 150261));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150225)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 33, (OOC_Scanner_SymList__Symbol)i2);
          goto l75;
l71:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150014))+8);
          i1 = i1!=0;
          if (!i1) goto l75;
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150083))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 150091));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150050)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 32, (OOC_Scanner_SymList__Symbol)i2);
l75:
          i1 = enclosingTry;
          *(OOC_INT32*)((_check_pointer(i0, 150496))+12) = i1;
          goto l140;
l77:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149732))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149766))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l140;
l79:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149598))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149641))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 149651))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 149663));
          OOC_IR__BuilderDesc_CheckExit_CheckException((OOC_SymbolTable__Type)i1, (OOC_Scanner_SymList__Symbol)i0);
          goto l140;
l81:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149504))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149539))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l140;
l83:
          i1 = (OOC_INT32)currentLoop;
          oldLoop = (OOC_IR__LoopStatm)i1;
          currentLoop = (OOC_IR__LoopStatm)i0;
          i2 = enclosingTryLastLoop;
          oldEnclTryLastLoop = i2;
          i3 = enclosingTry;
          enclosingTryLastLoop = i3;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149352))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          enclosingTryLastLoop = i2;
          currentLoop = (OOC_IR__LoopStatm)i1;
          goto l140;
l85:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148947))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148991))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 149001)), 0);
          i = 0;
          i2 = 0<i1;
          if (!i2) goto l93;
          i2=0;
l88_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149041))+12);
          i3 = _check_pointer(i3, 149051);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 149051))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 149054))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l88_loop;
l93:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149112))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l140;
l95:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148879))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l140;
l97:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148728))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148767))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148810))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l140;
l99:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148530))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148562))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148596))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148628))+20);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148666))+24);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l140;
l101:
          i1 = (OOC_INT32)currentLoop;
          i2 = i1==0;
          if (i2) goto l104;
          *(OOC_INT32*)((_check_pointer(i0, 148363))+8) = i1;
          goto l105;
l104:
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 148323));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 148291)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 25, (OOC_Scanner_SymList__Symbol)i2);
l105:
          i1 = enclosingTry;
          i2 = enclosingTryLastLoop;
          *(OOC_INT32*)((_check_pointer(i0, 148416))+12) = (i1-i2);
          goto l140;
l107:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148172))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148207))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l140;
l110:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148015))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148050))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l140;
l112:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147504))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = initWithoutSuper;
          if (i1) goto l115;
          i1=0u;
          goto l117;
l115:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147564))+8);
          i1 = OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm_IsInitSuper((OOC_IR__Expression)i1);
          
l117:
          if (!i1) goto l119;
          initWithoutSuper = 0u;
l119:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147676))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 147686)), 0);
          i = 0;
          i2 = 0<i1;
          if (!i2) goto l127;
          i2=0;
l122_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147721))+12);
          i3 = _check_pointer(i3, 147731);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 147731))*4);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l122_loop;
l127:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147776))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 147783))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147776))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 147783))+4);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 147788)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
          type = (OOC_SymbolTable__Type)i1;
          i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 147828)))), &_td_OOC_SymbolTable__FormalParsDesc, 147828);
          fpars = (OOC_SymbolTable__FormalPars)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 147874))+60);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 147881)), 0);
          i = 0;
          i3 = 0<i2;
          if (!i3) goto l140;
          i3=0;
l130_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 147921))+60);
          i4 = _check_pointer(i4, 147928);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 147928))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 147931))+20);
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 147943));
          OOC_IR__BuilderDesc_CheckExit_CheckException((OOC_SymbolTable__Type)i4, (OOC_Scanner_SymList__Symbol)i5);
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l130_loop;
          goto l140;
l137:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147409))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147446))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l140;
l139:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147299))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
l140:
          return;
          ;
        }


      i0 = (OOC_INT32)statmSeq;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l11;
      i = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 151520)), 0);
      i1 = 0<i0;
      if (!i1) goto l11;
      i1=0;
l5_loop:
      i2 = (OOC_INT32)statmSeq;
      i2 = _check_pointer(i2, 151558);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 151558))*4);
      OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm((OOC_IR__Statement)i1);
      i1 = i;
      i1 = i1+1;
      i = i1;
      i2 = i1<i0;
      if (i2) goto l5_loop;
l11:
      return;
      ;
    }


  currentLoop = (OOC_IR__LoopStatm)(OOC_INT32)0;
  currentTry = (OOC_IR__TryStatm)(OOC_INT32)0;
  enclosingTry = 0;
  enclosingTryLastLoop = 0;
  initWithoutSuper = 0u;
  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)OOC_SymbolTable__ProcDeclDesc_Class((OOC_SymbolTable__ProcDecl)i0);
  procClass = (OOC_SymbolTable__Record)i1;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 151827)))), OOC_SymbolTable__ItemDesc_InStandardModule)),OOC_SymbolTable__ItemDesc_InStandardModule)((OOC_SymbolTable__Item)i0);
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = i1!=(OOC_INT32)0;
  
l5:
  if (i2) goto l7;
  i2=0u;
  goto l9;
l7:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 151887))+40);
  i2 = i2!=(OOC_INT32)0;
  
l9:
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 151924))+40);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 151934)))), &_td_OOC_SymbolTable__RecordDesc);
  
l13:
  if (i2) goto l15;
  i2=0u;
  goto l17;
l15:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 151968))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 151973))+12);
  i2 = (
  _cmp8((const void*)(_check_pointer(i2, 151977)),(const void*)"INIT"))==0;
  
l17:
  if (i2) goto l19;
  i0=0u;
  goto l20;
l19:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 152043))+40);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 152019))+56);
  i1 = *(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 152057)))), &_td_OOC_SymbolTable__RecordDesc, 152057)), 152064))+48);
  i0 = i0<i1;
  
l20:
  initWithoutSuper = i0;
  i0 = (OOC_INT32)statmSeq;
  OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
  i0 = initWithoutSuper;
  if (!i0) goto l23;
  i0 = (OOC_INT32)procDecl;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 152191))+20);
  i1 = (OOC_INT32)b;
  OOC_IR__BuilderDesc_WarnName((OOC_IR__Builder)i1, 74, (OOC_SymbolTable__Name)i0);
l23:
  return;
  ;
}

void OOC_IR__InitProcedure(OOC_IR__Procedure p, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__ProcDecl decl, OOC_IR__StatementSeq statmSeq, OOC_Scanner_SymList__Symbol endOfProc, OOC_CHAR8 checkFunctionResult) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitNode((OOC_IR__Node)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i0, 152488))+4) = i1;
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 152509))+8) = i1;
  i1 = (OOC_INT32)endOfProc;
  *(OOC_INT32*)((_check_pointer(i0, 152538))+16) = i1;
  i1 = checkFunctionResult;
  *(OOC_UINT8*)((_check_pointer(i0, 152569))+12) = i1;
  return;
  ;
}

OOC_IR__Procedure OOC_IR__BuilderDesc_NewProcedure(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__ProcDecl decl, OOC_IR__StatementSeq statmSeq, OOC_Scanner_SymList__Symbol endOfProc, OOC_CHAR8 hasBegin) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__Procedure p;
  auto OOC_IR__StatementSeq OOC_IR__BuilderDesc_NewProcedure_AddSetupCode(OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__ProcDecl decl, OOC_IR__StatementSeq statmSeq);
    
    OOC_IR__StatementSeq OOC_IR__BuilderDesc_NewProcedure_AddSetupCode(OOC_Scanner_SymList__Symbol sym, OOC_SymbolTable__ProcDecl decl, OOC_IR__StatementSeq statmSeq) {
      register OOC_INT32 i0,i1,i2;
      ADT_ArrayList__ArrayList newStatm;
      OOC_SymbolTable__VarDeclArray formalPars;
      OOC_INT32 fparIndex;
      OOC_SymbolTable__VarDecl fpar;
      auto void OOC_IR__BuilderDesc_NewProcedure_AddSetupCode_AddStatm(OOC_IR__Statement statm);
      auto OOC_IR__StatementSeq OOC_IR__BuilderDesc_NewProcedure_AddSetupCode_Prepend(ADT_ArrayList__ArrayList prefix, OOC_IR__StatementSeq statmSeq);
        
        void OOC_IR__BuilderDesc_NewProcedure_AddSetupCode_AddStatm(OOC_IR__Statement statm) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)newStatm;
          i1 = i0==(OOC_INT32)0;
          if (!i1) goto l4;
          i0 = (OOC_INT32)ADT_ArrayList__New(4);
          newStatm = (ADT_ArrayList__ArrayList)i0;
          
l4:
          i1 = (OOC_INT32)statm;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 153631)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
          return;
          ;
        }

        
        OOC_IR__StatementSeq OOC_IR__BuilderDesc_NewProcedure_AddSetupCode_Prepend(ADT_ArrayList__ArrayList prefix, OOC_IR__StatementSeq statmSeq) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
          OOC_IR__StatementSeq _new;
          OOC_INT32 i;

          i0 = (OOC_INT32)prefix;
          i1 = (OOC_INT32)statmSeq;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 153857))+4);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 153877)), 0);
          i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], (i2+i3));
          _new = (OOC_IR__StatementSeq)i2;
          i = 0;
          i3 = *(OOC_INT32*)((_check_pointer(i0, 153910))+4);
          i4 = 0<i3;
          if (!i4) goto l8;
          i4=0;
l3_loop:
          i5 = _check_pointer(i2, 153935);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 153948));
          i7 = _check_pointer(i7, 153955);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 153955))*4);
          *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 153935))*4) = (_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 153959)))), &_td_OOC_IR__StatementDesc, 153959));
          i4 = i4+1;
          i = i4;
          i5 = i4<i3;
          if (i5) goto l3_loop;
l8:
          i = 0;
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 154018)), 0);
          i4 = 0<i3;
          if (!i4) goto l16;
          i4=0;
l11_loop:
          i5 = _check_pointer(i2, 154039);
          i6 = *(OOC_INT32*)((_check_pointer(i0, 154048))+4);
          i7 = OOC_ARRAY_LENGTH(i5, 0);
          i8 = _check_pointer(i1, 154067);
          i9 = OOC_ARRAY_LENGTH(i8, 0);
          i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 154067))*4);
          *(OOC_INT32*)(i5+(_check_index((i4+i6), i7, OOC_UINT32, 154039))*4) = i8;
          i4 = i4+1;
          i = i4;
          i5 = i4<i3;
          if (i5) goto l11_loop;
l16:
          return (OOC_IR__StatementSeq)i2;
          ;
        }


      newStatm = (ADT_ArrayList__ArrayList)(OOC_INT32)0;
      i0 = (OOC_INT32)decl;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 154184))+64);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 154196))+52);
      formalPars = (OOC_SymbolTable__VarDeclArray)i0;
      fparIndex = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 154297)), 0);
      i0 = 0!=i0;
      if (!i0) goto l11;
      i0=0;
l3_loop:
      i1 = (OOC_INT32)formalPars;
      i1 = _check_pointer(i1, 154330);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 154330))*4);
      fpar = (OOC_SymbolTable__VarDecl)i0;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 154358))+61);
      if (!i1) goto l6;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 154425)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)(OOC_INT32)0, (OOC_SymbolTable__VarDecl)i0);
      i2 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 154399)))), OOC_IR__BuilderDesc_NewCopyParameter)),OOC_IR__BuilderDesc_NewCopyParameter)((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Var)i0);
      OOC_IR__BuilderDesc_NewProcedure_AddSetupCode_AddStatm((OOC_IR__Statement)i0);
l6:
      i0 = fparIndex;
      i0 = i0+1;
      fparIndex = i0;
      i1 = (OOC_INT32)formalPars;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 154297)), 0);
      i1 = i0!=i1;
      if (i1) goto l3_loop;
l11:
      i0 = (OOC_INT32)newStatm;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l14;
      i1 = (OOC_INT32)statmSeq;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewProcedure_AddSetupCode_Prepend((ADT_ArrayList__ArrayList)i0, (OOC_IR__StatementSeq)i1);
      return (OOC_IR__StatementSeq)i0;
      goto l15;
l14:
      i0 = (OOC_INT32)statmSeq;
      return (OOC_IR__StatementSeq)i0;
l15:
      _failed_function(152975); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)sym;
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 154668))+50);
  if (i3) goto l3;
  i3=0u;
  goto l5;
l3:
  i3 = hasBegin;
  
l5:
  if (!i3) goto l7;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 154703)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 57, (OOC_Scanner_SymList__Symbol)i2);
l7:
  i3 = (OOC_INT32)statmSeq;
  OOC_IR__BuilderDesc_CheckExit((OOC_IR__Builder)i1, (OOC_SymbolTable__ProcDecl)i0, (OOC_IR__StatementSeq)i3);
  p = (OOC_IR__Procedure)((OOC_INT32)RT0__NewObject(_td_OOC_IR__Procedure.baseTypes[0]));
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewProcedure_AddSetupCode((OOC_Scanner_SymList__Symbol)i2, (OOC_SymbolTable__ProcDecl)i0, (OOC_IR__StatementSeq)i3);
  statmSeq = (OOC_IR__StatementSeq)i0;
  i1 = (OOC_INT32)decl;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 155013))+20);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 155019));
  i3 = (OOC_INT32)OOC_Config_StdPragmas__functionResultCheck;
  i4 = (OOC_INT32)b;
  i2 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i4, (Config_Section_Options__Option)i3, i2);
  i3 = (OOC_INT32)endOfProc;
  i4 = (OOC_INT32)p;
  i5 = (OOC_INT32)sym;
  OOC_IR__InitProcedure((OOC_IR__Procedure)i4, (OOC_Scanner_SymList__Symbol)i5, (OOC_SymbolTable__ProcDecl)i1, (OOC_IR__StatementSeq)i0, (OOC_Scanner_SymList__Symbol)i3, i2);
  return (OOC_IR__Procedure)i4;
  ;
}

void OOC_IR__VisitorDesc_VisitProcedure(OOC_IR__Visitor v, OOC_IR__Procedure procedure) {

  return;
  ;
}

void OOC_IR__ProcedureDesc_Accept(OOC_IR__Procedure p, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)p;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155219)))), OOC_IR__VisitorDesc_VisitProcedure)),OOC_IR__VisitorDesc_VisitProcedure)((OOC_IR__Visitor)i0, (OOC_IR__Procedure)i1);
  return;
  ;
}

void OOC_IR__InitModule(OOC_IR__Module m, OOC_Scanner_SymList__Symbol sym, OOC_Scanner_InputBuffer__CharArray name, OOC_IR__ProcedureList procList, OOC_IR__Procedure moduleBody) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitNode((OOC_IR__Node)i0, (OOC_Scanner_SymList__Symbol)i1);
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 155519))+4) = i1;
  i1 = (OOC_INT32)procList;
  *(OOC_INT32*)((_check_pointer(i0, 155540))+8) = i1;
  i1 = (OOC_INT32)moduleBody;
  *(OOC_INT32*)((_check_pointer(i0, 155569))+12) = i1;
  return;
  ;
}

OOC_IR__Module OOC_IR__BuilderDesc_NewModule(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_Scanner_InputBuffer__CharArray name, OOC_SymbolTable__Module decl, OOC_IR__ProcedureList procList, OOC_IR__StatementSeq statmSeq, OOC_Scanner_SymList__Symbol endOfModule) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_IR__Module m;
  auto void OOC_IR__BuilderDesc_NewModule_UnusedDeclarations(OOC_SymbolTable__Item item);
    
    void OOC_IR__BuilderDesc_NewModule_UnusedDeclarations(OOC_SymbolTable__Item item) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Item nested;

      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156010)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l38;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 156257))+44);
      i1 = i1==0;
      if (i1) goto l5;
      i1=0u;
      goto l7;
l5:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 156292))+28);
      i1 = i1==0;
      
l7:
      if (i1) goto l9;
      i1=0u;
      goto l15;
l9:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156348)))), &_td_OOC_SymbolTable__VarDeclDesc));
      if (i1) goto l12;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156377)))), &_td_OOC_SymbolTable__VarDeclDesc, 156377)), 156385))+56);
      i1 = !i1;
      
      goto l15;
l12:
      i1=1u;
l15:
      if (i1) goto l17;
      i1=0u;
      goto l23;
l17:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156420)))), &_td_OOC_SymbolTable__TypeDeclDesc));
      if (i1) goto l20;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 156446))+4);
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 156454)))), &_td_OOC_SymbolTable__FormalParsDesc));
      
      goto l23;
l20:
      i1=1u;
l23:
      if (i1) goto l25;
      i1=0u;
      goto l35;
l25:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156495)))), &_td_OOC_SymbolTable__ProcDeclDesc));
      if (i1) goto l32;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156538)))), &_td_OOC_SymbolTable__ProcDeclDesc, 156538)), 156547))+49);
      if (i1) goto l30;
      i1 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156588)))), &_td_OOC_SymbolTable__ProcDeclDesc, 156588)));
      
      goto l31;
l30:
      i1=1u;
l31:
      i1 = !i1;
      
      goto l35;
l32:
      i1=1u;
l35:
      if (!i1) goto l38;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 156663))+20);
      i2 = (OOC_INT32)b;
      OOC_IR__BuilderDesc_WarnName((OOC_IR__Builder)i2, 53, (OOC_SymbolTable__Name)i1);
l38:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 156747))+8);
      nested = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l46;
l41_loop:
      OOC_IR__BuilderDesc_NewModule_UnusedDeclarations((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 156851));
      nested = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l41_loop;
l46:
      return;
      ;
    }


  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Module.baseTypes[0]);
  m = (OOC_IR__Module)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)decl;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 157007))+80);
  i4 = (OOC_INT32)sym;
  i5 = (OOC_INT32)statmSeq;
  i6 = (OOC_INT32)endOfModule;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 156982)))), OOC_IR__BuilderDesc_NewProcedure)),OOC_IR__BuilderDesc_NewProcedure)((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i4, (OOC_SymbolTable__ProcDecl)i3, (OOC_IR__StatementSeq)i5, (OOC_Scanner_SymList__Symbol)i6, 1u);
  i5 = (OOC_INT32)name;
  i6 = (OOC_INT32)procList;
  OOC_IR__InitModule((OOC_IR__Module)i0, (OOC_Scanner_SymList__Symbol)i4, (OOC_Scanner_InputBuffer__CharArray)i5, (OOC_IR__ProcedureList)i6, (OOC_IR__Procedure)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 157091))+8);
  i0 = OOC_Error__ListDesc_NoErrors((OOC_Error__List)i0);
  if (!i0) goto l4;
  OOC_IR__BuilderDesc_NewModule_UnusedDeclarations((OOC_SymbolTable__Item)i2);
l4:
  i0 = (OOC_INT32)m;
  return (OOC_IR__Module)i0;
  ;
}

void OOC_IR__VisitorDesc_VisitModule(OOC_IR__Visitor v, OOC_IR__Module module) {

  return;
  ;
}

void OOC_IR__ModuleDesc_Accept(OOC_IR__Module m, OOC_IR__Visitor v) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)m;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157330)))), OOC_IR__VisitorDesc_VisitModule)),OOC_IR__VisitorDesc_VisitModule)((OOC_IR__Visitor)i0, (OOC_IR__Module)i1);
  return;
  ;
}

void OOC_IR__ModuleDesc_Destroy(OOC_IR__Module m) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;
  auto void OOC_IR__ModuleDesc_Destroy_E(OOC_IR__Expression *n);
  auto void OOC_IR__ModuleDesc_Destroy_S(OOC_IR__Statement *n);
  auto void OOC_IR__ModuleDesc_Destroy_EList(OOC_IR__ExpressionList *e);
  auto void OOC_IR__ModuleDesc_Destroy_E(OOC_IR__Expression *n);
  auto void OOC_IR__ModuleDesc_Destroy_SSeq(OOC_IR__StatementSeq *n);
  auto void OOC_IR__ModuleDesc_Destroy_S(OOC_IR__Statement *n);
    
    void OOC_IR__ModuleDesc_Destroy_EList(OOC_IR__ExpressionList *e) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;

      i0 = (OOC_INT32)*e;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l11;
      i = 0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 157748)), 0);
      i2 = 0<i1;
      if (!i2) goto l10;
      i2=0;
l5_loop:
      i3 = _check_pointer(i0, 157769);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      OOC_IR__ModuleDesc_Destroy_E((void*)(i3+(_check_index(i2, i4, OOC_UINT32, 157769))*4));
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l5_loop;
l10:
      *e = (OOC_IR__ExpressionList)(OOC_INT32)0;
l11:
      return;
      ;
    }

    
    void OOC_IR__ModuleDesc_Destroy_E(OOC_IR__Expression *n) {
      register OOC_INT32 i0,i1;
      OOC_IR__Expression expr;

      i0 = (OOC_INT32)*n;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l142;
      *(OOC_INT32*)((_check_pointer(i0, 157945))+4) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157973)))), &_td_OOC_IR__ConstDesc);
      if (i1) goto l140;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158021)))), &_td_OOC_IR__OperatorDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 160414)))), &_td_OOC_IR__ReferenceDesc);
      if (i1) goto l13;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 160465)))), &_td_OOC_IR__StatementDesc);
      if (i1) goto l11;
      Log__Type("--- expression type", 20, (void*)i0);
      _assert(0u, 127, 160600);
      goto l141;
l11:
      OOC_IR__ModuleDesc_Destroy_S((void*)(OOC_INT32)n);
      goto l141;
l13:
      *(OOC_INT32*)((_check_pointer(i0, 160440))+8) = (OOC_INT32)0;
      goto l141;
l15:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158051)))), &_td_OOC_IR__AbsDesc);
      if (i1) goto l137;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158099)))), &_td_OOC_IR__AdrDesc);
      if (i1) goto l135;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158146)))), &_td_OOC_IR__AshDesc);
      if (i1) goto l133;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158214)))), &_td_OOC_IR__BinaryArithDesc);
      if (i1) goto l131;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158291)))), &_td_OOC_IR__BooleanOpDesc);
      if (i1) goto l129;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158366)))), &_td_OOC_IR__CapDesc);
      if (i1) goto l127;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158414)))), &_td_OOC_IR__CompareDesc);
      if (i1) goto l125;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158487)))), &_td_OOC_IR__ConcatDesc);
      if (i1) goto l123;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158542)))), &_td_OOC_IR__ConstructorDesc);
      if (i1) goto l121;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158726)))), &_td_OOC_IR__CurrentExceptionDesc);
      if (i1) goto l141;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158787)))), &_td_OOC_IR__ChangeElementDesc);
      if (i1) goto l118;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158867)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l116;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158917)))), &_td_OOC_IR__EntierDesc);
      if (i1) goto l114;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158968)))), &_td_OOC_IR__IndexDesc);
      if (i1) goto l112;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159040)))), &_td_OOC_IR__LenDesc);
      if (i1) goto l110;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159142)))), &_td_OOC_IR__NegateDesc);
      if (i1) goto l108;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159193)))), &_td_OOC_IR__NewBlockDesc);
      if (i1) goto l106;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159243)))), &_td_OOC_IR__NewObjectDesc);
      if (i1) goto l104;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159300)))), &_td_OOC_IR__NotDesc);
      if (i1) goto l102;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159348)))), &_td_OOC_IR__OddDesc);
      if (i1) goto l100;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159396)))), &_td_OOC_IR__SelectFieldDesc);
      if (i1) goto l98;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159510)))), &_td_OOC_IR__SelectProcDesc);
      if (i1) goto l96;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159627)))), &_td_OOC_IR__SetMemberDesc);
      if (i1) goto l94;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159703)))), &_td_OOC_IR__SetOpDesc);
      if (i1) goto l92;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159774)))), &_td_OOC_IR__SetRangeDesc);
      if (i1) goto l90;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159845)))), &_td_OOC_IR__ShiftDesc);
      if (i1) goto l88;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159914)))), &_td_OOC_IR__TypeCastDesc);
      if (i1) goto l86;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159964)))), &_td_OOC_IR__TypeConvDesc);
      if (i1) goto l84;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 160014)))), &_td_OOC_IR__TypeTagDesc);
      if (i1) goto l82;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 160065)))), &_td_OOC_IR__TypeTestDesc);
      if (i1) goto l80;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 160209)))), &_td_OOC_IR__TypeGuardDesc);
      if (i1) goto l78;
      Log__Type("--- operator type", 18, (void*)i0);
      _assert(0u, 127, 160373);
      goto l141;
l78:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 160245))+8);
      expr = (OOC_IR__Expression)i0;
      OOC_IR__ModuleDesc_Destroy_E((void*)(OOC_INT32)&expr);
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 160286))+8) = (OOC_INT32)0;
      goto l141;
l80:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 160094))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 160115))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 160153))+20));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 160178))+24) = (OOC_INT32)0;
      goto l141;
l82:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 160042))+8));
      goto l141;
l84:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159993))+8));
      goto l141;
l86:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159943))+8));
      goto l141;
l88:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159871))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159895))+12));
      goto l141;
l90:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159803))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159826))+12));
      goto l141;
l92:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159729))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159752))+16));
      goto l141;
l94:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159657))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159683))+12));
      goto l141;
l96:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159541))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 159566))+20) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 159595))+24) = (OOC_INT32)0;
      goto l141;
l98:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159428))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 159451))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 159479))+16) = (OOC_INT32)0;
      goto l141;
l100:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159372))+8));
      goto l141;
l102:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159324))+8));
      goto l141;
l104:
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 159277))+8));
      goto l141;
l106:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159222))+8));
      goto l141;
l108:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159169))+8));
      goto l141;
l110:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159064))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159088))+20));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 159118))+16) = 0;
      goto l141;
l112:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158994))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 159018))+12));
      goto l141;
l114:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158944))+8));
      goto l141;
l116:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158893))+8));
      goto l141;
l118:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158821))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158843))+16));
      goto l141;
l121:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 158580))+8);
      expr = (OOC_IR__Expression)i0;
      OOC_IR__ModuleDesc_Destroy_E((void*)(OOC_INT32)&expr);
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 158622))+8) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 158658))+12);
      expr = (OOC_IR__Expression)i0;
      OOC_IR__ModuleDesc_Destroy_E((void*)(OOC_INT32)&expr);
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 158699))+12) = (OOC_INT32)0;
      goto l141;
l123:
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 158518))+8));
      goto l141;
l125:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158442))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158465))+16));
      goto l141;
l127:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158390))+8));
      goto l141;
l129:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158321))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158344))+16));
      goto l141;
l131:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158246))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158269))+16));
      goto l141;
l133:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158170))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158194))+12));
      goto l141;
l135:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158123))+8));
      goto l141;
l137:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158075))+8));
      goto l141;
l140:
      *(OOC_INT32*)((_check_pointer(i0, 157995))+8) = (OOC_INT32)0;
l141:
      *n = (OOC_IR__Expression)(OOC_INT32)0;
l142:
      return;
      ;
    }

    
    void OOC_IR__ModuleDesc_Destroy_SSeq(OOC_IR__StatementSeq *n) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;

      i0 = (OOC_INT32)*n;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l11;
      i = 0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 160796)), 0);
      i2 = 0<i1;
      if (!i2) goto l11;
      i2=0;
l5_loop:
      i3 = _check_pointer(i0, 160817);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      OOC_IR__ModuleDesc_Destroy_S((void*)(i3+(_check_index(i2, i4, OOC_UINT32, 160817))*4));
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l5_loop;
l11:
      return;
      ;
    }

    
    void OOC_IR__ModuleDesc_Destroy_S(OOC_IR__Statement *n) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;

      i0 = (OOC_INT32)*n;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l93;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 160972)))), &_td_OOC_IR__AssertDesc);
      if (i1) goto l91;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 161044)))), &_td_OOC_IR__AssignmentDesc);
      if (i1) goto l89;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 161118)))), &_td_OOC_IR__CallDesc);
      if (i1) goto l87;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 161223)))), &_td_OOC_IR__CopyDesc);
      if (i1) goto l85;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 161288)))), &_td_OOC_IR__CopyParameterDesc);
      if (i1) goto l83;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 161344)))), &_td_OOC_IR__CopyStringDesc);
      if (i1) goto l81;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 161441)))), &_td_OOC_IR__ExitDesc);
      if (i1) goto l79;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 161487)))), &_td_OOC_IR__ForStatmDesc);
      if (i1) goto l77;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 161619)))), &_td_OOC_IR__IfStatmDesc);
      if (i1) goto l75;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 161722)))), &_td_OOC_IR__CaseStatmDesc);
      if (i1) goto l64;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 162005)))), &_td_OOC_IR__LoopStatmDesc);
      if (i1) goto l62;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 162055)))), &_td_OOC_IR__MoveBlockDesc);
      if (i1) goto l60;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 162146)))), &_td_OOC_IR__RaiseDesc);
      if (i1) goto l58;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 162194)))), &_td_OOC_IR__RepeatStatmDesc);
      if (i1) goto l56;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 162276)))), &_td_OOC_IR__ReturnDesc);
      if (i1) goto l54;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 162322)))), &_td_OOC_IR__TryStatmDesc);
      if (i1) goto l43;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 162550)))), &_td_OOC_IR__WhileStatmDesc);
      if (i1) goto l41;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 162623)))), &_td_OOC_IR__WithStatmDesc);
      if (i1) goto l39;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 162620)))), 162620);
      goto l92;
l39:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 162651))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 162676))+12));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 162704))+16));
      goto l92;
l41:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 162579))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 162604))+12));
      goto l92;
l43:
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 162352))+8));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162393))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 162403)), 0);
      i = 0;
      i2 = 0<i1;
      if (!i2) goto l52;
      i2=0;
l47_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162424))+12);
      i0 = _check_pointer(i0, 162434);
      i3 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i3, OOC_UINT32, 162434))*4);
      *(OOC_INT32*)((_check_pointer(i0, 162437))+4) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162469))+12);
      i3 = _check_pointer(i3, 162479);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 162479))*4);
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i3, 162482))+12));
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l47_loop;
l52:
      *(OOC_INT32*)((_check_pointer(i0, 162520))+12) = (OOC_INT32)0;
      goto l92;
l54:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 162301))+8));
      goto l92;
l56:
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 162227))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 162248))+12));
      goto l92;
l58:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 162170))+8));
      goto l92;
l60:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 162083))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 162106))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 162127))+16));
      goto l92;
l62:
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 162036))+8));
      goto l92;
l64:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 161750))+8));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 161789))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 161798)), 0);
      i = 0;
      i2 = 0<i1;
      if (!i2) goto l73;
      i2=0;
l68_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 161819))+12);
      i0 = _check_pointer(i0, 161828);
      i3 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i3, OOC_UINT32, 161828))*4);
      *(OOC_INT32*)((_check_pointer(i0, 161831))+8) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 161865))+12);
      i3 = _check_pointer(i3, 161874);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 161874))*4);
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i3, 161877))+12));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 161902))+12);
      i3 = _check_pointer(i3, 161911);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 161911))*4) = (OOC_INT32)0;
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l68_loop;
l73:
      *(OOC_INT32*)((_check_pointer(i0, 161949))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 161983))+16));
      goto l92;
l75:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 161645))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 161670))+12));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 161698))+16));
      goto l92;
l77:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 161514))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 161534))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 161556))+16));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 161576))+20));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 161600))+24));
      goto l92;
l79:
      *(OOC_INT32*)((_check_pointer(i0, 161462))+8) = (OOC_INT32)0;
      goto l92;
l81:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 161373))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 161396))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 161417))+16));
      goto l92;
l83:
      *(OOC_INT32*)((_check_pointer(i0, 161318))+8) = (OOC_INT32)0;
      goto l92;
l85:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 161246))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 161269))+12));
      goto l92;
l87:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 161141))+8));
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 161168))+12));
      *(OOC_INT32*)((_check_pointer(i0, 161192))+16) = (OOC_INT32)0;
      goto l92;
l89:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 161073))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 161098))+12));
      goto l92;
l91:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 160997))+8));
      *(OOC_INT32*)((_check_pointer(i0, 161021))+12) = 0;
l92:
      *n = (OOC_IR__Statement)(OOC_INT32)0;
l93:
      return;
      ;
    }


  i0 = (OOC_INT32)m;
  *(OOC_INT32*)((_check_pointer(i0, 162786))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162823))+8);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 162832)), 0);
  i2 = 0<i1;
  if (!i2) goto l9;
  i2=0;
l4_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162847))+8);
  i3 = _check_pointer(i3, 162856);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 162856))*4);
  *(OOC_INT32*)((_check_pointer(i3, 162859))+4) = (OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162885))+8);
  i0 = _check_pointer(i0, 162894);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i3, OOC_UINT32, 162894))*4);
  OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 162897))+8));
  i0 = (OOC_INT32)m;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162916))+8);
  i2 = _check_pointer(i2, 162925);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = i;
  *(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 162925))*4) = (OOC_INT32)0;
  i2 = i4+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l4_loop;
l9:
  *(OOC_INT32*)((_check_pointer(i0, 162951))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162975))+12);
  *(OOC_INT32*)((_check_pointer(i1, 162986))+4) = (OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 163010))+12);
  OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 163021))+8));
  i0 = (OOC_INT32)m;
  *(OOC_INT32*)((_check_pointer(i0, 163038))+12) = (OOC_INT32)0;
  return;
  ;
}

void OOC_IR__InitVisitor(OOC_IR__Visitor v) {

  return;
  ;
}

void OOC_IR__InitConstFold(OOC_IR__ConstFold c, OOC_IR__Builder b) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)c;
  OOC_IR__InitVisitor((OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)b;
  *(OOC_INT32*)(_check_pointer(i0, 163336)) = i1;
  return;
  ;
}

void OOC_IR__InitBuilder(OOC_IR__Builder b, OOC_SymbolTable__Module module, OOC_SymbolTable_Uses__Uses uses, OOC_Config_Pragmas__History pragmaHistory, OOC_Error__List errList, OOC_IR__ConstFold fold) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SymbolTable__Item string;
  auto OOC_IR__TypeType OOC_IR__InitBuilder_NewTypeType(OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position);
  auto OOC_IR__ModuleType OOC_IR__InitBuilder_NewModuleType(OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position);
    
    OOC_IR__TypeType OOC_IR__InitBuilder_NewTypeType(OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeType.baseTypes[0]);
      i1 = (OOC_INT32)parent;
      i2 = (OOC_INT32)position;
      OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2);
      return (OOC_IR__TypeType)i0;
      ;
    }

    
    OOC_IR__ModuleType OOC_IR__InitBuilder_NewModuleType(OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ModuleType.baseTypes[0]);
      i1 = (OOC_INT32)parent;
      i2 = (OOC_INT32)position;
      OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i2);
      return (OOC_IR__ModuleType)i0;
      ;
    }


  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)module;
  *(OOC_INT32*)(_check_pointer(i0, 164205)) = i1;
  i1 = (OOC_INT32)pragmaHistory;
  *(OOC_INT32*)((_check_pointer(i0, 164230))+4) = i1;
  i1 = (OOC_INT32)errList;
  *(OOC_INT32*)((_check_pointer(i0, 164269))+8) = i1;
  i1 = (OOC_INT32)OOC_Scanner_SymList__NewSymbol((OOC_Scanner_InputBuffer__CharArray)0, (-1));
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(17);
  i3 = (OOC_INT32)Object_Boxed__false;
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i3);
  *(OOC_INT32*)((_check_pointer(i0, 164296))+20) = i1;
  i1 = (OOC_INT32)OOC_IR__InitBuilder_NewTypeType((OOC_SymbolTable__Item)0, (OOC_SymbolTable__Position)0);
  *(OOC_INT32*)((_check_pointer(i0, 164458))+24) = i1;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)OOC_IR__InitBuilder_NewModuleType((OOC_SymbolTable__Item)0, (OOC_SymbolTable__Position)0);
  *(OOC_INT32*)((_check_pointer(i0, 164501))+28) = i1;
  i0 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 164548))+36) = 0;
  i1 = (OOC_INT32)fold;
  *(OOC_INT32*)((_check_pointer(i0, 164573))+12) = i1;
  i2 = (OOC_INT32)uses;
  *(OOC_INT32*)((_check_pointer(i0, 164599))+16) = i2;
  *(OOC_INT32*)(_check_pointer(i1, 164623)) = i0;
  i1 = (OOC_INT32)module;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 164693))+48);
  i4 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringModule;
  i5 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringType;
  i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__ResolveQualident((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable_Uses__Uses)i2, (OOC_SymbolTable__Name)i4, (OOC_SymbolTable__Name)i5);
  string = (OOC_SymbolTable__Item)i1;
  i2 = i1==0;
  if (i2) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 164953)))), &_td_OOC_SymbolTable__TypeDeclDesc, 164953)), 164962))+48);
  *(OOC_INT32*)((_check_pointer(i0, 164926))+32) = i1;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 164889))+32) = 0;
l4:
  return;
  ;
}

OOC_IR__Builder OOC_IR__NewBuilder(OOC_SymbolTable__Module module, OOC_SymbolTable_Uses__Uses uses, OOC_Config_Pragmas__History pragmaHistory, OOC_Error__List errList, OOC_IR__ConstFold constFold) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Builder.baseTypes[0]);
  i1 = (OOC_INT32)module;
  i2 = (OOC_INT32)uses;
  i3 = (OOC_INT32)pragmaHistory;
  i4 = (OOC_INT32)errList;
  i5 = (OOC_INT32)constFold;
  OOC_IR__InitBuilder((OOC_IR__Builder)i0, (OOC_SymbolTable__Module)i1, (OOC_SymbolTable_Uses__Uses)i2, (OOC_Config_Pragmas__History)i3, (OOC_Error__List)i4, (OOC_IR__ConstFold)i5);
  return (OOC_IR__Builder)i0;
  ;
}

void OOC_IR__BuilderDesc_StartTypeGuard(OOC_IR__Builder b, OOC_IR__TypeTest typeTest, OOC_SymbolTable__Namespace *namespace) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SymbolTable__VarDecl var;
  OOC_SymbolTable__DeclarationArray da;
  OOC_SymbolTable_Namespace__Nested nested;

  i0 = (OOC_INT32)typeTest;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 165578))+8);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 165584)))), &_td_OOC_IR__VarDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 165988))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 165993));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 165957)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 29, (OOC_Scanner_SymList__Symbol)i0);
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 165618))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 165625)))), &_td_OOC_IR__VarDesc, 165625)), 165629))+8);
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 165640)))), &_td_OOC_SymbolTable__VarDeclDesc, 165640);
  var = (OOC_SymbolTable__VarDecl)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__DeclarationArray.baseTypes[0], 1);
  da = (OOC_SymbolTable__DeclarationArray)i2;
  i3 = _check_pointer(i2, 165677);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 165752))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 165761))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 165707))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 165771)))), &_td_OOC_SymbolTable__TypeDeclDesc, 165771)), 165780))+48);
  i0 = (OOC_INT32)OOC_IR__NewGuardedVar((OOC_SymbolTable__VarDecl)i1, (OOC_SymbolTable__Name)i5, (OOC_SymbolTable__Type)i0);
  *(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 165677))*4) = i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NewNested((OOC_SymbolTable__DeclarationArray)i2, 1);
  nested = (OOC_SymbolTable_Namespace__Nested)i0;
  i1 = (OOC_INT32)*namespace;
  OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace((OOC_SymbolTable_Namespace__Nested)i0, (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 165890)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 165890)));
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
l4:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__DeclarationArray.baseTypes[0], 0);
  da = (OOC_SymbolTable__DeclarationArray)i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NewNested((OOC_SymbolTable__DeclarationArray)i0, 0);
  nested = (OOC_SymbolTable_Namespace__Nested)i0;
  i1 = (OOC_INT32)*namespace;
  OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace((OOC_SymbolTable_Namespace__Nested)i0, (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 166201)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 166201)));
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
  ;
}

void OOC_IR__BuilderDesc_EndTypeGuard(OOC_IR__Builder b, OOC_SymbolTable__Namespace *namespace) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)*namespace;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 166373)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 166373)), 166380))+8);
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
  ;
}

void OOC_IR__BuilderDesc_StartExceptionScope(OOC_IR__Builder b, OOC_IR__Expression exceptionType, OOC_Scanner_SymList__Symbol varName, OOC_SymbolTable__Namespace *namespace) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SymbolTable__Type type;
  OOC_SymbolTable__DeclarationArray da;
  OOC_SymbolTable_Namespace__Nested nested;

  i0 = (OOC_INT32)exceptionType;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 166736)))), &_td_OOC_IR__TypeRefDesc);
  if (i1) goto l3;
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 166811))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 166821))+4);
  type = (OOC_SymbolTable__Type)i0;
  
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 166776))+12);
  type = (OOC_SymbolTable__Type)i0;
  
l4:
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__DeclarationArray.baseTypes[0], 1);
  da = (OOC_SymbolTable__DeclarationArray)i1;
  i2 = _check_pointer(i1, 166864);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT32)b;
  i5 = (OOC_INT32)varName;
  i6 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__exception;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 166940)))), OOC_IR__BuilderDesc_GetName)),OOC_IR__BuilderDesc_GetName)((OOC_IR__Builder)i4, (OOC_Scanner_SymList__Symbol)i5);
  i0 = (OOC_INT32)OOC_IR__NewGuardedVar((OOC_SymbolTable__VarDecl)i6, (OOC_SymbolTable__Name)i4, (OOC_SymbolTable__Type)i0);
  *(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 166864))*4) = i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NewNested((OOC_SymbolTable__DeclarationArray)i1, 1);
  nested = (OOC_SymbolTable_Namespace__Nested)i0;
  i1 = (OOC_INT32)*namespace;
  OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace((OOC_SymbolTable_Namespace__Nested)i0, (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 167061)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 167061)));
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
  ;
}

void OOC_IR__BuilderDesc_EndExceptionScope(OOC_IR__Builder b, OOC_SymbolTable__Namespace *namespace) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)*namespace;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 167242)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 167242)), 167249))+8);
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIdentRef(OOC_IR__Builder b, OOC_SymbolTable__Namespace baseNS, OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item context, OOC_Scanner_SymList__Symbol name) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SymbolTable__Name n;
  OOC_SymbolTable__Declaration decl;
  OOC_IR__Var varRef;
  OOC_SymbolTable__Item redirModule;

  i0 = (OOC_INT32)name;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 167585))+4);
  i1 = i1==45;
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 169148)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 2, (OOC_Scanner_SymList__Symbol)i0);
  i0=i1;
  goto l52;
l3:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 167619)))), OOC_IR__BuilderDesc_GetName)),OOC_IR__BuilderDesc_GetName)((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i0);
  n = (OOC_SymbolTable__Name)i2;
  i3 = (OOC_INT32)ns;
  i4 = (OOC_INT32)context;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 167651)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i2, 0u);
  decl = (OOC_SymbolTable__Declaration)i3;
  i5 = i3==(OOC_INT32)0;
  if (i5) goto l50;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 167788))+16);
  OOC_SymbolTable_Uses__Mark((OOC_SymbolTable__Declaration)i3, (OOC_SymbolTable_Uses__Uses)i5, (OOC_SymbolTable__Name)i2);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 167816)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i2) goto l48;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 167907)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i2) goto l46;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 167978)))), &_td_OOC_IR__GuardedVarDesc);
  if (i2) goto l40;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 168267)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i2) goto l38;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 168343)))), &_td_OOC_SymbolTable__PredefProcDesc);
  if (i2) goto l36;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 168421)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i2) goto l34;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 168499)))), &_td_OOC_SymbolTable__ImportDesc);
  if (i2) goto l32;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 168591)))), &_td_OOC_SymbolTable__RedirectDesc);
  if (i2) goto l22;
  Log__Type("Unknown decl in NewIdentRef", 28, (void*)i3);
  _assert(0u, 127, 169094);
  goto l51;
l22:
  i2 = (OOC_INT32)baseNS;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 168663))+48);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 168640)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i5, 0u);
  redirModule = (OOC_SymbolTable__Item)i2;
  i5 = i2==(OOC_INT32)0;
  if (i5) goto l25;
  i5 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 168730)))), &_td_OOC_SymbolTable__ImportDesc));
  
  goto l27;
l25:
  i5=1u;
l27:
  if (i5) goto l29;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 168843)))), &_td_OOC_SymbolTable__ImportDesc, 168843)), 168850))+52);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 168865))+48);
  ns = (OOC_SymbolTable__Namespace)i2;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 168983))+52);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 168989))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 168983))+52);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 168989))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 168993)), 0);
  i0 = (OOC_INT32)OOC_Scanner_SymList__CloneSymbol((OOC_Scanner_SymList__Symbol)i0, (void*)(_check_pointer(i5, 168993)), i3);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 168890)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i1, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i4, (OOC_Scanner_SymList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l51;
l29:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 168763)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 41, (OOC_Scanner_SymList__Symbol)i0);
  goto l51;
l32:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 168559))+52);
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewModuleRef((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__Module)i2);
  return (OOC_IR__Expression)i0;
  goto l51;
l34:
  i0 = (OOC_INT32)OOC_IR__NewProcedureRef((OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__ProcDecl)i3);
  return (OOC_IR__Expression)i0;
  goto l51;
l36:
  i0 = (OOC_INT32)OOC_IR__NewPredefProc((OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__PredefProc)i3);
  return (OOC_IR__Expression)i0;
  goto l51;
l38:
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeRef((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__TypeDecl)i3);
  return (OOC_IR__Expression)i0;
  goto l51;
l40:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 168012))+48);
  i4 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__exception;
  i2 = i2==i4;
  if (i2) goto l43;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 168166))+48);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 168148)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__VarDecl)i2);
  varRef = (OOC_IR__Var)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 168204))+52);
  *(OOC_INT32*)((_check_pointer(i0, 168191))+4) = i2;
  return (OOC_IR__Expression)i0;
  goto l51;
l43:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 168102))+52);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 168071)))), OOC_IR__BuilderDesc_NewCurrentException)),OOC_IR__BuilderDesc_NewCurrentException)((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__Type)i2);
  return (OOC_IR__Expression)i0;
  goto l51;
l46:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 167942)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__VarDecl)i3);
  return (OOC_IR__Expression)i0;
  goto l51;
l48:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 167872))+52);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 167884))+48);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_SymList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i3);
  return (OOC_IR__Expression)i0;
  goto l51;
l50:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 167719)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 1, (OOC_Scanner_SymList__Symbol)i0);
l51:
  i0=i1;
l52:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 169389))+20);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewQualident(OOC_IR__Builder b, OOC_SymbolTable__Namespace baseNS, OOC_IR__ModuleRef modref, OOC_SymbolTable__Item context, OOC_Scanner_SymList__Symbol name) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)modref;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 169674))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 169685)))), &_td_OOC_SymbolTable__ModuleDesc, 169685)), 169692))+48);
  i2 = (OOC_INT32)baseNS;
  i3 = (OOC_INT32)context;
  i4 = (OOC_INT32)name;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 169645)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i0, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Namespace)i1, (OOC_SymbolTable__Item)i3, (OOC_Scanner_SymList__Symbol)i4);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeVar(OOC_IR__Builder b, OOC_SymbolTable__Namespace baseNS, OOC_IR__TypeRef typeRef, OOC_SymbolTable__Item context, OOC_Scanner_SymList__Symbol name) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)typeRef;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 169983))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 169993)))), &_td_OOC_SymbolTable__TypeDeclDesc, 169993)), 170002))+48);
  type = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 170021))+28);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 170138))+28);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 170147))+24);
  i2 = (OOC_INT32)baseNS;
  i3 = (OOC_INT32)context;
  i4 = (OOC_INT32)name;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 170113)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i1, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i3, (OOC_Scanner_SymList__Symbol)i4);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)name;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 170057)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 1, (OOC_Scanner_SymList__Symbol)i1);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(169757); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewQualType(OOC_IR__Builder b, OOC_IR__Expression type, OOC_IR__ExpressionList arguments, OOC_Scanner_SymList__Symbol rParen) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
  OOC_SymbolTable__Type qualType;
  OOC_SymbolTable__TypeVarArray params;
  OOC_INT32 i;
  OOC_SymbolTable__Type t;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 170482)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  qualType = (OOC_SymbolTable__Type)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 170517))+4);
  i3 = i3==(OOC_INT32)0;
  if (i3) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 171201));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 171170)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 69, (OOC_Scanner_SymList__Symbol)i2);
  goto l28;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 170566)))), &_td_OOC_SymbolTable__QualTypeDesc, 170566)), 170575))+40);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 170584))+28);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 170593))+20);
  params = (OOC_SymbolTable__TypeVarArray)i3;
  i4 = (OOC_INT32)arguments;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 170622)), 0);
  i6 = OOC_ARRAY_LENGTH((_check_pointer(i4, 170640)), 0);
  i5 = i5<i6;
  if (i5) goto l26;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 170754)), 0);
  i6 = OOC_ARRAY_LENGTH((_check_pointer(i3, 170736)), 0);
  i5 = i6>i5;
  if (i5) goto l24;
  i = 0;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 170848)), 0);
  i6 = 0<i5;
  if (!i6) goto l28;
  i6 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i7=0;
l10_loop:
  i8 = _check_pointer(i4, 170880);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i7, i9, OOC_UINT32, 170880))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i8, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 170884)))), &_td_OOC_IR__TypeRefDesc, 170884)), 170892))+12);
  t = (OOC_SymbolTable__Type)i8;
  i9 = i8!=(OOC_INT32)0;
  if (i9) goto l13;
  i9=0u;
  goto l15;
l13:
  i9 = _check_pointer(i3, 170954);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i7, i10, OOC_UINT32, 170954))*4);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i9, 170957))+40);
  i9 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i8, (OOC_SymbolTable__Type)i9);
  
l15:
  if (i9) goto l17;
  i8 = _check_pointer(i4, 171105);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i7, i9, OOC_UINT32, 171105))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i8, 171108));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 171067)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 72, (OOC_Scanner_SymList__Symbol)i8);
  goto l18;
l17:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 171011)))), &_td_OOC_SymbolTable__QualTypeDesc, 171011)), 171020))+48);
  i9 = _check_pointer(i9, 171030);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 171011)))), &_td_OOC_SymbolTable__QualTypeDesc, 171011)), 171020))+48);
  i11 = OOC_ARRAY_LENGTH((_check_pointer(i11, 171030)), 0);
  i11 = _check_index(i7, i11, OOC_UINT32, 171030);
  OOC_SymbolTable__InitTypeRef((void*)(i9+(_check_index(i7, i10, OOC_UINT32, 171030))*8), (RT0__Struct)i6, (OOC_SymbolTable__Type)i8);
l18:
  i7 = i7+1;
  i = i7;
  i8 = i7<i5;
  if (i8) goto l10_loop;
  goto l28;
l24:
  i2 = (OOC_INT32)rParen;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 170772)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 70, (OOC_Scanner_SymList__Symbol)i2);
  goto l28;
l26:
  i2 = _check_pointer(i4, 170692);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 170703)), 0);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 170692))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 170706));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 170658)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 71, (OOC_Scanner_SymList__Symbol)i2);
l28:
  return (OOC_IR__Expression)i1;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSelect(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression var, OOC_SymbolTable__Item context, OOC_Scanner_SymList__Symbol name) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_IR__Expression varRef;
  OOC_SymbolTable__Type type;
  OOC_SymbolTable__Name n;
  OOC_SymbolTable__Declaration decl;
  OOC_SymbolTable__ProcDecl procDecl;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)var;
  i2 = (OOC_INT32)sym;
  OOC_IR__BuilderDesc_CheckFunctionOp((OOC_IR__Builder)i0, (OOC_IR__Expression)i1, (OOC_Scanner_SymList__Symbol)i2);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 171632))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 171632))+4);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 171637)))), OOC_SymbolTable__TypeDesc_Bound)),OOC_SymbolTable__TypeDesc_Bound)((OOC_SymbolTable__Type)i4);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 171646)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i3) goto l3;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 171676))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 171676))+4);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 171681)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i4);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 171692)))), &_td_OOC_SymbolTable__PointerDesc);
  
  goto l5;
l3:
  i3=1u;
l5:
  if (i3) goto l7;
  varRef = (OOC_IR__Expression)i1;
  i3=i1;
  goto l8;
l7:
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 171730)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1);
  varRef = (OOC_IR__Expression)i3;
  
l8:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 171811))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 171811))+4);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 171816)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i5);
  type = (OOC_SymbolTable__Type)i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 171840)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i5) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 172561));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 172535)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 20, (OOC_Scanner_SymList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l28;
l11:
  i5 = (OOC_INT32)name;
  i6 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 171871)))), OOC_IR__BuilderDesc_GetName)),OOC_IR__BuilderDesc_GetName)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i5);
  n = (OOC_SymbolTable__Name)i6;
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 171910)))), &_td_OOC_SymbolTable__RecordDesc, 171910)), 171917))+52);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 171910)))), &_td_OOC_SymbolTable__RecordDesc, 171910)), 171917))+52);
  i8 = (OOC_INT32)context;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 171920)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i4, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Name)i6, 0u);
  decl = (OOC_SymbolTable__Declaration)i4;
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 171973))+16);
  OOC_SymbolTable_Uses__Mark((OOC_SymbolTable__Declaration)i4, (OOC_SymbolTable_Uses__Uses)i7, (OOC_SymbolTable__Name)i6);
  i6 = i4==(OOC_INT32)0;
  if (i6) goto l26;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 172083)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i6) goto l24;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 172199)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i6) goto l18;
  _assert(0u, 127, 172485);
  goto l28;
l18:
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 172250)))), &_td_OOC_SymbolTable__ProcDeclDesc, 172250);
  procDecl = (OOC_SymbolTable__ProcDecl)i4;
  i3 = _check_pointer(i3, 172310);
  i6 = *(OOC_INT8*)((_check_pointer(i4, 172375))+48);
  i6 = i6==2;
  if (i6) goto l21;
  i6 = *(OOC_UINT8*)((_check_pointer(i4, 172450))+51);
  
  goto l22;
l21:
  i6=1u;
l22:
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+4);
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewSelectProc((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__ProcDecl)i4, (OOC_Scanner_SymList__Symbol)i5, i6);
  return (OOC_IR__Expression)i0;
  goto l28;
l24:
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewSelectField((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_SymbolTable__FieldDecl)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 172162)))), &_td_OOC_SymbolTable__FieldDeclDesc, 172162)), (OOC_Scanner_SymList__Symbol)i5);
  return (OOC_IR__Expression)i0;
  goto l28;
l26:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 172032)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 1, (OOC_Scanner_SymList__Symbol)i5);
  return (OOC_IR__Expression)i0;
l28:
  _failed_function(171277); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0;
  OOC_INT8 id;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewOperator_IsPredefClass(OOC_SymbolTable__Type type, OOC_UINT32 classes);
  auto OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_UnaryOperator(void);
  auto OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_BinaryOperator(void);
    
    OOC_CHAR8 OOC_IR__BuilderDesc_NewOperator_IsPredefClass(OOC_SymbolTable__Type type, OOC_UINT32 classes) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 173459)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l3;
      return 0u;
      goto l4;
l3:
      i0 = *(OOC_INT16*)((_check_pointer(i0, 173496))+40);
      i1 = classes;
      return (_in(i0,i1));
l4:
      _failed_function(173380); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_UnaryOperator(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_SymbolTable__Type type;
      OOC_CHAR8 isNumeric;
      OOC_CHAR8 isSet;
      OOC_CHAR8 isBoolean;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 173709))+20);
      i2 = (OOC_INT32)left;
      i1 = i2==i1;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 173734))+20);
      i2 = (OOC_INT32)right;
      i1 = i2==i1;
      
      goto l5;
l3:
      i1=1u;
l5:
      if (i1) goto l28;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 173984))+4);
      type = (OOC_SymbolTable__Type)i2;
      i3 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i2);
      isNumeric = i3;
      i4 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i2);
      isSet = i4;
      i2 = OOC_IR__BuilderDesc_NewOperator_IsPredefClass((OOC_SymbolTable__Type)i2, 1u);
      isBoolean = i2;
      i5 = id;
      switch (i5) {
      case 7:
        if (i3) goto l14;
        if (i4) goto l12;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 174406)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_SymList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l12:
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewNegate((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l14:
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewNegate((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      case 6:
        if (i3) goto l19;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 174547)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_SymList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l19:
        return (OOC_IR__Expression)i1;
        goto l29;
      case 35:
        if (i2) goto l24;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 174701)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_SymList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l24:
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewNot((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      default:
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 174770)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 6, (OOC_Scanner_SymList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      }
l28:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 173944))+20);
      return (OOC_IR__Expression)i0;
l29:
      _failed_function(173584); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_BinaryOperator(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
      OOC_SymbolTable__Type nil;
      OOC_SymbolTable__Type real;
      OOC_IR__Expression result;
      OOC_SymbolTable__Type leftType;
      OOC_SymbolTable__Type rightType;
      OOC_CHAR8 isNumeric;
      OOC_CHAR8 isInteger;
      OOC_CHAR8 isSet;
      OOC_CHAR8 isBoolean;
      OOC_CHAR8 isChar;
      OOC_INT8 variant;
      OOC_IR__ExpressionList exprList;
      auto OOC_CHAR8 OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString(OOC_SymbolTable__Type type);
        
        OOC_CHAR8 OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString(OOC_SymbolTable__Type type) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)type;
          i1 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i0);
          if (i1) goto l7;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 175202)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l5;
          i0=0u;
          goto l8;
l5:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 175242)))), &_td_OOC_SymbolTable__ArrayDesc, 175242)), 175248))+44);
          i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
          
          goto l8;
l7:
          i0=1u;
l8:
          return i0;
          ;
        }


      i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(16);
      nil = (OOC_SymbolTable__Type)i0;
      i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(8);
      real = (OOC_SymbolTable__Type)i1;
      result = (OOC_IR__Expression)(OOC_INT32)0;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 175471))+20);
      i4 = (OOC_INT32)left;
      i3 = i4==i3;
      if (i3) goto l3;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 175496))+20);
      i5 = (OOC_INT32)right;
      i3 = i5==i3;
      
      goto l5;
l3:
      i3=1u;
l5:
      if (i3) goto l168;
      i3 = id;
      i5 = i3==15;
      if (i5) goto l9;
      i5=0u;
      goto l11;
l9:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 175774))+4);
      i5 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i5);
      
l11:
      if (i5) goto l13;
      i5=0u;
      goto l15;
l13:
      i5 = (OOC_INT32)right;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 175808))+4);
      i5 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i5);
      
l15:
      if (i5) goto l166;
      i3 = i3==16;
      if (i3) goto l164;
      i2 = OOC_IR__BuilderDesc_WidenToCommon((OOC_IR__Builder)i2, (void*)(OOC_INT32)&left, (void*)(OOC_INT32)&right);
      if (i2) goto l33;
      i0 = (OOC_INT32)left;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 178866))+4);
      i1 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i1);
      if (i1) goto l23;
      i1=0u;
      goto l25;
l23:
      i1 = (OOC_INT32)right;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 178889))+4);
      i1 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i1);
      
l25:
      if (i1) goto l27;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 179120)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 7, (OOC_Scanner_SymList__Symbol)i1);
      
      goto l169;
l27:
      i1 = id;
      i1 = _in(i1,32256u);
      if (i1) goto l30;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 179053)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_SymList__Symbol)i1);
      
      goto l169;
l30:
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)sym;
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewCompare((OOC_IR__Builder)i3, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i0, (OOC_IR__Expression)i1);
      
      goto l169;
l33:
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 176013))+4);
      leftType = (OOC_SymbolTable__Type)i3;
      i4 = (OOC_INT32)right;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 176038))+4);
      rightType = (OOC_SymbolTable__Type)i5;
      i5 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i3);
      isNumeric = i5;
      i6 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i3);
      isInteger = i6;
      i7 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i3);
      isSet = i7;
      i8 = OOC_IR__BuilderDesc_NewOperator_IsPredefClass((OOC_SymbolTable__Type)i3, 1u);
      isBoolean = i8;
      i9 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i3);
      isChar = i9;
      i10 = id;
      i11 = _in(i10,194u);
      if (i11) goto l36;
      i11=0u;
      goto l38;
l36:
      i11=i5;
l38:
      if (i11) goto l156;
      i11 = _in(i10,4u);
      if (i11) goto l42;
      i11=0u;
      goto l44;
l42:
      i11=i5;
l44:
      if (i11) goto l152;
      i1 = _in(i10,24u);
      if (i1) goto l48;
      i1=0u;
      goto l50;
l48:
      i1=i6;
l50:
      if (i1) goto l146;
      i1 = _in(i10,198u);
      if (i1) goto l54;
      i1=0u;
      goto l56;
l54:
      i1=i7;
l56:
      if (i1) goto l138;
      i1 = _in(i10,288u);
      if (i1) goto l60;
      i1=0u;
      goto l62;
l60:
      i1=i8;
l62:
      if (i1) goto l132;
      i1 = _in(i10,32256u);
      if (i1) goto l66;
      i6=0u;
      goto l68;
l66:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 177920))+4);
      i6 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i6);
      
l68:
      if (i6) goto l70;
      i6=0u;
      goto l72;
l70:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 177943))+4);
      i6 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i6);
      
l72:
      if (i6) goto l130;
      i6 = i10==6;
      if (i6) goto l76;
      i6=0u;
      goto l85;
l76:
      if (i9) goto l78;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 178093))+4);
      i6 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i6);
      
      goto l80;
l78:
      i6=1u;
l80:
      if (i6) goto l82;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 178132))+4);
      i6 = OOC_SymbolTable_TypeRules__IsSTRING((OOC_SymbolTable__Type)i6);
      
      goto l85;
l82:
      i6=1u;
l85:
      if (i6) goto l128;
      if (i1) goto l88;
      i1=0u;
      goto l93;
l88:
      if (i5) goto l90;
      i1=i9;
      goto l93;
l90:
      i1=1u;
l93:
      if (i1) goto l126;
      i1 = _in(i10,1536u);
      if (i1) goto l97;
      i0=0u;
      goto l122;
l97:
      if (i8) goto l99;
      i1=i7;
      goto l101;
l99:
      i1=1u;
l101:
      if (i1) goto l103;
      i1 = i3==i0;
      
      goto l105;
l103:
      i1=1u;
l105:
      if (i1) goto l107;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 178561))+4);
      i0 = i1==i0;
      
      goto l109;
l107:
      i0=1u;
l109:
      if (i0) goto l111;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 178602)))), &_td_OOC_SymbolTable__PointerDesc);
      
      goto l113;
l111:
      i0=1u;
l113:
      if (i0) goto l115;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 178646)))), &_td_OOC_SymbolTable__TypeVarDesc);
      
      goto l117;
l115:
      i0=1u;
l117:
      if (i0) goto l119;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 178690)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l122;
l119:
      i0=1u;
l122:
      if (i0) goto l124;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 178795)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_SymList__Symbol)i1);
      
      goto l169;
l124:
      i0 = (OOC_INT32)sym;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewCompare((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
      
      goto l169;
l126:
      i0 = (OOC_INT32)sym;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewCompare((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
      
      goto l169;
l128:
      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], 2);
      exprList = (OOC_IR__ExpressionList)i0;
      i1 = _check_pointer(i0, 178187);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      *(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 178187))*4) = i2;
      i1 = _check_pointer(i0, 178216);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 178216))*4) = i4;
      i1 = (OOC_INT32)sym;
      i2 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewConcat((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__ExpressionList)i0);
      
      goto l169;
l130:
      i0 = (OOC_INT32)sym;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewCompare((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
      
      goto l169;
l132:
      switch (i10) {
      case 5:
        variant = 20;
        goto l136;
      case 8:
        variant = 21;
        goto l136;
      default:
        _failed_case(i10, 177663);
        goto l136;
      }
l136:
      i0 = variant;
      i1 = (OOC_INT32)sym;
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewBooleanOp((OOC_IR__Builder)i3, (OOC_Scanner_SymList__Symbol)i1, i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
      
      goto l169;
l138:
      switch (i10) {
      case 6:
        variant = 6;
        goto l144;
      case 7:
        variant = 7;
        goto l144;
      case 1:
        variant = 8;
        goto l144;
      case 2:
        variant = 9;
        goto l144;
      default:
        _failed_case(i10, 177348);
        goto l144;
      }
l144:
      i0 = (OOC_INT32)b;
      i1 = variant;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 177555)))), OOC_IR__BuilderDesc_NewSetOp)),OOC_IR__BuilderDesc_NewSetOp)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i3, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
      return (OOC_IR__Expression)i0;
      i0=(OOC_INT32)0;
      goto l169;
l146:
      switch (i10) {
      case 3:
        variant = 2;
        goto l150;
      case 4:
        variant = 5;
        goto l150;
      default:
        _failed_case(i10, 177052);
        goto l150;
      }
l150:
      i0 = variant;
      i1 = (OOC_INT32)sym;
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewBinaryArith((OOC_IR__Builder)i3, (OOC_Scanner_SymList__Symbol)i1, i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
      
      goto l169;
l152:
      if (!i6) goto l154;
      i0 = (OOC_INT32)b;
      i0 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i0, (void*)(OOC_INT32)&left, (OOC_SymbolTable__Type)i1);
      i0 = (OOC_INT32)b;
      i0 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i0, (void*)(OOC_INT32)&right, (OOC_SymbolTable__Type)i1);
l154:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)right;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewBinaryArith((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i1, 3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3);
      
      goto l169;
l156:
      switch (i10) {
      case 6:
        variant = 0;
        goto l161;
      case 7:
        variant = 1;
        goto l161;
      case 1:
        variant = 4;
        goto l161;
      default:
        _failed_case(i10, 176411);
        goto l161;
      }
l161:
      i0 = variant;
      i1 = (OOC_INT32)sym;
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewBinaryArith((OOC_IR__Builder)i3, (OOC_Scanner_SymList__Symbol)i1, i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
      
      goto l169;
l164:
      i0 = (OOC_INT32)right;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 175915)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i4, (OOC_IR__Expression)i0);
      
      goto l169;
l166:
      i0 = (OOC_INT32)right;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 175837)))), OOC_IR__BuilderDesc_NewSetMember)),OOC_IR__BuilderDesc_NewSetMember)((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i4, (OOC_IR__Expression)i0);
      
      goto l169;
l168:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 175716))+20);
      
l169:
      return (OOC_IR__Expression)i0;
      ;
    }


  i0 = (OOC_INT32)sym;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 179226))+4);
  id = i0;
  i0 = (OOC_INT32)left;
  i0 = i0==(OOC_INT32)0;
  if (i0) goto l3;
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewOperator_BinaryOperator();
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewOperator_UnaryOperator();
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(172617); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewCall(OOC_IR__Builder b, OOC_IR__Expression design, OOC_IR__ExpressionList arguments, OOC_CHAR8 isFunctionCall, OOC_SymbolTable__Item context, OOC_Scanner_SymList__Symbol endOfArgsSym) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__PredefProc predefProc;
  OOC_IR__Expression expr;
  OOC_SymbolTable__Type type;
  OOC_IR__Call call;
  OOC_IR__Expression receiver;
  OOC_SymbolTable__VarDeclArray formalPars;
  OOC_INT16 targetType;
  OOC_INT32 dim;
  OOC_INT32 dummy;
  OOC_INT8 op;
  OOC_IR__Expression delta;
  OOC_IR__Expression code;
  Object_Boxed__Object value;
  auto void OOC_IR__BuilderDesc_NewCall_MakeParameterCompatible(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression *arg, OOC_SymbolTable__VarDecl fpar, OOC_SymbolTable__Type fparType);
  auto void OOC_IR__BuilderDesc_NewCall_TransformArgs(OOC_Scanner_SymList__Symbol sym, OOC_Scanner_SymList__Symbol endOfArgsSym, OOC_SymbolTable__Type formalParsClosure, OOC_IR__Expression receiver, OOC_IR__ExpressionList *arguments, OOC_SymbolTable__VarDeclArray *argFormalPars);
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(OOC_INT32 min, OOC_INT32 max);
  auto OOC_IR__Expression OOC_IR__BuilderDesc_NewCall_TranslatePredef(OOC_IR__PredefProc design, OOC_INT16 id);
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewCall_IsStatement(OOC_IR__Expression expr);
    
    void OOC_IR__BuilderDesc_NewCall_MakeParameterCompatible(OOC_IR__Builder b, OOC_Scanner_SymList__Symbol sym, OOC_IR__Expression *arg, OOC_SymbolTable__VarDecl fpar, OOC_SymbolTable__Type fparType) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Type argType;
      OOC_CHAR8 ok;

      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 180409))+4);
      argType = (OOC_SymbolTable__Type)i0;
      i1 = (OOC_INT32)fpar;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 180430))+57);
      if (!i2) goto l4;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 180473)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
      argType = (OOC_SymbolTable__Type)i0;
      i2 = (OOC_INT32)fparType;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 180513)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
      fparType = (OOC_SymbolTable__Type)i2;
      
l4:
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 180556))+63);
      if (i2) goto l7;
      i2=0u;
      goto l9;
l7:
      i2 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 16);
      
l9:
      if (i2) goto l87;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 180762))+59);
      if (i2) goto l36;
      i2 = (OOC_INT32)fparType;
      i3 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i2);
      if (i3) goto l23;
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 183086))+57);
      if (i1) goto l17;
      i0=0u;
      goto l19;
l17:
      i0 = OOC_SymbolTable_TypeRules__IsExtensionOfNoParams((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i2);
      
l19:
      if (i0) goto l21;
      i0 = (OOC_INT32)b;
      i0 = OOC_IR__BuilderDesc_WidenForAssign((OOC_IR__Builder)i0, (void*)(OOC_INT32)arg, (OOC_SymbolTable__Type)i2);
      ok = i0;
      
      goto l32;
l21:
      ok = 1u;
      i0=1u;
      goto l32;
l23:
      i0 = OOC_SymbolTable_TypeRules__IsArrayCompatible((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i2);
      if (i0) goto l26;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 182965)))), &_td_OOC_SymbolTable__ArrayDesc, 182965)), 182971))+44);
      i0 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i0, 11);
      
      goto l28;
l26:
      i0=1u;
l28:
      if (i0) goto l30;
      i0 = (OOC_INT32)b;
      i0 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i0, (void*)(OOC_INT32)arg, (OOC_SymbolTable__Type)i2);
      
      goto l31;
l30:
      i0=1u;
l31:
      ok = i0;
      
l32:
      i0 = !i0;
      if (!i0) goto l87;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*arg;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 183484));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 183448)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 12, (OOC_Scanner_SymList__Symbol)i1);
      OOC_IR__BuilderDesc_SetNameToType((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i2);
      goto l87;
l36:
      i2 = (OOC_INT32)*arg;
      i3 = (OOC_INT32)b;
      OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i3, (OOC_IR__Expression)i2);
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 180856))+57);
      if (i1) goto l39;
      i1=0u;
      goto l41;
l39:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 180879)))), &_td_OOC_SymbolTable__PointerDesc);
      
l41:
      if (!i1) goto l44;
      i0 = (OOC_INT32)*arg;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 181004));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 180990)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i3, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i0);
      *arg = (OOC_IR__Expression)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 181040))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 181040))+4);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 181045)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
      argType = (OOC_SymbolTable__Type)i0;
      
l44:
      i1 = (OOC_INT32)fparType;
      i2 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0);
      if (i2) goto l51;
      i2 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i1, 11);
      if (i2) goto l49;
      i2=0u;
      goto l53;
l49:
      i2 = OOC_SymbolTable_TypeRules__IsByteCompatible((OOC_SymbolTable__Type)i0);
      
      goto l53;
l51:
      i2=1u;
l53:
      if (i2) goto l59;
      i2 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i1, 12);
      if (i2) goto l57;
      i2=0u;
      goto l61;
l57:
      i2 = OOC_SymbolTable_TypeRules__IsPtrCompatible((OOC_SymbolTable__Type)i0);
      
      goto l61;
l59:
      i2=1u;
l61:
      if (i2) goto l67;
      i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i1);
      if (i2) goto l65;
      i2=0u;
      goto l69;
l65:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 181398)))), &_td_OOC_SymbolTable__ArrayDesc, 181398)), 181404))+44);
      i2 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i2, 11);
      
      goto l69;
l67:
      i2=1u;
l69:
      if (i2) goto l87;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 181670)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i2) goto l80;
      i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i1);
      if (i2) goto l75;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 182426));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 182392)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 40, (OOC_Scanner_SymList__Symbol)i0);
      OOC_IR__BuilderDesc_SetNameToType((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i1);
      goto l87;
l75:
      i0 = OOC_SymbolTable_TypeRules__IsArrayCompatible((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
      i0 = !i0;
      if (!i0) goto l87;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 182257));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 182223)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 40, (OOC_Scanner_SymList__Symbol)i0);
      OOC_IR__BuilderDesc_SetNameToType((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i1);
      goto l87;
l80:
      i0 = OOC_SymbolTable_TypeRules__IsExtensionOfNoParams((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
      i0 = !i0;
      if (!i0) goto l87;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 181922));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 181888)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 40, (OOC_Scanner_SymList__Symbol)i0);
      OOC_IR__BuilderDesc_SetNameToType((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i1);
l87:
      return;
      ;
    }

    
    void OOC_IR__BuilderDesc_NewCall_TransformArgs(OOC_Scanner_SymList__Symbol sym, OOC_Scanner_SymList__Symbol endOfArgsSym, OOC_SymbolTable__Type formalParsClosure, OOC_IR__Expression receiver, OOC_IR__ExpressionList *arguments, OOC_SymbolTable__VarDeclArray *argFormalPars) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      ADT_ArrayList__ArrayList newArgs;
      ADT_ArrayList__ArrayList newFPars;
      OOC_INT32 argIndex;
      OOC_INT32 fparIndex;
      OOC_SymbolTable__Type fparType;
      OOC_SymbolTable__FormalPars formalPars;
      OOC_SymbolTable__VarDecl fpar;
      OOC_IR__Expression arg;
      OOC_SymbolTable__Type argType;
      OOC_INT32 i;
      auto OOC_INT32 OOC_IR__BuilderDesc_NewCall_TransformArgs_Dimensions(OOC_SymbolTable__Type type);
        
        OOC_INT32 OOC_IR__BuilderDesc_NewCall_TransformArgs_Dimensions(OOC_SymbolTable__Type type) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)type;
          i1 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i0);
          if (i1) goto l7;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 184656)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l5;
          return 0;
          goto l8;
l5:
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 184701)))), &_td_OOC_SymbolTable__ArrayDesc, 184701)), 184707)))), OOC_SymbolTable__TypeDesc_ArrayDimensions)),OOC_SymbolTable__TypeDesc_ArrayDimensions)((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 184701)))), &_td_OOC_SymbolTable__ArrayDesc, 184701)));
          return i0;
          goto l8;
l7:
          return 1;
l8:
          _failed_function(184526); return 0;
          ;
        }


      i0 = (OOC_INT32)*arguments;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 184857)), 0);
      i1 = (OOC_INT32)ADT_ArrayList__New(i1);
      newArgs = (ADT_ArrayList__ArrayList)i1;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 184909)), 0);
      i1 = (OOC_INT32)ADT_ArrayList__New(i1);
      newFPars = (ADT_ArrayList__ArrayList)i1;
      i1 = (OOC_INT32)receiver;
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3;
      argIndex = 0;
      fparIndex = 0;
      i1=0;i2=0;
      goto l4;
l3:
      argIndex = (-1);
      fparIndex = (-1);
      i1=(-1);i2=(-1);
l4:
      i3 = (OOC_INT32)formalParsClosure;
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 185113)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i3);
      fparType = (OOC_SymbolTable__Type)i3;
      i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 185158)))), &_td_OOC_SymbolTable__FormalParsDesc, 185158);
      formalPars = (OOC_SymbolTable__FormalPars)i3;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 185211))+52);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 185219)), 0);
      i3 = i1!=i3;
      if (i3) goto l7;
      i0=0u;
      goto l9;
l7:
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 185263)), 0);
      i0 = i2!=i0;
      
l9:
      if (i0) goto l11;
      i0=i2;
      goto l61;
l11:
      i0=i2;
l12_loop:
      i2 = i0==(-1);
      if (i2) goto l15;
      i2 = (OOC_INT32)formalPars;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 185410))+52);
      i2 = _check_pointer(i2, 185418);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 185418))*4);
      fpar = (OOC_SymbolTable__VarDecl)i1;
      i2 = (OOC_INT32)*arguments;
      i2 = _check_pointer(i2, 185457);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT32, 185457))*4);
      arg = (OOC_IR__Expression)i0;
      
      goto l16;
l15:
      i0 = (OOC_INT32)formalPars;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 185330))+40);
      fpar = (OOC_SymbolTable__VarDecl)i0;
      i1 = (OOC_INT32)receiver;
      arg = (OOC_IR__Expression)i1;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l16:
      i2 = (OOC_INT32)formalParsClosure;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 185602))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 185521));
      i4 = (OOC_INT32)b;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 185589)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
      OOC_IR__BuilderDesc_NewCall_MakeParameterCompatible((OOC_IR__Builder)i4, (OOC_Scanner_SymList__Symbol)i0, (void*)(OOC_INT32)&arg, (OOC_SymbolTable__VarDecl)i1, (OOC_SymbolTable__Type)i2);
      i0 = *(OOC_UINT8*)((_check_pointer(i1, 185635))+60);
      if (i0) goto l19;
      i0=0u;
      goto l21;
l19:
      i0 = (OOC_INT32)arg;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 185688))+4);
      i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 16);
      i0 = !i0;
      
l21:
      if (i0) goto l23;
      i0 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)arg;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 186043)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
      goto l24;
l23:
      i0 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)arg;
      i4 = (OOC_INT32)sym;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 185991)))), OOC_IR__BuilderDesc_NewAdr)),OOC_IR__BuilderDesc_NewAdr)((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i4, (OOC_IR__Expression)i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 185980)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
l24:
      i0 = (OOC_INT32)newFPars;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 186088)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 186121))+64);
      if (!i2) goto l52;
      i2 = (OOC_INT32)arg;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 186167))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 186167))+4);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 186172)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
      argType = (OOC_SymbolTable__Type)i2;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 186210))+48);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 186210))+48);
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 186215)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i4);
      fparType = (OOC_SymbolTable__Type)i3;
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 186250)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i4) goto l35;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 187234)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i2) goto l52;
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 187269))+59);
      if (!i1) goto l52;
      i1 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)arg;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 187336));
      i4 = (OOC_INT32)b;
      i2 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeTag((OOC_IR__Builder)i4, (OOC_Scanner_SymList__Symbol)i3, (OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 187308)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 187372)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)(OOC_INT32)0);
      goto l52;
l35:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 186302))+44);
      i1 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i1, 11);
      if (i1) goto l49;
      i0 = OOC_IR__BuilderDesc_NewCall_TransformArgs_Dimensions((OOC_SymbolTable__Type)i2);
      i1 = (OOC_INT32)fparType;
      i2 = OOC_SymbolTable__ArrayDesc_GetOpenDimensions((OOC_SymbolTable__Array)i1);
      i0 = i0>=i2;
      if (!i0) goto l52;
      i0 = OOC_SymbolTable__ArrayDesc_GetOpenDimensions((OOC_SymbolTable__Array)i1);
      i = 0;
      i1 = 0<i0;
      if (!i1) goto l52;
      i1 = (OOC_INT32)newFPars;
      i2 = (OOC_INT32)newArgs;
      i3=0;
l42_loop:
      i4 = (OOC_INT32)b;
      i5 = (OOC_INT32)arg;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 187119));
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 187106)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i4, (OOC_Scanner_SymList__Symbol)i6, (OOC_IR__Expression)i5, i3);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 187097)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i4, (OOC_IR__Expression)i5);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 187086)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 187161)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)(OOC_INT32)0);
      i3 = i3+1;
      i = i3;
      i4 = i3<i0;
      if (i4) goto l42_loop;
      goto l52;
l49:
      i1 = (OOC_INT32)newArgs;
      i3 = (OOC_INT32)b;
      i4 = (OOC_INT32)arg;
      i5 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 186660))+32);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 186508));
      i2 = (OOC_INT32)Object_BigInt__NewInt(i2);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 186493)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i3, (OOC_Scanner_SymList__Symbol)i4, (OOC_SymbolTable__Type)i5, (Object_Boxed__Object)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 186482)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 186692)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)(OOC_INT32)0);
l52:
      i0 = argIndex;
      i0 = i0+1;
      i1 = fparIndex;
      argIndex = i0;
      i1 = i1+1;
      fparIndex = i1;
      i2 = (OOC_INT32)formalPars;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 185211))+52);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 185219)), 0);
      i2 = i1!=i2;
      if (i2) goto l55;
      i2=0u;
      goto l57;
l55:
      i2 = (OOC_INT32)*arguments;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 185263)), 0);
      i2 = i0!=i2;
      
l57:
      if (i2) goto l12_loop;
l61:
      i2 = (OOC_INT32)formalPars;
      i3 = (OOC_INT32)newArgs;
      i4 = *(OOC_UINT8*)((_check_pointer(i2, 187623))+56);
      if (!i4) goto l74;
      i4 = (OOC_INT32)*arguments;
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 187688)), 0);
      i5 = i0!=i5;
      if (!i5) goto l74;
      i5 = (OOC_INT32)newFPars;
      
l68_loop:
      i6 = _check_pointer(i4, 187721);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i0, i7, OOC_UINT32, 187721))*4);
      arg = (OOC_IR__Expression)i6;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 187750)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i3, (Object__Object)i6);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 187784)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i5, (Object__Object)(OOC_INT32)0);
      i0 = i0+1;
      argIndex = i0;
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i4, 187688)), 0);
      i6 = i0!=i6;
      if (i6) goto l68_loop;
l74:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 187894))+52);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 187902)), 0);
      i1 = i1!=i2;
      if (i1) goto l80;
      i1 = (OOC_INT32)*arguments;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 188052)), 0);
      i2 = i0!=i2;
      if (!i2) goto l81;
      i2 = (OOC_INT32)b;
      i1 = _check_pointer(i1, 188159);
      i4 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i4, OOC_UINT32, 188159))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 188169));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 188122)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 39, (OOC_Scanner_SymList__Symbol)i0);
      goto l81;
l80:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)endOfArgsSym;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 187972)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 38, (OOC_Scanner_SymList__Symbol)i1);
l81:
      i0 = *(OOC_INT32*)((_check_pointer(i3, 188224))+4);
      *arguments = (OOC_IR__ExpressionList)((OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], i0));
      i0 = *(OOC_INT32*)((_check_pointer(i3, 188266))+4);
      *argFormalPars = (OOC_SymbolTable__VarDeclArray)((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], i0));
      i0 = *(OOC_INT32*)((_check_pointer(i3, 188302))+4);
      i = 0;
      i1 = 0<i0;
      if (!i1) goto l93;
      i1 = (OOC_INT32)newFPars;
      i2=0;
l84_loop:
      i4 = (OOC_INT32)*arguments;
      i4 = _check_pointer(i4, 188331);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 188345));
      i6 = _check_pointer(i6, 188352);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 188352))*4);
      *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 188331))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 188356)))), &_td_OOC_IR__ExpressionDesc, 188356));
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 188389));
      i4 = _check_pointer(i4, 188396);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 188396))*4);
      i4 = i4==(OOC_INT32)0;
      if (i4) goto l87;
      i4 = (OOC_INT32)*argFormalPars;
      i4 = _check_pointer(i4, 188483);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 188498));
      i6 = _check_pointer(i6, 188505);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 188505))*4);
      *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 188483))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 188513)))), &_td_OOC_SymbolTable__VarDeclDesc, 188513));
      goto l88;
l87:
      i4 = (OOC_INT32)*argFormalPars;
      i4 = _check_pointer(i4, 188435);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 188435))*4) = (OOC_INT32)0;
l88:
      i2 = i2+1;
      i = i2;
      i4 = i2<i0;
      if (i4) goto l84_loop;
l93:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(OOC_INT32 min, OOC_INT32 max) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)arguments;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 188670)), 0);
      i2 = min;
      i1 = i1<i2;
      if (i1) goto l3;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 188698)), 0);
      i1 = max;
      i0 = i0>i1;
      
      goto l5;
l3:
      i0=1u;
l5:
      if (i0) goto l7;
      return 1u;
      goto l8;
l7:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)design;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 188762));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 188722)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 13, (OOC_Scanner_SymList__Symbol)i1);
      return 0u;
l8:
      _failed_function(188583); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_IR__BuilderDesc_NewCall_TranslatePredef(OOC_IR__PredefProc design, OOC_INT16 id) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      auto OOC_IR__ExpressionList OOC_IR__BuilderDesc_NewCall_TranslatePredef_StripFirst(OOC_IR__ExpressionList exprList);
        
        OOC_IR__ExpressionList OOC_IR__BuilderDesc_NewCall_TranslatePredef_StripFirst(OOC_IR__ExpressionList exprList) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          OOC_IR__ExpressionList newList;
          OOC_INT32 i;

          i0 = (OOC_INT32)exprList;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 189156)), 0);
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], (i1-1));
          newList = (OOC_IR__ExpressionList)i1;
          i = 1;
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 189197)), 0);
          i3 = 1<i2;
          if (!i3) goto l8;
          i3=1;
l3_loop:
          i4 = _check_pointer(i1, 189222);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i6 = _check_pointer(i0, 189239);
          i7 = OOC_ARRAY_LENGTH(i6, 0);
          i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 189239))*4);
          *(OOC_INT32*)(i4+(_check_index((i3-1), i5, OOC_UINT32, 189222))*4) = i6;
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l3_loop;
l8:
          return (OOC_IR__ExpressionList)i1;
          ;
        }


      i0 = id;
      switch (i0) {
      case 0:
        i0 = (OOC_INT32)arguments;
        i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 189418)), 0);
        i1 = i1>1;
        if (i1) goto l5;
        code = (OOC_IR__Expression)(OOC_INT32)0;
        i1=(OOC_INT32)0;
        goto l6;
l5:
        i1 = _check_pointer(i0, 189458);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 189458))*4);
        code = (OOC_IR__Expression)i1;
        
l6:
        i2 = (OOC_INT32)design;
        i0 = _check_pointer(i0, 189563);
        i3 = OOC_ARRAY_LENGTH(i0, 0);
        i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 189640));
        i4 = *(OOC_INT32*)((_check_pointer(i4, 189645))+16);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i3, OOC_UINT8, 189563))*4);
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 189547));
        i3 = (OOC_INT32)OOC_Config_StdPragmas__assertions;
        i5 = (OOC_INT32)b;
        i3 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i5, (Config_Section_Options__Option)i3, i4);
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewAssert((OOC_IR__Builder)i5, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i0, (OOC_IR__Expression)i1, (!i3));
        return (OOC_IR__Expression)i0;
        goto l161;
      case 1:
        i0 = (OOC_INT32)design;
        i1 = (OOC_INT32)arguments;
        i1 = _check_pointer(i1, 189732);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 189732))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 189711));
        i2 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewAssert((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)(OOC_INT32)0, (OOC_IR__Expression)i1, 0u);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 22:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)design;
        i2 = (OOC_INT32)arguments;
        i3 = _check_pointer(i2, 189822);
        i4 = OOC_ARRAY_LENGTH(i3, 0);
        i5 = _check_pointer(i2, 189836);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        i2 = _check_pointer(i2, 189907);
        i7 = OOC_ARRAY_LENGTH(i2, 0);
        i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 189822))*4);
        i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(1, i6, OOC_UINT8, 189836))*4);
        i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i7, OOC_UINT8, 189907))*4);
        i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 189891));
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 189806));
        i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 189875)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i5, (OOC_IR__Expression)i2, 0);
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 189783)))), OOC_IR__BuilderDesc_NewCopyString)),OOC_IR__BuilderDesc_NewCopyString)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i2);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 21:
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 189971);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 189971))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 189974))+4);
        i0 = _check_pointer(i0, 189971);
        i2 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 189971))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 189974))+4);
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 189979)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
        type = (OOC_SymbolTable__Type)i0;
        i1 = (OOC_INT32)b;
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 190011))+24);
        i2 = i0==i2;
        if (i2) goto l29;
        i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 190222)))), &_td_OOC_SymbolTable__PointerDesc);
        if (i0) goto l14;
        i0 = (OOC_INT32)arguments;
        i0 = _check_pointer(i0, 191127);
        i2 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 191127))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 191130));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 191095)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 50, (OOC_Scanner_SymList__Symbol)i0);
        goto l30;
l14:
        i0 = (OOC_INT32)arguments;
        i0 = _check_pointer(i0, 190274);
        i2 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 190274))*4);
        OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i1, (OOC_IR__Expression)i0);
        i0 = (OOC_INT32)type;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 190307)))), &_td_OOC_SymbolTable__PointerDesc, 190307)), 190315))+40);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 190307)))), &_td_OOC_SymbolTable__PointerDesc, 190307)), 190315))+40);
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 190324)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
        type = (OOC_SymbolTable__Type)i0;
        i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 190355)))), &_td_OOC_SymbolTable__ArrayDesc);
        if (i1) goto l23;
        i0 = OOC_SymbolTable_TypeRules__VariableInstance((OOC_SymbolTable__Type)i0);
        i0 = !i0;
        if (!i0) goto l19;
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)arguments;
        i1 = _check_pointer(i1, 190807);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 190807))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 190810));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 190768)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 56, (OOC_Scanner_SymList__Symbol)i1);
l19:
        i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(1, 1);
        if (!i0) goto l30;
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)design;
        i2 = (OOC_INT32)arguments;
        i3 = _check_pointer(i2, 190962);
        i4 = OOC_ARRAY_LENGTH(i3, 0);
        i2 = _check_pointer(i2, 191022);
        i5 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i5, OOC_UINT8, 191022))*4);
        i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 191025))+4);
        i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 190962))*4);
        i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 191007));
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 190947));
        i2 = (OOC_INT32)OOC_IR__BuilderDesc_NewNewObject((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i4, (OOC_SymbolTable__Type)i2, (OOC_IR__ExpressionList)(OOC_INT32)0);
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 190906)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
        return (OOC_IR__Expression)i0;
        goto l30;
l23:
        i0 = OOC_SymbolTable__ArrayDesc_GetOpenDimensions((OOC_SymbolTable__Array)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 190404)))), &_td_OOC_SymbolTable__ArrayDesc, 190404)));
        i0 = 1+i0;
        dim = i0;
        i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(i0, i0);
        if (!i0) goto l30;
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)design;
        i2 = (OOC_INT32)arguments;
        i3 = _check_pointer(i2, 190564);
        i4 = OOC_ARRAY_LENGTH(i3, 0);
        i5 = _check_pointer(i2, 190624);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT8, 190624))*4);
        i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 190627))+4);
        i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 190564))*4);
        i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 190609));
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 190549));
        i2 = (OOC_INT32)OOC_IR__BuilderDesc_NewNewObject((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i4, (OOC_SymbolTable__Type)i5, (OOC_IR__ExpressionList)i2);
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 190508)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
        return (OOC_IR__Expression)i0;
        goto l30;
l29:
        i0 = (OOC_INT32)design;
        i2 = (OOC_INT32)arguments;
        i3 = _check_pointer(i2, 190082);
        i4 = OOC_ARRAY_LENGTH(i3, 0);
        i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 190082))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 190067));
        i2 = (OOC_INT32)OOC_IR__BuilderDesc_NewCall_TranslatePredef_StripFirst((OOC_IR__ExpressionList)i2);
        i4 = (OOC_INT32)context;
        i5 = (OOC_INT32)endOfArgsSym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 190045)))), OOC_IR__BuilderDesc_NewConstructor)),OOC_IR__BuilderDesc_NewConstructor)((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__ExpressionList)i2, (OOC_SymbolTable__Item)i4, (OOC_Scanner_SymList__Symbol)i5);
        return (OOC_IR__Expression)i0;
l30:
        i0 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 191166))+20);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 4:
      case 5:
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 191237);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i0 = _check_pointer(i0, 191269);
        i3 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i3, OOC_UINT8, 191269))*4);
        i3 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
        *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 191237))*4) = i0;
        i0 = (OOC_INT32)arguments;
        i0 = _check_pointer(i0, 191304);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 191304))*4);
        i1 = (OOC_INT32)b;
        OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i1, (OOC_IR__Expression)i0);
        i0 = (OOC_INT32)arguments;
        i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 191336)), 0);
        i1 = i1==1;
        if (i1) goto l34;
        i0 = _check_pointer(i0, 191454);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(1, i1, OOC_UINT8, 191454))*4);
        delta = (OOC_IR__Expression)i0;
        goto l35;
l34:
        i1 = (OOC_INT32)design;
        i0 = _check_pointer(i0, 191401);
        i2 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 191401))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 191404))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 191385));
        i2 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_GetOne((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i1, (OOC_SymbolTable__Type)i0);
        delta = (OOC_IR__Expression)i0;
l35:
        i0 = (OOC_INT32)arguments;
        i0 = _check_pointer(i0, 191507);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 191507))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 191510))+4);
        i1 = (OOC_INT32)b;
        i0 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i1, (void*)(OOC_INT32)&delta, (OOC_SymbolTable__Type)i0);
        if (i0) goto l38;
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)delta;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 191897));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 191869)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 5, (OOC_Scanner_SymList__Symbol)i1);
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)design;
        i2 = (OOC_INT32)arguments;
        i3 = _check_pointer(i2, 191959);
        i4 = OOC_ARRAY_LENGTH(i3, 0);
        i2 = _check_pointer(i2, 191973);
        i5 = OOC_ARRAY_LENGTH(i2, 0);
        i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 191959))*4);
        i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i5, OOC_UINT8, 191973))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 191944));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 191922)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
        return (OOC_IR__Expression)i0;
        goto l161;
l38:
        i0 = (OOC_INT32)design;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 191542))+8);
        i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 191553)))), &_td_OOC_SymbolTable__PredefProcDesc, 191553)), 191564))+48);
        i1 = i1==4;
        if (i1) goto l41;
        op = 1;
        i1=1;
        goto l42;
l41:
        op = 0;
        i1=0;
l42:
        i2 = (OOC_INT32)arguments;
        i2 = _check_pointer(i2, 191831);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 191831))*4);
        i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 191811));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 191713));
        i4 = (OOC_INT32)delta;
        i5 = (OOC_INT32)b;
        i1 = (OOC_INT32)OOC_IR__BuilderDesc_NewBinaryArith((OOC_IR__Builder)i5, (OOC_Scanner_SymList__Symbol)i3, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewAssignOp((OOC_IR__Builder)i5, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 6:
      case 7:
        i0 = (OOC_INT32)arguments;
        i0 = _check_pointer(i0, 192064);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 192064))*4);
        i1 = (OOC_INT32)b;
        OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i1, (OOC_IR__Expression)i0);
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 192087);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i0 = _check_pointer(i0, 192115);
        i3 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i3, OOC_UINT8, 192115))*4);
        i3 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_AssertSet((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
        *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 192087))*4) = i0;
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 192138);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i0 = _check_pointer(i0, 192170);
        i3 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(1, i3, OOC_UINT8, 192170))*4);
        i3 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
        *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 192138))*4) = i0;
        i0 = (OOC_INT32)design;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 192194))+8);
        i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 192205)))), &_td_OOC_SymbolTable__PredefProcDesc, 192205)), 192216))+48);
        i1 = i1==6;
        if (i1) goto l47;
        op = 23;
        i1=23;
        goto l48;
l47:
        op = 22;
        i1=22;
l48:
        i2 = (OOC_INT32)b;
        i3 = (OOC_INT32)arguments;
        i4 = _check_pointer(i3, 192494);
        i5 = OOC_ARRAY_LENGTH(i4, 0);
        i3 = _check_pointer(i3, 192508);
        i6 = OOC_ARRAY_LENGTH(i3, 0);
        i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT8, 192494))*4);
        i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(1, i6, OOC_UINT8, 192508))*4);
        i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 192424));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 192361));
        i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 192399)))), OOC_IR__BuilderDesc_NewChangeElement)),OOC_IR__BuilderDesc_NewChangeElement)((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i5, i1, (OOC_IR__Expression)i4, (OOC_IR__Expression)i3);
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewAssignOp((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 23:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)design;
        i2 = (OOC_INT32)arguments;
        i2 = _check_pointer(i2, 192585);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 192585))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 192570));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 192554)))), OOC_IR__BuilderDesc_NewRaise)),OOC_IR__BuilderDesc_NewRaise)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i2);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 2:
        i0 = (OOC_INT32)arguments;
        i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 192679)), 0);
        i1 = i1!=2;
        if (i1) goto l53;
        i1 = _check_pointer(i0, 192798);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i3 = _check_pointer(i0, 192851);
        i4 = OOC_ARRAY_LENGTH(i3, 0);
        i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 192851))*4);
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 192854))+4);
        i0 = _check_pointer(i0, 192851);
        i4 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i4, OOC_UINT8, 192851))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 192854))+4);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 192798))*4);
        i2 = (OOC_INT32)b;
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 192860)))), OOC_SymbolTable__TypeDesc_ArrayDimensions)),OOC_SymbolTable__TypeDesc_ArrayDimensions)((OOC_SymbolTable__Type)i0);
        i0 = OOC_IR__BuilderDesc_AssertIntConst((OOC_IR__Builder)i2, (OOC_IR__Expression)i1, 0, i0);
        dim = i0;
        goto l54;
l53:
        dim = 0;
l54:
        i0 = (OOC_INT32)arguments;
        i0 = _check_pointer(i0, 192936);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 192936))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 192939))+4);
        i0 = OOC_SymbolTable_TypeRules__IsArray((OOC_SymbolTable__Type)i0);
        i0 = !i0;
        if (!i0) goto l57;
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)arguments;
        i1 = _check_pointer(i1, 193036);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 193036))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 193039));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 193007)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 15, (OOC_Scanner_SymList__Symbol)i1);
l57:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)design;
        i2 = (OOC_INT32)arguments;
        i2 = _check_pointer(i2, 193117);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 193117))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 193101));
        i3 = dim;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 193085)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i2, i3);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 20:
      case 19:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)arguments;
        i1 = _check_pointer(i1, 193201);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 193201))*4);
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 193178)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
        type = (OOC_SymbolTable__Type)i0;
        i1 = (OOC_INT32)design;
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 193225))+8);
        i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 193236)))), &_td_OOC_SymbolTable__PredefProcDesc, 193236)), 193247))+48);
        i1 = i1==20;
        if (i1) goto l61;
        i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetMax((OOC_SymbolTable__Type)i0);
        value = (Object_Boxed__Object)i1;
        
        goto l62;
l61:
        i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetMin((OOC_SymbolTable__Type)i0);
        value = (Object_Boxed__Object)i1;
        
l62:
        i2 = i1==(OOC_INT32)0;
        if (i2) goto l69;
        i2 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i0);
        if (!i2) goto l68;
        i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(4);
        type = (OOC_SymbolTable__Type)i0;
        
l68:
        i2 = (OOC_INT32)b;
        i3 = (OOC_INT32)arguments;
        i3 = _check_pointer(i3, 193650);
        i4 = OOC_ARRAY_LENGTH(i3, 0);
        i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 193650))*4);
        i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 193653));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 193629)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)i1);
        return (OOC_IR__Expression)i0;
        goto l161;
l69:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)arguments;
        i1 = _check_pointer(i1, 193457);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 193457))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 193460));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 193427)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 18, (OOC_Scanner_SymList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 3:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)design;
        i2 = (OOC_INT32)arguments;
        i2 = _check_pointer(i2, 193766);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 193766))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 193750));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 193733)))), OOC_IR__BuilderDesc_NewSize)),OOC_IR__BuilderDesc_NewSize)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i2);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 8:
        i0 = (OOC_INT32)design;
        i1 = (OOC_INT32)arguments;
        i1 = _check_pointer(i1, 193840);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 193840))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 193824));
        i2 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewAbs((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 9:
        i0 = (OOC_INT32)design;
        i1 = (OOC_INT32)arguments;
        i2 = _check_pointer(i1, 193923);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i1 = _check_pointer(i1, 193937);
        i4 = OOC_ARRAY_LENGTH(i1, 0);
        i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 193923))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i4, OOC_UINT8, 193937))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 193907));
        i3 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewAsh((OOC_IR__Builder)i3, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 10:
        i0 = (OOC_INT32)design;
        i1 = (OOC_INT32)arguments;
        i1 = _check_pointer(i1, 194033);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 194033))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 194004));
        i2 = (OOC_INT32)b;
        i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertChar((OOC_IR__Builder)i2, (OOC_IR__Expression)i1);
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewCap((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 11:
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 194083);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 194083))*4);
        i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 194087)))), &_td_OOC_IR__ConstDesc);
        if (i1) goto l78;
        i1=0u;
        goto l80;
l78:
        i1 = _check_pointer(i0, 194125);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 194125))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 194128))+4);
        i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
        
l80:
        if (i1) goto l95;
        i1 = _check_pointer(i0, 194248);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 194248))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 194251))+4);
        i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 194257)))), &_td_OOC_SymbolTable__PredefTypeDesc);
        if (i1) goto l84;
        i1 = (OOC_INT32)b;
        i0 = _check_pointer(i0, 194995);
        i2 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 194995))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 194998));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 194963)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 5, (OOC_Scanner_SymList__Symbol)i0);
        i0 = (OOC_INT32)arguments;
        i0 = _check_pointer(i0, 195031);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 195031))*4);
        return (OOC_IR__Expression)i0;
        goto l161;
l84:
        i1 = _check_pointer(i0, 194305);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 194305))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 194308))+4);
        i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 194318)))), &_td_OOC_SymbolTable__PredefTypeDesc, 194318)), 194329))+40);
        switch (i1) {
        case 4:
          targetType = 5;
          
          goto l93;
        case 5:
          targetType = 6;
          
          goto l93;
        case 6:
          targetType = 7;
          
          goto l93;
        case 8:
          targetType = 9;
          
          goto l93;
        case 1:
          targetType = 2;
          
          goto l93;
        case 2:
          targetType = 3;
          
          goto l93;
        default:
          i1 = (OOC_INT32)b;
          i0 = _check_pointer(i0, 194753);
          i2 = OOC_ARRAY_LENGTH(i0, 0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 194753))*4);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 194756));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 194721)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 5, (OOC_Scanner_SymList__Symbol)i0);
          i0 = (OOC_INT32)arguments;
          i1 = _check_pointer(i0, 194791);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 194791))*4);
          return (OOC_IR__Expression)i1;
          
          goto l93;
        }
l93:
        i1 = targetType;
        i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i1);
        i0 = _check_pointer(i0, 194881);
        i2 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 194881))*4);
        i2 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i1, (OOC_IR__Expression)i0);
        return (OOC_IR__Expression)i0;
        goto l161;
l95:
        i0 = _check_pointer(i0, 194219);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 194219))*4);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 12:
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 195101);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 195101))*4);
        i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 195105)))), &_td_OOC_IR__ConstDesc);
        if (i1) goto l100;
        i1=0u;
        goto l102;
l100:
        i1 = _check_pointer(i0, 195143);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 195143))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 195146))+4);
        i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
        
l102:
        if (i1) goto l117;
        i1 = _check_pointer(i0, 195267);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 195267))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 195270))+4);
        i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 195276)))), &_td_OOC_SymbolTable__PredefTypeDesc);
        if (i1) goto l106;
        i1 = (OOC_INT32)b;
        i0 = _check_pointer(i0, 196004);
        i2 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 196004))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 196007));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 195972)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 5, (OOC_Scanner_SymList__Symbol)i0);
        i0 = (OOC_INT32)arguments;
        i0 = _check_pointer(i0, 196040);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 196040))*4);
        return (OOC_IR__Expression)i0;
        goto l161;
l106:
        i1 = _check_pointer(i0, 195324);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 195324))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 195327))+4);
        i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 195337)))), &_td_OOC_SymbolTable__PredefTypeDesc, 195337)), 195348))+40);
        switch (i1) {
        case 5:
          targetType = 4;
          
          goto l115;
        case 6:
          targetType = 5;
          
          goto l115;
        case 7:
          targetType = 6;
          
          goto l115;
        case 9:
          targetType = 8;
          
          goto l115;
        case 2:
          targetType = 1;
          
          goto l115;
        case 3:
          targetType = 2;
          
          goto l115;
        default:
          i1 = (OOC_INT32)b;
          i0 = _check_pointer(i0, 195762);
          i2 = OOC_ARRAY_LENGTH(i0, 0);
          i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 195762))*4);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 195765));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 195730)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 5, (OOC_Scanner_SymList__Symbol)i0);
          i0 = (OOC_INT32)arguments;
          i1 = _check_pointer(i0, 195800);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 195800))*4);
          return (OOC_IR__Expression)i1;
          
          goto l115;
        }
l115:
        i1 = targetType;
        i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i1);
        i0 = _check_pointer(i0, 195890);
        i2 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 195890))*4);
        i2 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i1, (OOC_IR__Expression)i0);
        return (OOC_IR__Expression)i0;
        goto l161;
l117:
        i0 = _check_pointer(i0, 195238);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 195238))*4);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 13:
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 196104);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i0 = _check_pointer(i0, 196136);
        i3 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i3, OOC_UINT8, 196136))*4);
        i3 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
        *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 196104))*4) = i0;
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 196163);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 196163))*4);
        i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 196167)))), &_td_OOC_IR__ConstDesc);
        if (!i1) goto l122;
        i0 = _check_pointer(i0, 196377);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 196377))*4);
        i1 = (OOC_INT32)b;
        i0 = OOC_IR__BuilderDesc_AssertIntConst((OOC_IR__Builder)i1, (OOC_IR__Expression)i0, 0, 256);
        dummy = i0;
l122:
        i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
        i1 = (OOC_INT32)arguments;
        i1 = _check_pointer(i1, 196545);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 196545))*4);
        i2 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 14:
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 196592);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i0 = _check_pointer(i0, 196624);
        i3 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i3, OOC_UINT8, 196624))*4);
        i3 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
        *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 196592))*4) = i0;
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 196651);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 196651))*4);
        i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 196655)))), &_td_OOC_IR__ConstDesc);
        if (!i1) goto l126;
        i0 = _check_pointer(i0, 196865);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 196865))*4);
        i1 = (OOC_INT32)b;
        i0 = OOC_IR__BuilderDesc_AssertIntConst((OOC_IR__Builder)i1, (OOC_IR__Expression)i0, 0, 65536);
        dummy = i0;
l126:
        i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(2);
        i1 = (OOC_INT32)arguments;
        i1 = _check_pointer(i1, 197081);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 197081))*4);
        i2 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 15:
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 197137);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i0 = _check_pointer(i0, 197169);
        i3 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i3, OOC_UINT8, 197169))*4);
        i3 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
        *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 197137))*4) = i0;
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 197196);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 197196))*4);
        i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 197200)))), &_td_OOC_IR__ConstDesc);
        if (!i1) goto l130;
        i0 = _check_pointer(i0, 197410);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 197410))*4);
        i1 = (OOC_INT32)b;
        i0 = OOC_IR__BuilderDesc_AssertIntConst((OOC_IR__Builder)i1, (OOC_IR__Expression)i0, 0, 1114111);
        dummy = i0;
l130:
        i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(3);
        i1 = (OOC_INT32)arguments;
        i1 = _check_pointer(i1, 197671);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 197671))*4);
        i2 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 16:
        i0 = (OOC_INT32)design;
        i1 = (OOC_INT32)arguments;
        i1 = _check_pointer(i1, 197760);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 197760))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 197744));
        i2 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewEntier((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 17:
        i0 = (OOC_INT32)design;
        i1 = (OOC_INT32)arguments;
        i1 = _check_pointer(i1, 197843);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 197843))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 197827));
        i2 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewOdd((OOC_IR__Builder)i2, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 18:
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 197899);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 197899))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 197902))+4);
        i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 197908)))), &_td_OOC_SymbolTable__PredefTypeDesc);
        if (i1) goto l136;
        i1=0u;
        goto l142;
l136:
        i1 = _check_pointer(i0, 197951);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 197951))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 197954))+4);
        i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 197964)))), &_td_OOC_SymbolTable__PredefTypeDesc, 197964)), 197975))+40);
        i1 = i1==2;
        if (i1) goto l139;
        i1 = _check_pointer(i0, 198023);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 198023))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 198026))+4);
        i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 198036)))), &_td_OOC_SymbolTable__PredefTypeDesc, 198036)), 198047))+40);
        i1 = i1==3;
        
        goto l142;
l139:
        i1=1u;
l142:
        if (i1) goto l144;
        targetType = 5;
        i1=5;
        goto l145;
l144:
        targetType = 6;
        i1=6;
l145:
        i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i1);
        i0 = _check_pointer(i0, 198327);
        i2 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 198327))*4);
        i2 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_AssertChar((OOC_IR__Builder)i2, (OOC_IR__Expression)i0);
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i1, (OOC_IR__Expression)i0);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 26:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)design;
        i2 = (OOC_INT32)arguments;
        i3 = _check_pointer(i2, 198481);
        i4 = OOC_ARRAY_LENGTH(i3, 0);
        i5 = _check_pointer(i2, 198495);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        i2 = _check_pointer(i2, 198509);
        i7 = OOC_ARRAY_LENGTH(i2, 0);
        i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 198481))*4);
        i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(1, i6, OOC_UINT8, 198495))*4);
        i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(2, i7, OOC_UINT8, 198509))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 198433));
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 198411)))), OOC_IR__BuilderDesc_NewMoveBlock)),OOC_IR__BuilderDesc_NewMoveBlock)((OOC_IR__Builder)i0, (OOC_Scanner_SymList__Symbol)i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i2);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 27:
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 198571);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 198571))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 198574))+4);
        i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 198580)))), &_td_OOC_SymbolTable__PointerDesc);
        if (i1) goto l150;
        i1 = _check_pointer(i0, 198634);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 198634))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 198637))+4);
        i1 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i1, 12);
        
        goto l152;
l150:
        i1=1u;
l152:
        if (i1) goto l154;
        i1 = (OOC_INT32)b;
        i0 = _check_pointer(i0, 198945);
        i2 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 198945))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 198948));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 198913)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 50, (OOC_Scanner_SymList__Symbol)i0);
        goto l155;
l154:
        i0 = _check_pointer(i0, 198692);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 198692))*4);
        i1 = (OOC_INT32)b;
        OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i1, (OOC_IR__Expression)i0);
        i0 = (OOC_INT32)arguments;
        i1 = _check_pointer(i0, 198725);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 198725))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 198728))+4);
        type = (OOC_SymbolTable__Type)i1;
        i1 = (OOC_INT32)b;
        i2 = (OOC_INT32)design;
        i3 = _check_pointer(i0, 198806);
        i4 = OOC_ARRAY_LENGTH(i3, 0);
        i5 = _check_pointer(i0, 198863);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT8, 198863))*4);
        i0 = _check_pointer(i0, 198882);
        i6 = OOC_ARRAY_LENGTH(i0, 0);
        i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 198866))+4);
        i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 198806))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(1, i6, OOC_UINT8, 198882))*4);
        i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 198848));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 198790));
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewNewBlock((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i4, (OOC_SymbolTable__Type)i5, (OOC_IR__Expression)i0);
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 198753)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i0);
        return (OOC_IR__Expression)i0;
l155:
        i0 = (OOC_INT32)b;
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 198984))+20);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 24:
        i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
        i1 = (OOC_INT32)b;
        i2 = (OOC_INT32)design;
        i3 = (OOC_INT32)arguments;
        i3 = _check_pointer(i3, 199176);
        i4 = OOC_ARRAY_LENGTH(i3, 0);
        i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 199176))*4);
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 199161));
        i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 199147)))), OOC_IR__BuilderDesc_NewAdr)),OOC_IR__BuilderDesc_NewAdr)((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i2, (OOC_IR__Expression)i3);
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i1, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i2);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 25:
        i0 = (OOC_INT32)design;
        i1 = (OOC_INT32)arguments;
        i2 = _check_pointer(i1, 199254);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i1 = _check_pointer(i1, 199268);
        i4 = OOC_ARRAY_LENGTH(i1, 0);
        i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 199254))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i4, OOC_UINT8, 199268))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 199238));
        i3 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewShift((OOC_IR__Builder)i3, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1, 0u);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 29:
        i0 = (OOC_INT32)design;
        i1 = (OOC_INT32)arguments;
        i2 = _check_pointer(i1, 199363);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i1 = _check_pointer(i1, 199377);
        i4 = OOC_ARRAY_LENGTH(i1, 0);
        i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 199363))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i4, OOC_UINT8, 199377))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 199347));
        i3 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeCast((OOC_IR__Builder)i3, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l161;
      case 28:
        i0 = (OOC_INT32)design;
        i1 = (OOC_INT32)arguments;
        i2 = _check_pointer(i1, 199462);
        i3 = OOC_ARRAY_LENGTH(i2, 0);
        i1 = _check_pointer(i1, 199476);
        i4 = OOC_ARRAY_LENGTH(i1, 0);
        i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 199462))*4);
        i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i4, OOC_UINT8, 199476))*4);
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 199446));
        i3 = (OOC_INT32)b;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewShift((OOC_IR__Builder)i3, (OOC_Scanner_SymList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1, 1u);
        return (OOC_IR__Expression)i0;
        goto l161;
      default:
        _failed_case(i0, 189324);
        goto l161;
      }
l161:
      _failed_function(188880); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_IR__BuilderDesc_NewCall_IsStatement(OOC_IR__Expression expr) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)expr;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(17);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 199674))+4);
      i0 = i0==i1;
      
      goto l4;
l3:
      i0=1u;
l4:
      return i0;
      ;
    }


  i0 = (OOC_INT32)design;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 199759)))), &_td_OOC_IR__PredefProcDesc);
  if (i1) goto l51;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 200478))+20);
  i2 = i0==i2;
  if (i2) goto l49;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 200618))+4);
  i2 = OOC_SymbolTable_TypeRules__IsValidReceiverType((OOC_SymbolTable__Type)i2);
  if (i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 200648))+4);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 200654)))), &_td_OOC_SymbolTable__TypeVarDesc);
  
  goto l9;
l7:
  i2=1u;
l9:
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)arguments;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 200699)), 0);
  i2 = i2==1;
  
l13:
  if (i2) goto l15;
  i2=0u;
  goto l17;
l15:
  i2 = (OOC_INT32)arguments;
  i2 = _check_pointer(i2, 200719);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 200719))*4);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 200723)))), &_td_OOC_IR__TypeRefDesc);
  
l17:
  if (i2) goto l47;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 200879))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 200870))+4);
  i2 = i3==i2;
  if (i2) goto l45;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 200978))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 200978))+4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 200983)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i3);
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 200994)))), &_td_OOC_SymbolTable__FormalParsDesc));
  if (i2) goto l43;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 201106))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 201106))+4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 201111)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i3);
  type = (OOC_SymbolTable__Type)i2;
  i3 = isFunctionCall;
  if (i3) goto l25;
  i4=0u;
  goto l27;
l25:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 201161)))), &_td_OOC_SymbolTable__FormalParsDesc, 201161)), 201172))+44);
  i4 = i4==0;
  
l27:
  if (i4) goto l41;
  i3 = !i3;
  if (i3) goto l31;
  i2=0u;
  goto l33;
l31:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 201303)))), &_td_OOC_SymbolTable__FormalParsDesc, 201303)), 201314))+44);
  i2 = i2!=0;
  
l33:
  if (i2) goto l39;
  call = (OOC_IR__Call)((OOC_INT32)RT0__NewObject(_td_OOC_IR__Call.baseTypes[0]));
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 201458)))), &_td_OOC_IR__SelectProcDesc);
  if (i1) goto l37;
  receiver = (OOC_IR__Expression)0;
  i1=0;
  goto l38;
l37:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 201509)))), &_td_OOC_IR__SelectProcDesc, 201509)), 201520))+8);
  receiver = (OOC_IR__Expression)i1;
  
l38:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 201647))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 201621));
  i3 = (OOC_INT32)endOfArgsSym;
  OOC_IR__BuilderDesc_NewCall_TransformArgs((OOC_Scanner_SymList__Symbol)i0, (OOC_Scanner_SymList__Symbol)i3, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i1, (void*)(OOC_INT32)&arguments, (void*)(OOC_INT32)&formalPars);
  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)call;
  i2 = (OOC_INT32)design;
  i3 = (OOC_INT32)arguments;
  OOC_IR__InitCall((OOC_IR__Call)i1, (OOC_IR__Expression)i2, (OOC_IR__ExpressionList)i3, (OOC_SymbolTable__VarDeclArray)i0);
  return (OOC_IR__Expression)i1;
  goto l70;
l39:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 201394));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 201356)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 36, (OOC_Scanner_SymList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l70;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 201253));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 201214)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 37, (OOC_Scanner_SymList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l70;
l43:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 201065));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 201034)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 35, (OOC_Scanner_SymList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l70;
l45:
  i2 = (OOC_INT32)endOfArgsSym;
  i3 = (OOC_INT32)arguments;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 200911)))), OOC_IR__BuilderDesc_NewQualType)),OOC_IR__BuilderDesc_NewQualType)((OOC_IR__Builder)i1, (OOC_IR__Expression)i0, (OOC_IR__ExpressionList)i3, (OOC_Scanner_SymList__Symbol)i2);
  return (OOC_IR__Expression)i0;
  goto l70;
l47:
  i2 = (OOC_INT32)arguments;
  i3 = _check_pointer(i2, 200779);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 200779))*4);
  i2 = _check_pointer(i2, 200836);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 200836))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 200782));
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeGuard((OOC_IR__Builder)i1, (OOC_Scanner_SymList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__TypeRef)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 200840)))), &_td_OOC_IR__TypeRefDesc, 200840)));
  return (OOC_IR__Expression)i0;
  goto l70;
l49:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 200512))+20);
  return (OOC_IR__Expression)i0;
  goto l70;
l51:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 199801))+8);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 199812)))), &_td_OOC_SymbolTable__PredefProcDesc, 199812);
  predefProc = (OOC_SymbolTable__PredefProc)i0;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 199869))+50);
  i0 = *(OOC_INT16*)((_check_pointer(i0, 199890))+52);
  i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(i1, i0);
  i0 = !i0;
  if (!i0) goto l54;
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 200106))+20);
  return (OOC_IR__Expression)i0;
l54:
  i0 = (OOC_INT32)predefProc;
  i0 = *(OOC_INT16*)((_check_pointer(i0, 200178))+48);
  i1 = (OOC_INT32)design;
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewCall_TranslatePredef((OOC_IR__PredefProc)i1, i0);
  expr = (OOC_IR__Expression)i0;
  i1 = isFunctionCall;
  if (i1) goto l57;
  i2=0u;
  goto l59;
l57:
  i2 = OOC_IR__BuilderDesc_NewCall_IsStatement((OOC_IR__Expression)i0);
  
l59:
  if (i2) goto l68;
  i1 = !i1;
  if (i1) goto l63;
  i1=0u;
  goto l65;
l63:
  i1 = OOC_IR__BuilderDesc_NewCall_IsStatement((OOC_IR__Expression)i0);
  i1 = !i1;
  
l65:
  if (!i1) goto l69;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)design;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 200404));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 200366)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 36, (OOC_Scanner_SymList__Symbol)i2);
  return (OOC_IR__Expression)i1;
  goto l69;
l68:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)design;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 200288));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 200249)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 37, (OOC_Scanner_SymList__Symbol)i2);
  return (OOC_IR__Expression)i1;
l69:
  return (OOC_IR__Expression)i0;
l70:
  _failed_function(179382); return 0;
  ;
}

void OOC_OOC_IR_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Region("", 1, 0, 0);
  _c1 = Object__NewLatin1Region("NIL", 4, 0, 3);
  _c2 = Object__NewLatin1Char(97u);

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ErrorContext.baseTypes[0]);
  OOC_IR__irContext = (OOC_IR__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:IR", 7);
  return;
  ;
}

/* --- */
