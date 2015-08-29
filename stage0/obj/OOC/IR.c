#include <OOC/IR.d>
#include <__oo2c.h>
#include <setjmp.h>

static void OOC_IR__AppendContext(ADT_StringBuffer__StringBuffer buffer, OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)item;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38700)))), &_td_OOC_SymbolTable__DeclarationDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38690)))), 38690);
  goto l7;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38734))+4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l6;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38787))+4);
  i2 = (OOC_INT32)buffer;
  OOC_IR__AppendContext((ADT_StringBuffer__StringBuffer)i2, (OOC_SymbolTable__Item)i1);
l6:
  i1 = (OOC_INT32)buffer;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38838))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 38843))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38838))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 38843))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 38847)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38820)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i1, (void*)(_check_pointer(i2, 38847)), i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38863)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i1, 46u);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39260))+4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39307))+4);
  OOC_IR__AppendContext((ADT_StringBuffer__StringBuffer)i0, (OOC_SymbolTable__Item)i2);
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39333))+20);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l26;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39434)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i2) goto l24;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39629)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i2) goto l22;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39692)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i2) goto l20;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39760)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l18;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39819)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i2) goto l16;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39812)))), 39812);
  goto l27;
l16:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39845)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "RECORD", 7);
  goto l27;
l18:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39785)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "ARRAY", 6);
  goto l27;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39722)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "PROCEDURE", 10);
  goto l27;
l22:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39656)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "POINTER", 8);
  goto l27;
l24:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39528)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "PredefType(", 12);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 39583))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39568)))), ADT_StringBuffer__StringBufferDesc_AppendInt)),ADT_StringBuffer__StringBufferDesc_AppendInt)((ADT_StringBuffer__StringBuffer)i0, i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39599)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, ")", 2);
  goto l27;
l26:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39382))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 39393))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 39398))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39382))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39393))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39398))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 39402)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39364)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(_check_pointer(i2, 39402)), i1);
l27:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39897)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 40237))+8);
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
  case 68:
    _copy_16((const void*)((OOC_CHAR16[]){67,114,111,115,115,32,112,114,111,99,101,100,117,114,101,32,115,117,112,101,114,32,99,97,108,108,0}),(void*)(OOC_INT32)t,128);
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
  default:
    _failed_case(i1, 40229);
    goto l76;
  }
l76:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45447)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

static void OOC_IR__InitGuardedVar(OOC_IR__GuardedVar gv, OOC_SymbolTable__VarDecl var, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45733))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 45744))+20);
  i3 = *(OOC_INT8*)((_check_pointer(i0, 45787))+24);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45804))+28);
  i5 = (OOC_INT32)gv;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Name)i1, i2, i3, (OOC_Doc__Document)i4);
  *(OOC_INT32*)((_check_pointer(i5, 45824))+44) = i0;
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i5, 45844))+48) = i0;
  return;
  ;
}

static OOC_IR__GuardedVar OOC_IR__NewGuardedVar(OOC_SymbolTable__VarDecl var, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__GuardedVar.baseTypes[0]);
  i1 = (OOC_INT32)var;
  i2 = (OOC_INT32)type;
  OOC_IR__InitGuardedVar((OOC_IR__GuardedVar)i0, (OOC_SymbolTable__VarDecl)i1, (OOC_SymbolTable__Type)i2);
  return (OOC_IR__GuardedVar)i0;
  ;
}

OOC_SymbolTable__Module OOC_IR__GuardedVarDesc_Module(OOC_IR__GuardedVar gv) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)gv;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46147))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46147))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46152)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  return (OOC_SymbolTable__Module)i0;
  ;
}

void OOC_IR__InitNode(OOC_IR__Node n, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)n;
  i1 = (OOC_INT32)sym;
  *(OOC_INT32*)(_check_pointer(i0, 46338)) = i1;
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
  *(OOC_INT32*)((_check_pointer(i0, 46751))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)expr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46775)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46795))+4);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46855))+4);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  return (OOC_IR__Expression)i1;
l4:
  _failed_function(46466); return 0;
  ;
}

void OOC_IR__BuilderDesc_ErrSym(OOC_IR__Builder b, OOC_INT32 code, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)OOC_IR__irContext;
  i1 = code;
  i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
  e = (Msg__Msg)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47043))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 47054));
  i3 = (OOC_INT32)sym;
  i2 = i3!=i2;
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i3, 47140))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47114)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i3, 47182))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47155)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i3, 47227))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47198)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47245))+8);
  OOC_Error__ListDesc_Append((OOC_Error__List)i2, (Msg__Msg)i0);
l4:
  *(OOC_INT32*)((_check_pointer(i1, 47282))+36) = i0;
  return;
  ;
}

void OOC_IR__BuilderDesc_SetNameToType(OOC_IR__Builder b, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Module module;
  OOC_CHAR8 name[256];

  i0 = (OOC_INT32)type;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47567))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l31;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48023)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48050)))), &_td_OOC_SymbolTable__TypeNameDesc);
  if (i1) goto l29;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48200)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48256)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48317)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48369)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48423)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i1) goto l19;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48480)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l17;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48474)))), 48474);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48085))+36);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48092))+12);
  _copy_8((const void*)(_check_pointer(i1, 48096)),(void*)(OOC_INT32)name,256);
  Strings__Append(".", 2, (void*)(OOC_INT32)name, 256);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48168))+40);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48174))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48168))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48174))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 48178)), 0);
  Strings__Append((void*)(_check_pointer(i1, 48178)), i0, (void*)(OOC_INT32)name, 256);
  goto l40;
l31:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47611))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47611))+20);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47622)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i2);
  module = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47649))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 47654))+12);
  i2 = _check_pointer(i2, 47658);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT8, 47658)));
  i2 = i2==35u;
  if (i2) goto l34;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47678)))), &_td_OOC_SymbolTable__TypeVarDesc);
  
  goto l36;
l34:
  i2=1u;
l36:
  if (i2) goto l38;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47876))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47881))+12);
  _copy_8((const void*)(_check_pointer(i1, 47885)),(void*)(OOC_INT32)name,256);
  Strings__Append(".", 2, (void*)(OOC_INT32)name, 256);
  goto l39;
l38:
  _copy_8((const void*)"",(void*)(OOC_INT32)name,256);
l39:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47966))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47977))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 47982))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47966))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47977))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47982))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 47986)), 0);
  Strings__Append((void*)(_check_pointer(i1, 47986)), i0, (void*)(OOC_INT32)name, 256);
l40:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48552))+36);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48552))+36);
  i2 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)name, 256);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48562)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i2);
  return;
  ;
}

static OOC_CHAR8 OOC_IR__GetPragmaValue(OOC_IR__Builder b, Config_Section_Options__Option pragma, OOC_INT32 charPos) {
  register OOC_INT32 i0,i1,i2,i3;
  Config_Value__Value value;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)pragma;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48817))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 48817))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48784))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 48823)), 0);
  i3 = charPos;
  i0 = (OOC_INT32)OOC_Config_Pragmas__HistoryDesc_GetValue((OOC_Config_Pragmas__History)i0, (void*)(_check_pointer(i2, 48823)), i1, i3);
  value = (Config_Value__Value)i0;
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48866)))), &_td_Config_Value_Boolean__ValueDesc, 48866)), 48872));
  return i0;
  ;
}

void OOC_IR__BuilderDesc_WarnSym(OOC_IR__Builder b, OOC_INT32 code, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)OOC_IR__irContext;
  i1 = code;
  i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
  e = (Msg__Msg)i0;
  i1 = (OOC_INT32)sym;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 49070))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49044)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 49110))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49083)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 49153))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49124)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i2);
  i2 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i2, 49295))+36) = i0;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 49367))+16);
  i3 = (OOC_INT32)OOC_Config_StdPragmas__warnings;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 49385))+8);
  OOC_Error__ListDesc_Append((OOC_Error__List)i1, (Msg__Msg)i0);
l4:
  return;
  ;
}

void OOC_IR__BuilderDesc_WarnName(OOC_IR__Builder b, OOC_INT32 code, OOC_SymbolTable__Name name) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49545))+12);
  i1 = _check_pointer(i1, 49549);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 49549)));
  i1 = i1!=45u;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT32*)(_check_pointer(i0, 49612));
  i2 = (OOC_INT32)OOC_Config_StdPragmas__warnings;
  i3 = (OOC_INT32)b;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i3, (Config_Section_Options__Option)i2, i1);
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)OOC_IR__irContext;
  i2 = code;
  i1 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i1, i2);
  e = (Msg__Msg)i1;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 49804));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49777)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 49847))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49819)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "line", 5, i2);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 49893))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49863)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "column", 7, i0);
  i0 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49911))+8);
  OOC_Error__ListDesc_Append((OOC_Error__List)i2, (Msg__Msg)i1);
  *(OOC_INT32*)((_check_pointer(i0, 49941))+36) = i1;
l7:
  return;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_ErrExpr(OOC_IR__Builder b, OOC_INT32 code, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = code;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50074)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, i1, (OOC_Scanner_BasicList__Symbol)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50106))+20);
  return (OOC_IR__Const)i0;
  ;
}

OOC_SymbolTable__Name OOC_IR__BuilderDesc_GetName(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Name name;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  name = (OOC_SymbolTable__Name)i0;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50269))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 50279))+16);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 50289))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 50300))+24);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i1);
  return (OOC_SymbolTable__Name)i0;
  ;
}

OOC_SymbolTable__Name OOC_IR__BuilderDesc_GetName2(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
  OOC_Scanner_InputBuffer__CharArray s;
  OOC_SymbolTable__Name name;

  OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
  i0 = Strings__Length((void*)(OOC_INT32)str, str_0d);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i0+1));
  s = (OOC_Scanner_InputBuffer__CharArray)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 50528)), 0);
  _copy_8((const void*)(OOC_INT32)str,(void*)(_check_pointer(i0, 50528)),i1);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  name = (OOC_SymbolTable__Name)i1;
  i2 = (OOC_INT32)sym;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 50583))+16);
  i4 = *(OOC_INT32*)((_check_pointer(i2, 50593))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 50604))+24);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i0, i3, i4, i2);
  return (OOC_SymbolTable__Name)i1;
  ;
}

OOC_SymbolTable__Type OOC_IR__BuilderDesc_AssertType(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50905)))), &_td_OOC_IR__TypeRefDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 51025));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50994)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 16, (OOC_Scanner_BasicList__Symbol)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51049))+4);
  return (OOC_SymbolTable__Type)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50935))+12);
  return (OOC_SymbolTable__Type)i0;
l4:
  _failed_function(50671); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertBoolean(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51333))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51340)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51373))+4);
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51384)))), &_td_OOC_SymbolTable__PredefTypeDesc, 51384)), 51395))+36);
  i1 = i1==0;
  
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 51492));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51465)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 22, (OOC_Scanner_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l8;
l7:
  return (OOC_IR__Expression)i0;
l8:
  _failed_function(51107); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_Fold(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51611))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51611))+12);
  i2 = (OOC_INT32)expr;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51621)))), OOC_IR__ConstFoldDesc_TryConstFold)),OOC_IR__ConstFoldDesc_TryConstFold)((OOC_IR__ConstFold)i0, (OOC_IR__Expression)i2);
  return (OOC_IR__Expression)i0;
  ;
}

static OOC_CHAR8 OOC_IR__IsPredefType(OOC_SymbolTable__Type type, OOC_INT16 id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51744)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51775)))), &_td_OOC_SymbolTable__PredefTypeDesc, 51775)), 51786))+36);
  i1 = id;
  i0 = i0==i1;
  
l4:
  return i0;
  ;
}

void OOC_IR__BuilderDesc_CheckFunctionOp(OOC_IR__Builder b, OOC_IR__Expression expr, OOC_Scanner_BasicList__Symbol op) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53141)))), &_td_OOC_IR__PredefProcDesc);
  if (i1) goto l3;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53165)))), &_td_OOC_IR__CallDesc);
  
  goto l5;
l3:
  i0=1u;
l5:
  if (!i0) goto l7;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)op;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53184)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 23, (OOC_Scanner_BasicList__Symbol)i1);
l7:
  return;
  ;
}

void OOC_IR__InitExpression(OOC_IR__Expression expr, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitNode((OOC_IR__Node)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 53474))+4) = i1;
  return;
  ;
}

static void OOC_IR__InitConst(OOC_IR__Const _const, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type type, Object_Boxed__Object value) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)_const;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitExpression((OOC_IR__Expression)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 53783))+8) = i1;
  return;
  ;
}

static OOC_IR__Const OOC_IR__NewConst(OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type type, Object_Boxed__Object value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)type;
  _assert((i0!=(OOC_INT32)0), 127, 53953);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)value;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Const.baseTypes[0]);
  OOC_IR__InitConst((OOC_IR__Const)i3, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54207)))), OOC_IR__VisitorDesc_VisitConst)),OOC_IR__VisitorDesc_VisitConst)((OOC_IR__Visitor)i0, (OOC_IR__Const)i1);
  return;
  ;
}

Object__String OOC_IR__ConstDesc_ToString(OOC_IR__Const _const) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_const;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54310))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54377))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54377))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54384)))), Object_Boxed__ObjectDesc_ToString)),Object_Boxed__ObjectDesc_ToString)((Object_Boxed__Object)i0);
  return (Object__String)i0;
  goto l4;
l3:
  return (Object__String)((OOC_INT32)_c1);
l4:
  _failed_function(54268); return 0;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_NewConst(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type type, Object_Boxed__Object value) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)value;
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  return (OOC_IR__Const)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewStringConst(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54686))+8);
  i1 = _check_pointer(i1, 54691);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(2, i2, OOC_UINT8, 54691)));
  i1 = i1!=0u;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54707))+8);
  i1 = _check_pointer(i1, 54712);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(3, i2, OOC_UINT8, 54712)));
  i1 = i1==0u;
  
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(13);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55153))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55153))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 55158)), 0);
  i2 = (OOC_INT32)Object_Boxed__ParseString((void*)(_check_pointer(i2, 55158)), i3);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
  goto l8;
l7:
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55026))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55026))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 55031)), 0);
  i2 = (OOC_INT32)Object_Boxed__ParseString((void*)(_check_pointer(i2, 55031)), i3);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
l8:
  _failed_function(54624); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIntConst10(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;
  Object_BigInt__BigInt v;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55325))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55325))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 55330)), 0);
  i1 = (OOC_INT32)Object_BigInt__NewString((void*)(_check_pointer(i1, 55330)), i2, 10);
  v = (Object_BigInt__BigInt)i1;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i1 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55367)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 3, (OOC_Scanner_BasicList__Symbol)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55415))+20);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(55218); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIntConst16(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 epos;

  epos = 0;
  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55674))+8);
  i1 = _check_pointer(i1, 55678);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 55678)));
  i1 = i1!=72u;
  if (i1) goto l3;
  i1=0;
  goto l9;
l3:
  i1=0;
l4_loop:
  i1 = i1+1;
  epos = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55674))+8);
  i2 = _check_pointer(i2, 55678);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 55678)));
  i2 = i2!=72u;
  if (i2) goto l4_loop;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55750))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55750))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 55754)), 0);
  i1 = (OOC_INT32)Object_BigInt__NewRegion((void*)(_check_pointer(i2, 55754)), i3, 0, i1, 16);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_AssertConst(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56153)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 56274));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 56242)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 9, (OOC_Scanner_BasicList__Symbol)i0);
  return (OOC_IR__Const)i0;
  goto l4;
l3:
  return (OOC_IR__Const)i0;
l4:
  _failed_function(55872); return 0;
  ;
}

OOC_INT32 OOC_IR__BuilderDesc_AssertIntConst(OOC_IR__Builder b, OOC_IR__Expression expr, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__Const _const;
  OOC_INT32 v;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56840)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  _const = (OOC_IR__Const)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56879))+20);
  i2 = i1!=i2;
  if (!i2) goto l20;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 56929))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  if (!i2) goto l16;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 56960))+8);
  i2 = Object_BigInt__BigIntDesc_ToLongInt((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 56975)))), &_td_Object_BigInt__BigIntDesc, 56975)));
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 57234));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57198)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 14, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57251))+36);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57251))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57262)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i4, "start", 6, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57304))+36);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57304))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57315)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "end", 4, i3);
l20:
  i0 = start;
  return i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertInteger(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_BigInt__BigInt v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57688))+4);
  i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 57718))+20);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 57768));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57744)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 19, (OOC_Scanner_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  v = (Object_BigInt__BigInt)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 57841));
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertReal(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_Boxed__LongReal v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58208))+4);
  i1 = OOC_SymbolTable_TypeRules__IsRealType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58238))+20);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58285));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58264)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 46, (OOC_Scanner_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewLongReal(1.0000000000000000);
  v = (Object_Boxed__LongReal)i1;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58362));
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertNumeric(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_BigInt__BigInt v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58738))+4);
  i1 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58768))+20);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58818));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58794)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 44, (OOC_Scanner_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  v = (Object_BigInt__BigInt)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58891));
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertChar(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_Boxed__String v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59252))+4);
  i1 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59282))+20);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 59334));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59308)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 45, (OOC_Scanner_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewString((Object__String)((OOC_INT32)_c2));
  v = (Object_Boxed__String)i1;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 59411));
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertSet(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_Boxed__Set v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59737))+4);
  i1 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59767))+20);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 59813));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59793)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 49, (OOC_Scanner_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewSet(0u);
  v = (Object_Boxed__Set)i1;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(10);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 59886));
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewRealConst(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_INT16 type) {
  register OOC_INT32 i0,i1,i2;
  Object_Boxed__Object v;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 60127))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 60127))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 60132)), 0);
  i1 = (OOC_INT32)Object_Boxed__ParseLongRealLiteral((void*)(_check_pointer(i1, 60132)), i2);
  v = (Object_Boxed__Object)i1;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = type;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i2);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i1 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60165)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 3, (OOC_Scanner_BasicList__Symbol)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 60213))+20);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(59991); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewCharConst16(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym) {
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
          _failed_function(60563); return 0;
          ;
        }

        
        OOC_CHAR8 OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexToInt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_CHAR8 end, OOC_INT32 *result) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

          OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
          *result = 0;
          i = 0;
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 60957)));
          i1 = end;
          i0 = i0!=i1;
          if (!i0) goto l11;
          i0=0;
l3_loop:
          i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 61013)));
          i2 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i2);
          i3 = *result;
          i2 = ((2147483647-i2)>>4)<i3;
          if (!i2) goto l6;
          return 0u;
l6:
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 61124)));
          i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i0);
          *result = ((i3*16)+i0);
          i0 = i;
          i0 = i0+1;
          i = i0;
          i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 60957)));
          i2 = i2!=i1;
          if (i2) goto l3_loop;
l11:
          return 1u;
          ;
        }


      i = 0;
      hexCount = 0;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 61261)));
      i0 = i0!=0u;
      if (i0) goto l3;
      i0=0;i1=0;
      goto l13;
l3:
      i0=0;i1=0;
l4_loop:
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 61299)));
      i2 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i2);
      i2 = i2>=0;
      if (!i2) goto l8;
      i1 = i1+1;
      hexCount = i1;
      
l8:
      i0 = i0+1;
      i = i0;
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 61261)));
      i2 = i2!=0u;
      if (i2) goto l4_loop;
l13:
      i2 = i0==3;
      if (i2) goto l16;
      i2=0u;
      goto l18;
l16:
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 61403)));
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 61412)));
      i2 = i2==i3;
      
l18:
      if (i2) goto l20;
      i2=0u;
      goto l26;
l20:
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 61426)));
      i2 = i2==34u;
      if (i2) goto l23;
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 61444)));
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
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 61574)));
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
      i0 = i0<=2147483647;
      
l47:
      if (i0) goto l49;
      return (-1);
      goto l53;
l49:
      i0 = ord;
      return i0;
      goto l53;
l52:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, str_0d, OOC_UINT8, 61542)));
      return i0;
l53:
      _failed_function(60454); return 0;
      ;
    }


  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62041))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62041))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 62046)), 0);
  i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf((void*)(_check_pointer(i1, 62046)), i0);
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
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l12;
l11:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62077)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 4, (OOC_Scanner_BasicList__Symbol)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 62128))+20);
  return (OOC_IR__Expression)i0;
l12:
  _failed_function(60340); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewNil(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(16);
  i1 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)(OOC_INT32)0);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSize(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression type) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Type t;
  OOC_INT32 size;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62877)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  t = (OOC_SymbolTable__Type)i2;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 62905))+28);
  i3 = i3<0;
  if (i3) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i2, 63001))+28);
  size = i1;
  
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 62953));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62928)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 47, (OOC_Scanner_BasicList__Symbol)i1);
  size = 1;
  i1=1;
l4:
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)Object_BigInt__NewInt(i1);
  i3 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63029)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_GetOne(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63216)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 63970));
      i3 = (OOC_INT32)min;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63956)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i3);
      return (OOC_IR__Expression)i0;
      ;
    }


  i0 = (OOC_INT32)set;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetMin((OOC_SymbolTable__Type)i0);
  val = (Object_Boxed__Object)i1;
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64091)))), &_td_Object_BigInt__BigIntDesc, 64091);
  min = (Object_BigInt__BigInt)i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetMax((OOC_SymbolTable__Type)i0);
  val = (Object_Boxed__Object)i0;
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64149)))), &_td_Object_BigInt__BigIntDesc, 64149);
  max = (Object_BigInt__BigInt)i0;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)expr;
  i3 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i2, (OOC_IR__Expression)i3);
  expr = (OOC_IR__Expression)i3;
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 64208)))), &_td_OOC_IR__ConstDesc);
  if (!i4) goto l10;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 64240))+8);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 64254)))), &_td_Object_BigInt__BigIntDesc, 64254);
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
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 64370));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 64335)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 14, (OOC_Scanner_BasicList__Symbol)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 64387))+36);
  i1 = Object_BigInt__BigIntDesc_ToLongInt((Object_BigInt__BigInt)i1);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 64387))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 64398)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i4, "start", 6, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 64450))+36);
  i0 = Object_BigInt__BigIntDesc_ToLongInt((Object_BigInt__BigInt)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 64450))+36);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64461)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i2, "end", 4, (i0+1));
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_ValidSetElement_MinElement();
  return (OOC_IR__Expression)i0;
l10:
  i0 = (OOC_INT32)expr;
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__InitOperator(OOC_IR__Operator op, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitExpression((OOC_IR__Expression)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  return;
  ;
}

static void OOC_IR__InitAbs(OOC_IR__Abs abs, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression operand) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)operand;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65047))+4);
  i2 = (OOC_INT32)abs;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 65063))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewAbs(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression operand) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Abs.baseTypes[0]);
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)operand;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertNumeric((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  OOC_IR__InitAbs((OOC_IR__Abs)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 65432)))), OOC_IR__VisitorDesc_VisitAbs)),OOC_IR__VisitorDesc_VisitAbs)((OOC_IR__Visitor)i0, (OOC_IR__Abs)i1);
  return;
  ;
}

static void OOC_IR__InitAdr(OOC_IR__Adr adr, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(12);
  i1 = (OOC_INT32)adr;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)design;
  *(OOC_INT32*)((_check_pointer(i1, 65703))+8) = i0;
  return;
  ;
}

OOC_IR__Adr OOC_IR__BuilderDesc_NewAdr(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression design) {
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66021)))), &_td_OOC_IR__VarDesc);
      if (i1) goto l30;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66039)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l28;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66059)))), &_td_OOC_IR__IndexDesc);
      if (i1) goto l26;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66079)))), &_td_OOC_IR__SelectFieldDesc);
      if (i1) goto l24;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66105)))), &_td_OOC_IR__TypeGuardDesc);
      if (i1) goto l22;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66129)))), &_td_OOC_IR__ProcedureRefDesc);
      if (i1) goto l20;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66156)))), &_td_OOC_IR__ConstDesc);
      if (i1) goto l15;
      hasAddress = 0u;
      i0=0u;
      goto l31;
l15:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 66196))+4);
      i1 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i1);
      if (!i1) goto l18;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 66268))+4);
      i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i0);
      i1 = (OOC_INT32)b;
      i0 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i1, (void*)(OOC_INT32)&expr, (OOC_SymbolTable__Type)i0);
      dummy = i0;
l18:
      i0 = (OOC_INT32)expr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 66333))+4);
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 66455));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66427)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 51, (OOC_Scanner_BasicList__Symbol)i1);
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
  OOC_IR__InitAdr((OOC_IR__Adr)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66755)))), OOC_IR__VisitorDesc_VisitAdr)),OOC_IR__VisitorDesc_VisitAdr)((OOC_IR__Visitor)i0, (OOC_IR__Adr)i1);
  return;
  ;
}

static void OOC_IR__InitAsh(OOC_IR__Ash ash, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression exp) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)ash;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i1, 67034))+8) = i0;
  i0 = (OOC_INT32)exp;
  *(OOC_INT32*)((_check_pointer(i1, 67059))+12) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewAsh(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression exp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Ash.baseTypes[0]);
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)value;
  i2 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i3 = (OOC_INT32)exp;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i1, (OOC_IR__Expression)i3);
  i3 = (OOC_INT32)sym;
  OOC_IR__InitAsh((OOC_IR__Ash)i0, (OOC_Scanner_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67443)))), OOC_IR__VisitorDesc_VisitAsh)),OOC_IR__VisitorDesc_VisitAsh)((OOC_IR__Visitor)i0, (OOC_IR__Ash)i1);
  return;
  ;
}

static void OOC_IR__InitBinaryArith(OOC_IR__BinaryArith op, OOC_Scanner_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = variant;
  *(OOC_INT8*)((_check_pointer(i0, 67753))+8) = i1;
  i1 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i0, 67780))+12) = i1;
  i1 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i0, 67801))+16) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewBinaryArith(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__BinaryArith op;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__BinaryArith.baseTypes[0]);
  op = (OOC_IR__BinaryArith)i0;
  i1 = (OOC_INT32)left;
  i2 = (OOC_INT32)right;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 68027))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 68039))+4);
  i3 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i4);
  _assert(i3, 127, 68004);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 68104))+4);
  i4 = (OOC_INT32)sym;
  i5 = variant;
  OOC_IR__InitBinaryArith((OOC_IR__BinaryArith)i0, (OOC_Scanner_BasicList__Symbol)i4, i5, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, (OOC_SymbolTable__Type)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68309)))), OOC_IR__VisitorDesc_VisitBinaryArith)),OOC_IR__VisitorDesc_VisitBinaryArith)((OOC_IR__Visitor)i0, (OOC_IR__BinaryArith)i1);
  return;
  ;
}

static void OOC_IR__InitBooleanOp(OOC_IR__BooleanOp op, OOC_Scanner_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = variant;
  *(OOC_INT8*)((_check_pointer(i0, 68620))+8) = i1;
  i1 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i0, 68647))+12) = i1;
  i1 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i0, 68668))+16) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewBooleanOp(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__BooleanOp op;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__BooleanOp.baseTypes[0]);
  op = (OOC_IR__BooleanOp)i0;
  i1 = (OOC_INT32)left;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 68877))+4);
  i2 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 68888)))), &_td_OOC_SymbolTable__PredefTypeDesc, 68888)), 68899))+36);
  _assert((i2==0), 127, 68865);
  i2 = (OOC_INT32)right;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 68940))+4);
  i3 = *(OOC_INT16*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 68951)))), &_td_OOC_SymbolTable__PredefTypeDesc, 68951)), 68962))+36);
  _assert((i3==0), 127, 68927);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69040))+4);
  i4 = (OOC_INT32)sym;
  i5 = variant;
  OOC_IR__InitBooleanOp((OOC_IR__BooleanOp)i0, (OOC_Scanner_BasicList__Symbol)i4, i5, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, (OOC_SymbolTable__Type)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69235)))), OOC_IR__VisitorDesc_VisitBooleanOp)),OOC_IR__VisitorDesc_VisitBooleanOp)((OOC_IR__Visitor)i0, (OOC_IR__BooleanOp)i1);
  return;
  ;
}

static void OOC_IR__InitCap(OOC_IR__Cap cap, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69476))+4);
  i2 = (OOC_INT32)cap;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 69492))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewCap(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Cap.baseTypes[0]);
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)expr;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertChar((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  OOC_IR__InitCap((OOC_IR__Cap)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69849)))), OOC_IR__VisitorDesc_VisitCap)),OOC_IR__VisitorDesc_VisitCap)((OOC_IR__Visitor)i0, (OOC_IR__Cap)i1);
  return;
  ;
}

