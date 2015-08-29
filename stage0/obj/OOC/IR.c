#include "OOC/IR.d"
#include "__oo2c.h"

static void OOC_IR__AppendContext(ADT_StringBuffer__StringBuffer buffer, OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)item;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35505)))), &_td_OOC_SymbolTable__DeclarationDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35495)))), 35495);
  goto l7;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35539))+4);
  i1 = i1!=(OOC_INT32)0;
  i2 = (OOC_INT32)buffer;
  if (!i1) goto l6;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35592))+4);
  OOC_IR__AppendContext((ADT_StringBuffer__StringBuffer)i2, (OOC_SymbolTable__Item)i1);
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35643))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35648))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35643))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35648))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 35652)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35625)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i2, (void*)(_check_pointer(i1, 35652)), i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35668)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i2, (OOC_CHAR8)'.');
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36065))+4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36112))+4);
  OOC_IR__AppendContext((ADT_StringBuffer__StringBuffer)i0, (OOC_SymbolTable__Item)i2);
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36138))+20);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l26;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36239)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i2) goto l24;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36434)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i2) goto l22;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36497)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i2) goto l20;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36565)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l18;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36624)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i2) goto l16;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36617)))), 36617);
  goto l27;
l16:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36650)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "RECORD", 7);
  goto l27;
l18:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36590)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "ARRAY", 6);
  goto l27;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36527)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "PROCEDURE", 10);
  goto l27;
l22:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36461)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "POINTER", 8);
  goto l27;
l24:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36333)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "PredefType(", 12);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 36388))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36373)))), ADT_StringBuffer__StringBufferDesc_AppendInt)),ADT_StringBuffer__StringBufferDesc_AppendInt)((ADT_StringBuffer__StringBuffer)i0, i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36404)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, ")", 2);
  goto l27;
l26:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36187))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 36198))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 36203))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36187))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36198))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36203))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 36207)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36169)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(_check_pointer(i2, 36207)), i1);
l27:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36702)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
  return (Object__String)i0;
  ;
}

static void OOC_IR__LogTypeName(const OOC_CHAR8 message__ref[], OOC_LEN message_0d, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(message,OOC_CHAR8 ,message_0d)

  OOC_INITIALIZE_VPAR(message__ref,message,OOC_CHAR8 ,message_0d)
  i0 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_IR__TypeName((OOC_SymbolTable__Type)i0);
  Log__Str((void*)(OOC_INT32)message, message_0d, (Object__String)i0);
  return;
  ;
}

void OOC_IR__ErrorContextDesc_GetTemplate(OOC_IR__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 37074))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){85,110,100,101,99,108,97,114,101,100,32,105,100,101,110,116,105,102,105,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,105,100,101,110,116,105,102,105,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){78,117,109,98,101,114,32,111,117,116,32,111,102,32,114,97,110,103,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){67,104,97,114,97,99,116,101,114,32,118,97,108,117,101,32,111,117,116,32,111,102,32,114,97,110,103,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,118,97,108,105,100,32,116,121,112,101,32,102,111,114,32,111,112,101,114,97,116,111,114,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){85,110,107,110,111,119,110,32,111,112,101,114,97,116,111,114,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 7:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,99,111,109,112,97,116,105,98,108,101,32,116,121,112,101,115,32,102,111,114,32,111,112,101,114,97,116,111,114,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 8:
    _copy_16((const void*)((OOC_CHAR16[]){68,105,118,105,115,111,114,32,105,115,32,122,101,114,111,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 9:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,105,115,32,110,111,116,32,99,111,110,115,116,97,110,116,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 10:
    _copy_16((const void*)((OOC_CHAR16[]){86,97,108,117,101,32,111,117,116,32,111,102,32,114,97,110,103,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 11:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,97,121,32,110,111,116,32,98,101,32,112,97,115,115,101,100,32,98,121,32,114,101,102,101,114,101,110,99,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 12:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,111,102,32,97,99,116,117,97,108,32,112,97,114,97,109,101,116,101,114,32,105,115,32,110,111,116,32,99,111,109,112,97,116,105,98,108,101,32,119,105,116,104,32,102,111,114,109,97,108,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 24:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,111,102,32,101,120,112,114,101,115,115,105,111,110,32,105,115,32,110,111,116,32,99,111,109,112,97,116,105,98,108,101,32,119,105,116,104,32,118,97,114,105,97,98,108,101,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 13:
    _copy_16((const void*)((OOC_CHAR16[]){87,114,111,110,103,32,110,117,109,98,101,114,32,111,102,32,97,114,103,117,109,101,110,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 14:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,116,101,103,101,114,32,99,111,110,115,116,97,110,116,32,105,110,32,116,104,101,32,114,97,110,103,101,32,96,36,123,115,116,97,114,116,125,32,60,61,32,120,32,60,32,36,123,101,110,100,125,39,32,114,101,113,117,105,114,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 15:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,97,110,32,97,114,114,97,121,32,118,97,108,117,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 16:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,110,97,109,101,32,101,120,112,101,99,116,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 17:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,109,117,115,116,32,98,101,32,97,110,32,101,120,116,101,110,115,105,111,110,32,111,102,32,116,104,101,32,108,101,102,116,32,111,112,101,114,97,110,100,39,115,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 18:
    _copy_16((const void*)((OOC_CHAR16[]){77,73,78,47,77,65,88,32,105,115,32,110,111,116,32,97,112,112,108,105,99,97,98,108,101,32,116,111,32,116,104,105,115,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 19:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,105,110,116,101,103,101,114,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 20:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,114,101,99,111,114,100,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 21:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,112,111,105,110,116,101,114,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 22:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,116,121,112,101,32,66,79,79,76,69,65,78,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 23:
    _copy_16((const void*)((OOC_CHAR16[]){79,112,101,114,97,116,111,114,32,109,97,121,32,110,111,116,32,98,101,32,97,112,112,108,105,101,100,32,116,111,32,102,117,110,99,116,105,111,110,32,114,101,115,117,108,116,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 25:
    _copy_16((const void*)((OOC_CHAR16[]){69,88,73,84,32,111,117,116,115,105,100,101,32,111,102,32,76,79,79,80,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 26:
    _copy_16((const void*)((OOC_CHAR16[]){83,101,108,101,99,116,32,101,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,105,110,116,101,103,101,114,32,111,114,32,99,104,97,114,97,99,116,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 27:
    _copy_16((const void*)((OOC_CHAR16[]){76,97,98,101,108,32,110,111,116,32,105,110,32,116,121,112,101,32,111,102,32,115,101,108,101,99,116,32,101,120,112,114,101,115,115,105,111,110,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 28:
    _copy_16((const void*)((OOC_CHAR16[]){76,97,98,101,108,32,97,108,114,101,97,100,121,32,105,110,32,117,115,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 29:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,109,117,115,116,32,98,101,32,97,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 30:
    _copy_16((const void*)((OOC_CHAR16[]){83,116,101,112,32,118,97,108,117,101,32,110,111,116,32,105,110,32,116,121,112,101,32,111,102,32,108,111,111,112,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 31:
    _copy_16((const void*)((OOC_CHAR16[]){83,116,101,112,32,118,97,108,117,101,32,109,117,115,116,32,110,111,116,32,98,101,32,122,101,114,111,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 32:
    _copy_16((const void*)((OOC_CHAR16[]){82,69,84,85,82,78,32,109,117,115,116,32,110,111,116,32,112,114,111,118,105,100,101,32,97,32,114,101,115,117,108,116,32,118,97,108,117,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 33:
    _copy_16((const void*)((OOC_CHAR16[]){82,69,84,85,82,78,32,109,117,115,116,32,112,114,111,118,105,100,101,32,97,32,114,101,115,117,108,116,32,118,97,108,117,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 34:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,118,97,114,105,97,98,108,101,32,105,115,32,114,101,97,100,45,111,110,108,121,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 35:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,109,117,115,116,32,98,101,32,97,32,112,114,111,99,101,100,117,114,101,32,100,101,115,105,103,110,97,116,111,114,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 36:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,105,115,32,97,32,102,117,110,99,116,105,111,110,32,112,114,111,99,101,100,117,114,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 37:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,105,115,32,110,111,116,32,97,32,102,117,110,99,116,105,111,110,32,112,114,111,99,101,100,117,114,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 38:
    _copy_16((const void*)((OOC_CHAR16[]){84,111,111,32,102,101,119,32,97,114,103,117,109,101,110,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 39:
    _copy_16((const void*)((OOC_CHAR16[]){84,111,111,32,109,97,110,121,32,97,114,103,117,109,101,110,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 40:
    _copy_16((const void*)((OOC_CHAR16[]){65,99,116,117,97,108,32,112,97,114,97,109,101,116,101,114,32,110,111,116,32,99,111,109,112,97,116,105,98,108,101,32,119,105,116,104,32,102,111,114,109,97,108,32,86,65,82,32,112,97,114,97,109,101,116,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 41:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,116,101,114,110,97,108,32,101,114,114,111,114,58,32,78,97,109,101,32,114,101,100,105,114,101,99,116,105,111,110,32,102,97,105,108,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 42:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,112,97,114,97,109,101,116,101,114,32,105,115,32,114,101,97,100,45,111,110,108,121,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 43:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,118,97,114,105,97,98,108,101,32,104,97,115,32,110,111,32,100,121,110,97,109,105,99,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 44:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,110,117,109,101,114,105,99,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 45:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,97,32,99,104,97,114,97,99,116,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 46:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,114,101,97,108,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 47:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,104,97,115,32,110,111,32,102,105,120,101,100,32,115,105,122,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 48:
    _copy_16((const void*)((OOC_CHAR16[]){65,114,103,117,109,101,110,116,32,109,117,115,116,32,98,101,32,97,32,99,104,97,114,97,99,116,101,114,32,97,114,114,97,121,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 49:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,115,101,116,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 50:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,109,117,115,116,32,98,101,32,97,32,112,111,105,110,116,101,114,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 51:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,101,120,112,114,101,115,115,105,111,110,32,104,97,115,32,110,111,32,97,100,100,114,101,115,115,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 52:
    _copy_16((const void*)((OOC_CHAR16[]){83,105,122,101,32,109,105,115,109,97,116,99,104,32,98,101,116,119,101,101,110,32,116,121,112,101,32,97,110,100,32,101,120,112,114,101,115,115,105,111,110,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 53:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,85,110,117,115,101,100,32,111,98,106,101,99,116,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 54:
    _copy_16((const void*)((OOC_CHAR16[]){76,101,110,103,116,104,32,111,102,32,116,104,105,115,32,97,114,114,97,121,32,118,97,108,117,101,32,99,97,110,110,111,116,32,98,101,32,100,101,116,101,114,109,105,110,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 55:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,118,97,114,105,97,98,108,101,32,104,97,115,32,110,111,32,116,121,112,101,32,116,97,103,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 56:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,110,110,111,116,32,99,114,101,97,116,101,32,97,110,32,105,110,115,116,97,110,99,101,32,97,110,32,97,98,115,116,114,97,99,116,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 57:
    _copy_16((const void*)((OOC_CHAR16[]){65,98,115,116,114,97,99,116,32,112,114,111,99,101,100,117,114,101,32,99,97,110,110,111,116,32,104,97,118,101,32,97,32,66,69,71,73,78,32,112,97,114,116,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 58:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,108,108,101,100,32,112,114,111,99,101,100,117,114,101,32,105,115,32,100,101,99,108,97,114,101,100,32,97,98,115,116,114,97,99,116,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 59:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,108,108,101,100,32,112,114,111,99,101,100,117,114,101,32,110,111,116,32,100,101,102,105,110,101,100,32,105,110,32,98,97,115,101,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 60:
    _copy_16((const void*)((OOC_CHAR16[]){83,117,112,101,114,32,99,97,108,108,32,99,97,110,32,111,110,108,121,32,97,112,112,108,121,32,116,111,32,116,104,101,32,100,105,114,101,99,116,32,98,97,115,101,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  case 61:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,82,101,100,117,110,100,97,110,116,32,116,121,112,101,32,116,101,115,116,0}),(void*)(OOC_INT32)t,128);
    goto l64;
  default:
    _failed_case(i1, 37066);
    goto l64;
  }
l64:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41352)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

static void OOC_IR__InitGuardedVar(OOC_IR__GuardedVar gv, OOC_SymbolTable__VarDecl var, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41638))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 41649))+20);
  i3 = *(OOC_INT8*)((_check_pointer(i0, 41692))+24);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41709))+28);
  i5 = (OOC_INT32)gv;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Name)i1, i2, i3, (OOC_Doc__Document)i4);
  *(OOC_INT32*)((_check_pointer(i5, 41729))+40) = i0;
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i5, 41749))+44) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42052))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42052))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42057)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  return (OOC_SymbolTable__Module)i0;
  ;
}

void OOC_IR__InitNode(OOC_IR__Node n, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)n;
  i1 = (OOC_INT32)sym;
  *(OOC_INT32*)(_check_pointer(i0, 42243)) = i1;
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
  *(OOC_INT32*)((_check_pointer(i0, 42656))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)expr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42680)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42700))+4);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42760))+4);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  return (OOC_IR__Expression)i1;
l4:
  _failed_function(42371); return 0;
  ;
}

void OOC_IR__BuilderDesc_ErrSym(OOC_IR__Builder b, OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)OOC_IR__irContext;
  i1 = code;
  i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
  e = (Msg__Msg)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 42948))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 42959));
  i3 = (OOC_INT32)sym;
  i2 = i3!=i2;
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i3, 43045))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43019)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i3, 43087))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43060)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i3, 43132))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43103)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43150))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43150))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 43159)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i3, (Msg__Msg)i0);
l4:
  *(OOC_INT32*)((_check_pointer(i1, 43187))+32) = i0;
  return;
  ;
}

static OOC_CHAR8 OOC_IR__GetPragmaValue(OOC_IR__Builder b, Config_Section_Options__Option pragma, OOC_INT32 charPos) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Config_Value__Value value;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43370))+4);
  i2 = (OOC_INT32)pragma;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 43403))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 43403))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 43409)), (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43370))+4);
  i4 = charPos;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43385)))), OOC_Config_Pragmas__HistoryDesc_GetValue)),OOC_Config_Pragmas__HistoryDesc_GetValue)((OOC_Config_Pragmas__History)i0, (void*)(_check_pointer(i3, 43409)), i2, i4);
  value = (Config_Value__Value)i0;
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43452)))), &_td_Config_Value_Boolean__ValueDesc, 43452)), 43458));
  return i0;
  ;
}

void OOC_IR__BuilderDesc_WarnSym(OOC_IR__Builder b, OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 43636))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__warnings;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  if (!i1) goto l4;
  i1 = (OOC_INT32)OOC_IR__irContext;
  i3 = code;
  i1 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i1, i3);
  e = (Msg__Msg)i1;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 43720))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43694)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "pos", 4, i3);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 43762))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43735)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "line", 5, i3);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 43807))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43778)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "column", 7, i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 43825))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 43825))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43834)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i3, (Msg__Msg)i1);
  *(OOC_INT32*)((_check_pointer(i2, 43855))+32) = i1;
l4:
  return;
  ;
}

void OOC_IR__BuilderDesc_WarnName(OOC_IR__Builder b, OOC_INT32 code, OOC_SymbolTable__Name name) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44010))+12);
  i1 = _check_pointer(i1, 44014);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 44014)));
  i1 = i1!=(OOC_CHAR8)'-';
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_INT32*)(_check_pointer(i0, 44077));
  i2 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__warnings;
  i3 = (OOC_INT32)b;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i3, (Config_Section_Options__Option)i2, i1);
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)OOC_IR__irContext;
  i2 = code;
  i1 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i1, i2);
  e = (Msg__Msg)i1;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 44269));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44242)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 44312))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44284)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "line", 5, i2);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 44358))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44328)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "column", 7, i0);
  i0 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44376))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44376))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 44385)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i3, (Msg__Msg)i1);
  *(OOC_INT32*)((_check_pointer(i0, 44406))+32) = i1;
l7:
  return;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_ErrExpr(OOC_IR__Builder b, OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = code;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44539)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, i1, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44571))+16);
  return (OOC_IR__Const)i0;
  ;
}

OOC_SymbolTable__Name OOC_IR__BuilderDesc_GetName(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Name name;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  name = (OOC_SymbolTable__Name)i0;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44734))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 44744))+16);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 44754))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 44765))+24);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i1);
  return (OOC_SymbolTable__Name)i0;
  ;
}

OOC_SymbolTable__Type OOC_IR__BuilderDesc_AssertType(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45065)))), &_td_OOC_IR__TypeRefDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 45204));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45171)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 16, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45229))+4);
  return (OOC_SymbolTable__Type)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45095))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45106)))), &_td_OOC_SymbolTable__TypeDeclDesc, 45106)), 45115))+40);
  return (OOC_SymbolTable__Type)i0;
l4:
  _failed_function(44831); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertBoolean(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45514))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45521)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45554))+4);
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45565)))), &_td_OOC_SymbolTable__PredefTypeDesc, 45565)), 45576))+32);
  i1 = i1==0;
  
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 45673));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45646)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 22, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l8;
l7:
  return (OOC_IR__Expression)i0;
l8:
  _failed_function(45288); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_Fold(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45792))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45792))+12);
  i2 = (OOC_INT32)expr;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45802)))), OOC_IR__ConstFoldDesc_TryConstFold)),OOC_IR__ConstFoldDesc_TryConstFold)((OOC_IR__ConstFold)i0, (OOC_IR__Expression)i2);
  return (OOC_IR__Expression)i0;
  ;
}

static OOC_CHAR8 OOC_IR__IsPredefType(OOC_SymbolTable__Type type, OOC_INT16 id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45925)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45956)))), &_td_OOC_SymbolTable__PredefTypeDesc, 45956)), 45967))+32);
  i1 = id;
  i0 = i0==i1;
  
l4:
  return i0;
  ;
}

void OOC_IR__BuilderDesc_CheckFunctionOp(OOC_IR__Builder b, OOC_IR__Expression expr, OOC_Scanner_Builder_BasicList__Symbol op) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46790)))), &_td_OOC_IR__PredefProcDesc);
  if (i1) goto l3;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46814)))), &_td_OOC_IR__CallDesc);
  
  goto l5;
l3:
  i0=OOC_TRUE;
l5:
  if (!i0) goto l7;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)op;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46833)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 23, (OOC_Scanner_Builder_BasicList__Symbol)i1);
l7:
  return;
  ;
}

void OOC_IR__InitExpression(OOC_IR__Expression expr, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)expr;
  OOC_IR__InitNode((OOC_IR__Node)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i1, 47123))+4) = i0;
  return;
  ;
}

static void OOC_IR__InitConst(OOC_IR__Const _const, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, Object_Boxed__Object value) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)_const;
  OOC_IR__InitExpression((OOC_IR__Expression)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1);
  i0 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i2, 47432))+8) = i0;
  return;
  ;
}

static OOC_IR__Const OOC_IR__NewConst(OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, Object_Boxed__Object value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)type;
  _assert((i0!=(OOC_INT32)0), 127, 47602);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)value;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Const.baseTypes[0]);
  OOC_IR__InitConst((OOC_IR__Const)i3, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47856)))), OOC_IR__VisitorDesc_VisitConst)),OOC_IR__VisitorDesc_VisitConst)((OOC_IR__Visitor)i0, (OOC_IR__Const)i1);
  return;
  ;
}

Object__String OOC_IR__ConstDesc_ToString(OOC_IR__Const _const) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_const;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47959))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48026))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48026))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48033)))), Object_Boxed__ObjectDesc_ToString)),Object_Boxed__ObjectDesc_ToString)((Object_Boxed__Object)i0);
  return (Object__String)i0;
  goto l4;
l3:
  return (Object__String)((OOC_INT32)_c1);
l4:
  _failed_function(47917); return 0;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_NewConst(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, Object_Boxed__Object value) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)value;
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  return (OOC_IR__Const)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewStringConst(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48335))+8);
  i1 = _check_pointer(i1, 48340);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(2, i2, OOC_UINT8, 48340)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48356))+8);
  i1 = _check_pointer(i1, 48361);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(3, i2, OOC_UINT8, 48361)));
  i1 = i1==(OOC_CHAR8)'\000';
  
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(13);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48802))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48802))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 48807)), (OOC_INT32)0);
  i2 = (OOC_INT32)Object_Boxed__ParseString((void*)(_check_pointer(i2, 48807)), i3);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
  goto l8;
l7:
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48675))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48675))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 48680)), (OOC_INT32)0);
  i2 = (OOC_INT32)Object_Boxed__ParseString((void*)(_check_pointer(i2, 48680)), i3);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
l8:
  _failed_function(48273); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIntConst10(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;
  Object_BigInt__BigInt v;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48974))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48974))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 48979)), (OOC_INT32)0);
  i1 = (OOC_INT32)Object_BigInt__NewString((void*)(_check_pointer(i1, 48979)), i2, 10);
  i2 = i1==(OOC_INT32)0;
  v = (Object_BigInt__BigInt)i1;
  if (i2) goto l3;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i1 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49016)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49064))+16);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(48867); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIntConst16(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 epos;

  epos = 0;
  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49323))+8);
  i1 = _check_pointer(i1, 49327);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 49327)));
  i1 = i1!=(OOC_CHAR8)'H';
  if (i1) goto l3;
  i1=0;
  goto l9;
l3:
  i1=0;
l4_loop:
  i1 = i1+1;
  epos = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49323))+8);
  i2 = _check_pointer(i2, 49327);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 49327)));
  i2 = i2!=(OOC_CHAR8)'H';
  if (i2) goto l4_loop;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49399))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49399))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 49403)), (OOC_INT32)0);
  i1 = (OOC_INT32)Object_BigInt__NewRegion((void*)(_check_pointer(i2, 49403)), i3, 0, i1, 16);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_AssertConst(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49802)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 49923));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49891)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 9, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Const)i0;
  goto l4;
l3:
  return (OOC_IR__Const)i0;
l4:
  _failed_function(49521); return 0;
  ;
}

OOC_INT32 OOC_IR__BuilderDesc_AssertIntConst(OOC_IR__Builder b, OOC_IR__Expression expr, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__Const _const;
  OOC_INT32 v;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50489)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  _const = (OOC_IR__Const)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50528))+16);
  i2 = i1!=i2;
  i3 = start;
  if (!i2) goto l20;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50578))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  i4 = end;
  if (!i2) goto l16;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50609))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50609))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 50624)))), &_td_Object_BigInt__BigIntDesc, 50624)), 50631)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 50624)))), &_td_Object_BigInt__BigIntDesc, 50624)));
  i5 = i3<=i2;
  v = i2;
  if (i5) goto l7;
  i5=OOC_FALSE;
  goto l13;
l7:
  i5 = i4==(-2147483647-1);
  if (i5) goto l10;
  i5 = i2<i4;
  
  goto l13;
l10:
  i5=OOC_TRUE;
l13:
  if (!i5) goto l16;
  return i2;
l16:
  i2 = i3<i4;
  if (!i2) goto l20;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 50883));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50847)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 14, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50900))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50900))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50911)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i2, "start", 6, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50953))+32);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50953))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50964)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "end", 4, i4);
l20:
  return i3;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertInteger(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_BigInt__BigInt v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51337))+4);
  i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51367))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 51417));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51393)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 19, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  v = (Object_BigInt__BigInt)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 51490));
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertReal(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_Boxed__LongReal v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51857))+4);
  i1 = OOC_SymbolTable_TypeRules__IsRealType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51887))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 51934));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51913)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 46, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewLongReal(1.0000000000000000);
  v = (Object_Boxed__LongReal)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 52011));
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(8);
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertNumeric(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_BigInt__BigInt v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52387))+4);
  i1 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52417))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 52467));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52443)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 44, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  v = (Object_BigInt__BigInt)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 52540));
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertChar(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_Boxed__String v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52901))+4);
  i1 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52931))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 52983));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52957)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 45, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewString((Object__String)((OOC_INT32)_c2));
  v = (Object_Boxed__String)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 53060));
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertSet(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_Boxed__Set v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53386))+4);
  i1 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53416))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 53462));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53442)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 49, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewSet(0);
  v = (Object_Boxed__Set)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 53535));
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(10);
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i1;
l6:
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewRealConst(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT16 type) {
  register OOC_INT32 i0,i1,i2;
  Object_Boxed__Object v;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53776))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53776))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 53781)), (OOC_INT32)0);
  i1 = (OOC_INT32)Object_Boxed__ParseLongRealLiteral((void*)(_check_pointer(i1, 53781)), i2);
  i2 = i1==(OOC_INT32)0;
  v = (Object_Boxed__Object)i1;
  if (i2) goto l3;
  i2 = type;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i2);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i1 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53814)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53862))+16);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(53640); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewCharConst16(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 v;
  auto OOC_INT32 OOC_IR__BuilderDesc_NewCharConst16_ValueOf(const OOC_CHAR8 str[], OOC_LEN str_0d);
    
    OOC_INT32 OOC_IR__BuilderDesc_NewCharConst16_ValueOf(const OOC_CHAR8 str[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1,i2;
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
          case (OOC_CHAR8)'0' ... (OOC_CHAR8)'9':
            return (i0-48);
            goto l5;
          case (OOC_CHAR8)'A' ... (OOC_CHAR8)'F':
            return (i0+-55);
            goto l5;
          default:
            return -1;
            goto l5;
          }
l5:
          _failed_function(54195); return 0;
          ;
        }

        
        OOC_CHAR8 OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexToInt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_CHAR8 end, OOC_INT32 *result) {
          register OOC_INT32 i0,i1,i2;
          OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

          OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
          *result = 0;
          i = 0;
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 54589)));
          i1 = end;
          i0 = i0!=i1;
          if (!i0) goto l11;
          i0=0;
l3_loop:
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 54645)));
          i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i0);
          i2 = *result;
          i0 = ((2147483647-i0)>>4)<i2;
          if (!i0) goto l6;
          return OOC_FALSE;
l6:
          i0 = i;
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 54756)));
          i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i0);
          *result = ((i2*16)+i0);
          i0 = i;
          i0 = i0+1;
          i = i0;
          i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 54589)));
          i2 = i2!=i1;
          if (i2) goto l3_loop;
l11:
          return OOC_TRUE;
          ;
        }


      i = 0;
      hexCount = 0;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 54893)));
      i0 = i0!=(OOC_CHAR8)'\000';
      if (i0) goto l3;
      i0=0;
      goto l12;
l3:
      i0=0;
l4_loop:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 54931)));
      i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i0);
      i0 = i0>=0;
      if (!i0) goto l7;
      i0 = hexCount;
      hexCount = (i0+1);
l7:
      i0 = i;
      i0 = i0+1;
      i = i0;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 54893)));
      i1 = i1!=(OOC_CHAR8)'\000';
      if (i1) goto l4_loop;
l12:
      i1 = i0==3;
      if (i1) goto l15;
      i1=OOC_FALSE;
      goto l17;
l15:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 55035)));
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 55044)));
      i1 = i1==i2;
      
l17:
      if (i1) goto l19;
      i1=OOC_FALSE;
      goto l25;
l19:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 55058)));
      i1 = i1==(OOC_CHAR8)'"';
      if (i1) goto l22;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 55076)));
      i1 = i1==(OOC_CHAR8)'\047';
      
      goto l25;
l22:
      i1=OOC_TRUE;
l25:
      if (i1) goto l51;
      i1 = i0>=2;
      if (i1) goto l29;
      i1=OOC_FALSE;
      goto l31;
