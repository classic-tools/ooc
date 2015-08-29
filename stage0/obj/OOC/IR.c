#include <OOC/IR.d>
#include <__oo2c.h>
#include <setjmp.h>

static void OOC_IR__AppendContext(ADT_StringBuffer__StringBuffer buffer, OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)item;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36923)))), &_td_OOC_SymbolTable__DeclarationDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36913)))), 36913);
  goto l7;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36957))+4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l6;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37010))+4);
  i2 = (OOC_INT32)buffer;
  OOC_IR__AppendContext((ADT_StringBuffer__StringBuffer)i2, (OOC_SymbolTable__Item)i1);
l6:
  i1 = (OOC_INT32)buffer;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37061))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 37066))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37061))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 37066))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 37070)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37043)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i1, (void*)(_check_pointer(i2, 37070)), i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37086)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i1, 46u);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37483))+4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37530))+4);
  OOC_IR__AppendContext((ADT_StringBuffer__StringBuffer)i0, (OOC_SymbolTable__Item)i2);
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37556))+20);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l26;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37657)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i2) goto l24;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37852)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i2) goto l22;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37915)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i2) goto l20;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37983)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l18;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38042)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i2) goto l16;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 38035)))), 38035);
  goto l27;
l16:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38068)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "RECORD", 7);
  goto l27;
l18:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38008)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "ARRAY", 6);
  goto l27;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37945)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "PROCEDURE", 10);
  goto l27;
l22:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37879)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "POINTER", 8);
  goto l27;
l24:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37751)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "PredefType(", 12);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 37806))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37791)))), ADT_StringBuffer__StringBufferDesc_AppendInt)),ADT_StringBuffer__StringBufferDesc_AppendInt)((ADT_StringBuffer__StringBuffer)i0, i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37822)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, ")", 2);
  goto l27;
l26:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37605))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 37616))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 37621))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37605))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37616))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37621))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 37625)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37587)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(_check_pointer(i2, 37625)), i1);
l27:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 38120)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 38460))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){85,110,100,101,99,108,97,114,101,100,32,105,100,101,110,116,105,102,105,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,105,100,101,110,116,105,102,105,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){78,117,109,98,101,114,32,111,117,116,32,111,102,32,114,97,110,103,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){67,104,97,114,97,99,116,101,114,32,118,97,108,117,101,32,111,117,116,32,111,102,32,114,97,110,103,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,118,97,108,105,100,32,116,121,112,101,32,102,111,114,32,111,112,101,114,97,116,111,114,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){85,110,107,110,111,119,110,32,111,112,101,114,97,116,111,114,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 7:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,99,111,109,112,97,116,105,98,108,101,32,116,121,112,101,115,32,102,111,114,32,111,112,101,114,97,116,111,114,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 8:
    _copy_16((const void*)((OOC_CHAR16[]){68,105,118,105,115,111,114,32,105,115,32,122,101,114,111,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 9:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,105,115,32,110,111,116,32,99,111,110,115,116,97,110,116,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 10:
    _copy_16((const void*)((OOC_CHAR16[]){86,97,108,117,101,32,111,117,116,32,111,102,32,114,97,110,103,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 11:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,97,121,32,110,111,116,32,98,101,32,112,97,115,115,101,100,32,98,121,32,114,101,102,101,114,101,110,99,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 12:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,111,102,32,97,99,116,117,97,108,32,112,97,114,97,109,101,116,101,114,32,105,115,32,110,111,116,32,99,111,109,112,97,116,105,98,108,101,32,119,105,116,104,32,102,111,114,109,97,108,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 24:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,111,102,32,101,120,112,114,101,115,115,105,111,110,32,105,115,32,110,111,116,32,99,111,109,112,97,116,105,98,108,101,32,119,105,116,104,32,118,97,114,105,97,98,108,101,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 13:
    _copy_16((const void*)((OOC_CHAR16[]){87,114,111,110,103,32,110,117,109,98,101,114,32,111,102,32,97,114,103,117,109,101,110,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 14:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,116,101,103,101,114,32,99,111,110,115,116,97,110,116,32,105,110,32,116,104,101,32,114,97,110,103,101,32,96,36,123,115,116,97,114,116,125,32,60,61,32,120,32,60,32,36,123,101,110,100,125,39,32,114,101,113,117,105,114,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 15:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,97,110,32,97,114,114,97,121,32,118,97,108,117,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 16:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,110,97,109,101,32,101,120,112,101,99,116,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 17:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,109,117,115,116,32,98,101,32,97,110,32,101,120,116,101,110,115,105,111,110,32,111,102,32,116,104,101,32,108,101,102,116,32,111,112,101,114,97,110,100,39,115,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 18:
    _copy_16((const void*)((OOC_CHAR16[]){77,73,78,47,77,65,88,32,105,115,32,110,111,116,32,97,112,112,108,105,99,97,98,108,101,32,116,111,32,116,104,105,115,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 19:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,105,110,116,101,103,101,114,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 20:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,114,101,99,111,114,100,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 21:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,112,111,105,110,116,101,114,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 22:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,116,121,112,101,32,66,79,79,76,69,65,78,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 23:
    _copy_16((const void*)((OOC_CHAR16[]){79,112,101,114,97,116,111,114,32,109,97,121,32,110,111,116,32,98,101,32,97,112,112,108,105,101,100,32,116,111,32,102,117,110,99,116,105,111,110,32,114,101,115,117,108,116,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 25:
    _copy_16((const void*)((OOC_CHAR16[]){69,88,73,84,32,111,117,116,115,105,100,101,32,111,102,32,76,79,79,80,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 26:
    _copy_16((const void*)((OOC_CHAR16[]){83,101,108,101,99,116,32,101,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,105,110,116,101,103,101,114,32,111,114,32,99,104,97,114,97,99,116,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 27:
    _copy_16((const void*)((OOC_CHAR16[]){76,97,98,101,108,32,110,111,116,32,105,110,32,116,121,112,101,32,111,102,32,115,101,108,101,99,116,32,101,120,112,114,101,115,115,105,111,110,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 28:
    _copy_16((const void*)((OOC_CHAR16[]){76,97,98,101,108,32,97,108,114,101,97,100,121,32,105,110,32,117,115,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 29:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,109,117,115,116,32,98,101,32,97,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 30:
    _copy_16((const void*)((OOC_CHAR16[]){83,116,101,112,32,118,97,108,117,101,32,110,111,116,32,105,110,32,116,121,112,101,32,111,102,32,108,111,111,112,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 31:
    _copy_16((const void*)((OOC_CHAR16[]){83,116,101,112,32,118,97,108,117,101,32,109,117,115,116,32,110,111,116,32,98,101,32,122,101,114,111,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 32:
    _copy_16((const void*)((OOC_CHAR16[]){82,69,84,85,82,78,32,109,117,115,116,32,110,111,116,32,112,114,111,118,105,100,101,32,97,32,114,101,115,117,108,116,32,118,97,108,117,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 33:
    _copy_16((const void*)((OOC_CHAR16[]){82,69,84,85,82,78,32,109,117,115,116,32,112,114,111,118,105,100,101,32,97,32,114,101,115,117,108,116,32,118,97,108,117,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 34:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,118,97,114,105,97,98,108,101,32,105,115,32,114,101,97,100,45,111,110,108,121,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 35:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,109,117,115,116,32,98,101,32,97,32,112,114,111,99,101,100,117,114,101,32,100,101,115,105,103,110,97,116,111,114,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 36:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,105,115,32,97,32,102,117,110,99,116,105,111,110,32,112,114,111,99,101,100,117,114,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 37:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,105,115,32,110,111,116,32,97,32,102,117,110,99,116,105,111,110,32,112,114,111,99,101,100,117,114,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 38:
    _copy_16((const void*)((OOC_CHAR16[]){84,111,111,32,102,101,119,32,97,114,103,117,109,101,110,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 39:
    _copy_16((const void*)((OOC_CHAR16[]){84,111,111,32,109,97,110,121,32,97,114,103,117,109,101,110,116,115,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 40:
    _copy_16((const void*)((OOC_CHAR16[]){65,99,116,117,97,108,32,112,97,114,97,109,101,116,101,114,32,110,111,116,32,99,111,109,112,97,116,105,98,108,101,32,119,105,116,104,32,102,111,114,109,97,108,32,86,65,82,32,112,97,114,97,109,101,116,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 41:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,116,101,114,110,97,108,32,101,114,114,111,114,58,32,78,97,109,101,32,114,101,100,105,114,101,99,116,105,111,110,32,102,97,105,108,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 42:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,112,97,114,97,109,101,116,101,114,32,105,115,32,114,101,97,100,45,111,110,108,121,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 43:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,118,97,114,105,97,98,108,101,32,104,97,115,32,110,111,32,100,121,110,97,109,105,99,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 44:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,110,117,109,101,114,105,99,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 45:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,97,32,99,104,97,114,97,99,116,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 46:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,114,101,97,108,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 47:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,104,97,115,32,110,111,32,102,105,120,101,100,32,115,105,122,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 48:
    _copy_16((const void*)((OOC_CHAR16[]){65,114,103,117,109,101,110,116,32,109,117,115,116,32,98,101,32,97,32,99,104,97,114,97,99,116,101,114,32,97,114,114,97,121,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 49:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,114,101,115,115,105,111,110,32,109,117,115,116,32,98,101,32,111,102,32,115,101,116,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 50:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,109,117,115,116,32,98,101,32,97,32,112,111,105,110,116,101,114,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 51:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,101,120,112,114,101,115,115,105,111,110,32,104,97,115,32,110,111,32,97,100,100,114,101,115,115,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 52:
    _copy_16((const void*)((OOC_CHAR16[]){83,105,122,101,32,109,105,115,109,97,116,99,104,32,98,101,116,119,101,101,110,32,116,121,112,101,32,97,110,100,32,101,120,112,114,101,115,115,105,111,110,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 53:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,85,110,117,115,101,100,32,111,98,106,101,99,116,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 54:
    _copy_16((const void*)((OOC_CHAR16[]){76,101,110,103,116,104,32,111,102,32,116,104,105,115,32,97,114,114,97,121,32,118,97,108,117,101,32,99,97,110,110,111,116,32,98,101,32,100,101,116,101,114,109,105,110,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 55:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,118,97,114,105,97,98,108,101,32,104,97,115,32,110,111,32,116,121,112,101,32,116,97,103,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 56:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,110,110,111,116,32,99,114,101,97,116,101,32,97,110,32,105,110,115,116,97,110,99,101,32,97,110,32,97,98,115,116,114,97,99,116,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 57:
    _copy_16((const void*)((OOC_CHAR16[]){65,98,115,116,114,97,99,116,32,112,114,111,99,101,100,117,114,101,32,99,97,110,110,111,116,32,104,97,118,101,32,97,32,66,69,71,73,78,32,112,97,114,116,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 58:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,108,108,101,100,32,112,114,111,99,101,100,117,114,101,32,105,115,32,100,101,99,108,97,114,101,100,32,97,98,115,116,114,97,99,116,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 59:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,108,108,101,100,32,112,114,111,99,101,100,117,114,101,32,110,111,116,32,100,101,102,105,110,101,100,32,105,110,32,98,97,115,101,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 60:
    _copy_16((const void*)((OOC_CHAR16[]){83,117,112,101,114,32,99,97,108,108,32,99,97,110,32,111,110,108,121,32,97,112,112,108,121,32,116,111,32,116,104,101,32,100,105,114,101,99,116,32,98,97,115,101,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 61:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,82,101,100,117,110,100,97,110,116,32,116,121,112,101,32,116,101,115,116,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 62:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,32,105,115,32,110,111,116,32,97,110,32,101,120,116,101,110,115,105,111,110,32,111,102,32,96,69,120,99,101,112,116,105,111,110,46,69,120,99,101,112,116,105,111,110,39,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 63:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,99,101,112,116,105,111,110,32,96,36,123,109,111,100,117,108,101,125,46,36,123,110,97,109,101,125,39,32,110,101,105,116,104,101,114,32,99,97,117,103,104,116,32,110,111,114,32,112,97,115,115,101,100,32,117,112,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 64:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,69,120,99,101,112,116,105,111,110,32,96,36,123,109,111,100,117,108,101,125,46,36,123,110,97,109,101,125,39,32,110,111,116,32,99,97,117,103,104,116,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 65:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,85,110,114,101,97,99,104,97,98,108,101,32,103,117,97,114,100,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  case 66:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,84,121,112,101,32,109,97,116,99,104,101,115,32,110,111,110,101,32,111,102,32,116,104,101,32,114,97,105,115,101,100,32,101,120,99,101,112,116,105,111,110,115,0}),(void*)(OOC_INT32)t,128);
    goto l69;
  default:
    _failed_case(i1, 38452);
    goto l69;
  }
l69:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43200)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

static void OOC_IR__InitGuardedVar(OOC_IR__GuardedVar gv, OOC_SymbolTable__VarDecl var, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43486))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 43497))+20);
  i3 = *(OOC_INT8*)((_check_pointer(i0, 43540))+24);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43557))+28);
  i5 = (OOC_INT32)gv;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Name)i1, i2, i3, (OOC_Doc__Document)i4);
  *(OOC_INT32*)((_check_pointer(i5, 43577))+40) = i0;
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i5, 43597))+44) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43900))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43900))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43905)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  return (OOC_SymbolTable__Module)i0;
  ;
}

void OOC_IR__InitNode(OOC_IR__Node n, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)n;
  i1 = (OOC_INT32)sym;
  *(OOC_INT32*)(_check_pointer(i0, 44091)) = i1;
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
  *(OOC_INT32*)((_check_pointer(i0, 44504))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)expr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44528)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44548))+4);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44608))+4);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  return (OOC_IR__Expression)i1;
l4:
  _failed_function(44219); return 0;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44796))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 44807));
  i3 = (OOC_INT32)sym;
  i2 = i3!=i2;
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i3, 44893))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44867)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i3, 44935))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44908)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i3, 44980))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44951)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44998))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44998))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 45007)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i3, (Msg__Msg)i0);
l4:
  *(OOC_INT32*)((_check_pointer(i1, 45035))+32) = i0;
  return;
  ;
}

static OOC_CHAR8 OOC_IR__GetPragmaValue(OOC_IR__Builder b, Config_Section_Options__Option pragma, OOC_INT32 charPos) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Config_Value__Value value;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45218))+4);
  i2 = (OOC_INT32)pragma;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45251))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45251))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 45257)), 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45218))+4);
  i4 = charPos;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45233)))), OOC_Config_Pragmas__HistoryDesc_GetValue)),OOC_Config_Pragmas__HistoryDesc_GetValue)((OOC_Config_Pragmas__History)i0, (void*)(_check_pointer(i3, 45257)), i2, i4);
  value = (Config_Value__Value)i0;
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45300)))), &_td_Config_Value_Boolean__ValueDesc, 45300)), 45306));
  return i0;
  ;
}

void OOC_IR__BuilderDesc_WarnSym(OOC_IR__Builder b, OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)OOC_IR__irContext;
  i1 = code;
  i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
  e = (Msg__Msg)i0;
  i1 = (OOC_INT32)sym;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 45504))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45478)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 45544))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45517)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 45587))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45558)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i2);
  i2 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i2, 45729))+32) = i0;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 45801))+16);
  i3 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__warnings;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45819))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45819))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45828)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i2, (Msg__Msg)i0);
l4:
  return;
  ;
}

void OOC_IR__BuilderDesc_WarnName(OOC_IR__Builder b, OOC_INT32 code, OOC_SymbolTable__Name name) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45979))+12);
  i1 = _check_pointer(i1, 45983);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 45983)));
  i1 = i1!=45u;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT32*)(_check_pointer(i0, 46046));
  i2 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__warnings;
  i3 = (OOC_INT32)b;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i3, (Config_Section_Options__Option)i2, i1);
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)OOC_IR__irContext;
  i2 = code;
  i1 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i1, i2);
  e = (Msg__Msg)i1;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 46238));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46211)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 46281))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46253)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "line", 5, i2);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 46327))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46297)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "column", 7, i0);
  i0 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46345))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46345))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 46354)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i3, (Msg__Msg)i1);
  *(OOC_INT32*)((_check_pointer(i0, 46375))+32) = i1;
l7:
  return;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_ErrExpr(OOC_IR__Builder b, OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = code;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46508)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, i1, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46540))+16);
  return (OOC_IR__Const)i0;
  ;
}

OOC_SymbolTable__Name OOC_IR__BuilderDesc_GetName(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Name name;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  name = (OOC_SymbolTable__Name)i0;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46703))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 46713))+16);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 46723))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 46734))+24);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i1);
  return (OOC_SymbolTable__Name)i0;
  ;
}

OOC_SymbolTable__Type OOC_IR__BuilderDesc_AssertType(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47034)))), &_td_OOC_IR__TypeRefDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 47173));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47140)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 16, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47198))+4);
  return (OOC_SymbolTable__Type)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47064))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47075)))), &_td_OOC_SymbolTable__TypeDeclDesc, 47075)), 47084))+40);
  return (OOC_SymbolTable__Type)i0;
l4:
  _failed_function(46800); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertBoolean(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47483))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47490)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47523))+4);
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47534)))), &_td_OOC_SymbolTable__PredefTypeDesc, 47534)), 47545))+32);
  i1 = i1==0;
  
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 47642));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47615)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 22, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l8;
l7:
  return (OOC_IR__Expression)i0;
l8:
  _failed_function(47257); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_Fold(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47761))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47761))+12);
  i2 = (OOC_INT32)expr;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47771)))), OOC_IR__ConstFoldDesc_TryConstFold)),OOC_IR__ConstFoldDesc_TryConstFold)((OOC_IR__ConstFold)i0, (OOC_IR__Expression)i2);
  return (OOC_IR__Expression)i0;
  ;
}

static OOC_CHAR8 OOC_IR__IsPredefType(OOC_SymbolTable__Type type, OOC_INT16 id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47894)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47925)))), &_td_OOC_SymbolTable__PredefTypeDesc, 47925)), 47936))+32);
  i1 = id;
  i0 = i0==i1;
  
l4:
  return i0;
  ;
}

void OOC_IR__BuilderDesc_CheckFunctionOp(OOC_IR__Builder b, OOC_IR__Expression expr, OOC_Scanner_Builder_BasicList__Symbol op) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48759)))), &_td_OOC_IR__PredefProcDesc);
  if (i1) goto l3;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48783)))), &_td_OOC_IR__CallDesc);
  
  goto l5;
l3:
  i0=1u;
l5:
  if (!i0) goto l7;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)op;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48802)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 23, (OOC_Scanner_Builder_BasicList__Symbol)i1);
l7:
  return;
  ;
}

void OOC_IR__InitExpression(OOC_IR__Expression expr, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitNode((OOC_IR__Node)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i0, 49092))+4) = i1;
  return;
  ;
}

static void OOC_IR__InitConst(OOC_IR__Const _const, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, Object_Boxed__Object value) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)_const;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitExpression((OOC_IR__Expression)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 49401))+8) = i1;
  return;
  ;
}

static OOC_IR__Const OOC_IR__NewConst(OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, Object_Boxed__Object value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)type;
  _assert((i0!=(OOC_INT32)0), 127, 49571);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49825)))), OOC_IR__VisitorDesc_VisitConst)),OOC_IR__VisitorDesc_VisitConst)((OOC_IR__Visitor)i0, (OOC_IR__Const)i1);
  return;
  ;
}

Object__String OOC_IR__ConstDesc_ToString(OOC_IR__Const _const) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_const;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49928))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49995))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49995))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50002)))), Object_Boxed__ObjectDesc_ToString)),Object_Boxed__ObjectDesc_ToString)((Object_Boxed__Object)i0);
  return (Object__String)i0;
  goto l4;
l3:
  return (Object__String)((OOC_INT32)_c1);
l4:
  _failed_function(49886); return 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50304))+8);
  i1 = _check_pointer(i1, 50309);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(2, i2, OOC_UINT8, 50309)));
  i1 = i1!=0u;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50325))+8);
  i1 = _check_pointer(i1, 50330);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(3, i2, OOC_UINT8, 50330)));
  i1 = i1==0u;
  
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(13);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50771))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50771))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 50776)), 0);
  i2 = (OOC_INT32)Object_Boxed__ParseString((void*)(_check_pointer(i2, 50776)), i3);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
  goto l8;
l7:
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50644))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50644))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 50649)), 0);
  i2 = (OOC_INT32)Object_Boxed__ParseString((void*)(_check_pointer(i2, 50649)), i3);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
l8:
  _failed_function(50242); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIntConst10(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;
  Object_BigInt__BigInt v;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50943))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50943))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 50948)), 0);
  i1 = (OOC_INT32)Object_BigInt__NewString((void*)(_check_pointer(i1, 50948)), i2, 10);
  v = (Object_BigInt__BigInt)i1;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i1 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50985)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51033))+16);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(50836); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIntConst16(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 epos;

  epos = 0;
  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51292))+8);
  i1 = _check_pointer(i1, 51296);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 51296)));
  i1 = i1!=72u;
  if (i1) goto l3;
  i1=0;
  goto l9;
l3:
  i1=0;
l4_loop:
  i1 = i1+1;
  epos = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51292))+8);
  i2 = _check_pointer(i2, 51296);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 51296)));
  i2 = i2!=72u;
  if (i2) goto l4_loop;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51368))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51368))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 51372)), 0);
  i1 = (OOC_INT32)Object_BigInt__NewRegion((void*)(_check_pointer(i2, 51372)), i3, 0, i1, 16);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_AssertConst(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51771)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 51892));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51860)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 9, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Const)i0;
  goto l4;
l3:
  return (OOC_IR__Const)i0;
l4:
  _failed_function(51490); return 0;
  ;
}

OOC_INT32 OOC_IR__BuilderDesc_AssertIntConst(OOC_IR__Builder b, OOC_IR__Expression expr, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__Const _const;
  OOC_INT32 v;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52458)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  _const = (OOC_IR__Const)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52497))+16);
  i2 = i1!=i2;
  if (!i2) goto l20;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52547))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  if (!i2) goto l16;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52578))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52578))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 52593)))), &_td_Object_BigInt__BigIntDesc, 52593)), 52600)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 52593)))), &_td_Object_BigInt__BigIntDesc, 52593)));
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 52852));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52816)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 14, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52869))+32);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52869))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52880)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i4, "start", 6, i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52922))+32);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52922))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52933)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "end", 4, i3);
l20:
  i0 = start;
  return i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertInteger(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_BigInt__BigInt v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53306))+4);
  i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53336))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 53386));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53362)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 19, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  v = (Object_BigInt__BigInt)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 53459));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53826))+4);
  i1 = OOC_SymbolTable_TypeRules__IsRealType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53856))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 53903));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53882)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 46, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewLongReal(1.0000000000000000);
  v = (Object_Boxed__LongReal)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 53980));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54356))+4);
  i1 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54386))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54436));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54412)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 44, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  v = (Object_BigInt__BigInt)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54509));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54870))+4);
  i1 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54900))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54952));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54926)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 45, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewString((Object__String)((OOC_INT32)_c2));
  v = (Object_Boxed__String)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 55029));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55355))+4);
  i1 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55385))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 55431));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55411)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 49, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewSet(0u);
  v = (Object_Boxed__Set)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 55504));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55745))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55745))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 55750)), 0);
  i1 = (OOC_INT32)Object_Boxed__ParseLongRealLiteral((void*)(_check_pointer(i1, 55750)), i2);
  v = (Object_Boxed__Object)i1;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = type;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i2);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i1 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55783)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55831))+16);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(55609); return 0;
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
          _failed_function(56181); return 0;
          ;
        }

        
        OOC_CHAR8 OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexToInt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_CHAR8 end, OOC_INT32 *result) {
          register OOC_INT32 i0,i1,i2;
          OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

          OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
          *result = 0;
          i = 0;
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 56575)));
          i1 = end;
          i0 = i0!=i1;
          if (!i0) goto l11;
          i0=0;
l3_loop:
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 56631)));
          i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i0);
          i2 = *result;
          i0 = ((2147483647-i0)>>4)<i2;
          if (!i0) goto l6;
          return 0u;
l6:
          i0 = i;
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 56742)));
          i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i0);
          *result = ((i2*16)+i0);
          i0 = i;
          i0 = i0+1;
          i = i0;
          i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 56575)));
          i2 = i2!=i1;
          if (i2) goto l3_loop;
l11:
          return 1u;
          ;
        }


      i = 0;
      hexCount = 0;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 56879)));
      i0 = i0!=0u;
      if (i0) goto l3;
      i0=0;
      goto l12;
l3:
      i0=0;
l4_loop:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 56917)));
      i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i0);
      i0 = i0>=0;
      if (!i0) goto l7;
      i0 = hexCount;
      hexCount = (i0+1);
l7:
      i0 = i;
      i0 = i0+1;
      i = i0;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 56879)));
      i1 = i1!=0u;
      if (i1) goto l4_loop;
l12:
      i1 = i0==3;
      if (i1) goto l15;
      i1=0u;
      goto l17;
l15:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 57021)));
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 57030)));
      i1 = i1==i2;
      
l17:
      if (i1) goto l19;
      i1=0u;
      goto l25;
l19:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 57044)));
      i1 = i1==34u;
      if (i1) goto l22;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 57062)));
      i1 = i1==39u;
      
      goto l25;