static void OOC_IR__InitChangeElement(OOC_IR__ChangeElement ch, OOC_Scanner_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression set, OOC_IR__Expression element) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)set;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70167))+4);
  i2 = (OOC_INT32)ch;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  i1 = variant;
  *(OOC_INT8*)((_check_pointer(i2, 70182))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 70210))+12) = i0;
  i0 = (OOC_INT32)element;
  *(OOC_INT32*)((_check_pointer(i2, 70230))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewChangeElement(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression set, OOC_IR__Expression element) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ChangeElement.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = variant;
  i3 = (OOC_INT32)set;
  i4 = (OOC_INT32)element;
  OOC_IR__InitChangeElement((OOC_IR__ChangeElement)i0, (OOC_Scanner_BasicList__Symbol)i1, i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70747)))), OOC_IR__VisitorDesc_VisitChangeElement)),OOC_IR__VisitorDesc_VisitChangeElement)((OOC_IR__Visitor)i0, (OOC_IR__ChangeElement)i1);
  return;
  ;
}

static void OOC_IR__InitCompare(OOC_IR__Compare op, OOC_Scanner_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(0);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i1, 71063))+12) = i0;
  i0 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i1, 71084))+16) = i0;
  i0 = variant;
  *(OOC_INT8*)((_check_pointer(i1, 71107))+8) = i0;
  return;
  ;
}

OOC_IR__Compare OOC_IR__BuilderDesc_NewCompare(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT8 variant;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 71350))+4);
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
    _failed_case(i1, 71342);
    goto l9;
  }
l9:
  i1 = (OOC_INT32)left;
  i2 = (OOC_INT32)right;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Compare.baseTypes[0]);
  i4 = variant;
  OOC_IR__InitCompare((OOC_IR__Compare)i3, (OOC_Scanner_BasicList__Symbol)i0, i4, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71819)))), OOC_IR__VisitorDesc_VisitCompare)),OOC_IR__VisitorDesc_VisitCompare)((OOC_IR__Visitor)i0, (OOC_IR__Compare)i1);
  return;
  ;
}

static void OOC_IR__InitConcat(OOC_IR__Concat op, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__ExpressionList strings) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)strings;
  *(OOC_INT32*)((_check_pointer(i0, 72119))+8) = i1;
  return;
  ;
}

OOC_IR__Concat OOC_IR__BuilderDesc_NewConcat(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__ExpressionList strings) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT16 id;
  OOC_INT32 i;
  OOC_SymbolTable__Type type;
  OOC_INT16 tid;
  OOC_CHAR8 dummy;

  id = (-1);
  i0 = (OOC_INT32)strings;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 72391)), 0);
  i2 = (OOC_INT32)sym;
  i3 = 0<i1;
  if (i3) goto l3;
  i1=(-1);
  goto l28;
l3:
  i3 = (OOC_INT32)b;
  i4=0;i5=(-1);
l4_loop:
  i6 = _check_pointer(i0, 72420);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 72420))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 72423))+4);
  type = (OOC_SymbolTable__Type)i6;
  tid = 32767;
  i7 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i6);
  if (i7) goto l18;
  i7 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i6);
  if (i7) goto l12;
  i6 = OOC_SymbolTable_TypeRules__IsSTRING((OOC_SymbolTable__Type)i6);
  i6 = !i6;
  if (!i6) goto l11;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 72914)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 7, (OOC_Scanner_BasicList__Symbol)i2);
l11:
  i6=32767;
  goto l19;
l12:
  i7 = _check_pointer(i0, 72672);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i6 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i6);
  i6 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i3, (void*)(i7+(_check_index(i4, i8, OOC_UINT32, 72672))*4), (OOC_SymbolTable__Type)i6);
  if (i6) goto l15;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 72789)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 7, (OOC_Scanner_BasicList__Symbol)i2);
  i6=32767;
  goto l19;
l15:
  i6 = _check_pointer(i0, 72736);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 72736))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 72739))+4);
  i6 = *(OOC_INT16*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 72749)))), &_td_OOC_SymbolTable__PredefTypeDesc, 72749)), 72760))+36);
  tid = i6;
  
  goto l19;
l18:
  i6 = *(OOC_INT16*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 72551)))), &_td_OOC_SymbolTable__PredefTypeDesc, 72551)), 72562))+36);
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 73229))+32);
  type = (OOC_SymbolTable__Type)i3;
  i = 0;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i0, 73273)), 0);
  i5 = 0<i4;
  if (!i5) goto l41;
  i5=0;
l33_loop:
  i6 = _check_pointer(i0, 73316);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 73316))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 73319))+4);
  i6 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i6);
  if (!i6) goto l36;
  i6 = _check_pointer(i0, 73424);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i1, (void*)(i6+(_check_index(i5, i7, OOC_UINT32, 73424))*4), (OOC_SymbolTable__Type)i3);
  dummy = i6;
  _assert(i6, 127, 73446);
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
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 73119)), 0);
  i4 = 0<i3;
  if (!i4) goto l51;
  i4 = (OOC_INT32)b;
  i5=0;
l45_loop:
  i6 = _check_pointer(i0, 73159);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i4, (void*)(i6+(_check_index(i5, i7, OOC_UINT32, 73159))*4), (OOC_SymbolTable__Type)i1);
  dummy = i6;
  _assert(i6, 127, 73179);
  i5 = i5+1;
  i = i5;
  i6 = i5<i3;
  if (i6) goto l45_loop;
l51:
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Concat.baseTypes[0]);
  OOC_IR__InitConcat((OOC_IR__Concat)i3, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i1, (OOC_IR__ExpressionList)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73726)))), OOC_IR__VisitorDesc_VisitConcat)),OOC_IR__VisitorDesc_VisitConcat)((OOC_IR__Visitor)i0, (OOC_IR__Concat)i1);
  return;
  ;
}

static void OOC_IR__InitConstructor(OOC_IR__Constructor cons, OOC_Scanner_BasicList__Symbol sym, OOC_IR__NewObject alloc, OOC_IR__Call init) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)alloc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 74029))+4);
  i2 = (OOC_INT32)cons;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 74045))+8) = i0;
  i0 = (OOC_INT32)init;
  *(OOC_INT32*)((_check_pointer(i2, 74070))+12) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewConstructor(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression type, OOC_IR__ExpressionList arguments, OOC_SymbolTable__Item context, OOC_Scanner_BasicList__Symbol endOfArgsSym) {
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
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74635)))), &_td_OOC_IR__TypeRefDesc));
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74675)))), &_td_OOC_IR__TypeRefDesc, 74675)), 74683))+12);
  i2 = OOC_SymbolTable_TypeRules__IsRecordPointer((OOC_SymbolTable__Type)i2);
  i2 = !i2;
  
  goto l5;
l3:
  i2=1u;
l5:
  if (!i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 74748));
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74713)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 73, (OOC_Scanner_BasicList__Symbol)i2);
  return (OOC_IR__Expression)i2;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74785)))), &_td_OOC_IR__TypeRefDesc, 74785)), 74793))+12);
  consType = (OOC_SymbolTable__Type)i0;
  i2 = (OOC_INT32)OOC_SymbolTable_TypeRules__PointerBaseType((OOC_SymbolTable__Type)i0);
  ptr = (OOC_SymbolTable__Type)i2;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74871)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i2);
  qualRecord = (OOC_SymbolTable__Type)i3;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 74900)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  ptr = (OOC_SymbolTable__Type)i2;
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 74937)))), &_td_OOC_SymbolTable__RecordDesc, 74937);
  consClass = (OOC_SymbolTable__Record)i2;
  i4 = (OOC_INT32)sym;
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75005)))), OOC_IR__BuilderDesc_GetName2)),OOC_IR__BuilderDesc_GetName2)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i4, "INIT", 5);
  n = (OOC_SymbolTable__Name)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 75065))+48);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 75065))+48);
  i7 = (OOC_INT32)context;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 75068)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i5, 0u);
  initDecl = (OOC_SymbolTable__Declaration)i2;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 75123))+16);
  OOC_SymbolTable_Uses__Mark((OOC_SymbolTable__Declaration)i2, (OOC_SymbolTable_Uses__Uses)i6, (OOC_SymbolTable__Name)i5);
  init = (OOC_IR__Call)0;
  i5 = i2==0;
  if (i5) goto l10;
  i5 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 75189)))), &_td_OOC_SymbolTable__ProcDeclDesc));
  
  goto l12;
l10:
  i5=1u;
l12:
  if (i5) goto l18;
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75352)))), OOC_IR__BuilderDesc_NewNil)),OOC_IR__BuilderDesc_NewNil)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i4);
  pseudoDesign = (OOC_IR__Expression)i5;
  i2 = (OOC_INT32)OOC_IR__BuilderDesc_NewSelectProc((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i4, (OOC_IR__Expression)i5, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__ProcDecl)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 75486)))), &_td_OOC_SymbolTable__ProcDeclDesc, 75486)), (OOC_Scanner_BasicList__Symbol)i4, 1u);
  pseudoDesign = (OOC_IR__Expression)i2;
  i3 = (OOC_INT32)endOfArgsSym;
  i5 = (OOC_INT32)arguments;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75524)))), OOC_IR__BuilderDesc_NewCall)),OOC_IR__BuilderDesc_NewCall)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2, (OOC_IR__ExpressionList)i5, 0u, (OOC_SymbolTable__Item)i7, (OOC_Scanner_BasicList__Symbol)i3);
  expr = (OOC_IR__Expression)i2;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 75604)))), &_td_OOC_IR__CallDesc);
  if (i3) goto l16;
  i2=0;
  goto l22;
l16:
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 75639)))), &_td_OOC_IR__CallDesc, 75639);
  
  goto l22;
l18:
  i2 = (OOC_INT32)arguments;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 75234)), 0);
  i3 = i3!=0;
  if (!i3) goto l21;
  i2 = _check_pointer(i2, 75299);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 75299))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 75302));
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 75263)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 39, (OOC_Scanner_BasicList__Symbol)i2);
  return (OOC_IR__Expression)i2;
l21:
  i2=0;
l22:
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Constructor.baseTypes[0]);
  i0 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewNewObject((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i0, (OOC_IR__ExpressionList)0);
  OOC_IR__InitConstructor((OOC_IR__Constructor)i3, (OOC_Scanner_BasicList__Symbol)i4, (OOC_IR__NewObject)i0, (OOC_IR__Call)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76003)))), OOC_IR__VisitorDesc_VisitConstructor)),OOC_IR__VisitorDesc_VisitConstructor)((OOC_IR__Visitor)i0, (OOC_IR__Constructor)i1);
  return;
  ;
}

static void OOC_IR__InitDeref(OOC_IR__Deref d, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression pointer, OOC_CHAR8 checkPointer) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Type baseType;

  i0 = (OOC_INT32)pointer;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76358))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76358))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76363)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  baseType = (OOC_SymbolTable__Type)i1;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76399)))), OOC_SymbolTable__TypeDesc_Bound)),OOC_SymbolTable__TypeDesc_Bound)((OOC_SymbolTable__Type)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76438)))), &_td_OOC_SymbolTable__PointerDesc, 76438)), 76446))+36);
  baseType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76495))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76495))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 76500)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i1);
  i2 = (OOC_INT32)d;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 76526))+8) = i0;
  i0 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i2, 76553))+12) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewDeref(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SymbolTable__Record _class;
  OOC_SymbolTable__Type type;
  OOC_IR__Deref i;

  i0 = (OOC_INT32)design;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76769)))), &_td_OOC_IR__SelectProcDesc);
  if (i1) goto l7;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)b;
  OOC_IR__BuilderDesc_CheckFunctionOp((OOC_IR__Builder)i2, (OOC_IR__Expression)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77490))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77490))+4);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 77495)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i4);
  type = (OOC_SymbolTable__Type)i3;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 77522)))), OOC_SymbolTable__TypeDesc_Bound)),OOC_SymbolTable__TypeDesc_Bound)((OOC_SymbolTable__Type)i3);
  i3 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 77531)))), &_td_OOC_SymbolTable__PointerDesc));
  if (i3) goto l5;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Deref.baseTypes[0]);
  i = (OOC_IR__Deref)i3;
  i4 = *(OOC_INT32*)((_check_pointer(i1, 77729))+16);
  i5 = (OOC_INT32)OOC_Config_StdPragmas__derefCheck;
  i2 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i5, i4);
  OOC_IR__InitDeref((OOC_IR__Deref)i3, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i0, i2);
  return (OOC_IR__Expression)i3;
  goto l19;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 77595));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 77568)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i2, 21, (OOC_Scanner_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l19;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76847))+16);
  i1 = (OOC_INT32)OOC_SymbolTable__ProcDeclDesc_Class((OOC_SymbolTable__ProcDecl)i1);
  _class = (OOC_SymbolTable__Record)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 76893))+48);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76954))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 76961))+52);
  i1 = (OOC_INT32)OOC_SymbolTable_Namespace__ExtendedDesc_GetSuperProcByIndex((OOC_SymbolTable_Namespace__Extended)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76907)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 76907)), i2);
  *(OOC_INT32*)((_check_pointer(i0, 76876))+16) = i1;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 76991))+25);
  if (i1) goto l17;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77079))+16);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l15;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77193))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 77201))+60);
  *(OOC_INT32*)((_check_pointer(i0, 77177))+4) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 77229))+24) = 1u;
  *(OOC_UINT8*)((_check_pointer(i0, 77267))+25) = 1u;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77307))+16);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 77314))+46);
  if (!i1) goto l14;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77342)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 58, (OOC_Scanner_BasicList__Symbol)i2);
l14:
  return (OOC_IR__Expression)i0;
  goto l19;
l15:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77115)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 59, (OOC_Scanner_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l19;
l17:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77025)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 60, (OOC_Scanner_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
l19:
  _failed_function(76626); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77932)))), OOC_IR__VisitorDesc_VisitDeref)),OOC_IR__VisitorDesc_VisitDeref)((OOC_IR__Visitor)i0, (OOC_IR__Deref)i1);
  return;
  ;
}

static void OOC_IR__InitEntier(OOC_IR__Entier entier, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)entier;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i1, 78227))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewEntier(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Entier.baseTypes[0]);
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)expr;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertReal((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  OOC_IR__InitEntier((OOC_IR__Entier)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78629)))), OOC_IR__VisitorDesc_VisitEntier)),OOC_IR__VisitorDesc_VisitEntier)((OOC_IR__Visitor)i0, (OOC_IR__Entier)i1);
  return;
  ;
}

static void OOC_IR__InitIndex(OOC_IR__Index i, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression array, OOC_IR__Expression index, OOC_CHAR8 checkIndex) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Type elementType;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78988))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78988))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78993)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  elementType = (OOC_SymbolTable__Type)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79040)))), &_td_OOC_SymbolTable__ArrayDesc, 79040)), 79046))+40);
  elementType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79096))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79096))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 79101)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i1);
  i2 = (OOC_INT32)i;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 79130))+8) = i0;
  i0 = (OOC_INT32)index;
  *(OOC_INT32*)((_check_pointer(i2, 79152))+12) = i0;
  i0 = checkIndex;
  *(OOC_UINT8*)((_check_pointer(i2, 79174))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIndex(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression array, OOC_IR__Expression index) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_CHAR8 checkIndex;
  OOC_SymbolTable__Type type;
  OOC_SymbolTable__Array a;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 79477))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_StdPragmas__indexCheck;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  checkIndex = i1;
  i3 = (OOC_INT32)array;
  OOC_IR__BuilderDesc_CheckFunctionOp((OOC_IR__Builder)i2, (OOC_IR__Expression)i3, (OOC_Scanner_BasicList__Symbol)i0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 79542))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 79542))+4);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 79547)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i5);
  type = (OOC_SymbolTable__Type)i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 79572)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i5) goto l3;
  {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
  goto l4;
l3:
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 79609)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i3);
  array = (OOC_IR__Expression)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 79653))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 79653))+4);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 79658)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i5);
  type = (OOC_SymbolTable__Type)i4;
  {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
l4:
  i5 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 79693)))), &_td_OOC_SymbolTable__ArrayDesc));
  if (i5) goto l18;
  i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 79782)))), &_td_OOC_SymbolTable__ArrayDesc, 79782);
  a = (OOC_SymbolTable__Array)i3;
  if (i1) goto l9;
  i1=0u;
  goto l10;
l9:
  i1 = *(OOC_UINT8*)((_check_pointer(i3, 79824))+37);
  
l10:
  checkIndex = i1;
  i5 = (OOC_INT32)index;
  i5 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  index = (OOC_IR__Expression)i5;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 79894)))), &_td_OOC_IR__ConstDesc);
  if (!i6) goto l17;
  i6 = *(OOC_UINT8*)((_check_pointer(i3, 79920))+36);
  if (i6) goto l15;
  i3 = *(OOC_INT32*)((_check_pointer(i3, 80204))+48);
  i2 = OOC_IR__BuilderDesc_AssertIntConst((OOC_IR__Builder)i2, (OOC_IR__Expression)i5, 0, i3);
  goto l17;
l15:
  i2 = OOC_IR__BuilderDesc_AssertIntConst((OOC_IR__Builder)i2, (OOC_IR__Expression)i5, 0, 2147483647);
l17:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Index.baseTypes[0]);
  OOC_IR__InitIndex((OOC_IR__Index)i2, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i4, (OOC_IR__Expression)i5, i1);
  return (OOC_IR__Expression)i2;
  goto l19;
l18:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 79726)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i2, 15, (OOC_Scanner_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
l19:
  _failed_function(79242); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80486)))), OOC_IR__VisitorDesc_VisitIndex)),OOC_IR__VisitorDesc_VisitIndex)((OOC_IR__Visitor)i0, (OOC_IR__Index)i1);
  return;
  ;
}

static void OOC_IR__InitLen(OOC_IR__Len len, OOC_Scanner_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression array, OOC_IR__Expression arrayVariable, OOC_INT32 dim) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)len;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = variant;
  *(OOC_INT8*)((_check_pointer(i1, 80833))+8) = i0;
  i0 = (OOC_INT32)array;
  *(OOC_INT32*)((_check_pointer(i1, 80862))+12) = i0;
  i0 = (OOC_INT32)arrayVariable;
  *(OOC_INT32*)((_check_pointer(i1, 80887))+20) = i0;
  i0 = dim;
  *(OOC_INT32*)((_check_pointer(i1, 80928))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewLen(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression array, OOC_INT32 dim) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_IR__Len len;
  OOC_IR__Expression arrayVariable;
  OOC_SymbolTable__Type type;
  OOC_INT8 variant;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81206))+4);
  i1 = OOC_SymbolTable_TypeRules__IsArray((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81238))+4);
  i1 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 81280));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 81257)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 15, (OOC_Scanner_BasicList__Symbol)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 81301))+20);
  return (OOC_IR__Expression)i1;
l7:
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Len.baseTypes[0]);
  len = (OOC_IR__Len)i1;
  arrayVariable = (OOC_IR__Expression)i0;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81396)))), &_td_OOC_IR__IndexDesc);
  if (i2) goto l10;
  i2=i0;
  goto l16;
l10:
  i2=i0;
l11_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 81446)))), &_td_OOC_IR__IndexDesc, 81446)), 81452))+8);
  i3 = dim;
  arrayVariable = (OOC_IR__Expression)i2;
  dim = (i3+1);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 81396)))), &_td_OOC_IR__IndexDesc);
  if (i3) goto l11_loop;
l16:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 81513))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 81513))+4);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 81518)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i4);
  type = (OOC_SymbolTable__Type)i3;
  i4 = dim;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 81543)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i5) goto l31;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 81615)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i5) goto l21;
  i5=0u;
  goto l23;
l21:
  i5 = OOC_SymbolTable__ArrayDesc_GetOpenDimensions((OOC_SymbolTable__Array)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 81658)))), &_td_OOC_SymbolTable__ArrayDesc, 81658)));
  i5 = i4>=i5;
  
l23:
  if (i5) goto l29;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 81748)))), &_td_OOC_IR__VarDesc);
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
  i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 81943)))), &_td_OOC_SymbolTable__ArrayDesc, 81943)), 81949))+37);
  i3 = !i3;
  
l41:
  if (!i3) goto l43;
  i3 = (OOC_INT32)b;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 82013));
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 81983)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i3, 54, (OOC_Scanner_BasicList__Symbol)i6);
  return (OOC_IR__Expression)i3;
l43:
  i3 = (OOC_INT32)sym;
  OOC_IR__InitLen((OOC_IR__Len)i1, (OOC_Scanner_BasicList__Symbol)i3, i5, (OOC_IR__Expression)i0, (OOC_IR__Expression)i2, i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82254)))), OOC_IR__VisitorDesc_VisitLen)),OOC_IR__VisitorDesc_VisitLen)((OOC_IR__Visitor)i0, (OOC_IR__Len)i1);
  return;
  ;
}

static void OOC_IR__InitNegate(OOC_IR__Negate neg, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82499))+4);
  i2 = (OOC_INT32)neg;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 82515))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewNegate(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Negate.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)expr;
  OOC_IR__InitNegate((OOC_IR__Negate)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82884)))), OOC_IR__VisitorDesc_VisitNegate)),OOC_IR__VisitorDesc_VisitNegate)((OOC_IR__Visitor)i0, (OOC_IR__Negate)i1);
  return;
  ;
}

static void OOC_IR__InitNewBlock(OOC_IR__NewBlock _new, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression size) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)_new;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)size;
  *(OOC_INT32*)((_check_pointer(i0, 83188))+8) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewNewBlock(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression size) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__NewBlock.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)size;
  OOC_IR__InitNewBlock((OOC_IR__NewBlock)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83631)))), OOC_IR__VisitorDesc_VisitNewBlock)),OOC_IR__VisitorDesc_VisitNewBlock)((OOC_IR__Visitor)i0, (OOC_IR__NewBlock)i1);
  return;
  ;
}

static void OOC_IR__InitNewObject(OOC_IR__NewObject _new, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__ExpressionList length) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)_new;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)length;
  *(OOC_INT32*)((_check_pointer(i0, 83946))+8) = i1;
  return;
  ;
}

OOC_IR__NewObject OOC_IR__BuilderDesc_NewNewObject(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__ExpressionList args) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_IR__ExpressionList length;
  OOC_INT32 i;

  i0 = (OOC_INT32)args;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l11;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 84286)), 0);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], (i1-1));
  length = (OOC_IR__ExpressionList)i1;
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 84324)), 0);
  i3 = 0<i2;
  if (!i3) goto l10;
  i3 = (OOC_INT32)b;
  i4=0;
l5_loop:
  i5 = _check_pointer(i1, 84346);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = _check_pointer(i0, 84373);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i9 = i4+1;
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i9, i8, OOC_UINT32, 84373))*4);
  i7 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i3, (OOC_IR__Expression)i7);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 84346))*4) = i7;
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
  OOC_IR__InitNewObject((OOC_IR__NewObject)i3, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_IR__ExpressionList)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84655)))), OOC_IR__VisitorDesc_VisitNewObject)),OOC_IR__VisitorDesc_VisitNewObject)((OOC_IR__Visitor)i0, (OOC_IR__NewObject)i1);
  return;
  ;
}

static void OOC_IR__InitNot(OOC_IR__Not neg, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84897))+4);
  i2 = (OOC_INT32)neg;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 84913))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewNot(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Not.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)expr;
  OOC_IR__InitNot((OOC_IR__Not)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85255)))), OOC_IR__VisitorDesc_VisitNot)),OOC_IR__VisitorDesc_VisitNot)((OOC_IR__Visitor)i0, (OOC_IR__Not)i1);
  return;
  ;
}

static void OOC_IR__InitOdd(OOC_IR__Odd odd, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(0);
  i1 = (OOC_INT32)odd;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i1, 85528))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewOdd(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Odd.baseTypes[0]);
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)expr;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOdd((OOC_IR__Odd)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85888)))), OOC_IR__VisitorDesc_VisitOdd)),OOC_IR__VisitorDesc_VisitOdd)((OOC_IR__Visitor)i0, (OOC_IR__Odd)i1);
  return;
  ;
}

static void OOC_IR__InitSelectField(OOC_IR__SelectField sf, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression record, OOC_SymbolTable__FieldDecl field, OOC_Scanner_BasicList__Symbol fieldSym) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type recordType;
  OOC_SymbolTable__Type ptr;

  i0 = (OOC_INT32)record;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86302))+4);
  recordType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86330)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  i3 = (OOC_INT32)field;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 86348))+4);
  i2 = i2!=i4;
  if (!i2) goto l9;
l4_loop:
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86383)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  ptr = (OOC_SymbolTable__Type)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 86442)))), &_td_OOC_SymbolTable__RecordDesc, 86442)), 86449))+36);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86425)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i2);
  recordType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86330)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 86348))+4);
  i2 = i2!=i4;
  if (i2) goto l4_loop;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 86526))+44);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 86512)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)sf;
  i4 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 86541))+8) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 86566))+12) = i3;
  i0 = (OOC_INT32)fieldSym;
  *(OOC_INT32*)((_check_pointer(i2, 86589))+16) = i0;
  return;
  ;
}

OOC_IR__SelectField OOC_IR__BuilderDesc_NewSelectField(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression record, OOC_SymbolTable__FieldDecl field, OOC_Scanner_BasicList__Symbol fieldSym) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SelectField.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)record;
  i3 = (OOC_INT32)field;
  i4 = (OOC_INT32)fieldSym;
  OOC_IR__InitSelectField((OOC_IR__SelectField)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i2, (OOC_SymbolTable__FieldDecl)i3, (OOC_Scanner_BasicList__Symbol)i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87098)))), OOC_IR__VisitorDesc_VisitSelectField)),OOC_IR__VisitorDesc_VisitSelectField)((OOC_IR__Visitor)i0, (OOC_IR__SelectField)i1);
  return;
  ;
}

static void OOC_IR__InitSelectProc(OOC_IR__SelectProc sp, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression receiver, OOC_CHAR8 checkPointer, OOC_SymbolTable__Type recordType, OOC_SymbolTable__ProcDecl tbProc, OOC_Scanner_BasicList__Symbol tbProcSym, OOC_CHAR8 isStaticCall) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Type _class;
  OOC_SymbolTable__Type baseRecord;
  OOC_SymbolTable__Type ptr;

  i0 = (OOC_INT32)tbProc;
  i1 = (OOC_INT32)OOC_SymbolTable__ProcDeclDesc_Class((OOC_SymbolTable__ProcDecl)i0);
  _class = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)recordType;
  baseRecord = (OOC_SymbolTable__Type)i2;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 87702)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  i3 = i3!=i1;
  if (i3) goto l4_loop;
  i1=i2;
  goto l9;
l4_loop:
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 87748)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  ptr = (OOC_SymbolTable__Type)i3;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 87807)))), &_td_OOC_SymbolTable__RecordDesc, 87807)), 87814))+36);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 87790)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  baseRecord = (OOC_SymbolTable__Type)i2;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 87702)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  i3 = i3!=i1;
  if (i3) goto l4_loop;
l8:
  i1=i2;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87888))+60);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87873)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)sp;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)receiver;
  *(OOC_INT32*)((_check_pointer(i2, 87909))+8) = i1;
  i1 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i2, 87939))+12) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 87977))+16) = i0;
  i0 = (OOC_INT32)tbProcSym;
  *(OOC_INT32*)((_check_pointer(i2, 88003))+20) = i0;
  i0 = isStaticCall;
  *(OOC_UINT8*)((_check_pointer(i2, 88035))+24) = i0;
  *(OOC_UINT8*)((_check_pointer(i2, 88073))+25) = 0u;
  return;
  ;
}

OOC_IR__SelectProc OOC_IR__BuilderDesc_NewSelectProc(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression receiver, OOC_SymbolTable__Type recordType, OOC_SymbolTable__ProcDecl tbProc, OOC_Scanner_BasicList__Symbol tbProcSym, OOC_CHAR8 isStaticCall) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 88569))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_StdPragmas__derefCheck;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  i2 = (OOC_INT32)receiver;
  i3 = (OOC_INT32)recordType;
  i4 = (OOC_INT32)tbProc;
  i5 = (OOC_INT32)tbProcSym;
  i6 = isStaticCall;
  i7 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SelectProc.baseTypes[0]);
  OOC_IR__InitSelectProc((OOC_IR__SelectProc)i7, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i2, i1, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__ProcDecl)i4, (OOC_Scanner_BasicList__Symbol)i5, i6);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 88903)))), OOC_IR__VisitorDesc_VisitSelectProc)),OOC_IR__VisitorDesc_VisitSelectProc)((OOC_IR__Visitor)i0, (OOC_IR__SelectProc)i1);
  return;
  ;
}

static void OOC_IR__InitSetMember(OOC_IR__SetMember op, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression element, OOC_IR__Expression set) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(0);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)element;
  *(OOC_INT32*)((_check_pointer(i1, 89205))+8) = i0;
  i0 = (OOC_INT32)set;
  *(OOC_INT32*)((_check_pointer(i1, 89232))+12) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSetMember(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression element, OOC_IR__Expression set) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__SetMember op;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SetMember.baseTypes[0]);
  op = (OOC_IR__SetMember)i0;
  i1 = (OOC_INT32)set;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 89464))+4);
  i3 = (OOC_INT32)b;
  i4 = (OOC_INT32)element;
  i2 = (OOC_INT32)OOC_IR__BuilderDesc_ValidSetElement((OOC_IR__Builder)i3, (OOC_IR__Expression)i4, (OOC_SymbolTable__Type)i2);
  i3 = (OOC_INT32)sym;
  OOC_IR__InitSetMember((OOC_IR__SetMember)i0, (OOC_Scanner_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89664)))), OOC_IR__VisitorDesc_VisitSetMember)),OOC_IR__VisitorDesc_VisitSetMember)((OOC_IR__Visitor)i0, (OOC_IR__SetMember)i1);
  return;
  ;
}