l29:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 55206)));
      i1 = i1==(OOC_CHAR8)'X';
      
l31:
      if (i1) goto l33;
      i0=OOC_FALSE;
      goto l35;
l33:
      i1 = hexCount;
      i0 = (i1+1)==i0;
      
l35:
      if (i0) goto l37;
      return -1;
      goto l52;
l37:
      i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexToInt((void*)(OOC_INT32)str, str_0d, (OOC_CHAR8)'X', (void*)(OOC_INT32)&ord);
      if (i0) goto l40;
      i0=OOC_FALSE;
      goto l42;
l40:
      i0 = ord;
      i0 = (OOC_INT32)0<=i0;
      
l42:
      if (i0) goto l44;
      i0=OOC_FALSE;
      goto l46;
l44:
      i0 = ord;
      i0 = i0<=2147483647;
      
l46:
      if (i0) goto l48;
      return -1;
      goto l52;
l48:
      i0 = ord;
      return i0;
      goto l52;
l51:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, str_0d, OOC_UINT8, 55174)));
      return i0;
l52:
      _failed_function(54086); return 0;
      ;
    }


  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55673))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55673))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 55678)), (OOC_INT32)0);
  i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf((void*)(_check_pointer(i1, 55678)), i0);
  i1 = i0<0;
  v = i0;
  if (i1) goto l11;
  i1 = i0<=255;
  if (i1) goto l9;
  i1 = i0<=65535;
  if (i1) goto l7;
  i1=3;
  goto l10;
l7:
  i1=2;
  goto l10;
l9:
  i1=1;
l10:
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i1);
  i0 = (OOC_INT32)Object__NewUCS4Char(i0);
  i0 = (OOC_INT32)Object_Boxed__NewString((Object__String)i0);
  i2 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i0);
  return (OOC_IR__Expression)i0;
  goto l12;
l11:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 55709)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 4, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55760))+16);
  return (OOC_IR__Expression)i0;
l12:
  _failed_function(53989); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewNil(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(16);
  i1 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)(OOC_INT32)0);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSize(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression type) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Type t;
  OOC_INT32 size;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56419)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  t = (OOC_SymbolTable__Type)i2;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 56447))+24);
  i3 = i3<0;
  if (i3) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i2, 56543))+24);
  size = i1;
  
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 56495));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56470)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 47, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  size = 1;
  i1=1;
l4:
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)Object_BigInt__NewInt(i1);
  i3 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56571)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_GetOne(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 56758)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
  return (OOC_IR__Const)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_ValidSetElement(OOC_IR__Builder b, OOC_IR__Expression expr, OOC_SymbolTable__Type set) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Object_Boxed__Object val;
  Object_BigInt__BigInt min;
  Object_BigInt__BigInt max;
  Object_BigInt__BigInt element;
  auto OOC_IR__Expression OOC_IR__BuilderDesc_ValidSetElement_MinElement();
    
    OOC_IR__Expression OOC_IR__BuilderDesc_ValidSetElement_MinElement() {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)expr;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 57512));
      i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(4);
      i3 = (OOC_INT32)min;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57498)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i3);
      return (OOC_IR__Expression)i0;
      ;
    }


  i0 = (OOC_INT32)set;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetMin((OOC_SymbolTable__Type)i0);
  val = (Object_Boxed__Object)i1;
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57633)))), &_td_Object_BigInt__BigIntDesc, 57633);
  min = (Object_BigInt__BigInt)i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetMax((OOC_SymbolTable__Type)i0);
  val = (Object_Boxed__Object)i0;
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57691)))), &_td_Object_BigInt__BigIntDesc, 57691);
  max = (Object_BigInt__BigInt)i0;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)expr;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 57714)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i2, (OOC_IR__Expression)i3);
  expr = (OOC_IR__Expression)i3;
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 57750)))), &_td_OOC_IR__ConstDesc);
  if (!i4) goto l10;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 57782))+8);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 57796)))), &_td_Object_BigInt__BigIntDesc, 57796);
  element = (Object_BigInt__BigInt)i4;
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 57822)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i4, (Object__Object)i1);
  i5 = i5<0;
  if (i5) goto l5;
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 57848)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i4, (Object__Object)i0);
  i4 = i4>0;
  
  goto l7;
l5:
  i4=OOC_TRUE;
l7:
  if (!i4) goto l10;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 57912));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 57877)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 14, (OOC_Scanner_Builder_BasicList__Symbol)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 57929))+32);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 57929))+32);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 57968)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 57940)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i4, "start", 6, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 57992))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 57992))+32);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58029)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58003)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i2, "end", 4, (i0+1));
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_ValidSetElement_MinElement();
  return (OOC_IR__Expression)i0;
l10:
  i0 = (OOC_INT32)expr;
  return (OOC_IR__Expression)i0;
  ;
}

void OOC_IR__InitOperator(OOC_IR__Operator op, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitExpression((OOC_IR__Expression)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  return;
  ;
}

static void OOC_IR__InitAbs(OOC_IR__Abs abs, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression operand) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)operand;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58589))+4);
  i2 = (OOC_INT32)abs;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 58605))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewAbs(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression operand) {
  register OOC_INT32 i0,i1,i2;
  OOC_IR__Abs abs;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Abs.baseTypes[0]);
  abs = (OOC_IR__Abs)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)operand;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58788)))), OOC_IR__BuilderDesc_AssertNumeric)),OOC_IR__BuilderDesc_AssertNumeric)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  OOC_IR__InitAbs((OOC_IR__Abs)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58974)))), OOC_IR__VisitorDesc_VisitAbs)),OOC_IR__VisitorDesc_VisitAbs)((OOC_IR__Visitor)i0, (OOC_IR__Abs)i1);
  return;
  ;
}

static void OOC_IR__InitAdr(OOC_IR__Adr adr, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)adr;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)design;
  *(OOC_INT32*)((_check_pointer(i1, 59249))+8) = i0;
  return;
  ;
}

OOC_IR__Adr OOC_IR__BuilderDesc_NewAdr(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression design) {
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
      hasAddress = OOC_TRUE;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59567)))), &_td_OOC_IR__VarDesc);
      if (i1) goto l30;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59585)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l28;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59605)))), &_td_OOC_IR__IndexDesc);
      if (i1) goto l26;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59625)))), &_td_OOC_IR__SelectFieldDesc);
      if (i1) goto l24;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59651)))), &_td_OOC_IR__TypeGuardDesc);
      if (i1) goto l22;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59675)))), &_td_OOC_IR__ProcedureRefDesc);
      if (i1) goto l20;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59702)))), &_td_OOC_IR__ConstDesc);
      if (i1) goto l15;
      hasAddress = OOC_FALSE;
      i0=OOC_FALSE;
      goto l31;
l15:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59742))+4);
      i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
      if (!i0) goto l18;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)expr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59814))+4);
      i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i1);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59774)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)&expr, (OOC_SymbolTable__Type)i1);
      dummy = i0;
l18:
      i0 = (OOC_INT32)expr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59879))+4);
      i0 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i0);
      hasAddress = i0;
      
      goto l31;
l20:
      i0=OOC_TRUE;
      goto l31;
l22:
      i0=OOC_TRUE;
      goto l31;
l24:
      i0=OOC_TRUE;
      goto l31;
l26:
      i0=OOC_TRUE;
      goto l31;
l28:
      i0=OOC_TRUE;
      goto l31;
l30:
      i0=OOC_TRUE;
l31:
      i0 = !i0;
      if (!i0) goto l34;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)expr;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 60001));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59973)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 51, (OOC_Scanner_Builder_BasicList__Symbol)i1);
l34:
      i0 = (OOC_INT32)expr;
      return (OOC_IR__Expression)i0;
      ;
    }


  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Adr.baseTypes[0]);
  adr = (OOC_IR__Adr)i0;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)design;
  i2 = (OOC_INT32)OOC_IR__BuilderDesc_NewAdr_AssertAddressable((OOC_IR__Expression)i2);
  OOC_IR__InitAdr((OOC_IR__Adr)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60301)))), OOC_IR__VisitorDesc_VisitAdr)),OOC_IR__VisitorDesc_VisitAdr)((OOC_IR__Visitor)i0, (OOC_IR__Adr)i1);
  return;
  ;
}

static void OOC_IR__InitAsh(OOC_IR__Ash ash, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression exp) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)ash;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i1, 60580))+8) = i0;
  i0 = (OOC_INT32)exp;
  *(OOC_INT32*)((_check_pointer(i1, 60605))+12) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewAsh(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression exp) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__Ash ash;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Ash.baseTypes[0]);
  ash = (OOC_IR__Ash)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)value;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60783)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i3 = (OOC_INT32)exp;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60807)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i3);
  i3 = (OOC_INT32)sym;
  OOC_IR__InitAsh((OOC_IR__Ash)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60989)))), OOC_IR__VisitorDesc_VisitAsh)),OOC_IR__VisitorDesc_VisitAsh)((OOC_IR__Visitor)i0, (OOC_IR__Ash)i1);
  return;
  ;
}

static void OOC_IR__InitBinaryArith(OOC_IR__BinaryArith op, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)op;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1);
  i0 = variant;
  *(OOC_INT8*)((_check_pointer(i2, 61299))+8) = i0;
  i0 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i2, 61326))+12) = i0;
  i0 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i2, 61347))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewBinaryArith(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__BinaryArith op;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__BinaryArith.baseTypes[0]);
  op = (OOC_IR__BinaryArith)i0;
  i1 = (OOC_INT32)left;
  i2 = (OOC_INT32)right;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 61573))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 61585))+4);
  i3 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i4);
  _assert(i3, 127, 61550);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 61650))+4);
  i4 = (OOC_INT32)sym;
  i5 = variant;
  OOC_IR__InitBinaryArith((OOC_IR__BinaryArith)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i5, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, (OOC_SymbolTable__Type)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61855)))), OOC_IR__VisitorDesc_VisitBinaryArith)),OOC_IR__VisitorDesc_VisitBinaryArith)((OOC_IR__Visitor)i0, (OOC_IR__BinaryArith)i1);
  return;
  ;
}

static void OOC_IR__InitBooleanOp(OOC_IR__BooleanOp op, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)op;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1);
  i0 = variant;
  *(OOC_INT8*)((_check_pointer(i2, 62166))+8) = i0;
  i0 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i2, 62193))+12) = i0;
  i0 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i2, 62214))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewBooleanOp(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__BooleanOp op;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__BooleanOp.baseTypes[0]);
  op = (OOC_IR__BooleanOp)i0;
  i1 = (OOC_INT32)left;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62423))+4);
  i2 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 62434)))), &_td_OOC_SymbolTable__PredefTypeDesc, 62434)), 62445))+32);
  _assert((i2==0), 127, 62411);
  i2 = (OOC_INT32)right;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 62486))+4);
  i3 = *(OOC_INT16*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 62497)))), &_td_OOC_SymbolTable__PredefTypeDesc, 62497)), 62508))+32);
  _assert((i3==0), 127, 62473);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62586))+4);
  i4 = (OOC_INT32)sym;
  i5 = variant;
  OOC_IR__InitBooleanOp((OOC_IR__BooleanOp)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i5, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, (OOC_SymbolTable__Type)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62781)))), OOC_IR__VisitorDesc_VisitBooleanOp)),OOC_IR__VisitorDesc_VisitBooleanOp)((OOC_IR__Visitor)i0, (OOC_IR__BooleanOp)i1);
  return;
  ;
}

static void OOC_IR__InitCap(OOC_IR__Cap cap, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 63022))+4);
  i2 = (OOC_INT32)cap;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 63038))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewCap(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;
  OOC_IR__Cap cap;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Cap.baseTypes[0]);
  cap = (OOC_IR__Cap)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)expr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 63215)))), OOC_IR__BuilderDesc_AssertChar)),OOC_IR__BuilderDesc_AssertChar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  OOC_IR__InitCap((OOC_IR__Cap)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63395)))), OOC_IR__VisitorDesc_VisitCap)),OOC_IR__VisitorDesc_VisitCap)((OOC_IR__Visitor)i0, (OOC_IR__Cap)i1);
  return;
  ;
}

static void OOC_IR__InitChangeElement(OOC_IR__ChangeElement ch, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression set, OOC_IR__Expression element) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)set;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 63713))+4);
  i2 = (OOC_INT32)ch;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  i1 = variant;
  *(OOC_INT8*)((_check_pointer(i2, 63728))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 63756))+12) = i0;
  i0 = (OOC_INT32)element;
  *(OOC_INT32*)((_check_pointer(i2, 63776))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewChangeElement(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression set, OOC_IR__Expression element) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ChangeElement.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = variant;
  i3 = (OOC_INT32)set;
  i4 = (OOC_INT32)element;
  OOC_IR__InitChangeElement((OOC_IR__ChangeElement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64293)))), OOC_IR__VisitorDesc_VisitChangeElement)),OOC_IR__VisitorDesc_VisitChangeElement)((OOC_IR__Visitor)i0, (OOC_IR__ChangeElement)i1);
  return;
  ;
}

static void OOC_IR__InitCompare(OOC_IR__Compare op, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(0);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i1, 64609))+12) = i0;
  i0 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i1, 64630))+16) = i0;
  i0 = variant;
  *(OOC_INT8*)((_check_pointer(i1, 64653))+8) = i0;
  return;
  ;
}

OOC_IR__Compare OOC_IR__BuilderDesc_NewCompare(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT8 variant;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 64896))+4);
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
    _failed_case(i1, 64888);
    goto l9;
  }
l9:
  i1 = (OOC_INT32)left;
  i2 = (OOC_INT32)right;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Compare.baseTypes[0]);
  i4 = variant;
  OOC_IR__InitCompare((OOC_IR__Compare)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, i4, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 65365)))), OOC_IR__VisitorDesc_VisitCompare)),OOC_IR__VisitorDesc_VisitCompare)((OOC_IR__Visitor)i0, (OOC_IR__Compare)i1);
  return;
  ;
}

static void OOC_IR__InitConcat(OOC_IR__Concat op, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__ExpressionList strings) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)op;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1);
  i0 = (OOC_INT32)strings;
  *(OOC_INT32*)((_check_pointer(i2, 65665))+8) = i0;
  return;
  ;
}

OOC_IR__Concat OOC_IR__BuilderDesc_NewConcat(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__ExpressionList strings) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT16 id;
  OOC_INT32 i;
  OOC_SymbolTable__Type type;
  OOC_INT16 tid;
  OOC_CHAR8 dummy;

  id = -1;
  i0 = (OOC_INT32)strings;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 65937)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  i3 = (OOC_INT32)sym;
  if (i2) goto l3;
  i1=-1;
  goto l28;
l3:
  i2 = (OOC_INT32)b;
  i4=0;i5=-1;
l4_loop:
  i6 = _check_pointer(i0, 65966);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 65966))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 65969))+4);
  type = (OOC_SymbolTable__Type)i6;
  tid = 32767;
  i7 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i6);
  if (i7) goto l18;
  i7 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i6);
  if (i7) goto l12;
  i6 = OOC_SymbolTable_TypeRules__IsSTRING((OOC_SymbolTable__Type)i6);
  i6 = !i6;
  if (!i6) goto l11;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 66460)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 7, (OOC_Scanner_Builder_BasicList__Symbol)i3);
l11:
  i6=32767;
  goto l19;
l12:
  i7 = _check_pointer(i0, 66218);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i6 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i6);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 66204)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i2, (void*)(i7+(_check_index(i4, i8, OOC_UINT32, 66218))*4), (OOC_SymbolTable__Type)i6);
  if (i6) goto l15;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 66335)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 7, (OOC_Scanner_Builder_BasicList__Symbol)i3);
  i6=32767;
  goto l19;
l15:
  i6 = _check_pointer(i0, 66282);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 66282))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 66285))+4);
  i6 = *(OOC_INT16*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 66295)))), &_td_OOC_SymbolTable__PredefTypeDesc, 66295)), 66306))+32);
  tid = i6;
  
  goto l19;
l18:
  i6 = *(OOC_INT16*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 66097)))), &_td_OOC_SymbolTable__PredefTypeDesc, 66097)), 66108))+32);
  tid = i6;
  
l19:
  i7 = i6>i5;
  if (!i7) goto l23;
  id = i6;
  i5=i6;
l23:
  i4 = i4+1;
  i6 = i4<=i1;
  i = i4;
  if (i6) goto l4_loop;
l27:
  i1=i5;
l28:
  i2 = i1<32767;
  if (i2) goto l42;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 66775))+28);
  type = (OOC_SymbolTable__Type)i2;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i0, 66819)), (OOC_INT32)0);
  i4 = i4-1;
  i5 = 0<=i4;
  i = 0;
  if (!i5) goto l41;
  i5=0;
l33_loop:
  i6 = _check_pointer(i0, 66862);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 66862))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 66865))+4);
  i6 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i6);
  if (!i6) goto l36;
  i6 = _check_pointer(i0, 66970);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 66956)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(i6+(_check_index(i5, i7, OOC_UINT32, 66970))*4), (OOC_SymbolTable__Type)i2);
  dummy = i6;
  _assert(i6, 127, 66992);
l36:
  i5 = i5+1;
  i6 = i5<=i4;
  i = i5;
  if (i6) goto l33_loop;
l41:
  i1=i2;
  goto l51;
l42:
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i1);
  type = (OOC_SymbolTable__Type)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 66665)), (OOC_INT32)0);
  i2 = i2-1;
  i4 = 0<=i2;
  i = 0;
  if (!i4) goto l51;
  i4 = (OOC_INT32)b;
  i5=0;
l45_loop:
  i6 = _check_pointer(i0, 66705);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 66691)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i4, (void*)(i6+(_check_index(i5, i7, OOC_UINT32, 66705))*4), (OOC_SymbolTable__Type)i1);
  dummy = i6;
  _assert(i6, 127, 66725);
  i5 = i5+1;
  i6 = i5<=i2;
  i = i5;
  if (i6) goto l45_loop;
l51:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Concat.baseTypes[0]);
  OOC_IR__InitConcat((OOC_IR__Concat)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1, (OOC_IR__ExpressionList)i0);
  return (OOC_IR__Concat)i2;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67272)))), OOC_IR__VisitorDesc_VisitConcat)),OOC_IR__VisitorDesc_VisitConcat)((OOC_IR__Visitor)i0, (OOC_IR__Concat)i1);
  return;
  ;
}

static void OOC_IR__InitDeref(OOC_IR__Deref d, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression pointer, OOC_CHAR8 checkPointer) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)pointer;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 67562))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 67573)))), &_td_OOC_SymbolTable__PointerDesc, 67573)), 67581))+32);
  i2 = (OOC_INT32)d;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 67599))+8) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 67648))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67659)))), &_td_OOC_SymbolTable__PointerDesc, 67659)), 67667))+32);
  *(OOC_INT32*)((_check_pointer(i2, 67626))+12) = i0;
  i0 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i2, 67684))+16) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 67730))+12);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67742)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i0) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 67762))+12);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67774)))), &_td_OOC_SymbolTable__ArrayDesc);
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  _assert(i0, 127, 67720);
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewDeref(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__Deref i;

  i0 = (OOC_INT32)design;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67931)))), &_td_OOC_IR__SelectProcDesc);
  if (i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68544)))), OOC_IR__BuilderDesc_CheckFunctionOp)),OOC_IR__BuilderDesc_CheckFunctionOp)((OOC_IR__Builder)i1, (OOC_IR__Expression)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68592))+4);
  i3 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 68598)))), &_td_OOC_SymbolTable__PointerDesc));
  if (i3) goto l5;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Deref.baseTypes[0]);
  i = (OOC_IR__Deref)i3;
  i4 = *(OOC_INT32*)((_check_pointer(i2, 68796))+16);
  i5 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__derefCheck;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i1, (Config_Section_Options__Option)i5, i4);
  OOC_IR__InitDeref((OOC_IR__Deref)i3, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i0, i1);
  return (OOC_IR__Expression)i3;
  goto l19;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 68662));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68635)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 21, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l19;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68018))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 68030))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68018))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 68030))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68093))+20);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 68101))+44);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68045)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 68045)), 68054)))), OOC_SymbolTable_Namespace__ExtendedDesc_GetSuperProcByIndex)),OOC_SymbolTable_Namespace__ExtendedDesc_GetSuperProcByIndex)((OOC_SymbolTable_Namespace__Extended)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 68045)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 68045)), i3);
  *(OOC_INT32*)((_check_pointer(i0, 68000))+20) = i1;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 68132))+28);
  if (i1) goto l17;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68221))+20);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l15;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68335))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 68343))+52);
  *(OOC_INT32*)((_check_pointer(i0, 68319))+4) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 68371))+28) = OOC_TRUE;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68412))+20);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 68419))+42);
  if (!i1) goto l14;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68447)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 58, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l14:
  return (OOC_IR__Expression)i0;
  goto l19;
l15:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68257)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 59, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l19;
l17:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68167)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 60, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
l19:
  _failed_function(67831); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68999)))), OOC_IR__VisitorDesc_VisitDeref)),OOC_IR__VisitorDesc_VisitDeref)((OOC_IR__Visitor)i0, (OOC_IR__Deref)i1);
  return;
  ;
}

static void OOC_IR__InitEntier(OOC_IR__Entier entier, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)entier;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i1, 69294))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewEntier(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;
  OOC_IR__Entier entier;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Entier.baseTypes[0]);
  entier = (OOC_IR__Entier)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)expr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 69492)))), OOC_IR__BuilderDesc_AssertReal)),OOC_IR__BuilderDesc_AssertReal)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  OOC_IR__InitEntier((OOC_IR__Entier)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69696)))), OOC_IR__VisitorDesc_VisitEntier)),OOC_IR__VisitorDesc_VisitEntier)((OOC_IR__Visitor)i0, (OOC_IR__Entier)i1);
  return;
  ;
}

static void OOC_IR__InitIndex(OOC_IR__Index i, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression array, OOC_IR__Expression index, OOC_CHAR8 checkIndex) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69991))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70002)))), &_td_OOC_SymbolTable__ArrayDesc, 70002)), 70008))+36);
  i2 = (OOC_INT32)i;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 70029))+8) = i0;
  i0 = (OOC_INT32)index;
  *(OOC_INT32*)((_check_pointer(i2, 70051))+12) = i0;
  i0 = checkIndex;
  *(OOC_UINT8*)((_check_pointer(i2, 70073))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIndex(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression array, OOC_IR__Expression index) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_CHAR8 checkIndex;
  OOC_SymbolTable__Array a;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 70354))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__indexCheck;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  checkIndex = i1;
  i3 = (OOC_INT32)array;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 70372)))), OOC_IR__BuilderDesc_CheckFunctionOp)),OOC_IR__BuilderDesc_CheckFunctionOp)((OOC_IR__Builder)i2, (OOC_IR__Expression)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 70415))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 70422)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i4) goto l3;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 70459)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3);
  array = (OOC_IR__Expression)i3;
l3:
  i3 = (OOC_INT32)array;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 70507))+4);
  i4 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 70514)))), &_td_OOC_SymbolTable__ArrayDesc));
  if (i4) goto l17;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 70599))+4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 70609)))), &_td_OOC_SymbolTable__ArrayDesc, 70609);
  a = (OOC_SymbolTable__Array)i4;
  if (i1) goto l8;
  i1=OOC_FALSE;
  goto l9;
l8:
  i1 = *(OOC_UINT8*)((_check_pointer(i4, 70651))+33);
  
l9:
  checkIndex = i1;
  i5 = (OOC_INT32)index;
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 70683)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  index = (OOC_IR__Expression)i5;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 70721)))), &_td_OOC_IR__ConstDesc);
  if (!i6) goto l16;
  i6 = *(OOC_UINT8*)((_check_pointer(i4, 70747))+32);
  if (i6) goto l14;
  i4 = *(OOC_INT32*)((_check_pointer(i4, 71031))+44);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 71004)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5, 0, i4);
  goto l16;
l14:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 70932)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5, 0, 2147483647);
l16:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Index.baseTypes[0]);
  OOC_IR__InitIndex((OOC_IR__Index)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i5, i1);
  return (OOC_IR__Expression)i2;
  goto l18;
l17:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 70547)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i2, 15, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
l18:
  _failed_function(70141); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71313)))), OOC_IR__VisitorDesc_VisitIndex)),OOC_IR__VisitorDesc_VisitIndex)((OOC_IR__Visitor)i0, (OOC_IR__Index)i1);
  return;
  ;
}

static void OOC_IR__InitLen(OOC_IR__Len len, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression array, OOC_IR__Expression arrayVariable, OOC_INT32 dim) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)len;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = variant;
  *(OOC_INT8*)((_check_pointer(i1, 71660))+8) = i0;
  i0 = (OOC_INT32)array;
  *(OOC_INT32*)((_check_pointer(i1, 71689))+12) = i0;
  i0 = (OOC_INT32)arrayVariable;
  *(OOC_INT32*)((_check_pointer(i1, 71714))+20) = i0;
  i0 = dim;
  *(OOC_INT32*)((_check_pointer(i1, 71755))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewLen(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression array, OOC_INT32 dim) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_IR__Len len;
  OOC_IR__Expression arrayVariable;
  OOC_INT8 variant;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Len.baseTypes[0]);
  len = (OOC_IR__Len)i0;
  i1 = (OOC_INT32)array;
  arrayVariable = (OOC_IR__Expression)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72058)))), &_td_OOC_IR__IndexDesc);
  if (i2) goto l3;
  i2=i1;
  goto l9;
l3:
  i2=i1;
l4_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 72108)))), &_td_OOC_IR__IndexDesc, 72108)), 72114))+8);
  i3 = dim;
  arrayVariable = (OOC_IR__Expression)i2;
  dim = (i3+1);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 72058)))), &_td_OOC_IR__IndexDesc);
  if (i3) goto l4_loop;
l9:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 72175))+4);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 72182)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  i4 = dim;
  if (i3) goto l24;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 72262))+4);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 72269)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i3) goto l14;
  i3=OOC_FALSE;
  goto l16;
l14:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 72316))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 72316))+4);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 72327)))), &_td_OOC_SymbolTable__ArrayDesc, 72327)), 72333)))), OOC_SymbolTable__ArrayDesc_GetOpenDimensions)),OOC_SymbolTable__ArrayDesc_GetOpenDimensions)((OOC_SymbolTable__Array)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 72327)))), &_td_OOC_SymbolTable__ArrayDesc, 72327)));
  i3 = i4>=i3;
  
l16:
  if (i3) goto l22;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 72417)))), &_td_OOC_IR__VarDesc);
  if (i3) goto l20;
  variant = 19;
  i3=19;
  goto l25;
l20:
  variant = 18;
  i3=18;
  goto l25;
l22:
  variant = 17;
  i3=17;
  goto l25;
l24:
  variant = 16;
  i3=16;
l25:
  i5 = i3==19;
  if (!i5) goto l30;
  i5=OOC_TRUE;
l30:
  if (i5) goto l32;
  i5=OOC_FALSE;
  goto l34;
l32:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 72616))+4);
  i5 = *(OOC_UINT8*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 72626)))), &_td_OOC_SymbolTable__ArrayDesc, 72626)), 72632))+33);
  i5 = !i5;
  
l34:
  if (!i5) goto l36;
  i5 = (OOC_INT32)b;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 72696));
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 72666)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i5, 54, (OOC_Scanner_Builder_BasicList__Symbol)i6);
  return (OOC_IR__Expression)i5;