l22:
      i1=1u;
l25:
      if (i1) goto l51;
      i1 = i0>=2;
      if (i1) goto l29;
      i1=0u;
      goto l31;
l29:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 57192)));
      i1 = i1==88u;
      
l31:
      if (i1) goto l33;
      i0=0u;
      goto l35;
l33:
      i1 = hexCount;
      i0 = (i1+1)==i0;
      
l35:
      if (i0) goto l37;
      return (-1);
      goto l52;
l37:
      i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexToInt((void*)(OOC_INT32)str, str_0d, 88u, (void*)(OOC_INT32)&ord);
      if (i0) goto l40;
      i0=0u;
      goto l42;
l40:
      i0 = ord;
      i0 = 0<=i0;
      
l42:
      if (i0) goto l44;
      i0=0u;
      goto l46;
l44:
      i0 = ord;
      i0 = i0<=2147483647;
      
l46:
      if (i0) goto l48;
      return (-1);
      goto l52;
l48:
      i0 = ord;
      return i0;
      goto l52;
l51:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, str_0d, OOC_UINT8, 57160)));
      return i0;
l52:
      _failed_function(56072); return 0;
      ;
    }


  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57659))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57659))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 57664)), 0);
  i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf((void*)(_check_pointer(i1, 57664)), i0);
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
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l12;
l11:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57695)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 4, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57746))+16);
  return (OOC_IR__Expression)i0;
l12:
  _failed_function(55958); return 0;
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
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58495)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  t = (OOC_SymbolTable__Type)i2;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 58523))+24);
  i3 = i3<0;
  if (i3) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i2, 58619))+24);
  size = i1;
  
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 58571));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58546)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 47, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  size = 1;
  i1=1;
l4:
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)Object_BigInt__NewInt(i1);
  i3 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58647)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_GetOne(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58834)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 59588));
      i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(4);
      i3 = (OOC_INT32)min;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59574)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i3);
      return (OOC_IR__Expression)i0;
      ;
    }


  i0 = (OOC_INT32)set;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetMin((OOC_SymbolTable__Type)i0);
  val = (Object_Boxed__Object)i1;
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59709)))), &_td_Object_BigInt__BigIntDesc, 59709);
  min = (Object_BigInt__BigInt)i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetMax((OOC_SymbolTable__Type)i0);
  val = (Object_Boxed__Object)i0;
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59767)))), &_td_Object_BigInt__BigIntDesc, 59767);
  max = (Object_BigInt__BigInt)i0;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)expr;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 59790)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i2, (OOC_IR__Expression)i3);
  expr = (OOC_IR__Expression)i3;
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 59826)))), &_td_OOC_IR__ConstDesc);
  if (!i4) goto l10;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 59858))+8);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 59872)))), &_td_Object_BigInt__BigIntDesc, 59872);
  element = (Object_BigInt__BigInt)i4;
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 59898)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i4, (Object__Object)i1);
  i5 = i5<0;
  if (i5) goto l5;
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 59924)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i4, (Object__Object)i0);
  i4 = i4>0;
  
  goto l7;
l5:
  i4=1u;
l7:
  if (!i4) goto l10;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 59988));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 59953)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 14, (OOC_Scanner_Builder_BasicList__Symbol)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 60005))+32);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 60005))+32);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60044)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 60016)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i4, "start", 6, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 60068))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 60068))+32);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60105)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60079)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i2, "end", 4, (i0+1));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 60665))+4);
  i2 = (OOC_INT32)abs;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 60681))+8) = i0;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60864)))), OOC_IR__BuilderDesc_AssertNumeric)),OOC_IR__BuilderDesc_AssertNumeric)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61050)))), OOC_IR__VisitorDesc_VisitAbs)),OOC_IR__VisitorDesc_VisitAbs)((OOC_IR__Visitor)i0, (OOC_IR__Abs)i1);
  return;
  ;
}

static void OOC_IR__InitAdr(OOC_IR__Adr adr, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(12);
  i1 = (OOC_INT32)adr;
  i2 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i0);
  i0 = (OOC_INT32)design;
  *(OOC_INT32*)((_check_pointer(i1, 61321))+8) = i0;
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
      hasAddress = 1u;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61639)))), &_td_OOC_IR__VarDesc);
      if (i1) goto l30;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61657)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l28;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61677)))), &_td_OOC_IR__IndexDesc);
      if (i1) goto l26;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61697)))), &_td_OOC_IR__SelectFieldDesc);
      if (i1) goto l24;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61723)))), &_td_OOC_IR__TypeGuardDesc);
      if (i1) goto l22;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61747)))), &_td_OOC_IR__ProcedureRefDesc);
      if (i1) goto l20;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61774)))), &_td_OOC_IR__ConstDesc);
      if (i1) goto l15;
      hasAddress = 0u;
      i0=0u;
      goto l31;
l15:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 61814))+4);
      i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
      if (!i0) goto l18;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)expr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 61886))+4);
      i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i1);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61846)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)&expr, (OOC_SymbolTable__Type)i1);
      dummy = i0;
l18:
      i0 = (OOC_INT32)expr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 61951))+4);
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 62073));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62045)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 51, (OOC_Scanner_Builder_BasicList__Symbol)i1);
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
  OOC_IR__InitAdr((OOC_IR__Adr)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62373)))), OOC_IR__VisitorDesc_VisitAdr)),OOC_IR__VisitorDesc_VisitAdr)((OOC_IR__Visitor)i0, (OOC_IR__Adr)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 62652))+8) = i0;
  i0 = (OOC_INT32)exp;
  *(OOC_INT32*)((_check_pointer(i1, 62677))+12) = i0;
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
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62855)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i3 = (OOC_INT32)exp;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62879)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63061)))), OOC_IR__VisitorDesc_VisitAsh)),OOC_IR__VisitorDesc_VisitAsh)((OOC_IR__Visitor)i0, (OOC_IR__Ash)i1);
  return;
  ;
}

static void OOC_IR__InitBinaryArith(OOC_IR__BinaryArith op, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = variant;
  *(OOC_INT8*)((_check_pointer(i0, 63371))+8) = i1;
  i1 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i0, 63398))+12) = i1;
  i1 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i0, 63419))+16) = i1;
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 63645))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 63657))+4);
  i3 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i4);
  _assert(i3, 127, 63622);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 63722))+4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63927)))), OOC_IR__VisitorDesc_VisitBinaryArith)),OOC_IR__VisitorDesc_VisitBinaryArith)((OOC_IR__Visitor)i0, (OOC_IR__BinaryArith)i1);
  return;
  ;
}

static void OOC_IR__InitBooleanOp(OOC_IR__BooleanOp op, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = variant;
  *(OOC_INT8*)((_check_pointer(i0, 64238))+8) = i1;
  i1 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i0, 64265))+12) = i1;
  i1 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i0, 64286))+16) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewBooleanOp(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__BooleanOp op;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__BooleanOp.baseTypes[0]);
  op = (OOC_IR__BooleanOp)i0;
  i1 = (OOC_INT32)left;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64495))+4);
  i2 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 64506)))), &_td_OOC_SymbolTable__PredefTypeDesc, 64506)), 64517))+32);
  _assert((i2==0), 127, 64483);
  i2 = (OOC_INT32)right;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 64558))+4);
  i3 = *(OOC_INT16*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 64569)))), &_td_OOC_SymbolTable__PredefTypeDesc, 64569)), 64580))+32);
  _assert((i3==0), 127, 64545);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 64658))+4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64853)))), OOC_IR__VisitorDesc_VisitBooleanOp)),OOC_IR__VisitorDesc_VisitBooleanOp)((OOC_IR__Visitor)i0, (OOC_IR__BooleanOp)i1);
  return;
  ;
}

static void OOC_IR__InitCap(OOC_IR__Cap cap, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65094))+4);
  i2 = (OOC_INT32)cap;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 65110))+8) = i0;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 65287)))), OOC_IR__BuilderDesc_AssertChar)),OOC_IR__BuilderDesc_AssertChar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 65467)))), OOC_IR__VisitorDesc_VisitCap)),OOC_IR__VisitorDesc_VisitCap)((OOC_IR__Visitor)i0, (OOC_IR__Cap)i1);
  return;
  ;
}

static void OOC_IR__InitChangeElement(OOC_IR__ChangeElement ch, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression set, OOC_IR__Expression element) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)set;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65785))+4);
  i2 = (OOC_INT32)ch;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  i1 = variant;
  *(OOC_INT8*)((_check_pointer(i2, 65800))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 65828))+12) = i0;
  i0 = (OOC_INT32)element;
  *(OOC_INT32*)((_check_pointer(i2, 65848))+16) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66365)))), OOC_IR__VisitorDesc_VisitChangeElement)),OOC_IR__VisitorDesc_VisitChangeElement)((OOC_IR__Visitor)i0, (OOC_IR__ChangeElement)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 66681))+12) = i0;
  i0 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i1, 66702))+16) = i0;
  i0 = variant;
  *(OOC_INT8*)((_check_pointer(i1, 66725))+8) = i0;
  return;
  ;
}

OOC_IR__Compare OOC_IR__BuilderDesc_NewCompare(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT8 variant;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 66968))+4);
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
    _failed_case(i1, 66960);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 67437)))), OOC_IR__VisitorDesc_VisitCompare)),OOC_IR__VisitorDesc_VisitCompare)((OOC_IR__Visitor)i0, (OOC_IR__Compare)i1);
  return;
  ;
}

static void OOC_IR__InitConcat(OOC_IR__Concat op, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__ExpressionList strings) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)strings;
  *(OOC_INT32*)((_check_pointer(i0, 67737))+8) = i1;
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

  id = (-1);
  i0 = (OOC_INT32)strings;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 68009)), 0);
  i2 = (OOC_INT32)sym;
  i3 = 0<i1;
  if (i3) goto l3;
  i1=(-1);
  goto l28;
l3:
  i3 = (OOC_INT32)b;
  i4=0;i5=(-1);
l4_loop:
  i6 = _check_pointer(i0, 68038);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 68038))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 68041))+4);
  type = (OOC_SymbolTable__Type)i6;
  tid = 32767;
  i7 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i6);
  if (i7) goto l18;
  i7 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i6);
  if (i7) goto l12;
  i6 = OOC_SymbolTable_TypeRules__IsSTRING((OOC_SymbolTable__Type)i6);
  i6 = !i6;
  if (!i6) goto l11;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 68532)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 7, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l11:
  i6=32767;
  goto l19;
l12:
  i7 = _check_pointer(i0, 68290);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i6 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i6);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 68276)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i3, (void*)(i7+(_check_index(i4, i8, OOC_UINT32, 68290))*4), (OOC_SymbolTable__Type)i6);
  if (i6) goto l15;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 68407)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 7, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  i6=32767;
  goto l19;
l15:
  i6 = _check_pointer(i0, 68354);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 68354))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 68357))+4);
  i6 = *(OOC_INT16*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 68367)))), &_td_OOC_SymbolTable__PredefTypeDesc, 68367)), 68378))+32);
  tid = i6;
  
  goto l19;
l18:
  i6 = *(OOC_INT16*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 68169)))), &_td_OOC_SymbolTable__PredefTypeDesc, 68169)), 68180))+32);
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 68847))+28);
  type = (OOC_SymbolTable__Type)i3;
  i = 0;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i0, 68891)), 0);
  i5 = 0<i4;
  if (!i5) goto l41;
  i5=0;
l33_loop:
  i6 = _check_pointer(i0, 68934);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 68934))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 68937))+4);
  i6 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i6);
  if (!i6) goto l36;
  i6 = _check_pointer(i0, 69042);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 69028)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(i6+(_check_index(i5, i7, OOC_UINT32, 69042))*4), (OOC_SymbolTable__Type)i3);
  dummy = i6;
  _assert(i6, 127, 69064);
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
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 68737)), 0);
  i4 = 0<i3;
  if (!i4) goto l51;
  i4 = (OOC_INT32)b;
  i5=0;
l45_loop:
  i6 = _check_pointer(i0, 68777);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 68763)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i4, (void*)(i6+(_check_index(i5, i7, OOC_UINT32, 68777))*4), (OOC_SymbolTable__Type)i1);
  dummy = i6;
  _assert(i6, 127, 68797);
  i5 = i5+1;
  i = i5;
  i6 = i5<i3;
  if (i6) goto l45_loop;
l51:
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Concat.baseTypes[0]);
  OOC_IR__InitConcat((OOC_IR__Concat)i3, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i1, (OOC_IR__ExpressionList)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69344)))), OOC_IR__VisitorDesc_VisitConcat)),OOC_IR__VisitorDesc_VisitConcat)((OOC_IR__Visitor)i0, (OOC_IR__Concat)i1);
  return;
  ;
}

static void OOC_IR__InitDeref(OOC_IR__Deref d, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression pointer, OOC_CHAR8 checkPointer) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)pointer;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69634))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 69645)))), &_td_OOC_SymbolTable__PointerDesc, 69645)), 69653))+32);
  i2 = (OOC_INT32)d;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 69671))+8) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69720))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69731)))), &_td_OOC_SymbolTable__PointerDesc, 69731)), 69739))+32);
  *(OOC_INT32*)((_check_pointer(i2, 69698))+12) = i0;
  i0 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i2, 69756))+16) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69802))+12);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69814)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i0) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69834))+12);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69846)))), &_td_OOC_SymbolTable__ArrayDesc);
  
  goto l4;
l3:
  i0=1u;
l4:
  _assert(i0, 127, 69792);
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewDeref(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__Deref i;

  i0 = (OOC_INT32)design;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70003)))), &_td_OOC_IR__SelectProcDesc);
  if (i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70616)))), OOC_IR__BuilderDesc_CheckFunctionOp)),OOC_IR__BuilderDesc_CheckFunctionOp)((OOC_IR__Builder)i1, (OOC_IR__Expression)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70664))+4);
  i3 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 70670)))), &_td_OOC_SymbolTable__PointerDesc));
  if (i3) goto l5;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Deref.baseTypes[0]);
  i = (OOC_IR__Deref)i3;
  i4 = *(OOC_INT32*)((_check_pointer(i2, 70868))+16);
  i5 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__derefCheck;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i1, (Config_Section_Options__Option)i5, i4);
  OOC_IR__InitDeref((OOC_IR__Deref)i3, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i0, i1);
  return (OOC_IR__Expression)i3;
  goto l19;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 70734));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70707)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 21, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l19;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70090))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 70102))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70090))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 70102))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70165))+20);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 70173))+44);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70117)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 70117)), 70126)))), OOC_SymbolTable_Namespace__ExtendedDesc_GetSuperProcByIndex)),OOC_SymbolTable_Namespace__ExtendedDesc_GetSuperProcByIndex)((OOC_SymbolTable_Namespace__Extended)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 70117)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 70117)), i3);
  *(OOC_INT32*)((_check_pointer(i0, 70072))+20) = i1;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 70204))+28);
  if (i1) goto l17;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70293))+20);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l15;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70407))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 70415))+52);
  *(OOC_INT32*)((_check_pointer(i0, 70391))+4) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 70443))+28) = 1u;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 70484))+20);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 70491))+42);
  if (!i1) goto l14;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70519)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 58, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l14:
  return (OOC_IR__Expression)i0;
  goto l19;
l15:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70329)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 59, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l19;
l17:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70239)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 60, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
l19:
  _failed_function(69903); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71071)))), OOC_IR__VisitorDesc_VisitDeref)),OOC_IR__VisitorDesc_VisitDeref)((OOC_IR__Visitor)i0, (OOC_IR__Deref)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 71366))+8) = i0;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71564)))), OOC_IR__BuilderDesc_AssertReal)),OOC_IR__BuilderDesc_AssertReal)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71768)))), OOC_IR__VisitorDesc_VisitEntier)),OOC_IR__VisitorDesc_VisitEntier)((OOC_IR__Visitor)i0, (OOC_IR__Entier)i1);
  return;
  ;
}

static void OOC_IR__InitIndex(OOC_IR__Index i, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression array, OOC_IR__Expression index, OOC_CHAR8 checkIndex) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 72063))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 72074)))), &_td_OOC_SymbolTable__ArrayDesc, 72074)), 72080))+36);
  i2 = (OOC_INT32)i;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 72101))+8) = i0;
  i0 = (OOC_INT32)index;
  *(OOC_INT32*)((_check_pointer(i2, 72123))+12) = i0;
  i0 = checkIndex;
  *(OOC_UINT8*)((_check_pointer(i2, 72145))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIndex(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression array, OOC_IR__Expression index) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_CHAR8 checkIndex;
  OOC_SymbolTable__Array a;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 72426))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__indexCheck;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  checkIndex = i1;
  i3 = (OOC_INT32)array;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 72444)))), OOC_IR__BuilderDesc_CheckFunctionOp)),OOC_IR__BuilderDesc_CheckFunctionOp)((OOC_IR__Builder)i2, (OOC_IR__Expression)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72487))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 72494)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i4) goto l4;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 72531)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3);
  array = (OOC_IR__Expression)i3;
  
l4:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72579))+4);
  i4 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 72586)))), &_td_OOC_SymbolTable__ArrayDesc));
  if (i4) goto l18;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 72671))+4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 72681)))), &_td_OOC_SymbolTable__ArrayDesc, 72681);
  a = (OOC_SymbolTable__Array)i4;
  if (i1) goto l9;
  i1=0u;
  goto l10;
l9:
  i1 = *(OOC_UINT8*)((_check_pointer(i4, 72723))+33);
  
l10:
  checkIndex = i1;
  i5 = (OOC_INT32)index;
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 72755)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  index = (OOC_IR__Expression)i5;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 72793)))), &_td_OOC_IR__ConstDesc);
  if (!i6) goto l17;
  i6 = *(OOC_UINT8*)((_check_pointer(i4, 72819))+32);
  if (i6) goto l15;
  i4 = *(OOC_INT32*)((_check_pointer(i4, 73103))+44);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 73076)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5, 0, i4);
  goto l17;
l15:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 73004)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5, 0, 2147483647);
l17:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Index.baseTypes[0]);
  OOC_IR__InitIndex((OOC_IR__Index)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i5, i1);
  return (OOC_IR__Expression)i2;
  goto l19;
l18:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 72619)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i2, 15, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
l19:
  _failed_function(72213); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 73385)))), OOC_IR__VisitorDesc_VisitIndex)),OOC_IR__VisitorDesc_VisitIndex)((OOC_IR__Visitor)i0, (OOC_IR__Index)i1);
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
  *(OOC_INT8*)((_check_pointer(i1, 73732))+8) = i0;
  i0 = (OOC_INT32)array;
  *(OOC_INT32*)((_check_pointer(i1, 73761))+12) = i0;
  i0 = (OOC_INT32)arrayVariable;
  *(OOC_INT32*)((_check_pointer(i1, 73786))+20) = i0;
  i0 = dim;
  *(OOC_INT32*)((_check_pointer(i1, 73827))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewLen(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression array, OOC_INT32 dim) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_IR__Len len;
  OOC_IR__Expression arrayVariable;
  OOC_INT8 variant;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 74075))+4);
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74081)))), &_td_OOC_SymbolTable__ArrayDesc));
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 74120))+4);
  i1 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 74162));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 74139)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 15, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 74183))+16);
  return (OOC_IR__Expression)i1;
l7:
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Len.baseTypes[0]);
  len = (OOC_IR__Len)i1;
  arrayVariable = (OOC_IR__Expression)i0;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74278)))), &_td_OOC_IR__IndexDesc);
  if (i2) goto l10;
  i2=i0;
  goto l16;
l10:
  i2=i0;
l11_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 74328)))), &_td_OOC_IR__IndexDesc, 74328)), 74334))+8);
  i3 = dim;
  arrayVariable = (OOC_IR__Expression)i2;
  dim = (i3+1);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 74278)))), &_td_OOC_IR__IndexDesc);
  if (i3) goto l11_loop;
l16:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 74395))+4);
  i4 = dim;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 74402)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i3) goto l31;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 74482))+4);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 74489)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i3) goto l21;
  i3=0u;
  goto l23;
l21:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 74536))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 74536))+4);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 74547)))), &_td_OOC_SymbolTable__ArrayDesc, 74547)), 74553)))), OOC_SymbolTable__ArrayDesc_GetOpenDimensions)),OOC_SymbolTable__ArrayDesc_GetOpenDimensions)((OOC_SymbolTable__Array)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 74547)))), &_td_OOC_SymbolTable__ArrayDesc, 74547)));
  i3 = i4>=i3;
  
l23:
  if (i3) goto l29;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 74637)))), &_td_OOC_IR__VarDesc);
  if (i3) goto l27;
  variant = 19;
  i3=19;
  goto l32;
l27:
  variant = 18;
  i3=18;
  goto l32;
l29:
  variant = 17;
  i3=17;
  goto l32;
l31:
  variant = 16;
  i3=16;
l32:
  i5 = i3==19;
  if (!i5) goto l37;
  i5=1u;
l37:
  if (i5) goto l39;
  i5=0u;
  goto l41;
l39:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 74836))+4);
  i5 = *(OOC_UINT8*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 74846)))), &_td_OOC_SymbolTable__ArrayDesc, 74846)), 74852))+33);
  i5 = !i5;
  
l41:
  if (!i5) goto l43;
  i5 = (OOC_INT32)b;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 74916));
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 74886)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i5, 54, (OOC_Scanner_Builder_BasicList__Symbol)i6);
  return (OOC_IR__Expression)i5;
l43:
  i5 = (OOC_INT32)sym;
  OOC_IR__InitLen((OOC_IR__Len)i1, (OOC_Scanner_Builder_BasicList__Symbol)i5, i3, (OOC_IR__Expression)i0, (OOC_IR__Expression)i2, i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75157)))), OOC_IR__VisitorDesc_VisitLen)),OOC_IR__VisitorDesc_VisitLen)((OOC_IR__Visitor)i0, (OOC_IR__Len)i1);
  return;
  ;
}

static void OOC_IR__InitNegate(OOC_IR__Negate neg, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 75402))+4);
  i2 = (OOC_INT32)neg;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 75418))+8) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75787)))), OOC_IR__VisitorDesc_VisitNegate)),OOC_IR__VisitorDesc_VisitNegate)((OOC_IR__Visitor)i0, (OOC_IR__Negate)i1);
  return;
  ;
}

static void OOC_IR__InitNewBlock(OOC_IR__NewBlock _new, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression size) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)_new;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)size;
  *(OOC_INT32*)((_check_pointer(i0, 76091))+8) = i1;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76534)))), OOC_IR__VisitorDesc_VisitNewBlock)),OOC_IR__VisitorDesc_VisitNewBlock)((OOC_IR__Visitor)i0, (OOC_IR__NewBlock)i1);
  return;
  ;
}

static void OOC_IR__InitNewObject(OOC_IR__NewObject _new, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__ExpressionList length) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)_new;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)length;
  *(OOC_INT32*)((_check_pointer(i0, 76849))+8) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewNewObject(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__ExpressionList args) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_IR__ExpressionList length;
  OOC_INT32 i;

  i0 = (OOC_INT32)args;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l11;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 77190)), 0);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], (i1-1));
  length = (OOC_IR__ExpressionList)i1;
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 77228)), 0);
  i3 = 0<i2;
  if (!i3) goto l10;
  i3 = (OOC_INT32)b;
  i4=0;
l5_loop:
  i5 = _check_pointer(i1, 77250);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = _check_pointer(i0, 77277);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i9 = i4+1;
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i9, i8, OOC_UINT32, 77277))*4);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 77258)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i3, (OOC_IR__Expression)i7);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 77250))*4) = i7;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77559)))), OOC_IR__VisitorDesc_VisitNewObject)),OOC_IR__VisitorDesc_VisitNewObject)((OOC_IR__Visitor)i0, (OOC_IR__NewObject)i1);
  return;
  ;
}

static void OOC_IR__InitNot(OOC_IR__Not neg, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 77801))+4);
  i2 = (OOC_INT32)neg;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 77817))+8) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78159)))), OOC_IR__VisitorDesc_VisitNot)),OOC_IR__VisitorDesc_VisitNot)((OOC_IR__Visitor)i0, (OOC_IR__Not)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 78432))+8) = i0;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 78609)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78792)))), OOC_IR__VisitorDesc_VisitOdd)),OOC_IR__VisitorDesc_VisitOdd)((OOC_IR__Visitor)i0, (OOC_IR__Odd)i1);
  return;
  ;
}

static void OOC_IR__InitSelectField(OOC_IR__SelectField sf, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression record, OOC_SymbolTable__FieldDecl field, OOC_Scanner_Builder_BasicList__Symbol fieldSym) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)field;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79120))+40);
  i2 = (OOC_INT32)sf;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)record;
  *(OOC_INT32*)((_check_pointer(i2, 79135))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 79160))+12) = i0;
  i0 = (OOC_INT32)fieldSym;
  *(OOC_INT32*)((_check_pointer(i2, 79183))+16) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 79692)))), OOC_IR__VisitorDesc_VisitSelectField)),OOC_IR__VisitorDesc_VisitSelectField)((OOC_IR__Visitor)i0, (OOC_IR__SelectField)i1);
  return;
  ;
}