static void OOC_IR__InitSetOp(OOC_IR__SetOp op, OOC_Scanner_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = variant;
  *(OOC_INT8*)((_check_pointer(i0, 89961))+8) = i1;
  i1 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i0, 89988))+12) = i1;
  i1 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i0, 90009))+16) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSetOp(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__SetOp op;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SetOp.baseTypes[0]);
  op = (OOC_IR__SetOp)i0;
  i1 = (OOC_INT32)left;
  i2 = (OOC_INT32)right;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 90218))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 90230))+4);
  i3 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i4);
  _assert(i3, 127, 90195);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 90289))+4);
  i4 = (OOC_INT32)sym;
  i5 = variant;
  OOC_IR__InitSetOp((OOC_IR__SetOp)i0, (OOC_Scanner_BasicList__Symbol)i4, i5, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, (OOC_SymbolTable__Type)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 90464)))), OOC_IR__VisitorDesc_VisitSetOp)),OOC_IR__VisitorDesc_VisitSetOp)((OOC_IR__Visitor)i0, (OOC_IR__SetOp)i1);
  return;
  ;
}

static void OOC_IR__InitSetRange(OOC_IR__SetRange range, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression from, OOC_IR__Expression to) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(10);
  i1 = (OOC_INT32)range;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)from;
  *(OOC_INT32*)((_check_pointer(i1, 90784))+8) = i0;
  i0 = (OOC_INT32)to;
  *(OOC_INT32*)((_check_pointer(i1, 90808))+12) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSetRange(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression from, OOC_IR__Expression to, OOC_CHAR8 isSet) {
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
  OOC_IR__InitSetRange((OOC_IR__SetRange)i1, (OOC_Scanner_BasicList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__Expression)i2);
  return (OOC_IR__Expression)i1;
  goto l12;
l11:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)Object_Boxed__NewSet(0u);
  i3 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91105)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
l12:
  _failed_function(90863); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91600)))), OOC_IR__VisitorDesc_VisitSetRange)),OOC_IR__VisitorDesc_VisitSetRange)((OOC_IR__Visitor)i0, (OOC_IR__SetRange)i1);
  return;
  ;
}

OOC_CHAR8 OOC_IR__SetRangeDesc_IsEmpty(OOC_IR__SetRange range) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)range;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 91760))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91767)))), &_td_OOC_IR__ConstDesc, 91767)), 91773))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 91760))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 91792))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 91767)))), &_td_OOC_IR__ConstDesc, 91767)), 91773))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91797)))), &_td_OOC_IR__ConstDesc, 91797)), 91803))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91780)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i2, (Object__Object)i0);
  return (i0>0);
  ;
}

OOC_CHAR8 OOC_IR__SetRangeDesc_IntersectsWith(OOC_IR__SetRange range, OOC_IR__SetRange range2) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)range;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92030))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92034)))), &_td_OOC_IR__ConstDesc, 92034)), 92040))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92030))+12);
  i3 = (OOC_INT32)range2;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 92059))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 92034)))), &_td_OOC_IR__ConstDesc, 92034)), 92040))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 92065)))), &_td_OOC_IR__ConstDesc, 92065)), 92071))+8);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92046)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i2, (Object__Object)i4);
  i1 = i1<0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92103))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92109)))), &_td_OOC_IR__ConstDesc, 92109)), 92115))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92103))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 92134))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 92109)))), &_td_OOC_IR__ConstDesc, 92109)), 92115))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 92138)))), &_td_OOC_IR__ConstDesc, 92138)), 92144))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92121)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i0, (Object__Object)i2);
  i0 = i0>0;
  
  goto l4;
l3:
  i0=1u;
l4:
  return (!i0);
  ;
}

static void OOC_IR__InitShift(OOC_IR__Shift shift, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression by, OOC_CHAR8 rotate) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)value;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92439))+4);
  i2 = (OOC_INT32)shift;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 92457))+8) = i0;
  i0 = (OOC_INT32)by;
  *(OOC_INT32*)((_check_pointer(i2, 92484))+12) = i0;
  i0 = rotate;
  *(OOC_UINT8*)((_check_pointer(i2, 92505))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewShift(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression by, OOC_CHAR8 rotate) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__Shift shift;
  auto OOC_IR__Expression OOC_IR__BuilderDesc_NewShift_AssertShiftable(OOC_IR__Expression expr);
    
    OOC_IR__Expression OOC_IR__BuilderDesc_NewShift_AssertShiftable(OOC_IR__Expression expr) {
      register OOC_INT32 i0,i1,i2,i3;
      Object_BigInt__BigInt v;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92824))+20);
      i2 = (OOC_INT32)expr;
      i1 = i2!=i1;
      if (!i1) goto l14;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 92875))+4);
      i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
      if (i1) goto l5;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 92916))+4);
      i1 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i1);
      
      goto l7;
l5:
      i1=1u;
l7:
      if (i1) goto l9;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 92959))+4);
      i1 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i1, 11);
      
      goto l10;
l9:
      i1=1u;
l10:
      i1 = !i1;
      if (!i1) goto l14;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 93023));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 92996)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 5, (OOC_Scanner_BasicList__Symbol)i1);
      i0 = (OOC_INT32)Object_BigInt__NewInt(1);
      v = (Object_BigInt__BigInt)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 93093));
      i3 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i0);
      i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i0);
      return (OOC_IR__Expression)i0;
l14:
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
  OOC_IR__InitShift((OOC_IR__Shift)i0, (OOC_Scanner_BasicList__Symbol)i3, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93498)))), OOC_IR__VisitorDesc_VisitShift)),OOC_IR__VisitorDesc_VisitShift)((OOC_IR__Visitor)i0, (OOC_IR__Shift)i1);
  return;
  ;
}

static void OOC_IR__InitTypeCast(OOC_IR__TypeCast cast, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)cast;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 93803))+8) = i1;
  return;
  ;
}

OOC_IR__TypeCast OOC_IR__BuilderDesc_NewTypeCast(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression typeExpr, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)typeExpr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94031)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  type = (OOC_SymbolTable__Type)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 94066))+28);
  i2 = i2<0;
  if (i2) goto l3;
  i2 = (OOC_INT32)expr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 94085))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 94090))+28);
  i2 = i2<0;
  
  goto l4;
l3:
  i2=1u;
l4:
  i3 = (OOC_INT32)expr;
  if (i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 94128))+4);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 94116))+28);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 94133))+28);
  i2 = i4!=i2;
  
  goto l9;
l7:
  i2=1u;
l9:
  if (!i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 94184));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94152)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 52, (OOC_Scanner_BasicList__Symbol)i2);
l11:
  i0 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeCast.baseTypes[0]);
  OOC_IR__InitTypeCast((OOC_IR__TypeCast)i2, (OOC_Scanner_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1, (OOC_IR__Expression)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94445)))), OOC_IR__VisitorDesc_VisitTypeCast)),OOC_IR__VisitorDesc_VisitTypeCast)((OOC_IR__Visitor)i0, (OOC_IR__TypeCast)i1);
  return;
  ;
}

static void OOC_IR__InitTypeConv(OOC_IR__TypeConv conv, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)conv;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 94752))+8) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeConv(OOC_IR__Builder b, OOC_SymbolTable__Type type, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__TypeConv conv;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 94919))+4);
  i2 = (OOC_INT32)type;
  i1 = i1==i2;
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95034)))), &_td_OOC_IR__TypeConvDesc);
  if (i1) goto l5;
  i1=0u;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 95075))+4);
  i1 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
  
l7:
  if (!i1) goto l10;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95142)))), &_td_OOC_IR__TypeConvDesc, 95142)), 95151))+8);
  expr = (OOC_IR__Expression)i0;
  
l10:
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeConv.baseTypes[0]);
  conv = (OOC_IR__TypeConv)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 95217));
  OOC_IR__InitTypeConv((OOC_IR__TypeConv)i1, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i0);
  return (OOC_IR__Expression)i1;
  goto l12;
l11:
  return (OOC_IR__Expression)i0;
l12:
  _failed_function(94813); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95434)))), OOC_IR__VisitorDesc_VisitTypeConv)),OOC_IR__VisitorDesc_VisitTypeConv)((OOC_IR__Visitor)i0, (OOC_IR__TypeConv)i1);
  return;
  ;
}

OOC_CHAR8 OOC_IR__BuilderDesc_Widen(OOC_IR__Builder b, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 96918))+4);
  i2 = (OOC_INT32)type;
  _assert((i1!=(OOC_INT32)0), 127, 96906);
  _assert((i2!=(OOC_INT32)0), 127, 96936);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 96991))+4);
  i0 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  if (i0) goto l79;
  i0 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97110))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 97117)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l73;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97447))+4);
  i0 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  if (i0) goto l71;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97696))+4);
  i0 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i2);
  if (i0) goto l69;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97858))+4);
  i0 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i0, 16);
  if (i0) goto l11;
  i0=0u;
  goto l13;
l11:
  i0 = OOC_SymbolTable_TypeRules__IsNilCompatible((OOC_SymbolTable__Type)i2);
  
l13:
  if (i0) goto l67;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98046))+4);
  i0 = OOC_SymbolTable_TypeRules__IsPointer((OOC_SymbolTable__Type)i0);
  if (i0) goto l17;
  i0=0u;
  goto l19;
l17:
  i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i2, 12);
  
l19:
  if (i0) goto l65;
  i0 = (OOC_INT32)*expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 98183)))), &_td_OOC_IR__ConstDesc);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98263))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l29:
  if (i0) goto l31;
  i0=0u;
  goto l33;
l31:
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 98378))+4);
  i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i1);
  i0 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  
l33:
  if (i0) goto l63;
  i0 = (OOC_INT32)*expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 98544)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l37;
  i0=0u;
  goto l39;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98588))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l39:
  if (i0) goto l41;
  i0=0u;
  goto l43;
l41:
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 98621)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l43:
  if (i0) goto l45;
  i0=0u;
  goto l47;
l45:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 98671)))), &_td_OOC_SymbolTable__ArrayDesc, 98671)), 98677))+40);
  i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
  
l47:
  if (i0) goto l61;
  i0 = (OOC_INT32)*expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 98850)))), &_td_OOC_IR__ConstDesc);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98923))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l57:
  if (i0) goto l59;
  return 0u;
  goto l80;
l59:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99038))+32);
  i2 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i1, (OOC_IR__Expression)i2);
  *expr = (OOC_IR__Expression)i0;
  return 1u;
  goto l80;
l61:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 98810)))), &_td_OOC_SymbolTable__ArrayDesc, 98810)), 98816))+40);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i0);
  i1 = (OOC_INT32)b;
  i0 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i1, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i0);
  return i0;
  goto l80;
l63:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 98470)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  *expr = (OOC_IR__Expression)i0;
  return 1u;
  goto l80;
l65:
  return 1u;
  goto l80;
l67:
  return 1u;
  goto l80;
l69:
  return 1u;
  goto l80;
l71:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 97601)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  *expr = (OOC_IR__Expression)i0;
  return 1u;
  goto l80;
l73:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 97266)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l76;
  i0=0u;
  goto l77;
l76:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97378))+4);
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__Type)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 97328)))), &_td_OOC_SymbolTable__FormalParsDesc, 97328)), (OOC_SymbolTable__FormalPars)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 97389)))), &_td_OOC_SymbolTable__FormalParsDesc, 97389)), 0u);
  
l77:
  return i0;
  goto l80;
l79:
  return 1u;
l80:
  _failed_function(95495); return 0;
  ;
}

OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign(OOC_IR__Builder b, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;
  OOC_IR__Expression oldExpr;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign_LengthOk(void);
    
    OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign_LengthOk(void) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)*expr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99662))+4);
      i1 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i1);
      if (i1) goto l3;
      return 1u;
      goto l8;
l3:
      i1 = (OOC_INT32)type;
      i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 99695)))), &_td_OOC_SymbolTable__ArrayDesc, 99695)), 99701))+36);
      if (i2) goto l6;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 99780)))), &_td_OOC_IR__ConstDesc, 99780)), 99786))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 99800)))), &_td_Object_Boxed__StringDesc, 99800)), 99807));
      i0 = *(OOC_INT32*)(_check_pointer(i0, 99814));
      i1 = *(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 99852)))), &_td_OOC_SymbolTable__ArrayDesc, 99852)), 99858))+48);
      return (i0<i1);
      goto l8;
l6:
      return 0u;
l8:
      _failed_function(99599); return 0;
      ;
    }


  i0 = (OOC_INT32)*expr;
  oldExpr = (OOC_IR__Expression)i0;
  i1 = (OOC_INT32)type;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 99988)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i2) goto l3;
  i2=0u;
  goto l9;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100027))+4);
  i2 = i1==i2;
  if (i2) goto l6;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100055))+4);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100318))+4);
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
  _failed_function(99159); return 0;
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
      _failed_function(101061); return 0;
      ;
    }


  i0 = (OOC_INT32)*right;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101596))+4);
  i1 = (OOC_INT32)b;
  i0 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i1, (void*)(OOC_INT32)left, (OOC_SymbolTable__Type)i0);
  if (i0) goto l3;
  i0 = (OOC_INT32)*left;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101625))+4);
  i0 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i1, (void*)(OOC_INT32)right, (OOC_SymbolTable__Type)i0);
  
  goto l5;
l3:
  i0=1u;
l5:
  if (i0) goto l21;
  i0 = (OOC_INT32)*left;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 101668)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l9;
  i1=0u;
  goto l11;
l9:
  i1 = (OOC_INT32)*right;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 101687)))), &_td_OOC_IR__ConstDesc);
  
l11:
  if (!i1) goto l22;
  i1 = (OOC_INT32)*right;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101729))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101741))+4);
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
  _assert(i0, 127, 101834);
  return 1u;
  goto l22;
l21:
  return 1u;
l22:
  return 0u;
  ;
}

static void OOC_IR__MakeAssignmentCompatible(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)type;
  i2 = OOC_IR__BuilderDesc_WidenForAssign((OOC_IR__Builder)i0, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i1);
  i2 = !i2;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102355))+20);
  i3 = (OOC_INT32)*expr;
  i2 = i3!=i2;
  
l5:
  if (!i2) goto l7;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 102379)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 24, (OOC_Scanner_BasicList__Symbol)i2);
  OOC_IR__BuilderDesc_SetNameToType((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i1);
l7:
  return;
  ;
}

static void OOC_IR__InitTypeTag(OOC_IR__TypeTag tag, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)tag;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)design;
  *(OOC_INT32*)((_check_pointer(i1, 102742))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeTag(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)design;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102933))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 102933))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 102938)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  type = (OOC_SymbolTable__Type)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 102964)))), &_td_OOC_SymbolTable__RecordDesc));
  if (i2) goto l3;
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 102992)))), &_td_OOC_SymbolTable__RecordDesc, 102992)), 102999))+34);
  i1 = !i1;
  
  goto l5;
l3:
  i1=1u;
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 103051));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 103026)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 55, (OOC_Scanner_BasicList__Symbol)i2);
l7:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeTag.baseTypes[0]);
  OOC_IR__InitTypeTag((OOC_IR__TypeTag)i2, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 103303)))), OOC_IR__VisitorDesc_VisitTypeTag)),OOC_IR__VisitorDesc_VisitTypeTag)((OOC_IR__Visitor)i0, (OOC_IR__TypeTag)i1);
  return;
  ;
}

static void OOC_IR__InitTypeTest(OOC_IR__TypeTest test, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression expr, OOC_SymbolTable__Type referenceType, OOC_CHAR8 checkPointer, OOC_IR__Expression origExpr, OOC_IR__TypeRef origType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(0);
  i1 = (OOC_INT32)test;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i1, 103758))+8) = i0;
  i0 = (OOC_INT32)referenceType;
  *(OOC_INT32*)((_check_pointer(i1, 103782))+12) = i0;
  i0 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i1, 103824))+16) = i0;
  i0 = (OOC_INT32)origExpr;
  *(OOC_INT32*)((_check_pointer(i1, 103864))+20) = i0;
  i0 = (OOC_INT32)origType;
  *(OOC_INT32*)((_check_pointer(i1, 103896))+24) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeTest(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression expr, OOC_IR__Expression referenceType) {
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 104276))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 104276))+4);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 104281)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
      type = (OOC_SymbolTable__Type)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 104308)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i2) goto l15;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 104481)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i0) goto l9;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 104570)))), &_td_OOC_SymbolTable__TypeVarDesc);
      if (i0) goto l7;
      return 0u;
      goto l24;
l7:
      return 1u;
      goto l24;
l9:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 104529))+36);
      i0 = OOC_SymbolTable_TypeRules__IsRecord((OOC_SymbolTable__Type)i0);
      if (i0) goto l12;
      i0=0u;
      goto l13;
l12:
      i0 = *(OOC_UINT8*)((_check_pointer(i1, 104547))+45);
      i0 = !i0;
      
l13:
      return i0;
      goto l24;
l15:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104346)))), &_td_OOC_IR__VarDesc));
      if (i1) goto l22;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104375)))), &_td_OOC_IR__VarDesc, 104375)), 104379))+8);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 104389)))), &_td_OOC_SymbolTable__VarDeclDesc, 104389)), 104397))+55);
      if (i1) goto l20;
      i0=0u;
      goto l23;
l20:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104429)))), &_td_OOC_IR__VarDesc, 104429)), 104433))+8);
      i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104443)))), &_td_OOC_SymbolTable__VarDeclDesc, 104443)), 104451))+60);
      
      goto l23;
l22:
      i0=1u;
l23:
      return i0;
l24:
      _failed_function(104174); return 0;
      ;
    }


  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)referenceType;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104755)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  refType = (OOC_SymbolTable__Type)i2;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l34;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 104859)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i3) goto l32;
  i2 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i2);
  i3 = (OOC_INT32)expr;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 105000))+4);
  i2 = OOC_SymbolTable_TypeRules__IsInducedExtensionOf((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i4, 1u);
  i2 = !i2;
  if (i2) goto l30;
  i0 = OOC_IR__BuilderDesc_NewTypeTest_HasDynamicType((OOC_IR__Expression)i3);
  i0 = !i0;
  if (i0) goto l28;
  i0 = (OOC_INT32)refType;
  i1 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i0);
  i2 = (OOC_INT32)expr;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 105443))+4);
  i1 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i3);
  if (!i1) goto l11;
  i1 = (OOC_INT32)referenceType;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 105505));
  i3 = (OOC_INT32)b;
  OOC_IR__BuilderDesc_WarnSym((OOC_IR__Builder)i3, 61, (OOC_Scanner_BasicList__Symbol)i1);
l11:
  origExpr = (OOC_IR__Expression)i2;
  i1 = (OOC_INT32)sym;
  i3 = *(OOC_INT32*)((_check_pointer(i1, 105621))+16);
  i4 = (OOC_INT32)OOC_Config_StdPragmas__derefCheck;
  i5 = (OOC_INT32)b;
  i3 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i5, (Config_Section_Options__Option)i4, i3);
  checkPointer = i3;
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 105644)))), &_td_OOC_IR__DerefDesc);
  if (i4) goto l22;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 105714))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 105720)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i4) goto l16;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 105744))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 105750)))), &_td_OOC_SymbolTable__TypeVarDesc);
  
  goto l18;
l16:
  i4=1u;
l18:
  if (!i4) goto l21;
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__PointerBaseType((OOC_SymbolTable__Type)i0);
  refType = (OOC_SymbolTable__Type)i0;
  
l21:
  i4=i0;i0=i2;
  goto l23;
l22:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 105680)))), &_td_OOC_IR__DerefDesc, 105680)), 105686))+8);
  expr = (OOC_IR__Expression)i4;
  {register OOC_INT32 h0=i0;i0=i4;i4=h0;}
l23:
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeTest.baseTypes[0]);
  test = (OOC_IR__TypeTest)i5;
  i6 = (OOC_INT32)referenceType;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 105872)))), &_td_OOC_IR__TypeRefDesc);
  if (i7) goto l26;
  i6=(OOC_INT32)0;
  goto l27;
l26:
  i6 = _type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 105922)))), &_td_OOC_IR__TypeRefDesc, 105922);
  
l27:
  OOC_IR__InitTypeTest((OOC_IR__TypeTest)i5, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i0, (OOC_SymbolTable__Type)i4, i3, (OOC_IR__Expression)i2, (OOC_IR__TypeRef)i6);
  return (OOC_IR__Expression)i5;
  goto l35;
l28:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 105381));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105351)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 43, (OOC_Scanner_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l35;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 105075));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105032)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 17, (OOC_Scanner_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l35;
l32:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 104933));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104894)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 67, (OOC_Scanner_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l35;
l34:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 104827))+20);
  return (OOC_IR__Expression)i0;
l35:
  _failed_function(103964); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106256)))), OOC_IR__VisitorDesc_VisitTypeTest)),OOC_IR__VisitorDesc_VisitTypeTest)((OOC_IR__Visitor)i0, (OOC_IR__TypeTest)i1);
  return;
  ;
}

static void OOC_IR__InitTypeGuard(OOC_IR__TypeGuard guard, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__TypeTest test, OOC_CHAR8 checkPointer, OOC_CHAR8 checkType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)guard;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)test;
  *(OOC_INT32*)((_check_pointer(i0, 106630))+8) = i1;
  i1 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i0, 106655))+12) = i1;
  i1 = checkType;
  *(OOC_UINT8*)((_check_pointer(i0, 106696))+13) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeGuard(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression design, OOC_IR__TypeRef ref) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SymbolTable__Type guardType;
  OOC_IR__Expression test;
  OOC_IR__TypeGuard guard;

  i0 = (OOC_INT32)ref;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106973))+12);
  guardType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)design;
  i4 = (OOC_INT32)sym;
  OOC_IR__BuilderDesc_CheckFunctionOp((OOC_IR__Builder)i2, (OOC_IR__Expression)i3, (OOC_Scanner_BasicList__Symbol)i4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 107029)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i4, (OOC_IR__Expression)i3, (OOC_IR__Expression)i0);
  test = (OOC_IR__Expression)i0;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107071)))), &_td_OOC_IR__TypeTestDesc);
  if (i3) goto l3;
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeGuard.baseTypes[0]);
  guard = (OOC_IR__TypeGuard)i3;
  i1 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i1);
  i5 = *(OOC_INT32*)((_check_pointer(i4, 107235))+16);
  i6 = (OOC_INT32)OOC_Config_StdPragmas__derefCheck;
  i5 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i6, i5);
  i6 = *(OOC_INT32*)((_check_pointer(i4, 107303))+16);
  i7 = (OOC_INT32)OOC_Config_StdPragmas__typeGuard;
  i2 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i7, i6);
  OOC_IR__InitTypeGuard((OOC_IR__TypeGuard)i3, (OOC_Scanner_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i1, (OOC_IR__TypeTest)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107162)))), &_td_OOC_IR__TypeTestDesc, 107162)), i5, i2);
  return (OOC_IR__Expression)i3;
l4:
  _failed_function(106768); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107534)))), OOC_IR__VisitorDesc_VisitTypeGuard)),OOC_IR__VisitorDesc_VisitTypeGuard)((OOC_IR__Visitor)i0, (OOC_IR__TypeGuard)i1);
  return;
  ;
}

static void OOC_IR__InitReference(OOC_IR__Reference ref, OOC_Scanner_BasicList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)ref;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  OOC_IR__InitExpression((OOC_IR__Expression)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i0, 107858))+8) = i1;
  return;
  ;
}

static void OOC_IR__InitModuleRef(OOC_IR__ModuleRef modRef, OOC_Scanner_BasicList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__Module decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)modRef;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitReference((OOC_IR__Reference)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Declaration)i3);
  return;
  ;
}

OOC_IR__ModuleRef OOC_IR__BuilderDesc_NewModuleRef(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol name, OOC_SymbolTable__Module decl) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__ModuleRef modRef;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ModuleRef.baseTypes[0]);
  modRef = (OOC_IR__ModuleRef)i0;
  i1 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 108371))+28);
  i2 = (OOC_INT32)name;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitModuleRef((OOC_IR__ModuleRef)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Module)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108590)))), OOC_IR__VisitorDesc_VisitModuleRef)),OOC_IR__VisitorDesc_VisitModuleRef)((OOC_IR__Visitor)i0, (OOC_IR__ModuleRef)i1);
  return;
  ;
}

static void OOC_IR__InitPredefProc(OOC_IR__PredefProc pproc, OOC_Scanner_BasicList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__PredefProc decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)pproc;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitReference((OOC_IR__Reference)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Declaration)i3);
  return;
  ;
}

static OOC_IR__PredefProc OOC_IR__NewPredefProc(OOC_Scanner_BasicList__Symbol name, OOC_SymbolTable__PredefProc decl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__PredefProc.baseTypes[0]);
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)decl;
  OOC_IR__InitPredefProc((OOC_IR__PredefProc)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)(OOC_INT32)0, (OOC_SymbolTable__PredefProc)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109316)))), OOC_IR__VisitorDesc_VisitPredefProc)),OOC_IR__VisitorDesc_VisitPredefProc)((OOC_IR__Visitor)i0, (OOC_IR__PredefProc)i1);
  return;
  ;
}

static void OOC_IR__InitProcedureRef(OOC_IR__ProcedureRef procRef, OOC_Scanner_BasicList__Symbol name, OOC_SymbolTable__ProcDecl decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109603))+60);
  i2 = (OOC_INT32)procRef;
  i3 = (OOC_INT32)name;
  OOC_IR__InitReference((OOC_IR__Reference)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Declaration)i0);
  return;
  ;
}

static OOC_IR__ProcedureRef OOC_IR__NewProcedureRef(OOC_Scanner_BasicList__Symbol name, OOC_SymbolTable__ProcDecl decl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ProcedureRef.baseTypes[0]);
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)decl;
  OOC_IR__InitProcedureRef((OOC_IR__ProcedureRef)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__ProcDecl)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110045)))), OOC_IR__VisitorDesc_VisitProcedureRef)),OOC_IR__VisitorDesc_VisitProcedureRef)((OOC_IR__Visitor)i0, (OOC_IR__ProcedureRef)i1);
  return;
  ;
}

static void OOC_IR__InitTypeRef(OOC_IR__TypeRef typeRef, OOC_Scanner_BasicList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__TypeDecl decl, OOC_SymbolTable__Type qualType) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)typeRef;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitReference((OOC_IR__Reference)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Declaration)i3);
  i1 = (OOC_INT32)qualType;
  *(OOC_INT32*)((_check_pointer(i0, 110399))+12) = i1;
  return;
  ;
}

OOC_IR__TypeRef OOC_IR__BuilderDesc_NewTypeRef(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol name, OOC_SymbolTable__TypeDecl decl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_SymbolTable__Type qualType;
  OOC_SymbolTable__TypeRefArray arguments;
  OOC_INT32 i;
  OOC_IR__TypeRef typeRef;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 110650))+44);
  qualType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 110673))+24);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 110703)))), &_td_OOC_SymbolTable__TypeVarDesc));
  
l5:
  if (!i2) goto l16;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 110827))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 110836))+16);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 110843)), 0);
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], i2);
  arguments = (OOC_SymbolTable__TypeRefArray)i2;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 110881)), 0);
  i4 = 0<i3;
  if (!i4) goto l15;
  i4 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i5=0;
l10_loop:
  i6 = _check_pointer(i2, 110922);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = OOC_ARRAY_LENGTH((_check_pointer(i2, 110922)), 0);
  i8 = _check_index(i5, i8, OOC_UINT32, 110922);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 110935))+24);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 110944))+16);
  i8 = _check_pointer(i8, 110951);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 110951))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 110954))+36);
  OOC_SymbolTable__InitTypeRef((void*)(i6+(_check_index(i5, i7, OOC_UINT32, 110922))*8), (RT0__Struct)i4, (OOC_SymbolTable__Type)i8);
  i5 = i5+1;
  i = i5;
  i6 = i5<i3;
  if (i6) goto l10_loop;
l15:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 111021))+16);
  i1 = (OOC_INT32)OOC_SymbolTable__NewQualType((OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Position)i3, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__TypeRefArray)i2);
  qualType = (OOC_SymbolTable__Type)i1;
  