l36:
  i5 = (OOC_INT32)sym;
  OOC_IR__InitLen((OOC_IR__Len)i0, (OOC_Scanner_Builder_BasicList__Symbol)i5, i3, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, i4);
  return (OOC_IR__Expression)i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72937)))), OOC_IR__VisitorDesc_VisitLen)),OOC_IR__VisitorDesc_VisitLen)((OOC_IR__Visitor)i0, (OOC_IR__Len)i1);
  return;
  ;
}

static void OOC_IR__InitNegate(OOC_IR__Negate neg, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 73182))+4);
  i2 = (OOC_INT32)neg;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 73198))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewNegate(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Negate.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)expr;
  OOC_IR__InitNegate((OOC_IR__Negate)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73567)))), OOC_IR__VisitorDesc_VisitNegate)),OOC_IR__VisitorDesc_VisitNegate)((OOC_IR__Visitor)i0, (OOC_IR__Negate)i1);
  return;
  ;
}

static void OOC_IR__InitNewBlock(OOC_IR__NewBlock _new, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression size) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)_new;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1);
  i0 = (OOC_INT32)size;
  *(OOC_INT32*)((_check_pointer(i2, 73871))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewNewBlock(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression size) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__NewBlock.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)size;
  OOC_IR__InitNewBlock((OOC_IR__NewBlock)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74314)))), OOC_IR__VisitorDesc_VisitNewBlock)),OOC_IR__VisitorDesc_VisitNewBlock)((OOC_IR__Visitor)i0, (OOC_IR__NewBlock)i1);
  return;
  ;
}

static void OOC_IR__InitNewObject(OOC_IR__NewObject _new, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__ExpressionList length) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)_new;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1);
  i0 = (OOC_INT32)length;
  *(OOC_INT32*)((_check_pointer(i2, 74629))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewNewObject(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__ExpressionList args) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_IR__ExpressionList length;
  OOC_INT32 i;

  i0 = (OOC_INT32)args;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l11;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 74970)), (OOC_INT32)0);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], (i1-1));
  length = (OOC_IR__ExpressionList)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 75008)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l10;
  i3 = (OOC_INT32)b;
  i4=0;
l5_loop:
  i5 = _check_pointer(i1, 75030);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = _check_pointer(i0, 75057);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index((i4+1), i8, OOC_UINT32, 75057))*4);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 75038)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i3, (OOC_IR__Expression)i7);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 75030))*4) = i7;
  i4 = i4+1;
  i5 = i4<=i2;
  i = i4;
  if (i5) goto l5_loop;
l10:
  i0=i1;
  goto l12;
l11:
  i0=(OOC_INT32)0;
l12:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__NewObject.baseTypes[0]);
  OOC_IR__InitNewObject((OOC_IR__NewObject)i3, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_IR__ExpressionList)i0);
  return (OOC_IR__Expression)i3;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75339)))), OOC_IR__VisitorDesc_VisitNewObject)),OOC_IR__VisitorDesc_VisitNewObject)((OOC_IR__Visitor)i0, (OOC_IR__NewObject)i1);
  return;
  ;
}

static void OOC_IR__InitNot(OOC_IR__Not neg, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75581))+4);
  i2 = (OOC_INT32)neg;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 75597))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewNot(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Not.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)expr;
  OOC_IR__InitNot((OOC_IR__Not)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75939)))), OOC_IR__VisitorDesc_VisitNot)),OOC_IR__VisitorDesc_VisitNot)((OOC_IR__Visitor)i0, (OOC_IR__Not)i1);
  return;
  ;
}

static void OOC_IR__InitOdd(OOC_IR__Odd odd, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(0);
  i1 = (OOC_INT32)odd;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i1, 76212))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewOdd(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;
  OOC_IR__Odd odd;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Odd.baseTypes[0]);
  odd = (OOC_IR__Odd)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)expr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 76389)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOdd((OOC_IR__Odd)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76572)))), OOC_IR__VisitorDesc_VisitOdd)),OOC_IR__VisitorDesc_VisitOdd)((OOC_IR__Visitor)i0, (OOC_IR__Odd)i1);
  return;
  ;
}

static void OOC_IR__InitSelectField(OOC_IR__SelectField sf, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression record, OOC_SymbolTable__FieldDecl field, OOC_Scanner_Builder_BasicList__Symbol fieldSym) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)field;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76900))+40);
  i2 = (OOC_INT32)sf;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)record;
  *(OOC_INT32*)((_check_pointer(i2, 76915))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 76940))+12) = i0;
  i0 = (OOC_INT32)fieldSym;
  *(OOC_INT32*)((_check_pointer(i2, 76963))+16) = i0;
  return;
  ;
}

OOC_IR__SelectField OOC_IR__BuilderDesc_NewSelectField(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression record, OOC_SymbolTable__FieldDecl field, OOC_Scanner_Builder_BasicList__Symbol fieldSym) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SelectField.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)record;
  i3 = (OOC_INT32)field;
  i4 = (OOC_INT32)fieldSym;
  OOC_IR__InitSelectField((OOC_IR__SelectField)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i2, (OOC_SymbolTable__FieldDecl)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77472)))), OOC_IR__VisitorDesc_VisitSelectField)),OOC_IR__VisitorDesc_VisitSelectField)((OOC_IR__Visitor)i0, (OOC_IR__SelectField)i1);
  return;
  ;
}

static void OOC_IR__InitSelectProc(OOC_IR__SelectProc sp, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression receiver, OOC_CHAR8 checkPointer, OOC_SymbolTable__Record recordType, OOC_SymbolTable__ProcDecl tbProc, OOC_Scanner_Builder_BasicList__Symbol tbProcSym, OOC_CHAR8 isStaticCall) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)tbProc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77929))+52);
  i2 = (OOC_INT32)sp;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)receiver;
  *(OOC_INT32*)((_check_pointer(i2, 77950))+8) = i1;
  i1 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i2, 77980))+12) = i1;
  i1 = (OOC_INT32)recordType;
  *(OOC_INT32*)((_check_pointer(i2, 78018))+16) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 78052))+20) = i0;
  i0 = (OOC_INT32)tbProcSym;
  *(OOC_INT32*)((_check_pointer(i2, 78078))+24) = i0;
  i0 = isStaticCall;
  *(OOC_UINT8*)((_check_pointer(i2, 78110))+28) = i0;
  return;
  ;
}

OOC_IR__SelectProc OOC_IR__BuilderDesc_NewSelectProc(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression receiver, OOC_SymbolTable__Record recordType, OOC_SymbolTable__ProcDecl tbProc, OOC_Scanner_Builder_BasicList__Symbol tbProcSym, OOC_CHAR8 isStaticCall) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 78616))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__derefCheck;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  i2 = (OOC_INT32)receiver;
  i3 = (OOC_INT32)recordType;
  i4 = (OOC_INT32)tbProc;
  i5 = (OOC_INT32)tbProcSym;
  i6 = isStaticCall;
  i7 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SelectProc.baseTypes[0]);
  OOC_IR__InitSelectProc((OOC_IR__SelectProc)i7, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2, i1, (OOC_SymbolTable__Record)i3, (OOC_SymbolTable__ProcDecl)i4, (OOC_Scanner_Builder_BasicList__Symbol)i5, i6);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78950)))), OOC_IR__VisitorDesc_VisitSelectProc)),OOC_IR__VisitorDesc_VisitSelectProc)((OOC_IR__Visitor)i0, (OOC_IR__SelectProc)i1);
  return;
  ;
}

static void OOC_IR__InitSetMember(OOC_IR__SetMember op, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression element, OOC_IR__Expression set) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(0);
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)element;
  *(OOC_INT32*)((_check_pointer(i1, 79252))+8) = i0;
  i0 = (OOC_INT32)set;
  *(OOC_INT32*)((_check_pointer(i1, 79279))+12) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSetMember(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression element, OOC_IR__Expression set) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__SetMember op;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SetMember.baseTypes[0]);
  op = (OOC_IR__SetMember)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)set;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 79511))+4);
  i4 = (OOC_INT32)element;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 79482)))), OOC_IR__BuilderDesc_ValidSetElement)),OOC_IR__BuilderDesc_ValidSetElement)((OOC_IR__Builder)i1, (OOC_IR__Expression)i4, (OOC_SymbolTable__Type)i3);
  i3 = (OOC_INT32)sym;
  OOC_IR__InitSetMember((OOC_IR__SetMember)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 79711)))), OOC_IR__VisitorDesc_VisitSetMember)),OOC_IR__VisitorDesc_VisitSetMember)((OOC_IR__Visitor)i0, (OOC_IR__SetMember)i1);
  return;
  ;
}

static void OOC_IR__InitSetOp(OOC_IR__SetOp op, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)op;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1);
  i0 = variant;
  *(OOC_INT8*)((_check_pointer(i2, 80008))+8) = i0;
  i0 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i2, 80035))+12) = i0;
  i0 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i2, 80056))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSetOp(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__SetOp op;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SetOp.baseTypes[0]);
  op = (OOC_IR__SetOp)i0;
  i1 = (OOC_INT32)left;
  i2 = (OOC_INT32)right;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 80265))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 80277))+4);
  i3 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i4);
  _assert(i3, 127, 80242);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 80336))+4);
  i4 = (OOC_INT32)sym;
  i5 = variant;
  OOC_IR__InitSetOp((OOC_IR__SetOp)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i5, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, (OOC_SymbolTable__Type)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80511)))), OOC_IR__VisitorDesc_VisitSetOp)),OOC_IR__VisitorDesc_VisitSetOp)((OOC_IR__Visitor)i0, (OOC_IR__SetOp)i1);
  return;
  ;
}

static void OOC_IR__InitSetRange(OOC_IR__SetRange range, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression from, OOC_IR__Expression to) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(10);
  i1 = (OOC_INT32)range;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)from;
  *(OOC_INT32*)((_check_pointer(i1, 80831))+8) = i0;
  i0 = (OOC_INT32)to;
  *(OOC_INT32*)((_check_pointer(i1, 80855))+12) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSetRange(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression from, OOC_IR__Expression to, OOC_CHAR8 isSet) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Type set;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(10);
  i1 = (OOC_INT32)from;
  i2 = i1==(OOC_INT32)0;
  set = (OOC_SymbolTable__Type)i0;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)to;
  i2 = i2==(OOC_INT32)0;
  
l5:
  if (i2) goto l10;
  i2 = isSet;
  if (!i2) goto l9;
  i2 = (OOC_INT32)b;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 81303)))), OOC_IR__BuilderDesc_ValidSetElement)),OOC_IR__BuilderDesc_ValidSetElement)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1, (OOC_SymbolTable__Type)i0);
  from = (OOC_IR__Expression)i1;
  i1 = (OOC_INT32)to;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 81347)))), OOC_IR__BuilderDesc_ValidSetElement)),OOC_IR__BuilderDesc_ValidSetElement)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1, (OOC_SymbolTable__Type)i0);
  to = (OOC_IR__Expression)i0;
l9:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SetRange.baseTypes[0]);
  i1 = (OOC_INT32)from;
  i2 = (OOC_INT32)to;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitSetRange((OOC_IR__SetRange)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2);
  return (OOC_IR__Expression)i0;
  goto l11;
l10:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)Object_Boxed__NewSet(0);
  i3 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 81152)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
l11:
  _failed_function(80910); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81647)))), OOC_IR__VisitorDesc_VisitSetRange)),OOC_IR__VisitorDesc_VisitSetRange)((OOC_IR__Visitor)i0, (OOC_IR__SetRange)i1);
  return;
  ;
}

OOC_CHAR8 OOC_IR__SetRangeDesc_IsEmpty(OOC_IR__SetRange range) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)range;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81807))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 81814)))), &_td_OOC_IR__ConstDesc, 81814)), 81820))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81807))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 81839))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81844)))), &_td_OOC_IR__ConstDesc, 81844)), 81850))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 81814)))), &_td_OOC_IR__ConstDesc, 81814)), 81820))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 81827)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i2, (Object__Object)i0);
  return (i0>0);
  ;
}

OOC_CHAR8 OOC_IR__SetRangeDesc_IntersectsWith(OOC_IR__SetRange range, OOC_IR__SetRange range2) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)range;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82077))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82081)))), &_td_OOC_IR__ConstDesc, 82081)), 82087))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82077))+12);
  i3 = (OOC_INT32)range2;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 82106))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 82112)))), &_td_OOC_IR__ConstDesc, 82112)), 82118))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 82081)))), &_td_OOC_IR__ConstDesc, 82081)), 82087))+8);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82093)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i2, (Object__Object)i4);
  i1 = i1<0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82150))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82156)))), &_td_OOC_IR__ConstDesc, 82156)), 82162))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82150))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 82181))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 82185)))), &_td_OOC_IR__ConstDesc, 82185)), 82191))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82156)))), &_td_OOC_IR__ConstDesc, 82156)), 82162))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82168)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i0, (Object__Object)i2);
  i0 = i0>0;
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return (!i0);
  ;
}

static void OOC_IR__InitShift(OOC_IR__Shift shift, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression by, OOC_CHAR8 rotate) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)value;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82486))+4);
  i2 = (OOC_INT32)shift;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 82504))+8) = i0;
  i0 = (OOC_INT32)by;
  *(OOC_INT32*)((_check_pointer(i2, 82531))+12) = i0;
  i0 = rotate;
  *(OOC_UINT8*)((_check_pointer(i2, 82552))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewShift(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression by, OOC_CHAR8 rotate) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__Shift shift;
  auto OOC_IR__Expression OOC_IR__BuilderDesc_NewShift_AssertShiftable(OOC_IR__Expression expr);
    
    OOC_IR__Expression OOC_IR__BuilderDesc_NewShift_AssertShiftable(OOC_IR__Expression expr) {
      register OOC_INT32 i0,i1,i2,i3;
      Object_BigInt__BigInt v;

      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 82871))+16);
      i1 = (OOC_INT32)expr;
      i0 = i1!=i0;
      if (!i0) goto l14;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 82922))+4);
      i0 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i0);
      if (i0) goto l5;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 82963))+4);
      i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
      
      goto l7;
l5:
      i0=OOC_TRUE;
l7:
      if (i0) goto l9;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 83006))+4);
      i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 11);
      
      goto l10;
l9:
      i0=OOC_TRUE;
l10:
      i0 = !i0;
      if (!i0) goto l14;
      i0 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 83070));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83043)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i2);
      i0 = (OOC_INT32)Object_BigInt__NewInt(1);
      v = (Object_BigInt__BigInt)i0;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 83140));
      i3 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i0);
      i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i0);
      return (OOC_IR__Expression)i0;
l14:
      return (OOC_IR__Expression)i1;
      ;
    }


  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Shift.baseTypes[0]);
  shift = (OOC_IR__Shift)i0;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)value;
  i2 = (OOC_INT32)OOC_IR__BuilderDesc_NewShift_AssertShiftable((OOC_IR__Expression)i2);
  i3 = (OOC_INT32)b;
  i4 = (OOC_INT32)by;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 83340)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i3, (OOC_IR__Expression)i4);
  i4 = rotate;
  OOC_IR__InitShift((OOC_IR__Shift)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83545)))), OOC_IR__VisitorDesc_VisitShift)),OOC_IR__VisitorDesc_VisitShift)((OOC_IR__Visitor)i0, (OOC_IR__Shift)i1);
  return;
  ;
}

static void OOC_IR__InitTypeCast(OOC_IR__TypeCast cast, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)cast;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1);
  i0 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i2, 83850))+8) = i0;
  return;
  ;
}

OOC_IR__TypeCast OOC_IR__BuilderDesc_NewTypeCast(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression typeExpr, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)typeExpr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84078)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  type = (OOC_SymbolTable__Type)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 84113))+24);
  i2 = i2<0;
  i3 = (OOC_INT32)expr;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 84132))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 84137))+24);
  i2 = i2<0;
  
  goto l5;
l3:
  i2=OOC_TRUE;
l5:
  if (i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 84175))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 84180))+24);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 84163))+24);
  i2 = i4!=i2;
  
  goto l9;
l7:
  i2=OOC_TRUE;
l9:
  if (!i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 84231));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84199)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 52, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l11:
  i0 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeCast.baseTypes[0]);
  OOC_IR__InitTypeCast((OOC_IR__TypeCast)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1, (OOC_IR__Expression)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84492)))), OOC_IR__VisitorDesc_VisitTypeCast)),OOC_IR__VisitorDesc_VisitTypeCast)((OOC_IR__Visitor)i0, (OOC_IR__TypeCast)i1);
  return;
  ;
}

static void OOC_IR__InitTypeConv(OOC_IR__TypeConv conv, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)conv;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1);
  i0 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i2, 84799))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeConv(OOC_IR__Builder b, OOC_SymbolTable__Type type, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__TypeConv conv;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84966))+4);
  i2 = (OOC_INT32)type;
  i1 = i1==i2;
  if (i1) goto l10;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85081)))), &_td_OOC_IR__TypeConvDesc);
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85122))+4);
  i1 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
  
l7:
  if (!i1) goto l9;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85189)))), &_td_OOC_IR__TypeConvDesc, 85189)), 85198))+8);
  expr = (OOC_IR__Expression)i0;
l9:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeConv.baseTypes[0]);
  conv = (OOC_IR__TypeConv)i0;
  i1 = (OOC_INT32)expr;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 85264));
  OOC_IR__InitTypeConv((OOC_IR__TypeConv)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i1);
  return (OOC_IR__Expression)i0;
  goto l11;
l10:
  return (OOC_IR__Expression)i0;
l11:
  _failed_function(84860); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85481)))), OOC_IR__VisitorDesc_VisitTypeConv)),OOC_IR__VisitorDesc_VisitTypeConv)((OOC_IR__Visitor)i0, (OOC_IR__TypeConv)i1);
  return;
  ;
}

OOC_CHAR8 OOC_IR__BuilderDesc_Widen(OOC_IR__Builder b, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86965))+4);
  i2 = (OOC_INT32)type;
  _assert((i1!=(OOC_INT32)0), 127, 86953);
  _assert((i2!=(OOC_INT32)0), 127, 86983);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87038))+4);
  i0 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  if (i0) goto l79;
  i0 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87163))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 87170)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l73;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87506))+4);
  i0 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  if (i0) goto l71;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87755))+4);
  i0 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i2);
  if (i0) goto l69;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87917))+4);
  i0 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i0, 16);
  if (i0) goto l11;
  i0=OOC_FALSE;
  goto l13;
l11:
  i0 = OOC_SymbolTable_TypeRules__IsNilCompatible((OOC_SymbolTable__Type)i2);
  
l13:
  if (i0) goto l67;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 88093))+4);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 88100)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i0) goto l17;
  i0=OOC_FALSE;
  goto l19;
l17:
  i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i2, 12);
  
l19:
  if (i0) goto l65;
  i0 = (OOC_INT32)*expr;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 88257)))), &_td_OOC_IR__ConstDesc);
  if (i0) goto l23;
  i0=OOC_FALSE;
  goto l25;
l23:
  i0 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i2);
  
l25:
  if (i0) goto l27;
  i0=OOC_FALSE;
  goto l29;
l27:
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 88337))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l29:
  if (i0) goto l31;
  i0=OOC_FALSE;
  goto l33;
l31:
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 88452))+4);
  i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i1);
  i0 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  
l33:
  if (i0) goto l63;
  i0 = (OOC_INT32)*expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 88618)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l37;
  i0=OOC_FALSE;
  goto l39;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 88662))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l39:
  if (i0) goto l41;
  i0=OOC_FALSE;
  goto l43;
l41:
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 88695)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l43:
  if (i0) goto l45;
  i0=OOC_FALSE;
  goto l47;
l45:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 88745)))), &_td_OOC_SymbolTable__ArrayDesc, 88745)), 88751))+36);
  i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
  
l47:
  if (i0) goto l61;
  i0 = (OOC_INT32)*expr;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 88924)))), &_td_OOC_IR__ConstDesc);
  if (i0) goto l51;
  i0=OOC_FALSE;
  goto l53;
l51:
  i0 = OOC_SymbolTable_TypeRules__IsObject((OOC_SymbolTable__Type)i2);
  
l53:
  if (i0) goto l55;
  i0=OOC_FALSE;
  goto l57;
l55:
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 88997))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l57:
  if (i0) goto l59;
  return OOC_FALSE;
  goto l80;
l59:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89112))+28);
  i2 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89096)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i1, (OOC_IR__Expression)i2);
  *expr = (OOC_IR__Expression)i0;
  return OOC_TRUE;
  goto l80;
l61:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 88884)))), &_td_OOC_SymbolTable__ArrayDesc, 88884)), 88890))+36);
  i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i1);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 88838)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i1);
  return i0;
  goto l80;
l63:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 88553)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 88544)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  *expr = (OOC_IR__Expression)i0;
  return OOC_TRUE;
  goto l80;
l65:
  return OOC_TRUE;
  goto l80;
l67:
  return OOC_TRUE;
  goto l80;
l69:
  return OOC_TRUE;
  goto l80;
l71:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87669)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87660)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  *expr = (OOC_IR__Expression)i0;
  return OOC_TRUE;
  goto l80;
l73:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 87319)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l76;
  i0=OOC_FALSE;
  goto l77;
l76:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87431))+4);
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__FormalPars)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 87381)))), &_td_OOC_SymbolTable__FormalParsDesc, 87381)), (OOC_SymbolTable__FormalPars)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87442)))), &_td_OOC_SymbolTable__FormalParsDesc, 87442)), OOC_FALSE);
  
l77:
  return i0;
  goto l80;
l79:
  return OOC_TRUE;
l80:
  _failed_function(85542); return 0;
  ;
}

OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign(OOC_IR__Builder b, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;
  OOC_IR__Expression oldExpr;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign_LengthOk();
    
    OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign_LengthOk() {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*expr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89736))+4);
      i0 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i0);
      if (i0) goto l3;
      return OOC_TRUE;
      goto l8;
l3:
      i0 = (OOC_INT32)type;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89769)))), &_td_OOC_SymbolTable__ArrayDesc, 89769)), 89775))+32);
      if (i1) goto l6;
      i1 = (OOC_INT32)*expr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 89854)))), &_td_OOC_IR__ConstDesc, 89854)), 89860))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 89874)))), &_td_Object_Boxed__StringDesc, 89874)), 89881));
      i1 = *(OOC_INT32*)(_check_pointer(i1, 89888));
      i0 = *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89926)))), &_td_OOC_SymbolTable__ArrayDesc, 89926)), 89932))+44);
      return (i1<i0);
      goto l8;
l6:
      return OOC_FALSE;
l8:
      _failed_function(89673); return 0;
      ;
    }


  i0 = (OOC_INT32)*expr;
  oldExpr = (OOC_IR__Expression)i0;
  i0 = (OOC_INT32)type;
  i1 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i0, 11);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 90125))+4);
  i1 = OOC_SymbolTable_TypeRules__IsByteCompatible((OOC_SymbolTable__Type)i1);
  
l5:
  if (i1) goto l11;
  i1 = (OOC_INT32)b;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 90144)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i0);
  if (i0) goto l9;
  i0=OOC_FALSE;
  goto l13;
l9:
  i0 = OOC_IR__BuilderDesc_WidenForAssign_LengthOk();
  
  goto l13;
l11:
  i0=OOC_TRUE;
l13:
  if (i0) goto l15;
  i0 = (OOC_INT32)oldExpr;
  *expr = (OOC_IR__Expression)i0;
  return OOC_FALSE;
  goto l16;
l15:
  return OOC_TRUE;
l16:
  _failed_function(89233); return 0;
  ;
}

OOC_CHAR8 OOC_IR__BuilderDesc_WidenToCommon(OOC_IR__Builder b, OOC_IR__Expression *left, OOC_IR__Expression *right) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Type base;
  auto OOC_SymbolTable__Type OOC_IR__BuilderDesc_WidenToCommon_CommonBase(OOC_SymbolTable__Type t1, OOC_SymbolTable__Type t2);
    
    OOC_SymbolTable__Type OOC_IR__BuilderDesc_WidenToCommon_CommonBase(OOC_SymbolTable__Type t1, OOC_SymbolTable__Type t2) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)t1;
      i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
      i1 = (OOC_INT32)t2;
      i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i1);
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l3;
      i2=OOC_FALSE;
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
      _failed_function(90868); return 0;
      ;
    }


  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*right;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 91403))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91385)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)left, (OOC_SymbolTable__Type)i1);
  if (i1) goto l3;
  i1 = (OOC_INT32)*left;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 91432))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91414)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)right, (OOC_SymbolTable__Type)i1);
  
  goto l5;
l3:
  i0=OOC_TRUE;
l5:
  if (i0) goto l21;
  i0 = (OOC_INT32)*left;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91475)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l9;
  i1=OOC_FALSE;
  goto l11;
l9:
  i1 = (OOC_INT32)*right;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91494)))), &_td_OOC_IR__ConstDesc);
  
l11:
  if (!i1) goto l22;
  i1 = (OOC_INT32)*right;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 91548))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 91536))+4);
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_WidenToCommon_CommonBase((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  i1 = i0!=(OOC_INT32)0;
  base = (OOC_SymbolTable__Type)i0;
  if (!i1) goto l22;
  i1 = (OOC_INT32)b;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91649)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)left, (OOC_SymbolTable__Type)i0);
  if (i2) goto l17;
  i0=OOC_FALSE;
  goto l18;
l17:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91671)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)right, (OOC_SymbolTable__Type)i0);
  
l18:
  _assert(i0, 127, 91641);
  return OOC_TRUE;
  goto l22;
l21:
  return OOC_TRUE;
l22:
  return OOC_FALSE;
  ;
}

static void OOC_IR__MakeAssignmentCompatible(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)type;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 92121)))), OOC_IR__BuilderDesc_WidenForAssign)),OOC_IR__BuilderDesc_WidenForAssign)((OOC_IR__Builder)i0, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l4;
  i1 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 92163)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 24, (OOC_Scanner_Builder_BasicList__Symbol)i1);
l4:
  return;
  ;
}

static void OOC_IR__InitTypeTag(OOC_IR__TypeTag tag, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)tag;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)design;
  *(OOC_INT32*)((_check_pointer(i1, 92497))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeTag(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)design;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92665))+4);
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92671)))), &_td_OOC_SymbolTable__RecordDesc));
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92703))+4);
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92713)))), &_td_OOC_SymbolTable__RecordDesc, 92713)), 92720))+30);
  i1 = !i1;
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 92772));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92747)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 55, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l7:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeTag.baseTypes[0]);
  OOC_IR__InitTypeTag((OOC_IR__TypeTag)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93024)))), OOC_IR__VisitorDesc_VisitTypeTag)),OOC_IR__VisitorDesc_VisitTypeTag)((OOC_IR__Visitor)i0, (OOC_IR__TypeTag)i1);
  return;
  ;
}

static void OOC_IR__InitTypeTest(OOC_IR__TypeTest test, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr, OOC_SymbolTable__Record referenceType, OOC_CHAR8 checkPointer, OOC_IR__Expression origExpr, OOC_IR__TypeRef origType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(0);
  i1 = (OOC_INT32)test;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i1, 93481))+8) = i0;
  i0 = (OOC_INT32)referenceType;
  *(OOC_INT32*)((_check_pointer(i1, 93505))+12) = i0;
  i0 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i1, 93547))+16) = i0;
  i0 = (OOC_INT32)origExpr;
  *(OOC_INT32*)((_check_pointer(i1, 93587))+20) = i0;
  i0 = (OOC_INT32)origType;
  *(OOC_INT32*)((_check_pointer(i1, 93619))+24) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeTest(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr, OOC_IR__Expression referenceType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SymbolTable__Type refType;
  OOC_IR__Expression origExpr;
  OOC_CHAR8 checkPointer;
  OOC_IR__TypeTest test;
  OOC_IR__TypeRef typeRef;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewTypeTest_HasDynamicType(OOC_IR__Expression expr);
    
    OOC_CHAR8 OOC_IR__BuilderDesc_NewTypeTest_HasDynamicType(OOC_IR__Expression expr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Type type;

      i0 = (OOC_INT32)expr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93999))+4);
      type = (OOC_SymbolTable__Type)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94021)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i2) goto l11;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94194)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i0) goto l5;
      return OOC_FALSE;
      goto l20;