static void OOC_IR__InitSelectProc(OOC_IR__SelectProc sp, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression receiver, OOC_CHAR8 checkPointer, OOC_SymbolTable__Record recordType, OOC_SymbolTable__ProcDecl tbProc, OOC_Scanner_Builder_BasicList__Symbol tbProcSym, OOC_CHAR8 isStaticCall) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)tbProc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 80149))+52);
  i2 = (OOC_INT32)sp;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)receiver;
  *(OOC_INT32*)((_check_pointer(i2, 80170))+8) = i1;
  i1 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i2, 80200))+12) = i1;
  i1 = (OOC_INT32)recordType;
  *(OOC_INT32*)((_check_pointer(i2, 80238))+16) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 80272))+20) = i0;
  i0 = (OOC_INT32)tbProcSym;
  *(OOC_INT32*)((_check_pointer(i2, 80298))+24) = i0;
  i0 = isStaticCall;
  *(OOC_UINT8*)((_check_pointer(i2, 80330))+28) = i0;
  return;
  ;
}

OOC_IR__SelectProc OOC_IR__BuilderDesc_NewSelectProc(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression receiver, OOC_SymbolTable__Record recordType, OOC_SymbolTable__ProcDecl tbProc, OOC_Scanner_Builder_BasicList__Symbol tbProcSym, OOC_CHAR8 isStaticCall) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 80836))+16);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81170)))), OOC_IR__VisitorDesc_VisitSelectProc)),OOC_IR__VisitorDesc_VisitSelectProc)((OOC_IR__Visitor)i0, (OOC_IR__SelectProc)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 81472))+8) = i0;
  i0 = (OOC_INT32)set;
  *(OOC_INT32*)((_check_pointer(i1, 81499))+12) = i0;
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 81731))+4);
  i4 = (OOC_INT32)element;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 81702)))), OOC_IR__BuilderDesc_ValidSetElement)),OOC_IR__BuilderDesc_ValidSetElement)((OOC_IR__Builder)i1, (OOC_IR__Expression)i4, (OOC_SymbolTable__Type)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81931)))), OOC_IR__VisitorDesc_VisitSetMember)),OOC_IR__VisitorDesc_VisitSetMember)((OOC_IR__Visitor)i0, (OOC_IR__SetMember)i1);
  return;
  ;
}

static void OOC_IR__InitSetOp(OOC_IR__SetOp op, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = variant;
  *(OOC_INT8*)((_check_pointer(i0, 82228))+8) = i1;
  i1 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i0, 82255))+12) = i1;
  i1 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i0, 82276))+16) = i1;
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 82485))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 82497))+4);
  i3 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i4);
  _assert(i3, 127, 82462);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 82556))+4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82731)))), OOC_IR__VisitorDesc_VisitSetOp)),OOC_IR__VisitorDesc_VisitSetOp)((OOC_IR__Visitor)i0, (OOC_IR__SetOp)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 83051))+8) = i0;
  i0 = (OOC_INT32)to;
  *(OOC_INT32*)((_check_pointer(i1, 83075))+12) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewSetRange(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression from, OOC_IR__Expression to, OOC_CHAR8 isSet) {
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 83523)))), OOC_IR__BuilderDesc_ValidSetElement)),OOC_IR__BuilderDesc_ValidSetElement)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1, (OOC_SymbolTable__Type)i0);
  from = (OOC_IR__Expression)i1;
  i3 = (OOC_INT32)to;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 83567)))), OOC_IR__BuilderDesc_ValidSetElement)),OOC_IR__BuilderDesc_ValidSetElement)((OOC_IR__Builder)i2, (OOC_IR__Expression)i3, (OOC_SymbolTable__Type)i0);
  to = (OOC_IR__Expression)i0;
  i0=i1;
l10:
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__SetRange.baseTypes[0]);
  i2 = (OOC_INT32)to;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitSetRange((OOC_IR__SetRange)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__Expression)i2);
  return (OOC_IR__Expression)i1;
  goto l12;
l11:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)Object_Boxed__NewSet(0u);
  i3 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83372)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
l12:
  _failed_function(83130); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83867)))), OOC_IR__VisitorDesc_VisitSetRange)),OOC_IR__VisitorDesc_VisitSetRange)((OOC_IR__Visitor)i0, (OOC_IR__SetRange)i1);
  return;
  ;
}

OOC_CHAR8 OOC_IR__SetRangeDesc_IsEmpty(OOC_IR__SetRange range) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)range;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84027))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 84034)))), &_td_OOC_IR__ConstDesc, 84034)), 84040))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84027))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84059))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 84034)))), &_td_OOC_IR__ConstDesc, 84034)), 84040))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84064)))), &_td_OOC_IR__ConstDesc, 84064)), 84070))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 84047)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i2, (Object__Object)i0);
  return (i0>0);
  ;
}

OOC_CHAR8 OOC_IR__SetRangeDesc_IntersectsWith(OOC_IR__SetRange range, OOC_IR__SetRange range2) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)range;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84297))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 84301)))), &_td_OOC_IR__ConstDesc, 84301)), 84307))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84297))+12);
  i3 = (OOC_INT32)range2;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 84326))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 84301)))), &_td_OOC_IR__ConstDesc, 84301)), 84307))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 84332)))), &_td_OOC_IR__ConstDesc, 84332)), 84338))+8);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 84313)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i2, (Object__Object)i4);
  i1 = i1<0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84370))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 84376)))), &_td_OOC_IR__ConstDesc, 84376)), 84382))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84370))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 84401))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84376)))), &_td_OOC_IR__ConstDesc, 84376)), 84382))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 84405)))), &_td_OOC_IR__ConstDesc, 84405)), 84411))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 84388)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i0, (Object__Object)i2);
  i0 = i0>0;
  
  goto l4;
l3:
  i0=1u;
l4:
  return (!i0);
  ;
}

static void OOC_IR__InitShift(OOC_IR__Shift shift, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression value, OOC_IR__Expression by, OOC_CHAR8 rotate) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)value;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84706))+4);
  i2 = (OOC_INT32)shift;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 84724))+8) = i0;
  i0 = (OOC_INT32)by;
  *(OOC_INT32*)((_check_pointer(i2, 84751))+12) = i0;
  i0 = rotate;
  *(OOC_UINT8*)((_check_pointer(i2, 84772))+16) = i0;
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 85091))+16);
      i1 = (OOC_INT32)expr;
      i0 = i1!=i0;
      if (!i0) goto l14;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 85142))+4);
      i0 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i0);
      if (i0) goto l5;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 85183))+4);
      i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
      
      goto l7;
l5:
      i0=1u;
l7:
      if (i0) goto l9;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 85226))+4);
      i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 11);
      
      goto l10;
l9:
      i0=1u;
l10:
      i0 = !i0;
      if (!i0) goto l14;
      i0 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 85290));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85263)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i2);
      i0 = (OOC_INT32)Object_BigInt__NewInt(1);
      v = (Object_BigInt__BigInt)i0;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 85360));
      i3 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i0);
      i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i0);
      return (OOC_IR__Expression)i0;
l14:
      return (OOC_IR__Expression)i1;
      ;
    }


  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Shift.baseTypes[0]);
  shift = (OOC_IR__Shift)i0;
  i1 = (OOC_INT32)value;
  i1 = (OOC_INT32)OOC_IR__BuilderDesc_NewShift_AssertShiftable((OOC_IR__Expression)i1);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)by;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 85560)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i2, (OOC_IR__Expression)i3);
  i3 = (OOC_INT32)sym;
  i4 = rotate;
  OOC_IR__InitShift((OOC_IR__Shift)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85765)))), OOC_IR__VisitorDesc_VisitShift)),OOC_IR__VisitorDesc_VisitShift)((OOC_IR__Visitor)i0, (OOC_IR__Shift)i1);
  return;
  ;
}

static void OOC_IR__InitTypeCast(OOC_IR__TypeCast cast, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)cast;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 86070))+8) = i1;
  return;
  ;
}

OOC_IR__TypeCast OOC_IR__BuilderDesc_NewTypeCast(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression typeExpr, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)typeExpr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86298)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  type = (OOC_SymbolTable__Type)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 86333))+24);
  i2 = i2<0;
  if (i2) goto l3;
  i2 = (OOC_INT32)expr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 86352))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 86357))+24);
  i2 = i2<0;
  
  goto l4;
l3:
  i2=1u;
l4:
  i3 = (OOC_INT32)expr;
  if (i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 86395))+4);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 86383))+24);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 86400))+24);
  i2 = i4!=i2;
  
  goto l9;
l7:
  i2=1u;
l9:
  if (!i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 86451));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86419)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 52, (OOC_Scanner_Builder_BasicList__Symbol)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86712)))), OOC_IR__VisitorDesc_VisitTypeCast)),OOC_IR__VisitorDesc_VisitTypeCast)((OOC_IR__Visitor)i0, (OOC_IR__TypeCast)i1);
  return;
  ;
}

static void OOC_IR__InitTypeConv(OOC_IR__TypeConv conv, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)conv;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i0, 87019))+8) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeConv(OOC_IR__Builder b, OOC_SymbolTable__Type type, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__TypeConv conv;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87186))+4);
  i2 = (OOC_INT32)type;
  i1 = i1==i2;
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87301)))), &_td_OOC_IR__TypeConvDesc);
  if (i1) goto l5;
  i1=0u;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 87342))+4);
  i1 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
  
l7:
  if (!i1) goto l10;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87409)))), &_td_OOC_IR__TypeConvDesc, 87409)), 87418))+8);
  expr = (OOC_IR__Expression)i0;
  
l10:
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeConv.baseTypes[0]);
  conv = (OOC_IR__TypeConv)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 87484));
  OOC_IR__InitTypeConv((OOC_IR__TypeConv)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i0);
  return (OOC_IR__Expression)i1;
  goto l12;
l11:
  return (OOC_IR__Expression)i0;
l12:
  _failed_function(87080); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 87701)))), OOC_IR__VisitorDesc_VisitTypeConv)),OOC_IR__VisitorDesc_VisitTypeConv)((OOC_IR__Visitor)i0, (OOC_IR__TypeConv)i1);
  return;
  ;
}

OOC_CHAR8 OOC_IR__BuilderDesc_Widen(OOC_IR__Builder b, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89185))+4);
  i2 = (OOC_INT32)type;
  _assert((i1!=(OOC_INT32)0), 127, 89173);
  _assert((i2!=(OOC_INT32)0), 127, 89203);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89258))+4);
  i0 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  if (i0) goto l79;
  i0 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89383))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 89390)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l73;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89726))+4);
  i0 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  if (i0) goto l71;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89975))+4);
  i0 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i2);
  if (i0) goto l69;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90137))+4);
  i0 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i0, 16);
  if (i0) goto l11;
  i0=0u;
  goto l13;
l11:
  i0 = OOC_SymbolTable_TypeRules__IsNilCompatible((OOC_SymbolTable__Type)i2);
  
l13:
  if (i0) goto l67;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90313))+4);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 90320)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i0) goto l17;
  i0=0u;
  goto l19;
l17:
  i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i2, 12);
  
l19:
  if (i0) goto l65;
  i0 = (OOC_INT32)*expr;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 90477)))), &_td_OOC_IR__ConstDesc);
  if (i0) goto l23;
  i0=0u;
  goto l25;
l23:
  i0 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i2);
  
l25:
  if (i0) goto l27;
  i0=0u;
  goto l29;
l27:
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90557))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l29:
  if (i0) goto l31;
  i0=0u;
  goto l33;
l31:
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 90672))+4);
  i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i1);
  i0 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  
l33:
  if (i0) goto l63;
  i0 = (OOC_INT32)*expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 90838)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l37;
  i0=0u;
  goto l39;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90882))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l39:
  if (i0) goto l41;
  i0=0u;
  goto l43;
l41:
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 90915)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l43:
  if (i0) goto l45;
  i0=0u;
  goto l47;
l45:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 90965)))), &_td_OOC_SymbolTable__ArrayDesc, 90965)), 90971))+36);
  i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
  
l47:
  if (i0) goto l61;
  i0 = (OOC_INT32)*expr;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91144)))), &_td_OOC_IR__ConstDesc);
  if (i0) goto l51;
  i0=0u;
  goto l53;
l51:
  i0 = OOC_SymbolTable_TypeRules__IsObject((OOC_SymbolTable__Type)i2);
  
l53:
  if (i0) goto l55;
  i0=0u;
  goto l57;
l55:
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 91217))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l57:
  if (i0) goto l59;
  return 0u;
  goto l80;
l59:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 91332))+28);
  i2 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91316)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i1, (OOC_IR__Expression)i2);
  *expr = (OOC_IR__Expression)i0;
  return 1u;
  goto l80;
l61:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 91104)))), &_td_OOC_SymbolTable__ArrayDesc, 91104)), 91110))+36);
  i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i1);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91058)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i1);
  return i0;
  goto l80;
l63:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 90773)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 90764)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89889)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89880)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  *expr = (OOC_IR__Expression)i0;
  return 1u;
  goto l80;
l73:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 89539)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l76;
  i0=0u;
  goto l77;
l76:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89651))+4);
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__FormalPars)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 89601)))), &_td_OOC_SymbolTable__FormalParsDesc, 89601)), (OOC_SymbolTable__FormalPars)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89662)))), &_td_OOC_SymbolTable__FormalParsDesc, 89662)), 0u);
  
l77:
  return i0;
  goto l80;
l79:
  return 1u;
l80:
  _failed_function(87762); return 0;
  ;
}

OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign(OOC_IR__Builder b, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;
  OOC_IR__Expression oldExpr;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign_LengthOk();
    
    OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign_LengthOk() {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*expr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 91956))+4);
      i0 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i0);
      if (i0) goto l3;
      return 1u;
      goto l8;
l3:
      i0 = (OOC_INT32)type;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91989)))), &_td_OOC_SymbolTable__ArrayDesc, 91989)), 91995))+32);
      if (i1) goto l6;
      i1 = (OOC_INT32)*expr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92074)))), &_td_OOC_IR__ConstDesc, 92074)), 92080))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92094)))), &_td_Object_Boxed__StringDesc, 92094)), 92101));
      i1 = *(OOC_INT32*)(_check_pointer(i1, 92108));
      i0 = *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 92146)))), &_td_OOC_SymbolTable__ArrayDesc, 92146)), 92152))+44);
      return (i1<i0);
      goto l8;
l6:
      return 0u;
l8:
      _failed_function(91893); return 0;
      ;
    }


  i0 = (OOC_INT32)*expr;
  oldExpr = (OOC_IR__Expression)i0;
  i0 = (OOC_INT32)type;
  i1 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i0, 11);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92345))+4);
  i1 = OOC_SymbolTable_TypeRules__IsByteCompatible((OOC_SymbolTable__Type)i1);
  
l5:
  if (i1) goto l11;
  i1 = (OOC_INT32)b;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92364)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i0);
  if (i0) goto l9;
  i0=0u;
  goto l13;
l9:
  i0 = OOC_IR__BuilderDesc_WidenForAssign_LengthOk();
  
  goto l13;
l11:
  i0=1u;
l13:
  if (i0) goto l15;
  i0 = (OOC_INT32)oldExpr;
  *expr = (OOC_IR__Expression)i0;
  return 0u;
  goto l16;
l15:
  return 1u;
l16:
  _failed_function(91453); return 0;
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
      _failed_function(93088); return 0;
      ;
    }


  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*right;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 93623))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93605)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)left, (OOC_SymbolTable__Type)i1);
  if (i1) goto l3;
  i1 = (OOC_INT32)*left;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 93652))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93634)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)right, (OOC_SymbolTable__Type)i1);
  
  goto l5;
l3:
  i0=1u;
l5:
  if (i0) goto l21;
  i0 = (OOC_INT32)*left;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93695)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l9;
  i1=0u;
  goto l11;
l9:
  i1 = (OOC_INT32)*right;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93714)))), &_td_OOC_IR__ConstDesc);
  
l11:
  if (!i1) goto l22;
  i1 = (OOC_INT32)*right;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93756))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 93768))+4);
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_WidenToCommon_CommonBase((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  base = (OOC_SymbolTable__Type)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l22;
  i1 = (OOC_INT32)b;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93869)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)left, (OOC_SymbolTable__Type)i0);
  if (i2) goto l17;
  i0=0u;
  goto l18;
l17:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93891)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)right, (OOC_SymbolTable__Type)i0);
  
l18:
  _assert(i0, 127, 93861);
  return 1u;
  goto l22;
l21:
  return 1u;
l22:
  return 0u;
  ;
}

static void OOC_IR__MakeAssignmentCompatible(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)type;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94341)))), OOC_IR__BuilderDesc_WidenForAssign)),OOC_IR__BuilderDesc_WidenForAssign)((OOC_IR__Builder)i0, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 94382))+16);
  i2 = (OOC_INT32)*expr;
  i1 = i2!=i1;
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94406)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 24, (OOC_Scanner_Builder_BasicList__Symbol)i1);
l7:
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
  *(OOC_INT32*)((_check_pointer(i1, 94740))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeTag(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)design;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 94908))+4);
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94914)))), &_td_OOC_SymbolTable__RecordDesc));
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 94946))+4);
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94956)))), &_td_OOC_SymbolTable__RecordDesc, 94956)), 94963))+30);
  i1 = !i1;
  
  goto l5;
l3:
  i1=1u;
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 95015));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94990)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 55, (OOC_Scanner_Builder_BasicList__Symbol)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95267)))), OOC_IR__VisitorDesc_VisitTypeTag)),OOC_IR__VisitorDesc_VisitTypeTag)((OOC_IR__Visitor)i0, (OOC_IR__TypeTag)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 95724))+8) = i0;
  i0 = (OOC_INT32)referenceType;
  *(OOC_INT32*)((_check_pointer(i1, 95748))+12) = i0;
  i0 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i1, 95790))+16) = i0;
  i0 = (OOC_INT32)origExpr;
  *(OOC_INT32*)((_check_pointer(i1, 95830))+20) = i0;
  i0 = (OOC_INT32)origType;
  *(OOC_INT32*)((_check_pointer(i1, 95862))+24) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeTest(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr, OOC_IR__Expression referenceType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 96242))+4);
      type = (OOC_SymbolTable__Type)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 96264)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i2) goto l11;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 96437)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i0) goto l5;
      return 0u;
      goto l20;
l5:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 96474))+32);
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96484)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i0) goto l8;
      i0=0u;
      goto l9;
l8:
      i0 = *(OOC_UINT8*)((_check_pointer(i1, 96506))+41);
      i0 = !i0;
      
l9:
      return i0;
      goto l20;
l11:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96302)))), &_td_OOC_IR__VarDesc));
      if (i1) goto l18;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96331)))), &_td_OOC_IR__VarDesc, 96331)), 96335))+8);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 96345)))), &_td_OOC_SymbolTable__VarDeclDesc, 96345)), 96353))+50);
      if (i1) goto l16;
      i0=0u;
      goto l19;
l16:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96385)))), &_td_OOC_IR__VarDesc, 96385)), 96389))+8);
      i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96399)))), &_td_OOC_SymbolTable__VarDeclDesc, 96399)), 96407))+55);
      
      goto l19;
l18:
      i0=1u;
l19:
      return i0;
l20:
      _failed_function(96140); return 0;
      ;
    }


  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)referenceType;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96612)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  refType = (OOC_SymbolTable__Type)i2;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l26;
  i3 = (OOC_INT32)expr;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 96739))+4);
  i2 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i4);
  i2 = !i2;
  if (i2) goto l24;
  i0 = OOC_IR__BuilderDesc_NewTypeTest_HasDynamicType((OOC_IR__Expression)i3);
  i0 = !i0;
  if (i0) goto l22;
  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97165))+4);
  i2 = (OOC_INT32)refType;
  i1 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
  if (!i1) goto l9;
  i1 = (OOC_INT32)b;
  i3 = (OOC_INT32)referenceType;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 97227));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 97186)))), OOC_IR__BuilderDesc_WarnSym)),OOC_IR__BuilderDesc_WarnSym)((OOC_IR__Builder)i1, 61, (OOC_Scanner_Builder_BasicList__Symbol)i3);
l9:
  origExpr = (OOC_IR__Expression)i0;
  i1 = (OOC_INT32)sym;
  i3 = *(OOC_INT32*)((_check_pointer(i1, 97343))+16);
  i4 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__derefCheck;
  i5 = (OOC_INT32)b;
  i3 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i5, (Config_Section_Options__Option)i4, i3);
  checkPointer = i3;
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 97366)))), &_td_OOC_IR__DerefDesc);
  if (i4) goto l16;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97436))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 97443)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i4) goto l15;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 97495)))), &_td_OOC_SymbolTable__PointerDesc, 97495)), 97503))+32);
  refType = (OOC_SymbolTable__Type)i2;
  
l15:
  i4=i2;i2=i0;
  goto l17;
l16:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 97402)))), &_td_OOC_IR__DerefDesc, 97402)), 97408))+8);
  expr = (OOC_IR__Expression)i4;
  {register OOC_INT32 h0=i2;i2=i4;i4=h0;}
l17:
  i5 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeTest.baseTypes[0]);
  test = (OOC_IR__TypeTest)i5;
  i6 = (OOC_INT32)referenceType;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 97568)))), &_td_OOC_IR__TypeRefDesc);
  if (i7) goto l20;
  typeRef = (OOC_IR__TypeRef)(OOC_INT32)0;
  i6=(OOC_INT32)0;
  goto l21;
l20:
  i6 = _type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 97618)))), &_td_OOC_IR__TypeRefDesc, 97618);
  typeRef = (OOC_IR__TypeRef)i6;
  
l21:
  OOC_IR__InitTypeTest((OOC_IR__TypeTest)i5, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i2, (OOC_SymbolTable__Record)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 97723)))), &_td_OOC_SymbolTable__RecordDesc, 97723)), i3, (OOC_IR__Expression)i0, (OOC_IR__TypeRef)i6);
  return (OOC_IR__Expression)i5;
  goto l27;
l22:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 97115));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 97085)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 43, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l27;
l24:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 96809));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96766)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 17, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l27;
l26:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 96684))+16);
  return (OOC_IR__Expression)i0;
l27:
  _failed_function(95930); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 97985)))), OOC_IR__VisitorDesc_VisitTypeTest)),OOC_IR__VisitorDesc_VisitTypeTest)((OOC_IR__Visitor)i0, (OOC_IR__TypeTest)i1);
  return;
  ;
}

static void OOC_IR__InitTypeGuard(OOC_IR__TypeGuard guard, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, OOC_IR__TypeTest test, OOC_CHAR8 checkPointer, OOC_CHAR8 checkType) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)guard;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)type;
  OOC_IR__InitOperator((OOC_IR__Operator)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)test;
  *(OOC_INT32*)((_check_pointer(i0, 98359))+8) = i1;
  i1 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i0, 98384))+12) = i1;
  i1 = checkType;
  *(OOC_UINT8*)((_check_pointer(i0, 98425))+13) = i1;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeGuard(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression design, OOC_IR__TypeRef ref) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SymbolTable__Type guardType;
  OOC_IR__Expression test;
  OOC_IR__TypeGuard guard;

  i0 = (OOC_INT32)ref;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 98702))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 98713)))), &_td_OOC_SymbolTable__TypeDeclDesc, 98713)), 98722))+40);
  guardType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)design;
  i4 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 98733)))), OOC_IR__BuilderDesc_CheckFunctionOp)),OOC_IR__BuilderDesc_CheckFunctionOp)((OOC_IR__Builder)i2, (OOC_IR__Expression)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 98775)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i3, (OOC_IR__Expression)i0);
  test = (OOC_IR__Expression)i0;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 98817)))), &_td_OOC_IR__TypeTestDesc);
  if (i3) goto l3;
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeGuard.baseTypes[0]);
  guard = (OOC_IR__TypeGuard)i3;
  i5 = *(OOC_INT32*)((_check_pointer(i4, 98968))+16);
  i6 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__derefCheck;
  i5 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i6, i5);
  i6 = *(OOC_INT32*)((_check_pointer(i4, 99036))+16);
  i7 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__typeGuard;
  i2 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i7, i6);
  OOC_IR__InitTypeGuard((OOC_IR__TypeGuard)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i1, (OOC_IR__TypeTest)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 98896)))), &_td_OOC_IR__TypeTestDesc, 98896)), i5, i2);
  return (OOC_IR__Expression)i3;
l4:
  _failed_function(98497); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 99268)))), OOC_IR__VisitorDesc_VisitTypeGuard)),OOC_IR__VisitorDesc_VisitTypeGuard)((OOC_IR__Visitor)i0, (OOC_IR__TypeGuard)i1);
  return;
  ;
}

static void OOC_IR__InitReference(OOC_IR__Reference ref, OOC_Scanner_Builder_BasicList__Symbol name, OOC_SymbolTable__Type type, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)ref;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)type;
  OOC_IR__InitExpression((OOC_IR__Expression)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i0, 99592))+8) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 100105))+24);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 100324)))), OOC_IR__VisitorDesc_VisitModuleRef)),OOC_IR__VisitorDesc_VisitModuleRef)((OOC_IR__Visitor)i0, (OOC_IR__ModuleRef)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 101050)))), OOC_IR__VisitorDesc_VisitPredefProc)),OOC_IR__VisitorDesc_VisitPredefProc)((OOC_IR__Visitor)i0, (OOC_IR__PredefProc)i1);
  return;
  ;
}