l16:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeRef.baseTypes[0]);
  typeRef = (OOC_IR__TypeRef)i2;
  i3 = (OOC_INT32)b;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 111152))+24);
  i4 = (OOC_INT32)name;
  OOC_IR__InitTypeRef((OOC_IR__TypeRef)i2, (OOC_Scanner_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__TypeDecl)i0, (OOC_SymbolTable__Type)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111371)))), OOC_IR__VisitorDesc_VisitTypeRef)),OOC_IR__VisitorDesc_VisitTypeRef)((OOC_IR__Visitor)i0, (OOC_IR__TypeRef)i1);
  return;
  ;
}

static void OOC_IR__InitVar(OOC_IR__Var var, OOC_Scanner_BasicList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__VarDecl decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitReference((OOC_IR__Reference)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Declaration)i3);
  return;
  ;
}

OOC_IR__Var OOC_IR__BuilderDesc_NewVar(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol name, OOC_SymbolTable__VarDecl decl) {
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
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 111937))+53);
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 111956))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 111961))+24);
  i2 = i2!=(OOC_INT32)0;
  
l5:
  if (i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 113583))+44);
  i2 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i2);
  
  goto l53;
l7:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 112228))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 112233))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 112242))+16);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 112249)), 0);
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], i2);
  args = (OOC_SymbolTable__TypeRefArray)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 112268))+44);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 112274)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i3) goto l10;
  i3=0u;
  goto l12;
l10:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 112306))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 112316)))), &_td_OOC_SymbolTable__PointerDesc, 112316)), 112324))+36);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 112334)))), &_td_OOC_SymbolTable__QualTypeDesc);
  
l12:
  if (i3) goto l22;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 113281))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 113286))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 113295))+16);
  params = (OOC_SymbolTable__TypeVarArray)i3;
  i = 0;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 113334)), 0);
  i5 = 0<i4;
  if (!i5) goto l52;
  i5 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i6=0;
l16_loop:
  i7 = _check_pointer(i2, 113372);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i9 = OOC_ARRAY_LENGTH((_check_pointer(i2, 113372)), 0);
  i9 = _check_index(i6, i9, OOC_UINT32, 113372);
  i9 = _check_pointer(i3, 113383);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i6, i10, OOC_UINT32, 113383))*4);
  OOC_SymbolTable__InitTypeRef((void*)(i7+(_check_index(i6, i8, OOC_UINT32, 113372))*8), (RT0__Struct)i5, (OOC_SymbolTable__Type)i9);
  i6 = i6+1;
  i = i6;
  i7 = i6<i4;
  if (i7) goto l16_loop;
  goto l52;
l22:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 112672))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 112682)))), &_td_OOC_SymbolTable__PointerDesc, 112682)), 112690))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 112717)))), &_td_OOC_SymbolTable__QualTypeDesc, 112717)), 112726))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 112740)))), &_td_OOC_SymbolTable__RecordDesc, 112740)), 112747))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 112756))+16);
  params = (OOC_SymbolTable__TypeVarArray)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 112791))+44);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 112801)))), &_td_OOC_SymbolTable__PointerDesc, 112801)), 112809))+36);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 112823)))), &_td_OOC_SymbolTable__QualTypeDesc, 112823)), 112832))+44);
  recordArgs = (OOC_SymbolTable__TypeRefArray)i4;
  i = 0;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i2, 112874)), 0);
  i6 = 0<i5;
  if (!i6) goto l52;
  i6 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i7=0;
l25_loop:
  j = 0;
  i8 = OOC_ARRAY_LENGTH((_check_pointer(i4, 112935)), 0);
  i8 = 0!=i8;
  if (i8) goto l28;
  i8=0u;
  goto l30;
l28:
  i8 = _check_pointer(i4, 112968);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 112983))+44);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 112988))+24);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 112997))+16);
  i10 = _check_pointer(i10, 113004);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(0, i9, OOC_UINT32, 112968))*8);
  i9 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i7, i11, OOC_UINT32, 113004))*4);
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
  i9 = OOC_ARRAY_LENGTH((_check_pointer(i4, 112935)), 0);
  i9 = i8!=i9;
  if (i9) goto l36;
  i9=0u;
  goto l38;
l36:
  i9 = _check_pointer(i4, 112968);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 112983))+44);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 112988))+24);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 112997))+16);
  i11 = _check_pointer(i11, 113004);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i8, i10, OOC_UINT32, 112968))*8);
  i10 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i7, i12, OOC_UINT32, 113004))*4);
  i9 = i9!=i10;
  
l38:
  if (i9) goto l33_loop;
l42:
  i9 = OOC_ARRAY_LENGTH((_check_pointer(i4, 113079)), 0);
  i9 = i8==i9;
  if (i9) goto l45;
  i9 = _check_pointer(i2, 113203);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i11 = OOC_ARRAY_LENGTH((_check_pointer(i2, 113203)), 0);
  i11 = _check_index(i7, i11, OOC_UINT32, 113203);
  i11 = _check_pointer(i3, 113214);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i8, i12, OOC_UINT32, 113214))*4);
  OOC_SymbolTable__InitTypeRef((void*)(i9+(_check_index(i7, i10, OOC_UINT32, 113203))*8), (RT0__Struct)i6, (OOC_SymbolTable__Type)i8);
  goto l46;
l45:
  i8 = _check_pointer(i2, 113120);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i10 = OOC_ARRAY_LENGTH((_check_pointer(i2, 113120)), 0);
  i10 = _check_index(i7, i10, OOC_UINT32, 113120);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 113129))+44);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 113134))+24);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 113143))+16);
  i10 = _check_pointer(i10, 113150);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i7, i11, OOC_UINT32, 113150))*4);
  OOC_SymbolTable__InitTypeRef((void*)(i8+(_check_index(i7, i9, OOC_UINT32, 113120))*8), (RT0__Struct)i6, (OOC_SymbolTable__Type)i10);
l46:
  i7 = i7+1;
  i = i7;
  i8 = i7<i5;
  if (i8) goto l25_loop;
l52:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 113451))+44);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 113515))+44);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 113520))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 113456))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 113471))+44);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 113529))+16);
  i2 = (OOC_INT32)OOC_SymbolTable__NewTypeClosure((OOC_SymbolTable__Position)i3, (OOC_SymbolTable__Type)i5, (OOC_SymbolTable__TypeVarArray)i4, (OOC_SymbolTable__TypeRefArray)i2);
  
l53:
  i2 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i2);
  i3 = (OOC_INT32)name;
  OOC_IR__InitVar((OOC_IR__Var)i0, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__VarDecl)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 113808)))), OOC_IR__VisitorDesc_VisitVar)),OOC_IR__VisitorDesc_VisitVar)((OOC_IR__Visitor)i0, (OOC_IR__Var)i1);
  return;
  ;
}

void OOC_IR__InitStatement(OOC_IR__Statement statm, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(17);
  i1 = (OOC_INT32)statm;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitExpression((OOC_IR__Expression)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  return;
  ;
}

static void OOC_IR__InitAssert(OOC_IR__Assert assert, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression predicate, OOC_INT32 code, OOC_CHAR8 disabled) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)assert;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)predicate;
  *(OOC_INT32*)((_check_pointer(i0, 114391))+8) = i1;
  i1 = code;
  *(OOC_INT32*)((_check_pointer(i0, 114427))+12) = i1;
  i1 = disabled;
  *(OOC_UINT8*)((_check_pointer(i0, 114453))+16) = i1;
  return;
  ;
}

OOC_IR__Assert OOC_IR__BuilderDesc_NewAssert(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression predicate, OOC_IR__Expression code, OOC_CHAR8 disabled) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__Assert assert;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Assert.baseTypes[0]);
  assert = (OOC_IR__Assert)i0;
  i1 = (OOC_INT32)predicate;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l4;
  i2 = (OOC_INT32)b;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 114752)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1);
  
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
  OOC_IR__InitAssert((OOC_IR__Assert)i0, (OOC_Scanner_BasicList__Symbol)i3, (OOC_IR__Expression)i1, i2, i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 115180)))), OOC_IR__VisitorDesc_VisitAssert)),OOC_IR__VisitorDesc_VisitAssert)((OOC_IR__Visitor)i0, (OOC_IR__Assert)i1);
  return;
  ;
}

void OOC_IR__InitAssignment(OOC_IR__Assignment assignment, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression variable, OOC_IR__Expression value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)assignment;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)variable;
  *(OOC_INT32*)((_check_pointer(i0, 115509))+8) = i1;
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 115547))+12) = i1;
  return;
  ;
}

void OOC_IR__BuilderDesc_AssertVar(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 115675));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115688))+4);
  i2 = OOC_SymbolTable_TypeRules__IsReadOnlyType((OOC_SymbolTable__Module)i2, (OOC_SymbolTable__Type)i3);
  if (i2) goto l36;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 115771)))), &_td_OOC_IR__VarDesc);
  if (i2) goto l23;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 116041)))), &_td_OOC_IR__DerefDesc);
  if (i2) goto l37;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 116121)))), &_td_OOC_IR__IndexDesc);
  if (i2) goto l20;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 116217)))), &_td_OOC_IR__SelectFieldDesc);
  if (i2) goto l15;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 116443)))), &_td_OOC_IR__TypeGuardDesc);
  if (i2) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 116580));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 116553)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 29, (OOC_Scanner_BasicList__Symbol)i1);
  goto l37;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 116483))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 116489))+8);
  OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  goto l37;
l15:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 116260))+8);
  OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i0, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 116348))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 116334));
  i2 = OOC_SymbolTable_TypeRules__IsReadOnly((OOC_SymbolTable__Module)i3, (OOC_SymbolTable__Declaration)i2);
  if (!i2) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 116405))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 116373)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_BasicList__Symbol)i1);
  goto l37;
l20:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 116158))+8);
  OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  goto l37;
l23:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115821))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 115807));
  i2 = OOC_SymbolTable_TypeRules__IsReadOnly((OOC_SymbolTable__Module)i3, (OOC_SymbolTable__Declaration)i2);
  if (i2) goto l33;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115904))+8);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 115910)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i2) goto l28;
  i2=0u;
  goto l30;
l28:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115932))+8);
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 115942)))), &_td_OOC_SymbolTable__VarDeclDesc, 115942)), 115950))+58);
  
l30:
  if (!i2) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 116009));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 115978)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 42, (OOC_Scanner_BasicList__Symbol)i1);
  goto l37;
l33:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 115877));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 115845)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_BasicList__Symbol)i1);
  goto l37;
l36:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 115739));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 115707)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_BasicList__Symbol)i1);
l37:
  return;
  ;
}

OOC_IR__Statement OOC_IR__BuilderDesc_NewAssignment(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression variable, OOC_IR__Expression value) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)variable;
  OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 116882))+4);
  i3 = (OOC_INT32)sym;
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i3, (void*)(OOC_INT32)&value, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)value;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 116921))+4);
  i4 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i4);
  if (i4) goto l11;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 117141))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 117148)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i4) goto l5;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 117171))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 117178)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l7;
l5:
  i4=1u;
l7:
  if (i4) goto l9;
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Assignment.baseTypes[0]);
  OOC_IR__InitAssignment((OOC_IR__Assignment)i0, (OOC_Scanner_BasicList__Symbol)i3, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2);
  return (OOC_IR__Statement)i0;
  goto l12;
l9:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 117273)))), OOC_IR__BuilderDesc_NewCopy)),OOC_IR__BuilderDesc_NewCopy)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
  return (OOC_IR__Statement)i0;
  goto l12;
l11:
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 117094)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i3, (OOC_IR__Expression)i1, 0);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 117085)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 117014)))), OOC_IR__BuilderDesc_NewCopyString)),OOC_IR__BuilderDesc_NewCopyString)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1, (OOC_IR__Expression)i4);
  return (OOC_IR__Statement)i0;
l12:
  _failed_function(116649); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 117623)))), OOC_IR__VisitorDesc_VisitAssignment)),OOC_IR__VisitorDesc_VisitAssignment)((OOC_IR__Visitor)i0, (OOC_IR__Assignment)i1);
  return;
  ;
}

static void OOC_IR__InitAssignOp(OOC_IR__AssignOp ao, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)op;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 117865)))), &_td_OOC_IR__BinaryArithDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 117936)))), &_td_OOC_IR__ChangeElementDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 117932)))), 117932);
  goto l8;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 117988))+12);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)ao;
  OOC_IR__InitAssignment((OOC_IR__Assignment)i3, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
  goto l8;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 117915))+12);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)ao;
  OOC_IR__InitAssignment((OOC_IR__Assignment)i3, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
l8:
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewAssignOp(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 118150)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__AssignOp.baseTypes[0]);
  OOC_IR__InitAssignOp((OOC_IR__AssignOp)i2, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i0);
  return (OOC_IR__Expression)i2;
  goto l4;
l3:
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 118175))+20);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(118053); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 118483)))), OOC_IR__VisitorDesc_VisitAssignOp)),OOC_IR__VisitorDesc_VisitAssignOp)((OOC_IR__Visitor)i0, (OOC_IR__AssignOp)i1);
  return;
  ;
}

static void OOC_IR__InitCall(OOC_IR__Call call, OOC_IR__Expression design, OOC_IR__ExpressionList arguments, OOC_SymbolTable__VarDeclArray formalPars) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Type resultType;

  i0 = (OOC_INT32)design;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 118826));
  i2 = (OOC_INT32)call;
  OOC_IR__InitStatement((OOC_IR__Statement)i2, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 118891))+4);
  i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__FunctionResultType((OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i1);
  resultType = (OOC_SymbolTable__Type)i1;
  i3 = i1!=0;
  if (!i3) goto l4;
  *(OOC_INT32*)((_check_pointer(i2, 118982))+4) = i1;
l4:
  *(OOC_INT32*)((_check_pointer(i2, 119020))+8) = i0;
  i0 = (OOC_INT32)arguments;
  *(OOC_INT32*)((_check_pointer(i2, 119048))+12) = i0;
  i0 = (OOC_INT32)formalPars;
  *(OOC_INT32*)((_check_pointer(i2, 119082))+16) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 119262)))), OOC_IR__VisitorDesc_VisitCall)),OOC_IR__VisitorDesc_VisitCall)((OOC_IR__Visitor)i0, (OOC_IR__Call)i1);
  return;
  ;
}

static void OOC_IR__InitCopy(OOC_IR__Copy cp, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_CHAR8 checkDynamicType) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)cp;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i0, 119561))+8) = i1;
  i1 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i0, 119587))+12) = i1;
  i1 = checkDynamicType;
  *(OOC_UINT8*)((_check_pointer(i0, 119609))+16) = i1;
  return;
  ;
}

OOC_IR__Copy OOC_IR__BuilderDesc_NewCopy(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewCopy_HasDynamicType(OOC_IR__Expression dest);
    
    OOC_CHAR8 OOC_IR__BuilderDesc_NewCopy_HasDynamicType(OOC_IR__Expression dest) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)dest;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 119877))+4);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 119884)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 119905))+4);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 119915)))), &_td_OOC_SymbolTable__RecordDesc, 119915)), 119922))+34);
      
l5:
      if (!i1) goto l14;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 119959)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l12;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 120017)))), &_td_OOC_IR__VarDesc);
      if (!i1) goto l14;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 120052)))), &_td_OOC_IR__VarDesc, 120052)), 120056))+8);
      i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 120067)))), &_td_OOC_SymbolTable__VarDeclDesc, 120067)), 120075))+55);
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
  i1 = *(OOC_INT32*)((_check_pointer(i1, 120276))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_StdPragmas__typeGuard;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  
l4:
  i2 = (OOC_INT32)source;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Copy.baseTypes[0]);
  i4 = (OOC_INT32)sym;
  OOC_IR__InitCopy((OOC_IR__Copy)i3, (OOC_Scanner_BasicList__Symbol)i4, (OOC_IR__Expression)i2, (OOC_IR__Expression)i0, i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 120520)))), OOC_IR__VisitorDesc_VisitCopy)),OOC_IR__VisitorDesc_VisitCopy)((OOC_IR__Visitor)i0, (OOC_IR__Copy)i1);
  return;
  ;
}

static void OOC_IR__InitCopyParameter(OOC_IR__CopyParameter cp, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Var param) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)cp;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)param;
  *(OOC_INT32*)((_check_pointer(i0, 120783))+8) = i1;
  return;
  ;
}

OOC_IR__CopyParameter OOC_IR__BuilderDesc_NewCopyParameter(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Var param) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CopyParameter.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)param;
  OOC_IR__InitCopyParameter((OOC_IR__CopyParameter)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Var)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 121207)))), OOC_IR__VisitorDesc_VisitCopyParameter)),OOC_IR__VisitorDesc_VisitCopyParameter)((OOC_IR__Visitor)i0, (OOC_IR__CopyParameter)i1);
  return;
  ;
}

static void OOC_IR__InitCopyString(OOC_IR__CopyString cp, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression maxLength) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)cp;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i0, 121521))+8) = i1;
  i1 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i0, 121547))+12) = i1;
  i1 = (OOC_INT32)maxLength;
  *(OOC_INT32*)((_check_pointer(i0, 121569))+16) = i1;
  return;
  ;
}

OOC_IR__CopyString OOC_IR__BuilderDesc_NewCopyString(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression maxLength) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type baseChar;
  OOC_CHAR8 ok;
  OOC_IR__CopyString cp;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)dest;
  OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 121887))+4);
  i2 = OOC_SymbolTable_TypeRules__IsArrayOfChar((OOC_SymbolTable__Type)i2, 1u);
  i2 = !i2;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 121943));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 121912)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_BasicList__Symbol)i2);
l3:
  i2 = (OOC_INT32)source;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 121979)))), &_td_OOC_IR__ConstDesc);
  if (i3) goto l9;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 122449))+4);
  i3 = OOC_SymbolTable_TypeRules__IsArrayOfChar((OOC_SymbolTable__Type)i3, 1u);
  i3 = !i3;
  if (!i3) goto l14;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 122507));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 122474)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_BasicList__Symbol)i2);
  goto l14;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 122236))+4);
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
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 122318));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 122285)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_BasicList__Symbol)i2);
l14:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CopyString.baseTypes[0]);
  cp = (OOC_IR__CopyString)i2;
  i3 = (OOC_INT32)maxLength;
  i4 = (OOC_INT32)source;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 122586)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i3);
  i3 = (OOC_INT32)sym;
  OOC_IR__InitCopyString((OOC_IR__CopyString)i2, (OOC_Scanner_BasicList__Symbol)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 122798)))), OOC_IR__VisitorDesc_VisitCopyString)),OOC_IR__VisitorDesc_VisitCopyString)((OOC_IR__Visitor)i0, (OOC_IR__CopyString)i1);
  return;
  ;
}

void OOC_IR__InitExit(OOC_IR__Exit exit, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)exit;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  *(OOC_INT32*)((_check_pointer(i0, 123035))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 123058))+12) = 0;
  return;
  ;
}

OOC_IR__Exit OOC_IR__BuilderDesc_NewExit(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Exit.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  OOC_IR__InitExit((OOC_IR__Exit)i0, (OOC_Scanner_BasicList__Symbol)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 123395)))), OOC_IR__VisitorDesc_VisitExit)),OOC_IR__VisitorDesc_VisitExit)((OOC_IR__Visitor)i0, (OOC_IR__Exit)i1);
  return;
  ;
}

static void OOC_IR__InitForStatm(OOC_IR__ForStatm forStatm, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression var, OOC_IR__Expression start, OOC_IR__Expression end, OOC_IR__Expression step, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)forStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)var;
  *(OOC_INT32*)((_check_pointer(i0, 123754))+8) = i1;
  i1 = (OOC_INT32)start;
  *(OOC_INT32*)((_check_pointer(i0, 123780))+12) = i1;
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 123810))+16) = i1;
  i1 = (OOC_INT32)step;
  *(OOC_INT32*)((_check_pointer(i0, 123836))+20) = i1;
  i1 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i0, 123864))+24) = i1;
  return;
  ;
}

OOC_IR__ForStatm OOC_IR__BuilderDesc_NewForStatm(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression var, OOC_IR__Expression start, OOC_IR__Expression end, OOC_IR__Expression step, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)step;
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l3;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(4);
  i2 = (OOC_INT32)Object_BigInt__NewInt(1);
  i3 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124168)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  step = (OOC_IR__Expression)i0;
l3:
  i0 = (OOC_INT32)var;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124271)))), &_td_OOC_IR__VarDesc));
  if (i1) goto l21;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124357))+4);
  i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (i1) goto l19;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124440))+4);
  i2 = (OOC_INT32)b;
  i1 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i2, (void*)(OOC_INT32)&step, (OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (i1) goto l17;
  i1 = (OOC_INT32)start;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124565))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 124548));
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i1, (void*)(OOC_INT32)&start, (OOC_SymbolTable__Type)i3);
  i1 = (OOC_INT32)end;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124627))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 124612));
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i1, (void*)(OOC_INT32)&end, (OOC_SymbolTable__Type)i3);
  i1 = (OOC_INT32)step;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 124651)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1);
  step = (OOC_IR__Expression)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 124704))+4);
  i3 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i3);
  if (i3) goto l12;
  i3=0u;
  goto l14;
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 124746)))), &_td_OOC_IR__ConstDesc, 124746)), 124752))+8);
  i4 = (OOC_INT32)Object_BigInt__zero;
  i3 = Object_BigInt__BigIntDesc_Cmp((Object_BigInt__BigInt)i4, (Object__Object)i3);
  i3 = i3==0;
  
l14:
  if (!i3) goto l22;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 124806));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 124780)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 31, (OOC_Scanner_BasicList__Symbol)i1);
  goto l22;
l17:
  i1 = (OOC_INT32)step;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 124491));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 124460)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 30, (OOC_Scanner_BasicList__Symbol)i1);
  goto l22;
l19:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 124402));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 124377)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 19, (OOC_Scanner_BasicList__Symbol)i2);
  goto l22;
l21:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 124317));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 124291)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 29, (OOC_Scanner_BasicList__Symbol)i2);
l22:
  i1 = (OOC_INT32)body;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ForStatm.baseTypes[0]);
  i3 = (OOC_INT32)start;
  i4 = (OOC_INT32)end;
  i5 = (OOC_INT32)step;
  i6 = (OOC_INT32)sym;
  OOC_IR__InitForStatm((OOC_IR__ForStatm)i2, (OOC_Scanner_BasicList__Symbol)i6, (OOC_IR__Expression)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 125121)))), OOC_IR__VisitorDesc_VisitForStatm)),OOC_IR__VisitorDesc_VisitForStatm)((OOC_IR__Visitor)i0, (OOC_IR__ForStatm)i1);
  return;
  ;
}

static void OOC_IR__InitIfStatm(OOC_IR__IfStatm ifStatm, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ifStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i0, 125456))+8) = i1;
  i1 = (OOC_INT32)pathTrue;
  *(OOC_INT32*)((_check_pointer(i0, 125485))+12) = i1;
  i1 = (OOC_INT32)pathFalse;
  *(OOC_INT32*)((_check_pointer(i0, 125520))+16) = i1;
  return;
  ;
}

OOC_IR__IfStatm OOC_IR__BuilderDesc_NewIfStatm(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__IfStatm ifStatm;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__IfStatm.baseTypes[0]);
  ifStatm = (OOC_IR__IfStatm)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)guard;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 125802)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)pathTrue;
  i4 = (OOC_INT32)pathFalse;
  OOC_IR__InitIfStatm((OOC_IR__IfStatm)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__StatementSeq)i3, (OOC_IR__StatementSeq)i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 126040)))), OOC_IR__VisitorDesc_VisitIfStatm)),OOC_IR__VisitorDesc_VisitIfStatm)((OOC_IR__Visitor)i0, (OOC_IR__IfStatm)i1);
  return;
  ;
}

static void OOC_IR__InitCase(OOC_IR__Case _case, OOC_Scanner_BasicList__Symbol sym, OOC_IR__CaseLabels labels, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_case;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)labels;
  *(OOC_INT32*)((_check_pointer(i0, 126342))+8) = i1;
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 126370))+12) = i1;
  return;
  ;
}

OOC_IR__Case OOC_IR__BuilderDesc_NewCase(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__CaseLabels labels, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  OOC_IR__SetRange range;

  i0 = (OOC_INT32)labels;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 126637)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT32)b;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 126666);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 126666))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 126670)))), &_td_OOC_IR__SetRangeDesc, 126670);
  range = (OOC_IR__SetRange)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 126722))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 126702)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  *(OOC_INT32*)((_check_pointer(i4, 126692))+8) = i5;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 126770))+12);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 126750)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  *(OOC_INT32*)((_check_pointer(i4, 126742))+12) = i5;
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)statmSeq;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Case.baseTypes[0]);
  OOC_IR__InitCase((OOC_IR__Case)i3, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__CaseLabels)i0, (OOC_IR__StatementSeq)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 127018)))), OOC_IR__VisitorDesc_VisitCase)),OOC_IR__VisitorDesc_VisitCase)((OOC_IR__Visitor)i0, (OOC_IR__Case)i1);
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
      i4 = _check_pointer(i1, 127476);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 127476))*4);
      i4 = i4!=(OOC_INT32)0;
      if (i4) goto l6;
      i4=0u;
      goto l8;
l6:
      i4 = _check_pointer(i1, 127516);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 127516))*4);
      i4 = OOC_IR__SetRangeDesc_IntersectsWith((OOC_IR__SetRange)i2, (OOC_IR__SetRange)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 127520)))), &_td_OOC_IR__SetRangeDesc, 127520)));
      
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 127700))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 127708)), 0);
  i = 0;
  i1 = 0<i0;
  if (!i1) goto l44;
  i1 = !0u;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)_case;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 127735))+8);
  i4 = _check_pointer(i4, 127743);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 127743))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 127747)))), &_td_OOC_IR__SetRangeDesc, 127747);
  range = (OOC_IR__SetRange)i4;
  i5 = (OOC_INT32)b;
  i6 = (OOC_INT32)type;
  i7 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i5, (void*)((_check_pointer(i4, 127783))+8), (OOC_SymbolTable__Type)i6);
  i7 = !i7;
  if (i7) goto l38;
  i6 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i5, (void*)((_check_pointer(i4, 127962))+12), (OOC_SymbolTable__Type)i6);
  i6 = !i6;
  if (i6) goto l36;
  i4 = OOC_IR__SetRangeDesc_IsEmpty((OOC_IR__SetRange)i4);
  if (i4) goto l34;
  inUse = 0u;
  j = 0;
  i2 = (OOC_INT32)caseList;
  i2 = _check_pointer(i2, 128322);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT32, 128322))*4);
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
  i4 = _check_pointer(i3, 128396);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 128396))*4);
  i3 = _check_pointer(i3, 128457);
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i5, OOC_UINT32, 128457))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 128460))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 128399))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 128468)), 0);
  i4 = (OOC_INT32)range;
  i2 = OOC_IR__CaseDesc_CheckLabels_IntersectsWith((OOC_IR__SetRange)i4, (OOC_IR__CaseLabels)i3, i2);
  i3 = j;
  inUse = i2;
  i3 = i3+1;
  j = i3;
  i4 = (OOC_INT32)caseList;
  i4 = _check_pointer(i4, 128322);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 128322))*4);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 128558))+8);
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
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 128636));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 128605)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 28, (OOC_Scanner_BasicList__Symbol)i3);
  goto l39;
l34:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 128213))+8);
  i3 = _check_pointer(i3, 128221);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 128221))*4) = 0;
  deleted = (i5+1);
  goto l39;
l36:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 128021))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 128025));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 127988)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i5, 27, (OOC_Scanner_BasicList__Symbol)i4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 128045))+8);
  i3 = _check_pointer(i3, 128053);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 128053))*4) = 0;
  deleted = (i5+1);
  goto l39;
l38:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 127844))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 127850));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 127811)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i5, 27, (OOC_Scanner_BasicList__Symbol)i4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 127870))+8);
  i3 = _check_pointer(i3, 127878);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 127878))*4) = 0;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 128729))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 128737)), 0);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseLabels.baseTypes[0], (i2-i0));
  _new = (OOC_IR__CaseLabels)i0;
  j = (-1);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 128793)), 0);
  i3 = 0<i2;
  if (!i3) goto l59;
  i3=(-1);i4=0;
l49_loop:
  
l50_loop:
  i3 = i3+1;
  j = i3;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 128854))+8);
  i5 = _check_pointer(i5, 128862);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 128862))*4);
  i5 = i5!=0;
  if (!i5) goto l50_loop;
l54:
  i5 = _check_pointer(i0, 128885);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 128896))+8);
  i7 = _check_pointer(i7, 128904);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i3, i8, OOC_UINT32, 128904))*4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 128885))*4) = i7;
  i4 = i4+1;
  i = i4;
  i5 = i4<i2;
  if (i5) goto l49_loop;
l59:
  *(OOC_INT32*)((_check_pointer(i1, 128930))+8) = i0;
l60:
  return;
  ;
}