l5:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 94231))+32);
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94241)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i0) goto l8;
      i0=OOC_FALSE;
      goto l9;
l8:
      i0 = *(OOC_UINT8*)((_check_pointer(i1, 94263))+41);
      i0 = !i0;
      
l9:
      return i0;
      goto l20;
l11:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94059)))), &_td_OOC_IR__VarDesc));
      if (i1) goto l18;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94088)))), &_td_OOC_IR__VarDesc, 94088)), 94092))+8);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94102)))), &_td_OOC_SymbolTable__VarDeclDesc, 94102)), 94110))+50);
      if (i1) goto l16;
      i0=OOC_FALSE;
      goto l19;
l16:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94142)))), &_td_OOC_IR__VarDesc, 94142)), 94146))+8);
      i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94156)))), &_td_OOC_SymbolTable__VarDeclDesc, 94156)), 94164))+55);
      
      goto l19;
l18:
      i0=OOC_TRUE;
l19:
      return i0;
l20:
      _failed_function(93897); return 0;
      ;
    }


  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)referenceType;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94369)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  i3 = i2==(OOC_INT32)0;
  refType = (OOC_SymbolTable__Type)i2;
  if (i3) goto l25;
  i3 = (OOC_INT32)expr;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 94496))+4);
  i2 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i4);
  i2 = !i2;
  if (i2) goto l23;
  i0 = OOC_IR__BuilderDesc_NewTypeTest_HasDynamicType((OOC_IR__Expression)i3);
  i0 = !i0;
  if (i0) goto l21;
  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 94922))+4);
  i2 = (OOC_INT32)refType;
  i1 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
  i3 = (OOC_INT32)referenceType;
  i4 = (OOC_INT32)b;
  if (!i1) goto l9;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 94984));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 94943)))), OOC_IR__BuilderDesc_WarnSym)),OOC_IR__BuilderDesc_WarnSym)((OOC_IR__Builder)i4, 61, (OOC_Scanner_Builder_BasicList__Symbol)i1);
l9:
  origExpr = (OOC_IR__Expression)i0;
  i1 = (OOC_INT32)sym;
  i5 = *(OOC_INT32*)((_check_pointer(i1, 95100))+16);
  i6 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__derefCheck;
  i4 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i4, (Config_Section_Options__Option)i6, i5);
  checkPointer = i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95123)))), &_td_OOC_IR__DerefDesc);
  if (i5) goto l15;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 95193))+4);
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 95200)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i5) goto l16;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 95252)))), &_td_OOC_SymbolTable__PointerDesc, 95252)), 95260))+32);
  refType = (OOC_SymbolTable__Type)i2;
  goto l16;
l15:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95159)))), &_td_OOC_IR__DerefDesc, 95159)), 95165))+8);
  expr = (OOC_IR__Expression)i2;
l16:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeTest.baseTypes[0]);
  test = (OOC_IR__TypeTest)i2;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 95325)))), &_td_OOC_IR__TypeRefDesc);
  if (i5) goto l19;
  typeRef = (OOC_IR__TypeRef)(OOC_INT32)0;
  i3=(OOC_INT32)0;
  goto l20;
l19:
  i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 95375)))), &_td_OOC_IR__TypeRefDesc, 95375);
  typeRef = (OOC_IR__TypeRef)i3;
  
l20:
  i5 = (OOC_INT32)refType;
  i6 = (OOC_INT32)expr;
  OOC_IR__InitTypeTest((OOC_IR__TypeTest)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i6, (OOC_SymbolTable__Record)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 95480)))), &_td_OOC_SymbolTable__RecordDesc, 95480)), i4, (OOC_IR__Expression)i0, (OOC_IR__TypeRef)i3);
  return (OOC_IR__Expression)i2;
  goto l26;
l21:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 94872));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94842)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 43, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l26;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 94566));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94523)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 17, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l26;
l25:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 94441))+16);
  return (OOC_IR__Expression)i0;
l26:
  _failed_function(93687); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95742)))), OOC_IR__VisitorDesc_VisitTypeTest)),OOC_IR__VisitorDesc_VisitTypeTest)((OOC_IR__Visitor)i0, (OOC_IR__TypeTest)i1);
  return;
  ;
}

static void OOC_IR__InitTypeGuard(OOC_IR__TypeGuard guard, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__TypeTest test, OOC_CHAR8 checkPointer, OOC_CHAR8 checkType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)guard;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1);
  i0 = (OOC_INT32)test;
  *(OOC_INT32*)((_check_pointer(i2, 96116))+8) = i0;
  i0 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i2, 96141))+12) = i0;
  i0 = checkType;
  *(OOC_UINT8*)((_check_pointer(i2, 96182))+13) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeGuard(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression design, OOC_IR__TypeRef ref) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SymbolTable__Type guardType;
  OOC_IR__Expression test;
  OOC_IR__TypeGuard guard;

  i0 = (OOC_INT32)ref;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 96459))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 96470)))), &_td_OOC_SymbolTable__TypeDeclDesc, 96470)), 96479))+40);
  guardType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)design;
  i4 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 96490)))), OOC_IR__BuilderDesc_CheckFunctionOp)),OOC_IR__BuilderDesc_CheckFunctionOp)((OOC_IR__Builder)i2, (OOC_IR__Expression)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 96532)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i3, (OOC_IR__Expression)i0);
  test = (OOC_IR__Expression)i0;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96574)))), &_td_OOC_IR__TypeTestDesc);
  if (i3) goto l3;
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeGuard.baseTypes[0]);
  guard = (OOC_IR__TypeGuard)i3;
  i5 = *(OOC_INT32*)((_check_pointer(i4, 96725))+16);
  i6 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__derefCheck;
  i5 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i6, i5);
  i6 = *(OOC_INT32*)((_check_pointer(i4, 96793))+16);
  i7 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__typeGuard;
  i2 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i7, i6);
  OOC_IR__InitTypeGuard((OOC_IR__TypeGuard)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i1, (OOC_IR__TypeTest)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96653)))), &_td_OOC_IR__TypeTestDesc, 96653)), i5, i2);
  return (OOC_IR__Expression)i3;
l4:
  _failed_function(96254); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 97025)))), OOC_IR__VisitorDesc_VisitTypeGuard)),OOC_IR__VisitorDesc_VisitTypeGuard)((OOC_IR__Visitor)i0, (OOC_IR__TypeGuard)i1);
  return;
  ;
}

static void OOC_IR__InitReference(OOC_IR__Reference ref, OOC_Scanner_Builder_BasicList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)type;
  i2 = (OOC_INT32)ref;
  OOC_IR__InitExpression((OOC_IR__Expression)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1);
  i0 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i2, 97349))+8) = i0;
  return;
  ;
}

static void OOC_IR__InitModuleRef(OOC_IR__ModuleRef modRef, OOC_Scanner_Builder_BasicList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__Module decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)modRef;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitReference((OOC_IR__Reference)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Declaration)i3);
  return;
  ;
}

OOC_IR__ModuleRef OOC_IR__BuilderDesc_NewModuleRef(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol name, OOC_SymbolTable__Module decl) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__ModuleRef modRef;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ModuleRef.baseTypes[0]);
  modRef = (OOC_IR__ModuleRef)i0;
  i1 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 97862))+24);
  i2 = (OOC_INT32)name;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitModuleRef((OOC_IR__ModuleRef)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Module)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 98081)))), OOC_IR__VisitorDesc_VisitModuleRef)),OOC_IR__VisitorDesc_VisitModuleRef)((OOC_IR__Visitor)i0, (OOC_IR__ModuleRef)i1);
  return;
  ;
}

static void OOC_IR__InitPredefProc(OOC_IR__PredefProc pproc, OOC_Scanner_Builder_BasicList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__PredefProc decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)pproc;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitReference((OOC_IR__Reference)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Declaration)i3);
  return;
  ;
}

static OOC_IR__PredefProc OOC_IR__NewPredefProc(OOC_Scanner_Builder_BasicList__Symbol name, OOC_SymbolTable__PredefProc decl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__PredefProc.baseTypes[0]);
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)decl;
  OOC_IR__InitPredefProc((OOC_IR__PredefProc)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)(OOC_INT32)0, (OOC_SymbolTable__PredefProc)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 98807)))), OOC_IR__VisitorDesc_VisitPredefProc)),OOC_IR__VisitorDesc_VisitPredefProc)((OOC_IR__Visitor)i0, (OOC_IR__PredefProc)i1);
  return;
  ;
}

static void OOC_IR__InitProcedureRef(OOC_IR__ProcedureRef procRef, OOC_Scanner_Builder_BasicList__Symbol name, OOC_SymbolTable__ProcDecl decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 99094))+52);
  i2 = (OOC_INT32)procRef;
  i3 = (OOC_INT32)name;
  OOC_IR__InitReference((OOC_IR__Reference)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Declaration)i0);
  return;
  ;
}

static OOC_IR__ProcedureRef OOC_IR__NewProcedureRef(OOC_Scanner_Builder_BasicList__Symbol name, OOC_SymbolTable__ProcDecl decl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ProcedureRef.baseTypes[0]);
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)decl;
  OOC_IR__InitProcedureRef((OOC_IR__ProcedureRef)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__ProcDecl)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 99536)))), OOC_IR__VisitorDesc_VisitProcedureRef)),OOC_IR__VisitorDesc_VisitProcedureRef)((OOC_IR__Visitor)i0, (OOC_IR__ProcedureRef)i1);
  return;
  ;
}

static void OOC_IR__InitTypeRef(OOC_IR__TypeRef typeRef, OOC_Scanner_Builder_BasicList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__TypeDecl decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)typeRef;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitReference((OOC_IR__Reference)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Declaration)i3);
  return;
  ;
}

OOC_IR__TypeRef OOC_IR__BuilderDesc_NewTypeRef(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol name, OOC_SymbolTable__TypeDecl decl) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__TypeRef typeRef;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeRef.baseTypes[0]);
  typeRef = (OOC_IR__TypeRef)i0;
  i1 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 100047))+20);
  i2 = (OOC_INT32)name;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitTypeRef((OOC_IR__TypeRef)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__TypeDecl)i3);
  return (OOC_IR__TypeRef)i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 100257)))), OOC_IR__VisitorDesc_VisitTypeRef)),OOC_IR__VisitorDesc_VisitTypeRef)((OOC_IR__Visitor)i0, (OOC_IR__TypeRef)i1);
  return;
  ;
}

static void OOC_IR__InitVar(OOC_IR__Var var, OOC_Scanner_Builder_BasicList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__VarDecl decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  i3 = (OOC_INT32)decl;
  OOC_IR__InitReference((OOC_IR__Reference)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Declaration)i3);
  return;
  ;
}

OOC_IR__Var OOC_IR__BuilderDesc_NewVar(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol name, OOC_SymbolTable__VarDecl decl) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__Var var;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Var.baseTypes[0]);
  var = (OOC_IR__Var)i0;
  i1 = (OOC_INT32)decl;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 100709))+40);
  i3 = (OOC_INT32)name;
  OOC_IR__InitVar((OOC_IR__Var)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__VarDecl)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 100883)))), OOC_IR__VisitorDesc_VisitVar)),OOC_IR__VisitorDesc_VisitVar)((OOC_IR__Visitor)i0, (OOC_IR__Var)i1);
  return;
  ;
}

void OOC_IR__InitStatement(OOC_IR__Statement statm, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(17);
  i1 = (OOC_INT32)statm;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitExpression((OOC_IR__Expression)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  return;
  ;
}

static void OOC_IR__InitAssert(OOC_IR__Assert assert, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression predicate, OOC_INT32 code, OOC_CHAR8 disabled) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)assert;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)predicate;
  *(OOC_INT32*)((_check_pointer(i1, 101466))+8) = i0;
  i0 = code;
  *(OOC_INT32*)((_check_pointer(i1, 101502))+12) = i0;
  i0 = disabled;
  *(OOC_UINT8*)((_check_pointer(i1, 101528))+16) = i0;
  return;
  ;
}

OOC_IR__Assert OOC_IR__BuilderDesc_NewAssert(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression predicate, OOC_IR__Expression code, OOC_CHAR8 disabled) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__Assert assert;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Assert.baseTypes[0]);
  i1 = (OOC_INT32)predicate;
  i2 = i1!=(OOC_INT32)0;
  assert = (OOC_IR__Assert)i0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)b;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 101827)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1);
  predicate = (OOC_IR__Expression)i1;
l3:
  i1 = (OOC_INT32)code;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l6;
  i2 = (OOC_INT32)b;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 101946)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1, 0, 128);
  
  goto l7;
l6:
  i1=127;
l7:
  i2 = (OOC_INT32)sym;
  i3 = disabled;
  i4 = (OOC_INT32)predicate;
  OOC_IR__InitAssert((OOC_IR__Assert)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i4, i1, i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 102255)))), OOC_IR__VisitorDesc_VisitAssert)),OOC_IR__VisitorDesc_VisitAssert)((OOC_IR__Visitor)i0, (OOC_IR__Assert)i1);
  return;
  ;
}

void OOC_IR__InitAssignment(OOC_IR__Assignment assignment, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression variable, OOC_IR__Expression value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)assignment;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)variable;
  *(OOC_INT32*)((_check_pointer(i1, 102584))+8) = i0;
  i0 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i1, 102622))+12) = i0;
  return;
  ;
}

void OOC_IR__BuilderDesc_AssertVar(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 102750));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102763))+4);
  i2 = OOC_SymbolTable_TypeRules__IsReadOnlyType((OOC_SymbolTable__Module)i2, (OOC_SymbolTable__Type)i3);
  if (i2) goto l36;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 102846)))), &_td_OOC_IR__VarDesc);
  if (i2) goto l23;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 103116)))), &_td_OOC_IR__DerefDesc);
  if (i2) goto l37;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 103196)))), &_td_OOC_IR__IndexDesc);
  if (i2) goto l20;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 103292)))), &_td_OOC_IR__SelectFieldDesc);
  if (i2) goto l15;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 103518)))), &_td_OOC_IR__TypeGuardDesc);
  if (i2) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 103655));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 103628)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 29, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  goto l37;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 103558))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 103564))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 103542)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  goto l37;
l15:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 103335))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 103318)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 103423))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 103409));
  i2 = OOC_SymbolTable_TypeRules__IsReadOnly((OOC_SymbolTable__Module)i3, (OOC_SymbolTable__Declaration)i2);
  if (!i2) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 103480))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 103448)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  goto l37;
l20:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 103233))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 103216)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  goto l37;
l23:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102896))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 102882));
  i2 = OOC_SymbolTable_TypeRules__IsReadOnly((OOC_SymbolTable__Module)i3, (OOC_SymbolTable__Declaration)i2);
  if (i2) goto l33;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102979))+8);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 102985)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i2) goto l28;
  i2=OOC_FALSE;
  goto l30;
l28:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 103007))+8);
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 103017)))), &_td_OOC_SymbolTable__VarDeclDesc, 103017)), 103025))+53);
  
l30:
  if (!i2) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 103084));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 103053)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 42, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  goto l37;
l33:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 102952));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 102920)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  goto l37;
l36:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 102814));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 102782)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_Builder_BasicList__Symbol)i1);
l37:
  return;
  ;
}

OOC_IR__Statement OOC_IR__BuilderDesc_NewAssignment(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression variable, OOC_IR__Expression value) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)variable;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 103880)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 103957))+4);
  i3 = (OOC_INT32)sym;
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (void*)(OOC_INT32)&value, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)value;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 103996))+4);
  i2 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i2);
  if (i2) goto l11;
  i2 = (OOC_INT32)value;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 104216))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 104223)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i4) goto l5;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 104246))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 104253)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l7;
l5:
  i4=OOC_TRUE;
l7:
  if (i4) goto l9;
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Assignment.baseTypes[0]);
  OOC_IR__InitAssignment((OOC_IR__Assignment)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2);
  return (OOC_IR__Statement)i0;
  goto l12;
l9:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104348)))), OOC_IR__BuilderDesc_NewCopy)),OOC_IR__BuilderDesc_NewCopy)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
  return (OOC_IR__Statement)i0;
  goto l12;
l11:
  i2 = (OOC_INT32)value;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104169)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i1, 0);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104160)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104089)))), OOC_IR__BuilderDesc_NewCopyString)),OOC_IR__BuilderDesc_NewCopyString)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1, (OOC_IR__Expression)i4);
  return (OOC_IR__Statement)i0;
l12:
  _failed_function(103724); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104698)))), OOC_IR__VisitorDesc_VisitAssignment)),OOC_IR__VisitorDesc_VisitAssignment)((OOC_IR__Visitor)i0, (OOC_IR__Assignment)i1);
  return;
  ;
}

static void OOC_IR__InitAssignOp(OOC_IR__AssignOp ao, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)op;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104940)))), &_td_OOC_IR__BinaryArithDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105011)))), &_td_OOC_IR__ChangeElementDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105007)))), 105007);
  goto l8;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105063))+12);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)ao;
  OOC_IR__InitAssignment((OOC_IR__Assignment)i3, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
  goto l8;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 104990))+12);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)ao;
  OOC_IR__InitAssignment((OOC_IR__Assignment)i3, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
l8:
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewAssignOp(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105225)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__AssignOp.baseTypes[0]);
  OOC_IR__InitAssignOp((OOC_IR__AssignOp)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i0);
  return (OOC_IR__Expression)i2;
  goto l4;
l3:
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105250))+16);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(105128); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105558)))), OOC_IR__VisitorDesc_VisitAssignOp)),OOC_IR__VisitorDesc_VisitAssignOp)((OOC_IR__Visitor)i0, (OOC_IR__AssignOp)i1);
  return;
  ;
}

static void OOC_IR__InitCall(OOC_IR__Call call, OOC_IR__Expression design, OOC_IR__ExpressionList arguments, OOC_SymbolTable__VarDeclArray formalPars) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)design;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 105869));
  i2 = (OOC_INT32)call;
  OOC_IR__InitStatement((OOC_IR__Statement)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 105891))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105902)))), &_td_OOC_SymbolTable__FormalParsDesc, 105902)), 105913))+36);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106011))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 106022)))), &_td_OOC_SymbolTable__FormalParsDesc, 106022)), 106033))+36);
  *(OOC_INT32*)((_check_pointer(i2, 105995))+4) = i1;
l4:
  *(OOC_INT32*)((_check_pointer(i2, 106063))+8) = i0;
  i0 = (OOC_INT32)arguments;
  *(OOC_INT32*)((_check_pointer(i2, 106091))+12) = i0;
  i0 = (OOC_INT32)formalPars;
  *(OOC_INT32*)((_check_pointer(i2, 106125))+16) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106305)))), OOC_IR__VisitorDesc_VisitCall)),OOC_IR__VisitorDesc_VisitCall)((OOC_IR__Visitor)i0, (OOC_IR__Call)i1);
  return;
  ;
}

static void OOC_IR__InitCopy(OOC_IR__Copy cp, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_CHAR8 checkDynamicType) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)cp;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i1, 106604))+8) = i0;
  i0 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i1, 106630))+12) = i0;
  i0 = checkDynamicType;
  *(OOC_UINT8*)((_check_pointer(i1, 106652))+16) = i0;
  return;
  ;
}

OOC_IR__Copy OOC_IR__BuilderDesc_NewCopy(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewCopy_HasDynamicType(OOC_IR__Expression dest);
    
    OOC_CHAR8 OOC_IR__BuilderDesc_NewCopy_HasDynamicType(OOC_IR__Expression dest) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)dest;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106920))+4);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 106927)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106948))+4);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 106958)))), &_td_OOC_SymbolTable__RecordDesc, 106958)), 106965))+30);
      
l5:
      if (!i1) goto l14;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107002)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l12;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107060)))), &_td_OOC_IR__VarDesc);
      if (!i1) goto l14;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107095)))), &_td_OOC_IR__VarDesc, 107095)), 107099))+8);
      i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107110)))), &_td_OOC_SymbolTable__VarDeclDesc, 107110)), 107118))+50);
      return i0;
      goto l14;
l12:
      return OOC_TRUE;
l14:
      return OOC_FALSE;
      ;
    }


  i0 = (OOC_INT32)dest;
  i0 = OOC_IR__BuilderDesc_NewCopy_HasDynamicType((OOC_IR__Expression)i0);
  i1 = (OOC_INT32)sym;
  if (i0) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT32*)((_check_pointer(i1, 107319))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__typeGuard;
  i0 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i0);
  
l4:
  i2 = (OOC_INT32)source;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Copy.baseTypes[0]);
  i4 = (OOC_INT32)dest;
  OOC_IR__InitCopy((OOC_IR__Copy)i3, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i4, i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107563)))), OOC_IR__VisitorDesc_VisitCopy)),OOC_IR__VisitorDesc_VisitCopy)((OOC_IR__Visitor)i0, (OOC_IR__Copy)i1);
  return;
  ;
}

static void OOC_IR__InitCopyParameter(OOC_IR__CopyParameter cp, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Var param) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)cp;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)param;
  *(OOC_INT32*)((_check_pointer(i1, 107826))+8) = i0;
  return;
  ;
}

OOC_IR__CopyParameter OOC_IR__BuilderDesc_NewCopyParameter(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Var param) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CopyParameter.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)param;
  OOC_IR__InitCopyParameter((OOC_IR__CopyParameter)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Var)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108250)))), OOC_IR__VisitorDesc_VisitCopyParameter)),OOC_IR__VisitorDesc_VisitCopyParameter)((OOC_IR__Visitor)i0, (OOC_IR__CopyParameter)i1);
  return;
  ;
}

static void OOC_IR__InitCopyString(OOC_IR__CopyString cp, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression maxLength) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)cp;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i1, 108564))+8) = i0;
  i0 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i1, 108590))+12) = i0;
  i0 = (OOC_INT32)maxLength;
  *(OOC_INT32*)((_check_pointer(i1, 108612))+16) = i0;
  return;
  ;
}

OOC_IR__CopyString OOC_IR__BuilderDesc_NewCopyString(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression maxLength) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type baseChar;
  OOC_CHAR8 ok;
  OOC_IR__CopyString cp;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)dest;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108883)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 108930))+4);
  i2 = OOC_SymbolTable_TypeRules__IsArrayOfChar((OOC_SymbolTable__Type)i2, OOC_TRUE);
  i2 = !i2;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 108986));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108955)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l3:
  i2 = (OOC_INT32)source;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 109022)))), &_td_OOC_IR__ConstDesc);
  if (i3) goto l9;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 109492))+4);
  i2 = OOC_SymbolTable_TypeRules__IsArrayOfChar((OOC_SymbolTable__Type)i2, OOC_TRUE);
  i2 = !i2;
  if (!i2) goto l14;
  i2 = (OOC_INT32)source;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 109550));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109517)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  goto l14;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 109279))+4);
  i2 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i2);
  i3 = i2==(OOC_INT32)0;
  baseChar = (OOC_SymbolTable__Type)i2;
  if (i3) goto l12;
  i2 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i2);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109394)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)&source, (OOC_SymbolTable__Type)i2);
  ok = i2;
  goto l14;
l12:
  i2 = (OOC_INT32)source;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 109361));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109328)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l14:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CopyString.baseTypes[0]);
  cp = (OOC_IR__CopyString)i2;
  i3 = (OOC_INT32)maxLength;
  i4 = (OOC_INT32)source;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109629)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i3);
  i3 = (OOC_INT32)sym;
  OOC_IR__InitCopyString((OOC_IR__CopyString)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109841)))), OOC_IR__VisitorDesc_VisitCopyString)),OOC_IR__VisitorDesc_VisitCopyString)((OOC_IR__Visitor)i0, (OOC_IR__CopyString)i1);
  return;
  ;
}

void OOC_IR__InitExit(OOC_IR__Exit exit, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)exit;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  *(OOC_INT32*)((_check_pointer(i1, 110078))+8) = (OOC_INT32)0;
  return;
  ;
}

OOC_IR__Exit OOC_IR__BuilderDesc_NewExit(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Exit.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  OOC_IR__InitExit((OOC_IR__Exit)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110402)))), OOC_IR__VisitorDesc_VisitExit)),OOC_IR__VisitorDesc_VisitExit)((OOC_IR__Visitor)i0, (OOC_IR__Exit)i1);
  return;
  ;
}

static void OOC_IR__InitForStatm(OOC_IR__ForStatm forStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression var, OOC_IR__Expression start, OOC_IR__Expression end, OOC_IR__Expression step, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)forStatm;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)var;
  *(OOC_INT32*)((_check_pointer(i1, 110761))+8) = i0;
  i0 = (OOC_INT32)start;
  *(OOC_INT32*)((_check_pointer(i1, 110787))+12) = i0;
  i0 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i1, 110817))+16) = i0;
  i0 = (OOC_INT32)step;
  *(OOC_INT32*)((_check_pointer(i1, 110843))+20) = i0;
  i0 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i1, 110871))+24) = i0;
  return;
  ;
}

OOC_IR__ForStatm OOC_IR__BuilderDesc_NewForStatm(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression var, OOC_IR__Expression start, OOC_IR__Expression end, OOC_IR__Expression step, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)step;
  i0 = i0==(OOC_INT32)0;
  i1 = (OOC_INT32)sym;
  if (!i0) goto l3;
  i0 = (OOC_INT32)b;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(4);
  i3 = (OOC_INT32)Object_BigInt__NewInt(1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111175)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i3);
  step = (OOC_IR__Expression)i0;
l3:
  i0 = (OOC_INT32)var;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111278)))), &_td_OOC_IR__VarDesc));
  if (i2) goto l21;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 111364))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  i2 = !i2;
  if (i2) goto l19;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 111447))+4);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 111429)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i2, (void*)(OOC_INT32)&step, (OOC_SymbolTable__Type)i3);
  i3 = !i3;
  if (i3) goto l17;
  i3 = (OOC_INT32)start;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 111572))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 111555));
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (void*)(OOC_INT32)&start, (OOC_SymbolTable__Type)i4);
  i3 = (OOC_INT32)end;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 111634))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 111619));
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (void*)(OOC_INT32)&end, (OOC_SymbolTable__Type)i4);
  i3 = (OOC_INT32)step;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 111658)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i3);
  step = (OOC_IR__Expression)i3;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 111711))+4);
  i3 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i3);
  if (i3) goto l12;
  i3=OOC_FALSE;
  goto l14;
l12:
  i3 = (OOC_INT32)Object_BigInt__zero;
  i4 = (OOC_INT32)step;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 111753)))), &_td_OOC_IR__ConstDesc, 111753)), 111759))+8);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 111742)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i3, (Object__Object)i4);
  i3 = i3==0;
  
l14:
  if (!i3) goto l22;
  i3 = (OOC_INT32)step;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 111813));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 111787)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 31, (OOC_Scanner_Builder_BasicList__Symbol)i3);
  goto l22;
l17:
  i3 = (OOC_INT32)step;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 111498));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 111467)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 30, (OOC_Scanner_Builder_BasicList__Symbol)i3);
  goto l22;