static void OOC_IR__InitProcedureRef(OOC_IR__ProcedureRef procRef, OOC_Scanner_Builder_BasicList__Symbol name, OOC_SymbolTable__ProcDecl decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 101337))+52);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 101779)))), OOC_IR__VisitorDesc_VisitProcedureRef)),OOC_IR__VisitorDesc_VisitProcedureRef)((OOC_IR__Visitor)i0, (OOC_IR__ProcedureRef)i1);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102290))+20);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 102500)))), OOC_IR__VisitorDesc_VisitTypeRef)),OOC_IR__VisitorDesc_VisitTypeRef)((OOC_IR__Visitor)i0, (OOC_IR__TypeRef)i1);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102952))+40);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 103126)))), OOC_IR__VisitorDesc_VisitVar)),OOC_IR__VisitorDesc_VisitVar)((OOC_IR__Visitor)i0, (OOC_IR__Var)i1);
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

  i0 = (OOC_INT32)assert;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)predicate;
  *(OOC_INT32*)((_check_pointer(i0, 103709))+8) = i1;
  i1 = code;
  *(OOC_INT32*)((_check_pointer(i0, 103745))+12) = i1;
  i1 = disabled;
  *(OOC_UINT8*)((_check_pointer(i0, 103771))+16) = i1;
  return;
  ;
}

OOC_IR__Assert OOC_IR__BuilderDesc_NewAssert(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression predicate, OOC_IR__Expression code, OOC_CHAR8 disabled) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_IR__Assert assert;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Assert.baseTypes[0]);
  assert = (OOC_IR__Assert)i0;
  i1 = (OOC_INT32)predicate;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l4;
  i2 = (OOC_INT32)b;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 104070)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1);
  predicate = (OOC_IR__Expression)i1;
  
l4:
  i2 = (OOC_INT32)code;
  i3 = i2==(OOC_INT32)0;
  if (i3) goto l7;
  i3 = (OOC_INT32)b;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 104189)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i3, (OOC_IR__Expression)i2, 0, 128);
  
  goto l8;
l7:
  i2=127;
l8:
  i3 = (OOC_INT32)sym;
  i4 = disabled;
  OOC_IR__InitAssert((OOC_IR__Assert)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i1, i2, i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104498)))), OOC_IR__VisitorDesc_VisitAssert)),OOC_IR__VisitorDesc_VisitAssert)((OOC_IR__Visitor)i0, (OOC_IR__Assert)i1);
  return;
  ;
}

void OOC_IR__InitAssignment(OOC_IR__Assignment assignment, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression variable, OOC_IR__Expression value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)assignment;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)variable;
  *(OOC_INT32*)((_check_pointer(i0, 104827))+8) = i1;
  i1 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i0, 104865))+12) = i1;
  return;
  ;
}

void OOC_IR__BuilderDesc_AssertVar(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 104993));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 105006))+4);
  i2 = OOC_SymbolTable_TypeRules__IsReadOnlyType((OOC_SymbolTable__Module)i2, (OOC_SymbolTable__Type)i3);
  if (i2) goto l36;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105089)))), &_td_OOC_IR__VarDesc);
  if (i2) goto l23;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105359)))), &_td_OOC_IR__DerefDesc);
  if (i2) goto l37;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105439)))), &_td_OOC_IR__IndexDesc);
  if (i2) goto l20;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105535)))), &_td_OOC_IR__SelectFieldDesc);
  if (i2) goto l15;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 105761)))), &_td_OOC_IR__TypeGuardDesc);
  if (i2) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 105898));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105871)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 29, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  goto l37;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 105801))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 105807))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105785)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  goto l37;
l15:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 105578))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105561)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 105666))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 105652));
  i2 = OOC_SymbolTable_TypeRules__IsReadOnly((OOC_SymbolTable__Module)i3, (OOC_SymbolTable__Declaration)i2);
  if (!i2) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 105723))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105691)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  goto l37;
l20:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 105476))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105459)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  goto l37;
l23:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 105139))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 105125));
  i2 = OOC_SymbolTable_TypeRules__IsReadOnly((OOC_SymbolTable__Module)i3, (OOC_SymbolTable__Declaration)i2);
  if (i2) goto l33;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 105222))+8);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 105228)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i2) goto l28;
  i2=0u;
  goto l30;
l28:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 105250))+8);
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 105260)))), &_td_OOC_SymbolTable__VarDeclDesc, 105260)), 105268))+53);
  
l30:
  if (!i2) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 105327));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105296)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 42, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  goto l37;
l33:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 105195));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105163)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  goto l37;
l36:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 105057));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105025)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_Builder_BasicList__Symbol)i1);
l37:
  return;
  ;
}

OOC_IR__Statement OOC_IR__BuilderDesc_NewAssignment(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression variable, OOC_IR__Expression value) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)variable;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106123)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 106200))+4);
  i3 = (OOC_INT32)sym;
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (void*)(OOC_INT32)&value, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)value;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 106239))+4);
  i2 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i2);
  if (i2) goto l11;
  i2 = (OOC_INT32)value;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 106459))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 106466)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i4) goto l5;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 106489))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 106496)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l7;
l5:
  i4=1u;
l7:
  if (i4) goto l9;
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Assignment.baseTypes[0]);
  OOC_IR__InitAssignment((OOC_IR__Assignment)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2);
  return (OOC_IR__Statement)i0;
  goto l12;
l9:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106591)))), OOC_IR__BuilderDesc_NewCopy)),OOC_IR__BuilderDesc_NewCopy)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
  return (OOC_IR__Statement)i0;
  goto l12;
l11:
  i2 = (OOC_INT32)value;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106412)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i1, 0);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106403)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106332)))), OOC_IR__BuilderDesc_NewCopyString)),OOC_IR__BuilderDesc_NewCopyString)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1, (OOC_IR__Expression)i4);
  return (OOC_IR__Statement)i0;
l12:
  _failed_function(105967); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106941)))), OOC_IR__VisitorDesc_VisitAssignment)),OOC_IR__VisitorDesc_VisitAssignment)((OOC_IR__Visitor)i0, (OOC_IR__Assignment)i1);
  return;
  ;
}

static void OOC_IR__InitAssignOp(OOC_IR__AssignOp ao, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)op;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107183)))), &_td_OOC_IR__BinaryArithDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107254)))), &_td_OOC_IR__ChangeElementDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107250)))), 107250);
  goto l8;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107306))+12);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)ao;
  OOC_IR__InitAssignment((OOC_IR__Assignment)i3, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
  goto l8;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107233))+12);
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107468)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__AssignOp.baseTypes[0]);
  OOC_IR__InitAssignOp((OOC_IR__AssignOp)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i0);
  return (OOC_IR__Expression)i2;
  goto l4;
l3:
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107493))+16);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(107371); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107801)))), OOC_IR__VisitorDesc_VisitAssignOp)),OOC_IR__VisitorDesc_VisitAssignOp)((OOC_IR__Visitor)i0, (OOC_IR__AssignOp)i1);
  return;
  ;
}

static void OOC_IR__InitCall(OOC_IR__Call call, OOC_IR__Expression design, OOC_IR__ExpressionList arguments, OOC_SymbolTable__VarDeclArray formalPars) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)design;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 108112));
  i2 = (OOC_INT32)call;
  OOC_IR__InitStatement((OOC_IR__Statement)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108134))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 108145)))), &_td_OOC_SymbolTable__FormalParsDesc, 108145)), 108156))+36);
  i1 = i1!=0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108254))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 108265)))), &_td_OOC_SymbolTable__FormalParsDesc, 108265)), 108276))+36);
  *(OOC_INT32*)((_check_pointer(i2, 108238))+4) = i1;
l4:
  *(OOC_INT32*)((_check_pointer(i2, 108306))+8) = i0;
  i0 = (OOC_INT32)arguments;
  *(OOC_INT32*)((_check_pointer(i2, 108334))+12) = i0;
  i0 = (OOC_INT32)formalPars;
  *(OOC_INT32*)((_check_pointer(i2, 108368))+16) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108548)))), OOC_IR__VisitorDesc_VisitCall)),OOC_IR__VisitorDesc_VisitCall)((OOC_IR__Visitor)i0, (OOC_IR__Call)i1);
  return;
  ;
}

static void OOC_IR__InitCopy(OOC_IR__Copy cp, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_CHAR8 checkDynamicType) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)cp;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i0, 108847))+8) = i1;
  i1 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i0, 108873))+12) = i1;
  i1 = checkDynamicType;
  *(OOC_UINT8*)((_check_pointer(i0, 108895))+16) = i1;
  return;
  ;
}

OOC_IR__Copy OOC_IR__BuilderDesc_NewCopy(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewCopy_HasDynamicType(OOC_IR__Expression dest);
    
    OOC_CHAR8 OOC_IR__BuilderDesc_NewCopy_HasDynamicType(OOC_IR__Expression dest) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)dest;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109163))+4);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 109170)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 109191))+4);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 109201)))), &_td_OOC_SymbolTable__RecordDesc, 109201)), 109208))+30);
      
l5:
      if (!i1) goto l14;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109245)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l12;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109303)))), &_td_OOC_IR__VarDesc);
      if (!i1) goto l14;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109338)))), &_td_OOC_IR__VarDesc, 109338)), 109342))+8);
      i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109353)))), &_td_OOC_SymbolTable__VarDeclDesc, 109353)), 109361))+50);
      return i0;
      goto l14;
l12:
      return 1u;
l14:
      return 0u;
      ;
    }


  i0 = (OOC_INT32)dest;
  i0 = OOC_IR__BuilderDesc_NewCopy_HasDynamicType((OOC_IR__Expression)i0);
  if (i0) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)sym;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 109562))+16);
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__typeGuard;
  i0 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i1, (Config_Section_Options__Option)i2, i0);
  
l4:
  i1 = (OOC_INT32)source;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Copy.baseTypes[0]);
  i3 = (OOC_INT32)sym;
  i4 = (OOC_INT32)dest;
  OOC_IR__InitCopy((OOC_IR__Copy)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i1, (OOC_IR__Expression)i4, i0);
  return (OOC_IR__Copy)i2;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109806)))), OOC_IR__VisitorDesc_VisitCopy)),OOC_IR__VisitorDesc_VisitCopy)((OOC_IR__Visitor)i0, (OOC_IR__Copy)i1);
  return;
  ;
}

static void OOC_IR__InitCopyParameter(OOC_IR__CopyParameter cp, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Var param) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)cp;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)param;
  *(OOC_INT32*)((_check_pointer(i0, 110069))+8) = i1;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110493)))), OOC_IR__VisitorDesc_VisitCopyParameter)),OOC_IR__VisitorDesc_VisitCopyParameter)((OOC_IR__Visitor)i0, (OOC_IR__CopyParameter)i1);
  return;
  ;
}

static void OOC_IR__InitCopyString(OOC_IR__CopyString cp, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression maxLength) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)cp;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i0, 110807))+8) = i1;
  i1 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i0, 110833))+12) = i1;
  i1 = (OOC_INT32)maxLength;
  *(OOC_INT32*)((_check_pointer(i0, 110855))+16) = i1;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111126)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 111173))+4);
  i2 = OOC_SymbolTable_TypeRules__IsArrayOfChar((OOC_SymbolTable__Type)i2, 1u);
  i2 = !i2;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 111229));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111198)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l3:
  i2 = (OOC_INT32)source;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 111265)))), &_td_OOC_IR__ConstDesc);
  if (i3) goto l9;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 111735))+4);
  i2 = OOC_SymbolTable_TypeRules__IsArrayOfChar((OOC_SymbolTable__Type)i2, 1u);
  i2 = !i2;
  if (!i2) goto l14;
  i2 = (OOC_INT32)source;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 111793));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111760)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  goto l14;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 111522))+4);
  i2 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i2);
  baseChar = (OOC_SymbolTable__Type)i2;
  i3 = i2==0;
  if (i3) goto l12;
  i2 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i2);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111637)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)&source, (OOC_SymbolTable__Type)i2);
  ok = i2;
  goto l14;
l12:
  i2 = (OOC_INT32)source;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 111604));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111571)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l14:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CopyString.baseTypes[0]);
  cp = (OOC_IR__CopyString)i2;
  i3 = (OOC_INT32)maxLength;
  i4 = (OOC_INT32)source;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111872)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 112084)))), OOC_IR__VisitorDesc_VisitCopyString)),OOC_IR__VisitorDesc_VisitCopyString)((OOC_IR__Visitor)i0, (OOC_IR__CopyString)i1);
  return;
  ;
}

void OOC_IR__InitExit(OOC_IR__Exit exit, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)exit;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  *(OOC_INT32*)((_check_pointer(i0, 112321))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 112344))+12) = 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 112681)))), OOC_IR__VisitorDesc_VisitExit)),OOC_IR__VisitorDesc_VisitExit)((OOC_IR__Visitor)i0, (OOC_IR__Exit)i1);
  return;
  ;
}

static void OOC_IR__InitForStatm(OOC_IR__ForStatm forStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression var, OOC_IR__Expression start, OOC_IR__Expression end, OOC_IR__Expression step, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)forStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)var;
  *(OOC_INT32*)((_check_pointer(i0, 113040))+8) = i1;
  i1 = (OOC_INT32)start;
  *(OOC_INT32*)((_check_pointer(i0, 113066))+12) = i1;
  i1 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i0, 113096))+16) = i1;
  i1 = (OOC_INT32)step;
  *(OOC_INT32*)((_check_pointer(i0, 113122))+20) = i1;
  i1 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i0, 113150))+24) = i1;
  return;
  ;
}

OOC_IR__ForStatm OOC_IR__BuilderDesc_NewForStatm(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression var, OOC_IR__Expression start, OOC_IR__Expression end, OOC_IR__Expression step, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)step;
  i0 = i0==(OOC_INT32)0;
  if (!i0) goto l3;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(4);
  i2 = (OOC_INT32)Object_BigInt__NewInt(1);
  i3 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 113454)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  step = (OOC_IR__Expression)i0;
l3:
  i0 = (OOC_INT32)var;
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 113557)))), &_td_OOC_IR__VarDesc));
  if (i1) goto l21;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 113643))+4);
  i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (i1) goto l19;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 113726))+4);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 113708)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)&step, (OOC_SymbolTable__Type)i2);
  i2 = !i2;
  if (i2) goto l17;
  i2 = (OOC_INT32)start;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 113851))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 113834));
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (void*)(OOC_INT32)&start, (OOC_SymbolTable__Type)i3);
  i2 = (OOC_INT32)end;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 113913))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 113898));
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (void*)(OOC_INT32)&end, (OOC_SymbolTable__Type)i3);
  i2 = (OOC_INT32)step;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 113937)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  step = (OOC_IR__Expression)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 113990))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  if (i2) goto l12;
  i2=0u;
  goto l14;
l12:
  i2 = (OOC_INT32)Object_BigInt__zero;
  i3 = (OOC_INT32)step;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 114032)))), &_td_OOC_IR__ConstDesc, 114032)), 114038))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 114021)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i2, (Object__Object)i3);
  i2 = i2==0;
  
l14:
  if (!i2) goto l22;
  i2 = (OOC_INT32)step;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 114092));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 114066)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 31, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  goto l22;
l17:
  i2 = (OOC_INT32)step;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 113777));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 113746)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 30, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  goto l22;
l19:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 113688));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 113663)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 19, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  goto l22;
l21:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 113603));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 113577)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 29, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l22:
  i1 = (OOC_INT32)body;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ForStatm.baseTypes[0]);
  i3 = (OOC_INT32)start;
  i4 = (OOC_INT32)end;
  i5 = (OOC_INT32)step;
  i6 = (OOC_INT32)sym;
  OOC_IR__InitForStatm((OOC_IR__ForStatm)i2, (OOC_Scanner_Builder_BasicList__Symbol)i6, (OOC_IR__Expression)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i5, (OOC_IR__StatementSeq)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 114407)))), OOC_IR__VisitorDesc_VisitForStatm)),OOC_IR__VisitorDesc_VisitForStatm)((OOC_IR__Visitor)i0, (OOC_IR__ForStatm)i1);
  return;
  ;
}

static void OOC_IR__InitIfStatm(OOC_IR__IfStatm ifStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ifStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i0, 114742))+8) = i1;
  i1 = (OOC_INT32)pathTrue;
  *(OOC_INT32*)((_check_pointer(i0, 114771))+12) = i1;
  i1 = (OOC_INT32)pathFalse;
  *(OOC_INT32*)((_check_pointer(i0, 114806))+16) = i1;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 115088)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 115326)))), OOC_IR__VisitorDesc_VisitIfStatm)),OOC_IR__VisitorDesc_VisitIfStatm)((OOC_IR__Visitor)i0, (OOC_IR__IfStatm)i1);
  return;
  ;
}

static void OOC_IR__InitCase(OOC_IR__Case _case, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__CaseLabels labels, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_case;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)labels;
  *(OOC_INT32*)((_check_pointer(i0, 115628))+8) = i1;
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 115656))+12) = i1;
  return;
  ;
}

OOC_IR__Case OOC_IR__BuilderDesc_NewCase(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__CaseLabels labels, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  OOC_IR__SetRange range;

  i0 = (OOC_INT32)labels;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 115923)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT32)b;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 115952);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 115952))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 115956)))), &_td_OOC_IR__SetRangeDesc, 115956);
  range = (OOC_IR__SetRange)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 116008))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 115988)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  *(OOC_INT32*)((_check_pointer(i4, 115978))+8) = i5;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 116056))+12);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 116036)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  *(OOC_INT32*)((_check_pointer(i4, 116028))+12) = i5;
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 116304)))), OOC_IR__VisitorDesc_VisitCase)),OOC_IR__VisitorDesc_VisitCase)((OOC_IR__Visitor)i0, (OOC_IR__Case)i1);
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
      i4 = _check_pointer(i1, 116762);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 116762))*4);
      i4 = i4!=(OOC_INT32)0;
      if (i4) goto l6;
      i4=0u;
      goto l8;
l6:
      i4 = _check_pointer(i1, 116802);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 116802))*4);
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 116780)))), OOC_IR__SetRangeDesc_IntersectsWith)),OOC_IR__SetRangeDesc_IntersectsWith)((OOC_IR__SetRange)i2, (OOC_IR__SetRange)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 116806)))), &_td_OOC_IR__SetRangeDesc, 116806)));
      
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 116986))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 116994)), 0);
  i = 0;
  i1 = 0<i0;
  if (!i1) goto l44;
  i1 = !0u;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)_case;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 117021))+8);
  i4 = _check_pointer(i4, 117029);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 117029))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 117033)))), &_td_OOC_IR__SetRangeDesc, 117033);
  range = (OOC_IR__SetRange)i4;
  i5 = (OOC_INT32)b;
  i6 = (OOC_INT32)type;
  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 117055)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i5, (void*)((_check_pointer(i4, 117069))+8), (OOC_SymbolTable__Type)i6);
  i7 = !i7;
  if (i7) goto l38;
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 117234)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i5, (void*)((_check_pointer(i4, 117248))+12), (OOC_SymbolTable__Type)i6);
  i6 = !i6;
  if (i6) goto l36;
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 117412)))), OOC_IR__SetRangeDesc_IsEmpty)),OOC_IR__SetRangeDesc_IsEmpty)((OOC_IR__SetRange)i4);
  if (i4) goto l34;
  inUse = 0u;
  j = 0;
  i2 = (OOC_INT32)caseList;
  i2 = _check_pointer(i2, 117608);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT32, 117608))*4);
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
  i4 = _check_pointer(i3, 117682);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 117682))*4);
  i3 = _check_pointer(i3, 117743);
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i5, OOC_UINT32, 117743))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 117746))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 117685))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 117754)), 0);
  i4 = (OOC_INT32)range;
  i2 = OOC_IR__CaseDesc_CheckLabels_IntersectsWith((OOC_IR__SetRange)i4, (OOC_IR__CaseLabels)i3, i2);
  i3 = j;
  inUse = i2;
  i3 = i3+1;
  j = i3;
  i4 = (OOC_INT32)caseList;
  i4 = _check_pointer(i4, 117608);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 117608))*4);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 117844))+8);
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
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 117922));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 117891)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 28, (OOC_Scanner_Builder_BasicList__Symbol)i3);
  goto l39;
l34:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 117499))+8);
  i3 = _check_pointer(i3, 117507);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 117507))*4) = 0;
  deleted = (i5+1);
  goto l39;
l36:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 117307))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 117311));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 117274)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i5, 27, (OOC_Scanner_Builder_BasicList__Symbol)i4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 117331))+8);
  i3 = _check_pointer(i3, 117339);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 117339))*4) = 0;
  deleted = (i5+1);
  goto l39;
l38:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 117130))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 117136));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 117097)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i5, 27, (OOC_Scanner_Builder_BasicList__Symbol)i4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 117156))+8);
  i3 = _check_pointer(i3, 117164);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 117164))*4) = 0;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 118015))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 118023)), 0);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseLabels.baseTypes[0], (i2-i0));
  _new = (OOC_IR__CaseLabels)i0;
  j = (-1);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 118079)), 0);
  i3 = 0<i2;
  if (!i3) goto l59;
  i3=(-1);i4=0;
l49_loop:
  
l50_loop:
  i3 = i3+1;
  j = i3;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 118140))+8);
  i5 = _check_pointer(i5, 118148);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 118148))*4);
  i5 = i5!=0;
  if (!i5) goto l50_loop;
l54:
  i5 = _check_pointer(i0, 118171);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 118182))+8);
  i7 = _check_pointer(i7, 118190);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i3, i8, OOC_UINT32, 118190))*4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 118171))*4) = i7;
  i4 = i4+1;
  i = i4;
  i5 = i4<i2;
  if (i5) goto l49_loop;
l59:
  *(OOC_INT32*)((_check_pointer(i1, 118216))+8) = i0;
l60:
  return;
  ;
}

static void OOC_IR__InitCaseStatm(OOC_IR__CaseStatm caseStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression select, OOC_IR__CaseList caseList, OOC_IR__StatementSeq _default, OOC_CHAR8 checkMatch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)caseStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)select;
  *(OOC_INT32*)((_check_pointer(i0, 118624))+8) = i1;
  i1 = (OOC_INT32)caseList;
  *(OOC_INT32*)((_check_pointer(i0, 118657))+12) = i1;
  i1 = (OOC_INT32)_default;
  *(OOC_INT32*)((_check_pointer(i0, 118694))+16) = i1;
  i1 = checkMatch;
  *(OOC_UINT8*)((_check_pointer(i0, 118729))+20) = i1;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 119058))+4);
  i2 = OOC_SymbolTable_TypeRules__IsValidCaseSelector((OOC_SymbolTable__Type)i2);
  i2 = !i2;
  if (i2) goto l11;
  i2 = (OOC_INT32)caseList;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 119165)), 0);
  i4 = 0<i3;
  if (!i4) goto l12;
  i4 = (OOC_INT32)b;
  i5=0;
l5_loop:
  i6 = _check_pointer(i2, 119189);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 119189))*4);
  i7 = _check_pointer(i2, 119189);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 119216))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i5, i8, OOC_UINT32, 119189))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 119192)))), OOC_IR__CaseDesc_CheckLabels)),OOC_IR__CaseDesc_CheckLabels)((OOC_IR__Case)i7, (OOC_IR__Builder)i4, (OOC_SymbolTable__Type)i9, (OOC_IR__CaseList)i2);
  i5 = i5+1;
  i = i5;
  i6 = i5<i3;
  if (i6) goto l5_loop;
  goto l12;
l11:
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 119115));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 119078)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 26, (OOC_Scanner_Builder_BasicList__Symbol)i3);
l12:
  i2 = (OOC_INT32)sym;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 119386))+16);
  i4 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__caseSelectCheck;
  i5 = (OOC_INT32)b;
  i3 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i5, (Config_Section_Options__Option)i4, i3);
  i4 = (OOC_INT32)_default;
  i5 = (OOC_INT32)caseList;
  OOC_IR__InitCaseStatm((OOC_IR__CaseStatm)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__CaseList)i5, (OOC_IR__StatementSeq)i4, i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 119602)))), OOC_IR__VisitorDesc_VisitCaseStatm)),OOC_IR__VisitorDesc_VisitCaseStatm)((OOC_IR__Visitor)i0, (OOC_IR__CaseStatm)i1);
  return;
  ;
}

static void OOC_IR__InitLoopStatm(OOC_IR__LoopStatm loopStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)loopStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i0, 119919))+8) = i1;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 120387)))), OOC_IR__VisitorDesc_VisitLoopStatm)),OOC_IR__VisitorDesc_VisitLoopStatm)((OOC_IR__Visitor)i0, (OOC_IR__LoopStatm)i1);
  return;
  ;
}

static void OOC_IR__InitMoveBlock(OOC_IR__MoveBlock move, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression size) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)move;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i0, 120701))+8) = i1;
  i1 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i0, 120729))+12) = i1;
  i1 = (OOC_INT32)size;
  *(OOC_INT32*)((_check_pointer(i0, 120753))+16) = i1;
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
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 121037)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i3 = (OOC_INT32)dest;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 121081)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i3);
  i4 = (OOC_INT32)size;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 121123)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 121338)))), OOC_IR__VisitorDesc_VisitMoveBlock)),OOC_IR__VisitorDesc_VisitMoveBlock)((OOC_IR__Visitor)i0, (OOC_IR__MoveBlock)i1);
  return;
  ;
}