static void OOC_IR__InitCaseStatm(OOC_IR__CaseStatm caseStatm, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression select, OOC_IR__CaseList caseList, OOC_IR__StatementSeq _default, OOC_CHAR8 checkMatch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)caseStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)select;
  *(OOC_INT32*)((_check_pointer(i0, 129338))+8) = i1;
  i1 = (OOC_INT32)caseList;
  *(OOC_INT32*)((_check_pointer(i0, 129371))+12) = i1;
  i1 = (OOC_INT32)_default;
  *(OOC_INT32*)((_check_pointer(i0, 129408))+16) = i1;
  i1 = checkMatch;
  *(OOC_UINT8*)((_check_pointer(i0, 129443))+20) = i1;
  return;
  ;
}

OOC_IR__CaseStatm OOC_IR__BuilderDesc_NewCaseStatm(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression select, OOC_IR__CaseList caseList, OOC_IR__StatementSeq _default) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_IR__CaseStatm caseStatm;
  OOC_INT32 i;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseStatm.baseTypes[0]);
  caseStatm = (OOC_IR__CaseStatm)i0;
  i1 = (OOC_INT32)select;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 129772))+4);
  i2 = OOC_SymbolTable_TypeRules__IsValidCaseSelector((OOC_SymbolTable__Type)i2);
  i2 = !i2;
  if (i2) goto l11;
  i2 = (OOC_INT32)caseList;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 129879)), 0);
  i4 = 0<i3;
  if (!i4) goto l12;
  i4 = (OOC_INT32)b;
  i5=0;
l5_loop:
  i6 = _check_pointer(i2, 129903);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 129930))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 129903))*4);
  OOC_IR__CaseDesc_CheckLabels((OOC_IR__Case)i6, (OOC_IR__Builder)i4, (OOC_SymbolTable__Type)i8, (OOC_IR__CaseList)i2);
  i5 = i5+1;
  i = i5;
  i6 = i5<i3;
  if (i6) goto l5_loop;
  goto l12;
l11:
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 129829));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 129792)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 26, (OOC_Scanner_BasicList__Symbol)i3);
l12:
  i2 = (OOC_INT32)sym;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 130100))+16);
  i4 = (OOC_INT32)OOC_Config_StdPragmas__caseSelectCheck;
  i5 = (OOC_INT32)b;
  i3 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i5, (Config_Section_Options__Option)i4, i3);
  i4 = (OOC_INT32)_default;
  i5 = (OOC_INT32)caseList;
  OOC_IR__InitCaseStatm((OOC_IR__CaseStatm)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__CaseList)i5, (OOC_IR__StatementSeq)i4, i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130316)))), OOC_IR__VisitorDesc_VisitCaseStatm)),OOC_IR__VisitorDesc_VisitCaseStatm)((OOC_IR__Visitor)i0, (OOC_IR__CaseStatm)i1);
  return;
  ;
}

static void OOC_IR__InitLoopStatm(OOC_IR__LoopStatm loopStatm, OOC_Scanner_BasicList__Symbol sym, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)loopStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i0, 130633))+8) = i1;
  return;
  ;
}

OOC_IR__LoopStatm OOC_IR__BuilderDesc_NewLoopStatm(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__LoopStatm.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)body;
  OOC_IR__InitLoopStatm((OOC_IR__LoopStatm)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__StatementSeq)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131101)))), OOC_IR__VisitorDesc_VisitLoopStatm)),OOC_IR__VisitorDesc_VisitLoopStatm)((OOC_IR__Visitor)i0, (OOC_IR__LoopStatm)i1);
  return;
  ;
}

static void OOC_IR__InitMoveBlock(OOC_IR__MoveBlock move, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression size) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)move;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i0, 131415))+8) = i1;
  i1 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i0, 131443))+12) = i1;
  i1 = (OOC_INT32)size;
  *(OOC_INT32*)((_check_pointer(i0, 131467))+16) = i1;
  return;
  ;
}

OOC_IR__MoveBlock OOC_IR__BuilderDesc_NewMoveBlock(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression size) {
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
  OOC_IR__InitMoveBlock((OOC_IR__MoveBlock)i0, (OOC_Scanner_BasicList__Symbol)i4, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132052)))), OOC_IR__VisitorDesc_VisitMoveBlock)),OOC_IR__VisitorDesc_VisitMoveBlock)((OOC_IR__Visitor)i0, (OOC_IR__MoveBlock)i1);
  return;
  ;
}

static void OOC_IR__InitRaise(OOC_IR__Raise raise, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression exception) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)raise;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)exception;
  *(OOC_INT32*)((_check_pointer(i0, 132318))+8) = i1;
  return;
  ;
}

OOC_IR__Raise OOC_IR__BuilderDesc_NewRaise(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression exception) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)exception;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132503))+4);
  i1 = OOC_SymbolTable_TypeRules__IsException((OOC_SymbolTable__Type)i1);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 132642));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 132611)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 62, (OOC_Scanner_BasicList__Symbol)i0);
  return (OOC_IR__Raise)0;
  goto l4;
l3:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Raise.baseTypes[0]);
  OOC_IR__InitRaise((OOC_IR__Raise)i2, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i0);
  return (OOC_IR__Raise)i2;
l4:
  _failed_function(132385); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132834)))), OOC_IR__VisitorDesc_VisitRaise)),OOC_IR__VisitorDesc_VisitRaise)((OOC_IR__Visitor)i0, (OOC_IR__Raise)i1);
  return;
  ;
}

static void OOC_IR__InitRepeatStatm(OOC_IR__RepeatStatm repeatStatm, OOC_Scanner_BasicList__Symbol sym, OOC_IR__StatementSeq body, OOC_IR__Expression exitCondition) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)repeatStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i0, 133184))+8) = i1;
  i1 = (OOC_INT32)exitCondition;
  *(OOC_INT32*)((_check_pointer(i0, 133215))+12) = i1;
  return;
  ;
}

OOC_IR__RepeatStatm OOC_IR__BuilderDesc_NewRepeatStatm(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__StatementSeq body, OOC_IR__Expression exitCondition) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__RepeatStatm repeatStatm;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__RepeatStatm.baseTypes[0]);
  repeatStatm = (OOC_IR__RepeatStatm)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)exitCondition;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 133539)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)body;
  OOC_IR__InitRepeatStatm((OOC_IR__RepeatStatm)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__StatementSeq)i3, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133796)))), OOC_IR__VisitorDesc_VisitRepeatStatm)),OOC_IR__VisitorDesc_VisitRepeatStatm)((OOC_IR__Visitor)i0, (OOC_IR__RepeatStatm)i1);
  return;
  ;
}

static void OOC_IR__InitReturn(OOC_IR__Return _return, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression result) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_return;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)result;
  *(OOC_INT32*)((_check_pointer(i0, 134074))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 134104))+12) = 0;
  return;
  ;
}

OOC_IR__Return OOC_IR__BuilderDesc_NewReturn(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression result) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Return.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)result;
  OOC_IR__InitReturn((OOC_IR__Return)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134501)))), OOC_IR__VisitorDesc_VisitReturn)),OOC_IR__VisitorDesc_VisitReturn)((OOC_IR__Visitor)i0, (OOC_IR__Return)i1);
  return;
  ;
}

static void OOC_IR__InitCatchClause(OOC_IR__CatchClause _catch, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__Type exceptionType, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_catch;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)exceptionType;
  *(OOC_INT32*)((_check_pointer(i0, 134857))+8) = i1;
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 134899))+12) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 134931))+16) = 0u;
  return;
  ;
}

OOC_IR__CatchClause OOC_IR__BuilderDesc_NewCatchClause(OOC_IR__Builder b, OOC_IR__Expression guardType, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__CatchClause _catch;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CatchClause.baseTypes[0]);
  _catch = (OOC_IR__CatchClause)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)guardType;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 135202)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  type = (OOC_SymbolTable__Type)i3;
  i4 = OOC_SymbolTable_TypeRules__IsException((OOC_SymbolTable__Type)i3);
  i4 = !i4;
  if (!i4) goto l4;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 135298));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 135267)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 62, (OOC_Scanner_BasicList__Symbol)i4);
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 135350));
  i2 = (OOC_INT32)statmSeq;
  OOC_IR__InitCatchClause((OOC_IR__CatchClause)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i3, (OOC_IR__StatementSeq)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 135579)))), OOC_IR__VisitorDesc_VisitCatchClause)),OOC_IR__VisitorDesc_VisitCatchClause)((OOC_IR__Visitor)i0, (OOC_IR__CatchClause)i1);
  return;
  ;
}

static void OOC_IR__InitTryStatm(OOC_IR__TryStatm tryStatm, OOC_Scanner_BasicList__Symbol sym, OOC_IR__StatementSeq statmSeq, OOC_IR__CatchList catchList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)tryStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 135803))+8) = i1;
  i1 = (OOC_INT32)catchList;
  *(OOC_INT32*)((_check_pointer(i0, 135838))+12) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 135875))+16) = (OOC_INT32)0;
  return;
  ;
}

OOC_IR__TryStatm OOC_IR__BuilderDesc_NewTryStatm(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__StatementSeq statmSeq, OOC_IR__CatchList catchList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT32)catchList;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 136150)), 0);
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
  i4 = _check_pointer(i0, 136221);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 136221))*4);
  i5 = _check_pointer(i0, 136289);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT32, 136289))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 136224))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 136292))+8);
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
  i5 = _check_pointer(i0, 136221);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 136221))*4);
  i6 = _check_pointer(i0, 136289);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 136289))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 136224))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 136292))+8);
  i5 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i6);
  i5 = !i5;
  
l16:
  if (i5) goto l11_loop;
l20:
  i4 = i3!=i4;
  if (!i4) goto l23;
  i4 = _check_pointer(i0, 136405);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 136405))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 136408));
  OOC_IR__BuilderDesc_WarnSym((OOC_IR__Builder)i2, 65, (OOC_Scanner_BasicList__Symbol)i4);
  i4 = _check_pointer(i0, 136432);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 136432))*4);
  *(OOC_UINT8*)((_check_pointer(i4, 136435))+16) = 1u;
l23:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l28:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)statmSeq;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TryStatm.baseTypes[0]);
  OOC_IR__InitTryStatm((OOC_IR__TryStatm)i3, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__StatementSeq)i2, (OOC_IR__CatchList)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 136783)))), OOC_IR__VisitorDesc_VisitTryStatm)),OOC_IR__VisitorDesc_VisitTryStatm)((OOC_IR__Visitor)i0, (OOC_IR__TryStatm)i1);
  return;
  ;
}

static void OOC_IR__InitWhileStatm(OOC_IR__WhileStatm whileStatm, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)whileStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i0, 137124))+8) = i1;
  i1 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i0, 137156))+12) = i1;
  return;
  ;
}

OOC_IR__WhileStatm OOC_IR__BuilderDesc_NewWhileStatm(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__WhileStatm whileStatm;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__WhileStatm.baseTypes[0]);
  whileStatm = (OOC_IR__WhileStatm)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)guard;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 137439)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)body;
  OOC_IR__InitWhileStatm((OOC_IR__WhileStatm)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__StatementSeq)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 137686)))), OOC_IR__VisitorDesc_VisitWhileStatm)),OOC_IR__VisitorDesc_VisitWhileStatm)((OOC_IR__Visitor)i0, (OOC_IR__WhileStatm)i1);
  return;
  ;
}

static void OOC_IR__InitWithStatm(OOC_IR__WithStatm withStatm, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse, OOC_CHAR8 checkMatch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)withStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i0, 138085))+8) = i1;
  i1 = (OOC_INT32)pathTrue;
  *(OOC_INT32*)((_check_pointer(i0, 138116))+12) = i1;
  i1 = (OOC_INT32)pathFalse;
  *(OOC_INT32*)((_check_pointer(i0, 138153))+16) = i1;
  i1 = checkMatch;
  *(OOC_UINT8*)((_check_pointer(i0, 138192))+20) = i1;
  return;
  ;
}

OOC_IR__WithStatm OOC_IR__BuilderDesc_NewWithStatm(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 138524))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_StdPragmas__typeGuard;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  i2 = (OOC_INT32)guard;
  i3 = (OOC_INT32)pathTrue;
  i4 = (OOC_INT32)pathFalse;
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__WithStatm.baseTypes[0]);
  OOC_IR__InitWithStatm((OOC_IR__WithStatm)i5, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__StatementSeq)i3, (OOC_IR__StatementSeq)i4, i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 138841)))), OOC_IR__VisitorDesc_VisitWithStatm)),OOC_IR__VisitorDesc_VisitWithStatm)((OOC_IR__Visitor)i0, (OOC_IR__WithStatm)i1);
  return;
  ;
}

void OOC_IR__BuilderDesc_CheckExit(OOC_IR__Builder b, OOC_SymbolTable__ProcDecl procDecl, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0;
  OOC_IR__LoopStatm currentLoop;
  OOC_IR__TryStatm currentTry;
  OOC_INT32 enclosingTry;
  OOC_INT32 enclosingTryLastLoop;
  auto void OOC_IR__BuilderDesc_CheckExit_CheckException(OOC_SymbolTable__Type exception, OOC_Scanner_BasicList__Symbol sym);
  auto void OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq(OOC_IR__StatementSeq statmSeq);
    
    void OOC_IR__BuilderDesc_CheckExit_CheckException(OOC_SymbolTable__Type exception, OOC_Scanner_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_IR__TryStatm _try;
      OOC_INT32 i;
      OOC_SymbolTable__ExceptionNameArray raises;
      OOC_SymbolTable__Module module;

      i0 = (OOC_INT32)currentTry;
      _try = (OOC_IR__TryStatm)i0;
      i1 = (OOC_INT32)exception;
      i2 = i0!=(OOC_INT32)0;
      if (!i2) goto l22;
l3_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 139852))+12);
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 139862)), 0);
      i3 = 0<i2;
      if (!i3) goto l17;
      i3=0;
l6_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 139903))+12);
      i4 = _check_pointer(i4, 139913);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 139913))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 139916))+8);
      i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i4, (OOC_SymbolTable__Type)i1);
      if (!i4) goto l9;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 139993))+12);
      i4 = _check_pointer(i4, 140003);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 140003))*4);
      *(OOC_UINT8*)((_check_pointer(i4, 140006))+16) = 1u;
l9:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 140115))+12);
      i4 = _check_pointer(i4, 140125);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 140125))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 140128))+8);
      i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i4);
      if (!i4) goto l12;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 140164))+12);
      i4 = _check_pointer(i4, 140174);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 140174))*4);
      *(OOC_UINT8*)((_check_pointer(i4, 140177))+16) = 1u;
      return;
l12:
      i3 = i3+1;
      i = i3;
      i4 = i3<i2;
      if (i4) goto l6_loop;
l17:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 140256))+16);
      _try = (OOC_IR__TryStatm)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l22:
      i0 = (OOC_INT32)procDecl;
      i2 = i0!=(OOC_INT32)0;
      if (!i2) goto l36;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 140346))+60);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 140357))+56);
      raises = (OOC_SymbolTable__ExceptionNameArray)i0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 140398)), 0);
      i = 0;
      i3 = 0<i2;
      if (!i3) goto l36;
      i3=0;
l27_loop:
      i4 = _check_pointer(i0, 140453);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 140453))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 140456))+16);
      i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i4);
      if (!i4) goto l30;
      return;
l30:
      i3 = i3+1;
      i = i3;
      i4 = i3<i2;
      if (i4) goto l27_loop;
l36:
      i0 = (OOC_INT32)procDecl;
      i2 = i0==(OOC_INT32)0;
      if (i2) goto l39;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 140581))+4);
      i0 = i0==(OOC_INT32)0;
      
      goto l41;
l39:
      i0=1u;
l41:
      if (i0) goto l43;
      i0 = (OOC_INT32)b;
      i2 = (OOC_INT32)sym;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 140692)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 63, (OOC_Scanner_BasicList__Symbol)i2);
      goto l44;
l43:
      i0 = (OOC_INT32)b;
      i2 = (OOC_INT32)sym;
      OOC_IR__BuilderDesc_WarnSym((OOC_IR__Builder)i0, 64, (OOC_Scanner_BasicList__Symbol)i2);
l44:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 140762)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i1);
      module = (OOC_SymbolTable__Module)i0;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 140780))+36);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 140840))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 140845))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 140840))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 140845))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 140849)), 0);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 140780))+36);
      i0 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i4, 140849)), i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 140790)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i2, "module", 7, (Msg__StringPtr)i0);
      i0 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 140861))+36);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 140922))+20);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 140933))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 140938))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 140922))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 140933))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 140938))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 140861))+36);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 140942)), 0);
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i3, 140942)), i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 140871)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i1);
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141279)))), &_td_OOC_IR__ConstDesc);
          if (i1) goto l159;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141328)))), &_td_OOC_IR__AbsDesc);
          if (i1) goto l157;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141386)))), &_td_OOC_IR__AdrDesc);
          if (i1) goto l155;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141443)))), &_td_OOC_IR__AshDesc);
          if (i1) goto l153;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141530)))), &_td_OOC_IR__BinaryArithDesc);
          if (i1) goto l151;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141626)))), &_td_OOC_IR__BooleanOpDesc);
          if (i1) goto l149;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141720)))), &_td_OOC_IR__CapDesc);
          if (i1) goto l147;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141778)))), &_td_OOC_IR__CompareDesc);
          if (i1) goto l145;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141870)))), &_td_OOC_IR__ConcatDesc);
          if (i1) goto l135;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141999)))), &_td_OOC_IR__ConstructorDesc);
          if (i1) goto l133;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142095)))), &_td_OOC_IR__ChangeElementDesc);
          if (i1) goto l131;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142194)))), &_td_OOC_IR__DerefDesc);
          if (i1) goto l129;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142254)))), &_td_OOC_IR__EntierDesc);
          if (i1) goto l127;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142315)))), &_td_OOC_IR__IndexDesc);
          if (i1) goto l125;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142406)))), &_td_OOC_IR__LenDesc);
          if (i1) goto l123;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142462)))), &_td_OOC_IR__NegateDesc);
          if (i1) goto l121;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142523)))), &_td_OOC_IR__NewBlockDesc);
          if (i1) goto l119;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142583)))), &_td_OOC_IR__NewObjectDesc);
          if (i1) goto l106;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142772)))), &_td_OOC_IR__NotDesc);
          if (i1) goto l104;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142830)))), &_td_OOC_IR__OddDesc);
          if (i1) goto l102;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142888)))), &_td_OOC_IR__ReferenceDesc);
          if (i1) goto l159;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142941)))), &_td_OOC_IR__SelectFieldDesc);
          if (i1) goto l99;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143006)))), &_td_OOC_IR__SelectProcDesc);
          if (i1) goto l90;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143240)))), &_td_OOC_IR__SetMemberDesc);
          if (i1) goto l88;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143335)))), &_td_OOC_IR__SetOpDesc);
          if (i1) goto l86;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143425)))), &_td_OOC_IR__SetRangeDesc);
          if (i1) goto l84;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143515)))), &_td_OOC_IR__ShiftDesc);
          if (i1) goto l82;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143603)))), &_td_OOC_IR__TypeCastDesc);
          if (i1) goto l80;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143663)))), &_td_OOC_IR__TypeConvDesc);
          if (i1) goto l78;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143723)))), &_td_OOC_IR__TypeTagDesc);
          if (i1) goto l76;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143784)))), &_td_OOC_IR__TypeTestDesc);
          if (i1) goto l74;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143844)))), &_td_OOC_IR__TypeGuardDesc);
          if (i1) goto l72;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143916)))), &_td_OOC_IR__CallDesc);
          if (i1) goto l70;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143910)))), 143910);
          goto l159;
l70:
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm((OOC_IR__Statement)i0);
          goto l159;
l72:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143883))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l74:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143822))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l76:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143760))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l78:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143701))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l80:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143641))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l82:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143550))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143583))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l84:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143463))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143495))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l86:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143370))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143402))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l88:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143279))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143314))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l90:
          i1 = *(OOC_UINT8*)((_check_pointer(i0, 143039))+25);
          if (i1) goto l93;
          i1=0u;
          goto l95;
l93:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143072))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 143079))+16);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 143084))+12);
          i2 = (OOC_INT32)procDecl;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 143100))+16);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 143105))+12);
          i1 = (
          _cmp8((const void*)(_check_pointer(i1, 143088)),(const void*)(_check_pointer(i2, 143109))))!=0;
          
l95:
          if (!i1) goto l97;
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143162))+20);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 143130)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 68, (OOC_Scanner_BasicList__Symbol)i2);
l97:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143214))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l99:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142982))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l102:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142863))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l104:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142805))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l106:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142616))+8);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l159;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142670))+8);
          i = 0;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 142677)), 0);
          i2 = 0<i1;
          if (!i2) goto l159;
          i2=0;
l111_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142713))+8);
          i3 = _check_pointer(i3, 142720);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 142720))*4);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l111_loop;
          goto l159;
l119:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142561))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l121:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142498))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l123:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142439))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l125:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142350))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142383))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l127:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142290))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l129:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142229))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l131:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142138))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142169))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l133:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142040))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 142073))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l135:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141914))+8);
          i = 0;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 141922)), 0);
          i2 = 0<i1;
          if (!i2) goto l159;
          i2=0;
l138_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141956))+8);
          i3 = _check_pointer(i3, 141964);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 141964))*4);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l138_loop;
          goto l159;
l145:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141815))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141847))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l147:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141753))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l149:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141665))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141697))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l151:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141571))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141603))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l153:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141476))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141509))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l155:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141419))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l159;
l157:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141361))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
l159:
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

          i0 = (OOC_INT32)statm;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144218)))), &_td_OOC_IR__AssertDesc);
          if (i1) goto l128;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144283)))), &_td_OOC_IR__AssignmentDesc);
          if (i1) goto l126;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144425)))), &_td_OOC_IR__CallDesc);
          if (i1) goto l108;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144807)))), &_td_OOC_IR__CopyDesc);
          if (i1) goto l106;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144900)))), &_td_OOC_IR__CopyParameterDesc);
          if (i1) goto l129;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144958)))), &_td_OOC_IR__CopyStringDesc);
          if (i1) goto l103;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145057)))), &_td_OOC_IR__ExitDesc);
          if (i1) goto l97;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145318)))), &_td_OOC_IR__ForStatmDesc);
          if (i1) goto l95;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145517)))), &_td_OOC_IR__IfStatmDesc);
          if (i1) goto l93;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145666)))), &_td_OOC_IR__CaseDesc);
          if (i1) goto l91;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145734)))), &_td_OOC_IR__CaseStatmDesc);
          if (i1) goto l81;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145966)))), &_td_OOC_IR__LoopStatmDesc);
          if (i1) goto l79;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146291)))), &_td_OOC_IR__MoveBlockDesc);
          if (i1) goto l77;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146389)))), &_td_OOC_IR__RaiseDesc);
          if (i1) goto l75;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146512)))), &_td_OOC_IR__RepeatStatmDesc);
          if (i1) goto l73;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146625)))), &_td_OOC_IR__ReturnDesc);
          if (i1) goto l56;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147377)))), &_td_OOC_IR__TryStatmDesc);
          if (i1) goto l43;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147920)))), &_td_OOC_IR__WhileStatmDesc);
          if (i1) goto l41;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148024)))), &_td_OOC_IR__WithStatmDesc);
          if (i1) goto l39;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148017)))), 148017);
          goto l129;
l39:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148064))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148103))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148146))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l41:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147961))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148000))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l43:
          i1 = (OOC_INT32)procDecl;
          i2 = enclosingTry;
          *(OOC_UINT8*)((_check_pointer(i1, 147409))+72) = 1u;
          enclosingTry = (i2+1);
          i1 = (OOC_INT32)currentTry;
          *(OOC_INT32*)((_check_pointer(i0, 147475))+16) = i1;
          currentTry = (OOC_IR__TryStatm)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147564))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147605))+16);
          i2 = enclosingTry;
          currentTry = (OOC_IR__TryStatm)i1;
          enclosingTry = (i2-1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147682))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 147692)), 0);
          i = 0;
          i2 = 0<i1;
          if (!i2) goto l129;
          i2=0;
l46_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147721))+12);
          i3 = _check_pointer(i3, 147731);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 147731))*4);
          i3 = *(OOC_UINT8*)((_check_pointer(i3, 147734))+16);
          i3 = !i3;
          if (!i3) goto l49;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147797))+12);
          i3 = _check_pointer(i3, 147807);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 147807))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 147810));
          i4 = (OOC_INT32)b;
          OOC_IR__BuilderDesc_WarnSym((OOC_IR__Builder)i4, 66, (OOC_Scanner_BasicList__Symbol)i3);
l49:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147865))+12);
          i3 = _check_pointer(i3, 147875);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 147875))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 147878))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l46_loop;
          goto l129;
l56:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146662))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)procDecl;
          i2 = i1==0;
          if (i2) goto l59;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 146727))+60);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 146739))+40);
          i2 = i2==0;
          
          goto l61;
l59:
          i2=1u;
l61:
          if (i2) goto l67;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147016))+8);
          i2 = i2==0;
          if (i2) goto l65;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147161))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 147250))+60);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 147261))+40);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 147169));
          i3 = (OOC_INT32)b;
          i1 = (OOC_INT32)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i1);
          OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i2, (void*)((_check_pointer(i0, 147181))+8), (OOC_SymbolTable__Type)i1);
          goto l71;
l65:
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 147088));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 147052)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 33, (OOC_Scanner_BasicList__Symbol)i2);
          goto l71;
l67:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146841))+8);
          i1 = i1!=0;
          if (!i1) goto l71;
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146910))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 146918));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 146877)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 32, (OOC_Scanner_BasicList__Symbol)i2);
l71:
          i1 = enclosingTry;
          *(OOC_INT32*)((_check_pointer(i0, 147323))+12) = i1;
          goto l129;
l73:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146559))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146593))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l129;
l75:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146425))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146468))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 146478))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 146490));
          OOC_IR__BuilderDesc_CheckExit_CheckException((OOC_SymbolTable__Type)i1, (OOC_Scanner_BasicList__Symbol)i0);
          goto l129;
l77:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146331))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146366))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l129;
l79:
          i1 = (OOC_INT32)currentLoop;
          oldLoop = (OOC_IR__LoopStatm)i1;
          currentLoop = (OOC_IR__LoopStatm)i0;
          i2 = enclosingTryLastLoop;
          oldEnclTryLastLoop = i2;
          i3 = enclosingTry;
          enclosingTryLastLoop = i3;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146179))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          enclosingTryLastLoop = i2;
          currentLoop = (OOC_IR__LoopStatm)i1;
          goto l129;
l81:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145774))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145818))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 145828)), 0);
          i = 0;
          i2 = 0<i1;
          if (!i2) goto l89;
          i2=0;
l84_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145868))+12);
          i3 = _check_pointer(i3, 145878);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 145878))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 145881))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l84_loop;
l89:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145939))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l91:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145706))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l93:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145555))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145594))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145637))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l95:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145357))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145389))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145423))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145455))+20);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145493))+24);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l97:
          i1 = (OOC_INT32)currentLoop;
          i2 = i1==0;
          if (i2) goto l100;
          *(OOC_INT32*)((_check_pointer(i0, 145190))+8) = i1;
          goto l101;
l100:
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 145150));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 145118)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 25, (OOC_Scanner_BasicList__Symbol)i2);
l101:
          i1 = enclosingTry;
          i2 = enclosingTryLastLoop;
          *(OOC_INT32*)((_check_pointer(i0, 145243))+12) = (i1-i2);
          goto l129;
l103:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144999))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145034))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l129;
l106:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144842))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144877))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l129;
l108:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144460))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144503))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 144513)), 0);
          i = 0;
          i2 = 0<i1;
          if (!i2) goto l116;
          i2=0;
l111_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144548))+12);
          i3 = _check_pointer(i3, 144558);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 144558))*4);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l111_loop;
l116:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144603))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 144610))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144603))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 144610))+4);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 144615)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
          type = (OOC_SymbolTable__Type)i1;
          i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 144655)))), &_td_OOC_SymbolTable__FormalParsDesc, 144655);
          fpars = (OOC_SymbolTable__FormalPars)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 144701))+56);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 144708)), 0);
          i = 0;
          i3 = 0<i2;
          if (!i3) goto l129;
          i3=0;
l119_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 144748))+56);
          i4 = _check_pointer(i4, 144755);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 144755))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 144758))+16);
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 144770));
          OOC_IR__BuilderDesc_CheckExit_CheckException((OOC_SymbolTable__Type)i4, (OOC_Scanner_BasicList__Symbol)i5);
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l119_loop;
          goto l129;
l126:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144365))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144402))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l129;
l128:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144255))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
l129:
          return;
          ;
        }


      i0 = (OOC_INT32)statmSeq;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l11;
      i = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 148276)), 0);
      i1 = 0<i0;
      if (!i1) goto l11;
      i1=0;