l19:
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 111409));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 111384)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 19, (OOC_Scanner_Builder_BasicList__Symbol)i3);
  goto l22;
l21:
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 111324));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 111298)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 29, (OOC_Scanner_Builder_BasicList__Symbol)i3);
l22:
  i2 = (OOC_INT32)body;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ForStatm.baseTypes[0]);
  i4 = (OOC_INT32)start;
  i5 = (OOC_INT32)end;
  i6 = (OOC_INT32)step;
  OOC_IR__InitForStatm((OOC_IR__ForStatm)i3, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i0, (OOC_IR__Expression)i4, (OOC_IR__Expression)i5, (OOC_IR__Expression)i6, (OOC_IR__StatementSeq)i2);
  return (OOC_IR__ForStatm)i3;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 112128)))), OOC_IR__VisitorDesc_VisitForStatm)),OOC_IR__VisitorDesc_VisitForStatm)((OOC_IR__Visitor)i0, (OOC_IR__ForStatm)i1);
  return;
  ;
}

static void OOC_IR__InitIfStatm(OOC_IR__IfStatm ifStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)ifStatm;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i1, 112463))+8) = i0;
  i0 = (OOC_INT32)pathTrue;
  *(OOC_INT32*)((_check_pointer(i1, 112492))+12) = i0;
  i0 = (OOC_INT32)pathFalse;
  *(OOC_INT32*)((_check_pointer(i1, 112527))+16) = i0;
  return;
  ;
}

OOC_IR__IfStatm OOC_IR__BuilderDesc_NewIfStatm(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__IfStatm ifStatm;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__IfStatm.baseTypes[0]);
  ifStatm = (OOC_IR__IfStatm)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)guard;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 112809)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)pathTrue;
  i4 = (OOC_INT32)pathFalse;
  OOC_IR__InitIfStatm((OOC_IR__IfStatm)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__StatementSeq)i3, (OOC_IR__StatementSeq)i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 113047)))), OOC_IR__VisitorDesc_VisitIfStatm)),OOC_IR__VisitorDesc_VisitIfStatm)((OOC_IR__Visitor)i0, (OOC_IR__IfStatm)i1);
  return;
  ;
}

static void OOC_IR__InitCase(OOC_IR__Case _case, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__CaseLabels labels, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)_case;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)labels;
  *(OOC_INT32*)((_check_pointer(i1, 113349))+8) = i0;
  i0 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i1, 113377))+12) = i0;
  return;
  ;
}

OOC_IR__Case OOC_IR__BuilderDesc_NewCase(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__CaseLabels labels, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  OOC_IR__SetRange range;

  i0 = (OOC_INT32)labels;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 113644)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2 = (OOC_INT32)b;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 113673);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 113673))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 113677)))), &_td_OOC_IR__SetRangeDesc, 113677);
  range = (OOC_IR__SetRange)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 113729))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 113709)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  *(OOC_INT32*)((_check_pointer(i4, 113699))+8) = i5;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 113777))+12);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 113757)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  *(OOC_INT32*)((_check_pointer(i4, 113749))+12) = i5;
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)statmSeq;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Case.baseTypes[0]);
  OOC_IR__InitCase((OOC_IR__Case)i3, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__CaseLabels)i0, (OOC_IR__StatementSeq)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 114025)))), OOC_IR__VisitorDesc_VisitCase)),OOC_IR__VisitorDesc_VisitCase)((OOC_IR__Visitor)i0, (OOC_IR__Case)i1);
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

      i0 = end;
      i1 = 0!=i0;
      i = 0;
      if (!i1) goto l15;
      i1 = (OOC_INT32)list;
      i2 = (OOC_INT32)range;
      i3=0;
l3_loop:
      i4 = _check_pointer(i1, 114483);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 114483))*4);
      i4 = i4!=(OOC_INT32)0;
      if (i4) goto l6;
      i4=OOC_FALSE;
      goto l8;
l6:
      i4 = _check_pointer(i1, 114523);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 114523))*4);
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 114501)))), OOC_IR__SetRangeDesc_IntersectsWith)),OOC_IR__SetRangeDesc_IntersectsWith)((OOC_IR__SetRange)i2, (OOC_IR__SetRange)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 114527)))), &_td_OOC_IR__SetRangeDesc, 114527)));
      
l8:
      if (!i4) goto l10;
      return OOC_TRUE;
l10:
      i3 = i3+1;
      i4 = i3!=i0;
      i = i3;
      if (i4) goto l3_loop;
l15:
      return OOC_FALSE;
      ;
    }


  deleted = 0;
  i0 = (OOC_INT32)_case;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 114707))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 114715)), (OOC_INT32)0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l44;
  i1 = !OOC_FALSE;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)_case;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 114742))+8);
  i4 = _check_pointer(i4, 114750);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 114750))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 114754)))), &_td_OOC_IR__SetRangeDesc, 114754);
  range = (OOC_IR__SetRange)i4;
  i5 = (OOC_INT32)b;
  i6 = (OOC_INT32)type;
  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 114776)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i5, (void*)((_check_pointer(i4, 114790))+8), (OOC_SymbolTable__Type)i6);
  i7 = !i7;
  if (i7) goto l38;
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 114955)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i5, (void*)((_check_pointer(i4, 114969))+12), (OOC_SymbolTable__Type)i6);
  i6 = !i6;
  if (i6) goto l36;
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 115133)))), OOC_IR__SetRangeDesc_IsEmpty)),OOC_IR__SetRangeDesc_IsEmpty)((OOC_IR__SetRange)i4);
  if (i4) goto l34;
  inUse = OOC_FALSE;
  j = 0;
  i2 = (OOC_INT32)caseList;
  i2 = _check_pointer(i2, 115329);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT32, 115329))*4);
  i2 = i2!=i3;
  if (i2) goto l12;
  i2=OOC_FALSE;
  goto l14;
l12:
  i2=i1;
l14:
  if (i2) goto l16;
  i2=OOC_FALSE;
  goto l27;
l16:
  i2=0;
l17_loop:
  i3 = (OOC_INT32)caseList;
  i4 = _check_pointer(i3, 115403);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 115403))*4);
  i3 = _check_pointer(i3, 115464);
  i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i5, OOC_UINT32, 115464))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 115467))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 115406))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 115475)), (OOC_INT32)0);
  i4 = (OOC_INT32)range;
  i2 = OOC_IR__CaseDesc_CheckLabels_IntersectsWith((OOC_IR__SetRange)i4, (OOC_IR__CaseLabels)i3, i2);
  i3 = j;
  i3 = i3+1;
  inUse = i2;
  j = i3;
  i4 = (OOC_INT32)caseList;
  i4 = _check_pointer(i4, 115329);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 115329))*4);
  i5 = (OOC_INT32)_case;
  i4 = i4!=i5;
  if (i4) goto l20;
  i4=OOC_FALSE;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 115565))+8);
  i3 = i;
  i4 = (OOC_INT32)range;
  i2 = OOC_IR__CaseDesc_CheckLabels_IntersectsWith((OOC_IR__SetRange)i4, (OOC_IR__CaseLabels)i2, i3);
  
  goto l30;
l29:
  i2=OOC_TRUE;
l30:
  inUse = i2;
  if (!i2) goto l39;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)range;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 115643));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 115612)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 28, (OOC_Scanner_Builder_BasicList__Symbol)i3);
  goto l39;
l34:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 115220))+8);
  i3 = _check_pointer(i3, 115228);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 115228))*4) = (OOC_INT32)0;
  deleted = (i5+1);
  goto l39;
l36:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 115028))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 115032));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 114995)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i5, 27, (OOC_Scanner_Builder_BasicList__Symbol)i4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 115052))+8);
  i3 = _check_pointer(i3, 115060);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 115060))*4) = (OOC_INT32)0;
  deleted = (i5+1);
  goto l39;
l38:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 114851))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 114857));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 114818)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i5, 27, (OOC_Scanner_Builder_BasicList__Symbol)i4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 114877))+8);
  i3 = _check_pointer(i3, 114885);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 114885))*4) = (OOC_INT32)0;
  deleted = (i5+1);
l39:
  i2 = i;
  i2 = i2+1;
  i3 = i2<=i0;
  i = i2;
  if (i3) goto l3_loop;
l44:
  i0 = deleted;
  i1 = i0!=0;
  if (!i1) goto l60;
  i1 = (OOC_INT32)_case;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115736))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 115744)), (OOC_INT32)0);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseLabels.baseTypes[0], (i2-i0));
  _new = (OOC_IR__CaseLabels)i0;
  j = -1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 115800)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l59;
  i3=-1;i4=0;
l49_loop:
  
l50_loop:
  i3 = i3+1;
  j = i3;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115861))+8);
  i5 = _check_pointer(i5, 115869);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 115869))*4);
  i5 = i5!=(OOC_INT32)0;
  if (!i5) goto l50_loop;
l54:
  i5 = _check_pointer(i0, 115892);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 115903))+8);
  i7 = _check_pointer(i7, 115911);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i3, i8, OOC_UINT32, 115911))*4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 115892))*4) = i7;
  i4 = i4+1;
  i5 = i4<=i2;
  i = i4;
  if (i5) goto l49_loop;
l59:
  *(OOC_INT32*)((_check_pointer(i1, 115937))+8) = i0;
l60:
  return;
  ;
}

static void OOC_IR__InitCaseStatm(OOC_IR__CaseStatm caseStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression select, OOC_IR__CaseList caseList, OOC_IR__StatementSeq _default, OOC_CHAR8 checkMatch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)caseStatm;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)select;
  *(OOC_INT32*)((_check_pointer(i1, 116345))+8) = i0;
  i0 = (OOC_INT32)caseList;
  *(OOC_INT32*)((_check_pointer(i1, 116378))+12) = i0;
  i0 = (OOC_INT32)_default;
  *(OOC_INT32*)((_check_pointer(i1, 116415))+16) = i0;
  i0 = checkMatch;
  *(OOC_UINT8*)((_check_pointer(i1, 116450))+20) = i0;
  return;
  ;
}

OOC_IR__CaseStatm OOC_IR__BuilderDesc_NewCaseStatm(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression select, OOC_IR__CaseList caseList, OOC_IR__StatementSeq _default) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_IR__CaseStatm caseStatm;
  OOC_INT32 i;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseStatm.baseTypes[0]);
  caseStatm = (OOC_IR__CaseStatm)i0;
  i1 = (OOC_INT32)select;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 116779))+4);
  i2 = OOC_SymbolTable_TypeRules__IsValidCaseSelector((OOC_SymbolTable__Type)i2);
  i2 = !i2;
  i3 = (OOC_INT32)b;
  i4 = (OOC_INT32)caseList;
  if (i2) goto l11;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i4, 116886)), (OOC_INT32)0);
  i2 = i2-1;
  i5 = 0<=i2;
  i = 0;
  if (!i5) goto l12;
  i5=0;
l5_loop:
  i6 = _check_pointer(i4, 116910);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 116910))*4);
  i7 = _check_pointer(i4, 116910);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 116937))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i5, i8, OOC_UINT32, 116910))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 116913)))), OOC_IR__CaseDesc_CheckLabels)),OOC_IR__CaseDesc_CheckLabels)((OOC_IR__Case)i7, (OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i9, (OOC_IR__CaseList)i4);
  i5 = i5+1;
  i6 = i5<=i2;
  i = i5;
  if (i6) goto l5_loop;
  goto l12;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 116836));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 116799)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 26, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l12:
  i2 = (OOC_INT32)sym;
  i5 = *(OOC_INT32*)((_check_pointer(i2, 117107))+16);
  i6 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__caseSelectCheck;
  i3 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i3, (Config_Section_Options__Option)i6, i5);
  i5 = (OOC_INT32)_default;
  OOC_IR__InitCaseStatm((OOC_IR__CaseStatm)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__CaseList)i4, (OOC_IR__StatementSeq)i5, i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 117323)))), OOC_IR__VisitorDesc_VisitCaseStatm)),OOC_IR__VisitorDesc_VisitCaseStatm)((OOC_IR__Visitor)i0, (OOC_IR__CaseStatm)i1);
  return;
  ;
}

static void OOC_IR__InitLoopStatm(OOC_IR__LoopStatm loopStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)loopStatm;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i1, 117640))+8) = i0;
  return;
  ;
}

OOC_IR__LoopStatm OOC_IR__BuilderDesc_NewLoopStatm(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__LoopStatm.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)body;
  OOC_IR__InitLoopStatm((OOC_IR__LoopStatm)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__StatementSeq)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 118108)))), OOC_IR__VisitorDesc_VisitLoopStatm)),OOC_IR__VisitorDesc_VisitLoopStatm)((OOC_IR__Visitor)i0, (OOC_IR__LoopStatm)i1);
  return;
  ;
}

static void OOC_IR__InitMoveBlock(OOC_IR__MoveBlock move, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression size) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)move;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i1, 118422))+8) = i0;
  i0 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i1, 118450))+12) = i0;
  i0 = (OOC_INT32)size;
  *(OOC_INT32*)((_check_pointer(i1, 118474))+16) = i0;
  return;
  ;
}

OOC_IR__MoveBlock OOC_IR__BuilderDesc_NewMoveBlock(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression size) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__MoveBlock move;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__MoveBlock.baseTypes[0]);
  move = (OOC_IR__MoveBlock)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)source;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 118758)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i3 = (OOC_INT32)dest;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 118802)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i3);
  i4 = (OOC_INT32)size;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 118844)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i4);
  i4 = (OOC_INT32)sym;
  OOC_IR__InitMoveBlock((OOC_IR__MoveBlock)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 119059)))), OOC_IR__VisitorDesc_VisitMoveBlock)),OOC_IR__VisitorDesc_VisitMoveBlock)((OOC_IR__Visitor)i0, (OOC_IR__MoveBlock)i1);
  return;
  ;
}

static void OOC_IR__InitRepeatStatm(OOC_IR__RepeatStatm repeatStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__StatementSeq body, OOC_IR__Expression exitCondition) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)repeatStatm;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i1, 119412))+8) = i0;
  i0 = (OOC_INT32)exitCondition;
  *(OOC_INT32*)((_check_pointer(i1, 119443))+12) = i0;
  return;
  ;
}

OOC_IR__RepeatStatm OOC_IR__BuilderDesc_NewRepeatStatm(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__StatementSeq body, OOC_IR__Expression exitCondition) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__RepeatStatm repeatStatm;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__RepeatStatm.baseTypes[0]);
  repeatStatm = (OOC_IR__RepeatStatm)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)exitCondition;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 119767)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)body;
  OOC_IR__InitRepeatStatm((OOC_IR__RepeatStatm)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__StatementSeq)i3, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 120024)))), OOC_IR__VisitorDesc_VisitRepeatStatm)),OOC_IR__VisitorDesc_VisitRepeatStatm)((OOC_IR__Visitor)i0, (OOC_IR__RepeatStatm)i1);
  return;
  ;
}

static void OOC_IR__InitReturn(OOC_IR__Return _return, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression result) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)_return;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)result;
  *(OOC_INT32*)((_check_pointer(i1, 120302))+8) = i0;
  return;
  ;
}

OOC_IR__Return OOC_IR__BuilderDesc_NewReturn(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression result) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Return.baseTypes[0]);
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)result;
  OOC_IR__InitReturn((OOC_IR__Return)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 120691)))), OOC_IR__VisitorDesc_VisitReturn)),OOC_IR__VisitorDesc_VisitReturn)((OOC_IR__Visitor)i0, (OOC_IR__Return)i1);
  return;
  ;
}

static void OOC_IR__InitWhileStatm(OOC_IR__WhileStatm whileStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)whileStatm;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i1, 121028))+8) = i0;
  i0 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i1, 121060))+12) = i0;
  return;
  ;
}

OOC_IR__WhileStatm OOC_IR__BuilderDesc_NewWhileStatm(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__WhileStatm whileStatm;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__WhileStatm.baseTypes[0]);
  whileStatm = (OOC_IR__WhileStatm)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)guard;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 121343)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)body;
  OOC_IR__InitWhileStatm((OOC_IR__WhileStatm)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__StatementSeq)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 121590)))), OOC_IR__VisitorDesc_VisitWhileStatm)),OOC_IR__VisitorDesc_VisitWhileStatm)((OOC_IR__Visitor)i0, (OOC_IR__WhileStatm)i1);
  return;
  ;
}

static void OOC_IR__InitWithStatm(OOC_IR__WithStatm withStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse, OOC_CHAR8 checkMatch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)withStatm;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i1, 121989))+8) = i0;
  i0 = (OOC_INT32)pathTrue;
  *(OOC_INT32*)((_check_pointer(i1, 122020))+12) = i0;
  i0 = (OOC_INT32)pathFalse;
  *(OOC_INT32*)((_check_pointer(i1, 122057))+16) = i0;
  i0 = checkMatch;
  *(OOC_UINT8*)((_check_pointer(i1, 122096))+20) = i0;
  return;
  ;
}

OOC_IR__WithStatm OOC_IR__BuilderDesc_NewWithStatm(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 122428))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__typeGuard;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  i2 = (OOC_INT32)guard;
  i3 = (OOC_INT32)pathTrue;
  i4 = (OOC_INT32)pathFalse;
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__WithStatm.baseTypes[0]);
  OOC_IR__InitWithStatm((OOC_IR__WithStatm)i5, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__StatementSeq)i3, (OOC_IR__StatementSeq)i4, i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 122745)))), OOC_IR__VisitorDesc_VisitWithStatm)),OOC_IR__VisitorDesc_VisitWithStatm)((OOC_IR__Visitor)i0, (OOC_IR__WithStatm)i1);
  return;
  ;
}

void OOC_IR__BuilderDesc_CheckExit(OOC_IR__Builder b, OOC_SymbolTable__ProcDecl procDecl, OOC_IR__StatementSeq statmSeq, OOC_IR__LoopStatm currentLoop) {
  register OOC_INT32 i0;
  auto void OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq(OOC_IR__StatementSeq statmSeq);
    
    void OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq(OOC_IR__StatementSeq statmSeq) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 i;
      auto void OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm(OOC_IR__Statement statm);
        
        void OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm(OOC_IR__Statement statm) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_INT32 i;

          i0 = (OOC_INT32)statm;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 123390)))), &_td_OOC_IR__AssertDesc);
          if (i1) goto l88;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 123441)))), &_td_OOC_IR__AssignmentDesc);
          if (i1) goto l88;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 123537)))), &_td_OOC_IR__CallDesc);
          if (i1) goto l88;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 123586)))), &_td_OOC_IR__CopyDesc);
          if (i1) goto l88;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 123635)))), &_td_OOC_IR__CopyParameterDesc);
          if (i1) goto l88;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 123693)))), &_td_OOC_IR__CopyStringDesc);
          if (i1) goto l88;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 123748)))), &_td_OOC_IR__ExitDesc);
          if (i1) goto l77;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 123934)))), &_td_OOC_IR__ForStatmDesc);
          if (i1) goto l75;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124002)))), &_td_OOC_IR__IfStatmDesc);
          if (i1) goto l73;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124117)))), &_td_OOC_IR__CaseDesc);
          if (i1) goto l71;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124185)))), &_td_OOC_IR__CaseStatmDesc);
          if (i1) goto l61;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124382)))), &_td_OOC_IR__LoopStatmDesc);
          if (i1) goto l59;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124467)))), &_td_OOC_IR__MoveBlockDesc);
          if (i1) goto l88;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124521)))), &_td_OOC_IR__RepeatStatmDesc);
          if (i1) goto l56;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124592)))), &_td_OOC_IR__ReturnDesc);
          if (i1) goto l39;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 125269)))), &_td_OOC_IR__WhileStatmDesc);
          if (i1) goto l37;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 125339)))), &_td_OOC_IR__WithStatmDesc);
          if (i1) goto l35;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 125332)))), 125332);
          goto l88;
l35:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 125384))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 125427))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l88;
l37:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 125315))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l88;
l39:
          i1 = (OOC_INT32)procDecl;
          i2 = i1==(OOC_INT32)0;
          if (i2) goto l42;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 124659))+52);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 124671))+36);
          i2 = i2==(OOC_INT32)0;
          
          goto l44;
l42:
          i2=OOC_TRUE;
l44:
          if (i2) goto l50;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124948))+8);
          i2 = i2==(OOC_INT32)0;
          if (i2) goto l48;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 125093))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 125171))+52);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 125183))+36);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 125101));
          i3 = (OOC_INT32)b;
          OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i2, (void*)((_check_pointer(i0, 125113))+8), (OOC_SymbolTable__Type)i1);
          goto l88;
l48:
          i1 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 125020));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 124984)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 33, (OOC_Scanner_Builder_BasicList__Symbol)i0);
          goto l88;
l50:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124773))+8);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l88;
          i1 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124842))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 124850));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 124809)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 32, (OOC_Scanner_Builder_BasicList__Symbol)i0);
          goto l88;
l56:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124568))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l88;
l59:
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124436))+8);
          i3 = (OOC_INT32)procDecl;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 124408)))), OOC_IR__BuilderDesc_CheckExit)),OOC_IR__BuilderDesc_CheckExit)((OOC_IR__Builder)i1, (OOC_SymbolTable__ProcDecl)i3, (OOC_IR__StatementSeq)i2, (OOC_IR__LoopStatm)i0);
          goto l88;
l61:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124234))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 124244)), (OOC_INT32)0);
          i1 = i1-1;
          i2 = 0<=i1;
          i = 0;
          if (!i2) goto l69;
          i2=0;
l64_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124284))+12);
          i3 = _check_pointer(i3, 124294);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 124294))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 124297))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i3);
          i2 = i2+1;
          i3 = i2<=i1;
          i = i2;
          if (i3) goto l64_loop;
l69:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124355))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l88;
l71:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124157))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l88;
l73:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124045))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 124088))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l88;
l75:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 123978))+24);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l88;
l77:
          i1 = (OOC_INT32)currentLoop;
          i2 = i1==(OOC_INT32)0;
          if (i2) goto l80;
          *(OOC_INT32*)((_check_pointer(i0, 123881))+8) = i1;
          goto l88;
l80:
          i1 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 123841));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 123809)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 25, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l88:
          return;
          ;
        }


      i0 = (OOC_INT32)statmSeq;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l11;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 125557)), (OOC_INT32)0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l11;
      i1=0;
l5_loop:
      i2 = (OOC_INT32)statmSeq;
      i2 = _check_pointer(i2, 125595);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 125595))*4);
      OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm((OOC_IR__Statement)i1);
      i1 = i;
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l5_loop;
l11:
      return;
      ;
    }


  i0 = (OOC_INT32)statmSeq;
  OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR__InitProcedure(OOC_IR__Procedure p, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__ProcDecl decl, OOC_IR__StatementSeq statmSeq, OOC_CHAR8 checkFunctionResult) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)p;
  OOC_IR__InitNode((OOC_IR__Node)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i1, 125921))+4) = i0;
  i0 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i1, 125942))+8) = i0;
  i0 = checkFunctionResult;
  *(OOC_UINT8*)((_check_pointer(i1, 125971))+12) = i0;
  return;
  ;
}

OOC_IR__Procedure OOC_IR__BuilderDesc_NewProcedure(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__ProcDecl decl, OOC_IR__StatementSeq statmSeq, OOC_CHAR8 hasBegin) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__Procedure p;
  auto OOC_IR__StatementSeq OOC_IR__BuilderDesc_NewProcedure_AddSetupCode(OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__ProcDecl decl, OOC_IR__StatementSeq statmSeq);
    
    OOC_IR__StatementSeq OOC_IR__BuilderDesc_NewProcedure_AddSetupCode(OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__ProcDecl decl, OOC_IR__StatementSeq statmSeq) {
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
          i0 = i0==(OOC_INT32)0;
          if (!i0) goto l4;
          i0 = (OOC_INT32)ADT_ArrayList__New(4);
          newStatm = (ADT_ArrayList__ArrayList)i0;
l4:
          i0 = (OOC_INT32)newStatm;
          i1 = (OOC_INT32)statm;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 126976)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
          return;
          ;
        }

        
        OOC_IR__StatementSeq OOC_IR__BuilderDesc_NewProcedure_AddSetupCode_Prepend(ADT_ArrayList__ArrayList prefix, OOC_IR__StatementSeq statmSeq) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
          OOC_IR__StatementSeq _new;
          OOC_INT32 i;

          i0 = (OOC_INT32)prefix;
          i1 = (OOC_INT32)statmSeq;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 127202))+4);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 127222)), (OOC_INT32)0);
          i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], (i2+i3));
          _new = (OOC_IR__StatementSeq)i2;
          i3 = *(OOC_INT32*)((_check_pointer(i0, 127255))+4);
          i3 = i3-1;
          i4 = 0<=i3;
          i = 0;
          if (!i4) goto l8;
          i4=0;
l3_loop:
          i5 = _check_pointer(i2, 127280);
          i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
          i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 127293));
          i7 = _check_pointer(i7, 127300);
          i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
          i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 127300))*4);
          *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 127280))*4) = (_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 127304)))), &_td_OOC_IR__StatementDesc, 127304));
          i4 = i4+1;
          i5 = i4<=i3;
          i = i4;
          if (i5) goto l3_loop;
l8:
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 127363)), (OOC_INT32)0);
          i3 = i3-1;
          i4 = 0<=i3;
          i = 0;
          if (!i4) goto l16;
          i4=0;
l11_loop:
          i5 = _check_pointer(i2, 127384);
          i6 = *(OOC_INT32*)((_check_pointer(i0, 127393))+4);
          i7 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
          i8 = _check_pointer(i1, 127412);
          i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
          i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 127412))*4);
          *(OOC_INT32*)(i5+(_check_index((i4+i6), i7, OOC_UINT32, 127384))*4) = i8;
          i4 = i4+1;
          i5 = i4<=i3;
          i = i4;
          if (i5) goto l11_loop;
l16:
          return (OOC_IR__StatementSeq)i2;
          ;
        }


      newStatm = (ADT_ArrayList__ArrayList)(OOC_INT32)0;
      i0 = (OOC_INT32)decl;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 127529))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 127541))+44);
      formalPars = (OOC_SymbolTable__VarDeclArray)i0;
      fparIndex = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 127642)), (OOC_INT32)0);
      i0 = 0!=i0;
      if (!i0) goto l11;
      i0=0;
l3_loop:
      i1 = (OOC_INT32)formalPars;
      i1 = _check_pointer(i1, 127675);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 127675))*4);
      fpar = (OOC_SymbolTable__VarDecl)i0;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 127703))+52);
      if (!i1) goto l6;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 127770)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)(OOC_INT32)0, (OOC_SymbolTable__VarDecl)i0);
      i2 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 127744)))), OOC_IR__BuilderDesc_NewCopyParameter)),OOC_IR__BuilderDesc_NewCopyParameter)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Var)i0);
      OOC_IR__BuilderDesc_NewProcedure_AddSetupCode_AddStatm((OOC_IR__Statement)i0);
l6:
      i0 = fparIndex;
      i0 = i0+1;
      fparIndex = i0;
      i1 = (OOC_INT32)formalPars;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 127642)), (OOC_INT32)0);
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
      _failed_function(126320); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 128013))+42);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = hasBegin;
  
l4:
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)sym;
  if (!i1) goto l7;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 128048)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 57, (OOC_Scanner_Builder_BasicList__Symbol)i3);