static void OOC_IR__InitRaise(OOC_IR__Raise raise, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression exception) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)raise;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)exception;
  *(OOC_INT32*)((_check_pointer(i0, 121604))+8) = i1;
  return;
  ;
}

OOC_IR__Raise OOC_IR__BuilderDesc_NewRaise(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression exception) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)exception;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 121789))+4);
  i1 = OOC_SymbolTable_TypeRules__IsException((OOC_SymbolTable__Type)i1);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 121928));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 121897)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 62, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Raise)0;
  goto l4;
l3:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Raise.baseTypes[0]);
  OOC_IR__InitRaise((OOC_IR__Raise)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i0);
  return (OOC_IR__Raise)i2;
l4:
  _failed_function(121671); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 122120)))), OOC_IR__VisitorDesc_VisitRaise)),OOC_IR__VisitorDesc_VisitRaise)((OOC_IR__Visitor)i0, (OOC_IR__Raise)i1);
  return;
  ;
}

static void OOC_IR__InitRepeatStatm(OOC_IR__RepeatStatm repeatStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__StatementSeq body, OOC_IR__Expression exitCondition) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)repeatStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i0, 122470))+8) = i1;
  i1 = (OOC_INT32)exitCondition;
  *(OOC_INT32*)((_check_pointer(i0, 122501))+12) = i1;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 122825)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 123082)))), OOC_IR__VisitorDesc_VisitRepeatStatm)),OOC_IR__VisitorDesc_VisitRepeatStatm)((OOC_IR__Visitor)i0, (OOC_IR__RepeatStatm)i1);
  return;
  ;
}

static void OOC_IR__InitReturn(OOC_IR__Return _return, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression result) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_return;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)result;
  *(OOC_INT32*)((_check_pointer(i0, 123360))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 123390))+12) = 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 123787)))), OOC_IR__VisitorDesc_VisitReturn)),OOC_IR__VisitorDesc_VisitReturn)((OOC_IR__Visitor)i0, (OOC_IR__Return)i1);
  return;
  ;
}

static void OOC_IR__InitCatchClause(OOC_IR__CatchClause _catch, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type exceptionType, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_catch;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)exceptionType;
  *(OOC_INT32*)((_check_pointer(i0, 124143))+8) = i1;
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 124185))+12) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 124217))+16) = 0u;
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
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 124488)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  type = (OOC_SymbolTable__Type)i3;
  i4 = OOC_SymbolTable_TypeRules__IsException((OOC_SymbolTable__Type)i3);
  i4 = !i4;
  if (!i4) goto l4;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 124584));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 124553)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 62, (OOC_Scanner_Builder_BasicList__Symbol)i4);
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 124636));
  i2 = (OOC_INT32)statmSeq;
  OOC_IR__InitCatchClause((OOC_IR__CatchClause)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i3, (OOC_IR__StatementSeq)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 124865)))), OOC_IR__VisitorDesc_VisitCatchClause)),OOC_IR__VisitorDesc_VisitCatchClause)((OOC_IR__Visitor)i0, (OOC_IR__CatchClause)i1);
  return;
  ;
}

static void OOC_IR__InitTryStatm(OOC_IR__TryStatm tryStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__StatementSeq statmSeq, OOC_IR__CatchList catchList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)tryStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 125089))+8) = i1;
  i1 = (OOC_INT32)catchList;
  *(OOC_INT32*)((_check_pointer(i0, 125124))+12) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 125161))+16) = (OOC_INT32)0;
  return;
  ;
}

OOC_IR__TryStatm OOC_IR__BuilderDesc_NewTryStatm(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__StatementSeq statmSeq, OOC_IR__CatchList catchList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT32)catchList;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 125436)), 0);
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
  i4 = _check_pointer(i0, 125507);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 125507))*4);
  i5 = _check_pointer(i0, 125575);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT32, 125575))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 125510))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 125578))+8);
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
  i5 = _check_pointer(i0, 125507);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 125507))*4);
  i6 = _check_pointer(i0, 125575);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 125575))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 125510))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 125578))+8);
  i5 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i6);
  i5 = !i5;
  
l16:
  if (i5) goto l11_loop;
l20:
  i4 = i3!=i4;
  if (!i4) goto l23;
  i4 = _check_pointer(i0, 125691);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 125691))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 125694));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 125655)))), OOC_IR__BuilderDesc_WarnSym)),OOC_IR__BuilderDesc_WarnSym)((OOC_IR__Builder)i2, 65, (OOC_Scanner_Builder_BasicList__Symbol)i4);
  i4 = _check_pointer(i0, 125718);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 125718))*4);
  *(OOC_UINT8*)((_check_pointer(i4, 125721))+16) = 1u;
l23:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l28:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)statmSeq;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TryStatm.baseTypes[0]);
  OOC_IR__InitTryStatm((OOC_IR__TryStatm)i3, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__StatementSeq)i2, (OOC_IR__CatchList)i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 126069)))), OOC_IR__VisitorDesc_VisitTryStatm)),OOC_IR__VisitorDesc_VisitTryStatm)((OOC_IR__Visitor)i0, (OOC_IR__TryStatm)i1);
  return;
  ;
}

static void OOC_IR__InitWhileStatm(OOC_IR__WhileStatm whileStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)whileStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i0, 126410))+8) = i1;
  i1 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i0, 126442))+12) = i1;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 126725)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 126972)))), OOC_IR__VisitorDesc_VisitWhileStatm)),OOC_IR__VisitorDesc_VisitWhileStatm)((OOC_IR__Visitor)i0, (OOC_IR__WhileStatm)i1);
  return;
  ;
}

static void OOC_IR__InitWithStatm(OOC_IR__WithStatm withStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse, OOC_CHAR8 checkMatch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)withStatm;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitStatement((OOC_IR__Statement)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i0, 127371))+8) = i1;
  i1 = (OOC_INT32)pathTrue;
  *(OOC_INT32*)((_check_pointer(i0, 127402))+12) = i1;
  i1 = (OOC_INT32)pathFalse;
  *(OOC_INT32*)((_check_pointer(i0, 127439))+16) = i1;
  i1 = checkMatch;
  *(OOC_UINT8*)((_check_pointer(i0, 127478))+20) = i1;
  return;
  ;
}

OOC_IR__WithStatm OOC_IR__BuilderDesc_NewWithStatm(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 127810))+16);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 128127)))), OOC_IR__VisitorDesc_VisitWithStatm)),OOC_IR__VisitorDesc_VisitWithStatm)((OOC_IR__Visitor)i0, (OOC_IR__WithStatm)i1);
  return;
  ;
}

void OOC_IR__BuilderDesc_CheckExit(OOC_IR__Builder b, OOC_SymbolTable__ProcDecl procDecl, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0;
  OOC_IR__LoopStatm currentLoop;
  OOC_IR__TryStatm currentTry;
  OOC_INT32 enclosingTry;
  OOC_INT32 enclosingTryLastLoop;
  auto void OOC_IR__BuilderDesc_CheckExit_CheckException(OOC_SymbolTable__Type exception, OOC_Scanner_Builder_BasicList__Symbol sym);
  auto void OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq(OOC_IR__StatementSeq statmSeq);
    
    void OOC_IR__BuilderDesc_CheckExit_CheckException(OOC_SymbolTable__Type exception, OOC_Scanner_Builder_BasicList__Symbol sym) {
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129138))+12);
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 129148)), 0);
      i3 = 0<i2;
      if (!i3) goto l17;
      i3=0;
l6_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129189))+12);
      i4 = _check_pointer(i4, 129199);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 129199))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 129202))+8);
      i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i4, (OOC_SymbolTable__Type)i1);
      if (!i4) goto l9;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129279))+12);
      i4 = _check_pointer(i4, 129289);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 129289))*4);
      *(OOC_UINT8*)((_check_pointer(i4, 129292))+16) = 1u;
l9:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129401))+12);
      i4 = _check_pointer(i4, 129411);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 129411))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 129414))+8);
      i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i4);
      if (!i4) goto l12;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129450))+12);
      i4 = _check_pointer(i4, 129460);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 129460))*4);
      *(OOC_UINT8*)((_check_pointer(i4, 129463))+16) = 1u;
      return;
l12:
      i3 = i3+1;
      i = i3;
      i4 = i3<i2;
      if (i4) goto l6_loop;
l17:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129542))+16);
      _try = (OOC_IR__TryStatm)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l22:
      i0 = (OOC_INT32)procDecl;
      i2 = i0!=(OOC_INT32)0;
      if (!i2) goto l36;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129632))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129643))+52);
      raises = (OOC_SymbolTable__ExceptionNameArray)i0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 129684)), 0);
      i = 0;
      i3 = 0<i2;
      if (!i3) goto l36;
      i3=0;
l27_loop:
      i4 = _check_pointer(i0, 129739);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 129739))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 129742))+16);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129867))+4);
      i0 = i0==(OOC_INT32)0;
      
      goto l41;
l39:
      i0=1u;
l41:
      if (i0) goto l43;
      i0 = (OOC_INT32)b;
      i2 = (OOC_INT32)sym;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129978)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 63, (OOC_Scanner_Builder_BasicList__Symbol)i2);
      goto l44;
l43:
      i0 = (OOC_INT32)b;
      i2 = (OOC_INT32)sym;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129917)))), OOC_IR__BuilderDesc_WarnSym)),OOC_IR__BuilderDesc_WarnSym)((OOC_IR__Builder)i0, 64, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l44:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 130048)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i1);
      module = (OOC_SymbolTable__Module)i0;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 130066))+32);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130126))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 130131))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130126))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130131))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 130135)), 0);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 130066))+32);
      i0 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i4, 130135)), i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 130076)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i2, "module", 7, (Msg__StringPtr)i0);
      i0 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130147))+32);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 130208))+20);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 130219))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 130224))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 130208))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 130219))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 130224))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130147))+32);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 130228)), 0);
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i3, 130228)), i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 130157)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i1);
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130565)))), &_td_OOC_IR__ConstDesc);
          if (i1) goto l148;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130614)))), &_td_OOC_IR__AbsDesc);
          if (i1) goto l146;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130672)))), &_td_OOC_IR__AdrDesc);
          if (i1) goto l144;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130729)))), &_td_OOC_IR__AshDesc);
          if (i1) goto l142;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130816)))), &_td_OOC_IR__BinaryArithDesc);
          if (i1) goto l140;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130912)))), &_td_OOC_IR__BooleanOpDesc);
          if (i1) goto l138;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131006)))), &_td_OOC_IR__CapDesc);
          if (i1) goto l136;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131064)))), &_td_OOC_IR__CompareDesc);
          if (i1) goto l134;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131156)))), &_td_OOC_IR__ConcatDesc);
          if (i1) goto l124;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131285)))), &_td_OOC_IR__ChangeElementDesc);
          if (i1) goto l122;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131384)))), &_td_OOC_IR__DerefDesc);
          if (i1) goto l120;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131444)))), &_td_OOC_IR__EntierDesc);
          if (i1) goto l118;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131505)))), &_td_OOC_IR__IndexDesc);
          if (i1) goto l116;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131596)))), &_td_OOC_IR__LenDesc);
          if (i1) goto l114;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131652)))), &_td_OOC_IR__NegateDesc);
          if (i1) goto l112;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131713)))), &_td_OOC_IR__NewBlockDesc);
          if (i1) goto l110;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131773)))), &_td_OOC_IR__NewObjectDesc);
          if (i1) goto l97;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131962)))), &_td_OOC_IR__NotDesc);
          if (i1) goto l95;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132020)))), &_td_OOC_IR__OddDesc);
          if (i1) goto l93;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132078)))), &_td_OOC_IR__ReferenceDesc);
          if (i1) goto l148;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132131)))), &_td_OOC_IR__SelectFieldDesc);
          if (i1) goto l90;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132196)))), &_td_OOC_IR__SelectProcDesc);
          if (i1) goto l88;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132262)))), &_td_OOC_IR__SetMemberDesc);
          if (i1) goto l86;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132357)))), &_td_OOC_IR__SetOpDesc);
          if (i1) goto l84;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132447)))), &_td_OOC_IR__SetRangeDesc);
          if (i1) goto l82;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132537)))), &_td_OOC_IR__ShiftDesc);
          if (i1) goto l80;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132625)))), &_td_OOC_IR__TypeCastDesc);
          if (i1) goto l78;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132685)))), &_td_OOC_IR__TypeConvDesc);
          if (i1) goto l76;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132745)))), &_td_OOC_IR__TypeTagDesc);
          if (i1) goto l74;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132806)))), &_td_OOC_IR__TypeTestDesc);
          if (i1) goto l72;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132866)))), &_td_OOC_IR__TypeGuardDesc);
          if (i1) goto l70;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132938)))), &_td_OOC_IR__CallDesc);
          if (i1) goto l68;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132932)))), 132932);
          goto l148;
l68:
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm((OOC_IR__Statement)i0);
          goto l148;
l70:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132905))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l72:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132844))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l74:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132782))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l76:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132723))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l78:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132663))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l80:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132572))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132605))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l82:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132485))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132517))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l84:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132392))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132424))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l86:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132301))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132336))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l88:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132236))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l90:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132172))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l93:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132053))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l95:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131995))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l97:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131806))+8);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l148;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131860))+8);
          i = 0;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 131867)), 0);
          i2 = 0<i1;
          if (!i2) goto l148;
          i2=0;
l102_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131903))+8);
          i3 = _check_pointer(i3, 131910);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 131910))*4);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l102_loop;
          goto l148;
l110:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131751))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l112:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131688))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l114:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131629))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l116:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131540))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131573))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l118:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131480))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l120:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131419))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l122:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131328))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131359))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l124:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131200))+8);
          i = 0;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 131208)), 0);
          i2 = 0<i1;
          if (!i2) goto l148;
          i2=0;
l127_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131242))+8);
          i3 = _check_pointer(i3, 131250);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 131250))*4);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l127_loop;
          goto l148;
l134:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131101))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131133))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l136:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131039))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l138:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130951))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130983))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l140:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130857))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130889))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l142:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130762))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130795))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l144:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130705))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l146:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130647))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
l148:
          return;
          ;
        }

        
        void OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm(OOC_IR__Statement statm) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_INT32 i;
          OOC_SymbolTable__FormalPars fpars;
          OOC_IR__LoopStatm oldLoop;
          OOC_INT32 oldEnclTryLastLoop;

          i0 = (OOC_INT32)statm;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133216)))), &_td_OOC_IR__AssertDesc);
          if (i1) goto l128;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133281)))), &_td_OOC_IR__AssignmentDesc);
          if (i1) goto l126;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133423)))), &_td_OOC_IR__CallDesc);
          if (i1) goto l108;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133781)))), &_td_OOC_IR__CopyDesc);
          if (i1) goto l106;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133874)))), &_td_OOC_IR__CopyParameterDesc);
          if (i1) goto l129;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133932)))), &_td_OOC_IR__CopyStringDesc);
          if (i1) goto l103;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134031)))), &_td_OOC_IR__ExitDesc);
          if (i1) goto l97;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134292)))), &_td_OOC_IR__ForStatmDesc);
          if (i1) goto l95;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134491)))), &_td_OOC_IR__IfStatmDesc);
          if (i1) goto l93;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134640)))), &_td_OOC_IR__CaseDesc);
          if (i1) goto l91;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134708)))), &_td_OOC_IR__CaseStatmDesc);
          if (i1) goto l81;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134940)))), &_td_OOC_IR__LoopStatmDesc);
          if (i1) goto l79;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 135265)))), &_td_OOC_IR__MoveBlockDesc);
          if (i1) goto l77;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 135363)))), &_td_OOC_IR__RaiseDesc);
          if (i1) goto l75;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 135486)))), &_td_OOC_IR__RepeatStatmDesc);
          if (i1) goto l73;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 135599)))), &_td_OOC_IR__ReturnDesc);
          if (i1) goto l56;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 136341)))), &_td_OOC_IR__TryStatmDesc);
          if (i1) goto l43;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 136884)))), &_td_OOC_IR__WhileStatmDesc);
          if (i1) goto l41;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 136988)))), &_td_OOC_IR__WithStatmDesc);
          if (i1) goto l39;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 136981)))), 136981);
          goto l129;
l39:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 137028))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 137067))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 137110))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l41:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 136925))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 136964))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l43:
          i1 = (OOC_INT32)procDecl;
          i2 = enclosingTry;
          *(OOC_UINT8*)((_check_pointer(i1, 136373))+64) = 1u;
          enclosingTry = (i2+1);
          i1 = (OOC_INT32)currentTry;
          *(OOC_INT32*)((_check_pointer(i0, 136439))+16) = i1;
          currentTry = (OOC_IR__TryStatm)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 136528))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 136569))+16);
          i2 = enclosingTry;
          currentTry = (OOC_IR__TryStatm)i1;
          enclosingTry = (i2-1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 136646))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 136656)), 0);
          i = 0;
          i2 = 0<i1;
          if (!i2) goto l129;
          i2=0;
l46_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 136685))+12);
          i3 = _check_pointer(i3, 136695);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 136695))*4);
          i3 = *(OOC_UINT8*)((_check_pointer(i3, 136698))+16);
          i3 = !i3;
          if (!i3) goto l49;
          i3 = (OOC_INT32)b;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 136761))+12);
          i4 = _check_pointer(i4, 136771);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 136771))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 136774));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 136729)))), OOC_IR__BuilderDesc_WarnSym)),OOC_IR__BuilderDesc_WarnSym)((OOC_IR__Builder)i3, 66, (OOC_Scanner_Builder_BasicList__Symbol)i4);
l49:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 136829))+12);
          i3 = _check_pointer(i3, 136839);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 136839))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 136842))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l46_loop;
          goto l129;
l56:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135636))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)procDecl;
          i2 = i1==0;
          if (i2) goto l59;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 135701))+52);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 135713))+36);
          i2 = i2==0;
          
          goto l61;
l59:
          i2=1u;
l61:
          if (i2) goto l67;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135990))+8);
          i2 = i2==0;
          if (i2) goto l65;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 136135))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 136213))+52);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 136225))+36);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 136143));
          i3 = (OOC_INT32)b;
          OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i2, (void*)((_check_pointer(i0, 136155))+8), (OOC_SymbolTable__Type)i1);
          goto l71;
l65:
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 136062));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 136026)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 33, (OOC_Scanner_Builder_BasicList__Symbol)i2);
          goto l71;
l67:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135815))+8);
          i1 = i1!=0;
          if (!i1) goto l71;
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135884))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 135892));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 135851)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 32, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l71:
          i1 = enclosingTry;
          *(OOC_INT32*)((_check_pointer(i0, 136287))+12) = i1;
          goto l129;
l73:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135533))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135567))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l129;
l75:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135399))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135442))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 135452))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 135464));
          OOC_IR__BuilderDesc_CheckExit_CheckException((OOC_SymbolTable__Type)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
          goto l129;
l77:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135305))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135340))+12);
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135153))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          enclosingTryLastLoop = i2;
          currentLoop = (OOC_IR__LoopStatm)i1;
          goto l129;
l81:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134748))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134792))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 134802)), 0);
          i = 0;
          i2 = 0<i1;
          if (!i2) goto l89;
          i2=0;
l84_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134842))+12);
          i3 = _check_pointer(i3, 134852);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 134852))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 134855))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l84_loop;
l89:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134913))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l91:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134680))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l93:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134529))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134568))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134611))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l95:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134331))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134363))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134397))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134429))+20);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134467))+24);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l97:
          i1 = (OOC_INT32)currentLoop;
          i2 = i1==0;
          if (i2) goto l100;
          *(OOC_INT32*)((_check_pointer(i0, 134164))+8) = i1;
          goto l101;
l100:
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 134124));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 134092)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 25, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l101:
          i1 = enclosingTry;
          i2 = enclosingTryLastLoop;
          *(OOC_INT32*)((_check_pointer(i0, 134217))+12) = (i1-i2);
          goto l129;
l103:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133973))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134008))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l129;
l106:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133816))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133851))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l129;
l108:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133458))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133501))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 133511)), 0);
          i = 0;
          i2 = 0<i1;
          if (!i2) goto l116;
          i2=0;
l111_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133546))+12);
          i3 = _check_pointer(i3, 133556);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 133556))*4);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i3);
          i2 = i2+1;
          i = i2;
          i3 = i2<i1;
          if (i3) goto l111_loop;
l116:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133612))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 133619))+4);
          i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 133629)))), &_td_OOC_SymbolTable__FormalParsDesc, 133629);
          fpars = (OOC_SymbolTable__FormalPars)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 133675))+52);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 133682)), 0);
          i = 0;
          i3 = 0<i2;
          if (!i3) goto l129;
          i3=0;
l119_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 133722))+52);
          i4 = _check_pointer(i4, 133729);
          i5 = OOC_ARRAY_LENGTH(i4, 0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 133729))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 133732))+16);
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 133744));
          OOC_IR__BuilderDesc_CheckExit_CheckException((OOC_SymbolTable__Type)i4, (OOC_Scanner_Builder_BasicList__Symbol)i5);
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l119_loop;
          goto l129;
l126:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133363))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133400))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l129;
l128:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133253))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
l129:
          return;
          ;
        }


      i0 = (OOC_INT32)statmSeq;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l11;
      i = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 137240)), 0);
      i1 = 0<i0;
      if (!i1) goto l11;
      i1=0;
l5_loop:
      i2 = (OOC_INT32)statmSeq;
      i2 = _check_pointer(i2, 137278);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 137278))*4);
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

void OOC_IR__InitProcedure(OOC_IR__Procedure p, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__ProcDecl decl, OOC_IR__StatementSeq statmSeq, OOC_Scanner_Builder_BasicList__Symbol endOfProc, OOC_CHAR8 checkFunctionResult) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)p;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitNode((OOC_IR__Node)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)decl;
  *(OOC_INT32*)((_check_pointer(i0, 137750))+4) = i1;
  i1 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i0, 137771))+8) = i1;
  i1 = (OOC_INT32)endOfProc;
  *(OOC_INT32*)((_check_pointer(i0, 137800))+16) = i1;
  i1 = checkFunctionResult;
  *(OOC_UINT8*)((_check_pointer(i0, 137831))+12) = i1;
  return;
  ;
}

OOC_IR__Procedure OOC_IR__BuilderDesc_NewProcedure(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__ProcDecl decl, OOC_IR__StatementSeq statmSeq, OOC_Scanner_Builder_BasicList__Symbol endOfProc, OOC_CHAR8 hasBegin) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
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
          i1 = i0==(OOC_INT32)0;
          if (!i1) goto l4;
          i0 = (OOC_INT32)ADT_ArrayList__New(4);
          newStatm = (ADT_ArrayList__ArrayList)i0;
          
l4:
          i1 = (OOC_INT32)statm;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 138893)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
          return;
          ;
        }

        
        OOC_IR__StatementSeq OOC_IR__BuilderDesc_NewProcedure_AddSetupCode_Prepend(ADT_ArrayList__ArrayList prefix, OOC_IR__StatementSeq statmSeq) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
          OOC_IR__StatementSeq _new;
          OOC_INT32 i;

          i0 = (OOC_INT32)prefix;
          i1 = (OOC_INT32)statmSeq;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 139119))+4);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 139139)), 0);
          i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], (i2+i3));
          _new = (OOC_IR__StatementSeq)i2;
          i = 0;
          i3 = *(OOC_INT32*)((_check_pointer(i0, 139172))+4);
          i4 = 0<i3;
          if (!i4) goto l8;
          i4=0;
l3_loop:
          i5 = _check_pointer(i2, 139197);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 139210));
          i7 = _check_pointer(i7, 139217);
          i8 = OOC_ARRAY_LENGTH(i7, 0);
          i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 139217))*4);
          *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 139197))*4) = (_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 139221)))), &_td_OOC_IR__StatementDesc, 139221));
          i4 = i4+1;
          i = i4;
          i5 = i4<i3;
          if (i5) goto l3_loop;
l8:
          i = 0;
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 139280)), 0);
          i4 = 0<i3;
          if (!i4) goto l16;
          i4=0;
l11_loop:
          i5 = _check_pointer(i2, 139301);
          i6 = *(OOC_INT32*)((_check_pointer(i0, 139310))+4);
          i7 = OOC_ARRAY_LENGTH(i5, 0);
          i8 = _check_pointer(i1, 139329);
          i9 = OOC_ARRAY_LENGTH(i8, 0);
          i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 139329))*4);
          *(OOC_INT32*)(i5+(_check_index((i4+i6), i7, OOC_UINT32, 139301))*4) = i8;
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 139446))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 139458))+44);
      formalPars = (OOC_SymbolTable__VarDeclArray)i0;
      fparIndex = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 139559)), 0);
      i0 = 0!=i0;
      if (!i0) goto l11;
      i0=0;
l3_loop:
      i1 = (OOC_INT32)formalPars;
      i1 = _check_pointer(i1, 139592);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 139592))*4);
      fpar = (OOC_SymbolTable__VarDecl)i0;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 139620))+52);
      if (!i1) goto l6;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 139687)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)(OOC_INT32)0, (OOC_SymbolTable__VarDecl)i0);
      i2 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 139661)))), OOC_IR__BuilderDesc_NewCopyParameter)),OOC_IR__BuilderDesc_NewCopyParameter)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Var)i0);
      OOC_IR__BuilderDesc_NewProcedure_AddSetupCode_AddStatm((OOC_IR__Statement)i0);