l5_loop:
      i2 = (OOC_INT32)statmSeq;
      i2 = _check_pointer(i2, 148314);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 148314))*4);
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
  i0 = (OOC_INT32)statmSeq;
  OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR__InitProcedure(OOC_IR__Procedure p, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__ProcDecl decl, OOC_IR__StatementSeq statmSeq, OOC_Scanner_BasicList__Symbol endOfProc, OOC_CHAR8 checkFunctionResult) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitNode((OOC_IR__Node)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i0, 148786))+4) = i1;
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 148807))+8) = i1;
  i1 = (OOC_INT32)endOfProc;
  *(OOC_INT32*)((_check_pointer(i0, 148836))+16) = i1;
  i1 = checkFunctionResult;
  *(OOC_UINT8*)((_check_pointer(i0, 148867))+12) = i1;
  return;
  ;
}

OOC_IR__Procedure OOC_IR__BuilderDesc_NewProcedure(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__ProcDecl decl, OOC_IR__StatementSeq statmSeq, OOC_Scanner_BasicList__Symbol endOfProc, OOC_CHAR8 hasBegin) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__Procedure p;
  auto OOC_IR__StatementSeq OOC_IR__BuilderDesc_NewProcedure_AddSetupCode(OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__ProcDecl decl, OOC_IR__StatementSeq statmSeq);
    
    OOC_IR__StatementSeq OOC_IR__BuilderDesc_NewProcedure_AddSetupCode(OOC_Scanner_BasicList__Symbol sym, OOC_SymbolTable__ProcDecl decl, OOC_IR__StatementSeq statmSeq) {
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
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 149929)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
          return;
          ;
        }

        
        OOC_IR__StatementSeq OOC_IR__BuilderDesc_NewProcedure_AddSetupCode_Prepend(ADT_ArrayList__ArrayList prefix, OOC_IR__StatementSeq statmSeq) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
          OOC_IR__StatementSeq _new;
          OOC_INT32 i;

          i0 = (OOC_INT32)prefix;
          i1 = (OOC_INT32)statmSeq;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 150155))+4);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 150175)), 0);
          i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], (i2+i3));
          _new = (OOC_IR__StatementSeq)i2;
          i = 0;
          i3 = *(OOC_INT32*)((_check_pointer(i0, 150208))+4);
          i4 = 0<i3;
          if (!i4) goto l8;
          i4=0;
l3_loop:
          i5 = _check_pointer(i2, 150233);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 150246));
          i7 = _check_pointer(i7, 150253);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 150253))*4);
          *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 150233))*4) = (_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 150257)))), &_td_OOC_IR__StatementDesc, 150257));
          i4 = i4+1;
          i = i4;
          i5 = i4<i3;
          if (i5) goto l3_loop;
l8:
          i = 0;
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 150316)), 0);
          i4 = 0<i3;
          if (!i4) goto l16;
          i4=0;
l11_loop:
          i5 = _check_pointer(i2, 150337);
          i6 = *(OOC_INT32*)((_check_pointer(i0, 150346))+4);
          i7 = OOC_ARRAY_LENGTH(i5, 0);
          i8 = _check_pointer(i1, 150365);
          i9 = OOC_ARRAY_LENGTH(i8, 0);
          i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 150365))*4);
          *(OOC_INT32*)(i5+(_check_index((i4+i6), i7, OOC_UINT32, 150337))*4) = i8;
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150482))+60);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150494))+48);
      formalPars = (OOC_SymbolTable__VarDeclArray)i0;
      fparIndex = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 150595)), 0);
      i0 = 0!=i0;
      if (!i0) goto l11;
      i0=0;
l3_loop:
      i1 = (OOC_INT32)formalPars;
      i1 = _check_pointer(i1, 150628);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 150628))*4);
      fpar = (OOC_SymbolTable__VarDecl)i0;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 150656))+57);
      if (!i1) goto l6;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150723)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)(OOC_INT32)0, (OOC_SymbolTable__VarDecl)i0);
      i2 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150697)))), OOC_IR__BuilderDesc_NewCopyParameter)),OOC_IR__BuilderDesc_NewCopyParameter)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Var)i0);
      OOC_IR__BuilderDesc_NewProcedure_AddSetupCode_AddStatm((OOC_IR__Statement)i0);
l6:
      i0 = fparIndex;
      i0 = i0+1;
      fparIndex = i0;
      i1 = (OOC_INT32)formalPars;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 150595)), 0);
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
      _failed_function(149273); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)sym;
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 150966))+46);
  if (i3) goto l3;
  i3=0u;
  goto l5;
l3:
  i3 = hasBegin;
  
l5:
  if (!i3) goto l7;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 151001)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 57, (OOC_Scanner_BasicList__Symbol)i2);
l7:
  i3 = (OOC_INT32)statmSeq;
  OOC_IR__BuilderDesc_CheckExit((OOC_IR__Builder)i1, (OOC_SymbolTable__ProcDecl)i0, (OOC_IR__StatementSeq)i3);
  p = (OOC_IR__Procedure)((OOC_INT32)RT0__NewObject(_td_OOC_IR__Procedure.baseTypes[0]));
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewProcedure_AddSetupCode((OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__ProcDecl)i0, (OOC_IR__StatementSeq)i3);
  statmSeq = (OOC_IR__StatementSeq)i0;
  i1 = (OOC_INT32)decl;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 151311))+16);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 151317));
  i3 = (OOC_INT32)OOC_Config_StdPragmas__functionResultCheck;
  i4 = (OOC_INT32)b;
  i2 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i4, (Config_Section_Options__Option)i3, i2);
  i3 = (OOC_INT32)endOfProc;
  i4 = (OOC_INT32)p;
  i5 = (OOC_INT32)sym;
  OOC_IR__InitProcedure((OOC_IR__Procedure)i4, (OOC_Scanner_BasicList__Symbol)i5, (OOC_SymbolTable__ProcDecl)i1, (OOC_IR__StatementSeq)i0, (OOC_Scanner_BasicList__Symbol)i3, i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 151517)))), OOC_IR__VisitorDesc_VisitProcedure)),OOC_IR__VisitorDesc_VisitProcedure)((OOC_IR__Visitor)i0, (OOC_IR__Procedure)i1);
  return;
  ;
}

void OOC_IR__InitModule(OOC_IR__Module m, OOC_Scanner_BasicList__Symbol sym, OOC_Scanner_InputBuffer__CharArray name, OOC_IR__ProcedureList procList, OOC_IR__Procedure moduleBody) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitNode((OOC_IR__Node)i0, (OOC_Scanner_BasicList__Symbol)i1);
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 151817))+4) = i1;
  i1 = (OOC_INT32)procList;
  *(OOC_INT32*)((_check_pointer(i0, 151838))+8) = i1;
  i1 = (OOC_INT32)moduleBody;
  *(OOC_INT32*)((_check_pointer(i0, 151867))+12) = i1;
  return;
  ;
}

OOC_IR__Module OOC_IR__BuilderDesc_NewModule(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_Scanner_InputBuffer__CharArray name, OOC_SymbolTable__Module decl, OOC_IR__ProcedureList procList, OOC_IR__StatementSeq statmSeq, OOC_Scanner_BasicList__Symbol endOfModule) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_IR__Module m;
  auto void OOC_IR__BuilderDesc_NewModule_UnusedDeclarations(OOC_SymbolTable__Item item);
    
    void OOC_IR__BuilderDesc_NewModule_UnusedDeclarations(OOC_SymbolTable__Item item) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Item nested;

      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 152308)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l38;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 152555))+40);
      i1 = i1==0;
      if (i1) goto l5;
      i1=0u;
      goto l7;
l5:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 152590))+24);
      i1 = i1==0;
      
l7:
      if (i1) goto l9;
      i1=0u;
      goto l15;
l9:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 152646)))), &_td_OOC_SymbolTable__VarDeclDesc));
      if (i1) goto l12;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 152675)))), &_td_OOC_SymbolTable__VarDeclDesc, 152675)), 152683))+52);
      i1 = !i1;
      
      goto l15;
l12:
      i1=1u;
l15:
      if (i1) goto l17;
      i1=0u;
      goto l23;
l17:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 152718)))), &_td_OOC_SymbolTable__TypeDeclDesc));
      if (i1) goto l20;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 152744))+4);
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 152752)))), &_td_OOC_SymbolTable__FormalParsDesc));
      
      goto l23;
l20:
      i1=1u;
l23:
      if (i1) goto l25;
      i1=0u;
      goto l35;
l25:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 152793)))), &_td_OOC_SymbolTable__ProcDeclDesc));
      if (i1) goto l32;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 152836)))), &_td_OOC_SymbolTable__ProcDeclDesc, 152836)), 152845))+45);
      if (i1) goto l30;
      i1 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 152886)))), &_td_OOC_SymbolTable__ProcDeclDesc, 152886)));
      
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 152961))+16);
      i2 = (OOC_INT32)b;
      OOC_IR__BuilderDesc_WarnName((OOC_IR__Builder)i2, 53, (OOC_SymbolTable__Name)i1);
l38:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 153045))+8);
      nested = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l46;
l41_loop:
      OOC_IR__BuilderDesc_NewModule_UnusedDeclarations((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 153149));
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 153305))+76);
  i4 = (OOC_INT32)sym;
  i5 = (OOC_INT32)statmSeq;
  i6 = (OOC_INT32)endOfModule;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 153280)))), OOC_IR__BuilderDesc_NewProcedure)),OOC_IR__BuilderDesc_NewProcedure)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i4, (OOC_SymbolTable__ProcDecl)i3, (OOC_IR__StatementSeq)i5, (OOC_Scanner_BasicList__Symbol)i6, 1u);
  i5 = (OOC_INT32)name;
  i6 = (OOC_INT32)procList;
  OOC_IR__InitModule((OOC_IR__Module)i0, (OOC_Scanner_BasicList__Symbol)i4, (OOC_Scanner_InputBuffer__CharArray)i5, (OOC_IR__ProcedureList)i6, (OOC_IR__Procedure)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 153389))+8);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 153628)))), OOC_IR__VisitorDesc_VisitModule)),OOC_IR__VisitorDesc_VisitModule)((OOC_IR__Visitor)i0, (OOC_IR__Module)i1);
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 154046)), 0);
      i2 = 0<i1;
      if (!i2) goto l10;
      i2=0;
l5_loop:
      i3 = _check_pointer(i0, 154067);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      OOC_IR__ModuleDesc_Destroy_E((void*)(i3+(_check_index(i2, i4, OOC_UINT32, 154067))*4));
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
      if (!i1) goto l139;
      *(OOC_INT32*)((_check_pointer(i0, 154243))+4) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154271)))), &_td_OOC_IR__ConstDesc);
      if (i1) goto l137;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154319)))), &_td_OOC_IR__OperatorDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156653)))), &_td_OOC_IR__ReferenceDesc);
      if (i1) goto l13;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156704)))), &_td_OOC_IR__StatementDesc);
      if (i1) goto l11;
      Log__Type("--- expression type: ", 22, (void*)i0);
      _assert(0u, 127, 156841);
      goto l138;
l11:
      OOC_IR__ModuleDesc_Destroy_S((void*)(OOC_INT32)n);
      goto l138;
l13:
      *(OOC_INT32*)((_check_pointer(i0, 156679))+8) = (OOC_INT32)0;
      goto l138;
l15:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154349)))), &_td_OOC_IR__AbsDesc);
      if (i1) goto l134;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154397)))), &_td_OOC_IR__AdrDesc);
      if (i1) goto l132;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154444)))), &_td_OOC_IR__AshDesc);
      if (i1) goto l130;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154512)))), &_td_OOC_IR__BinaryArithDesc);
      if (i1) goto l128;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154589)))), &_td_OOC_IR__BooleanOpDesc);
      if (i1) goto l126;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154664)))), &_td_OOC_IR__CapDesc);
      if (i1) goto l124;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154712)))), &_td_OOC_IR__CompareDesc);
      if (i1) goto l122;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154785)))), &_td_OOC_IR__ConcatDesc);
      if (i1) goto l120;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154840)))), &_td_OOC_IR__ConstructorDesc);
      if (i1) goto l118;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155024)))), &_td_OOC_IR__ChangeElementDesc);
      if (i1) goto l116;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155104)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l114;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155154)))), &_td_OOC_IR__EntierDesc);
      if (i1) goto l112;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155205)))), &_td_OOC_IR__IndexDesc);
      if (i1) goto l110;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155277)))), &_td_OOC_IR__LenDesc);
      if (i1) goto l108;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155379)))), &_td_OOC_IR__NegateDesc);
      if (i1) goto l106;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155430)))), &_td_OOC_IR__NewBlockDesc);
      if (i1) goto l104;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155480)))), &_td_OOC_IR__NewObjectDesc);
      if (i1) goto l102;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155537)))), &_td_OOC_IR__NotDesc);
      if (i1) goto l100;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155585)))), &_td_OOC_IR__OddDesc);
      if (i1) goto l98;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155633)))), &_td_OOC_IR__SelectFieldDesc);
      if (i1) goto l96;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155747)))), &_td_OOC_IR__SelectProcDesc);
      if (i1) goto l94;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155864)))), &_td_OOC_IR__SetMemberDesc);
      if (i1) goto l92;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155940)))), &_td_OOC_IR__SetOpDesc);
      if (i1) goto l90;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156011)))), &_td_OOC_IR__SetRangeDesc);
      if (i1) goto l88;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156082)))), &_td_OOC_IR__ShiftDesc);
      if (i1) goto l86;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156151)))), &_td_OOC_IR__TypeCastDesc);
      if (i1) goto l84;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156201)))), &_td_OOC_IR__TypeConvDesc);
      if (i1) goto l82;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156251)))), &_td_OOC_IR__TypeTagDesc);
      if (i1) goto l80;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156302)))), &_td_OOC_IR__TypeTestDesc);
      if (i1) goto l78;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156446)))), &_td_OOC_IR__TypeGuardDesc);
      if (i1) goto l76;
      Log__Type("--- operator type: ", 20, (void*)i0);
      _assert(0u, 127, 156612);
      goto l138;
l76:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 156482))+8);
      expr = (OOC_IR__Expression)i0;
      OOC_IR__ModuleDesc_Destroy_E((void*)(OOC_INT32)&expr);
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 156523))+8) = (OOC_INT32)0;
      goto l138;
l78:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 156331))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 156352))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 156390))+20));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 156415))+24) = (OOC_INT32)0;
      goto l138;
l80:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 156279))+8));
      goto l138;
l82:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 156230))+8));
      goto l138;
l84:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 156180))+8));
      goto l138;
l86:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 156108))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 156132))+12));
      goto l138;
l88:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 156040))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 156063))+12));
      goto l138;
l90:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155966))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155989))+16));
      goto l138;
l92:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155894))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155920))+12));
      goto l138;
l94:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155778))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 155803))+16) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 155832))+20) = (OOC_INT32)0;
      goto l138;
l96:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155665))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 155688))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 155716))+16) = (OOC_INT32)0;
      goto l138;
l98:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155609))+8));
      goto l138;
l100:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155561))+8));
      goto l138;
l102:
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 155514))+8));
      goto l138;
l104:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155459))+8));
      goto l138;
l106:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155406))+8));
      goto l138;
l108:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155301))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155325))+20));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 155355))+16) = 0;
      goto l138;
l110:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155231))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155255))+12));
      goto l138;
l112:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155181))+8));
      goto l138;
l114:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155130))+8));
      goto l138;
l116:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155058))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 155080))+16));
      goto l138;
l118:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 154878))+8);
      expr = (OOC_IR__Expression)i0;
      OOC_IR__ModuleDesc_Destroy_E((void*)(OOC_INT32)&expr);
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 154920))+8) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 154956))+12);
      expr = (OOC_IR__Expression)i0;
      OOC_IR__ModuleDesc_Destroy_E((void*)(OOC_INT32)&expr);
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 154997))+12) = (OOC_INT32)0;
      goto l138;
l120:
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 154816))+8));
      goto l138;
l122:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 154740))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 154763))+16));
      goto l138;
l124:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 154688))+8));
      goto l138;
l126:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 154619))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 154642))+16));
      goto l138;
l128:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 154544))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 154567))+16));
      goto l138;
l130:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 154468))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 154492))+12));
      goto l138;
l132:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 154421))+8));
      goto l138;
l134:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 154373))+8));
      goto l138;
l137:
      *(OOC_INT32*)((_check_pointer(i0, 154293))+8) = (OOC_INT32)0;
l138:
      *n = (OOC_IR__Expression)(OOC_INT32)0;
l139:
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 157037)), 0);
      i2 = 0<i1;
      if (!i2) goto l11;
      i2=0;
l5_loop:
      i3 = _check_pointer(i0, 157058);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      OOC_IR__ModuleDesc_Destroy_S((void*)(i3+(_check_index(i2, i4, OOC_UINT32, 157058))*4));
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157213)))), &_td_OOC_IR__AssertDesc);
      if (i1) goto l91;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157285)))), &_td_OOC_IR__AssignmentDesc);
      if (i1) goto l89;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157359)))), &_td_OOC_IR__CallDesc);
      if (i1) goto l87;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157464)))), &_td_OOC_IR__CopyDesc);
      if (i1) goto l85;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157529)))), &_td_OOC_IR__CopyParameterDesc);
      if (i1) goto l83;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157585)))), &_td_OOC_IR__CopyStringDesc);
      if (i1) goto l81;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157682)))), &_td_OOC_IR__ExitDesc);
      if (i1) goto l79;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157728)))), &_td_OOC_IR__ForStatmDesc);
      if (i1) goto l77;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157860)))), &_td_OOC_IR__IfStatmDesc);
      if (i1) goto l75;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157963)))), &_td_OOC_IR__CaseStatmDesc);
      if (i1) goto l64;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158246)))), &_td_OOC_IR__LoopStatmDesc);
      if (i1) goto l62;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158296)))), &_td_OOC_IR__MoveBlockDesc);
      if (i1) goto l60;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158387)))), &_td_OOC_IR__RaiseDesc);
      if (i1) goto l58;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158435)))), &_td_OOC_IR__RepeatStatmDesc);
      if (i1) goto l56;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158517)))), &_td_OOC_IR__ReturnDesc);
      if (i1) goto l54;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158563)))), &_td_OOC_IR__TryStatmDesc);
      if (i1) goto l43;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158791)))), &_td_OOC_IR__WhileStatmDesc);
      if (i1) goto l41;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158864)))), &_td_OOC_IR__WithStatmDesc);
      if (i1) goto l39;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158861)))), 158861);
      goto l92;
l39:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158892))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 158917))+12));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 158945))+16));
      goto l92;
l41:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158820))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 158845))+12));
      goto l92;
l43:
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 158593))+8));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 158634))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 158644)), 0);
      i = 0;
      i2 = 0<i1;
      if (!i2) goto l52;
      i2=0;
l47_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 158665))+12);
      i0 = _check_pointer(i0, 158675);
      i3 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i3, OOC_UINT32, 158675))*4);
      *(OOC_INT32*)((_check_pointer(i0, 158678))+4) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 158710))+12);
      i3 = _check_pointer(i3, 158720);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 158720))*4);
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i3, 158723))+12));
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l47_loop;
l52:
      *(OOC_INT32*)((_check_pointer(i0, 158761))+12) = (OOC_INT32)0;
      goto l92;
l54:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158542))+8));
      goto l92;
l56:
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 158468))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158489))+12));
      goto l92;
l58:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158411))+8));
      goto l92;
l60:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158324))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158347))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 158368))+16));
      goto l92;
l62:
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 158277))+8));
      goto l92;
l64:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157991))+8));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 158030))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 158039)), 0);
      i = 0;
      i2 = 0<i1;
      if (!i2) goto l73;
      i2=0;
l68_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 158060))+12);
      i0 = _check_pointer(i0, 158069);
      i3 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i3, OOC_UINT32, 158069))*4);
      *(OOC_INT32*)((_check_pointer(i0, 158072))+8) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 158106))+12);
      i3 = _check_pointer(i3, 158115);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 158115))*4);
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i3, 158118))+12));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 158143))+12);
      i3 = _check_pointer(i3, 158152);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 158152))*4) = (OOC_INT32)0;
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l68_loop;
l73:
      *(OOC_INT32*)((_check_pointer(i0, 158190))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 158224))+16));
      goto l92;
l75:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157886))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 157911))+12));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 157939))+16));
      goto l92;
l77:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157755))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157775))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157797))+16));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157817))+20));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 157841))+24));
      goto l92;
l79:
      *(OOC_INT32*)((_check_pointer(i0, 157703))+8) = (OOC_INT32)0;
      goto l92;
l81:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157614))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157637))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157658))+16));
      goto l92;
l83:
      *(OOC_INT32*)((_check_pointer(i0, 157559))+8) = (OOC_INT32)0;
      goto l92;
l85:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157487))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157510))+12));
      goto l92;
l87:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157382))+8));
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 157409))+12));
      *(OOC_INT32*)((_check_pointer(i0, 157433))+16) = (OOC_INT32)0;
      goto l92;
l89:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157314))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157339))+12));
      goto l92;
l91:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 157238))+8));
      *(OOC_INT32*)((_check_pointer(i0, 157262))+12) = 0;
l92:
      *n = (OOC_IR__Statement)(OOC_INT32)0;
l93:
      return;
      ;
    }


  i0 = (OOC_INT32)m;
  *(OOC_INT32*)((_check_pointer(i0, 159027))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 159064))+8);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 159073)), 0);
  i2 = 0<i1;
  if (!i2) goto l9;
  i2=0;
l4_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 159088))+8);
  i3 = _check_pointer(i3, 159097);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 159097))*4);
  *(OOC_INT32*)((_check_pointer(i3, 159100))+4) = (OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 159126))+8);
  i0 = _check_pointer(i0, 159135);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i3, OOC_UINT32, 159135))*4);
  OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 159138))+8));
  i0 = (OOC_INT32)m;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 159157))+8);
  i2 = _check_pointer(i2, 159166);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = i;
  *(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 159166))*4) = (OOC_INT32)0;
  i2 = i4+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l4_loop;
l9:
  *(OOC_INT32*)((_check_pointer(i0, 159192))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 159216))+12);
  *(OOC_INT32*)((_check_pointer(i1, 159227))+4) = (OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 159251))+12);
  OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 159262))+8));
  i0 = (OOC_INT32)m;
  *(OOC_INT32*)((_check_pointer(i0, 159279))+12) = (OOC_INT32)0;
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
  *(OOC_INT32*)(_check_pointer(i0, 159577)) = i1;
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
  *(OOC_INT32*)(_check_pointer(i0, 160446)) = i1;
  i1 = (OOC_INT32)pragmaHistory;
  *(OOC_INT32*)((_check_pointer(i0, 160471))+4) = i1;
  i1 = (OOC_INT32)errList;
  *(OOC_INT32*)((_check_pointer(i0, 160510))+8) = i1;
  i1 = (OOC_INT32)OOC_Scanner_BasicList__NewSymbol((OOC_Scanner_InputBuffer__CharArray)0, (-1));
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(17);
  i3 = (OOC_INT32)Object_Boxed__false;
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i3);
  *(OOC_INT32*)((_check_pointer(i0, 160537))+20) = i1;
  i1 = (OOC_INT32)OOC_IR__InitBuilder_NewTypeType((OOC_SymbolTable__Item)0, (OOC_SymbolTable__Position)0);
  *(OOC_INT32*)((_check_pointer(i0, 160701))+24) = i1;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)OOC_IR__InitBuilder_NewModuleType((OOC_SymbolTable__Item)0, (OOC_SymbolTable__Position)0);
  *(OOC_INT32*)((_check_pointer(i0, 160744))+28) = i1;
  i0 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 160791))+36) = 0;
  i1 = (OOC_INT32)fold;
  *(OOC_INT32*)((_check_pointer(i0, 160816))+12) = i1;
  i2 = (OOC_INT32)uses;
  *(OOC_INT32*)((_check_pointer(i0, 160842))+16) = i2;
  *(OOC_INT32*)(_check_pointer(i1, 160866)) = i0;
  i1 = (OOC_INT32)module;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 160936))+44);
  i4 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringModule;
  i5 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringType;
  i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__ResolveQualident((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable_Uses__Uses)i2, (OOC_SymbolTable__Name)i4, (OOC_SymbolTable__Name)i5);
  string = (OOC_SymbolTable__Item)i1;
  i2 = i1==0;
  if (i2) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 161196)))), &_td_OOC_SymbolTable__TypeDeclDesc, 161196)), 161205))+44);
  *(OOC_INT32*)((_check_pointer(i0, 161169))+32) = i1;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 161132))+32) = 0;
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
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__VarDecl var;
  OOC_SymbolTable__DeclarationArray da;
  OOC_SymbolTable_Namespace__Nested nested;

  i0 = (OOC_INT32)typeTest;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 161821))+8);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 161827)))), &_td_OOC_IR__VarDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162194))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 162199));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162163)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 29, (OOC_Scanner_BasicList__Symbol)i0);
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 161861))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 161868)))), &_td_OOC_IR__VarDesc, 161868)), 161872))+8);
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 161883)))), &_td_OOC_SymbolTable__VarDeclDesc, 161883);
  var = (OOC_SymbolTable__VarDecl)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__DeclarationArray.baseTypes[0], 1);
  da = (OOC_SymbolTable__DeclarationArray)i2;
  i3 = _check_pointer(i2, 161920);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 161955))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 161965))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 161976)))), &_td_OOC_SymbolTable__TypeDeclDesc, 161976)), 161985))+44);
  i0 = (OOC_INT32)OOC_IR__NewGuardedVar((OOC_SymbolTable__VarDecl)i1, (OOC_SymbolTable__Type)i0);
  *(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 161920))*4) = i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NewNested((OOC_SymbolTable__DeclarationArray)i2, 1);
  nested = (OOC_SymbolTable_Namespace__Nested)i0;
  i1 = (OOC_INT32)*namespace;
  OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace((OOC_SymbolTable_Namespace__Nested)i0, (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162096)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 162096)));
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
l4:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__DeclarationArray.baseTypes[0], 0);
  da = (OOC_SymbolTable__DeclarationArray)i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NewNested((OOC_SymbolTable__DeclarationArray)i0, 0);
  nested = (OOC_SymbolTable_Namespace__Nested)i0;
  i1 = (OOC_INT32)*namespace;
  OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace((OOC_SymbolTable_Namespace__Nested)i0, (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162407)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 162407)));
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
  ;
}

void OOC_IR__BuilderDesc_EndTypeGuard(OOC_IR__Builder b, OOC_SymbolTable__Namespace *namespace) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)*namespace;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 162579)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 162579)), 162586))+8);
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIdentRef(OOC_IR__Builder b, OOC_SymbolTable__Namespace baseNS, OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item context, OOC_Scanner_BasicList__Symbol name) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SymbolTable__Name n;
  OOC_SymbolTable__Declaration decl;
  OOC_IR__Var varRef;
  OOC_SymbolTable__Item redirModule;

  i0 = (OOC_INT32)name;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 162918))+4);
  i1 = i1==45;
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 164336)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 2, (OOC_Scanner_BasicList__Symbol)i0);
  i0=i1;
  goto l48;
l3:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162952)))), OOC_IR__BuilderDesc_GetName)),OOC_IR__BuilderDesc_GetName)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0);
  n = (OOC_SymbolTable__Name)i2;
  i3 = (OOC_INT32)ns;
  i4 = (OOC_INT32)context;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 162984)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i2, 0u);
  decl = (OOC_SymbolTable__Declaration)i3;
  i5 = i3==(OOC_INT32)0;
  if (i5) goto l46;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 163121))+16);
  OOC_SymbolTable_Uses__Mark((OOC_SymbolTable__Declaration)i3, (OOC_SymbolTable_Uses__Uses)i5, (OOC_SymbolTable__Name)i2);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 163149)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i2) goto l44;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 163240)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i2) goto l42;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 163311)))), &_td_OOC_IR__GuardedVarDesc);
  if (i2) goto l40;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 163453)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i2) goto l38;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 163529)))), &_td_OOC_SymbolTable__PredefProcDesc);
  if (i2) goto l36;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 163607)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i2) goto l34;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 163685)))), &_td_OOC_SymbolTable__ImportDesc);
  if (i2) goto l32;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 163777)))), &_td_OOC_SymbolTable__RedirectDesc);
  if (i2) goto l22;
  Log__Type("Unknown decl in NewIdentRef", 28, (void*)i3);
  _assert(0u, 127, 164282);
  goto l47;
l22:
  i2 = (OOC_INT32)baseNS;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 163849))+44);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 163826)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i5, 0u);
  redirModule = (OOC_SymbolTable__Item)i2;
  i5 = i2==(OOC_INT32)0;
  if (i5) goto l25;
  i5 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 163916)))), &_td_OOC_SymbolTable__ImportDesc));
  
  goto l27;
l25:
  i5=1u;