l7:
  i1 = (OOC_INT32)statmSeq;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 128095)))), OOC_IR__BuilderDesc_CheckExit)),OOC_IR__BuilderDesc_CheckExit)((OOC_IR__Builder)i2, (OOC_SymbolTable__ProcDecl)i0, (OOC_IR__StatementSeq)i1, (OOC_IR__LoopStatm)(OOC_INT32)0);
  p = (OOC_IR__Procedure)((OOC_INT32)RT0__NewObject(_td_OOC_IR__Procedure.baseTypes[0]));
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewProcedure_AddSetupCode((OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__ProcDecl)i0, (OOC_IR__StatementSeq)i1);
  statmSeq = (OOC_IR__StatementSeq)i0;
  i1 = (OOC_INT32)decl;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 128352))+16);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 128358));
  i3 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__functionResultCheck;
  i4 = (OOC_INT32)b;
  i2 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i4, (Config_Section_Options__Option)i3, i2);
  i3 = (OOC_INT32)sym;
  i4 = (OOC_INT32)p;
  OOC_IR__InitProcedure((OOC_IR__Procedure)i4, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__ProcDecl)i1, (OOC_IR__StatementSeq)i0, i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 128558)))), OOC_IR__VisitorDesc_VisitProcedure)),OOC_IR__VisitorDesc_VisitProcedure)((OOC_IR__Visitor)i0, (OOC_IR__Procedure)i1);
  return;
  ;
}

void OOC_IR__InitModule(OOC_IR__Module m, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_Scanner_InputBuffer__CharArray name, OOC_IR__ProcedureList procList, OOC_IR__Procedure moduleBody) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)m;
  OOC_IR__InitNode((OOC_IR__Node)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i1, 128858))+4) = i0;
  i0 = (OOC_INT32)procList;
  *(OOC_INT32*)((_check_pointer(i1, 128879))+8) = i0;
  i0 = (OOC_INT32)moduleBody;
  *(OOC_INT32*)((_check_pointer(i1, 128908))+12) = i0;
  return;
  ;
}

OOC_IR__Module OOC_IR__BuilderDesc_NewModule(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_Scanner_InputBuffer__CharArray name, OOC_SymbolTable__Module decl, OOC_IR__ProcedureList procList, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__Module m;
  auto void OOC_IR__BuilderDesc_NewModule_UnusedDeclarations(OOC_SymbolTable__Item item);
    
    void OOC_IR__BuilderDesc_NewModule_UnusedDeclarations(OOC_SymbolTable__Item item) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Item nested;

      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129293)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l30;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 129540))+36);
      i1 = i1==0;
      if (i1) goto l5;
      i1=OOC_FALSE;
      goto l7;
l5:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 129575))+24);
      i1 = i1==0;
      
l7:
      if (i1) goto l9;
      i1=OOC_FALSE;
      goto l15;
l9:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129631)))), &_td_OOC_SymbolTable__VarDeclDesc));
      if (i1) goto l12;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129660)))), &_td_OOC_SymbolTable__VarDeclDesc, 129660)), 129668))+48);
      i1 = !i1;
      
      goto l15;
l12:
      i1=OOC_TRUE;
l15:
      if (i1) goto l17;
      i1=OOC_FALSE;
      goto l27;
l17:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129703)))), &_td_OOC_SymbolTable__ProcDeclDesc));
      if (i1) goto l24;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129746)))), &_td_OOC_SymbolTable__ProcDeclDesc, 129746)), 129755))+41);
      if (i1) goto l22;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129796)))), &_td_OOC_SymbolTable__ProcDeclDesc, 129796)), 129805))+40);
      
      goto l23;
l22:
      i1=OOC_TRUE;
l23:
      i1 = !i1;
      
      goto l27;
l24:
      i1=OOC_TRUE;
l27:
      if (!i1) goto l30;
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129869))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 129836)))), OOC_IR__BuilderDesc_WarnName)),OOC_IR__BuilderDesc_WarnName)((OOC_IR__Builder)i1, 53, (OOC_SymbolTable__Name)i2);
l30:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129953))+8);
      i1 = i0!=(OOC_INT32)0;
      nested = (OOC_SymbolTable__Item)i0;
      if (!i1) goto l38;
l33_loop:
      OOC_IR__BuilderDesc_NewModule_UnusedDeclarations((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 130057));
      nested = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l33_loop;
l38:
      return;
      ;
    }


  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)statmSeq;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130123)))), OOC_IR__BuilderDesc_CheckExit)),OOC_IR__BuilderDesc_CheckExit)((OOC_IR__Builder)i0, (OOC_SymbolTable__ProcDecl)(OOC_INT32)0, (OOC_IR__StatementSeq)i1, (OOC_IR__LoopStatm)(OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130165))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130165))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 130173)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i0);
  if (!i0) goto l4;
  i0 = (OOC_INT32)decl;
  OOC_IR__BuilderDesc_NewModule_UnusedDeclarations((OOC_SymbolTable__Item)i0);
l4:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Module.baseTypes[0]);
  m = (OOC_IR__Module)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)decl;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 130331))+72);
  i3 = (OOC_INT32)sym;
  i4 = (OOC_INT32)statmSeq;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 130306)))), OOC_IR__BuilderDesc_NewProcedure)),OOC_IR__BuilderDesc_NewProcedure)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__ProcDecl)i2, (OOC_IR__StatementSeq)i4, OOC_TRUE);
  i2 = (OOC_INT32)name;
  i4 = (OOC_INT32)procList;
  OOC_IR__InitModule((OOC_IR__Module)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_Scanner_InputBuffer__CharArray)i2, (OOC_IR__ProcedureList)i4, (OOC_IR__Procedure)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130534)))), OOC_IR__VisitorDesc_VisitModule)),OOC_IR__VisitorDesc_VisitModule)((OOC_IR__Visitor)i0, (OOC_IR__Module)i1);
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 130952)), (OOC_INT32)0);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l10;
      i2=0;
l5_loop:
      i3 = _check_pointer(i0, 130973);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      OOC_IR__ModuleDesc_Destroy_E((void*)(i3+(_check_index(i2, i4, OOC_UINT32, 130973))*4));
      i2 = i2+1;
      i3 = i2<=i1;
      i = i2;
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
      if (!i1) goto l135;
      *(OOC_INT32*)((_check_pointer(i0, 131149))+4) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131177)))), &_td_OOC_IR__ConstDesc);
      if (i1) goto l133;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131225)))), &_td_OOC_IR__OperatorDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133440)))), &_td_OOC_IR__ReferenceDesc);
      if (i1) goto l13;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133491)))), &_td_OOC_IR__StatementDesc);
      if (i1) goto l11;
      Log__Type("--- expression type: ", 22, (void*)i0);
      _assert(OOC_FALSE, 127, 133628);
      goto l134;
l11:
      OOC_IR__ModuleDesc_Destroy_S((void*)(OOC_INT32)n);
      goto l134;
l13:
      *(OOC_INT32*)((_check_pointer(i0, 133466))+8) = (OOC_INT32)0;
      goto l134;
l15:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131255)))), &_td_OOC_IR__AbsDesc);
      if (i1) goto l130;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131303)))), &_td_OOC_IR__AdrDesc);
      if (i1) goto l128;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131350)))), &_td_OOC_IR__AshDesc);
      if (i1) goto l126;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131418)))), &_td_OOC_IR__BinaryArithDesc);
      if (i1) goto l124;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131495)))), &_td_OOC_IR__BooleanOpDesc);
      if (i1) goto l122;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131570)))), &_td_OOC_IR__CapDesc);
      if (i1) goto l120;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131618)))), &_td_OOC_IR__CompareDesc);
      if (i1) goto l118;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131691)))), &_td_OOC_IR__ConcatDesc);
      if (i1) goto l116;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131746)))), &_td_OOC_IR__ChangeElementDesc);
      if (i1) goto l114;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131826)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l112;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131908)))), &_td_OOC_IR__EntierDesc);
      if (i1) goto l110;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131959)))), &_td_OOC_IR__IndexDesc);
      if (i1) goto l108;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132031)))), &_td_OOC_IR__LenDesc);
      if (i1) goto l106;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132133)))), &_td_OOC_IR__NegateDesc);
      if (i1) goto l104;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132184)))), &_td_OOC_IR__NewBlockDesc);
      if (i1) goto l102;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132234)))), &_td_OOC_IR__NewObjectDesc);
      if (i1) goto l100;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132291)))), &_td_OOC_IR__NotDesc);
      if (i1) goto l98;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132339)))), &_td_OOC_IR__OddDesc);
      if (i1) goto l96;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132387)))), &_td_OOC_IR__SelectFieldDesc);
      if (i1) goto l94;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132501)))), &_td_OOC_IR__SelectProcDesc);
      if (i1) goto l92;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132651)))), &_td_OOC_IR__SetMemberDesc);
      if (i1) goto l90;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132727)))), &_td_OOC_IR__SetOpDesc);
      if (i1) goto l88;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132798)))), &_td_OOC_IR__SetRangeDesc);
      if (i1) goto l86;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132869)))), &_td_OOC_IR__ShiftDesc);
      if (i1) goto l84;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132938)))), &_td_OOC_IR__TypeCastDesc);
      if (i1) goto l82;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132988)))), &_td_OOC_IR__TypeConvDesc);
      if (i1) goto l80;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133038)))), &_td_OOC_IR__TypeTagDesc);
      if (i1) goto l78;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133089)))), &_td_OOC_IR__TypeTestDesc);
      if (i1) goto l76;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133233)))), &_td_OOC_IR__TypeGuardDesc);
      if (i1) goto l74;
      Log__Type("--- operator type: ", 20, (void*)i0);
      _assert(OOC_FALSE, 127, 133399);
      goto l134;
l74:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133269))+8);
      expr = (OOC_IR__Expression)i0;
      OOC_IR__ModuleDesc_Destroy_E((void*)(OOC_INT32)&expr);
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 133310))+8) = (OOC_INT32)0;
      goto l134;
l76:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 133118))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 133139))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 133177))+20));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 133202))+24) = (OOC_INT32)0;
      goto l134;
l78:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 133066))+8));
      goto l134;
l80:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 133017))+8));
      goto l134;
l82:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132967))+8));
      goto l134;
l84:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132895))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132919))+12));
      goto l134;
l86:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132827))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132850))+12));
      goto l134;
l88:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132753))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132776))+16));
      goto l134;
l90:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132681))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132707))+12));
      goto l134;
l92:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132532))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 132557))+16) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 132590))+20) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 132619))+24) = (OOC_INT32)0;
      goto l134;
l94:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132419))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 132442))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 132470))+16) = (OOC_INT32)0;
      goto l134;
l96:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132363))+8));
      goto l134;
l98:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132315))+8));
      goto l134;
l100:
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 132268))+8));
      goto l134;
l102:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132213))+8));
      goto l134;
l104:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132160))+8));
      goto l134;
l106:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132055))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132079))+20));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 132109))+16) = 0;
      goto l134;
l108:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131985))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 132009))+12));
      goto l134;
l110:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131935))+8));
      goto l134;
l112:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131852))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 131876))+12) = (OOC_INT32)0;
      goto l134;
l114:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131780))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131802))+16));
      goto l134;
l116:
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 131722))+8));
      goto l134;
l118:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131646))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131669))+16));
      goto l134;
l120:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131594))+8));
      goto l134;
l122:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131525))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131548))+16));
      goto l134;
l124:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131450))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131473))+16));
      goto l134;
l126:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131374))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131398))+12));
      goto l134;
l128:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131327))+8));
      goto l134;
l130:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 131279))+8));
      goto l134;
l133:
      *(OOC_INT32*)((_check_pointer(i0, 131199))+8) = (OOC_INT32)0;
l134:
      *n = (OOC_IR__Expression)(OOC_INT32)0;
l135:
      return;
      ;
    }

    
    void OOC_IR__ModuleDesc_Destroy_SSeq(OOC_IR__StatementSeq *n) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;

      i0 = (OOC_INT32)*n;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l11;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 133824)), (OOC_INT32)0);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l11;
      i2=0;
l5_loop:
      i3 = _check_pointer(i0, 133845);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      OOC_IR__ModuleDesc_Destroy_S((void*)(i3+(_check_index(i2, i4, OOC_UINT32, 133845))*4));
      i2 = i2+1;
      i3 = i2<=i1;
      i = i2;
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
      if (!i1) goto l75;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134000)))), &_td_OOC_IR__AssertDesc);
      if (i1) goto l73;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134072)))), &_td_OOC_IR__AssignmentDesc);
      if (i1) goto l71;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134146)))), &_td_OOC_IR__CallDesc);
      if (i1) goto l69;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134251)))), &_td_OOC_IR__CopyDesc);
      if (i1) goto l67;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134316)))), &_td_OOC_IR__CopyParameterDesc);
      if (i1) goto l65;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134372)))), &_td_OOC_IR__CopyStringDesc);
      if (i1) goto l63;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134469)))), &_td_OOC_IR__ExitDesc);
      if (i1) goto l61;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134515)))), &_td_OOC_IR__ForStatmDesc);
      if (i1) goto l59;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134647)))), &_td_OOC_IR__IfStatmDesc);
      if (i1) goto l57;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134750)))), &_td_OOC_IR__CaseStatmDesc);
      if (i1) goto l47;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 135033)))), &_td_OOC_IR__LoopStatmDesc);
      if (i1) goto l45;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 135083)))), &_td_OOC_IR__MoveBlockDesc);
      if (i1) goto l43;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 135174)))), &_td_OOC_IR__RepeatStatmDesc);
      if (i1) goto l41;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 135256)))), &_td_OOC_IR__ReturnDesc);
      if (i1) goto l39;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 135302)))), &_td_OOC_IR__WhileStatmDesc);
      if (i1) goto l37;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 135375)))), &_td_OOC_IR__WithStatmDesc);
      if (i1) goto l35;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 135372)))), 135372);
      goto l74;
l35:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 135403))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 135428))+12));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 135456))+16));
      goto l74;
l37:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 135331))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 135356))+12));
      goto l74;
l39:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 135281))+8));
      goto l74;
l41:
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 135207))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 135228))+12));
      goto l74;
l43:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 135111))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 135134))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 135155))+16));
      goto l74;
l45:
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 135064))+8));
      goto l74;
l47:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134778))+8));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134817))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 134826)), (OOC_INT32)0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l55;
      i1=0;
l50_loop:
      i2 = (OOC_INT32)*n;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 134847))+12);
      i2 = _check_pointer(i2, 134856);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 134856))*4);
      *(OOC_INT32*)((_check_pointer(i2, 134859))+8) = (OOC_INT32)0;
      i2 = (OOC_INT32)*n;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 134893))+12);
      i3 = _check_pointer(i3, 134902);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 134902))*4);
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i3, 134905))+12));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 134930))+12);
      i2 = _check_pointer(i2, 134939);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      *(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 134939))*4) = (OOC_INT32)0;
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l50_loop;
l55:
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 134977))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 135011))+16));
      goto l74;
l57:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134673))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 134698))+12));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 134726))+16));
      goto l74;
l59:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134542))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134562))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134584))+16));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134604))+20));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 134628))+24));
      goto l74;
l61:
      *(OOC_INT32*)((_check_pointer(i0, 134490))+8) = (OOC_INT32)0;
      goto l74;
l63:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134401))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134424))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134445))+16));
      goto l74;
l65:
      *(OOC_INT32*)((_check_pointer(i0, 134346))+8) = (OOC_INT32)0;
      goto l74;
l67:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134274))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134297))+12));
      goto l74;
l69:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134169))+8));
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 134196))+12));
      *(OOC_INT32*)((_check_pointer(i0, 134220))+16) = (OOC_INT32)0;
      goto l74;
l71:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134101))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134126))+12));
      goto l74;
l73:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 134025))+8));
      *(OOC_INT32*)((_check_pointer(i0, 134049))+12) = 0;
l74:
      *n = (OOC_IR__Statement)(OOC_INT32)0;
l75:
      return;
      ;
    }


  i0 = (OOC_INT32)m;
  *(OOC_INT32*)((_check_pointer(i0, 135538))+4) = (OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135575))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 135584)), (OOC_INT32)0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l8;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)m;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 135599))+8);
  i3 = _check_pointer(i3, 135608);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 135608))*4);
  *(OOC_INT32*)((_check_pointer(i3, 135611))+4) = (OOC_INT32)0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 135637))+8);
  i2 = _check_pointer(i2, 135646);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 135646))*4);
  OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i1, 135649))+8));
  i1 = (OOC_INT32)m;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 135668))+8);
  i1 = _check_pointer(i1, 135677);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = i;
  *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 135677))*4) = (OOC_INT32)0;
  i1 = i3+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l3_loop;
l8:
  i0 = (OOC_INT32)m;
  *(OOC_INT32*)((_check_pointer(i0, 135703))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135727))+12);
  *(OOC_INT32*)((_check_pointer(i1, 135738))+4) = (OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135762))+12);
  OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 135773))+8));
  i0 = (OOC_INT32)m;
  *(OOC_INT32*)((_check_pointer(i0, 135790))+12) = (OOC_INT32)0;
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
  *(OOC_INT32*)(_check_pointer(i0, 136088)) = i1;
  return;
  ;
}

void OOC_IR__InitBuilder(OOC_IR__Builder b, OOC_SymbolTable__Module module, OOC_Config_Pragmas__History pragmaHistory, OOC_Error__List errList, OOC_IR__ConstFold fold) {
  register OOC_INT32 i0,i1,i2,i3,i4;
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
  *(OOC_INT32*)(_check_pointer(i0, 136940)) = i1;
  i1 = (OOC_INT32)pragmaHistory;
  *(OOC_INT32*)((_check_pointer(i0, 136965))+4) = i1;
  i1 = (OOC_INT32)errList;
  *(OOC_INT32*)((_check_pointer(i0, 137004))+8) = i1;
  i1 = (OOC_INT32)OOC_Scanner_Builder_BasicList__NewSymbol((OOC_Scanner_InputBuffer__CharArray)(OOC_INT32)0, -1);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(17);
  i3 = (OOC_INT32)Object_Boxed__false;
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i3);
  *(OOC_INT32*)((_check_pointer(i0, 137031))+16) = i1;
  i1 = (OOC_INT32)OOC_IR__InitBuilder_NewTypeType((OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Position)(OOC_INT32)0);
  *(OOC_INT32*)((_check_pointer(i0, 137195))+20) = i1;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)OOC_IR__InitBuilder_NewModuleType((OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Position)(OOC_INT32)0);
  *(OOC_INT32*)((_check_pointer(i0, 137238))+24) = i1;
  i0 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 137285))+32) = (OOC_INT32)0;
  i1 = (OOC_INT32)fold;
  *(OOC_INT32*)((_check_pointer(i0, 137310))+12) = i1;
  *(OOC_INT32*)(_check_pointer(i1, 137339)) = i0;
  i1 = (OOC_INT32)module;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 137409))+40);
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringModule;
  i4 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringType;
  i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__ResolveQualident((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i3, (OOC_SymbolTable__Name)i4);
  string = (OOC_SymbolTable__Item)i1;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 137663)))), &_td_OOC_SymbolTable__TypeDeclDesc, 137663)), 137672))+40);
  *(OOC_INT32*)((_check_pointer(i0, 137636))+28) = i1;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 137599))+28) = (OOC_INT32)0;
l4:
  return;
  ;
}

OOC_IR__Builder OOC_IR__NewBuilder(OOC_SymbolTable__Module module, OOC_Config_Pragmas__History pragmaHistory, OOC_Error__List errList, OOC_IR__ConstFold constFold) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Builder.baseTypes[0]);
  i1 = (OOC_INT32)module;
  i2 = (OOC_INT32)pragmaHistory;
  i3 = (OOC_INT32)errList;
  i4 = (OOC_INT32)constFold;
  OOC_IR__InitBuilder((OOC_IR__Builder)i0, (OOC_SymbolTable__Module)i1, (OOC_Config_Pragmas__History)i2, (OOC_Error__List)i3, (OOC_IR__ConstFold)i4);
  return (OOC_IR__Builder)i0;
  ;
}

void OOC_IR__BuilderDesc_StartTypeGuard(OOC_IR__Builder b, OOC_IR__TypeTest typeTest, OOC_SymbolTable__Namespace *namespace) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__VarDecl var;
  OOC_SymbolTable__DeclarationArray da;
  OOC_SymbolTable_Namespace__Nested nested;

  i0 = (OOC_INT32)typeTest;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 138242))+8);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 138248)))), &_td_OOC_IR__VarDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 138615))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 138620));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 138584)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 29, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 138282))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 138289)))), &_td_OOC_IR__VarDesc, 138289)), 138293))+8);
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 138304)))), &_td_OOC_SymbolTable__VarDeclDesc, 138304);
  var = (OOC_SymbolTable__VarDecl)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__DeclarationArray.baseTypes[0], 1);
  da = (OOC_SymbolTable__DeclarationArray)i2;
  i3 = _check_pointer(i2, 138341);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 138376))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 138386))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 138397)))), &_td_OOC_SymbolTable__TypeDeclDesc, 138397)), 138406))+40);
  i0 = (OOC_INT32)OOC_IR__NewGuardedVar((OOC_SymbolTable__VarDecl)i1, (OOC_SymbolTable__Type)i0);
  *(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 138341))*4) = i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NewNested((OOC_SymbolTable__DeclarationArray)i2, 1);
  nested = (OOC_SymbolTable_Namespace__Nested)i0;
  i1 = (OOC_INT32)*namespace;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 138472)))), OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)),OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)((OOC_SymbolTable_Namespace__Nested)i0, (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 138517)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 138517)));
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
l4:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__DeclarationArray.baseTypes[0], 0);
  da = (OOC_SymbolTable__DeclarationArray)i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NewNested((OOC_SymbolTable__DeclarationArray)i0, 0);
  nested = (OOC_SymbolTable_Namespace__Nested)i0;
  i1 = (OOC_INT32)*namespace;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 138783)))), OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)),OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)((OOC_SymbolTable_Namespace__Nested)i0, (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 138828)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 138828)));
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
  ;
}

void OOC_IR__BuilderDesc_EndTypeGuard(OOC_IR__Builder b, OOC_SymbolTable__Namespace *namespace) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)*namespace;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 139000)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 139000)), 139007))+8);
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIdentRef(OOC_IR__Builder b, OOC_SymbolTable__Namespace baseNS, OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item context, OOC_Scanner_Builder_BasicList__Symbol name) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SymbolTable__Declaration decl;
  OOC_IR__Var varRef;
  OOC_SymbolTable__Item redirModule;

  i0 = (OOC_INT32)name;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 139322))+4);
  i1 = i1==43;
  i2 = (OOC_INT32)b;
  if (i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 140723)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 2, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  goto l48;
l3:
  i1 = (OOC_INT32)ns;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 139382)))), OOC_IR__BuilderDesc_GetName)),OOC_IR__BuilderDesc_GetName)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i4 = (OOC_INT32)context;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 139360)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i1, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, OOC_FALSE);
  i3 = i1==(OOC_INT32)0;
  decl = (OOC_SymbolTable__Declaration)i1;
  if (i3) goto l46;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 139500)))), OOC_SymbolTable__DeclarationDesc_IncrUsageCount)),OOC_SymbolTable__DeclarationDesc_IncrUsageCount)((OOC_SymbolTable__Declaration)i1);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 139536)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i3) goto l44;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 139627)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i3) goto l42;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 139698)))), &_td_OOC_IR__GuardedVarDesc);
  if (i3) goto l40;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 139840)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i3) goto l38;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 139916)))), &_td_OOC_SymbolTable__PredefProcDesc);
  if (i3) goto l36;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 139994)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i3) goto l34;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 140072)))), &_td_OOC_SymbolTable__ImportDesc);
  if (i3) goto l32;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 140164)))), &_td_OOC_SymbolTable__RedirectDesc);
  if (i3) goto l22;
  Log__Type("Unknown decl in NewIdentRef", 28, (void*)i1);
  _assert(OOC_FALSE, 127, 140669);
  goto l48;
l22:
  i3 = (OOC_INT32)baseNS;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 140236))+40);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 140213)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i5, OOC_FALSE);
  redirModule = (OOC_SymbolTable__Item)i3;
  i5 = i3==(OOC_INT32)0;
  if (i5) goto l25;
  i5 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 140303)))), &_td_OOC_SymbolTable__ImportDesc));
  
  goto l27;
l25:
  i5=OOC_TRUE;
l27:
  if (i5) goto l29;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 140416)))), &_td_OOC_SymbolTable__ImportDesc, 140416)), 140423))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 140438))+40);
  ns = (OOC_SymbolTable__Namespace)i3;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 140558))+44);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 140564))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 140558))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 140564))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 140568)), (OOC_INT32)0);
  i0 = (OOC_INT32)OOC_Scanner_Builder_BasicList__CloneSymbol((OOC_Scanner_Builder_BasicList__Symbol)i0, (void*)(_check_pointer(i5, 140568)), i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 140463)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i2, (OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l48;
l29:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 140336)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 41, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  goto l48;
l32:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 140132))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 140106)))), OOC_IR__BuilderDesc_NewModuleRef)),OOC_IR__BuilderDesc_NewModuleRef)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Module)i1);
  return (OOC_IR__Expression)i0;
  goto l48;
l34:
  i0 = (OOC_INT32)OOC_IR__NewProcedureRef((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__ProcDecl)i1);
  return (OOC_IR__Expression)i0;
  goto l48;
l36:
  i0 = (OOC_INT32)OOC_IR__NewPredefProc((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__PredefProc)i1);
  return (OOC_IR__Expression)i0;
  goto l48;
l38:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 139876)))), OOC_IR__BuilderDesc_NewTypeRef)),OOC_IR__BuilderDesc_NewTypeRef)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__TypeDecl)i1);
  return (OOC_IR__Expression)i0;
  goto l48;
l40:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 139755))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 139735)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__VarDecl)i3);
  varRef = (OOC_IR__Var)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 139793))+44);
  *(OOC_INT32*)((_check_pointer(i0, 139779))+4) = i1;
  return (OOC_IR__Expression)i0;
  goto l48;
l42:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 139662)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__VarDecl)i1);
  return (OOC_IR__Expression)i0;
  goto l48;
l44:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 139592))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 139604))+40);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l48;
l46:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 139444)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l48:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 140964))+16);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewQualident(OOC_IR__Builder b, OOC_SymbolTable__Namespace baseNS, OOC_IR__ModuleRef modref, OOC_SymbolTable__Item context, OOC_Scanner_Builder_BasicList__Symbol name) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)modref;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 141249))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 141260)))), &_td_OOC_SymbolTable__ModuleDesc, 141260)), 141267))+40);
  i2 = (OOC_INT32)baseNS;
  i3 = (OOC_INT32)context;
  i4 = (OOC_INT32)name;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141220)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i0, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Namespace)i1, (OOC_SymbolTable__Item)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSelect(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression var, OOC_SymbolTable__Item context, OOC_Scanner_Builder_BasicList__Symbol name) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_IR__Expression varRef;
  OOC_SymbolTable__Declaration decl;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)var;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141583)))), OOC_IR__BuilderDesc_CheckFunctionOp)),OOC_IR__BuilderDesc_CheckFunctionOp)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 141622))+4);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 141629)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i3) goto l3;
  varRef = (OOC_IR__Expression)i1;
  i3=i1;
  goto l4;
l3:
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141667)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
  varRef = (OOC_IR__Expression)i3;
  