l6:
      i0 = fparIndex;
      i0 = i0+1;
      fparIndex = i0;
      i1 = (OOC_INT32)formalPars;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 139559)), 0);
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
      _failed_function(138237); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)sym;
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 139930))+42);
  if (i3) goto l3;
  i3=0u;
  goto l5;
l3:
  i3 = hasBegin;
  
l5:
  if (!i3) goto l7;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 139965)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 57, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l7:
  i3 = (OOC_INT32)statmSeq;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 140012)))), OOC_IR__BuilderDesc_CheckExit)),OOC_IR__BuilderDesc_CheckExit)((OOC_IR__Builder)i1, (OOC_SymbolTable__ProcDecl)i0, (OOC_IR__StatementSeq)i3);
  p = (OOC_IR__Procedure)((OOC_INT32)RT0__NewObject(_td_OOC_IR__Procedure.baseTypes[0]));
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewProcedure_AddSetupCode((OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__ProcDecl)i0, (OOC_IR__StatementSeq)i3);
  statmSeq = (OOC_IR__StatementSeq)i0;
  i1 = (OOC_INT32)decl;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 140275))+16);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 140281));
  i3 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__functionResultCheck;
  i4 = (OOC_INT32)b;
  i2 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i4, (Config_Section_Options__Option)i3, i2);
  i3 = (OOC_INT32)endOfProc;
  i4 = (OOC_INT32)p;
  i5 = (OOC_INT32)sym;
  OOC_IR__InitProcedure((OOC_IR__Procedure)i4, (OOC_Scanner_Builder_BasicList__Symbol)i5, (OOC_SymbolTable__ProcDecl)i1, (OOC_IR__StatementSeq)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 140481)))), OOC_IR__VisitorDesc_VisitProcedure)),OOC_IR__VisitorDesc_VisitProcedure)((OOC_IR__Visitor)i0, (OOC_IR__Procedure)i1);
  return;
  ;
}

void OOC_IR__InitModule(OOC_IR__Module m, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_Scanner_InputBuffer__CharArray name, OOC_IR__ProcedureList procList, OOC_IR__Procedure moduleBody) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)sym;
  OOC_IR__InitNode((OOC_IR__Node)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i0, 140781))+4) = i1;
  i1 = (OOC_INT32)procList;
  *(OOC_INT32*)((_check_pointer(i0, 140802))+8) = i1;
  i1 = (OOC_INT32)moduleBody;
  *(OOC_INT32*)((_check_pointer(i0, 140831))+12) = i1;
  return;
  ;
}

OOC_IR__Module OOC_IR__BuilderDesc_NewModule(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_Scanner_InputBuffer__CharArray name, OOC_SymbolTable__Module decl, OOC_IR__ProcedureList procList, OOC_IR__StatementSeq statmSeq, OOC_Scanner_Builder_BasicList__Symbol endOfModule) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_IR__Module m;
  auto void OOC_IR__BuilderDesc_NewModule_UnusedDeclarations(OOC_SymbolTable__Item item);
    
    void OOC_IR__BuilderDesc_NewModule_UnusedDeclarations(OOC_SymbolTable__Item item) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Item nested;

      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141272)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l30;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 141519))+36);
      i1 = i1==0;
      if (i1) goto l5;
      i1=0u;
      goto l7;
l5:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 141554))+24);
      i1 = i1==0;
      
l7:
      if (i1) goto l9;
      i1=0u;
      goto l15;
l9:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141610)))), &_td_OOC_SymbolTable__VarDeclDesc));
      if (i1) goto l12;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141639)))), &_td_OOC_SymbolTable__VarDeclDesc, 141639)), 141647))+48);
      i1 = !i1;
      
      goto l15;
l12:
      i1=1u;
l15:
      if (i1) goto l17;
      i1=0u;
      goto l27;
l17:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141682)))), &_td_OOC_SymbolTable__ProcDeclDesc));
      if (i1) goto l24;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141725)))), &_td_OOC_SymbolTable__ProcDeclDesc, 141725)), 141734))+41);
      if (i1) goto l22;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141775)))), &_td_OOC_SymbolTable__ProcDeclDesc, 141775)), 141784))+40);
      
      goto l23;
l22:
      i1=1u;
l23:
      i1 = !i1;
      
      goto l27;
l24:
      i1=1u;
l27:
      if (!i1) goto l30;
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141848))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 141815)))), OOC_IR__BuilderDesc_WarnName)),OOC_IR__BuilderDesc_WarnName)((OOC_IR__Builder)i1, 53, (OOC_SymbolTable__Name)i2);
l30:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 141932))+8);
      nested = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l38;
l33_loop:
      OOC_IR__BuilderDesc_NewModule_UnusedDeclarations((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 142036));
      nested = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l33_loop;
l38:
      return;
      ;
    }


  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Module.baseTypes[0]);
  m = (OOC_IR__Module)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)decl;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 142192))+72);
  i4 = (OOC_INT32)sym;
  i5 = (OOC_INT32)statmSeq;
  i6 = (OOC_INT32)endOfModule;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 142167)))), OOC_IR__BuilderDesc_NewProcedure)),OOC_IR__BuilderDesc_NewProcedure)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__ProcDecl)i3, (OOC_IR__StatementSeq)i5, (OOC_Scanner_Builder_BasicList__Symbol)i6, 1u);
  i5 = (OOC_INT32)name;
  i6 = (OOC_INT32)procList;
  OOC_IR__InitModule((OOC_IR__Module)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_Scanner_InputBuffer__CharArray)i5, (OOC_IR__ProcedureList)i6, (OOC_IR__Procedure)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 142276))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 142276))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142284)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142515)))), OOC_IR__VisitorDesc_VisitModule)),OOC_IR__VisitorDesc_VisitModule)((OOC_IR__Visitor)i0, (OOC_IR__Module)i1);
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 142933)), 0);
      i2 = 0<i1;
      if (!i2) goto l10;
      i2=0;
l5_loop:
      i3 = _check_pointer(i0, 142954);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      OOC_IR__ModuleDesc_Destroy_E((void*)(i3+(_check_index(i2, i4, OOC_UINT32, 142954))*4));
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
      if (!i1) goto l135;
      *(OOC_INT32*)((_check_pointer(i0, 143130))+4) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143158)))), &_td_OOC_IR__ConstDesc);
      if (i1) goto l133;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143206)))), &_td_OOC_IR__OperatorDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145421)))), &_td_OOC_IR__ReferenceDesc);
      if (i1) goto l13;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145472)))), &_td_OOC_IR__StatementDesc);
      if (i1) goto l11;
      Log__Type("--- expression type: ", 22, (void*)i0);
      _assert(0u, 127, 145609);
      goto l134;
l11:
      OOC_IR__ModuleDesc_Destroy_S((void*)(OOC_INT32)n);
      goto l134;
l13:
      *(OOC_INT32*)((_check_pointer(i0, 145447))+8) = (OOC_INT32)0;
      goto l134;
l15:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143236)))), &_td_OOC_IR__AbsDesc);
      if (i1) goto l130;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143284)))), &_td_OOC_IR__AdrDesc);
      if (i1) goto l128;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143331)))), &_td_OOC_IR__AshDesc);
      if (i1) goto l126;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143399)))), &_td_OOC_IR__BinaryArithDesc);
      if (i1) goto l124;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143476)))), &_td_OOC_IR__BooleanOpDesc);
      if (i1) goto l122;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143551)))), &_td_OOC_IR__CapDesc);
      if (i1) goto l120;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143599)))), &_td_OOC_IR__CompareDesc);
      if (i1) goto l118;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143672)))), &_td_OOC_IR__ConcatDesc);
      if (i1) goto l116;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143727)))), &_td_OOC_IR__ChangeElementDesc);
      if (i1) goto l114;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143807)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l112;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143889)))), &_td_OOC_IR__EntierDesc);
      if (i1) goto l110;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143940)))), &_td_OOC_IR__IndexDesc);
      if (i1) goto l108;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144012)))), &_td_OOC_IR__LenDesc);
      if (i1) goto l106;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144114)))), &_td_OOC_IR__NegateDesc);
      if (i1) goto l104;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144165)))), &_td_OOC_IR__NewBlockDesc);
      if (i1) goto l102;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144215)))), &_td_OOC_IR__NewObjectDesc);
      if (i1) goto l100;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144272)))), &_td_OOC_IR__NotDesc);
      if (i1) goto l98;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144320)))), &_td_OOC_IR__OddDesc);
      if (i1) goto l96;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144368)))), &_td_OOC_IR__SelectFieldDesc);
      if (i1) goto l94;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144482)))), &_td_OOC_IR__SelectProcDesc);
      if (i1) goto l92;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144632)))), &_td_OOC_IR__SetMemberDesc);
      if (i1) goto l90;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144708)))), &_td_OOC_IR__SetOpDesc);
      if (i1) goto l88;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144779)))), &_td_OOC_IR__SetRangeDesc);
      if (i1) goto l86;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144850)))), &_td_OOC_IR__ShiftDesc);
      if (i1) goto l84;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144919)))), &_td_OOC_IR__TypeCastDesc);
      if (i1) goto l82;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144969)))), &_td_OOC_IR__TypeConvDesc);
      if (i1) goto l80;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145019)))), &_td_OOC_IR__TypeTagDesc);
      if (i1) goto l78;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145070)))), &_td_OOC_IR__TypeTestDesc);
      if (i1) goto l76;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145214)))), &_td_OOC_IR__TypeGuardDesc);
      if (i1) goto l74;
      Log__Type("--- operator type: ", 20, (void*)i0);
      _assert(0u, 127, 145380);
      goto l134;
l74:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145250))+8);
      expr = (OOC_IR__Expression)i0;
      OOC_IR__ModuleDesc_Destroy_E((void*)(OOC_INT32)&expr);
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 145291))+8) = (OOC_INT32)0;
      goto l134;
l76:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145099))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 145120))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145158))+20));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 145183))+24) = (OOC_INT32)0;
      goto l134;
l78:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145047))+8));
      goto l134;
l80:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144998))+8));
      goto l134;
l82:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144948))+8));
      goto l134;
l84:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144876))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144900))+12));
      goto l134;
l86:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144808))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144831))+12));
      goto l134;
l88:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144734))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144757))+16));
      goto l134;
l90:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144662))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144688))+12));
      goto l134;
l92:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144513))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 144538))+16) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 144571))+20) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 144600))+24) = (OOC_INT32)0;
      goto l134;
l94:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144400))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 144423))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 144451))+16) = (OOC_INT32)0;
      goto l134;
l96:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144344))+8));
      goto l134;
l98:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144296))+8));
      goto l134;
l100:
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 144249))+8));
      goto l134;
l102:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144194))+8));
      goto l134;
l104:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144141))+8));
      goto l134;
l106:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144036))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144060))+20));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 144090))+16) = 0;
      goto l134;
l108:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143966))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143990))+12));
      goto l134;
l110:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143916))+8));
      goto l134;
l112:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143833))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 143857))+12) = (OOC_INT32)0;
      goto l134;
l114:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143761))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143783))+16));
      goto l134;
l116:
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 143703))+8));
      goto l134;
l118:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143627))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143650))+16));
      goto l134;
l120:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143575))+8));
      goto l134;
l122:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143506))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143529))+16));
      goto l134;
l124:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143431))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143454))+16));
      goto l134;
l126:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143355))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143379))+12));
      goto l134;
l128:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143308))+8));
      goto l134;
l130:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143260))+8));
      goto l134;
l133:
      *(OOC_INT32*)((_check_pointer(i0, 143180))+8) = (OOC_INT32)0;
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
      i = 0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 145805)), 0);
      i2 = 0<i1;
      if (!i2) goto l11;
      i2=0;
l5_loop:
      i3 = _check_pointer(i0, 145826);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      OOC_IR__ModuleDesc_Destroy_S((void*)(i3+(_check_index(i2, i4, OOC_UINT32, 145826))*4));
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145981)))), &_td_OOC_IR__AssertDesc);
      if (i1) goto l91;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146053)))), &_td_OOC_IR__AssignmentDesc);
      if (i1) goto l89;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146127)))), &_td_OOC_IR__CallDesc);
      if (i1) goto l87;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146232)))), &_td_OOC_IR__CopyDesc);
      if (i1) goto l85;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146297)))), &_td_OOC_IR__CopyParameterDesc);
      if (i1) goto l83;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146353)))), &_td_OOC_IR__CopyStringDesc);
      if (i1) goto l81;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146450)))), &_td_OOC_IR__ExitDesc);
      if (i1) goto l79;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146496)))), &_td_OOC_IR__ForStatmDesc);
      if (i1) goto l77;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146628)))), &_td_OOC_IR__IfStatmDesc);
      if (i1) goto l75;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146731)))), &_td_OOC_IR__CaseStatmDesc);
      if (i1) goto l64;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147014)))), &_td_OOC_IR__LoopStatmDesc);
      if (i1) goto l62;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147064)))), &_td_OOC_IR__MoveBlockDesc);
      if (i1) goto l60;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147155)))), &_td_OOC_IR__RaiseDesc);
      if (i1) goto l58;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147203)))), &_td_OOC_IR__RepeatStatmDesc);
      if (i1) goto l56;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147285)))), &_td_OOC_IR__ReturnDesc);
      if (i1) goto l54;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147331)))), &_td_OOC_IR__TryStatmDesc);
      if (i1) goto l43;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147559)))), &_td_OOC_IR__WhileStatmDesc);
      if (i1) goto l41;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147632)))), &_td_OOC_IR__WithStatmDesc);
      if (i1) goto l39;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 147629)))), 147629);
      goto l92;
l39:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 147660))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 147685))+12));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 147713))+16));
      goto l92;
l41:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 147588))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 147613))+12));
      goto l92;
l43:
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 147361))+8));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147402))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 147412)), 0);
      i = 0;
      i2 = 0<i1;
      if (!i2) goto l52;
      i2=0;
l47_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147433))+12);
      i0 = _check_pointer(i0, 147443);
      i3 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i3, OOC_UINT32, 147443))*4);
      *(OOC_INT32*)((_check_pointer(i0, 147446))+4) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147478))+12);
      i3 = _check_pointer(i3, 147488);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 147488))*4);
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i3, 147491))+12));
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l47_loop;
l52:
      *(OOC_INT32*)((_check_pointer(i0, 147529))+12) = (OOC_INT32)0;
      goto l92;
l54:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 147310))+8));
      goto l92;
l56:
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 147236))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 147257))+12));
      goto l92;
l58:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 147179))+8));
      goto l92;
l60:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 147092))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 147115))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 147136))+16));
      goto l92;
l62:
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 147045))+8));
      goto l92;
l64:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146759))+8));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146798))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 146807)), 0);
      i = 0;
      i2 = 0<i1;
      if (!i2) goto l73;
      i2=0;
l68_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146828))+12);
      i0 = _check_pointer(i0, 146837);
      i3 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i3, OOC_UINT32, 146837))*4);
      *(OOC_INT32*)((_check_pointer(i0, 146840))+8) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146874))+12);
      i3 = _check_pointer(i3, 146883);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 146883))*4);
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i3, 146886))+12));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146911))+12);
      i3 = _check_pointer(i3, 146920);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 146920))*4) = (OOC_INT32)0;
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l68_loop;
l73:
      *(OOC_INT32*)((_check_pointer(i0, 146958))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 146992))+16));
      goto l92;
l75:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146654))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 146679))+12));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 146707))+16));
      goto l92;
l77:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146523))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146543))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146565))+16));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146585))+20));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 146609))+24));
      goto l92;
l79:
      *(OOC_INT32*)((_check_pointer(i0, 146471))+8) = (OOC_INT32)0;
      goto l92;
l81:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146382))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146405))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146426))+16));
      goto l92;
l83:
      *(OOC_INT32*)((_check_pointer(i0, 146327))+8) = (OOC_INT32)0;
      goto l92;
l85:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146255))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146278))+12));
      goto l92;
l87:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146150))+8));
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 146177))+12));
      *(OOC_INT32*)((_check_pointer(i0, 146201))+16) = (OOC_INT32)0;
      goto l92;
l89:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146082))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146107))+12));
      goto l92;
l91:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146006))+8));
      *(OOC_INT32*)((_check_pointer(i0, 146030))+12) = 0;
l92:
      *n = (OOC_IR__Statement)(OOC_INT32)0;
l93:
      return;
      ;
    }


  i0 = (OOC_INT32)m;
  *(OOC_INT32*)((_check_pointer(i0, 147795))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147832))+8);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 147841)), 0);
  i2 = 0<i1;
  if (!i2) goto l9;
  i2=0;
l4_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147856))+8);
  i3 = _check_pointer(i3, 147865);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 147865))*4);
  *(OOC_INT32*)((_check_pointer(i3, 147868))+4) = (OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147894))+8);
  i0 = _check_pointer(i0, 147903);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i3, OOC_UINT32, 147903))*4);
  OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 147906))+8));
  i0 = (OOC_INT32)m;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147925))+8);
  i2 = _check_pointer(i2, 147934);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = i;
  *(OOC_INT32*)(i2+(_check_index(i4, i3, OOC_UINT32, 147934))*4) = (OOC_INT32)0;
  i2 = i4+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l4_loop;
l9:
  *(OOC_INT32*)((_check_pointer(i0, 147960))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 147984))+12);
  *(OOC_INT32*)((_check_pointer(i1, 147995))+4) = (OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 148019))+12);
  OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 148030))+8));
  i0 = (OOC_INT32)m;
  *(OOC_INT32*)((_check_pointer(i0, 148047))+12) = (OOC_INT32)0;
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
  *(OOC_INT32*)(_check_pointer(i0, 148345)) = i1;
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
  *(OOC_INT32*)(_check_pointer(i0, 149197)) = i1;
  i1 = (OOC_INT32)pragmaHistory;
  *(OOC_INT32*)((_check_pointer(i0, 149222))+4) = i1;
  i1 = (OOC_INT32)errList;
  *(OOC_INT32*)((_check_pointer(i0, 149261))+8) = i1;
  i1 = (OOC_INT32)OOC_Scanner_Builder_BasicList__NewSymbol((OOC_Scanner_InputBuffer__CharArray)0, (-1));
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(17);
  i3 = (OOC_INT32)Object_Boxed__false;
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i3);
  *(OOC_INT32*)((_check_pointer(i0, 149288))+16) = i1;
  i1 = (OOC_INT32)OOC_IR__InitBuilder_NewTypeType((OOC_SymbolTable__Item)0, (OOC_SymbolTable__Position)0);
  *(OOC_INT32*)((_check_pointer(i0, 149452))+20) = i1;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)OOC_IR__InitBuilder_NewModuleType((OOC_SymbolTable__Item)0, (OOC_SymbolTable__Position)0);
  *(OOC_INT32*)((_check_pointer(i0, 149495))+24) = i1;
  i0 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 149542))+32) = 0;
  i1 = (OOC_INT32)fold;
  *(OOC_INT32*)((_check_pointer(i0, 149567))+12) = i1;
  *(OOC_INT32*)(_check_pointer(i1, 149596)) = i0;
  i1 = (OOC_INT32)module;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 149666))+40);
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringModule;
  i4 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringType;
  i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__ResolveQualident((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i3, (OOC_SymbolTable__Name)i4);
  string = (OOC_SymbolTable__Item)i1;
  i2 = i1==0;
  if (i2) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 149920)))), &_td_OOC_SymbolTable__TypeDeclDesc, 149920)), 149929))+40);
  *(OOC_INT32*)((_check_pointer(i0, 149893))+28) = i1;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 149856))+28) = 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150499))+8);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150505)))), &_td_OOC_IR__VarDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150872))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 150877));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150841)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 29, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150539))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150546)))), &_td_OOC_IR__VarDesc, 150546)), 150550))+8);
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150561)))), &_td_OOC_SymbolTable__VarDeclDesc, 150561);
  var = (OOC_SymbolTable__VarDecl)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__DeclarationArray.baseTypes[0], 1);
  da = (OOC_SymbolTable__DeclarationArray)i2;
  i3 = _check_pointer(i2, 150598);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150633))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 150643))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 150654)))), &_td_OOC_SymbolTable__TypeDeclDesc, 150654)), 150663))+40);
  i0 = (OOC_INT32)OOC_IR__NewGuardedVar((OOC_SymbolTable__VarDecl)i1, (OOC_SymbolTable__Type)i0);
  *(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 150598))*4) = i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NewNested((OOC_SymbolTable__DeclarationArray)i2, 1);
  nested = (OOC_SymbolTable_Namespace__Nested)i0;
  i1 = (OOC_INT32)*namespace;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 150729)))), OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)),OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)((OOC_SymbolTable_Namespace__Nested)i0, (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150774)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 150774)));
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
l4:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__DeclarationArray.baseTypes[0], 0);
  da = (OOC_SymbolTable__DeclarationArray)i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NewNested((OOC_SymbolTable__DeclarationArray)i0, 0);
  nested = (OOC_SymbolTable_Namespace__Nested)i0;
  i1 = (OOC_INT32)*namespace;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 151040)))), OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)),OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)((OOC_SymbolTable_Namespace__Nested)i0, (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 151085)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 151085)));
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
  ;
}

void OOC_IR__BuilderDesc_EndTypeGuard(OOC_IR__Builder b, OOC_SymbolTable__Namespace *namespace) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)*namespace;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 151257)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 151257)), 151264))+8);
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 151579))+4);
  i1 = i1==45;
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 152980)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 2, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0=i1;
  goto l48;
l3:
  i1 = (OOC_INT32)ns;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 151639)))), OOC_IR__BuilderDesc_GetName)),OOC_IR__BuilderDesc_GetName)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i4 = (OOC_INT32)context;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 151617)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i1, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, 0u);
  decl = (OOC_SymbolTable__Declaration)i1;
  i3 = i1==(OOC_INT32)0;
  if (i3) goto l46;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 151757)))), OOC_SymbolTable__DeclarationDesc_IncrUsageCount)),OOC_SymbolTable__DeclarationDesc_IncrUsageCount)((OOC_SymbolTable__Declaration)i1);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 151793)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i3) goto l44;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 151884)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i3) goto l42;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 151955)))), &_td_OOC_IR__GuardedVarDesc);
  if (i3) goto l40;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 152097)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i3) goto l38;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 152173)))), &_td_OOC_SymbolTable__PredefProcDesc);
  if (i3) goto l36;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 152251)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i3) goto l34;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 152329)))), &_td_OOC_SymbolTable__ImportDesc);
  if (i3) goto l32;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 152421)))), &_td_OOC_SymbolTable__RedirectDesc);
  if (i3) goto l22;
  Log__Type("Unknown decl in NewIdentRef", 28, (void*)i1);
  _assert(0u, 127, 152926);
  goto l47;
l22:
  i3 = (OOC_INT32)baseNS;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 152493))+40);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 152470)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i5, 0u);
  redirModule = (OOC_SymbolTable__Item)i3;
  i5 = i3==(OOC_INT32)0;
  if (i5) goto l25;
  i5 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 152560)))), &_td_OOC_SymbolTable__ImportDesc));
  
  goto l27;
l25:
  i5=1u;
l27:
  if (i5) goto l29;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 152673)))), &_td_OOC_SymbolTable__ImportDesc, 152673)), 152680))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 152695))+40);
  ns = (OOC_SymbolTable__Namespace)i3;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 152815))+44);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 152821))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 152815))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 152821))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 152825)), 0);
  i0 = (OOC_INT32)OOC_Scanner_Builder_BasicList__CloneSymbol((OOC_Scanner_Builder_BasicList__Symbol)i0, (void*)(_check_pointer(i5, 152825)), i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 152720)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i2, (OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l47;
l29:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 152593)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 41, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  goto l47;
l32:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 152389))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 152363)))), OOC_IR__BuilderDesc_NewModuleRef)),OOC_IR__BuilderDesc_NewModuleRef)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Module)i1);
  return (OOC_IR__Expression)i0;
  goto l47;
l34:
  i0 = (OOC_INT32)OOC_IR__NewProcedureRef((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__ProcDecl)i1);
  return (OOC_IR__Expression)i0;
  goto l47;
l36:
  i0 = (OOC_INT32)OOC_IR__NewPredefProc((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__PredefProc)i1);
  return (OOC_IR__Expression)i0;
  goto l47;
l38:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 152133)))), OOC_IR__BuilderDesc_NewTypeRef)),OOC_IR__BuilderDesc_NewTypeRef)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__TypeDecl)i1);
  return (OOC_IR__Expression)i0;
  goto l47;
l40:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 152012))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 151992)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__VarDecl)i3);
  varRef = (OOC_IR__Var)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 152050))+44);
  *(OOC_INT32*)((_check_pointer(i0, 152036))+4) = i1;
  return (OOC_IR__Expression)i0;
  goto l47;
l42:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 151919)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__VarDecl)i1);
  return (OOC_IR__Expression)i0;
  goto l47;
l44:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 151849))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 151861))+40);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l47;
l46:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 151701)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l47:
  i0=i2;