l27:
  if (i5) goto l29;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 164029)))), &_td_OOC_SymbolTable__ImportDesc, 164029)), 164036))+48);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 164051))+44);
  ns = (OOC_SymbolTable__Namespace)i2;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 164171))+48);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 164177))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 164171))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 164177))+12);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 164181)), 0);
  i0 = (OOC_INT32)OOC_Scanner_BasicList__CloneSymbol((OOC_Scanner_BasicList__Symbol)i0, (void*)(_check_pointer(i5, 164181)), i3);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 164076)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i1, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i4, (OOC_Scanner_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l47;
l29:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 163949)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 41, (OOC_Scanner_BasicList__Symbol)i0);
  goto l47;
l32:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 163745))+48);
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewModuleRef((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, (OOC_SymbolTable__Module)i2);
  return (OOC_IR__Expression)i0;
  goto l47;
l34:
  i0 = (OOC_INT32)OOC_IR__NewProcedureRef((OOC_Scanner_BasicList__Symbol)i0, (OOC_SymbolTable__ProcDecl)i3);
  return (OOC_IR__Expression)i0;
  goto l47;
l36:
  i0 = (OOC_INT32)OOC_IR__NewPredefProc((OOC_Scanner_BasicList__Symbol)i0, (OOC_SymbolTable__PredefProc)i3);
  return (OOC_IR__Expression)i0;
  goto l47;
l38:
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeRef((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, (OOC_SymbolTable__TypeDecl)i3);
  return (OOC_IR__Expression)i0;
  goto l47;
l40:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 163368))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 163348)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, (OOC_SymbolTable__VarDecl)i2);
  varRef = (OOC_IR__Var)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 163406))+48);
  *(OOC_INT32*)((_check_pointer(i0, 163392))+4) = i2;
  return (OOC_IR__Expression)i0;
  goto l47;
l42:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 163275)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, (OOC_SymbolTable__VarDecl)i3);
  return (OOC_IR__Expression)i0;
  goto l47;
l44:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 163205))+48);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 163217))+44);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i3);
  return (OOC_IR__Expression)i0;
  goto l47;
l46:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 163052)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 1, (OOC_Scanner_BasicList__Symbol)i0);
l47:
  i0=i1;
l48:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 164577))+20);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewQualident(OOC_IR__Builder b, OOC_SymbolTable__Namespace baseNS, OOC_IR__ModuleRef modref, OOC_SymbolTable__Item context, OOC_Scanner_BasicList__Symbol name) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)modref;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 164862))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 164873)))), &_td_OOC_SymbolTable__ModuleDesc, 164873)), 164880))+44);
  i2 = (OOC_INT32)baseNS;
  i3 = (OOC_INT32)context;
  i4 = (OOC_INT32)name;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 164833)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i0, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Namespace)i1, (OOC_SymbolTable__Item)i3, (OOC_Scanner_BasicList__Symbol)i4);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeVar(OOC_IR__Builder b, OOC_SymbolTable__Namespace baseNS, OOC_IR__TypeRef typeRef, OOC_SymbolTable__Item context, OOC_Scanner_BasicList__Symbol name) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)typeRef;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 165171))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 165181)))), &_td_OOC_SymbolTable__TypeDeclDesc, 165181)), 165190))+44);
  type = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 165209))+24);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 165326))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 165335))+20);
  i2 = (OOC_INT32)baseNS;
  i3 = (OOC_INT32)context;
  i4 = (OOC_INT32)name;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 165301)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i1, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i3, (OOC_Scanner_BasicList__Symbol)i4);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)name;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 165245)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 1, (OOC_Scanner_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(164945); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewQualType(OOC_IR__Builder b, OOC_IR__Expression type, OOC_IR__ExpressionList arguments, OOC_Scanner_BasicList__Symbol rParen) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
  OOC_SymbolTable__Type qualType;
  OOC_SymbolTable__TypeVarArray params;
  OOC_INT32 i;
  OOC_SymbolTable__Type t;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 165670)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  qualType = (OOC_SymbolTable__Type)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 165705))+4);
  i3 = i3==(OOC_INT32)0;
  if (i3) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 166377));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 166346)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 69, (OOC_Scanner_BasicList__Symbol)i2);
  goto l24;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 165754)))), &_td_OOC_SymbolTable__QualTypeDesc, 165754)), 165763))+36);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 165772))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 165781))+16);
  params = (OOC_SymbolTable__TypeVarArray)i3;
  i4 = (OOC_INT32)arguments;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 165810)), 0);
  i6 = OOC_ARRAY_LENGTH((_check_pointer(i4, 165828)), 0);
  i5 = i5<i6;
  if (i5) goto l22;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 165942)), 0);
  i6 = OOC_ARRAY_LENGTH((_check_pointer(i3, 165924)), 0);
  i5 = i6>i5;
  if (i5) goto l20;
  i = 0;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 166036)), 0);
  i6 = 0<i5;
  if (!i6) goto l24;
  i6 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i7=0;
l10_loop:
  i8 = _check_pointer(i4, 166068);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i7, i9, OOC_UINT32, 166068))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i8, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 166072)))), &_td_OOC_IR__TypeRefDesc, 166072)), 166080))+12);
  t = (OOC_SymbolTable__Type)i8;
  i9 = _check_pointer(i3, 166130);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i7, i10, OOC_UINT32, 166130))*4);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i9, 166133))+36);
  i9 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i8, (OOC_SymbolTable__Type)i9);
  if (i9) goto l13;
  i8 = _check_pointer(i4, 166281);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i7, i9, OOC_UINT32, 166281))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i8, 166284));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 166243)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 72, (OOC_Scanner_BasicList__Symbol)i8);
  goto l14;
l13:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 166187)))), &_td_OOC_SymbolTable__QualTypeDesc, 166187)), 166196))+44);
  i9 = _check_pointer(i9, 166206);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 166187)))), &_td_OOC_SymbolTable__QualTypeDesc, 166187)), 166196))+44);
  i11 = OOC_ARRAY_LENGTH((_check_pointer(i11, 166206)), 0);
  i11 = _check_index(i7, i11, OOC_UINT32, 166206);
  OOC_SymbolTable__InitTypeRef((void*)(i9+(_check_index(i7, i10, OOC_UINT32, 166206))*8), (RT0__Struct)i6, (OOC_SymbolTable__Type)i8);
l14:
  i7 = i7+1;
  i = i7;
  i8 = i7<i5;
  if (i8) goto l10_loop;
  goto l24;
l20:
  i2 = (OOC_INT32)rParen;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 165960)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 70, (OOC_Scanner_BasicList__Symbol)i2);
  goto l24;
l22:
  i2 = _check_pointer(i4, 165880);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 165891)), 0);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 165880))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 165894));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 165846)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 71, (OOC_Scanner_BasicList__Symbol)i2);
l24:
  return (OOC_IR__Expression)i1;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSelect(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression var, OOC_SymbolTable__Item context, OOC_Scanner_BasicList__Symbol name) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_IR__Expression varRef;
  OOC_SymbolTable__Type type;
  OOC_SymbolTable__Name n;
  OOC_SymbolTable__Declaration decl;
  OOC_SymbolTable__ProcDecl procDecl;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)var;
  i2 = (OOC_INT32)sym;
  OOC_IR__BuilderDesc_CheckFunctionOp((OOC_IR__Builder)i0, (OOC_IR__Expression)i1, (OOC_Scanner_BasicList__Symbol)i2);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 166808))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 166808))+4);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 166813)))), OOC_SymbolTable__TypeDesc_Bound)),OOC_SymbolTable__TypeDesc_Bound)((OOC_SymbolTable__Type)i4);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 166822)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i3) goto l3;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 166852))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 166852))+4);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 166857)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i4);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 166868)))), &_td_OOC_SymbolTable__PointerDesc);
  
  goto l5;
l3:
  i3=1u;
l5:
  if (i3) goto l7;
  varRef = (OOC_IR__Expression)i1;
  i3=i1;
  goto l8;
l7:
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 166906)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
  varRef = (OOC_IR__Expression)i3;
  
l8:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 166987))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 166987))+4);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 166992)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i5);
  type = (OOC_SymbolTable__Type)i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 167016)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i5) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 167737));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 167711)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 20, (OOC_Scanner_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l28;
l11:
  i5 = (OOC_INT32)name;
  i6 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 167047)))), OOC_IR__BuilderDesc_GetName)),OOC_IR__BuilderDesc_GetName)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i5);
  n = (OOC_SymbolTable__Name)i6;
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 167086)))), &_td_OOC_SymbolTable__RecordDesc, 167086)), 167093))+48);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 167086)))), &_td_OOC_SymbolTable__RecordDesc, 167086)), 167093))+48);
  i8 = (OOC_INT32)context;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 167096)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i4, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Name)i6, 0u);
  decl = (OOC_SymbolTable__Declaration)i4;
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 167149))+16);
  OOC_SymbolTable_Uses__Mark((OOC_SymbolTable__Declaration)i4, (OOC_SymbolTable_Uses__Uses)i7, (OOC_SymbolTable__Name)i6);
  i6 = i4==(OOC_INT32)0;
  if (i6) goto l26;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 167259)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i6) goto l24;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 167375)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i6) goto l18;
  _assert(0u, 127, 167661);
  goto l28;
l18:
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 167426)))), &_td_OOC_SymbolTable__ProcDeclDesc, 167426);
  procDecl = (OOC_SymbolTable__ProcDecl)i4;
  i3 = _check_pointer(i3, 167486);
  i6 = *(OOC_INT8*)((_check_pointer(i4, 167551))+44);
  i6 = i6==2;
  if (i6) goto l21;
  i6 = *(OOC_UINT8*)((_check_pointer(i4, 167626))+47);
  
  goto l22;
l21:
  i6=1u;
l22:
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+4);
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewSelectProc((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__ProcDecl)i4, (OOC_Scanner_BasicList__Symbol)i5, i6);
  return (OOC_IR__Expression)i0;
  goto l28;
l24:
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewSelectField((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_SymbolTable__FieldDecl)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 167338)))), &_td_OOC_SymbolTable__FieldDeclDesc, 167338)), (OOC_Scanner_BasicList__Symbol)i5);
  return (OOC_IR__Expression)i0;
  goto l28;
l26:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 167208)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 1, (OOC_Scanner_BasicList__Symbol)i5);
  return (OOC_IR__Expression)i0;
l28:
  _failed_function(166453); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0;
  OOC_INT8 id;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewOperator_IsPredefClass(OOC_SymbolTable__Type type, OOC_UINT32 classes);
  auto OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_UnaryOperator(void);
  auto OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_BinaryOperator(void);
    
    OOC_CHAR8 OOC_IR__BuilderDesc_NewOperator_IsPredefClass(OOC_SymbolTable__Type type, OOC_UINT32 classes) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 168635)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l3;
      return 0u;
      goto l4;
l3:
      i0 = *(OOC_INT16*)((_check_pointer(i0, 168672))+36);
      i1 = classes;
      return (_in(i0,i1));
l4:
      _failed_function(168556); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_UnaryOperator(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_SymbolTable__Type type;
      OOC_CHAR8 isNumeric;
      OOC_CHAR8 isSet;
      OOC_CHAR8 isBoolean;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 168885))+20);
      i2 = (OOC_INT32)left;
      i1 = i2==i1;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 168910))+20);
      i2 = (OOC_INT32)right;
      i1 = i2==i1;
      
      goto l5;
l3:
      i1=1u;
l5:
      if (i1) goto l28;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 169160))+4);
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
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 169582)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l12:
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewNegate((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l14:
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewNegate((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      case 6:
        if (i3) goto l19;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 169723)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l19:
        return (OOC_IR__Expression)i1;
        goto l29;
      case 35:
        if (i2) goto l24;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 169877)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l24:
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewNot((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      default:
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 169946)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 6, (OOC_Scanner_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      }
l28:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 169120))+20);
      return (OOC_IR__Expression)i0;
l29:
      _failed_function(168760); return 0;
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 170378)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l5;
          i0=0u;
          goto l8;
l5:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 170418)))), &_td_OOC_SymbolTable__ArrayDesc, 170418)), 170424))+40);
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
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 170647))+20);
      i4 = (OOC_INT32)left;
      i3 = i4==i3;
      if (i3) goto l3;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 170672))+20);
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
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 170950))+4);
      i5 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i5);
      
l11:
      if (i5) goto l13;
      i5=0u;
      goto l15;
l13:
      i5 = (OOC_INT32)right;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 170984))+4);
      i5 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i5);
      
l15:
      if (i5) goto l166;
      i3 = i3==16;
      if (i3) goto l164;
      i2 = OOC_IR__BuilderDesc_WidenToCommon((OOC_IR__Builder)i2, (void*)(OOC_INT32)&left, (void*)(OOC_INT32)&right);
      if (i2) goto l33;
      i0 = (OOC_INT32)left;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 174035))+4);
      i1 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i1);
      if (i1) goto l23;
      i1=0u;
      goto l25;
l23:
      i1 = (OOC_INT32)right;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 174058))+4);
      i1 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i1);
      
l25:
      if (i1) goto l27;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 174289)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 7, (OOC_Scanner_BasicList__Symbol)i1);
      
      goto l169;
l27:
      i1 = id;
      i1 = _in(i1,32256u);
      if (i1) goto l30;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 174222)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_BasicList__Symbol)i1);
      
      goto l169;
l30:
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)sym;
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewCompare((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i2, (OOC_IR__Expression)i0, (OOC_IR__Expression)i1);
      
      goto l169;
l33:
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 171189))+4);
      leftType = (OOC_SymbolTable__Type)i3;
      i4 = (OOC_INT32)right;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 171214))+4);
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
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 173096))+4);
      i6 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i6);
      
l68:
      if (i6) goto l70;
      i6=0u;
      goto l72;
l70:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 173119))+4);
      i6 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i6);
      
l72:
      if (i6) goto l130;
      i6 = i10==6;
      if (i6) goto l76;
      i6=0u;
      goto l85;
l76:
      if (i9) goto l78;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 173269))+4);
      i6 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i6);
      
      goto l80;
l78:
      i6=1u;
l80:
      if (i6) goto l82;
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 173308))+4);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 173730))+4);
      i0 = i1==i0;
      
      goto l109;
l107:
      i0=1u;
l109:
      if (i0) goto l111;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 173771)))), &_td_OOC_SymbolTable__PointerDesc);
      
      goto l113;
l111:
      i0=1u;
l113:
      if (i0) goto l115;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 173815)))), &_td_OOC_SymbolTable__TypeVarDesc);
      
      goto l117;
l115:
      i0=1u;
l117:
      if (i0) goto l119;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 173859)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l122;
l119:
      i0=1u;
l122:
      if (i0) goto l124;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 173964)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_BasicList__Symbol)i1);
      
      goto l169;
l124:
      i0 = (OOC_INT32)sym;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewCompare((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
      
      goto l169;
l126:
      i0 = (OOC_INT32)sym;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewCompare((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
      
      goto l169;
l128:
      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], 2);
      exprList = (OOC_IR__ExpressionList)i0;
      i1 = _check_pointer(i0, 173363);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      *(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 173363))*4) = i2;
      i1 = _check_pointer(i0, 173392);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 173392))*4) = i4;
      i1 = (OOC_INT32)sym;
      i2 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewConcat((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__ExpressionList)i0);
      
      goto l169;
l130:
      i0 = (OOC_INT32)sym;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewCompare((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
      
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
        _failed_case(i10, 172839);
        goto l136;
      }
l136:
      i0 = variant;
      i1 = (OOC_INT32)sym;
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewBooleanOp((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i1, i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
      
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
        _failed_case(i10, 172524);
        goto l144;
      }
l144:
      i0 = (OOC_INT32)b;
      i1 = variant;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 172731)))), OOC_IR__BuilderDesc_NewSetOp)),OOC_IR__BuilderDesc_NewSetOp)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i3, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
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
        _failed_case(i10, 172228);
        goto l150;
      }
l150:
      i0 = variant;
      i1 = (OOC_INT32)sym;
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewBinaryArith((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i1, i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
      
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
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewBinaryArith((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i1, 3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3);
      
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
        _failed_case(i10, 171587);
        goto l161;
      }
l161:
      i0 = variant;
      i1 = (OOC_INT32)sym;
      i3 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewBinaryArith((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i1, i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4);
      
      goto l169;
l164:
      i0 = (OOC_INT32)right;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 171091)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i4, (OOC_IR__Expression)i0);
      
      goto l169;
l166:
      i0 = (OOC_INT32)right;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 171013)))), OOC_IR__BuilderDesc_NewSetMember)),OOC_IR__BuilderDesc_NewSetMember)((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i4, (OOC_IR__Expression)i0);
      
      goto l169;
l168:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 170892))+20);
      
l169:
      return (OOC_IR__Expression)i0;
      ;
    }


  i0 = (OOC_INT32)sym;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 174395))+4);
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
  _failed_function(167793); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewCall(OOC_IR__Builder b, OOC_IR__Expression design, OOC_IR__ExpressionList arguments, OOC_CHAR8 isFunctionCall, OOC_SymbolTable__Item context, OOC_Scanner_BasicList__Symbol endOfArgsSym) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SymbolTable__PredefProc predefProc;
  OOC_IR__Expression code;
  OOC_SymbolTable__Type type;
  OOC_INT32 dim;
  OOC_IR__Expression delta;
  OOC_INT8 op;
  Object_Boxed__Object value;
  OOC_INT16 targetType;
  OOC_INT32 dummy;
  OOC_IR__Call call;
  OOC_IR__Expression receiver;
  OOC_SymbolTable__VarDeclArray formalPars;
  auto void OOC_IR__BuilderDesc_NewCall_MakeParameterCompatible(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression *arg, OOC_SymbolTable__VarDecl fpar, OOC_SymbolTable__Type fparType);
  auto void OOC_IR__BuilderDesc_NewCall_TransformArgs(OOC_Scanner_BasicList__Symbol sym, OOC_Scanner_BasicList__Symbol endOfArgsSym, OOC_SymbolTable__Type formalParsClosure, OOC_IR__Expression receiver, OOC_IR__ExpressionList *arguments, OOC_SymbolTable__VarDeclArray *argFormalPars);
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(OOC_INT32 min, OOC_INT32 max);
  auto OOC_IR__ExpressionList OOC_IR__BuilderDesc_NewCall_StripFirst(OOC_IR__ExpressionList exprList);
    
    void OOC_IR__BuilderDesc_NewCall_MakeParameterCompatible(OOC_IR__Builder b, OOC_Scanner_BasicList__Symbol sym, OOC_IR__Expression *arg, OOC_SymbolTable__VarDecl fpar, OOC_SymbolTable__Type fparType) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Type argType;
      OOC_CHAR8 ok;

      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 175572))+4);
      argType = (OOC_SymbolTable__Type)i0;
      i1 = (OOC_INT32)fpar;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 175593))+53);
      if (!i2) goto l4;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 175636)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
      argType = (OOC_SymbolTable__Type)i0;
      i2 = (OOC_INT32)fparType;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 175676)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
      fparType = (OOC_SymbolTable__Type)i2;
      
l4:
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 175719))+59);
      if (i2) goto l7;
      i2=0u;
      goto l9;
l7:
      i2 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 16);
      
l9:
      if (i2) goto l79;
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 175925))+55);
      if (i2) goto l36;
      i2 = (OOC_INT32)fparType;
      i3 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i2);
      if (i3) goto l23;
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 178123))+53);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 178002)))), &_td_OOC_SymbolTable__ArrayDesc, 178002)), 178008))+40);
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
      if (!i0) goto l79;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*arg;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 178521));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 178485)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 12, (OOC_Scanner_BasicList__Symbol)i1);
      OOC_IR__BuilderDesc_SetNameToType((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i2);
      goto l79;
l36:
      i2 = (OOC_INT32)*arg;
      i3 = (OOC_INT32)b;
      OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i3, (OOC_IR__Expression)i2);
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 176019))+53);
      if (i1) goto l39;
      i1=0u;
      goto l41;
l39:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 176042)))), &_td_OOC_SymbolTable__PointerDesc);
      
l41:
      if (!i1) goto l44;
      i0 = (OOC_INT32)*arg;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 176167));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 176153)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i0);
      *arg = (OOC_IR__Expression)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 176203))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 176203))+4);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 176208)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
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
      i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i1);
      if (i2) goto l57;
      i2=0u;
      goto l61;
l57:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 176467)))), &_td_OOC_SymbolTable__ArrayDesc, 176467)), 176473))+40);
      i2 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i2, 11);
      
      goto l61;
l59:
      i2=1u;
l61:
      if (i2) goto l79;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 176707)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i2) goto l72;
      i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i1);
      if (i2) goto l67;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 177463));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 177429)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 40, (OOC_Scanner_BasicList__Symbol)i0);
      OOC_IR__BuilderDesc_SetNameToType((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i1);
      goto l79;
l67:
      i0 = OOC_SymbolTable_TypeRules__IsArrayCompatible((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
      i0 = !i0;
      if (!i0) goto l79;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 177294));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 177260)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 40, (OOC_Scanner_BasicList__Symbol)i0);
      OOC_IR__BuilderDesc_SetNameToType((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i1);
      goto l79;
l72:
      i0 = OOC_SymbolTable_TypeRules__IsExtensionOfNoParams((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
      i0 = !i0;
      if (!i0) goto l79;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 176959));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 176925)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 40, (OOC_Scanner_BasicList__Symbol)i0);
      OOC_IR__BuilderDesc_SetNameToType((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i1);
l79:
      return;
      ;
    }

    
    void OOC_IR__BuilderDesc_NewCall_TransformArgs(OOC_Scanner_BasicList__Symbol sym, OOC_Scanner_BasicList__Symbol endOfArgsSym, OOC_SymbolTable__Type formalParsClosure, OOC_IR__Expression receiver, OOC_IR__ExpressionList *arguments, OOC_SymbolTable__VarDeclArray *argFormalPars) {
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 179693)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l5;
          return 0;
          goto l8;
l5:
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 179738)))), &_td_OOC_SymbolTable__ArrayDesc, 179738)), 179744)))), OOC_SymbolTable__TypeDesc_ArrayDimensions)),OOC_SymbolTable__TypeDesc_ArrayDimensions)((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 179738)))), &_td_OOC_SymbolTable__ArrayDesc, 179738)));
          return i0;
          goto l8;
l7:
          return 1;
l8:
          _failed_function(179563); return 0;
          ;
        }


      i0 = (OOC_INT32)*arguments;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 179894)), 0);
      i1 = (OOC_INT32)ADT_ArrayList__New(i1);
      newArgs = (ADT_ArrayList__ArrayList)i1;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 179946)), 0);
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
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 180150)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i3);
      fparType = (OOC_SymbolTable__Type)i3;
      i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 180195)))), &_td_OOC_SymbolTable__FormalParsDesc, 180195);
      formalPars = (OOC_SymbolTable__FormalPars)i3;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 180248))+48);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 180256)), 0);
      i3 = i1!=i3;
      if (i3) goto l7;
      i0=0u;
      goto l9;
l7:
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 180300)), 0);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 180447))+48);
      i2 = _check_pointer(i2, 180455);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 180455))*4);
      fpar = (OOC_SymbolTable__VarDecl)i1;
      i2 = (OOC_INT32)*arguments;
      i2 = _check_pointer(i2, 180494);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT32, 180494))*4);
      arg = (OOC_IR__Expression)i0;
      
      goto l16;
l15:
      i0 = (OOC_INT32)formalPars;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 180367))+36);
      fpar = (OOC_SymbolTable__VarDecl)i0;
      i1 = (OOC_INT32)receiver;
      arg = (OOC_IR__Expression)i1;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l16:
      i2 = (OOC_INT32)formalParsClosure;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 180639))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 180558));
      i4 = (OOC_INT32)b;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 180626)))), OOC_SymbolTable__TypeDesc_Closure)),OOC_SymbolTable__TypeDesc_Closure)((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
      OOC_IR__BuilderDesc_NewCall_MakeParameterCompatible((OOC_IR__Builder)i4, (OOC_Scanner_BasicList__Symbol)i0, (void*)(OOC_INT32)&arg, (OOC_SymbolTable__VarDecl)i1, (OOC_SymbolTable__Type)i2);
      i0 = *(OOC_UINT8*)((_check_pointer(i1, 180672))+56);
      if (i0) goto l19;
      i0=0u;
      goto l21;
l19:
      i0 = (OOC_INT32)arg;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 180725))+4);
      i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 16);
      i0 = !i0;
      
l21:
      if (i0) goto l23;
      i0 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)arg;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 181080)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
      goto l24;
l23:
      i0 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)arg;
      i4 = (OOC_INT32)sym;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 181028)))), OOC_IR__BuilderDesc_NewAdr)),OOC_IR__BuilderDesc_NewAdr)((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i4, (OOC_IR__Expression)i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 181017)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
l24:
      i0 = (OOC_INT32)newFPars;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 181125)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 181158))+60);
      if (!i2) goto l52;
      i2 = (OOC_INT32)arg;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 181204))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 181204))+4);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 181209)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
      argType = (OOC_SymbolTable__Type)i2;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 181247))+44);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 181247))+44);
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 181252)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i4);
      fparType = (OOC_SymbolTable__Type)i3;
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 181287)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i4) goto l35;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 182271)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i2) goto l52;
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 182306))+55);
      if (!i1) goto l52;
      i1 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)arg;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 182373));
      i4 = (OOC_INT32)b;
      i2 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeTag((OOC_IR__Builder)i4, (OOC_Scanner_BasicList__Symbol)i3, (OOC_IR__Expression)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 182345)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 182409)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)(OOC_INT32)0);
      goto l52;
l35:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 181339))+40);
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
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 182156));
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 182143)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i4, (OOC_Scanner_BasicList__Symbol)i6, (OOC_IR__Expression)i5, i3);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 182134)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i4, (OOC_IR__Expression)i5);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 182123)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 182198)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)(OOC_INT32)0);
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
      i2 = *(OOC_INT32*)((_check_pointer(i2, 181697))+28);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 181545));
      i2 = (OOC_INT32)Object_BigInt__NewInt(i2);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 181530)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i5, (Object_Boxed__Object)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 181519)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 181729)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)(OOC_INT32)0);
l52:
      i0 = argIndex;
      i0 = i0+1;
      i1 = fparIndex;
      argIndex = i0;
      i1 = i1+1;
      fparIndex = i1;
      i2 = (OOC_INT32)formalPars;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 180248))+48);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 180256)), 0);
      i2 = i1!=i2;
      if (i2) goto l55;
      i2=0u;
      goto l57;
l55:
      i2 = (OOC_INT32)*arguments;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 180300)), 0);
      i2 = i0!=i2;
      
l57:
      if (i2) goto l12_loop;
l61:
      i2 = (OOC_INT32)formalPars;
      i3 = (OOC_INT32)newArgs;
      i4 = *(OOC_UINT8*)((_check_pointer(i2, 182660))+52);
      if (!i4) goto l74;
      i4 = (OOC_INT32)*arguments;
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 182725)), 0);
      i5 = i0!=i5;
      if (!i5) goto l74;
      i5 = (OOC_INT32)newFPars;
      
l68_loop:
      i6 = _check_pointer(i4, 182758);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i0, i7, OOC_UINT32, 182758))*4);
      arg = (OOC_IR__Expression)i6;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 182787)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i3, (Object__Object)i6);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 182821)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i5, (Object__Object)(OOC_INT32)0);
      i0 = i0+1;
      argIndex = i0;
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i4, 182725)), 0);
      i6 = i0!=i6;
      if (i6) goto l68_loop;
l74:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 182931))+48);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 182939)), 0);
      i1 = i1!=i2;
      if (i1) goto l80;
      i1 = (OOC_INT32)*arguments;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 183089)), 0);
      i2 = i0!=i2;
      if (!i2) goto l81;
      i2 = (OOC_INT32)b;
      i1 = _check_pointer(i1, 183196);
      i4 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i4, OOC_UINT32, 183196))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 183206));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 183159)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 39, (OOC_Scanner_BasicList__Symbol)i0);
      goto l81;
l80:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)endOfArgsSym;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 183009)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 38, (OOC_Scanner_BasicList__Symbol)i1);
l81:
      i0 = *(OOC_INT32*)((_check_pointer(i3, 183261))+4);
      *arguments = (OOC_IR__ExpressionList)((OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], i0));
      i0 = *(OOC_INT32*)((_check_pointer(i3, 183303))+4);
      *argFormalPars = (OOC_SymbolTable__VarDeclArray)((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], i0));
      i0 = *(OOC_INT32*)((_check_pointer(i3, 183339))+4);
      i = 0;
      i1 = 0<i0;
      if (!i1) goto l93;
      i1 = (OOC_INT32)newFPars;
      i2=0;
l84_loop:
      i4 = (OOC_INT32)*arguments;
      i4 = _check_pointer(i4, 183368);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 183382));
      i6 = _check_pointer(i6, 183389);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 183389))*4);
      *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 183368))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 183393)))), &_td_OOC_IR__ExpressionDesc, 183393));
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 183426));
      i4 = _check_pointer(i4, 183433);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 183433))*4);
      i4 = i4==(OOC_INT32)0;
      if (i4) goto l87;
      i4 = (OOC_INT32)*argFormalPars;
      i4 = _check_pointer(i4, 183520);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 183535));
      i6 = _check_pointer(i6, 183542);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 183542))*4);
      *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 183520))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 183550)))), &_td_OOC_SymbolTable__VarDeclDesc, 183550));
      goto l88;