l4:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 141747))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 141754)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i4) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 142410));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142384)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 20, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l23;
l7:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 141793))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 141804)))), &_td_OOC_SymbolTable__RecordDesc, 141804)), 141811))+44);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 141793))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 141804)))), &_td_OOC_SymbolTable__RecordDesc, 141804)), 141811))+44);
  i6 = (OOC_INT32)name;
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141847)))), OOC_IR__BuilderDesc_GetName)),OOC_IR__BuilderDesc_GetName)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i6);
  i8 = (OOC_INT32)context;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 141815)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i5, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Name)i7, OOC_FALSE);
  i5 = i4!=(OOC_INT32)0;
  decl = (OOC_SymbolTable__Declaration)i4;
  if (!i5) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 141912)))), OOC_SymbolTable__DeclarationDesc_IncrUsageCount)),OOC_SymbolTable__DeclarationDesc_IncrUsageCount)((OOC_SymbolTable__Declaration)i4);
l10:
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l21;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 142041)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i5) goto l19;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 142157)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i5) goto l17;
  _assert(OOC_FALSE, 127, 142334);
  goto l23;
l17:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 142228))+4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142195)))), OOC_IR__BuilderDesc_NewSelectProc)),OOC_IR__BuilderDesc_NewSelectProc)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_SymbolTable__Record)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 142239)))), &_td_OOC_SymbolTable__RecordDesc, 142239)), (OOC_SymbolTable__ProcDecl)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 142290)))), &_td_OOC_SymbolTable__ProcDeclDesc, 142290)), (OOC_Scanner_Builder_BasicList__Symbol)i6, OOC_FALSE);
  return (OOC_IR__Expression)i0;
  goto l23;
l19:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142080)))), OOC_IR__BuilderDesc_NewSelectField)),OOC_IR__BuilderDesc_NewSelectField)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_SymbolTable__FieldDecl)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 142120)))), &_td_OOC_SymbolTable__FieldDeclDesc, 142120)), (OOC_Scanner_Builder_BasicList__Symbol)i6);
  return (OOC_IR__Expression)i0;
  goto l23;
l21:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141990)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 1, (OOC_Scanner_Builder_BasicList__Symbol)i6);
  return (OOC_IR__Expression)i0;
l23:
  _failed_function(141332); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1;
  OOC_INT8 id;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewOperator_IsPredefClass(OOC_SymbolTable__Type type, OOC_UINT32 classes);
  auto OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_UnaryOperator();
  auto OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_BinaryOperator();
    
    OOC_CHAR8 OOC_IR__BuilderDesc_NewOperator_IsPredefClass(OOC_SymbolTable__Type type, OOC_UINT32 classes) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143310)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l3;
      return OOC_FALSE;
      goto l4;
l3:
      i0 = *(OOC_INT16*)((_check_pointer(i0, 143347))+32);
      i1 = classes;
      return (_in(i0,i1));
l4:
      _failed_function(143231); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_UnaryOperator() {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Type type;
      OOC_CHAR8 isNumeric;
      OOC_CHAR8 isSet;
      OOC_CHAR8 isBoolean;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143560))+16);
      i2 = (OOC_INT32)left;
      i1 = i2==i1;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143585))+16);
      i2 = (OOC_INT32)right;
      i1 = i2==i1;
      
      goto l5;
l3:
      i1=OOC_TRUE;
l5:
      if (i1) goto l28;
      i0 = (OOC_INT32)right;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143835))+4);
      type = (OOC_SymbolTable__Type)i0;
      i1 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i0);
      isNumeric = i1;
      i2 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i0);
      isSet = i2;
      i0 = OOC_IR__BuilderDesc_NewOperator_IsPredefClass((OOC_SymbolTable__Type)i0, 1);
      isBoolean = i0;
      i3 = id;
      switch (i3) {
      case 7:
        if (i1) goto l14;
        if (i2) goto l12;
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144257)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l12:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)right;
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144202)))), OOC_IR__BuilderDesc_NewNegate)),OOC_IR__BuilderDesc_NewNegate)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l14:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)right;
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144064)))), OOC_IR__BuilderDesc_NewNegate)),OOC_IR__BuilderDesc_NewNegate)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      case 6:
        if (i1) goto l19;
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144398)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l19:
        i0 = (OOC_INT32)right;
        return (OOC_IR__Expression)i0;
        goto l29;
      case 33:
        if (i0) goto l24;
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144552)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l24:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)right;
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144500)))), OOC_IR__BuilderDesc_NewNot)),OOC_IR__BuilderDesc_NewNot)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      default:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144621)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      }
l28:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 143795))+16);
      return (OOC_IR__Expression)i0;
l29:
      _failed_function(143435); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_BinaryOperator() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
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
      OOC_CHAR8 dummy;
      OOC_IR__ExpressionList exprList;
      auto OOC_CHAR8 OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString(OOC_SymbolTable__Type type);
        
        OOC_CHAR8 OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString(OOC_SymbolTable__Type type) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)type;
          i1 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i0);
          if (i1) goto l7;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145053)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l5;
          i0=OOC_FALSE;
          goto l8;
l5:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145093)))), &_td_OOC_SymbolTable__ArrayDesc, 145093)), 145099))+36);
          i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
          
          goto l8;
l7:
          i0=OOC_TRUE;
l8:
          return i0;
          ;
        }


      i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(16);
      nil = (OOC_SymbolTable__Type)i0;
      i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(8);
      real = (OOC_SymbolTable__Type)i0;
      result = (OOC_IR__Expression)(OOC_INT32)0;
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 145322))+16);
      i3 = (OOC_INT32)left;
      i2 = i3==i2;
      if (i2) goto l3;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 145347))+16);
      i4 = (OOC_INT32)right;
      i2 = i4==i2;
      
      goto l5;
l3:
      i2=OOC_TRUE;
l5:
      if (i2) goto l168;
      i1 = id;
      i1 = i1==15;
      if (i1) goto l9;
      i1=OOC_FALSE;
      goto l11;
l9:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 145625))+4);
      i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
      
l11:
      if (i1) goto l13;
      i1=OOC_FALSE;
      goto l15;
l13:
      i1 = (OOC_INT32)right;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 145659))+4);
      i1 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i1);
      
l15:
      if (i1) goto l166;
      i1 = id;
      i1 = i1==16;
      if (i1) goto l164;
      i1 = (OOC_INT32)b;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 145809)))), OOC_IR__BuilderDesc_WidenToCommon)),OOC_IR__BuilderDesc_WidenToCommon)((OOC_IR__Builder)i1, (void*)(OOC_INT32)&left, (void*)(OOC_INT32)&right);
      if (i1) goto l33;
      i0 = (OOC_INT32)left;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148640))+4);
      i0 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i0);
      if (i0) goto l23;
      i0=OOC_FALSE;
      goto l25;
l23:
      i0 = (OOC_INT32)right;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148663))+4);
      i0 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i0);
      
l25:
      if (i0) goto l27;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148894)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 7, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      
      goto l169;
l27:
      i0 = id;
      i0 = _in(i0,32256);
      if (i0) goto l30;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148827)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      
      goto l169;
l30:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148766)))), OOC_IR__BuilderDesc_NewCompare)),OOC_IR__BuilderDesc_NewCompare)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l33:
      i1 = (OOC_INT32)left;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 145864))+4);
      leftType = (OOC_SymbolTable__Type)i1;
      i2 = (OOC_INT32)right;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 145889))+4);
      rightType = (OOC_SymbolTable__Type)i2;
      i2 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i1);
      isNumeric = i2;
      i3 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
      isInteger = i3;
      i4 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i1);
      isSet = i4;
      i5 = OOC_IR__BuilderDesc_NewOperator_IsPredefClass((OOC_SymbolTable__Type)i1, 1);
      isBoolean = i5;
      i1 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i1);
      i6 = id;
      i7 = _in(i6,194);
      isChar = i1;
      if (i7) goto l36;
      i1=OOC_FALSE;
      goto l38;
l36:
      i1=i2;
l38:
      if (i1) goto l156;
      i1 = _in(i6,4);
      if (i1) goto l42;
      i1=OOC_FALSE;
      goto l44;
l42:
      i1=i2;
l44:
      if (i1) goto l152;
      i0 = _in(i6,24);
      if (i0) goto l48;
      i0=OOC_FALSE;
      goto l50;
l48:
      i0=i3;
l50:
      if (i0) goto l146;
      i0 = _in(i6,198);
      if (i0) goto l54;
      i0=OOC_FALSE;
      goto l56;
l54:
      i0=i4;
l56:
      if (i0) goto l138;
      i0 = _in(i6,288);
      if (i0) goto l60;
      i0=OOC_FALSE;
      goto l62;
l60:
      i0=i5;
l62:
      if (i0) goto l132;
      i0 = _in(i6,32256);
      if (i0) goto l66;
      i0=OOC_FALSE;
      goto l68;
l66:
      i0 = (OOC_INT32)left;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147771))+4);
      i0 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i0);
      
l68:
      if (i0) goto l70;
      i0=OOC_FALSE;
      goto l72;
l70:
      i0 = (OOC_INT32)right;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147794))+4);
      i0 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i0);
      
l72:
      if (i0) goto l130;
      i0 = id;
      i0 = i0==6;
      if (i0) goto l76;
      i0=OOC_FALSE;
      goto l86;
l76:
      i0 = isChar;
      if (i0) goto l79;
      i0 = (OOC_INT32)left;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147944))+4);
      i0 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i0);
      
      goto l81;
l79:
      i0=OOC_TRUE;
l81:
      if (i0) goto l83;
      i0 = (OOC_INT32)left;
      i1 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 147981))+28);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147972))+4);
      i0 = i0==i1;
      
      goto l86;
l83:
      i0=OOC_TRUE;
l86:
      if (i0) goto l128;
      i0 = id;
      i1 = _in(i0,32256);
      if (i1) goto l90;
      i1=OOC_FALSE;
      goto l96;
l90:
      i1 = isNumeric;
      if (i1) goto l93;
      i1 = isChar;
      
      goto l96;
l93:
      i1=OOC_TRUE;
l96:
      if (i1) goto l126;
      i0 = _in(i0,1536);
      if (i0) goto l100;
      i0=OOC_FALSE;
      goto l122;
l100:
      i0 = isBoolean;
      if (i0) goto l103;
      i0 = isSet;
      
      goto l105;
l103:
      i0=OOC_TRUE;
l105:
      if (i0) goto l107;
      i0 = (OOC_INT32)nil;
      i1 = (OOC_INT32)leftType;
      i0 = i1==i0;
      
      goto l109;
l107:
      i0=OOC_TRUE;
l109:
      if (i0) goto l111;
      i0 = (OOC_INT32)right;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148394))+4);
      i1 = (OOC_INT32)nil;
      i0 = i0==i1;
      
      goto l113;
l111:
      i0=OOC_TRUE;
l113:
      if (i0) goto l115;
      i0 = (OOC_INT32)leftType;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148435)))), &_td_OOC_SymbolTable__PointerDesc);
      
      goto l117;
l115:
      i0=OOC_TRUE;
l117:
      if (i0) goto l119;
      i0 = (OOC_INT32)leftType;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148464)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l122;
l119:
      i0=OOC_TRUE;
l122:
      if (i0) goto l124;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148569)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      
      goto l169;
l124:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148508)))), OOC_IR__BuilderDesc_NewCompare)),OOC_IR__BuilderDesc_NewCompare)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l126:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 148254)))), OOC_IR__BuilderDesc_NewCompare)),OOC_IR__BuilderDesc_NewCompare)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l128:
      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], 2);
      exprList = (OOC_IR__ExpressionList)i0;
      i1 = _check_pointer(i0, 148042);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = (OOC_INT32)left;
      *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 148042))*4) = i3;
      i1 = _check_pointer(i0, 148071);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = (OOC_INT32)right;
      *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 148071))*4) = i3;
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 148097)))), OOC_IR__BuilderDesc_NewConcat)),OOC_IR__BuilderDesc_NewConcat)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__ExpressionList)i0);
      
      goto l169;
l130:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147825)))), OOC_IR__BuilderDesc_NewCompare)),OOC_IR__BuilderDesc_NewCompare)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l132:
      switch (i6) {
      case 5:
        variant = 20;
        goto l136;
      case 8:
        variant = 21;
        goto l136;
      default:
        _failed_case(i6, 147514);
        goto l136;
      }
l136:
      i0 = (OOC_INT32)b;
      i1 = variant;
      i2 = (OOC_INT32)right;
      i3 = (OOC_INT32)left;
      i4 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147623)))), OOC_IR__BuilderDesc_NewBooleanOp)),OOC_IR__BuilderDesc_NewBooleanOp)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
      
      goto l169;
l138:
      switch (i6) {
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
        _failed_case(i6, 147199);
        goto l144;
      }
l144:
      i0 = (OOC_INT32)b;
      i1 = variant;
      i2 = (OOC_INT32)right;
      i3 = (OOC_INT32)left;
      i4 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147406)))), OOC_IR__BuilderDesc_NewSetOp)),OOC_IR__BuilderDesc_NewSetOp)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
      return (OOC_IR__Expression)i0;
      i0=(OOC_INT32)0;
      goto l169;
l146:
      switch (i6) {
      case 3:
        variant = 2;
        goto l150;
      case 4:
        variant = 5;
        goto l150;
      default:
        _failed_case(i6, 146903);
        goto l150;
      }
l150:
      i0 = (OOC_INT32)b;
      i1 = variant;
      i2 = (OOC_INT32)right;
      i3 = (OOC_INT32)left;
      i4 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147025)))), OOC_IR__BuilderDesc_NewBinaryArith)),OOC_IR__BuilderDesc_NewBinaryArith)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
      
      goto l169;
l152:
      if (!i3) goto l154;
      i1 = (OOC_INT32)b;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 146624)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)&left, (OOC_SymbolTable__Type)i0);
      dummy = i1;
      i1 = (OOC_INT32)b;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 146664)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)&right, (OOC_SymbolTable__Type)i0);
      dummy = i0;
l154:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)right;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146717)))), OOC_IR__BuilderDesc_NewBinaryArith)),OOC_IR__BuilderDesc_NewBinaryArith)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, 3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3);
      
      goto l169;
l156:
      switch (i6) {
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
        _failed_case(i6, 146262);
        goto l161;
      }
l161:
      i0 = (OOC_INT32)b;
      i1 = variant;
      i2 = (OOC_INT32)right;
      i3 = (OOC_INT32)left;
      i4 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146427)))), OOC_IR__BuilderDesc_NewBinaryArith)),OOC_IR__BuilderDesc_NewBinaryArith)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
      
      goto l169;
l164:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145766)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l166:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145688)))), OOC_IR__BuilderDesc_NewSetMember)),OOC_IR__BuilderDesc_NewSetMember)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l168:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 145567))+16);
      
l169:
      return (OOC_IR__Expression)i0;
      ;
    }


  i0 = (OOC_INT32)sym;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 149000))+4);
  i1 = (OOC_INT32)left;
  i1 = i1==(OOC_INT32)0;
  id = i0;
  if (i1) goto l3;
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewOperator_BinaryOperator();
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewOperator_UnaryOperator();
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(142468); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewCall(OOC_IR__Builder b, OOC_IR__Expression design, OOC_IR__ExpressionList arguments, OOC_CHAR8 isFunctionCall, OOC_Scanner_Builder_BasicList__Symbol endOfArgsSym) {
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
  auto void OOC_IR__BuilderDesc_NewCall_MakeParameterCompatible(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression *arg, OOC_SymbolTable__VarDecl fpar);
  auto void OOC_IR__BuilderDesc_NewCall_TransformArgs(OOC_Scanner_Builder_BasicList__Symbol sym, OOC_Scanner_Builder_BasicList__Symbol endOfArgsSym, OOC_SymbolTable__FormalPars formalPars, OOC_IR__Expression receiver, OOC_IR__ExpressionList *arguments, OOC_SymbolTable__VarDeclArray *argFormalPars);
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(OOC_INT32 min, OOC_INT32 max);
    
    void OOC_IR__BuilderDesc_NewCall_MakeParameterCompatible(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression *arg, OOC_SymbolTable__VarDecl fpar) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_CHAR8 ok;

      i0 = (OOC_INT32)fpar;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 150077))+54);
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)*arg;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 150117))+4);
      i1 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i1, 16);
      
l5:
      if (i1) goto l66;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 150285))+50);
      if (i1) goto l24;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 151853))+40);
      i1 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i1);
      if (i1) goto l11;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 152396))+40);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 152369)))), OOC_IR__BuilderDesc_WidenForAssign)),OOC_IR__BuilderDesc_WidenForAssign)((OOC_IR__Builder)i1, (void*)(OOC_INT32)arg, (OOC_SymbolTable__Type)i0);
      ok = i0;
      
      goto l20;
l11:
      i1 = (OOC_INT32)*arg;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 152182))+40);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 152170))+4);
      i1 = OOC_SymbolTable_TypeRules__IsArrayCompatible((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i2);
      if (i1) goto l14;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 152224))+40);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 152234)))), &_td_OOC_SymbolTable__ArrayDesc, 152234)), 152240))+36);
      i1 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i1, 11);
      
      goto l16;
l14:
      i1=OOC_TRUE;
l16:
      if (i1) goto l18;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 152303))+40);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 152285)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)arg, (OOC_SymbolTable__Type)i0);
      
      goto l19;
l18:
      i0=OOC_TRUE;
l19:
      ok = i0;
      
l20:
      i0 = !i0;
      if (!i0) goto l66;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*arg;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 152485));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 152449)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 12, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      goto l66;
l24:
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*arg;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150344)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 150379))+49);
      if (i2) goto l27;
      i2=OOC_FALSE;
      goto l29;
l27:
      i2 = (OOC_INT32)*arg;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 150398))+4);
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 150405)))), &_td_OOC_SymbolTable__PointerDesc);
      
l29:
      if (!i2) goto l31;
      i2 = (OOC_INT32)*arg;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 150531));
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150516)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2);
      *arg = (OOC_IR__Expression)i2;
l31:
      i2 = (OOC_INT32)*arg;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 150605))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150594))+40);
      i2 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i2);
      if (i2) goto l38;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150645))+40);
      i2 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i2, 11);
      if (i2) goto l36;
      i2=OOC_FALSE;
      goto l40;
l36:
      i2 = (OOC_INT32)*arg;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 150705))+4);
      i2 = OOC_SymbolTable_TypeRules__IsByteCompatible((OOC_SymbolTable__Type)i2);
      
      goto l40;
l38:
      i2=OOC_TRUE;
l40:
      if (i2) goto l46;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150751))+40);
      i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i2);
      if (i2) goto l44;
      i2=OOC_FALSE;
      goto l48;
l44:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150792))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 150802)))), &_td_OOC_SymbolTable__ArrayDesc, 150802)), 150808))+36);
      i2 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i2, 11);
      
      goto l48;
l46:
      i2=OOC_TRUE;
l48:
      if (i2) goto l66;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 151037))+40);
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 151044)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i2) goto l59;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 151354))+40);
      i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i2);
      if (i2) goto l54;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 151725));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 151691)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 40, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l66;
l54:
      i2 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 151418))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 151406))+4);
      i0 = OOC_SymbolTable_TypeRules__IsArrayCompatible((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
      i0 = !i0;
      if (!i0) goto l66;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 151595));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 151561)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 40, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l66;
l59:
      i2 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 151111))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 151099))+4);
      i0 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
      i0 = !i0;
      if (!i0) goto l66;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 151293));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 151259)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 40, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l66:
      return;
      ;
    }

    
    void OOC_IR__BuilderDesc_NewCall_TransformArgs(OOC_Scanner_Builder_BasicList__Symbol sym, OOC_Scanner_Builder_BasicList__Symbol endOfArgsSym, OOC_SymbolTable__FormalPars formalPars, OOC_IR__Expression receiver, OOC_IR__ExpressionList *arguments, OOC_SymbolTable__VarDeclArray *argFormalPars) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      ADT_ArrayList__ArrayList newArgs;
      ADT_ArrayList__ArrayList newFPars;
      OOC_INT32 argIndex;
      OOC_INT32 fparIndex;
      OOC_SymbolTable__VarDecl fpar;
      OOC_IR__Expression arg;
      OOC_SymbolTable__Type fparType;
      OOC_INT32 i;
      auto OOC_INT32 OOC_IR__BuilderDesc_NewCall_TransformArgs_Dimensions(OOC_SymbolTable__Type type);
        
        OOC_INT32 OOC_IR__BuilderDesc_NewCall_TransformArgs_Dimensions(OOC_SymbolTable__Type type) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)type;
          i1 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i0);
          if (i1) goto l7;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 153576)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l5;
          return 0;
          goto l8;
l5:
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 153621)))), &_td_OOC_SymbolTable__ArrayDesc, 153621)), 153627)))), OOC_SymbolTable__TypeDesc_ArrayDimensions)),OOC_SymbolTable__TypeDesc_ArrayDimensions)((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 153621)))), &_td_OOC_SymbolTable__ArrayDesc, 153621)));
          return i0;
          goto l8;
l7:
          return 1;
l8:
          _failed_function(153446); return 0;
          ;
        }


      i0 = (OOC_INT32)*arguments;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 153777)), (OOC_INT32)0);
      i1 = (OOC_INT32)ADT_ArrayList__New(i1);
      newArgs = (ADT_ArrayList__ArrayList)i1;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 153829)), (OOC_INT32)0);
      i1 = (OOC_INT32)ADT_ArrayList__New(i1);
      i2 = (OOC_INT32)receiver;
      i2 = i2!=(OOC_INT32)0;
      newFPars = (ADT_ArrayList__ArrayList)i1;
      if (i2) goto l3;
      argIndex = 0;
      fparIndex = 0;
      i1=0;i2=0;
      goto l4;
l3:
      argIndex = -1;
      fparIndex = -1;
      i1=-1;i2=-1;
l4:
      i3 = (OOC_INT32)formalPars;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 154038))+44);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 154046)), (OOC_INT32)0);
      i3 = i1!=i3;
      if (i3) goto l7;
      i0=OOC_FALSE;
      goto l9;
l7:
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 154090)), (OOC_INT32)0);
      i0 = i2!=i0;
      
l9:
      if (i0) goto l11;
      i0=i2;
      goto l61;
l11:
      i0=i2;
l12_loop:
      i2 = i0==-1;
      if (i2) goto l15;
      i2 = (OOC_INT32)formalPars;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 154237))+44);
      i2 = _check_pointer(i2, 154245);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 154245))*4);
      fpar = (OOC_SymbolTable__VarDecl)i1;
      i2 = (OOC_INT32)*arguments;
      i2 = _check_pointer(i2, 154284);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT32, 154284))*4);
      arg = (OOC_IR__Expression)i0;
      
      goto l16;
l15:
      i0 = (OOC_INT32)formalPars;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 154157))+32);
      fpar = (OOC_SymbolTable__VarDecl)i0;
      i1 = (OOC_INT32)receiver;
      arg = (OOC_IR__Expression)i1;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l16:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 154348));
      i2 = (OOC_INT32)b;
      OOC_IR__BuilderDesc_NewCall_MakeParameterCompatible((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (void*)(OOC_INT32)&arg, (OOC_SymbolTable__VarDecl)i1);
      i0 = *(OOC_UINT8*)((_check_pointer(i1, 154391))+51);
      if (i0) goto l19;
      i0=OOC_FALSE;
      goto l21;
l19:
      i0 = (OOC_INT32)arg;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 154444))+4);
      i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 16);
      i0 = !i0;
      
l21:
      if (i0) goto l23;
      i0 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)arg;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154799)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
      goto l24;
l23:
      i0 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)arg;
      i4 = (OOC_INT32)sym;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 154747)))), OOC_IR__BuilderDesc_NewAdr)),OOC_IR__BuilderDesc_NewAdr)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154736)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
l24:
      i0 = (OOC_INT32)newFPars;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154844)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 154877))+55);
      if (!i2) goto l52;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 154925))+40);
      fparType = (OOC_SymbolTable__Type)i2;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 154956)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i3) goto l35;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 155944)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i2) goto l52;
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 155979))+50);
      if (!i1) goto l52;
      i1 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)arg;
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 156046));
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 156029)))), OOC_IR__BuilderDesc_NewTypeTag)),OOC_IR__BuilderDesc_NewTypeTag)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 156018)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156082)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)(OOC_INT32)0);
      goto l52;
l35:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 155008))+36);
      i1 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i1, 11);
      if (i1) goto l49;
      i0 = (OOC_INT32)arg;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 155451))+4);
      i0 = OOC_IR__BuilderDesc_NewCall_TransformArgs_Dimensions((OOC_SymbolTable__Type)i0);
      i1 = (OOC_INT32)fparType;
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 155469)))), OOC_SymbolTable__ArrayDesc_GetOpenDimensions)),OOC_SymbolTable__ArrayDesc_GetOpenDimensions)((OOC_SymbolTable__Array)i1);
      i0 = i0>=i2;
      if (!i0) goto l52;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 155746)))), OOC_SymbolTable__ArrayDesc_GetOpenDimensions)),OOC_SymbolTable__ArrayDesc_GetOpenDimensions)((OOC_SymbolTable__Array)i1);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l52;
      i1 = (OOC_INT32)newFPars;
      i2 = (OOC_INT32)newArgs;
      i3=0;
l42_loop:
      i4 = (OOC_INT32)b;
      i5 = (OOC_INT32)arg;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 155829));
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 155816)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i6, (OOC_IR__Expression)i5, i3);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 155807)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i4, (OOC_IR__Expression)i5);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 155796)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 155871)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)(OOC_INT32)0);
      i3 = i3+1;
      i4 = i3<=i0;
      i = i3;
      if (i4) goto l42_loop;
      goto l52;
l49:
      i1 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)arg;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 155214));
      i4 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
      i5 = (OOC_INT32)arg;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 155362))+4);
      i5 = *(OOC_INT32*)((_check_pointer(i5, 155368))+24);
      i5 = (OOC_INT32)Object_BigInt__NewInt(i5);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 155199)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i4, (Object_Boxed__Object)i5);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 155188)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155401)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)(OOC_INT32)0);
l52:
      i0 = argIndex;
      i0 = i0+1;
      i1 = fparIndex;
      i1 = i1+1;
      argIndex = i0;
      fparIndex = i1;
      i2 = (OOC_INT32)formalPars;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 154038))+44);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 154046)), (OOC_INT32)0);
      i2 = i1!=i2;
      if (i2) goto l55;
      i2=OOC_FALSE;
      goto l57;
l55:
      i2 = (OOC_INT32)*arguments;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 154090)), (OOC_INT32)0);
      i2 = i0!=i2;
      
l57:
      if (i2) goto l12_loop;
l61:
      i2 = (OOC_INT32)formalPars;
      i3 = *(OOC_UINT8*)((_check_pointer(i2, 156333))+48);
      i4 = (OOC_INT32)newArgs;
      if (!i3) goto l74;
      i3 = (OOC_INT32)*arguments;
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 156398)), (OOC_INT32)0);
      i5 = i0!=i5;
      if (!i5) goto l74;
      i5 = (OOC_INT32)newFPars;
      
l68_loop:
      i6 = _check_pointer(i3, 156431);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i0, i7, OOC_UINT32, 156431))*4);
      arg = (OOC_IR__Expression)i6;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 156460)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i4, (Object__Object)i6);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 156494)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i5, (Object__Object)(OOC_INT32)0);
      i0 = i0+1;
      argIndex = i0;
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i3, 156398)), (OOC_INT32)0);
      i6 = i0!=i6;
      if (i6) goto l68_loop;
l74:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 156604))+44);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 156612)), (OOC_INT32)0);
      i1 = i1!=i2;
      if (i1) goto l80;
      i1 = (OOC_INT32)*arguments;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 156762)), (OOC_INT32)0);
      i2 = i0!=i2;
      if (!i2) goto l81;
      i2 = (OOC_INT32)b;
      i1 = _check_pointer(i1, 156869);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i3, OOC_UINT32, 156869))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 156879));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 156832)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 39, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l81;