l48:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 153221))+16);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewQualident(OOC_IR__Builder b, OOC_SymbolTable__Namespace baseNS, OOC_IR__ModuleRef modref, OOC_SymbolTable__Item context, OOC_Scanner_Builder_BasicList__Symbol name) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)modref;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 153506))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 153517)))), &_td_OOC_SymbolTable__ModuleDesc, 153517)), 153524))+40);
  i2 = (OOC_INT32)baseNS;
  i3 = (OOC_INT32)context;
  i4 = (OOC_INT32)name;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 153477)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i0, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Namespace)i1, (OOC_SymbolTable__Item)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 153840)))), OOC_IR__BuilderDesc_CheckFunctionOp)),OOC_IR__BuilderDesc_CheckFunctionOp)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 153879))+4);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 153886)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i3) goto l3;
  varRef = (OOC_IR__Expression)i1;
  i3=i1;
  goto l4;
l3:
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 153924)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
  varRef = (OOC_IR__Expression)i3;
  
l4:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 154004))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 154011)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i4) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 154667));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154641)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 20, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l23;
l7:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 154050))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 154061)))), &_td_OOC_SymbolTable__RecordDesc, 154061)), 154068))+44);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 154050))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 154061)))), &_td_OOC_SymbolTable__RecordDesc, 154061)), 154068))+44);
  i6 = (OOC_INT32)name;
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154104)))), OOC_IR__BuilderDesc_GetName)),OOC_IR__BuilderDesc_GetName)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i6);
  i8 = (OOC_INT32)context;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 154072)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i5, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Name)i7, 0u);
  decl = (OOC_SymbolTable__Declaration)i4;
  i5 = i4!=(OOC_INT32)0;
  if (!i5) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 154169)))), OOC_SymbolTable__DeclarationDesc_IncrUsageCount)),OOC_SymbolTable__DeclarationDesc_IncrUsageCount)((OOC_SymbolTable__Declaration)i4);
l10:
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l21;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 154298)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i5) goto l19;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 154414)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i5) goto l17;
  _assert(0u, 127, 154591);
  goto l23;
l17:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 154485))+4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154452)))), OOC_IR__BuilderDesc_NewSelectProc)),OOC_IR__BuilderDesc_NewSelectProc)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_SymbolTable__Record)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 154496)))), &_td_OOC_SymbolTable__RecordDesc, 154496)), (OOC_SymbolTable__ProcDecl)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 154547)))), &_td_OOC_SymbolTable__ProcDeclDesc, 154547)), (OOC_Scanner_Builder_BasicList__Symbol)i6, 0u);
  return (OOC_IR__Expression)i0;
  goto l23;
l19:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154337)))), OOC_IR__BuilderDesc_NewSelectField)),OOC_IR__BuilderDesc_NewSelectField)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_SymbolTable__FieldDecl)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 154377)))), &_td_OOC_SymbolTable__FieldDeclDesc, 154377)), (OOC_Scanner_Builder_BasicList__Symbol)i6);
  return (OOC_IR__Expression)i0;
  goto l23;
l21:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154247)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 1, (OOC_Scanner_Builder_BasicList__Symbol)i6);
  return (OOC_IR__Expression)i0;
l23:
  _failed_function(153589); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0;
  OOC_INT8 id;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewOperator_IsPredefClass(OOC_SymbolTable__Type type, OOC_UINT32 classes);
  auto OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_UnaryOperator();
  auto OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_BinaryOperator();
    
    OOC_CHAR8 OOC_IR__BuilderDesc_NewOperator_IsPredefClass(OOC_SymbolTable__Type type, OOC_UINT32 classes) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155565)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l3;
      return 0u;
      goto l4;
l3:
      i0 = *(OOC_INT16*)((_check_pointer(i0, 155602))+32);
      i1 = classes;
      return (_in(i0,i1));
l4:
      _failed_function(155486); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_UnaryOperator() {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Type type;
      OOC_CHAR8 isNumeric;
      OOC_CHAR8 isSet;
      OOC_CHAR8 isBoolean;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 155815))+16);
      i2 = (OOC_INT32)left;
      i1 = i2==i1;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 155840))+16);
      i2 = (OOC_INT32)right;
      i1 = i2==i1;
      
      goto l5;
l3:
      i1=1u;
l5:
      if (i1) goto l28;
      i0 = (OOC_INT32)right;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 156090))+4);
      type = (OOC_SymbolTable__Type)i0;
      i1 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i0);
      isNumeric = i1;
      i2 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i0);
      isSet = i2;
      i0 = OOC_IR__BuilderDesc_NewOperator_IsPredefClass((OOC_SymbolTable__Type)i0, 1u);
      isBoolean = i0;
      i3 = id;
      switch (i3) {
      case 7:
        if (i1) goto l14;
        if (i2) goto l12;
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156512)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l12:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)right;
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156457)))), OOC_IR__BuilderDesc_NewNegate)),OOC_IR__BuilderDesc_NewNegate)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l14:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)right;
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156319)))), OOC_IR__BuilderDesc_NewNegate)),OOC_IR__BuilderDesc_NewNegate)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      case 6:
        if (i1) goto l19;
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156653)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l19:
        i0 = (OOC_INT32)right;
        return (OOC_IR__Expression)i0;
        goto l29;
      case 35:
        if (i0) goto l24;
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156807)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l24:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)right;
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156755)))), OOC_IR__BuilderDesc_NewNot)),OOC_IR__BuilderDesc_NewNot)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      default:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156876)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      }
l28:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 156050))+16);
      return (OOC_IR__Expression)i0;
l29:
      _failed_function(155690); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_BinaryOperator() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157308)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l5;
          i0=0u;
          goto l8;
l5:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157348)))), &_td_OOC_SymbolTable__ArrayDesc, 157348)), 157354))+36);
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
      i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(8);
      real = (OOC_SymbolTable__Type)i0;
      result = (OOC_IR__Expression)(OOC_INT32)0;
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 157577))+16);
      i3 = (OOC_INT32)left;
      i2 = i3==i2;
      if (i2) goto l3;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 157602))+16);
      i4 = (OOC_INT32)right;
      i2 = i4==i2;
      
      goto l5;
l3:
      i2=1u;
l5:
      if (i2) goto l168;
      i1 = id;
      i1 = i1==15;
      if (i1) goto l9;
      i1=0u;
      goto l11;
l9:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 157880))+4);
      i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
      
l11:
      if (i1) goto l13;
      i1=0u;
      goto l15;
l13:
      i1 = (OOC_INT32)right;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 157914))+4);
      i1 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i1);
      
l15:
      if (i1) goto l166;
      i1 = id;
      i1 = i1==16;
      if (i1) goto l164;
      i1 = (OOC_INT32)b;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 158064)))), OOC_IR__BuilderDesc_WidenToCommon)),OOC_IR__BuilderDesc_WidenToCommon)((OOC_IR__Builder)i1, (void*)(OOC_INT32)&left, (void*)(OOC_INT32)&right);
      if (i1) goto l33;
      i0 = (OOC_INT32)left;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 160891))+4);
      i0 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i0);
      if (i0) goto l23;
      i0=0u;
      goto l25;
l23:
      i0 = (OOC_INT32)right;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 160914))+4);
      i0 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i0);
      
l25:
      if (i0) goto l27;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 161145)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 7, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      
      goto l169;
l27:
      i0 = id;
      i0 = _in(i0,32256u);
      if (i0) goto l30;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 161078)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      
      goto l169;
l30:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 161017)))), OOC_IR__BuilderDesc_NewCompare)),OOC_IR__BuilderDesc_NewCompare)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l33:
      i1 = (OOC_INT32)left;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 158119))+4);
      leftType = (OOC_SymbolTable__Type)i1;
      i2 = (OOC_INT32)right;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 158144))+4);
      rightType = (OOC_SymbolTable__Type)i2;
      i2 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i1);
      isNumeric = i2;
      i3 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
      isInteger = i3;
      i4 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i1);
      isSet = i4;
      i5 = OOC_IR__BuilderDesc_NewOperator_IsPredefClass((OOC_SymbolTable__Type)i1, 1u);
      isBoolean = i5;
      i1 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i1);
      isChar = i1;
      i1 = id;
      i6 = _in(i1,194u);
      if (i6) goto l36;
      i6=0u;
      goto l38;
l36:
      i6=i2;
l38:
      if (i6) goto l156;
      i6 = _in(i1,4u);
      if (i6) goto l44;
      i2=0u;
l44:
      if (i2) goto l152;
      i0 = _in(i1,24u);
      if (i0) goto l48;
      i0=0u;
      goto l50;
l48:
      i0=i3;
l50:
      if (i0) goto l146;
      i0 = _in(i1,198u);
      if (i0) goto l54;
      i0=0u;
      goto l56;
l54:
      i0=i4;
l56:
      if (i0) goto l138;
      i0 = _in(i1,288u);
      if (i0) goto l60;
      i0=0u;
      goto l62;
l60:
      i0=i5;
l62:
      if (i0) goto l132;
      i0 = _in(i1,32256u);
      if (i0) goto l66;
      i0=0u;
      goto l68;
l66:
      i0 = (OOC_INT32)left;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 160026))+4);
      i0 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i0);
      
l68:
      if (i0) goto l70;
      i0=0u;
      goto l72;
l70:
      i0 = (OOC_INT32)right;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 160049))+4);
      i0 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i0);
      
l72:
      if (i0) goto l130;
      i0 = id;
      i0 = i0==6;
      if (i0) goto l76;
      i0=0u;
      goto l86;
l76:
      i0 = isChar;
      if (i0) goto l79;
      i0 = (OOC_INT32)left;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 160199))+4);
      i0 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i0);
      
      goto l81;
l79:
      i0=1u;
l81:
      if (i0) goto l83;
      i0 = (OOC_INT32)left;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 160238))+4);
      i0 = OOC_SymbolTable_TypeRules__IsSTRING((OOC_SymbolTable__Type)i0);
      
      goto l86;
l83:
      i0=1u;
l86:
      if (i0) goto l128;
      i0 = id;
      i1 = _in(i0,32256u);
      if (i1) goto l90;
      i1=0u;
      goto l96;
l90:
      i1 = isNumeric;
      if (i1) goto l93;
      i1 = isChar;
      
      goto l96;
l93:
      i1=1u;
l96:
      if (i1) goto l126;
      i0 = _in(i0,1536u);
      if (i0) goto l100;
      i0=0u;
      goto l122;
l100:
      i0 = isBoolean;
      if (i0) goto l103;
      i0 = isSet;
      
      goto l105;
l103:
      i0=1u;
l105:
      if (i0) goto l107;
      i0 = (OOC_INT32)nil;
      i1 = (OOC_INT32)leftType;
      i0 = i1==i0;
      
      goto l109;
l107:
      i0=1u;
l109:
      if (i0) goto l111;
      i0 = (OOC_INT32)right;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 160645))+4);
      i1 = (OOC_INT32)nil;
      i0 = i0==i1;
      
      goto l113;
l111:
      i0=1u;
l113:
      if (i0) goto l115;
      i0 = (OOC_INT32)leftType;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 160686)))), &_td_OOC_SymbolTable__PointerDesc);
      
      goto l117;
l115:
      i0=1u;
l117:
      if (i0) goto l119;
      i0 = (OOC_INT32)leftType;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 160715)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l122;
l119:
      i0=1u;
l122:
      if (i0) goto l124;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 160820)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      
      goto l169;
l124:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 160759)))), OOC_IR__BuilderDesc_NewCompare)),OOC_IR__BuilderDesc_NewCompare)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l126:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 160505)))), OOC_IR__BuilderDesc_NewCompare)),OOC_IR__BuilderDesc_NewCompare)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l128:
      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], 2);
      exprList = (OOC_IR__ExpressionList)i0;
      i1 = _check_pointer(i0, 160293);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = (OOC_INT32)left;
      *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 160293))*4) = i3;
      i1 = _check_pointer(i0, 160322);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = (OOC_INT32)right;
      *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 160322))*4) = i3;
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 160348)))), OOC_IR__BuilderDesc_NewConcat)),OOC_IR__BuilderDesc_NewConcat)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__ExpressionList)i0);
      
      goto l169;
l130:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 160080)))), OOC_IR__BuilderDesc_NewCompare)),OOC_IR__BuilderDesc_NewCompare)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l132:
      switch (i1) {
      case 5:
        variant = 20;
        goto l136;
      case 8:
        variant = 21;
        goto l136;
      default:
        _failed_case(i1, 159769);
        goto l136;
      }
l136:
      i0 = (OOC_INT32)b;
      i1 = variant;
      i2 = (OOC_INT32)right;
      i3 = (OOC_INT32)left;
      i4 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159878)))), OOC_IR__BuilderDesc_NewBooleanOp)),OOC_IR__BuilderDesc_NewBooleanOp)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
      
      goto l169;
l138:
      switch (i1) {
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
        _failed_case(i1, 159454);
        goto l144;
      }
l144:
      i0 = (OOC_INT32)b;
      i1 = variant;
      i2 = (OOC_INT32)right;
      i3 = (OOC_INT32)left;
      i4 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159661)))), OOC_IR__BuilderDesc_NewSetOp)),OOC_IR__BuilderDesc_NewSetOp)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
      return (OOC_IR__Expression)i0;
      i0=(OOC_INT32)0;
      goto l169;
l146:
      switch (i1) {
      case 3:
        variant = 2;
        goto l150;
      case 4:
        variant = 5;
        goto l150;
      default:
        _failed_case(i1, 159158);
        goto l150;
      }
l150:
      i0 = (OOC_INT32)b;
      i1 = variant;
      i2 = (OOC_INT32)right;
      i3 = (OOC_INT32)left;
      i4 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159280)))), OOC_IR__BuilderDesc_NewBinaryArith)),OOC_IR__BuilderDesc_NewBinaryArith)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
      
      goto l169;
l152:
      if (!i3) goto l154;
      i1 = (OOC_INT32)b;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 158879)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)&left, (OOC_SymbolTable__Type)i0);
      dummy = i1;
      i1 = (OOC_INT32)b;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 158919)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)&right, (OOC_SymbolTable__Type)i0);
      dummy = i0;
l154:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)right;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158972)))), OOC_IR__BuilderDesc_NewBinaryArith)),OOC_IR__BuilderDesc_NewBinaryArith)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, 3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3);
      
      goto l169;
l156:
      switch (i1) {
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
        _failed_case(i1, 158517);
        goto l161;
      }
l161:
      i0 = (OOC_INT32)b;
      i1 = variant;
      i2 = (OOC_INT32)right;
      i3 = (OOC_INT32)left;
      i4 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158682)))), OOC_IR__BuilderDesc_NewBinaryArith)),OOC_IR__BuilderDesc_NewBinaryArith)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
      
      goto l169;
l164:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158021)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l166:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157943)))), OOC_IR__BuilderDesc_NewSetMember)),OOC_IR__BuilderDesc_NewSetMember)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l168:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 157822))+16);
      
l169:
      return (OOC_IR__Expression)i0;
      ;
    }


  i0 = (OOC_INT32)sym;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 161251))+4);
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
  _failed_function(154723); return 0;
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
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 162328))+54);
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_INT32)*arg;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 162368))+4);
      i1 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i1, 16);
      
l5:
      if (i1) goto l66;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 162536))+50);
      if (i1) goto l24;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 164104))+40);
      i1 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i1);
      if (i1) goto l11;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 164647))+40);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 164620)))), OOC_IR__BuilderDesc_WidenForAssign)),OOC_IR__BuilderDesc_WidenForAssign)((OOC_IR__Builder)i1, (void*)(OOC_INT32)arg, (OOC_SymbolTable__Type)i0);
      ok = i0;
      
      goto l20;
l11:
      i1 = (OOC_INT32)*arg;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 164421))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 164433))+40);
      i1 = OOC_SymbolTable_TypeRules__IsArrayCompatible((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i2);
      if (i1) goto l14;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 164475))+40);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 164485)))), &_td_OOC_SymbolTable__ArrayDesc, 164485)), 164491))+36);
      i1 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i1, 11);
      
      goto l16;
l14:
      i1=1u;
l16:
      if (i1) goto l18;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 164554))+40);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 164536)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)arg, (OOC_SymbolTable__Type)i0);
      
      goto l19;
l18:
      i0=1u;
l19:
      ok = i0;
      
l20:
      i0 = !i0;
      if (!i0) goto l66;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*arg;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 164736));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 164700)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 12, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      goto l66;
l24:
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*arg;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162595)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 162630))+49);
      if (i2) goto l27;
      i2=0u;
      goto l29;
l27:
      i2 = (OOC_INT32)*arg;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 162649))+4);
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 162656)))), &_td_OOC_SymbolTable__PointerDesc);
      
l29:
      if (!i2) goto l31;
      i2 = (OOC_INT32)*arg;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 162782));
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162767)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2);
      *arg = (OOC_IR__Expression)i2;
l31:
      i2 = (OOC_INT32)*arg;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162845))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 162856))+4);
      i2 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i2);
      if (i2) goto l38;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162896))+40);
      i2 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i2, 11);
      if (i2) goto l36;
      i2=0u;
      goto l40;
l36:
      i2 = (OOC_INT32)*arg;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 162956))+4);
      i2 = OOC_SymbolTable_TypeRules__IsByteCompatible((OOC_SymbolTable__Type)i2);
      
      goto l40;
l38:
      i2=1u;
l40:
      if (i2) goto l46;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 163002))+40);
      i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i2);
      if (i2) goto l44;
      i2=0u;
      goto l48;
l44:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 163043))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 163053)))), &_td_OOC_SymbolTable__ArrayDesc, 163053)), 163059))+36);
      i2 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i2, 11);
      
      goto l48;
l46:
      i2=1u;
l48:
      if (i2) goto l66;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 163288))+40);
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 163295)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i2) goto l59;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 163605))+40);
      i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i2);
      if (i2) goto l54;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 163976));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 163942)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 40, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l66;
l54:
      i2 = (OOC_INT32)*arg;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 163657))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 163669))+40);
      i0 = OOC_SymbolTable_TypeRules__IsArrayCompatible((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
      i0 = !i0;
      if (!i0) goto l66;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 163846));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 163812)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 40, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l66;
l59:
      i2 = (OOC_INT32)*arg;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 163350))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 163362))+40);
      i0 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
      i0 = !i0;
      if (!i0) goto l66;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 163544));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 163510)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 40, (OOC_Scanner_Builder_BasicList__Symbol)i0);
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 165827)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l5;
          return 0;
          goto l8;
l5:
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 165872)))), &_td_OOC_SymbolTable__ArrayDesc, 165872)), 165878)))), OOC_SymbolTable__TypeDesc_ArrayDimensions)),OOC_SymbolTable__TypeDesc_ArrayDimensions)((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 165872)))), &_td_OOC_SymbolTable__ArrayDesc, 165872)));
          return i0;
          goto l8;
l7:
          return 1;
l8:
          _failed_function(165697); return 0;
          ;
        }


      i0 = (OOC_INT32)*arguments;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 166028)), 0);
      i1 = (OOC_INT32)ADT_ArrayList__New(i1);
      newArgs = (ADT_ArrayList__ArrayList)i1;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 166080)), 0);
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
      i3 = (OOC_INT32)formalPars;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 166289))+44);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 166297)), 0);
      i3 = i1!=i3;
      if (i3) goto l7;
      i0=0u;
      goto l9;
l7:
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 166341)), 0);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 166488))+44);
      i2 = _check_pointer(i2, 166496);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 166496))*4);
      fpar = (OOC_SymbolTable__VarDecl)i1;
      i2 = (OOC_INT32)*arguments;
      i2 = _check_pointer(i2, 166535);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT32, 166535))*4);
      arg = (OOC_IR__Expression)i0;
      
      goto l16;
l15:
      i0 = (OOC_INT32)formalPars;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 166408))+32);
      fpar = (OOC_SymbolTable__VarDecl)i0;
      i1 = (OOC_INT32)receiver;
      arg = (OOC_IR__Expression)i1;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l16:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 166599));
      i2 = (OOC_INT32)b;
      OOC_IR__BuilderDesc_NewCall_MakeParameterCompatible((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (void*)(OOC_INT32)&arg, (OOC_SymbolTable__VarDecl)i1);
      i0 = *(OOC_UINT8*)((_check_pointer(i1, 166642))+51);
      if (i0) goto l19;
      i0=0u;
      goto l21;
l19:
      i0 = (OOC_INT32)arg;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 166695))+4);
      i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 16);
      i0 = !i0;
      
l21:
      if (i0) goto l23;
      i0 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)arg;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 167050)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
      goto l24;
l23:
      i0 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)arg;
      i4 = (OOC_INT32)sym;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 166998)))), OOC_IR__BuilderDesc_NewAdr)),OOC_IR__BuilderDesc_NewAdr)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 166987)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
l24:
      i0 = (OOC_INT32)newFPars;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 167095)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 167128))+55);
      if (!i2) goto l52;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 167176))+40);
      fparType = (OOC_SymbolTable__Type)i2;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 167207)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i3) goto l35;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 168195)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i2) goto l52;
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 168230))+50);
      if (!i1) goto l52;
      i1 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)arg;
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 168297));
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 168280)))), OOC_IR__BuilderDesc_NewTypeTag)),OOC_IR__BuilderDesc_NewTypeTag)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 168269)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 168333)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)(OOC_INT32)0);
      goto l52;
l35:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 167259))+36);
      i1 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i1, 11);
      if (i1) goto l49;
      i0 = (OOC_INT32)arg;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 167702))+4);
      i0 = OOC_IR__BuilderDesc_NewCall_TransformArgs_Dimensions((OOC_SymbolTable__Type)i0);
      i1 = (OOC_INT32)fparType;
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 167720)))), OOC_SymbolTable__ArrayDesc_GetOpenDimensions)),OOC_SymbolTable__ArrayDesc_GetOpenDimensions)((OOC_SymbolTable__Array)i1);
      i0 = i0>=i2;
      if (!i0) goto l52;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 167997)))), OOC_SymbolTable__ArrayDesc_GetOpenDimensions)),OOC_SymbolTable__ArrayDesc_GetOpenDimensions)((OOC_SymbolTable__Array)i1);
      i = 0;
      i1 = 0<i0;
      if (!i1) goto l52;
      i1 = (OOC_INT32)newFPars;
      i2 = (OOC_INT32)newArgs;
      i3=0;
l42_loop:
      i4 = (OOC_INT32)b;
      i5 = (OOC_INT32)arg;
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 168080));
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 168067)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i6, (OOC_IR__Expression)i5, i3);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 168058)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i4, (OOC_IR__Expression)i5);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 168047)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 168122)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)(OOC_INT32)0);
      i3 = i3+1;
      i = i3;
      i4 = i3<i0;
      if (i4) goto l42_loop;
      goto l52;
l49:
      i1 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)arg;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 167465));
      i4 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
      i5 = (OOC_INT32)arg;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 167613))+4);
      i5 = *(OOC_INT32*)((_check_pointer(i5, 167619))+24);
      i5 = (OOC_INT32)Object_BigInt__NewInt(i5);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 167450)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i4, (Object_Boxed__Object)i5);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 167439)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 167652)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)(OOC_INT32)0);
l52:
      i0 = argIndex;
      i0 = i0+1;
      i1 = fparIndex;
      argIndex = i0;
      i1 = i1+1;
      fparIndex = i1;
      i2 = (OOC_INT32)formalPars;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 166289))+44);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 166297)), 0);
      i2 = i1!=i2;
      if (i2) goto l55;
      i2=0u;
      goto l57;
l55:
      i2 = (OOC_INT32)*arguments;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 166341)), 0);
      i2 = i0!=i2;
      
l57:
      if (i2) goto l12_loop;
l61:
      i2 = (OOC_INT32)formalPars;
      i3 = (OOC_INT32)newArgs;
      i4 = *(OOC_UINT8*)((_check_pointer(i2, 168584))+48);
      if (!i4) goto l74;
      i4 = (OOC_INT32)*arguments;
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 168649)), 0);
      i5 = i0!=i5;
      if (!i5) goto l74;
      i5 = (OOC_INT32)newFPars;
      
l68_loop:
      i6 = _check_pointer(i4, 168682);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i0, i7, OOC_UINT32, 168682))*4);
      arg = (OOC_IR__Expression)i6;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 168711)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i3, (Object__Object)i6);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 168745)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i5, (Object__Object)(OOC_INT32)0);
      i0 = i0+1;
      argIndex = i0;
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i4, 168649)), 0);
      i6 = i0!=i6;
      if (i6) goto l68_loop;
l74:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 168855))+44);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 168863)), 0);
      i1 = i1!=i2;
      if (i1) goto l80;
      i1 = (OOC_INT32)*arguments;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 169013)), 0);
      i2 = i0!=i2;
      if (!i2) goto l81;
      i2 = (OOC_INT32)b;
      i1 = _check_pointer(i1, 169120);
      i4 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i4, OOC_UINT32, 169120))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 169130));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 169083)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 39, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l81;
l80:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)endOfArgsSym;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 168933)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 38, (OOC_Scanner_Builder_BasicList__Symbol)i1);
l81:
      i0 = *(OOC_INT32*)((_check_pointer(i3, 169185))+4);
      *arguments = (OOC_IR__ExpressionList)((OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], i0));
      i0 = *(OOC_INT32*)((_check_pointer(i3, 169227))+4);
      *argFormalPars = (OOC_SymbolTable__VarDeclArray)((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], i0));
      i0 = *(OOC_INT32*)((_check_pointer(i3, 169263))+4);
      i = 0;
      i1 = 0<i0;
      if (!i1) goto l93;
      i1 = (OOC_INT32)newFPars;
      i2=0;