l87:
      i4 = (OOC_INT32)*argFormalPars;
      i4 = _check_pointer(i4, 183472);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 183472))*4) = (OOC_INT32)0;
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 183707)), 0);
      i2 = min;
      i1 = i1<i2;
      if (i1) goto l3;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 183735)), 0);
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 183799));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 183759)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 13, (OOC_Scanner_BasicList__Symbol)i1);
      return 0u;
l8:
      _failed_function(183620); return 0;
      ;
    }

    
    OOC_IR__ExpressionList OOC_IR__BuilderDesc_NewCall_StripFirst(OOC_IR__ExpressionList exprList) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_IR__ExpressionList newList;
      OOC_INT32 i;

      i0 = (OOC_INT32)exprList;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 184069)), 0);
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], (i1-1));
      newList = (OOC_IR__ExpressionList)i1;
      i = 1;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 184108)), 0);
      i3 = 1<i2;
      if (!i3) goto l8;
      i3=1;
l3_loop:
      i4 = _check_pointer(i1, 184131);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = _check_pointer(i0, 184148);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 184148))*4);
      *(OOC_INT32*)(i4+(_check_index((i3-1), i5, OOC_UINT32, 184131))*4) = i6;
      i3 = i3+1;
      i = i3;
      i4 = i3<i2;
      if (i4) goto l3_loop;
l8:
      return (OOC_IR__ExpressionList)i1;
      ;
    }


  i0 = (OOC_INT32)design;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 184232)))), &_td_OOC_IR__PredefProcDesc);
  if (i1) goto l51;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 194840))+20);
  i2 = i0==i2;
  if (i2) goto l49;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 194980))+4);
  i2 = OOC_SymbolTable_TypeRules__IsValidReceiverType((OOC_SymbolTable__Type)i2);
  if (i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 195010))+4);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 195016)))), &_td_OOC_SymbolTable__TypeVarDesc);
  
  goto l9;
l7:
  i2=1u;
l9:
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)arguments;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 195061)), 0);
  i2 = i2==1;
  
l13:
  if (i2) goto l15;
  i2=0u;
  goto l17;
l15:
  i2 = (OOC_INT32)arguments;
  i2 = _check_pointer(i2, 195081);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 195081))*4);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 195085)))), &_td_OOC_IR__TypeRefDesc);
  
l17:
  if (i2) goto l47;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 195232))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 195241))+24);
  i2 = i2==i3;
  if (i2) goto l45;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 195340))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 195340))+4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 195345)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i3);
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 195356)))), &_td_OOC_SymbolTable__FormalParsDesc));
  if (i2) goto l43;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 195468))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 195468))+4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 195473)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i3);
  type = (OOC_SymbolTable__Type)i2;
  i3 = isFunctionCall;
  if (i3) goto l25;
  i4=0u;
  goto l27;
l25:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 195523)))), &_td_OOC_SymbolTable__FormalParsDesc, 195523)), 195534))+40);
  i4 = i4==(OOC_INT32)0;
  
l27:
  if (i4) goto l41;
  i3 = !i3;
  if (i3) goto l31;
  i2=0u;
  goto l33;
l31:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 195665)))), &_td_OOC_SymbolTable__FormalParsDesc, 195665)), 195676))+40);
  i2 = i2!=(OOC_INT32)0;
  
l33:
  if (i2) goto l39;
  call = (OOC_IR__Call)((OOC_INT32)RT0__NewObject(_td_OOC_IR__Call.baseTypes[0]));
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 195820)))), &_td_OOC_IR__SelectProcDesc);
  if (i1) goto l37;
  receiver = (OOC_IR__Expression)(OOC_INT32)0;
  i1=(OOC_INT32)0;
  goto l38;
l37:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 195871)))), &_td_OOC_IR__SelectProcDesc, 195871)), 195882))+8);
  receiver = (OOC_IR__Expression)i1;
  
l38:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 196009))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 195983));
  i3 = (OOC_INT32)endOfArgsSym;
  OOC_IR__BuilderDesc_NewCall_TransformArgs((OOC_Scanner_BasicList__Symbol)i0, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i1, (void*)(OOC_INT32)&arguments, (void*)(OOC_INT32)&formalPars);
  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)call;
  i2 = (OOC_INT32)design;
  i3 = (OOC_INT32)arguments;
  OOC_IR__InitCall((OOC_IR__Call)i1, (OOC_IR__Expression)i2, (OOC_IR__ExpressionList)i3, (OOC_SymbolTable__VarDeclArray)i0);
  return (OOC_IR__Expression)i1;
  goto l216;
l39:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 195756));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 195718)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 36, (OOC_Scanner_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l216;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 195615));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 195576)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 37, (OOC_Scanner_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l216;
l43:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 195427));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 195396)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 35, (OOC_Scanner_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l216;
l45:
  i2 = (OOC_INT32)arguments;
  i3 = (OOC_INT32)endOfArgsSym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 195273)))), OOC_IR__BuilderDesc_NewQualType)),OOC_IR__BuilderDesc_NewQualType)((OOC_IR__Builder)i1, (OOC_IR__Expression)i0, (OOC_IR__ExpressionList)i2, (OOC_Scanner_BasicList__Symbol)i3);
  return (OOC_IR__Expression)i0;
  goto l216;
l47:
  i2 = (OOC_INT32)arguments;
  i3 = _check_pointer(i2, 195141);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 195141))*4);
  i2 = _check_pointer(i2, 195198);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 195198))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 195144));
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeGuard((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__TypeRef)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 195202)))), &_td_OOC_IR__TypeRefDesc, 195202)));
  return (OOC_IR__Expression)i0;
  goto l216;
l49:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 194874))+20);
  return (OOC_IR__Expression)i0;
  goto l216;
l51:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 184274))+8);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 184285)))), &_td_OOC_SymbolTable__PredefProcDesc, 184285);
  predefProc = (OOC_SymbolTable__PredefProc)i0;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 184342))+46);
  i0 = *(OOC_INT16*)((_check_pointer(i0, 184363))+48);
  i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(i1, i0);
  i0 = !i0;
  if (!i0) goto l54;
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 184579))+20);
  return (OOC_IR__Expression)i0;
l54:
  i0 = (OOC_INT32)design;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 184627))+8);
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 184638)))), &_td_OOC_SymbolTable__PredefProcDesc, 184638)), 184649))+44);
  switch (i1) {
  case 0:
    i1 = (OOC_INT32)arguments;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 184740)), 0);
    i2 = i2>1;
    if (i2) goto l59;
    code = (OOC_IR__Expression)(OOC_INT32)0;
    i2=(OOC_INT32)0;
    goto l60;
l59:
    i2 = _check_pointer(i1, 184780);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i3, OOC_UINT8, 184780))*4);
    code = (OOC_IR__Expression)i2;
    
l60:
    i1 = _check_pointer(i1, 184885);
    i3 = OOC_ARRAY_LENGTH(i1, 0);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 184962));
    i4 = *(OOC_INT32*)((_check_pointer(i4, 184967))+16);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 184885))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 184869));
    i3 = (OOC_INT32)OOC_Config_StdPragmas__assertions;
    i5 = (OOC_INT32)b;
    i3 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i5, (Config_Section_Options__Option)i3, i4);
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewAssert((OOC_IR__Builder)i5, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, (!i3));
    return (OOC_IR__Expression)i0;
    goto l216;
  case 1:
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 185054);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 185054))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 185033));
    i2 = (OOC_INT32)b;
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewAssert((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)(OOC_INT32)0, (OOC_IR__Expression)i1, 0u);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 22:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 185144);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i5 = _check_pointer(i2, 185158);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i2 = _check_pointer(i2, 185229);
    i7 = OOC_ARRAY_LENGTH(i2, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 185144))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(1, i6, OOC_UINT8, 185158))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i7, OOC_UINT8, 185229))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 185213));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 185128));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 185197)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i5, (OOC_IR__Expression)i2, 0);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 185105)))), OOC_IR__BuilderDesc_NewCopyString)),OOC_IR__BuilderDesc_NewCopyString)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 21:
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 185293);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 185293))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 185296))+4);
    i1 = _check_pointer(i1, 185293);
    i3 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 185293))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 185296))+4);
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 185301)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
    type = (OOC_SymbolTable__Type)i1;
    i2 = (OOC_INT32)b;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 185333))+24);
    i3 = i1==i3;
    if (i3) goto l83;
    i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 185544)))), &_td_OOC_SymbolTable__PointerDesc);
    if (i0) goto l68;
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 186439);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 186439))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 186442));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 186407)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 50, (OOC_Scanner_BasicList__Symbol)i0);
    goto l84;
l68:
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 185596);
    i3 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i3, OOC_UINT8, 185596))*4);
    OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i2, (OOC_IR__Expression)i0);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 185629)))), &_td_OOC_SymbolTable__PointerDesc, 185629)), 185637))+36);
    type = (OOC_SymbolTable__Type)i0;
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 185667)))), &_td_OOC_SymbolTable__ArrayDesc);
    if (i1) goto l77;
    i0 = OOC_SymbolTable_TypeRules__VariableInstance((OOC_SymbolTable__Type)i0);
    i0 = !i0;
    if (!i0) goto l73;
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 186119);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 186119))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 186122));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 186080)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 56, (OOC_Scanner_BasicList__Symbol)i0);
l73:
    i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(1, 1);
    if (!i0) goto l84;
    i0 = (OOC_INT32)b;
    i1 = (OOC_INT32)design;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 186274);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 186334);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i5, OOC_UINT8, 186334))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 186337))+4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 186274))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 186319));
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 186259));
    i2 = (OOC_INT32)OOC_IR__BuilderDesc_NewNewObject((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i2, (OOC_IR__ExpressionList)(OOC_INT32)0);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 186218)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l84;
l77:
    i0 = OOC_SymbolTable__ArrayDesc_GetOpenDimensions((OOC_SymbolTable__Array)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 185716)))), &_td_OOC_SymbolTable__ArrayDesc, 185716)));
    i0 = 1+i0;
    dim = i0;
    i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(i0, i0);
    if (!i0) goto l84;
    i0 = (OOC_INT32)b;
    i1 = (OOC_INT32)design;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 185876);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i5 = _check_pointer(i2, 185936);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT8, 185936))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 185939))+4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 185876))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 185921));
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 185861));
    i2 = (OOC_INT32)OOC_IR__BuilderDesc_NewNewObject((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i5, (OOC_IR__ExpressionList)i2);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 185820)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i0, (OOC_Scanner_BasicList__Symbol)i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l84;
l83:
    i1 = (OOC_INT32)arguments;
    i3 = _check_pointer(i1, 185404);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 185404))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 185389));
    i1 = (OOC_INT32)OOC_IR__BuilderDesc_NewCall_StripFirst((OOC_IR__ExpressionList)i1);
    i4 = (OOC_INT32)context;
    i5 = (OOC_INT32)endOfArgsSym;
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 185367)))), OOC_IR__BuilderDesc_NewConstructor)),OOC_IR__BuilderDesc_NewConstructor)((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__ExpressionList)i1, (OOC_SymbolTable__Item)i4, (OOC_Scanner_BasicList__Symbol)i5);
    return (OOC_IR__Expression)i0;
l84:
    i0 = (OOC_INT32)b;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 186478))+20);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 4:
  case 5:
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 186549);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i1 = _check_pointer(i1, 186581);
    i4 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i4, OOC_UINT8, 186581))*4);
    i4 = (OOC_INT32)b;
    i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i4, (OOC_IR__Expression)i1);
    *(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 186549))*4) = i1;
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 186616);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 186616))*4);
    OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i4, (OOC_IR__Expression)i1);
    i1 = (OOC_INT32)arguments;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 186648)), 0);
    i2 = i2==1;
    if (i2) goto l88;
    i1 = _check_pointer(i1, 186766);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 186766))*4);
    delta = (OOC_IR__Expression)i1;
    goto l89;
l88:
    i1 = _check_pointer(i1, 186713);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 186713))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 186716))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 186697));
    i1 = (OOC_INT32)OOC_IR__BuilderDesc_GetOne((OOC_IR__Builder)i4, (OOC_Scanner_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i1);
    delta = (OOC_IR__Expression)i1;
l89:
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 186819);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 186819))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 186822))+4);
    i1 = OOC_IR__BuilderDesc_Widen((OOC_IR__Builder)i4, (void*)(OOC_INT32)&delta, (OOC_SymbolTable__Type)i1);
    if (i1) goto l92;
    i1 = (OOC_INT32)delta;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 187209));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 187181)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i4, 5, (OOC_Scanner_BasicList__Symbol)i1);
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 187271);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i1 = _check_pointer(i1, 187285);
    i5 = OOC_ARRAY_LENGTH(i1, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 187271))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i5, OOC_UINT8, 187285))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 187256));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 187234)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i4, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l216;
l92:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 186854))+8);
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 186865)))), &_td_OOC_SymbolTable__PredefProcDesc, 186865)), 186876))+44);
    i1 = i1==4;
    if (i1) goto l95;
    op = 1;
    i1=1;
    goto l96;
l95:
    op = 0;
    i1=0;
l96:
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 187143);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 187143))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 187123));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 187025));
    i5 = (OOC_INT32)delta;
    i1 = (OOC_INT32)OOC_IR__BuilderDesc_NewBinaryArith((OOC_IR__Builder)i4, (OOC_Scanner_BasicList__Symbol)i3, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i5);
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewAssignOp((OOC_IR__Builder)i4, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 6:
  case 7:
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 187376);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 187376))*4);
    i2 = (OOC_INT32)b;
    OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i2, (OOC_IR__Expression)i1);
    i1 = (OOC_INT32)arguments;
    i3 = _check_pointer(i1, 187399);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i1 = _check_pointer(i1, 187427);
    i5 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i5, OOC_UINT8, 187427))*4);
    i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertSet((OOC_IR__Builder)i2, (OOC_IR__Expression)i1);
    *(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 187399))*4) = i1;
    i1 = (OOC_INT32)arguments;
    i3 = _check_pointer(i1, 187450);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i1 = _check_pointer(i1, 187482);
    i5 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i5, OOC_UINT8, 187482))*4);
    i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i2, (OOC_IR__Expression)i1);
    *(OOC_INT32*)(i3+(_check_index(1, i4, OOC_UINT8, 187450))*4) = i1;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 187506))+8);
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 187517)))), &_td_OOC_SymbolTable__PredefProcDesc, 187517)), 187528))+44);
    i1 = i1==6;
    if (i1) goto l101;
    op = 23;
    i1=23;
    goto l102;
l101:
    op = 22;
    i1=22;
l102:
    i3 = (OOC_INT32)arguments;
    i4 = _check_pointer(i3, 187806);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i3 = _check_pointer(i3, 187820);
    i6 = OOC_ARRAY_LENGTH(i3, 0);
    i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT8, 187806))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(1, i6, OOC_UINT8, 187820))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 187736));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 187673));
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 187711)))), OOC_IR__BuilderDesc_NewChangeElement)),OOC_IR__BuilderDesc_NewChangeElement)((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i5, i1, (OOC_IR__Expression)i4, (OOC_IR__Expression)i3);
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewAssignOp((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 23:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 187897);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 187897))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 187882));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 187866)))), OOC_IR__BuilderDesc_NewRaise)),OOC_IR__BuilderDesc_NewRaise)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 2:
    i1 = (OOC_INT32)arguments;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 187991)), 0);
    i3 = (OOC_INT32)b;
    i2 = i2!=2;
    if (i2) goto l107;
    i2 = _check_pointer(i1, 188110);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i5 = _check_pointer(i1, 188163);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT8, 188163))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 188166))+4);
    i1 = _check_pointer(i1, 188163);
    i6 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i6, OOC_UINT8, 188163))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 188166))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i4, OOC_UINT8, 188110))*4);
    i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 188172)))), OOC_SymbolTable__TypeDesc_ArrayDimensions)),OOC_SymbolTable__TypeDesc_ArrayDimensions)((OOC_SymbolTable__Type)i1);
    i1 = OOC_IR__BuilderDesc_AssertIntConst((OOC_IR__Builder)i3, (OOC_IR__Expression)i2, 0, i1);
    dim = i1;
    
    goto l108;
l107:
    dim = 0;
    i1=0;
l108:
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 188248);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 188248))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 188251))+4);
    i2 = OOC_SymbolTable_TypeRules__IsArray((OOC_SymbolTable__Type)i2);
    i2 = !i2;
    if (!i2) goto l111;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 188348);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 188348))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 188351));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 188319)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 15, (OOC_Scanner_BasicList__Symbol)i2);
l111:
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 188429);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 188429))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 188413));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 188397)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i2, i1);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 20:
  case 19:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 188513);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 188513))*4);
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 188490)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    type = (OOC_SymbolTable__Type)i2;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 188537))+8);
    i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 188548)))), &_td_OOC_SymbolTable__PredefProcDesc, 188548)), 188559))+44);
    i0 = i0==20;
    if (i0) goto l115;
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetMax((OOC_SymbolTable__Type)i2);
    value = (Object_Boxed__Object)i0;
    
    goto l116;
l115:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetMin((OOC_SymbolTable__Type)i2);
    value = (Object_Boxed__Object)i0;
    
l116:
    i3 = i0==(OOC_INT32)0;
    if (i3) goto l123;
    i3 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i2);
    if (!i3) goto l122;
    i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(4);
    type = (OOC_SymbolTable__Type)i2;
    
l122:
    i3 = (OOC_INT32)arguments;
    i3 = _check_pointer(i3, 188962);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 188962))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 188965));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 188941)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i0);
    return (OOC_IR__Expression)i0;
    goto l216;
l123:
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 188769);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 188769))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 188772));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 188739)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 18, (OOC_Scanner_BasicList__Symbol)i0);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 3:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 189078);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 189078))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 189062));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 189045)))), OOC_IR__BuilderDesc_NewSize)),OOC_IR__BuilderDesc_NewSize)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 8:
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 189152);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 189152))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 189136));
    i2 = (OOC_INT32)b;
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewAbs((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 9:
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 189235);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i1 = _check_pointer(i1, 189249);
    i4 = OOC_ARRAY_LENGTH(i1, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 189235))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i4, OOC_UINT8, 189249))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 189219));
    i3 = (OOC_INT32)b;
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewAsh((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 10:
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 189345);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 189345))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 189316));
    i2 = (OOC_INT32)b;
    i1 = (OOC_INT32)OOC_IR__BuilderDesc_AssertChar((OOC_IR__Builder)i2, (OOC_IR__Expression)i1);
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewCap((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 11:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 189395);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 189395))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 189399)))), &_td_OOC_IR__ConstDesc);
    if (i1) goto l132;
    i1=0u;
    goto l134;
l132:
    i1 = _check_pointer(i0, 189437);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 189437))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 189440))+4);
    i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
    
l134:
    if (i1) goto l149;
    i1 = _check_pointer(i0, 189560);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 189560))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 189563))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 189569)))), &_td_OOC_SymbolTable__PredefTypeDesc);
    if (i1) goto l138;
    i1 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 190307);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 190307))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 190310));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 190275)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 5, (OOC_Scanner_BasicList__Symbol)i0);
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 190343);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 190343))*4);
    return (OOC_IR__Expression)i0;
    goto l216;
l138:
    i1 = _check_pointer(i0, 189617);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 189617))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 189620))+4);
    i2 = (OOC_INT32)b;
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 189630)))), &_td_OOC_SymbolTable__PredefTypeDesc, 189630)), 189641))+36);
    switch (i1) {
    case 4:
      targetType = 5;
      goto l147;
    case 5:
      targetType = 6;
      goto l147;
    case 6:
      targetType = 7;
      goto l147;
    case 8:
      targetType = 9;
      goto l147;
    case 1:
      targetType = 2;
      goto l147;
    case 2:
      targetType = 3;
      goto l147;
    default:
      i0 = _check_pointer(i0, 190065);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 190065))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 190068));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 190033)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 5, (OOC_Scanner_BasicList__Symbol)i0);
      i0 = (OOC_INT32)arguments;
      i0 = _check_pointer(i0, 190103);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 190103))*4);
      return (OOC_IR__Expression)i0;
      goto l147;
    }
l147:
    i0 = targetType;
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i0);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 190193);
    i3 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 190193))*4);
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l216;
l149:
    i0 = _check_pointer(i0, 189531);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 189531))*4);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 12:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 190413);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 190413))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 190417)))), &_td_OOC_IR__ConstDesc);
    if (i1) goto l154;
    i1=0u;
    goto l156;
l154:
    i1 = _check_pointer(i0, 190455);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 190455))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 190458))+4);
    i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
    
l156:
    if (i1) goto l171;
    i1 = _check_pointer(i0, 190579);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 190579))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 190582))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 190588)))), &_td_OOC_SymbolTable__PredefTypeDesc);
    if (i1) goto l160;
    i1 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 191316);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 191316))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 191319));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 191284)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 5, (OOC_Scanner_BasicList__Symbol)i0);
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 191352);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 191352))*4);
    return (OOC_IR__Expression)i0;
    goto l216;
l160:
    i1 = _check_pointer(i0, 190636);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 190636))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 190639))+4);
    i2 = (OOC_INT32)b;
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 190649)))), &_td_OOC_SymbolTable__PredefTypeDesc, 190649)), 190660))+36);
    switch (i1) {
    case 5:
      targetType = 4;
      goto l169;
    case 6:
      targetType = 5;
      goto l169;
    case 7:
      targetType = 6;
      goto l169;
    case 9:
      targetType = 8;
      goto l169;
    case 2:
      targetType = 1;
      goto l169;
    case 3:
      targetType = 2;
      goto l169;
    default:
      i0 = _check_pointer(i0, 191074);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 191074))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 191077));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 191042)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 5, (OOC_Scanner_BasicList__Symbol)i0);
      i0 = (OOC_INT32)arguments;
      i0 = _check_pointer(i0, 191112);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 191112))*4);
      return (OOC_IR__Expression)i0;
      goto l169;
    }
l169:
    i0 = targetType;
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i0);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 191202);
    i3 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 191202))*4);
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l216;
l171:
    i0 = _check_pointer(i0, 190550);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 190550))*4);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 13:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 191416);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i0 = _check_pointer(i0, 191448);
    i3 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i3, OOC_UINT8, 191448))*4);
    i3 = (OOC_INT32)b;
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
    *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 191416))*4) = i0;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 191475);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 191475))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 191479)))), &_td_OOC_IR__ConstDesc);
    if (!i1) goto l176;
    i0 = _check_pointer(i0, 191689);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 191689))*4);
    i0 = OOC_IR__BuilderDesc_AssertIntConst((OOC_IR__Builder)i3, (OOC_IR__Expression)i0, 0, 256);
    dummy = i0;
l176:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 191857);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 191857))*4);
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 14:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 191904);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i0 = _check_pointer(i0, 191936);
    i3 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i3, OOC_UINT8, 191936))*4);
    i3 = (OOC_INT32)b;
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
    *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 191904))*4) = i0;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 191963);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 191963))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 191967)))), &_td_OOC_IR__ConstDesc);
    if (!i1) goto l180;
    i0 = _check_pointer(i0, 192177);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 192177))*4);
    i0 = OOC_IR__BuilderDesc_AssertIntConst((OOC_IR__Builder)i3, (OOC_IR__Expression)i0, 0, 65536);
    dummy = i0;
l180:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(2);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 192393);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 192393))*4);
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 15:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 192449);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i0 = _check_pointer(i0, 192481);
    i3 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i3, OOC_UINT8, 192481))*4);
    i3 = (OOC_INT32)b;
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_AssertInteger((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
    *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 192449))*4) = i0;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 192508);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 192508))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 192512)))), &_td_OOC_IR__ConstDesc);
    if (!i1) goto l184;
    i0 = _check_pointer(i0, 192722);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 192722))*4);
    i0 = OOC_IR__BuilderDesc_AssertIntConst((OOC_IR__Builder)i3, (OOC_IR__Expression)i0, 0, 2147483647);
    dummy = i0;
l184:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(3);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 192983);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 192983))*4);
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 16:
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 193072);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 193072))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 193056));
    i2 = (OOC_INT32)b;
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewEntier((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 17:
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 193155);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 193155))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 193139));
    i2 = (OOC_INT32)b;
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewOdd((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 18:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 193211);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 193211))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 193214))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 193220)))), &_td_OOC_SymbolTable__PredefTypeDesc);
    if (i1) goto l190;
    i1=0u;
    goto l196;
l190:
    i1 = _check_pointer(i0, 193263);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 193263))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 193266))+4);
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 193276)))), &_td_OOC_SymbolTable__PredefTypeDesc, 193276)), 193287))+36);
    i1 = i1==2;
    if (i1) goto l193;
    i1 = _check_pointer(i0, 193335);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 193335))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 193338))+4);
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 193348)))), &_td_OOC_SymbolTable__PredefTypeDesc, 193348)), 193359))+36);
    i1 = i1==3;
    
    goto l196;
l193:
    i1=1u;
l196:
    if (i1) goto l198;
    targetType = 5;
    i1=5;
    goto l199;
l198:
    targetType = 6;
    i1=6;
l199:
    i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i1);
    i0 = _check_pointer(i0, 193639);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 193639))*4);
    i2 = (OOC_INT32)b;
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_AssertChar((OOC_IR__Builder)i2, (OOC_IR__Expression)i0);
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i1, (OOC_IR__Expression)i0);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 26:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 193793);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i5 = _check_pointer(i2, 193807);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i2 = _check_pointer(i2, 193821);
    i7 = OOC_ARRAY_LENGTH(i2, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 193793))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(1, i6, OOC_UINT8, 193807))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(2, i7, OOC_UINT8, 193821))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 193745));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 193723)))), OOC_IR__BuilderDesc_NewMoveBlock)),OOC_IR__BuilderDesc_NewMoveBlock)((OOC_IR__Builder)i1, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 27:
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 193883);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 193883))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 193886))+4);
    i3 = (OOC_INT32)b;
    i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 193892)))), &_td_OOC_SymbolTable__PointerDesc);
    if (i2) goto l204;
    i2 = _check_pointer(i1, 193946);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 193946))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 193949))+4);
    i2 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i2, 12);
    
    goto l206;
l204:
    i2=1u;
l206:
    if (i2) goto l208;
    i0 = _check_pointer(i1, 194257);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 194257))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 194260));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 194225)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 50, (OOC_Scanner_BasicList__Symbol)i0);
    goto l209;
l208:
    i1 = _check_pointer(i1, 194004);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 194004))*4);
    OOC_IR__BuilderDesc_AssertVar((OOC_IR__Builder)i3, (OOC_IR__Expression)i1);
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 194037);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 194037))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 194040))+4);
    type = (OOC_SymbolTable__Type)i2;
    i2 = _check_pointer(i1, 194118);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i5 = _check_pointer(i1, 194175);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT8, 194175))*4);
    i1 = _check_pointer(i1, 194194);
    i6 = OOC_ARRAY_LENGTH(i1, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 194178))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 194118))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i6, OOC_UINT8, 194194))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 194160));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 194102));
    i1 = (OOC_INT32)OOC_IR__BuilderDesc_NewNewBlock((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i5, (OOC_IR__Expression)i1);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 194065)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
l209:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 194296))+20);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 24:
    i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
    i2 = (OOC_INT32)b;
    i3 = (OOC_INT32)arguments;
    i3 = _check_pointer(i3, 194488);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 194488))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 194473));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 194459)))), OOC_IR__BuilderDesc_NewAdr)),OOC_IR__BuilderDesc_NewAdr)((OOC_IR__Builder)i2, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i3);
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeConv((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i1, (OOC_IR__Expression)i0);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 25:
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 194566);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i1 = _check_pointer(i1, 194580);
    i4 = OOC_ARRAY_LENGTH(i1, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 194566))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i4, OOC_UINT8, 194580))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 194550));
    i3 = (OOC_INT32)b;
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewShift((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1, 0u);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 29:
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 194675);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i1 = _check_pointer(i1, 194689);
    i4 = OOC_ARRAY_LENGTH(i1, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 194675))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i4, OOC_UINT8, 194689))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 194659));
    i3 = (OOC_INT32)b;
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewTypeCast((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l216;
  case 28:
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 194774);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i1 = _check_pointer(i1, 194788);
    i4 = OOC_ARRAY_LENGTH(i1, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 194774))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i4, OOC_UINT8, 194788))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 194758));
    i3 = (OOC_INT32)b;
    i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewShift((OOC_IR__Builder)i3, (OOC_Scanner_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1, 1u);
    return (OOC_IR__Expression)i0;
    goto l216;
  default:
    _failed_case(i1, 184616);
    goto l216;
  }
l216:
  _failed_function(174551); return 0;
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