l80:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)endOfArgsSym;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156682)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 38, (OOC_Scanner_Builder_BasicList__Symbol)i1);
l81:
      i0 = *(OOC_INT32*)((_check_pointer(i4, 156934))+4);
      *arguments = (OOC_IR__ExpressionList)((OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], i0));
      i0 = *(OOC_INT32*)((_check_pointer(i4, 156976))+4);
      *argFormalPars = (OOC_SymbolTable__VarDeclArray)((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], i0));
      i0 = *(OOC_INT32*)((_check_pointer(i4, 157012))+4);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l93;
      i1 = (OOC_INT32)newFPars;
      i2=0;
l84_loop:
      i3 = (OOC_INT32)*arguments;
      i3 = _check_pointer(i3, 157041);
      i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 157055));
      i6 = _check_pointer(i6, 157062);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 157062))*4);
      *(OOC_INT32*)(i3+(_check_index(i2, i5, OOC_UINT32, 157041))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 157066)))), &_td_OOC_IR__ExpressionDesc, 157066));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 157099));
      i3 = _check_pointer(i3, 157106);
      i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i5, OOC_UINT32, 157106))*4);
      i3 = i3==(OOC_INT32)0;
      if (i3) goto l87;
      i3 = (OOC_INT32)*argFormalPars;
      i3 = _check_pointer(i3, 157193);
      i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 157208));
      i6 = _check_pointer(i6, 157215);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 157215))*4);
      *(OOC_INT32*)(i3+(_check_index(i2, i5, OOC_UINT32, 157193))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 157223)))), &_td_OOC_SymbolTable__VarDeclDesc, 157223));
      goto l88;
l87:
      i3 = (OOC_INT32)*argFormalPars;
      i3 = _check_pointer(i3, 157145);
      i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      *(OOC_INT32*)(i3+(_check_index(i2, i5, OOC_UINT32, 157145))*4) = (OOC_INT32)0;
l88:
      i2 = i2+1;
      i3 = i2<=i0;
      i = i2;
      if (i3) goto l84_loop;
l93:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(OOC_INT32 min, OOC_INT32 max) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)arguments;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 157380)), (OOC_INT32)0);
      i2 = min;
      i1 = i1<i2;
      if (i1) goto l3;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 157408)), (OOC_INT32)0);
      i1 = max;
      i0 = i0>i1;
      
      goto l5;
l3:
      i0=OOC_TRUE;
l5:
      if (i0) goto l7;
      return OOC_TRUE;
      goto l8;
l7:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)design;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 157472));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157432)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 13, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      return OOC_FALSE;
l8:
      _failed_function(157293); return 0;
      ;
    }


  i0 = (OOC_INT32)design;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157603)))), &_td_OOC_IR__PredefProcDesc);
  if (i1) goto l43;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 167833))+16);
  i2 = i0==i2;
  if (i2) goto l41;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 167972))+4);
  i2 = OOC_SymbolTable_TypeRules__IsValidReceiverType((OOC_SymbolTable__Type)i2);
  if (i2) goto l7;
  i2=OOC_FALSE;
  goto l9;
l7:
  i2 = (OOC_INT32)arguments;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 168004)), (OOC_INT32)0);
  i2 = i2==1;
  
l9:
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = (OOC_INT32)arguments;
  i2 = _check_pointer(i2, 168024);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 168024))*4);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 168028)))), &_td_OOC_IR__TypeRefDesc);
  
l13:
  if (i2) goto l39;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 168176))+4);
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 168183)))), &_td_OOC_SymbolTable__FormalParsDesc));
  if (i2) goto l37;
  i2 = isFunctionCall;
  if (i2) goto l19;
  i3=OOC_FALSE;
  goto l21;
l19:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 168310))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 168321)))), &_td_OOC_SymbolTable__FormalParsDesc, 168321)), 168332))+36);
  i3 = i3==(OOC_INT32)0;
  
l21:
  if (i3) goto l35;
  i2 = !i2;
  if (i2) goto l25;
  i2=OOC_FALSE;
  goto l27;
l25:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 168469))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 168480)))), &_td_OOC_SymbolTable__FormalParsDesc, 168480)), 168491))+36);
  i2 = i2!=(OOC_INT32)0;
  
l27:
  if (i2) goto l33;
  call = (OOC_IR__Call)((OOC_INT32)RT0__NewObject(_td_OOC_IR__Call.baseTypes[0]));
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 168628)))), &_td_OOC_IR__SelectProcDesc);
  if (i1) goto l31;
  receiver = (OOC_IR__Expression)(OOC_INT32)0;
  i1=(OOC_INT32)0;
  goto l32;
l31:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 168677)))), &_td_OOC_IR__SelectProcDesc, 168677)), 168688))+8);
  receiver = (OOC_IR__Expression)i1;
  
l32:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 168832))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 168782));
  i3 = (OOC_INT32)endOfArgsSym;
  OOC_IR__BuilderDesc_NewCall_TransformArgs((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__FormalPars)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 168843)))), &_td_OOC_SymbolTable__FormalParsDesc, 168843)), (OOC_IR__Expression)i1, (void*)(OOC_INT32)&arguments, (void*)(OOC_INT32)&formalPars);
  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)design;
  i2 = (OOC_INT32)arguments;
  i3 = (OOC_INT32)call;
  OOC_IR__InitCall((OOC_IR__Call)i3, (OOC_IR__Expression)i1, (OOC_IR__ExpressionList)i2, (OOC_SymbolTable__VarDeclArray)i0);
  return (OOC_IR__Expression)i3;
  goto l203;
l33:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 168570));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 168532)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 36, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l203;
l35:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 168412));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 168373)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 37, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l203;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 168254));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 168223)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 35, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l203;
l39:
  i2 = (OOC_INT32)arguments;
  i3 = _check_pointer(i2, 168084);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 168084))*4);
  i2 = _check_pointer(i2, 168141);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 168141))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 168087));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 168061)))), OOC_IR__BuilderDesc_NewTypeGuard)),OOC_IR__BuilderDesc_NewTypeGuard)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__TypeRef)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 168145)))), &_td_OOC_IR__TypeRefDesc, 168145)));
  return (OOC_IR__Expression)i0;
  goto l203;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 167867))+16);
  return (OOC_IR__Expression)i0;
  goto l203;
l43:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 157645))+8);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157656)))), &_td_OOC_SymbolTable__PredefProcDesc, 157656);
  predefProc = (OOC_SymbolTable__PredefProc)i0;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 157713))+42);
  i0 = *(OOC_INT16*)((_check_pointer(i0, 157734))+44);
  i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(i1, i0);
  i0 = !i0;
  if (!i0) goto l46;
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 157950))+16);
  return (OOC_IR__Expression)i0;
l46:
  i0 = (OOC_INT32)design;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 157998))+8);
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 158009)))), &_td_OOC_SymbolTable__PredefProcDesc, 158009)), 158020))+40);
  switch (i1) {
  case 0:
    i1 = (OOC_INT32)arguments;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 158111)), (OOC_INT32)0);
    i2 = i2>1;
    if (i2) goto l51;
    code = (OOC_IR__Expression)(OOC_INT32)0;
    i2=(OOC_INT32)0;
    goto l52;
l51:
    i2 = _check_pointer(i1, 158151);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i3, OOC_UINT8, 158151))*4);
    code = (OOC_IR__Expression)i2;
    
l52:
    i3 = (OOC_INT32)b;
    i1 = _check_pointer(i1, 158256);
    i4 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 158333));
    i5 = *(OOC_INT32*)((_check_pointer(i5, 158338))+16);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i4, OOC_UINT8, 158256))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 158240));
    i4 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__assertions;
    i4 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i3, (Config_Section_Options__Option)i4, i5);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 158221)))), OOC_IR__BuilderDesc_NewAssert)),OOC_IR__BuilderDesc_NewAssert)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, (!i4));
    return (OOC_IR__Expression)i0;
    goto l203;
  case 1:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 158425);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 158425))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 158404));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 158385)))), OOC_IR__BuilderDesc_NewAssert)),OOC_IR__BuilderDesc_NewAssert)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)(OOC_INT32)0, (OOC_IR__Expression)i2, OOC_FALSE);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 22:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 158515);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i5 = _check_pointer(i2, 158529);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i2 = _check_pointer(i2, 158600);
    i7 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i7, OOC_UINT8, 158600))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(1, i6, OOC_UINT8, 158529))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 158515))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 158584));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 158499));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 158568)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i2, 0);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 158476)))), OOC_IR__BuilderDesc_NewCopyString)),OOC_IR__BuilderDesc_NewCopyString)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i5, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 21:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 158660);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 158660))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 158663))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 158670)))), &_td_OOC_SymbolTable__PointerDesc);
    if (i1) goto l58;
    i1 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 159622);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 159622))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 159625));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 159590)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 50, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    goto l72;
l58:
    i1 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 158722);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 158722))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 158702)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i0);
    i0 = (OOC_INT32)arguments;
    i2 = _check_pointer(i0, 158755);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 158755))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 158758))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 158769)))), &_td_OOC_SymbolTable__PointerDesc, 158769)), 158777))+32);
    type = (OOC_SymbolTable__Type)i2;
    i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 158808)))), &_td_OOC_SymbolTable__ArrayDesc);
    if (i3) goto l67;
    i0 = OOC_SymbolTable_TypeRules__VariableInstance((OOC_SymbolTable__Type)i2);
    i0 = !i0;
    if (!i0) goto l63;
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 159298);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 159298))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 159301));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 159259)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 56, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l63:
    i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(1, 1);
    if (!i0) goto l72;
    i0 = (OOC_INT32)b;
    i1 = (OOC_INT32)design;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 159454);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i2 = _check_pointer(i2, 159517);
    i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i5, OOC_UINT8, 159517))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 159520))+4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 159454))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 159501));
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 159438));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159479)))), OOC_IR__BuilderDesc_NewNewObject)),OOC_IR__BuilderDesc_NewNewObject)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i2, (OOC_IR__ExpressionList)(OOC_INT32)0);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159397)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l72;
l67:
    i1 = _check_pointer(i0, 158857);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 158857))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 158860))+4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 158870)))), &_td_OOC_SymbolTable__PointerDesc, 158870)), 158878))+32);
    i0 = _check_pointer(i0, 158857);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 158857))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 158860))+4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158870)))), &_td_OOC_SymbolTable__PointerDesc, 158870)), 158878))+32);
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 158892)))), &_td_OOC_SymbolTable__ArrayDesc, 158892)), 158898)))), OOC_SymbolTable__ArrayDesc_GetOpenDimensions)),OOC_SymbolTable__ArrayDesc_GetOpenDimensions)((OOC_SymbolTable__Array)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158892)))), &_td_OOC_SymbolTable__ArrayDesc, 158892)));
    i0 = 1+i0;
    dim = i0;
    i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(i0, i0);
    if (!i0) goto l72;
    i0 = (OOC_INT32)b;
    i1 = (OOC_INT32)design;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 159053);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i5 = _check_pointer(i2, 159115);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT8, 159115))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 159118))+4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 159053))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 159100));
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 159037));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159078)))), OOC_IR__BuilderDesc_NewNewObject)),OOC_IR__BuilderDesc_NewNewObject)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i5, (OOC_IR__ExpressionList)i2);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158996)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
l72:
    i0 = (OOC_INT32)b;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 159661))+16);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 4:
  case 5:
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 159732);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i4 = (OOC_INT32)b;
    i1 = _check_pointer(i1, 159764);
    i5 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i5, OOC_UINT8, 159764))*4);
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 159740)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i4, (OOC_IR__Expression)i1);
    *(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 159732))*4) = i1;
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 159799);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 159799))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 159779)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i4, (OOC_IR__Expression)i1);
    i1 = (OOC_INT32)arguments;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 159831)), (OOC_INT32)0);
    i2 = i2==1;
    if (i2) goto l76;
    i1 = _check_pointer(i1, 159949);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 159949))*4);
    delta = (OOC_IR__Expression)i1;
    goto l77;
l76:
    i1 = _check_pointer(i1, 159896);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 159896))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 159899))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 159880));
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 159864)))), OOC_IR__BuilderDesc_GetOne)),OOC_IR__BuilderDesc_GetOne)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i1);
    delta = (OOC_IR__Expression)i1;
l77:
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 160002);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 160002))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 160005))+4);
    i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 159979)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i4, (void*)(OOC_INT32)&delta, (OOC_SymbolTable__Type)i1);
    if (i1) goto l80;
    i1 = (OOC_INT32)delta;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 160392));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 160364)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i4, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 160454);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i1 = _check_pointer(i1, 160468);
    i5 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i5, OOC_UINT8, 160468))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 160454))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 160439));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 160417)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l203;
l80:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 160037))+8);
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 160048)))), &_td_OOC_SymbolTable__PredefProcDesc, 160048)), 160059))+40);
    i1 = i1==4;
    if (i1) goto l83;
    op = 1;
    i1=1;
    goto l84;
l83:
    op = 0;
    i1=0;
l84:
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 160326);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 160326))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 160306));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 160208));
    i5 = (OOC_INT32)delta;
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 160249)))), OOC_IR__BuilderDesc_NewBinaryArith)),OOC_IR__BuilderDesc_NewBinaryArith)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i3, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i5);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 160187)))), OOC_IR__BuilderDesc_NewAssignOp)),OOC_IR__BuilderDesc_NewAssignOp)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 6:
  case 7:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 160559);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 160559))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 160539)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 160582);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i2 = _check_pointer(i2, 160610);
    i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i5, OOC_UINT8, 160610))*4);
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 160590)))), OOC_IR__BuilderDesc_AssertSet)),OOC_IR__BuilderDesc_AssertSet)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    *(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 160582))*4) = i2;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 160633);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i2 = _check_pointer(i2, 160665);
    i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 160665))*4);
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 160641)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    *(OOC_INT32*)(i3+(_check_index(1, i4, OOC_UINT8, 160633))*4) = i2;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 160689))+8);
    i2 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 160700)))), &_td_OOC_SymbolTable__PredefProcDesc, 160700)), 160711))+40);
    i2 = i2==6;
    if (i2) goto l89;
    op = 23;
    i2=23;
    goto l90;
l89:
    op = 22;
    i2=22;
l90:
    i3 = (OOC_INT32)arguments;
    i4 = _check_pointer(i3, 160989);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i3 = _check_pointer(i3, 161003);
    i6 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(1, i6, OOC_UINT8, 161003))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT8, 160989))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 160919));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 160856));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 160894)))), OOC_IR__BuilderDesc_NewChangeElement)),OOC_IR__BuilderDesc_NewChangeElement)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i5, i2, (OOC_IR__Expression)i4, (OOC_IR__Expression)i3);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 160836)))), OOC_IR__BuilderDesc_NewAssignOp)),OOC_IR__BuilderDesc_NewAssignOp)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 2:
    i1 = (OOC_INT32)arguments;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 161098)), (OOC_INT32)0);
    i2 = i2!=2;
    i3 = (OOC_INT32)b;
    if (i2) goto l94;
    i2 = _check_pointer(i1, 161217);
    i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i5 = _check_pointer(i1, 161270);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT8, 161270))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 161273))+4);
    i1 = _check_pointer(i1, 161270);
    i6 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i6, OOC_UINT8, 161270))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 161273))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i4, OOC_UINT8, 161217))*4);
    i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 161279)))), OOC_SymbolTable__TypeDesc_ArrayDimensions)),OOC_SymbolTable__TypeDesc_ArrayDimensions)((OOC_SymbolTable__Type)i1);
    i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 161190)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i3, (OOC_IR__Expression)i2, 0, i1);
    dim = i1;
    
    goto l95;
l94:
    dim = 0;
    i1=0;
l95:
    i2 = (OOC_INT32)arguments;
    i4 = _check_pointer(i2, 161345);
    i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
    i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT8, 161345))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 161348))+4);
    i4 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 161355)))), &_td_OOC_SymbolTable__ArrayDesc));
    if (!i4) goto l98;
    i2 = _check_pointer(i2, 161414);
    i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 161414))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 161417));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 161385)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 15, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l98:
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 161495);
    i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 161495))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 161479));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 161463)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2, i1);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 20:
  case 19:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 161579);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 161579))*4);
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 161556)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    type = (OOC_SymbolTable__Type)i2;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 161603))+8);
    i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 161614)))), &_td_OOC_SymbolTable__PredefProcDesc, 161614)), 161625))+40);
    i0 = i0==20;
    if (i0) goto l102;
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetMax((OOC_SymbolTable__Type)i2);
    value = (Object_Boxed__Object)i0;
    
    goto l103;
l102:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetMin((OOC_SymbolTable__Type)i2);
    value = (Object_Boxed__Object)i0;
    
l103:
    i3 = i0==(OOC_INT32)0;
    if (i3) goto l110;
    i3 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i2);
    if (!i3) goto l109;
    i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(4);
    type = (OOC_SymbolTable__Type)i2;
    
l109:
    i3 = (OOC_INT32)arguments;
    i3 = _check_pointer(i3, 162028);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 162028))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 162031));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162007)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i0);
    return (OOC_IR__Expression)i0;
    goto l203;
l110:
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 161835);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 161835))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 161838));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 161805)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 18, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 3:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 162144);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 162144))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 162128));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162111)))), OOC_IR__BuilderDesc_NewSize)),OOC_IR__BuilderDesc_NewSize)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 8:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 162218);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 162218))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 162202));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162186)))), OOC_IR__BuilderDesc_NewAbs)),OOC_IR__BuilderDesc_NewAbs)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 9:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 162301);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i2 = _check_pointer(i2, 162315);
    i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 162315))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 162301))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 162285));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162269)))), OOC_IR__BuilderDesc_NewAsh)),OOC_IR__BuilderDesc_NewAsh)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 10:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 162411);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 162411))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 162382));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162390)))), OOC_IR__BuilderDesc_AssertChar)),OOC_IR__BuilderDesc_AssertChar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162366)))), OOC_IR__BuilderDesc_NewCap)),OOC_IR__BuilderDesc_NewCap)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 11:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 162461);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 162461))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162465)))), &_td_OOC_IR__ConstDesc);
    if (i1) goto l119;
    i0=OOC_FALSE;
    goto l121;
l119:
    i0 = _check_pointer(i0, 162503);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 162503))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162506))+4);
    i0 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i0);
    
l121:
    if (i0) goto l136;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 162626);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 162626))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 162629))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162635)))), &_td_OOC_SymbolTable__PredefTypeDesc);
    if (i1) goto l125;
    i1 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 163373);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 163373))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 163376));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 163341)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 163409);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 163409))*4);
    return (OOC_IR__Expression)i0;
    goto l203;
l125:
    i1 = _check_pointer(i0, 162683);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 162683))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 162686))+4);
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162696)))), &_td_OOC_SymbolTable__PredefTypeDesc, 162696)), 162707))+32);
    i2 = (OOC_INT32)b;
    switch (i1) {
    case 4:
      targetType = 5;
      goto l134;
    case 5:
      targetType = 6;
      goto l134;
    case 6:
      targetType = 7;
      goto l134;
    case 8:
      targetType = 9;
      goto l134;
    case 1:
      targetType = 2;
      goto l134;
    case 2:
      targetType = 3;
      goto l134;
    default:
      i0 = _check_pointer(i0, 163131);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 163131))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 163134));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 163099)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      i0 = (OOC_INT32)arguments;
      i0 = _check_pointer(i0, 163169);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 163169))*4);
      return (OOC_IR__Expression)i0;
      goto l134;
    }
l134:
    i0 = targetType;
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i0);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 163259);
    i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 163259))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 163207)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l203;
l136:
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 162597);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 162597))*4);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 12:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 163479);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 163479))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 163483)))), &_td_OOC_IR__ConstDesc);
    if (i1) goto l141;
    i0=OOC_FALSE;
    goto l143;
l141:
    i0 = _check_pointer(i0, 163521);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 163521))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 163524))+4);
    i0 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i0);
    
l143:
    if (i0) goto l158;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 163645);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 163645))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 163648))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 163654)))), &_td_OOC_SymbolTable__PredefTypeDesc);
    if (i1) goto l147;
    i1 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 164382);
    i2 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 164382))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 164385));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 164350)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 164418);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 164418))*4);
    return (OOC_IR__Expression)i0;
    goto l203;
l147:
    i1 = _check_pointer(i0, 163702);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 163702))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 163705))+4);
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 163715)))), &_td_OOC_SymbolTable__PredefTypeDesc, 163715)), 163726))+32);
    i2 = (OOC_INT32)b;
    switch (i1) {
    case 5:
      targetType = 4;
      goto l156;
    case 6:
      targetType = 5;
      goto l156;
    case 7:
      targetType = 6;
      goto l156;
    case 9:
      targetType = 8;
      goto l156;
    case 2:
      targetType = 1;
      goto l156;
    case 3:
      targetType = 2;
      goto l156;
    default:
      i0 = _check_pointer(i0, 164140);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 164140))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 164143));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 164108)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      i0 = (OOC_INT32)arguments;
      i0 = _check_pointer(i0, 164178);
      i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 164178))*4);
      return (OOC_IR__Expression)i0;
      goto l156;
    }
l156:
    i0 = targetType;
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i0);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 164268);
    i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 164268))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 164216)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l203;
l158:
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 163616);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 163616))*4);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 13:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 164482);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i3 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 164514);
    i4 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i4, OOC_UINT8, 164514))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 164490)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
    *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 164482))*4) = i0;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 164541);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 164541))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 164545)))), &_td_OOC_IR__ConstDesc);
    if (!i1) goto l163;
    i0 = _check_pointer(i0, 164755);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 164755))*4);
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 164730)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0, (OOC_INT32)0, 256);
    dummy = i0;
l163:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 164923);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 164923))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 164870)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 14:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 164970);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i3 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 165002);
    i4 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i4, OOC_UINT8, 165002))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 164978)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
    *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 164970))*4) = i0;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 165029);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 165029))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 165033)))), &_td_OOC_IR__ConstDesc);
    if (!i1) goto l167;
    i0 = _check_pointer(i0, 165243);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 165243))*4);
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 165218)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0, (OOC_INT32)0, 65536);
    dummy = i0;
l167:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(2);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 165459);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 165459))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 165402)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 15:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 165515);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i3 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 165547);
    i4 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i4, OOC_UINT8, 165547))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 165523)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
    *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 165515))*4) = i0;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 165574);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 165574))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 165578)))), &_td_OOC_IR__ConstDesc);
    if (!i1) goto l171;
    i0 = _check_pointer(i0, 165788);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 165788))*4);
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 165763)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0, (OOC_INT32)0, 2147483647);
    dummy = i0;
l171:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(3);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 166049);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 166049))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 165992)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 16:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 166138);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 166138))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 166122));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 166103)))), OOC_IR__BuilderDesc_NewEntier)),OOC_IR__BuilderDesc_NewEntier)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 17:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 166221);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 166221))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 166205));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 166189)))), OOC_IR__BuilderDesc_NewOdd)),OOC_IR__BuilderDesc_NewOdd)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 18:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 166277);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 166277))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 166280))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 166286)))), &_td_OOC_SymbolTable__PredefTypeDesc);
    if (i1) goto l177;
    i0=OOC_FALSE;
    goto l183;
l177:
    i1 = _check_pointer(i0, 166329);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 166329))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 166332))+4);
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 166342)))), &_td_OOC_SymbolTable__PredefTypeDesc, 166342)), 166353))+32);
    i1 = i1==2;
    if (i1) goto l180;
    i0 = _check_pointer(i0, 166401);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 166401))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 166404))+4);
    i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 166414)))), &_td_OOC_SymbolTable__PredefTypeDesc, 166414)), 166425))+32);
    i0 = i0==3;
    
    goto l183;
l180:
    i0=OOC_TRUE;
l183:
    if (i0) goto l185;
    targetType = 5;
    i0=5;
    goto l186;
l185:
    targetType = 6;
    i0=6;
l186:
    i1 = (OOC_INT32)b;
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i0);
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 166705);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 166705))*4);
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 166684)))), OOC_IR__BuilderDesc_AssertChar)),OOC_IR__BuilderDesc_AssertChar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 166613)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i1, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 25:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 166859);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i5 = _check_pointer(i2, 166873);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i2 = _check_pointer(i2, 166887);
    i7 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(2, i7, OOC_UINT8, 166887))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(1, i6, OOC_UINT8, 166873))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 166859))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 166811));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 166789)))), OOC_IR__BuilderDesc_NewMoveBlock)),OOC_IR__BuilderDesc_NewMoveBlock)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i5, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 26:
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 166949);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 166949))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 166952))+4);
    i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 166958)))), &_td_OOC_SymbolTable__PointerDesc);
    if (i2) goto l191;
    i1 = _check_pointer(i1, 167012);
    i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 167012))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 167015))+4);
    i1 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i1, 12);
    
    goto l192;
l191:
    i1=OOC_TRUE;
l192:
    i2 = (OOC_INT32)b;
    if (i1) goto l195;
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 167323);
    i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 167323))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 167326));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 167291)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 50, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    goto l196;
l195:
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 167070);
    i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 167070))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 167050)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1);
    i1 = (OOC_INT32)arguments;
    i3 = _check_pointer(i1, 167103);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 167103))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 167106))+4);
    type = (OOC_SymbolTable__Type)i3;
    i3 = _check_pointer(i1, 167184);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i5 = _check_pointer(i1, 167241);
    i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT8, 167241))*4);
    i1 = _check_pointer(i1, 167260);
    i6 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 167244))+4);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i6, OOC_UINT8, 167260))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 167184))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 167226));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 167168));
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 167205)))), OOC_IR__BuilderDesc_NewNewBlock)),OOC_IR__BuilderDesc_NewNewBlock)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i5, (OOC_IR__Expression)i1);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 167131)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
l196:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 167362))+16);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 23:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 167482);
    i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 167482))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 167466));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 167450)))), OOC_IR__BuilderDesc_NewAdr)),OOC_IR__BuilderDesc_NewAdr)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 24:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 167559);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i2 = _check_pointer(i2, 167573);
    i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 167573))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 167559))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 167543));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 167525)))), OOC_IR__BuilderDesc_NewShift)),OOC_IR__BuilderDesc_NewShift)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2, OOC_FALSE);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 28:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 167668);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i2 = _check_pointer(i2, 167682);
    i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 167682))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 167668))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 167652));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 167631)))), OOC_IR__BuilderDesc_NewTypeCast)),OOC_IR__BuilderDesc_NewTypeCast)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l203;
  case 27:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 167767);
    i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
    i2 = _check_pointer(i2, 167781);
    i5 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 167781))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 167767))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 167751));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 167733)))), OOC_IR__BuilderDesc_NewShift)),OOC_IR__BuilderDesc_NewShift)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2, OOC_TRUE);
    return (OOC_IR__Expression)i0;
    goto l203;
  default:
    _failed_case(i1, 157987);
    goto l203;
  }
l203:
  _failed_function(149157); return 0;
  ;
}

void OOC_OOC_IR_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Region("", 1, (OOC_INT32)0, (OOC_INT32)0);
  _c1 = Object__NewLatin1Region("NIL", 4, (OOC_INT32)0, 3);
  _c2 = Object__NewLatin1Char((OOC_CHAR8)'a');

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ErrorContext.baseTypes[0]);
  OOC_IR__irContext = (OOC_IR__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:IR", 7);
  return;
  ;
}

/* --- */