l84_loop:
      i4 = (OOC_INT32)*arguments;
      i4 = _check_pointer(i4, 169292);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 169306));
      i6 = _check_pointer(i6, 169313);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 169313))*4);
      *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 169292))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 169317)))), &_td_OOC_IR__ExpressionDesc, 169317));
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 169350));
      i4 = _check_pointer(i4, 169357);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 169357))*4);
      i4 = i4==(OOC_INT32)0;
      if (i4) goto l87;
      i4 = (OOC_INT32)*argFormalPars;
      i4 = _check_pointer(i4, 169444);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 169459));
      i6 = _check_pointer(i6, 169466);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 169466))*4);
      *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 169444))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 169474)))), &_td_OOC_SymbolTable__VarDeclDesc, 169474));
      goto l88;
l87:
      i4 = (OOC_INT32)*argFormalPars;
      i4 = _check_pointer(i4, 169396);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 169396))*4) = (OOC_INT32)0;
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 169631)), 0);
      i2 = min;
      i1 = i1<i2;
      if (i1) goto l3;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 169659)), 0);
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 169723));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 169683)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 13, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      return 0u;
l8:
      _failed_function(169544); return 0;
      ;
    }


  i0 = (OOC_INT32)design;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 169854)))), &_td_OOC_IR__PredefProcDesc);
  if (i1) goto l43;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 180233))+16);
  i2 = i0==i2;
  if (i2) goto l41;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 180372))+4);
  i2 = OOC_SymbolTable_TypeRules__IsValidReceiverType((OOC_SymbolTable__Type)i2);
  if (i2) goto l7;
  i2=0u;
  goto l9;
l7:
  i2 = (OOC_INT32)arguments;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 180404)), 0);
  i2 = i2==1;
  
l9:
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)arguments;
  i2 = _check_pointer(i2, 180424);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 180424))*4);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 180428)))), &_td_OOC_IR__TypeRefDesc);
  
l13:
  if (i2) goto l39;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 180576))+4);
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 180583)))), &_td_OOC_SymbolTable__FormalParsDesc));
  if (i2) goto l37;
  i2 = isFunctionCall;
  if (i2) goto l19;
  i3=0u;
  goto l21;
l19:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 180710))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 180721)))), &_td_OOC_SymbolTable__FormalParsDesc, 180721)), 180732))+36);
  i3 = i3==(OOC_INT32)0;
  
l21:
  if (i3) goto l35;
  i2 = !i2;
  if (i2) goto l25;
  i2=0u;
  goto l27;
l25:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 180869))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 180880)))), &_td_OOC_SymbolTable__FormalParsDesc, 180880)), 180891))+36);
  i2 = i2!=(OOC_INT32)0;
  
l27:
  if (i2) goto l33;
  call = (OOC_IR__Call)((OOC_INT32)RT0__NewObject(_td_OOC_IR__Call.baseTypes[0]));
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 181028)))), &_td_OOC_IR__SelectProcDesc);
  if (i1) goto l31;
  receiver = (OOC_IR__Expression)(OOC_INT32)0;
  i1=(OOC_INT32)0;
  goto l32;
l31:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 181077)))), &_td_OOC_IR__SelectProcDesc, 181077)), 181088))+8);
  receiver = (OOC_IR__Expression)i1;
  
l32:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 181232))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 181182));
  i3 = (OOC_INT32)endOfArgsSym;
  OOC_IR__BuilderDesc_NewCall_TransformArgs((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__FormalPars)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 181243)))), &_td_OOC_SymbolTable__FormalParsDesc, 181243)), (OOC_IR__Expression)i1, (void*)(OOC_INT32)&arguments, (void*)(OOC_INT32)&formalPars);
  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)call;
  i2 = (OOC_INT32)design;
  i3 = (OOC_INT32)arguments;
  OOC_IR__InitCall((OOC_IR__Call)i1, (OOC_IR__Expression)i2, (OOC_IR__ExpressionList)i3, (OOC_SymbolTable__VarDeclArray)i0);
  return (OOC_IR__Expression)i1;
  goto l204;
l33:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 180970));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 180932)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 36, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l204;
l35:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 180812));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 180773)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 37, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l204;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 180654));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 180623)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 35, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l204;
l39:
  i2 = (OOC_INT32)arguments;
  i3 = _check_pointer(i2, 180484);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 180484))*4);
  i2 = _check_pointer(i2, 180541);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 180541))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 180487));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 180461)))), OOC_IR__BuilderDesc_NewTypeGuard)),OOC_IR__BuilderDesc_NewTypeGuard)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__TypeRef)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 180545)))), &_td_OOC_IR__TypeRefDesc, 180545)));
  return (OOC_IR__Expression)i0;
  goto l204;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 180267))+16);
  return (OOC_IR__Expression)i0;
  goto l204;
l43:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 169896))+8);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 169907)))), &_td_OOC_SymbolTable__PredefProcDesc, 169907);
  predefProc = (OOC_SymbolTable__PredefProc)i0;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 169964))+42);
  i0 = *(OOC_INT16*)((_check_pointer(i0, 169985))+44);
  i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(i1, i0);
  i0 = !i0;
  if (!i0) goto l46;
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 170201))+16);
  return (OOC_IR__Expression)i0;
l46:
  i0 = (OOC_INT32)design;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 170249))+8);
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 170260)))), &_td_OOC_SymbolTable__PredefProcDesc, 170260)), 170271))+40);
  switch (i1) {
  case 0:
    i1 = (OOC_INT32)arguments;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 170362)), 0);
    i2 = i2>1;
    if (i2) goto l51;
    code = (OOC_IR__Expression)(OOC_INT32)0;
    i2=(OOC_INT32)0;
    goto l52;
l51:
    i2 = _check_pointer(i1, 170402);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i3, OOC_UINT8, 170402))*4);
    code = (OOC_IR__Expression)i2;
    
l52:
    i3 = (OOC_INT32)b;
    i1 = _check_pointer(i1, 170507);
    i4 = OOC_ARRAY_LENGTH(i1, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 170584));
    i5 = *(OOC_INT32*)((_check_pointer(i5, 170589))+16);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i4, OOC_UINT8, 170507))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 170491));
    i4 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__assertions;
    i4 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i3, (Config_Section_Options__Option)i4, i5);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 170472)))), OOC_IR__BuilderDesc_NewAssert)),OOC_IR__BuilderDesc_NewAssert)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, (!i4));
    return (OOC_IR__Expression)i0;
    goto l204;
  case 1:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 170676);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 170676))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 170655));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 170636)))), OOC_IR__BuilderDesc_NewAssert)),OOC_IR__BuilderDesc_NewAssert)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)(OOC_INT32)0, (OOC_IR__Expression)i2, 0u);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 22:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 170766);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i5 = _check_pointer(i2, 170780);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i2 = _check_pointer(i2, 170851);
    i7 = OOC_ARRAY_LENGTH(i2, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 170766))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(1, i6, OOC_UINT8, 170780))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i7, OOC_UINT8, 170851))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 170835));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 170750));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 170819)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i5, (OOC_IR__Expression)i2, 0);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 170727)))), OOC_IR__BuilderDesc_NewCopyString)),OOC_IR__BuilderDesc_NewCopyString)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 21:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 170911);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 170911))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 170914))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 170921)))), &_td_OOC_SymbolTable__PointerDesc);
    if (i1) goto l58;
    i1 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 171873);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 171873))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 171876));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 171841)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 50, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    goto l72;
l58:
    i1 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 170973);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 170973))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 170953)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i0);
    i0 = (OOC_INT32)arguments;
    i2 = _check_pointer(i0, 171006);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 171006))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 171009))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 171020)))), &_td_OOC_SymbolTable__PointerDesc, 171020)), 171028))+32);
    type = (OOC_SymbolTable__Type)i2;
    i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 171059)))), &_td_OOC_SymbolTable__ArrayDesc);
    if (i3) goto l67;
    i0 = OOC_SymbolTable_TypeRules__VariableInstance((OOC_SymbolTable__Type)i2);
    i0 = !i0;
    if (!i0) goto l63;
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 171549);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 171549))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 171552));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 171510)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 56, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l63:
    i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(1, 1);
    if (!i0) goto l72;
    i0 = (OOC_INT32)b;
    i1 = (OOC_INT32)design;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 171705);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 171768);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i5, OOC_UINT8, 171768))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 171771))+4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 171705))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 171752));
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 171689));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 171730)))), OOC_IR__BuilderDesc_NewNewObject)),OOC_IR__BuilderDesc_NewNewObject)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i2, (OOC_IR__ExpressionList)(OOC_INT32)0);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 171648)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l72;
l67:
    i1 = _check_pointer(i0, 171108);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 171108))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 171111))+4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 171121)))), &_td_OOC_SymbolTable__PointerDesc, 171121)), 171129))+32);
    i0 = _check_pointer(i0, 171108);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 171108))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 171111))+4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 171121)))), &_td_OOC_SymbolTable__PointerDesc, 171121)), 171129))+32);
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 171143)))), &_td_OOC_SymbolTable__ArrayDesc, 171143)), 171149)))), OOC_SymbolTable__ArrayDesc_GetOpenDimensions)),OOC_SymbolTable__ArrayDesc_GetOpenDimensions)((OOC_SymbolTable__Array)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 171143)))), &_td_OOC_SymbolTable__ArrayDesc, 171143)));
    i0 = 1+i0;
    dim = i0;
    i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(i0, i0);
    if (!i0) goto l72;
    i0 = (OOC_INT32)b;
    i1 = (OOC_INT32)design;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 171304);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i5 = _check_pointer(i2, 171366);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT8, 171366))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 171369))+4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 171304))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 171351));
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 171288));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 171329)))), OOC_IR__BuilderDesc_NewNewObject)),OOC_IR__BuilderDesc_NewNewObject)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i5, (OOC_IR__ExpressionList)i2);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 171247)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
l72:
    i0 = (OOC_INT32)b;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 171912))+16);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 4:
  case 5:
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 171983);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i4 = (OOC_INT32)b;
    i1 = _check_pointer(i1, 172015);
    i5 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i5, OOC_UINT8, 172015))*4);
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 171991)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i4, (OOC_IR__Expression)i1);
    *(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 171983))*4) = i1;
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 172050);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 172050))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 172030)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i4, (OOC_IR__Expression)i1);
    i1 = (OOC_INT32)arguments;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 172082)), 0);
    i2 = i2==1;
    if (i2) goto l76;
    i1 = _check_pointer(i1, 172200);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 172200))*4);
    delta = (OOC_IR__Expression)i1;
    goto l77;
l76:
    i1 = _check_pointer(i1, 172147);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 172147))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 172150))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 172131));
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 172115)))), OOC_IR__BuilderDesc_GetOne)),OOC_IR__BuilderDesc_GetOne)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i1);
    delta = (OOC_IR__Expression)i1;
l77:
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 172253);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 172253))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 172256))+4);
    i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 172230)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i4, (void*)(OOC_INT32)&delta, (OOC_SymbolTable__Type)i1);
    if (i1) goto l80;
    i1 = (OOC_INT32)delta;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 172643));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 172615)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i4, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 172705);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i1 = _check_pointer(i1, 172719);
    i5 = OOC_ARRAY_LENGTH(i1, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 172705))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i5, OOC_UINT8, 172719))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 172690));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 172668)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l204;
l80:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 172288))+8);
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 172299)))), &_td_OOC_SymbolTable__PredefProcDesc, 172299)), 172310))+40);
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
    i2 = _check_pointer(i2, 172577);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 172577))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 172557));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 172459));
    i5 = (OOC_INT32)delta;
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 172500)))), OOC_IR__BuilderDesc_NewBinaryArith)),OOC_IR__BuilderDesc_NewBinaryArith)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i3, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i5);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 172438)))), OOC_IR__BuilderDesc_NewAssignOp)),OOC_IR__BuilderDesc_NewAssignOp)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 6:
  case 7:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 172810);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 172810))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 172790)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 172833);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 172861);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i5, OOC_UINT8, 172861))*4);
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 172841)))), OOC_IR__BuilderDesc_AssertSet)),OOC_IR__BuilderDesc_AssertSet)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    *(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 172833))*4) = i2;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 172884);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 172916);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 172916))*4);
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 172892)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    *(OOC_INT32*)(i3+(_check_index(1, i4, OOC_UINT8, 172884))*4) = i2;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 172940))+8);
    i2 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 172951)))), &_td_OOC_SymbolTable__PredefProcDesc, 172951)), 172962))+40);
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
    i4 = _check_pointer(i3, 173240);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i3 = _check_pointer(i3, 173254);
    i6 = OOC_ARRAY_LENGTH(i3, 0);
    i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT8, 173240))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(1, i6, OOC_UINT8, 173254))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 173170));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 173107));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 173145)))), OOC_IR__BuilderDesc_NewChangeElement)),OOC_IR__BuilderDesc_NewChangeElement)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i5, i2, (OOC_IR__Expression)i4, (OOC_IR__Expression)i3);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 173087)))), OOC_IR__BuilderDesc_NewAssignOp)),OOC_IR__BuilderDesc_NewAssignOp)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 23:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 173331);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 173331))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 173316));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 173300)))), OOC_IR__BuilderDesc_NewRaise)),OOC_IR__BuilderDesc_NewRaise)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 2:
    i1 = (OOC_INT32)arguments;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 173425)), 0);
    i3 = (OOC_INT32)b;
    i2 = i2!=2;
    if (i2) goto l95;
    i2 = _check_pointer(i1, 173544);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i5 = _check_pointer(i1, 173597);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT8, 173597))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 173600))+4);
    i1 = _check_pointer(i1, 173597);
    i6 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i6, OOC_UINT8, 173597))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 173600))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i4, OOC_UINT8, 173544))*4);
    i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 173606)))), OOC_SymbolTable__TypeDesc_ArrayDimensions)),OOC_SymbolTable__TypeDesc_ArrayDimensions)((OOC_SymbolTable__Type)i1);
    i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 173517)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i3, (OOC_IR__Expression)i2, 0, i1);
    dim = i1;
    
    goto l96;
l95:
    dim = 0;
    i1=0;
l96:
    i2 = (OOC_INT32)arguments;
    i4 = _check_pointer(i2, 173672);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT8, 173672))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 173675))+4);
    i4 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 173682)))), &_td_OOC_SymbolTable__ArrayDesc));
    if (!i4) goto l99;
    i2 = _check_pointer(i2, 173741);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 173741))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 173744));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 173712)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 15, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l99:
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 173822);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 173822))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 173806));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 173790)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2, i1);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 20:
  case 19:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 173906);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 173906))*4);
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 173883)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    type = (OOC_SymbolTable__Type)i2;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 173930))+8);
    i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 173941)))), &_td_OOC_SymbolTable__PredefProcDesc, 173941)), 173952))+40);
    i0 = i0==20;
    if (i0) goto l103;
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetMax((OOC_SymbolTable__Type)i2);
    value = (Object_Boxed__Object)i0;
    
    goto l104;
l103:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetMin((OOC_SymbolTable__Type)i2);
    value = (Object_Boxed__Object)i0;
    
l104:
    i3 = i0==(OOC_INT32)0;
    if (i3) goto l111;
    i3 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i2);
    if (!i3) goto l110;
    i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(4);
    type = (OOC_SymbolTable__Type)i2;
    
l110:
    i3 = (OOC_INT32)arguments;
    i3 = _check_pointer(i3, 174355);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 174355))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 174358));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 174334)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i0);
    return (OOC_IR__Expression)i0;
    goto l204;
l111:
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 174162);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 174162))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 174165));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 174132)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 18, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 3:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 174471);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 174471))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 174455));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 174438)))), OOC_IR__BuilderDesc_NewSize)),OOC_IR__BuilderDesc_NewSize)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 8:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 174545);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 174545))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 174529));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 174513)))), OOC_IR__BuilderDesc_NewAbs)),OOC_IR__BuilderDesc_NewAbs)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 9:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 174628);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 174642);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 174628))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 174642))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 174612));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 174596)))), OOC_IR__BuilderDesc_NewAsh)),OOC_IR__BuilderDesc_NewAsh)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 10:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 174738);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 174738))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 174709));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 174717)))), OOC_IR__BuilderDesc_AssertChar)),OOC_IR__BuilderDesc_AssertChar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 174693)))), OOC_IR__BuilderDesc_NewCap)),OOC_IR__BuilderDesc_NewCap)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 11:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 174788);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 174788))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 174792)))), &_td_OOC_IR__ConstDesc);
    if (i1) goto l120;
    i0=0u;
    goto l122;
l120:
    i0 = _check_pointer(i0, 174830);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 174830))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 174833))+4);
    i0 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i0);
    
l122:
    if (i0) goto l137;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 174953);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 174953))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 174956))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 174962)))), &_td_OOC_SymbolTable__PredefTypeDesc);
    if (i1) goto l126;
    i1 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 175700);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 175700))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 175703));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 175668)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 175736);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 175736))*4);
    return (OOC_IR__Expression)i0;
    goto l204;
l126:
    i1 = _check_pointer(i0, 175010);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 175010))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 175013))+4);
    i2 = (OOC_INT32)b;
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 175023)))), &_td_OOC_SymbolTable__PredefTypeDesc, 175023)), 175034))+32);
    switch (i1) {
    case 4:
      targetType = 5;
      goto l135;
    case 5:
      targetType = 6;
      goto l135;
    case 6:
      targetType = 7;
      goto l135;
    case 8:
      targetType = 9;
      goto l135;
    case 1:
      targetType = 2;
      goto l135;
    case 2:
      targetType = 3;
      goto l135;
    default:
      i0 = _check_pointer(i0, 175458);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 175458))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 175461));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 175426)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      i0 = (OOC_INT32)arguments;
      i0 = _check_pointer(i0, 175496);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 175496))*4);
      return (OOC_IR__Expression)i0;
      goto l135;
    }
l135:
    i0 = targetType;
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i0);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 175586);
    i3 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 175586))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 175534)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l204;
l137:
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 174924);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 174924))*4);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 12:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 175806);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 175806))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 175810)))), &_td_OOC_IR__ConstDesc);
    if (i1) goto l142;
    i0=0u;
    goto l144;
l142:
    i0 = _check_pointer(i0, 175848);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 175848))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 175851))+4);
    i0 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i0);
    
l144:
    if (i0) goto l159;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 175972);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 175972))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 175975))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 175981)))), &_td_OOC_SymbolTable__PredefTypeDesc);
    if (i1) goto l148;
    i1 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 176709);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 176709))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 176712));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 176677)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 176745);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 176745))*4);
    return (OOC_IR__Expression)i0;
    goto l204;
l148:
    i1 = _check_pointer(i0, 176029);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 176029))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 176032))+4);
    i2 = (OOC_INT32)b;
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 176042)))), &_td_OOC_SymbolTable__PredefTypeDesc, 176042)), 176053))+32);
    switch (i1) {
    case 5:
      targetType = 4;
      goto l157;
    case 6:
      targetType = 5;
      goto l157;
    case 7:
      targetType = 6;
      goto l157;
    case 9:
      targetType = 8;
      goto l157;
    case 2:
      targetType = 1;
      goto l157;
    case 3:
      targetType = 2;
      goto l157;
    default:
      i0 = _check_pointer(i0, 176467);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 176467))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 176470));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 176435)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      i0 = (OOC_INT32)arguments;
      i0 = _check_pointer(i0, 176505);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 176505))*4);
      return (OOC_IR__Expression)i0;
      goto l157;
    }
l157:
    i0 = targetType;
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i0);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 176595);
    i3 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 176595))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 176543)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l204;
l159:
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 175943);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 175943))*4);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 13:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 176809);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i3 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 176841);
    i4 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i4, OOC_UINT8, 176841))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 176817)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
    *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 176809))*4) = i0;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 176868);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 176868))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 176872)))), &_td_OOC_IR__ConstDesc);
    if (!i1) goto l164;
    i0 = _check_pointer(i0, 177082);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 177082))*4);
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 177057)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0, 0, 256);
    dummy = i0;
l164:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 177250);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 177250))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 177197)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 14:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 177297);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i3 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 177329);
    i4 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i4, OOC_UINT8, 177329))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 177305)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
    *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 177297))*4) = i0;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 177356);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 177356))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 177360)))), &_td_OOC_IR__ConstDesc);
    if (!i1) goto l168;
    i0 = _check_pointer(i0, 177570);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 177570))*4);
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 177545)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0, 0, 65536);
    dummy = i0;
l168:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(2);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 177786);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 177786))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 177729)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 15:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 177842);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i3 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 177874);
    i4 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i4, OOC_UINT8, 177874))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 177850)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
    *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 177842))*4) = i0;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 177901);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 177901))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 177905)))), &_td_OOC_IR__ConstDesc);
    if (!i1) goto l172;
    i0 = _check_pointer(i0, 178115);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 178115))*4);
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 178090)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0, 0, 2147483647);
    dummy = i0;
l172:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(3);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 178376);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 178376))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 178319)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 16:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 178465);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 178465))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 178449));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 178430)))), OOC_IR__BuilderDesc_NewEntier)),OOC_IR__BuilderDesc_NewEntier)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 17:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 178548);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 178548))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 178532));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 178516)))), OOC_IR__BuilderDesc_NewOdd)),OOC_IR__BuilderDesc_NewOdd)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 18:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 178604);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 178604))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 178607))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 178613)))), &_td_OOC_SymbolTable__PredefTypeDesc);
    if (i1) goto l178;
    i0=0u;
    goto l184;
l178:
    i1 = _check_pointer(i0, 178656);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 178656))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 178659))+4);
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 178669)))), &_td_OOC_SymbolTable__PredefTypeDesc, 178669)), 178680))+32);
    i1 = i1==2;
    if (i1) goto l181;
    i0 = _check_pointer(i0, 178728);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 178728))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 178731))+4);
    i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 178741)))), &_td_OOC_SymbolTable__PredefTypeDesc, 178741)), 178752))+32);
    i0 = i0==3;
    
    goto l184;
l181:
    i0=1u;
l184:
    if (i0) goto l186;
    targetType = 5;
    i0=5;
    goto l187;
l186:
    targetType = 6;
    i0=6;
l187:
    i1 = (OOC_INT32)b;
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i0);
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 179032);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 179032))*4);
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 179011)))), OOC_IR__BuilderDesc_AssertChar)),OOC_IR__BuilderDesc_AssertChar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 178940)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i1, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 26:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 179186);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i5 = _check_pointer(i2, 179200);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i2 = _check_pointer(i2, 179214);
    i7 = OOC_ARRAY_LENGTH(i2, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 179186))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(1, i6, OOC_UINT8, 179200))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(2, i7, OOC_UINT8, 179214))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 179138));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 179116)))), OOC_IR__BuilderDesc_NewMoveBlock)),OOC_IR__BuilderDesc_NewMoveBlock)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 27:
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 179276);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 179276))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 179279))+4);
    i3 = (OOC_INT32)b;
    i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 179285)))), &_td_OOC_SymbolTable__PointerDesc);
    if (i2) goto l192;
    i1 = _check_pointer(i1, 179339);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 179339))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 179342))+4);
    i1 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i1, 12);
    
    goto l194;
l192:
    i1=1u;
l194:
    if (i1) goto l196;
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 179650);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 179650))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 179653));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 179618)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 50, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    goto l197;
l196:
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 179397);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 179397))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 179377)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i3, (OOC_IR__Expression)i1);
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 179430);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 179430))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 179433))+4);
    type = (OOC_SymbolTable__Type)i2;
    i2 = _check_pointer(i1, 179511);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i5 = _check_pointer(i1, 179568);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT8, 179568))*4);
    i1 = _check_pointer(i1, 179587);
    i6 = OOC_ARRAY_LENGTH(i1, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 179571))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 179511))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i6, OOC_UINT8, 179587))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 179553));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 179495));
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 179532)))), OOC_IR__BuilderDesc_NewNewBlock)),OOC_IR__BuilderDesc_NewNewBlock)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i5, (OOC_IR__Expression)i1);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 179458)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
l197:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 179689))+16);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 24:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
    i3 = (OOC_INT32)arguments;
    i3 = _check_pointer(i3, 179881);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 179881))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 179866));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 179852)))), OOC_IR__BuilderDesc_NewAdr)),OOC_IR__BuilderDesc_NewAdr)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 179777)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i1, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i0);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 25:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 179959);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 179973);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 179959))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 179973))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 179943));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 179925)))), OOC_IR__BuilderDesc_NewShift)),OOC_IR__BuilderDesc_NewShift)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2, 0u);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 29:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 180068);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 180082);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 180068))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 180082))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 180052));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 180031)))), OOC_IR__BuilderDesc_NewTypeCast)),OOC_IR__BuilderDesc_NewTypeCast)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 28:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 180167);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 180181);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 180167))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 180181))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 180151));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 180133)))), OOC_IR__BuilderDesc_NewShift)),OOC_IR__BuilderDesc_NewShift)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2, 1u);
    return (OOC_IR__Expression)i0;
    goto l204;
  default:
    _failed_case(i1, 170238);
    goto l204;
  }
l204:
  _failed_function(161408); return 0;
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
