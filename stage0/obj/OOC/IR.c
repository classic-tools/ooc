#include <OOC/IR.d>
#include <__oo2c.h>
#include <setjmp.h>

static void OOC_IR__AppendContext(ADT_StringBuffer__StringBuffer buffer, OOC_SymbolTable__Item item) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)item;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36421)))), &_td_OOC_SymbolTable__DeclarationDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36411)))), 36411);
  goto l7;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36455))+4);
  i1 = i1!=(OOC_INT32)0;
  i2 = (OOC_INT32)buffer;
  if (!i1) goto l6;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36508))+4);
  OOC_IR__AppendContext((ADT_StringBuffer__StringBuffer)i2, (OOC_SymbolTable__Item)i1);
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36559))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36564))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36559))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36564))+12);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 36568)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 36541)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i2, (void*)(_check_pointer(i1, 36568)), i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 36584)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i2, (OOC_CHAR8)'.');
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 36981))+4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37028))+4);
  OOC_IR__AppendContext((ADT_StringBuffer__StringBuffer)i0, (OOC_SymbolTable__Item)i2);
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37054))+20);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l26;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37155)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i2) goto l24;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37350)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i2) goto l22;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37413)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i2) goto l20;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37481)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l18;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37540)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i2) goto l16;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37533)))), 37533);
  goto l27;
l16:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37566)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "RECORD", 7);
  goto l27;
l18:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37506)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "ARRAY", 6);
  goto l27;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37443)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "PROCEDURE", 10);
  goto l27;
l22:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37377)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "POINTER", 8);
  goto l27;
l24:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37249)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, "PredefType(", 12);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 37304))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37289)))), ADT_StringBuffer__StringBufferDesc_AppendInt)),ADT_StringBuffer__StringBufferDesc_AppendInt)((ADT_StringBuffer__StringBuffer)i0, i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37320)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, ")", 2);
  goto l27;
l26:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37103))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 37114))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 37119))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37103))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37114))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 37119))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 37123)), (OOC_INT32)0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37085)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)(_check_pointer(i2, 37123)), i1);
l27:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37618)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
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
  i1 = *(OOC_INT32*)((_check_pointer(i0, 37958))+8);
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
    _failed_case(i1, 37950);
    goto l69;
  }
l69:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 42698)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

static void OOC_IR__InitGuardedVar(OOC_IR__GuardedVar gv, OOC_SymbolTable__VarDecl var, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42984))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 42995))+20);
  i3 = *(OOC_INT8*)((_check_pointer(i0, 43038))+24);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43055))+28);
  i5 = (OOC_INT32)gv;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Name)i1, i2, i3, (OOC_Doc__Document)i4);
  *(OOC_INT32*)((_check_pointer(i5, 43075))+40) = i0;
  i0 = (OOC_INT32)type;
  *(OOC_INT32*)((_check_pointer(i5, 43095))+44) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43398))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43398))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43403)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  return (OOC_SymbolTable__Module)i0;
  ;
}

void OOC_IR__InitNode(OOC_IR__Node n, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)n;
  i1 = (OOC_INT32)sym;
  *(OOC_INT32*)(_check_pointer(i0, 43589)) = i1;
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
  *(OOC_INT32*)((_check_pointer(i0, 44002))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)expr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44026)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44046))+4);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44106))+4);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  return (OOC_IR__Expression)i1;
l4:
  _failed_function(43717); return 0;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44294))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 44305));
  i3 = (OOC_INT32)sym;
  i2 = i3!=i2;
  if (!i2) goto l4;
  i2 = *(OOC_INT32*)((_check_pointer(i3, 44391))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44365)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i3, 44433))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44406)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i3, 44478))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44449)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44496))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 44496))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 44505)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i3, (Msg__Msg)i0);
l4:
  *(OOC_INT32*)((_check_pointer(i1, 44533))+32) = i0;
  return;
  ;
}

static OOC_CHAR8 OOC_IR__GetPragmaValue(OOC_IR__Builder b, Config_Section_Options__Option pragma, OOC_INT32 charPos) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Config_Value__Value value;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44716))+4);
  i2 = (OOC_INT32)pragma;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 44749))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 44749))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 44755)), (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 44716))+4);
  i4 = charPos;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44731)))), OOC_Config_Pragmas__HistoryDesc_GetValue)),OOC_Config_Pragmas__HistoryDesc_GetValue)((OOC_Config_Pragmas__History)i0, (void*)(_check_pointer(i3, 44755)), i2, i4);
  value = (Config_Value__Value)i0;
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 44798)))), &_td_Config_Value_Boolean__ValueDesc, 44798)), 44804));
  return i0;
  ;
}

void OOC_IR__BuilderDesc_WarnSym(OOC_IR__Builder b, OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 44982))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__warnings;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  if (!i1) goto l4;
  i1 = (OOC_INT32)OOC_IR__irContext;
  i3 = code;
  i1 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i1, i3);
  e = (Msg__Msg)i1;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 45066))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45040)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "pos", 4, i3);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 45108))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45081)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "line", 5, i3);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 45153))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45124)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "column", 7, i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45171))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45171))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45180)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i3, (Msg__Msg)i1);
  *(OOC_INT32*)((_check_pointer(i2, 45201))+32) = i1;
l4:
  return;
  ;
}

void OOC_IR__BuilderDesc_WarnName(OOC_IR__Builder b, OOC_INT32 code, OOC_SymbolTable__Name name) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)name;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45356))+12);
  i1 = _check_pointer(i1, 45360);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 45360)));
  i1 = i1!=(OOC_CHAR8)'-';
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = *(OOC_INT32*)(_check_pointer(i0, 45423));
  i2 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__warnings;
  i3 = (OOC_INT32)b;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i3, (Config_Section_Options__Option)i2, i1);
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)OOC_IR__irContext;
  i2 = code;
  i1 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i1, i2);
  e = (Msg__Msg)i1;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 45615));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45588)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 45658))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45630)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "line", 5, i2);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 45704))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45674)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "column", 7, i0);
  i0 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45722))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45722))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 45731)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i3, (Msg__Msg)i1);
  *(OOC_INT32*)((_check_pointer(i0, 45752))+32) = i1;
l7:
  return;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_ErrExpr(OOC_IR__Builder b, OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = code;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45885)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, i1, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45917))+16);
  return (OOC_IR__Const)i0;
  ;
}

OOC_SymbolTable__Name OOC_IR__BuilderDesc_GetName(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Name name;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  name = (OOC_SymbolTable__Name)i0;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 46080))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 46090))+16);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 46100))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 46111))+24);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i1);
  return (OOC_SymbolTable__Name)i0;
  ;
}

OOC_SymbolTable__Type OOC_IR__BuilderDesc_AssertType(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46411)))), &_td_OOC_IR__TypeRefDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 46550));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46517)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 16, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46575))+4);
  return (OOC_SymbolTable__Type)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46441))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46452)))), &_td_OOC_SymbolTable__TypeDeclDesc, 46452)), 46461))+40);
  return (OOC_SymbolTable__Type)i0;
l4:
  _failed_function(46177); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertBoolean(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46860))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46867)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46900))+4);
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46911)))), &_td_OOC_SymbolTable__PredefTypeDesc, 46911)), 46922))+32);
  i1 = i1==0;
  
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 47019));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46992)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 22, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l8;
l7:
  return (OOC_IR__Expression)i0;
l8:
  _failed_function(46634); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_Fold(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47138))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 47138))+12);
  i2 = (OOC_INT32)expr;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47148)))), OOC_IR__ConstFoldDesc_TryConstFold)),OOC_IR__ConstFoldDesc_TryConstFold)((OOC_IR__ConstFold)i0, (OOC_IR__Expression)i2);
  return (OOC_IR__Expression)i0;
  ;
}

static OOC_CHAR8 OOC_IR__IsPredefType(OOC_SymbolTable__Type type, OOC_INT16 id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47271)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47302)))), &_td_OOC_SymbolTable__PredefTypeDesc, 47302)), 47313))+32);
  i1 = id;
  i0 = i0==i1;
  
l4:
  return i0;
  ;
}

void OOC_IR__BuilderDesc_CheckFunctionOp(OOC_IR__Builder b, OOC_IR__Expression expr, OOC_Scanner_Builder_BasicList__Symbol op) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48136)))), &_td_OOC_IR__PredefProcDesc);
  if (i1) goto l3;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48160)))), &_td_OOC_IR__CallDesc);
  
  goto l5;
l3:
  i0=OOC_TRUE;
l5:
  if (!i0) goto l7;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)op;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48179)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 23, (OOC_Scanner_Builder_BasicList__Symbol)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 48469))+4) = i0;
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
  *(OOC_INT32*)((_check_pointer(i2, 48778))+8) = i0;
  return;
  ;
}

static OOC_IR__Const OOC_IR__NewConst(OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type, Object_Boxed__Object value) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)type;
  _assert((i0!=(OOC_INT32)0), 127, 48948);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49202)))), OOC_IR__VisitorDesc_VisitConst)),OOC_IR__VisitorDesc_VisitConst)((OOC_IR__Visitor)i0, (OOC_IR__Const)i1);
  return;
  ;
}

Object__String OOC_IR__ConstDesc_ToString(OOC_IR__Const _const) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_const;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49305))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49372))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49372))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49379)))), Object_Boxed__ObjectDesc_ToString)),Object_Boxed__ObjectDesc_ToString)((Object_Boxed__Object)i0);
  return (Object__String)i0;
  goto l4;
l3:
  return (Object__String)((OOC_INT32)_c1);
l4:
  _failed_function(49263); return 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49681))+8);
  i1 = _check_pointer(i1, 49686);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(2, i2, OOC_UINT8, 49686)));
  i1 = i1!=(OOC_CHAR8)'\000';
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 49702))+8);
  i1 = _check_pointer(i1, 49707);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(3, i2, OOC_UINT8, 49707)));
  i1 = i1==(OOC_CHAR8)'\000';
  
l5:
  if (i1) goto l7;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(13);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50148))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50148))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 50153)), (OOC_INT32)0);
  i2 = (OOC_INT32)Object_Boxed__ParseString((void*)(_check_pointer(i2, 50153)), i3);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
  goto l8;
l7:
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50021))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50021))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 50026)), (OOC_INT32)0);
  i2 = (OOC_INT32)Object_Boxed__ParseString((void*)(_check_pointer(i2, 50026)), i3);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
l8:
  _failed_function(49619); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIntConst10(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2;
  Object_BigInt__BigInt v;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50320))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50320))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 50325)), (OOC_INT32)0);
  i1 = (OOC_INT32)Object_BigInt__NewString((void*)(_check_pointer(i1, 50325)), i2, 10);
  i2 = i1==(OOC_INT32)0;
  v = (Object_BigInt__BigInt)i1;
  if (i2) goto l3;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i1 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50362)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50410))+16);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(50213); return 0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIntConst16(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 epos;

  epos = 0;
  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50669))+8);
  i1 = _check_pointer(i1, 50673);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 50673)));
  i1 = i1!=(OOC_CHAR8)'H';
  if (i1) goto l3;
  i1=0;
  goto l9;
l3:
  i1=0;
l4_loop:
  i1 = i1+1;
  epos = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50669))+8);
  i2 = _check_pointer(i2, 50673);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT32, 50673)));
  i2 = i2!=(OOC_CHAR8)'H';
  if (i2) goto l4_loop;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50745))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50745))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 50749)), (OOC_INT32)0);
  i1 = (OOC_INT32)Object_BigInt__NewRegion((void*)(_check_pointer(i2, 50749)), i3, 0, i1, 16);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i1);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_AssertConst(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51148)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 51269));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51237)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 9, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Const)i0;
  goto l4;
l3:
  return (OOC_IR__Const)i0;
l4:
  _failed_function(50867); return 0;
  ;
}

OOC_INT32 OOC_IR__BuilderDesc_AssertIntConst(OOC_IR__Builder b, OOC_IR__Expression expr, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__Const _const;
  OOC_INT32 v;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51835)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  _const = (OOC_IR__Const)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51874))+16);
  i2 = i1!=i2;
  i3 = start;
  if (!i2) goto l20;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51924))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  i4 = end;
  if (!i2) goto l16;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51955))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51955))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 51970)))), &_td_Object_BigInt__BigIntDesc, 51970)), 51977)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 51970)))), &_td_Object_BigInt__BigIntDesc, 51970)));
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 52229));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52193)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 14, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52246))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52246))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52257)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i2, "start", 6, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52299))+32);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52299))+32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52310)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "end", 4, i4);
l20:
  return i3;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_AssertInteger(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_BigInt__BigInt v;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52683))+4);
  i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 52713))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 52763));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52739)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 19, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  v = (Object_BigInt__BigInt)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 52836));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53203))+4);
  i1 = OOC_SymbolTable_TypeRules__IsRealType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53233))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 53280));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53259)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 46, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewLongReal(1.0000000000000000);
  v = (Object_Boxed__LongReal)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 53357));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53733))+4);
  i1 = OOC_SymbolTable_TypeRules__IsNumericType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53763))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 53813));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53789)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 44, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  v = (Object_BigInt__BigInt)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 53886));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54247))+4);
  i1 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54277))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54329));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54303)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 45, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewString((Object__String)((OOC_INT32)_c2));
  v = (Object_Boxed__String)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54406));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54732))+4);
  i1 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54762))+16);
  i2 = i0!=i2;
  if (!i2) goto l5;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54808));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 54788)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 49, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l5:
  i1 = (OOC_INT32)Object_Boxed__NewSet(0);
  v = (Object_Boxed__Set)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54881));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55122))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55122))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 55127)), (OOC_INT32)0);
  i1 = (OOC_INT32)Object_Boxed__ParseLongRealLiteral((void*)(_check_pointer(i1, 55127)), i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55160)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55208))+16);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(54986); return 0;
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
          _failed_function(55541); return 0;
          ;
        }

        
        OOC_CHAR8 OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexToInt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d, OOC_CHAR8 end, OOC_INT32 *result) {
          register OOC_INT32 i0,i1,i2;
          OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)

          OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
          *result = 0;
          i = 0;
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 55935)));
          i1 = end;
          i0 = i0!=i1;
          if (!i0) goto l11;
          i0=0;
l3_loop:
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 55991)));
          i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i0);
          i2 = *result;
          i0 = ((2147483647-i0)>>4)<i2;
          if (!i0) goto l6;
          return OOC_FALSE;
l6:
          i0 = i;
          i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 56102)));
          i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i0);
          *result = ((i2*16)+i0);
          i0 = i;
          i0 = i0+1;
          i = i0;
          i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 55935)));
          i2 = i2!=i1;
          if (i2) goto l3_loop;
l11:
          return OOC_TRUE;
          ;
        }


      i = 0;
      hexCount = 0;
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 56239)));
      i0 = i0!=(OOC_CHAR8)'\000';
      if (i0) goto l3;
      i0=0;
      goto l12;
l3:
      i0=0;
l4_loop:
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 56277)));
      i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf_HexDigit(i0);
      i0 = i0>=0;
      if (!i0) goto l7;
      i0 = hexCount;
      hexCount = (i0+1);
l7:
      i0 = i;
      i0 = i0+1;
      i = i0;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 56239)));
      i1 = i1!=(OOC_CHAR8)'\000';
      if (i1) goto l4_loop;
l12:
      i1 = i0==3;
      if (i1) goto l15;
      i1=OOC_FALSE;
      goto l17;
l15:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 56381)));
      i2 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 56390)));
      i1 = i1==i2;
      
l17:
      if (i1) goto l19;
      i1=OOC_FALSE;
      goto l25;
l19:
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 56404)));
      i1 = i1==(OOC_CHAR8)'"';
      if (i1) goto l22;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 56422)));
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
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index((i0-1), str_0d, OOC_UINT32, 56552)));
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
      i0 = 0<=i0;
      
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
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, str_0d, OOC_UINT8, 56520)));
      return i0;
l52:
      _failed_function(55432); return 0;
      ;
    }


  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57019))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57019))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 57024)), (OOC_INT32)0);
  i0 = OOC_IR__BuilderDesc_NewCharConst16_ValueOf((void*)(_check_pointer(i1, 57024)), i0);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57055)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 4, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 57106))+16);
  return (OOC_IR__Expression)i0;
l12:
  _failed_function(55335); return 0;
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
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57765)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  t = (OOC_SymbolTable__Type)i2;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 57793))+24);
  i3 = i3<0;
  if (i3) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i2, 57889))+24);
  size = i1;
  
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 57841));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57816)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 47, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  size = 1;
  i1=1;
l4:
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i1 = (OOC_INT32)Object_BigInt__NewInt(i1);
  i3 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57917)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Const OOC_IR__BuilderDesc_GetOne(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)Object_BigInt__NewInt(1);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58104)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 58858));
      i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(4);
      i3 = (OOC_INT32)min;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58844)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i3);
      return (OOC_IR__Expression)i0;
      ;
    }


  i0 = (OOC_INT32)set;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__GetMin((OOC_SymbolTable__Type)i0);
  val = (Object_Boxed__Object)i1;
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58979)))), &_td_Object_BigInt__BigIntDesc, 58979);
  min = (Object_BigInt__BigInt)i1;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetMax((OOC_SymbolTable__Type)i0);
  val = (Object_Boxed__Object)i0;
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59037)))), &_td_Object_BigInt__BigIntDesc, 59037);
  max = (Object_BigInt__BigInt)i0;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)expr;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 59060)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i2, (OOC_IR__Expression)i3);
  expr = (OOC_IR__Expression)i3;
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 59096)))), &_td_OOC_IR__ConstDesc);
  if (!i4) goto l10;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 59128))+8);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 59142)))), &_td_Object_BigInt__BigIntDesc, 59142);
  element = (Object_BigInt__BigInt)i4;
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 59168)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i4, (Object__Object)i1);
  i5 = i5<0;
  if (i5) goto l5;
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 59194)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i4, (Object__Object)i0);
  i4 = i4>0;
  
  goto l7;
l5:
  i4=OOC_TRUE;
l7:
  if (!i4) goto l10;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 59258));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 59223)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 14, (OOC_Scanner_Builder_BasicList__Symbol)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 59275))+32);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 59275))+32);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59314)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 59286)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i4, "start", 6, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 59338))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 59338))+32);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59375)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59349)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i2, "end", 4, (i0+1));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59935))+4);
  i2 = (OOC_INT32)abs;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 59951))+8) = i0;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 60134)))), OOC_IR__BuilderDesc_AssertNumeric)),OOC_IR__BuilderDesc_AssertNumeric)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60320)))), OOC_IR__VisitorDesc_VisitAbs)),OOC_IR__VisitorDesc_VisitAbs)((OOC_IR__Visitor)i0, (OOC_IR__Abs)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 60595))+8) = i0;
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60913)))), &_td_OOC_IR__VarDesc);
      if (i1) goto l30;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60931)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l28;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60951)))), &_td_OOC_IR__IndexDesc);
      if (i1) goto l26;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60971)))), &_td_OOC_IR__SelectFieldDesc);
      if (i1) goto l24;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 60997)))), &_td_OOC_IR__TypeGuardDesc);
      if (i1) goto l22;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61021)))), &_td_OOC_IR__ProcedureRefDesc);
      if (i1) goto l20;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61048)))), &_td_OOC_IR__ConstDesc);
      if (i1) goto l15;
      hasAddress = OOC_FALSE;
      i0=OOC_FALSE;
      goto l31;
l15:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 61088))+4);
      i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
      if (!i0) goto l18;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)expr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 61160))+4);
      i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i1);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61120)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)&expr, (OOC_SymbolTable__Type)i1);
      dummy = i0;
l18:
      i0 = (OOC_INT32)expr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 61225))+4);
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 61347));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61319)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 51, (OOC_Scanner_Builder_BasicList__Symbol)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 61647)))), OOC_IR__VisitorDesc_VisitAdr)),OOC_IR__VisitorDesc_VisitAdr)((OOC_IR__Visitor)i0, (OOC_IR__Adr)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 61926))+8) = i0;
  i0 = (OOC_INT32)exp;
  *(OOC_INT32*)((_check_pointer(i1, 61951))+12) = i0;
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
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62129)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i3 = (OOC_INT32)exp;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 62153)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 62335)))), OOC_IR__VisitorDesc_VisitAsh)),OOC_IR__VisitorDesc_VisitAsh)((OOC_IR__Visitor)i0, (OOC_IR__Ash)i1);
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
  *(OOC_INT8*)((_check_pointer(i2, 62645))+8) = i0;
  i0 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i2, 62672))+12) = i0;
  i0 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i2, 62693))+16) = i0;
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62919))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 62931))+4);
  i3 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i4);
  _assert(i3, 127, 62896);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 62996))+4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 63201)))), OOC_IR__VisitorDesc_VisitBinaryArith)),OOC_IR__VisitorDesc_VisitBinaryArith)((OOC_IR__Visitor)i0, (OOC_IR__BinaryArith)i1);
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
  *(OOC_INT8*)((_check_pointer(i2, 63512))+8) = i0;
  i0 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i2, 63539))+12) = i0;
  i0 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i2, 63560))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewBooleanOp(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__BooleanOp op;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__BooleanOp.baseTypes[0]);
  op = (OOC_IR__BooleanOp)i0;
  i1 = (OOC_INT32)left;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 63769))+4);
  i2 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 63780)))), &_td_OOC_SymbolTable__PredefTypeDesc, 63780)), 63791))+32);
  _assert((i2==0), 127, 63757);
  i2 = (OOC_INT32)right;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 63832))+4);
  i3 = *(OOC_INT16*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 63843)))), &_td_OOC_SymbolTable__PredefTypeDesc, 63843)), 63854))+32);
  _assert((i3==0), 127, 63819);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 63932))+4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64127)))), OOC_IR__VisitorDesc_VisitBooleanOp)),OOC_IR__VisitorDesc_VisitBooleanOp)((OOC_IR__Visitor)i0, (OOC_IR__BooleanOp)i1);
  return;
  ;
}

static void OOC_IR__InitCap(OOC_IR__Cap cap, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 64368))+4);
  i2 = (OOC_INT32)cap;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 64384))+8) = i0;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 64561)))), OOC_IR__BuilderDesc_AssertChar)),OOC_IR__BuilderDesc_AssertChar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 64741)))), OOC_IR__VisitorDesc_VisitCap)),OOC_IR__VisitorDesc_VisitCap)((OOC_IR__Visitor)i0, (OOC_IR__Cap)i1);
  return;
  ;
}

static void OOC_IR__InitChangeElement(OOC_IR__ChangeElement ch, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT8 variant, OOC_IR__Expression set, OOC_IR__Expression element) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)set;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 65059))+4);
  i2 = (OOC_INT32)ch;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  i1 = variant;
  *(OOC_INT8*)((_check_pointer(i2, 65074))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 65102))+12) = i0;
  i0 = (OOC_INT32)element;
  *(OOC_INT32*)((_check_pointer(i2, 65122))+16) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 65639)))), OOC_IR__VisitorDesc_VisitChangeElement)),OOC_IR__VisitorDesc_VisitChangeElement)((OOC_IR__Visitor)i0, (OOC_IR__ChangeElement)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 65955))+12) = i0;
  i0 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i1, 65976))+16) = i0;
  i0 = variant;
  *(OOC_INT8*)((_check_pointer(i1, 65999))+8) = i0;
  return;
  ;
}

OOC_IR__Compare OOC_IR__BuilderDesc_NewCompare(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression left, OOC_IR__Expression right) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT8 variant;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 66242))+4);
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
    _failed_case(i1, 66234);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 66711)))), OOC_IR__VisitorDesc_VisitCompare)),OOC_IR__VisitorDesc_VisitCompare)((OOC_IR__Visitor)i0, (OOC_IR__Compare)i1);
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
  *(OOC_INT32*)((_check_pointer(i2, 67011))+8) = i0;
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
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 67283)), (OOC_INT32)0);
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
  i6 = _check_pointer(i0, 67312);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 67312))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 67315))+4);
  type = (OOC_SymbolTable__Type)i6;
  tid = 32767;
  i7 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i6);
  if (i7) goto l18;
  i7 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i6);
  if (i7) goto l12;
  i6 = OOC_SymbolTable_TypeRules__IsSTRING((OOC_SymbolTable__Type)i6);
  i6 = !i6;
  if (!i6) goto l11;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 67806)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 7, (OOC_Scanner_Builder_BasicList__Symbol)i3);
l11:
  i6=32767;
  goto l19;
l12:
  i7 = _check_pointer(i0, 67564);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i6 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i6);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 67550)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i2, (void*)(i7+(_check_index(i4, i8, OOC_UINT32, 67564))*4), (OOC_SymbolTable__Type)i6);
  if (i6) goto l15;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 67681)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 7, (OOC_Scanner_Builder_BasicList__Symbol)i3);
  i6=32767;
  goto l19;
l15:
  i6 = _check_pointer(i0, 67628);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 67628))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 67631))+4);
  i6 = *(OOC_INT16*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 67641)))), &_td_OOC_SymbolTable__PredefTypeDesc, 67641)), 67652))+32);
  tid = i6;
  
  goto l19;
l18:
  i6 = *(OOC_INT16*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 67443)))), &_td_OOC_SymbolTable__PredefTypeDesc, 67443)), 67454))+32);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 68121))+28);
  type = (OOC_SymbolTable__Type)i2;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i0, 68165)), (OOC_INT32)0);
  i4 = i4-1;
  i5 = 0<=i4;
  i = 0;
  if (!i5) goto l41;
  i5=0;
l33_loop:
  i6 = _check_pointer(i0, 68208);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 68208))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 68211))+4);
  i6 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i6);
  if (!i6) goto l36;
  i6 = _check_pointer(i0, 68316);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68302)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(i6+(_check_index(i5, i7, OOC_UINT32, 68316))*4), (OOC_SymbolTable__Type)i2);
  dummy = i6;
  _assert(i6, 127, 68338);
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
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 68011)), (OOC_INT32)0);
  i2 = i2-1;
  i4 = 0<=i2;
  i = 0;
  if (!i4) goto l51;
  i4 = (OOC_INT32)b;
  i5=0;
l45_loop:
  i6 = _check_pointer(i0, 68051);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 68037)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i4, (void*)(i6+(_check_index(i5, i7, OOC_UINT32, 68051))*4), (OOC_SymbolTable__Type)i1);
  dummy = i6;
  _assert(i6, 127, 68071);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 68618)))), OOC_IR__VisitorDesc_VisitConcat)),OOC_IR__VisitorDesc_VisitConcat)((OOC_IR__Visitor)i0, (OOC_IR__Concat)i1);
  return;
  ;
}

static void OOC_IR__InitDeref(OOC_IR__Deref d, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression pointer, OOC_CHAR8 checkPointer) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)pointer;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68908))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 68919)))), &_td_OOC_SymbolTable__PointerDesc, 68919)), 68927))+32);
  i2 = (OOC_INT32)d;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 68945))+8) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 68994))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69005)))), &_td_OOC_SymbolTable__PointerDesc, 69005)), 69013))+32);
  *(OOC_INT32*)((_check_pointer(i2, 68972))+12) = i0;
  i0 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i2, 69030))+16) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69076))+12);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69088)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i0) goto l3;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69108))+12);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69120)))), &_td_OOC_SymbolTable__ArrayDesc);
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  _assert(i0, 127, 69066);
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewDeref(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_IR__Deref i;

  i0 = (OOC_INT32)design;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69277)))), &_td_OOC_IR__SelectProcDesc);
  if (i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 69890)))), OOC_IR__BuilderDesc_CheckFunctionOp)),OOC_IR__BuilderDesc_CheckFunctionOp)((OOC_IR__Builder)i1, (OOC_IR__Expression)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69938))+4);
  i3 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 69944)))), &_td_OOC_SymbolTable__PointerDesc));
  if (i3) goto l5;
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Deref.baseTypes[0]);
  i = (OOC_IR__Deref)i3;
  i4 = *(OOC_INT32*)((_check_pointer(i2, 70142))+16);
  i5 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__derefCheck;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i1, (Config_Section_Options__Option)i5, i4);
  OOC_IR__InitDeref((OOC_IR__Deref)i3, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i0, i1);
  return (OOC_IR__Expression)i3;
  goto l19;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 70008));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 69981)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 21, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l19;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69364))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69376))+44);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69364))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 69376))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69439))+20);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 69447))+44);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 69391)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 69391)), 69400)))), OOC_SymbolTable_Namespace__ExtendedDesc_GetSuperProcByIndex)),OOC_SymbolTable_Namespace__ExtendedDesc_GetSuperProcByIndex)((OOC_SymbolTable_Namespace__Extended)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 69391)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 69391)), i3);
  *(OOC_INT32*)((_check_pointer(i0, 69346))+20) = i1;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 69478))+28);
  if (i1) goto l17;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69567))+20);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l15;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69681))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 69689))+52);
  *(OOC_INT32*)((_check_pointer(i0, 69665))+4) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 69717))+28) = OOC_TRUE;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 69758))+20);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 69765))+42);
  if (!i1) goto l14;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 69793)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 58, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l14:
  return (OOC_IR__Expression)i0;
  goto l19;
l15:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69603)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 59, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l19;
l17:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)sym;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 69513)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 60, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
l19:
  _failed_function(69177); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 70345)))), OOC_IR__VisitorDesc_VisitDeref)),OOC_IR__VisitorDesc_VisitDeref)((OOC_IR__Visitor)i0, (OOC_IR__Deref)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 70640))+8) = i0;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 70838)))), OOC_IR__BuilderDesc_AssertReal)),OOC_IR__BuilderDesc_AssertReal)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 71042)))), OOC_IR__VisitorDesc_VisitEntier)),OOC_IR__VisitorDesc_VisitEntier)((OOC_IR__Visitor)i0, (OOC_IR__Entier)i1);
  return;
  ;
}

static void OOC_IR__InitIndex(OOC_IR__Index i, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression array, OOC_IR__Expression index, OOC_CHAR8 checkIndex) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)array;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 71337))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 71348)))), &_td_OOC_SymbolTable__ArrayDesc, 71348)), 71354))+36);
  i2 = (OOC_INT32)i;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 71375))+8) = i0;
  i0 = (OOC_INT32)index;
  *(OOC_INT32*)((_check_pointer(i2, 71397))+12) = i0;
  i0 = checkIndex;
  *(OOC_UINT8*)((_check_pointer(i2, 71419))+16) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewIndex(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression array, OOC_IR__Expression index) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_CHAR8 checkIndex;
  OOC_SymbolTable__Array a;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 71700))+16);
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__indexCheck;
  i1 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i3, i1);
  checkIndex = i1;
  i3 = (OOC_INT32)array;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 71718)))), OOC_IR__BuilderDesc_CheckFunctionOp)),OOC_IR__BuilderDesc_CheckFunctionOp)((OOC_IR__Builder)i2, (OOC_IR__Expression)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 71761))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 71768)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i4) goto l3;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 71805)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3);
  array = (OOC_IR__Expression)i3;
l3:
  i3 = (OOC_INT32)array;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 71853))+4);
  i4 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 71860)))), &_td_OOC_SymbolTable__ArrayDesc));
  if (i4) goto l17;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 71945))+4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 71955)))), &_td_OOC_SymbolTable__ArrayDesc, 71955);
  a = (OOC_SymbolTable__Array)i4;
  if (i1) goto l8;
  i1=OOC_FALSE;
  goto l9;
l8:
  i1 = *(OOC_UINT8*)((_check_pointer(i4, 71997))+33);
  
l9:
  checkIndex = i1;
  i5 = (OOC_INT32)index;
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 72029)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  index = (OOC_IR__Expression)i5;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 72067)))), &_td_OOC_IR__ConstDesc);
  if (!i6) goto l16;
  i6 = *(OOC_UINT8*)((_check_pointer(i4, 72093))+32);
  if (i6) goto l14;
  i4 = *(OOC_INT32*)((_check_pointer(i4, 72377))+44);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 72350)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5, 0, i4);
  goto l16;
l14:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 72278)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5, 0, 2147483647);
l16:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Index.baseTypes[0]);
  OOC_IR__InitIndex((OOC_IR__Index)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i5, i1);
  return (OOC_IR__Expression)i2;
  goto l18;
l17:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 71893)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i2, 15, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
l18:
  _failed_function(71487); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 72659)))), OOC_IR__VisitorDesc_VisitIndex)),OOC_IR__VisitorDesc_VisitIndex)((OOC_IR__Visitor)i0, (OOC_IR__Index)i1);
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
  *(OOC_INT8*)((_check_pointer(i1, 73006))+8) = i0;
  i0 = (OOC_INT32)array;
  *(OOC_INT32*)((_check_pointer(i1, 73035))+12) = i0;
  i0 = (OOC_INT32)arrayVariable;
  *(OOC_INT32*)((_check_pointer(i1, 73060))+20) = i0;
  i0 = dim;
  *(OOC_INT32*)((_check_pointer(i1, 73101))+16) = i0;
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
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 73404)))), &_td_OOC_IR__IndexDesc);
  if (i2) goto l3;
  i2=i1;
  goto l9;
l3:
  i2=i1;
l4_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 73454)))), &_td_OOC_IR__IndexDesc, 73454)), 73460))+8);
  i3 = dim;
  arrayVariable = (OOC_IR__Expression)i2;
  dim = (i3+1);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 73404)))), &_td_OOC_IR__IndexDesc);
  if (i3) goto l4_loop;
l9:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73521))+4);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 73528)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  i4 = dim;
  if (i3) goto l24;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73608))+4);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 73615)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i3) goto l14;
  i3=OOC_FALSE;
  goto l16;
l14:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73662))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73662))+4);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 73673)))), &_td_OOC_SymbolTable__ArrayDesc, 73673)), 73679)))), OOC_SymbolTable__ArrayDesc_GetOpenDimensions)),OOC_SymbolTable__ArrayDesc_GetOpenDimensions)((OOC_SymbolTable__Array)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 73673)))), &_td_OOC_SymbolTable__ArrayDesc, 73673)));
  i3 = i4>=i3;
  
l16:
  if (i3) goto l22;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 73763)))), &_td_OOC_IR__VarDesc);
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
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 73962))+4);
  i5 = *(OOC_UINT8*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 73972)))), &_td_OOC_SymbolTable__ArrayDesc, 73972)), 73978))+33);
  i5 = !i5;
  
l34:
  if (!i5) goto l36;
  i5 = (OOC_INT32)b;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 74042));
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 74012)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i5, 54, (OOC_Scanner_Builder_BasicList__Symbol)i6);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74283)))), OOC_IR__VisitorDesc_VisitLen)),OOC_IR__VisitorDesc_VisitLen)((OOC_IR__Visitor)i0, (OOC_IR__Len)i1);
  return;
  ;
}

static void OOC_IR__InitNegate(OOC_IR__Negate neg, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 74528))+4);
  i2 = (OOC_INT32)neg;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 74544))+8) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 74913)))), OOC_IR__VisitorDesc_VisitNegate)),OOC_IR__VisitorDesc_VisitNegate)((OOC_IR__Visitor)i0, (OOC_IR__Negate)i1);
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
  *(OOC_INT32*)((_check_pointer(i2, 75217))+8) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 75660)))), OOC_IR__VisitorDesc_VisitNewBlock)),OOC_IR__VisitorDesc_VisitNewBlock)((OOC_IR__Visitor)i0, (OOC_IR__NewBlock)i1);
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
  *(OOC_INT32*)((_check_pointer(i2, 75975))+8) = i0;
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
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 76316)), (OOC_INT32)0);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], (i1-1));
  length = (OOC_IR__ExpressionList)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 76354)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l10;
  i3 = (OOC_INT32)b;
  i4=0;
l5_loop:
  i5 = _check_pointer(i1, 76376);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = _check_pointer(i0, 76403);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i9 = i4+1;
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i9, i8, OOC_UINT32, 76403))*4);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 76384)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i3, (OOC_IR__Expression)i7);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 76376))*4) = i7;
  i4 = i9<=i2;
  i = i9;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 76685)))), OOC_IR__VisitorDesc_VisitNewObject)),OOC_IR__VisitorDesc_VisitNewObject)((OOC_IR__Visitor)i0, (OOC_IR__NewObject)i1);
  return;
  ;
}

static void OOC_IR__InitNot(OOC_IR__Not neg, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 76927))+4);
  i2 = (OOC_INT32)neg;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 76943))+8) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77285)))), OOC_IR__VisitorDesc_VisitNot)),OOC_IR__VisitorDesc_VisitNot)((OOC_IR__Visitor)i0, (OOC_IR__Not)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 77558))+8) = i0;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 77735)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 77918)))), OOC_IR__VisitorDesc_VisitOdd)),OOC_IR__VisitorDesc_VisitOdd)((OOC_IR__Visitor)i0, (OOC_IR__Odd)i1);
  return;
  ;
}

static void OOC_IR__InitSelectField(OOC_IR__SelectField sf, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression record, OOC_SymbolTable__FieldDecl field, OOC_Scanner_Builder_BasicList__Symbol fieldSym) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)field;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 78246))+40);
  i2 = (OOC_INT32)sf;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)record;
  *(OOC_INT32*)((_check_pointer(i2, 78261))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 78286))+12) = i0;
  i0 = (OOC_INT32)fieldSym;
  *(OOC_INT32*)((_check_pointer(i2, 78309))+16) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 78818)))), OOC_IR__VisitorDesc_VisitSelectField)),OOC_IR__VisitorDesc_VisitSelectField)((OOC_IR__Visitor)i0, (OOC_IR__SelectField)i1);
  return;
  ;
}

static void OOC_IR__InitSelectProc(OOC_IR__SelectProc sp, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression receiver, OOC_CHAR8 checkPointer, OOC_SymbolTable__Record recordType, OOC_SymbolTable__ProcDecl tbProc, OOC_Scanner_Builder_BasicList__Symbol tbProcSym, OOC_CHAR8 isStaticCall) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)tbProc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 79275))+52);
  i2 = (OOC_INT32)sp;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  i1 = (OOC_INT32)receiver;
  *(OOC_INT32*)((_check_pointer(i2, 79296))+8) = i1;
  i1 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i2, 79326))+12) = i1;
  i1 = (OOC_INT32)recordType;
  *(OOC_INT32*)((_check_pointer(i2, 79364))+16) = i1;
  *(OOC_INT32*)((_check_pointer(i2, 79398))+20) = i0;
  i0 = (OOC_INT32)tbProcSym;
  *(OOC_INT32*)((_check_pointer(i2, 79424))+24) = i0;
  i0 = isStaticCall;
  *(OOC_UINT8*)((_check_pointer(i2, 79456))+28) = i0;
  return;
  ;
}

OOC_IR__SelectProc OOC_IR__BuilderDesc_NewSelectProc(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression receiver, OOC_SymbolTable__Record recordType, OOC_SymbolTable__ProcDecl tbProc, OOC_Scanner_Builder_BasicList__Symbol tbProcSym, OOC_CHAR8 isStaticCall) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 79962))+16);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 80296)))), OOC_IR__VisitorDesc_VisitSelectProc)),OOC_IR__VisitorDesc_VisitSelectProc)((OOC_IR__Visitor)i0, (OOC_IR__SelectProc)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 80598))+8) = i0;
  i0 = (OOC_INT32)set;
  *(OOC_INT32*)((_check_pointer(i1, 80625))+12) = i0;
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 80857))+4);
  i4 = (OOC_INT32)element;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 80828)))), OOC_IR__BuilderDesc_ValidSetElement)),OOC_IR__BuilderDesc_ValidSetElement)((OOC_IR__Builder)i1, (OOC_IR__Expression)i4, (OOC_SymbolTable__Type)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81057)))), OOC_IR__VisitorDesc_VisitSetMember)),OOC_IR__VisitorDesc_VisitSetMember)((OOC_IR__Visitor)i0, (OOC_IR__SetMember)i1);
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
  *(OOC_INT8*)((_check_pointer(i2, 81354))+8) = i0;
  i0 = (OOC_INT32)left;
  *(OOC_INT32*)((_check_pointer(i2, 81381))+12) = i0;
  i0 = (OOC_INT32)right;
  *(OOC_INT32*)((_check_pointer(i2, 81402))+16) = i0;
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 81611))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 81623))+4);
  i3 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i4);
  _assert(i3, 127, 81588);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 81682))+4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 81857)))), OOC_IR__VisitorDesc_VisitSetOp)),OOC_IR__VisitorDesc_VisitSetOp)((OOC_IR__Visitor)i0, (OOC_IR__SetOp)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 82177))+8) = i0;
  i0 = (OOC_INT32)to;
  *(OOC_INT32*)((_check_pointer(i1, 82201))+12) = i0;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 82649)))), OOC_IR__BuilderDesc_ValidSetElement)),OOC_IR__BuilderDesc_ValidSetElement)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1, (OOC_SymbolTable__Type)i0);
  from = (OOC_IR__Expression)i1;
  i1 = (OOC_INT32)to;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 82693)))), OOC_IR__BuilderDesc_ValidSetElement)),OOC_IR__BuilderDesc_ValidSetElement)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1, (OOC_SymbolTable__Type)i0);
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 82498)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i0, (Object_Boxed__Object)i2);
  return (OOC_IR__Expression)i0;
l11:
  _failed_function(82256); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 82993)))), OOC_IR__VisitorDesc_VisitSetRange)),OOC_IR__VisitorDesc_VisitSetRange)((OOC_IR__Visitor)i0, (OOC_IR__SetRange)i1);
  return;
  ;
}

OOC_CHAR8 OOC_IR__SetRangeDesc_IsEmpty(OOC_IR__SetRange range) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)range;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83153))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83160)))), &_td_OOC_IR__ConstDesc, 83160)), 83166))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83153))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83185))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 83160)))), &_td_OOC_IR__ConstDesc, 83160)), 83166))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83190)))), &_td_OOC_IR__ConstDesc, 83190)), 83196))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83173)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i2, (Object__Object)i0);
  return (i0>0);
  ;
}

OOC_CHAR8 OOC_IR__SetRangeDesc_IntersectsWith(OOC_IR__SetRange range, OOC_IR__SetRange range2) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)range;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83423))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83427)))), &_td_OOC_IR__ConstDesc, 83427)), 83433))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83423))+12);
  i3 = (OOC_INT32)range2;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 83452))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 83427)))), &_td_OOC_IR__ConstDesc, 83427)), 83433))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 83458)))), &_td_OOC_IR__ConstDesc, 83458)), 83464))+8);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83439)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i2, (Object__Object)i4);
  i1 = i1<0;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83496))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83502)))), &_td_OOC_IR__ConstDesc, 83502)), 83508))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83496))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 83527))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 83502)))), &_td_OOC_IR__ConstDesc, 83502)), 83508))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 83531)))), &_td_OOC_IR__ConstDesc, 83531)), 83537))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 83514)))), Object_Boxed__ObjectDesc_Cmp)),Object_Boxed__ObjectDesc_Cmp)((Object_Boxed__Object)i0, (Object__Object)i2);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 83832))+4);
  i2 = (OOC_INT32)shift;
  i3 = (OOC_INT32)sym;
  OOC_IR__InitOperator((OOC_IR__Operator)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1);
  *(OOC_INT32*)((_check_pointer(i2, 83850))+8) = i0;
  i0 = (OOC_INT32)by;
  *(OOC_INT32*)((_check_pointer(i2, 83877))+12) = i0;
  i0 = rotate;
  *(OOC_UINT8*)((_check_pointer(i2, 83898))+16) = i0;
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 84217))+16);
      i1 = (OOC_INT32)expr;
      i0 = i1!=i0;
      if (!i0) goto l14;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84268))+4);
      i0 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i0);
      if (i0) goto l5;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84309))+4);
      i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
      
      goto l7;
l5:
      i0=OOC_TRUE;
l7:
      if (i0) goto l9;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 84352))+4);
      i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 11);
      
      goto l10;
l9:
      i0=OOC_TRUE;
l10:
      i0 = !i0;
      if (!i0) goto l14;
      i0 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 84416));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84389)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i2);
      i0 = (OOC_INT32)Object_BigInt__NewInt(1);
      v = (Object_BigInt__BigInt)i0;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 84486));
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
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 84686)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i3, (OOC_IR__Expression)i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 84891)))), OOC_IR__VisitorDesc_VisitShift)),OOC_IR__VisitorDesc_VisitShift)((OOC_IR__Visitor)i0, (OOC_IR__Shift)i1);
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
  *(OOC_INT32*)((_check_pointer(i2, 85196))+8) = i0;
  return;
  ;
}

OOC_IR__TypeCast OOC_IR__BuilderDesc_NewTypeCast(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression typeExpr, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)typeExpr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85424)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  type = (OOC_SymbolTable__Type)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 85459))+24);
  i2 = i2<0;
  i3 = (OOC_INT32)expr;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 85478))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 85483))+24);
  i2 = i2<0;
  
  goto l5;
l3:
  i2=OOC_TRUE;
l5:
  if (i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 85521))+4);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 85509))+24);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 85526))+24);
  i2 = i4!=i2;
  
  goto l9;
l7:
  i2=OOC_TRUE;
l9:
  if (!i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 85577));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85545)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 52, (OOC_Scanner_Builder_BasicList__Symbol)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 85838)))), OOC_IR__VisitorDesc_VisitTypeCast)),OOC_IR__VisitorDesc_VisitTypeCast)((OOC_IR__Visitor)i0, (OOC_IR__TypeCast)i1);
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
  *(OOC_INT32*)((_check_pointer(i2, 86145))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeConv(OOC_IR__Builder b, OOC_SymbolTable__Type type, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR__TypeConv conv;

  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86312))+4);
  i2 = (OOC_INT32)type;
  i1 = i1==i2;
  if (i1) goto l10;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86427)))), &_td_OOC_IR__TypeConvDesc);
  if (i1) goto l5;
  i1=OOC_FALSE;
  goto l7;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 86468))+4);
  i1 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
  
l7:
  if (!i1) goto l9;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86535)))), &_td_OOC_IR__TypeConvDesc, 86535)), 86544))+8);
  expr = (OOC_IR__Expression)i0;
l9:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeConv.baseTypes[0]);
  conv = (OOC_IR__TypeConv)i0;
  i1 = (OOC_INT32)expr;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 86610));
  OOC_IR__InitTypeConv((OOC_IR__TypeConv)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i1);
  return (OOC_IR__Expression)i0;
  goto l11;
l10:
  return (OOC_IR__Expression)i0;
l11:
  _failed_function(86206); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 86827)))), OOC_IR__VisitorDesc_VisitTypeConv)),OOC_IR__VisitorDesc_VisitTypeConv)((OOC_IR__Visitor)i0, (OOC_IR__TypeConv)i1);
  return;
  ;
}

OOC_CHAR8 OOC_IR__BuilderDesc_Widen(OOC_IR__Builder b, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 88311))+4);
  i2 = (OOC_INT32)type;
  _assert((i1!=(OOC_INT32)0), 127, 88299);
  _assert((i2!=(OOC_INT32)0), 127, 88329);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 88384))+4);
  i0 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  if (i0) goto l79;
  i0 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 88509))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 88516)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l73;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 88852))+4);
  i0 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
  if (i0) goto l71;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89101))+4);
  i0 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i2);
  if (i0) goto l69;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89263))+4);
  i0 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i0, 16);
  if (i0) goto l11;
  i0=OOC_FALSE;
  goto l13;
l11:
  i0 = OOC_SymbolTable_TypeRules__IsNilCompatible((OOC_SymbolTable__Type)i2);
  
l13:
  if (i0) goto l67;
  i0 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89439))+4);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89446)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i0) goto l17;
  i0=OOC_FALSE;
  goto l19;
l17:
  i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i2, 12);
  
l19:
  if (i0) goto l65;
  i0 = (OOC_INT32)*expr;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89603)))), &_td_OOC_IR__ConstDesc);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 89683))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l29:
  if (i0) goto l31;
  i0=OOC_FALSE;
  goto l33;
l31:
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i2);
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 89798))+4);
  i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i1);
  i0 = OOC_SymbolTable_TypeRules__IncludesType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  
l33:
  if (i0) goto l63;
  i0 = (OOC_INT32)*expr;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89964)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l37;
  i0=OOC_FALSE;
  goto l39;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90008))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l39:
  if (i0) goto l41;
  i0=OOC_FALSE;
  goto l43;
l41:
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 90041)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l43:
  if (i0) goto l45;
  i0=OOC_FALSE;
  goto l47;
l45:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 90091)))), &_td_OOC_SymbolTable__ArrayDesc, 90091)), 90097))+36);
  i0 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i0);
  
l47:
  if (i0) goto l61;
  i0 = (OOC_INT32)*expr;
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 90270)))), &_td_OOC_IR__ConstDesc);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90343))+4);
  i0 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i0);
  i0 = i0!=(OOC_INT32)0;
  
l57:
  if (i0) goto l59;
  return OOC_FALSE;
  goto l80;
l59:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 90458))+28);
  i2 = (OOC_INT32)*expr;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 90442)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i1, (OOC_IR__Expression)i2);
  *expr = (OOC_IR__Expression)i0;
  return OOC_TRUE;
  goto l80;
l61:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 90230)))), &_td_OOC_SymbolTable__ArrayDesc, 90230)), 90236))+36);
  i1 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i1);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 90184)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i1);
  return i0;
  goto l80;
l63:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*expr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89899)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89890)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89015)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i0, (OOC_SymbolTable__Type)i2, (OOC_IR__Expression)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 89006)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  *expr = (OOC_IR__Expression)i0;
  return OOC_TRUE;
  goto l80;
l73:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 88665)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l76;
  i0=OOC_FALSE;
  goto l77;
l76:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 88777))+4);
  i0 = OOC_SymbolTable_TypeRules__FormalParamsMatch((OOC_SymbolTable__FormalPars)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 88727)))), &_td_OOC_SymbolTable__FormalParsDesc, 88727)), (OOC_SymbolTable__FormalPars)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 88788)))), &_td_OOC_SymbolTable__FormalParsDesc, 88788)), OOC_FALSE);
  
l77:
  return i0;
  goto l80;
l79:
  return OOC_TRUE;
l80:
  _failed_function(86888); return 0;
  ;
}

OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign(OOC_IR__Builder b, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;
  OOC_IR__Expression oldExpr;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign_LengthOk();
    
    OOC_CHAR8 OOC_IR__BuilderDesc_WidenForAssign_LengthOk() {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*expr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 91082))+4);
      i0 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i0);
      if (i0) goto l3;
      return OOC_TRUE;
      goto l8;
l3:
      i0 = (OOC_INT32)type;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91115)))), &_td_OOC_SymbolTable__ArrayDesc, 91115)), 91121))+32);
      if (i1) goto l6;
      i1 = (OOC_INT32)*expr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91200)))), &_td_OOC_IR__ConstDesc, 91200)), 91206))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91220)))), &_td_Object_Boxed__StringDesc, 91220)), 91227));
      i1 = *(OOC_INT32*)(_check_pointer(i1, 91234));
      i0 = *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 91272)))), &_td_OOC_SymbolTable__ArrayDesc, 91272)), 91278))+44);
      return (i1<i0);
      goto l8;
l6:
      return OOC_FALSE;
l8:
      _failed_function(91019); return 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 91471))+4);
  i1 = OOC_SymbolTable_TypeRules__IsByteCompatible((OOC_SymbolTable__Type)i1);
  
l5:
  if (i1) goto l11;
  i1 = (OOC_INT32)b;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 91490)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i0);
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
  _failed_function(90579); return 0;
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
      _failed_function(92214); return 0;
      ;
    }


  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*right;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92749))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 92731)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)left, (OOC_SymbolTable__Type)i1);
  if (i1) goto l3;
  i1 = (OOC_INT32)*left;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92778))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 92760)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)right, (OOC_SymbolTable__Type)i1);
  
  goto l5;
l3:
  i0=OOC_TRUE;
l5:
  if (i0) goto l21;
  i0 = (OOC_INT32)*left;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 92821)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l9;
  i1=OOC_FALSE;
  goto l11;
l9:
  i1 = (OOC_INT32)*right;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92840)))), &_td_OOC_IR__ConstDesc);
  
l11:
  if (!i1) goto l22;
  i1 = (OOC_INT32)*right;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 92882))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 92894))+4);
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_WidenToCommon_CommonBase((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  i1 = i0!=(OOC_INT32)0;
  base = (OOC_SymbolTable__Type)i0;
  if (!i1) goto l22;
  i1 = (OOC_INT32)b;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 92995)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)left, (OOC_SymbolTable__Type)i0);
  if (i2) goto l17;
  i0=OOC_FALSE;
  goto l18;
l17:
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 93017)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)right, (OOC_SymbolTable__Type)i0);
  
l18:
  _assert(i0, 127, 92987);
  return OOC_TRUE;
  goto l22;
l21:
  return OOC_TRUE;
l22:
  return OOC_FALSE;
  ;
}

static void OOC_IR__MakeAssignmentCompatible(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression *expr, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)type;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93467)))), OOC_IR__BuilderDesc_WidenForAssign)),OOC_IR__BuilderDesc_WidenForAssign)((OOC_IR__Builder)i0, (void*)(OOC_INT32)expr, (OOC_SymbolTable__Type)i1);
  i1 = !i1;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 93508))+16);
  i2 = (OOC_INT32)*expr;
  i1 = i2!=i1;
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 93532)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 24, (OOC_Scanner_Builder_BasicList__Symbol)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 93866))+8) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeTag(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression design) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)design;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 94034))+4);
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94040)))), &_td_OOC_SymbolTable__RecordDesc));
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 94072))+4);
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94082)))), &_td_OOC_SymbolTable__RecordDesc, 94082)), 94089))+30);
  i1 = !i1;
  
  goto l5;
l3:
  i1=OOC_TRUE;
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 94141));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 94116)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 55, (OOC_Scanner_Builder_BasicList__Symbol)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 94393)))), OOC_IR__VisitorDesc_VisitTypeTag)),OOC_IR__VisitorDesc_VisitTypeTag)((OOC_IR__Visitor)i0, (OOC_IR__TypeTag)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 94850))+8) = i0;
  i0 = (OOC_INT32)referenceType;
  *(OOC_INT32*)((_check_pointer(i1, 94874))+12) = i0;
  i0 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i1, 94916))+16) = i0;
  i0 = (OOC_INT32)origExpr;
  *(OOC_INT32*)((_check_pointer(i1, 94956))+20) = i0;
  i0 = (OOC_INT32)origType;
  *(OOC_INT32*)((_check_pointer(i1, 94988))+24) = i0;
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 95368))+4);
      type = (OOC_SymbolTable__Type)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95390)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i2) goto l11;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95563)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i0) goto l5;
      return OOC_FALSE;
      goto l20;
l5:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 95600))+32);
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95610)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i0) goto l8;
      i0=OOC_FALSE;
      goto l9;
l8:
      i0 = *(OOC_UINT8*)((_check_pointer(i1, 95632))+41);
      i0 = !i0;
      
l9:
      return i0;
      goto l20;
l11:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95428)))), &_td_OOC_IR__VarDesc));
      if (i1) goto l18;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95457)))), &_td_OOC_IR__VarDesc, 95457)), 95461))+8);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 95471)))), &_td_OOC_SymbolTable__VarDeclDesc, 95471)), 95479))+50);
      if (i1) goto l16;
      i0=OOC_FALSE;
      goto l19;
l16:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95511)))), &_td_OOC_IR__VarDesc, 95511)), 95515))+8);
      i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95525)))), &_td_OOC_SymbolTable__VarDeclDesc, 95525)), 95533))+55);
      
      goto l19;
l18:
      i0=OOC_TRUE;
l19:
      return i0;
l20:
      _failed_function(95266); return 0;
      ;
    }


  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)referenceType;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95738)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  i3 = i2==(OOC_INT32)0;
  refType = (OOC_SymbolTable__Type)i2;
  if (i3) goto l25;
  i3 = (OOC_INT32)expr;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 95865))+4);
  i2 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i4);
  i2 = !i2;
  if (i2) goto l23;
  i0 = OOC_IR__BuilderDesc_NewTypeTest_HasDynamicType((OOC_IR__Expression)i3);
  i0 = !i0;
  if (i0) goto l21;
  i0 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 96291))+4);
  i2 = (OOC_INT32)refType;
  i1 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1);
  i3 = (OOC_INT32)referenceType;
  i4 = (OOC_INT32)b;
  if (!i1) goto l9;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 96353));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 96312)))), OOC_IR__BuilderDesc_WarnSym)),OOC_IR__BuilderDesc_WarnSym)((OOC_IR__Builder)i4, 61, (OOC_Scanner_Builder_BasicList__Symbol)i1);
l9:
  origExpr = (OOC_IR__Expression)i0;
  i1 = (OOC_INT32)sym;
  i5 = *(OOC_INT32*)((_check_pointer(i1, 96469))+16);
  i6 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__derefCheck;
  i4 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i4, (Config_Section_Options__Option)i6, i5);
  checkPointer = i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96492)))), &_td_OOC_IR__DerefDesc);
  if (i5) goto l15;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 96562))+4);
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 96569)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i5) goto l16;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 96621)))), &_td_OOC_SymbolTable__PointerDesc, 96621)), 96629))+32);
  refType = (OOC_SymbolTable__Type)i2;
  goto l16;
l15:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96528)))), &_td_OOC_IR__DerefDesc, 96528)), 96534))+8);
  expr = (OOC_IR__Expression)i2;
l16:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeTest.baseTypes[0]);
  test = (OOC_IR__TypeTest)i2;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 96694)))), &_td_OOC_IR__TypeRefDesc);
  if (i5) goto l19;
  typeRef = (OOC_IR__TypeRef)(OOC_INT32)0;
  i3=(OOC_INT32)0;
  goto l20;
l19:
  i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 96744)))), &_td_OOC_IR__TypeRefDesc, 96744);
  typeRef = (OOC_IR__TypeRef)i3;
  
l20:
  i5 = (OOC_INT32)refType;
  i6 = (OOC_INT32)expr;
  OOC_IR__InitTypeTest((OOC_IR__TypeTest)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i6, (OOC_SymbolTable__Record)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 96849)))), &_td_OOC_SymbolTable__RecordDesc, 96849)), i4, (OOC_IR__Expression)i0, (OOC_IR__TypeRef)i3);
  return (OOC_IR__Expression)i2;
  goto l26;
l21:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 96241));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 96211)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 43, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l26;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 95935));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 95892)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 17, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l26;
l25:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 95810))+16);
  return (OOC_IR__Expression)i0;
l26:
  _failed_function(95056); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 97111)))), OOC_IR__VisitorDesc_VisitTypeTest)),OOC_IR__VisitorDesc_VisitTypeTest)((OOC_IR__Visitor)i0, (OOC_IR__TypeTest)i1);
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
  *(OOC_INT32*)((_check_pointer(i2, 97485))+8) = i0;
  i0 = checkPointer;
  *(OOC_UINT8*)((_check_pointer(i2, 97510))+12) = i0;
  i0 = checkType;
  *(OOC_UINT8*)((_check_pointer(i2, 97551))+13) = i0;
  return;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewTypeGuard(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression design, OOC_IR__TypeRef ref) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SymbolTable__Type guardType;
  OOC_IR__Expression test;
  OOC_IR__TypeGuard guard;

  i0 = (OOC_INT32)ref;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 97828))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 97839)))), &_td_OOC_SymbolTable__TypeDeclDesc, 97839)), 97848))+40);
  guardType = (OOC_SymbolTable__Type)i1;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)design;
  i4 = (OOC_INT32)sym;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 97859)))), OOC_IR__BuilderDesc_CheckFunctionOp)),OOC_IR__BuilderDesc_CheckFunctionOp)((OOC_IR__Builder)i2, (OOC_IR__Expression)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 97901)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i3, (OOC_IR__Expression)i0);
  test = (OOC_IR__Expression)i0;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 97943)))), &_td_OOC_IR__TypeTestDesc);
  if (i3) goto l3;
  return (OOC_IR__Expression)i0;
  goto l4;
l3:
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__TypeGuard.baseTypes[0]);
  guard = (OOC_IR__TypeGuard)i3;
  i5 = *(OOC_INT32*)((_check_pointer(i4, 98094))+16);
  i6 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__derefCheck;
  i5 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i6, i5);
  i6 = *(OOC_INT32*)((_check_pointer(i4, 98162))+16);
  i7 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__typeGuard;
  i2 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i2, (Config_Section_Options__Option)i7, i6);
  OOC_IR__InitTypeGuard((OOC_IR__TypeGuard)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i1, (OOC_IR__TypeTest)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 98022)))), &_td_OOC_IR__TypeTestDesc, 98022)), i5, i2);
  return (OOC_IR__Expression)i3;
l4:
  _failed_function(97623); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 98394)))), OOC_IR__VisitorDesc_VisitTypeGuard)),OOC_IR__VisitorDesc_VisitTypeGuard)((OOC_IR__Visitor)i0, (OOC_IR__TypeGuard)i1);
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
  *(OOC_INT32*)((_check_pointer(i2, 98718))+8) = i0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 99231))+24);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 99450)))), OOC_IR__VisitorDesc_VisitModuleRef)),OOC_IR__VisitorDesc_VisitModuleRef)((OOC_IR__Visitor)i0, (OOC_IR__ModuleRef)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 100176)))), OOC_IR__VisitorDesc_VisitPredefProc)),OOC_IR__VisitorDesc_VisitPredefProc)((OOC_IR__Visitor)i0, (OOC_IR__PredefProc)i1);
  return;
  ;
}

static void OOC_IR__InitProcedureRef(OOC_IR__ProcedureRef procRef, OOC_Scanner_Builder_BasicList__Symbol name, OOC_SymbolTable__ProcDecl decl) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)decl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 100463))+52);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 100905)))), OOC_IR__VisitorDesc_VisitProcedureRef)),OOC_IR__VisitorDesc_VisitProcedureRef)((OOC_IR__Visitor)i0, (OOC_IR__ProcedureRef)i1);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 101416))+20);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 101626)))), OOC_IR__VisitorDesc_VisitTypeRef)),OOC_IR__VisitorDesc_VisitTypeRef)((OOC_IR__Visitor)i0, (OOC_IR__TypeRef)i1);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 102078))+40);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 102252)))), OOC_IR__VisitorDesc_VisitVar)),OOC_IR__VisitorDesc_VisitVar)((OOC_IR__Visitor)i0, (OOC_IR__Var)i1);
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
  *(OOC_INT32*)((_check_pointer(i1, 102835))+8) = i0;
  i0 = code;
  *(OOC_INT32*)((_check_pointer(i1, 102871))+12) = i0;
  i0 = disabled;
  *(OOC_UINT8*)((_check_pointer(i1, 102897))+16) = i0;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 103196)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1);
  predicate = (OOC_IR__Expression)i1;
l3:
  i1 = (OOC_INT32)code;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l6;
  i2 = (OOC_INT32)b;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 103315)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1, 0, 128);
  
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 103624)))), OOC_IR__VisitorDesc_VisitAssert)),OOC_IR__VisitorDesc_VisitAssert)((OOC_IR__Visitor)i0, (OOC_IR__Assert)i1);
  return;
  ;
}

void OOC_IR__InitAssignment(OOC_IR__Assignment assignment, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression variable, OOC_IR__Expression value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)assignment;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)variable;
  *(OOC_INT32*)((_check_pointer(i1, 103953))+8) = i0;
  i0 = (OOC_INT32)value;
  *(OOC_INT32*)((_check_pointer(i1, 103991))+12) = i0;
  return;
  ;
}

void OOC_IR__BuilderDesc_AssertVar(OOC_IR__Builder b, OOC_IR__Expression expr) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)expr;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 104119));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 104132))+4);
  i2 = OOC_SymbolTable_TypeRules__IsReadOnlyType((OOC_SymbolTable__Module)i2, (OOC_SymbolTable__Type)i3);
  if (i2) goto l36;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 104215)))), &_td_OOC_IR__VarDesc);
  if (i2) goto l23;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 104485)))), &_td_OOC_IR__DerefDesc);
  if (i2) goto l37;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 104565)))), &_td_OOC_IR__IndexDesc);
  if (i2) goto l20;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 104661)))), &_td_OOC_IR__SelectFieldDesc);
  if (i2) goto l15;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 104887)))), &_td_OOC_IR__TypeGuardDesc);
  if (i2) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 105024));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104997)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 29, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  goto l37;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 104927))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 104933))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104911)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  goto l37;
l15:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 104704))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104687)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 104792))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 104778));
  i2 = OOC_SymbolTable_TypeRules__IsReadOnly((OOC_SymbolTable__Module)i3, (OOC_SymbolTable__Declaration)i2);
  if (!i2) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 104849))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104817)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  goto l37;
l20:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 104602))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104585)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  goto l37;
l23:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 104265))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 104251));
  i2 = OOC_SymbolTable_TypeRules__IsReadOnly((OOC_SymbolTable__Module)i3, (OOC_SymbolTable__Declaration)i2);
  if (i2) goto l33;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 104348))+8);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 104354)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i2) goto l28;
  i2=OOC_FALSE;
  goto l30;
l28:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 104376))+8);
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 104386)))), &_td_OOC_SymbolTable__VarDeclDesc, 104386)), 104394))+53);
  
l30:
  if (!i2) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 104453));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104422)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 42, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  goto l37;
l33:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 104321));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104289)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  goto l37;
l36:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 104183));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 104151)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 34, (OOC_Scanner_Builder_BasicList__Symbol)i1);
l37:
  return;
  ;
}

OOC_IR__Statement OOC_IR__BuilderDesc_NewAssignment(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression variable, OOC_IR__Expression value) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)variable;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105249)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 105326))+4);
  i3 = (OOC_INT32)sym;
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (void*)(OOC_INT32)&value, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT32)value;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 105365))+4);
  i2 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i2);
  if (i2) goto l11;
  i2 = (OOC_INT32)value;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 105585))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 105592)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i4) goto l5;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 105615))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 105622)))), &_td_OOC_SymbolTable__RecordDesc);
  
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105717)))), OOC_IR__BuilderDesc_NewCopy)),OOC_IR__BuilderDesc_NewCopy)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
  return (OOC_IR__Statement)i0;
  goto l12;
l11:
  i2 = (OOC_INT32)value;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105538)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i1, 0);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105529)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 105458)))), OOC_IR__BuilderDesc_NewCopyString)),OOC_IR__BuilderDesc_NewCopyString)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1, (OOC_IR__Expression)i4);
  return (OOC_IR__Statement)i0;
l12:
  _failed_function(105093); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106067)))), OOC_IR__VisitorDesc_VisitAssignment)),OOC_IR__VisitorDesc_VisitAssignment)((OOC_IR__Visitor)i0, (OOC_IR__Assignment)i1);
  return;
  ;
}

static void OOC_IR__InitAssignOp(OOC_IR__AssignOp ao, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)op;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106309)))), &_td_OOC_IR__BinaryArithDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106380)))), &_td_OOC_IR__ChangeElementDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106376)))), 106376);
  goto l8;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106432))+12);
  i2 = (OOC_INT32)sym;
  i3 = (OOC_INT32)ao;
  OOC_IR__InitAssignment((OOC_IR__Assignment)i3, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_IR__Expression)i0);
  goto l8;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106359))+12);
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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106594)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__AssignOp.baseTypes[0]);
  OOC_IR__InitAssignOp((OOC_IR__AssignOp)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i0);
  return (OOC_IR__Expression)i2;
  goto l4;
l3:
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 106619))+16);
  return (OOC_IR__Expression)i0;
l4:
  _failed_function(106497); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 106927)))), OOC_IR__VisitorDesc_VisitAssignOp)),OOC_IR__VisitorDesc_VisitAssignOp)((OOC_IR__Visitor)i0, (OOC_IR__AssignOp)i1);
  return;
  ;
}

static void OOC_IR__InitCall(OOC_IR__Call call, OOC_IR__Expression design, OOC_IR__ExpressionList arguments, OOC_SymbolTable__VarDeclArray formalPars) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)design;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 107238));
  i2 = (OOC_INT32)call;
  OOC_IR__InitStatement((OOC_IR__Statement)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107260))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 107271)))), &_td_OOC_SymbolTable__FormalParsDesc, 107271)), 107282))+36);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 107380))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 107391)))), &_td_OOC_SymbolTable__FormalParsDesc, 107391)), 107402))+36);
  *(OOC_INT32*)((_check_pointer(i2, 107364))+4) = i1;
l4:
  *(OOC_INT32*)((_check_pointer(i2, 107432))+8) = i0;
  i0 = (OOC_INT32)arguments;
  *(OOC_INT32*)((_check_pointer(i2, 107460))+12) = i0;
  i0 = (OOC_INT32)formalPars;
  *(OOC_INT32*)((_check_pointer(i2, 107494))+16) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 107674)))), OOC_IR__VisitorDesc_VisitCall)),OOC_IR__VisitorDesc_VisitCall)((OOC_IR__Visitor)i0, (OOC_IR__Call)i1);
  return;
  ;
}

static void OOC_IR__InitCopy(OOC_IR__Copy cp, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_CHAR8 checkDynamicType) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)cp;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i1, 107973))+8) = i0;
  i0 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i1, 107999))+12) = i0;
  i0 = checkDynamicType;
  *(OOC_UINT8*)((_check_pointer(i1, 108021))+16) = i0;
  return;
  ;
}

OOC_IR__Copy OOC_IR__BuilderDesc_NewCopy(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  auto OOC_CHAR8 OOC_IR__BuilderDesc_NewCopy_HasDynamicType(OOC_IR__Expression dest);
    
    OOC_CHAR8 OOC_IR__BuilderDesc_NewCopy_HasDynamicType(OOC_IR__Expression dest) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)dest;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108289))+4);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 108296)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 108317))+4);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 108327)))), &_td_OOC_SymbolTable__RecordDesc, 108327)), 108334))+30);
      
l5:
      if (!i1) goto l14;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108371)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l12;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108429)))), &_td_OOC_IR__VarDesc);
      if (!i1) goto l14;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108464)))), &_td_OOC_IR__VarDesc, 108464)), 108468))+8);
      i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108479)))), &_td_OOC_SymbolTable__VarDeclDesc, 108479)), 108487))+50);
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
  i0 = *(OOC_INT32*)((_check_pointer(i1, 108688))+16);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 108932)))), OOC_IR__VisitorDesc_VisitCopy)),OOC_IR__VisitorDesc_VisitCopy)((OOC_IR__Visitor)i0, (OOC_IR__Copy)i1);
  return;
  ;
}

static void OOC_IR__InitCopyParameter(OOC_IR__CopyParameter cp, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Var param) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)cp;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)param;
  *(OOC_INT32*)((_check_pointer(i1, 109195))+8) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 109619)))), OOC_IR__VisitorDesc_VisitCopyParameter)),OOC_IR__VisitorDesc_VisitCopyParameter)((OOC_IR__Visitor)i0, (OOC_IR__CopyParameter)i1);
  return;
  ;
}

static void OOC_IR__InitCopyString(OOC_IR__CopyString cp, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression maxLength) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)cp;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i1, 109933))+8) = i0;
  i0 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i1, 109959))+12) = i0;
  i0 = (OOC_INT32)maxLength;
  *(OOC_INT32*)((_check_pointer(i1, 109981))+16) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110252)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 110299))+4);
  i2 = OOC_SymbolTable_TypeRules__IsArrayOfChar((OOC_SymbolTable__Type)i2, OOC_TRUE);
  i2 = !i2;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 110355));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110324)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l3:
  i2 = (OOC_INT32)source;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 110391)))), &_td_OOC_IR__ConstDesc);
  if (i3) goto l9;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 110861))+4);
  i2 = OOC_SymbolTable_TypeRules__IsArrayOfChar((OOC_SymbolTable__Type)i2, OOC_TRUE);
  i2 = !i2;
  if (!i2) goto l14;
  i2 = (OOC_INT32)source;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 110919));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110886)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  goto l14;
l9:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 110648))+4);
  i2 = (OOC_INT32)OOC_SymbolTable_TypeRules__BaseCharType((OOC_SymbolTable__Type)i2);
  i3 = i2==(OOC_INT32)0;
  baseChar = (OOC_SymbolTable__Type)i2;
  if (i3) goto l12;
  i2 = (OOC_INT32)OOC_SymbolTable_TypeRules__MatchingStringConst((OOC_SymbolTable__Type)i2);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110763)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i0, (void*)(OOC_INT32)&source, (OOC_SymbolTable__Type)i2);
  ok = i2;
  goto l14;
l12:
  i2 = (OOC_INT32)source;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 110730));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110697)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 48, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l14:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CopyString.baseTypes[0]);
  cp = (OOC_IR__CopyString)i2;
  i3 = (OOC_INT32)maxLength;
  i4 = (OOC_INT32)source;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 110998)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i0, (OOC_IR__Expression)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111210)))), OOC_IR__VisitorDesc_VisitCopyString)),OOC_IR__VisitorDesc_VisitCopyString)((OOC_IR__Visitor)i0, (OOC_IR__CopyString)i1);
  return;
  ;
}

void OOC_IR__InitExit(OOC_IR__Exit exit, OOC_Scanner_Builder_BasicList__Symbol sym) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)exit;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  *(OOC_INT32*)((_check_pointer(i1, 111447))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i1, 111470))+12) = 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 111807)))), OOC_IR__VisitorDesc_VisitExit)),OOC_IR__VisitorDesc_VisitExit)((OOC_IR__Visitor)i0, (OOC_IR__Exit)i1);
  return;
  ;
}

static void OOC_IR__InitForStatm(OOC_IR__ForStatm forStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression var, OOC_IR__Expression start, OOC_IR__Expression end, OOC_IR__Expression step, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)forStatm;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)var;
  *(OOC_INT32*)((_check_pointer(i1, 112166))+8) = i0;
  i0 = (OOC_INT32)start;
  *(OOC_INT32*)((_check_pointer(i1, 112192))+12) = i0;
  i0 = (OOC_INT32)end;
  *(OOC_INT32*)((_check_pointer(i1, 112222))+16) = i0;
  i0 = (OOC_INT32)step;
  *(OOC_INT32*)((_check_pointer(i1, 112248))+20) = i0;
  i0 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i1, 112276))+24) = i0;
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 112580)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i3);
  step = (OOC_IR__Expression)i0;
l3:
  i0 = (OOC_INT32)var;
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 112683)))), &_td_OOC_IR__VarDesc));
  if (i2) goto l21;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 112769))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  i2 = !i2;
  if (i2) goto l19;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 112852))+4);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 112834)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i2, (void*)(OOC_INT32)&step, (OOC_SymbolTable__Type)i3);
  i3 = !i3;
  if (i3) goto l17;
  i3 = (OOC_INT32)start;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 112977))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 112960));
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (void*)(OOC_INT32)&start, (OOC_SymbolTable__Type)i4);
  i3 = (OOC_INT32)end;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 113039))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 113024));
  OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (void*)(OOC_INT32)&end, (OOC_SymbolTable__Type)i4);
  i3 = (OOC_INT32)step;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 113063)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i3);
  step = (OOC_IR__Expression)i3;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 113116))+4);
  i3 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i3);
  if (i3) goto l12;
  i3=OOC_FALSE;
  goto l14;
l12:
  i3 = (OOC_INT32)Object_BigInt__zero;
  i4 = (OOC_INT32)step;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 113158)))), &_td_OOC_IR__ConstDesc, 113158)), 113164))+8);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 113147)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i3, (Object__Object)i4);
  i3 = i3==0;
  
l14:
  if (!i3) goto l22;
  i3 = (OOC_INT32)step;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 113218));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 113192)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 31, (OOC_Scanner_Builder_BasicList__Symbol)i3);
  goto l22;
l17:
  i3 = (OOC_INT32)step;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 112903));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 112872)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 30, (OOC_Scanner_Builder_BasicList__Symbol)i3);
  goto l22;
l19:
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 112814));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 112789)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 19, (OOC_Scanner_Builder_BasicList__Symbol)i3);
  goto l22;
l21:
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 112729));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 112703)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 29, (OOC_Scanner_Builder_BasicList__Symbol)i3);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 113533)))), OOC_IR__VisitorDesc_VisitForStatm)),OOC_IR__VisitorDesc_VisitForStatm)((OOC_IR__Visitor)i0, (OOC_IR__ForStatm)i1);
  return;
  ;
}

static void OOC_IR__InitIfStatm(OOC_IR__IfStatm ifStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)ifStatm;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i1, 113868))+8) = i0;
  i0 = (OOC_INT32)pathTrue;
  *(OOC_INT32*)((_check_pointer(i1, 113897))+12) = i0;
  i0 = (OOC_INT32)pathFalse;
  *(OOC_INT32*)((_check_pointer(i1, 113932))+16) = i0;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 114214)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 114452)))), OOC_IR__VisitorDesc_VisitIfStatm)),OOC_IR__VisitorDesc_VisitIfStatm)((OOC_IR__Visitor)i0, (OOC_IR__IfStatm)i1);
  return;
  ;
}

static void OOC_IR__InitCase(OOC_IR__Case _case, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__CaseLabels labels, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)_case;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)labels;
  *(OOC_INT32*)((_check_pointer(i1, 114754))+8) = i0;
  i0 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i1, 114782))+12) = i0;
  return;
  ;
}

OOC_IR__Case OOC_IR__BuilderDesc_NewCase(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__CaseLabels labels, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  OOC_IR__SetRange range;

  i0 = (OOC_INT32)labels;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 115049)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2 = (OOC_INT32)b;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 115078);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 115078))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 115082)))), &_td_OOC_IR__SetRangeDesc, 115082);
  range = (OOC_IR__SetRange)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 115134))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 115114)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  *(OOC_INT32*)((_check_pointer(i4, 115104))+8) = i5;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 115182))+12);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 115162)))), OOC_IR__BuilderDesc_AssertConst)),OOC_IR__BuilderDesc_AssertConst)((OOC_IR__Builder)i2, (OOC_IR__Expression)i5);
  *(OOC_INT32*)((_check_pointer(i4, 115154))+12) = i5;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 115430)))), OOC_IR__VisitorDesc_VisitCase)),OOC_IR__VisitorDesc_VisitCase)((OOC_IR__Visitor)i0, (OOC_IR__Case)i1);
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
      i4 = _check_pointer(i1, 115888);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 115888))*4);
      i4 = i4!=(OOC_INT32)0;
      if (i4) goto l6;
      i4=OOC_FALSE;
      goto l8;
l6:
      i4 = _check_pointer(i1, 115928);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 115928))*4);
      i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 115906)))), OOC_IR__SetRangeDesc_IntersectsWith)),OOC_IR__SetRangeDesc_IntersectsWith)((OOC_IR__SetRange)i2, (OOC_IR__SetRange)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 115932)))), &_td_OOC_IR__SetRangeDesc, 115932)));
      
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 116112))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 116120)), (OOC_INT32)0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l44;
  i1 = !OOC_FALSE;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)_case;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 116147))+8);
  i4 = _check_pointer(i4, 116155);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 116155))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 116159)))), &_td_OOC_IR__SetRangeDesc, 116159);
  range = (OOC_IR__SetRange)i4;
  i5 = (OOC_INT32)b;
  i6 = (OOC_INT32)type;
  i7 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 116181)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i5, (void*)((_check_pointer(i4, 116195))+8), (OOC_SymbolTable__Type)i6);
  i7 = !i7;
  if (i7) goto l38;
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 116360)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i5, (void*)((_check_pointer(i4, 116374))+12), (OOC_SymbolTable__Type)i6);
  i6 = !i6;
  if (i6) goto l36;
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 116538)))), OOC_IR__SetRangeDesc_IsEmpty)),OOC_IR__SetRangeDesc_IsEmpty)((OOC_IR__SetRange)i4);
  if (i4) goto l34;
  inUse = OOC_FALSE;
  j = 0;
  i2 = (OOC_INT32)caseList;
  i2 = _check_pointer(i2, 116734);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT32, 116734))*4);
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
  i4 = _check_pointer(i3, 116808);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 116808))*4);
  i3 = _check_pointer(i3, 116869);
  i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i5, OOC_UINT32, 116869))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 116872))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 116811))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 116880)), (OOC_INT32)0);
  i4 = (OOC_INT32)range;
  i2 = OOC_IR__CaseDesc_CheckLabels_IntersectsWith((OOC_IR__SetRange)i4, (OOC_IR__CaseLabels)i3, i2);
  i3 = j;
  i3 = i3+1;
  inUse = i2;
  j = i3;
  i4 = (OOC_INT32)caseList;
  i4 = _check_pointer(i4, 116734);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 116734))*4);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 116970))+8);
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
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 117048));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 117017)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 28, (OOC_Scanner_Builder_BasicList__Symbol)i3);
  goto l39;
l34:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 116625))+8);
  i3 = _check_pointer(i3, 116633);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 116633))*4) = (OOC_INT32)0;
  deleted = (i5+1);
  goto l39;
l36:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 116433))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 116437));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 116400)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i5, 27, (OOC_Scanner_Builder_BasicList__Symbol)i4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 116457))+8);
  i3 = _check_pointer(i3, 116465);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 116465))*4) = (OOC_INT32)0;
  deleted = (i5+1);
  goto l39;
l38:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 116256))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 116262));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 116223)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i5, 27, (OOC_Scanner_Builder_BasicList__Symbol)i4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 116282))+8);
  i3 = _check_pointer(i3, 116290);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i5 = deleted;
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 116290))*4) = (OOC_INT32)0;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 117141))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 117149)), (OOC_INT32)0);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__CaseLabels.baseTypes[0], (i2-i0));
  _new = (OOC_IR__CaseLabels)i0;
  j = -1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 117205)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  if (!i3) goto l59;
  i3=-1;i4=0;
l49_loop:
  
l50_loop:
  i3 = i3+1;
  j = i3;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 117266))+8);
  i5 = _check_pointer(i5, 117274);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 117274))*4);
  i5 = i5!=(OOC_INT32)0;
  if (!i5) goto l50_loop;
l54:
  i5 = _check_pointer(i0, 117297);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 117308))+8);
  i7 = _check_pointer(i7, 117316);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i3, i8, OOC_UINT32, 117316))*4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 117297))*4) = i7;
  i4 = i4+1;
  i5 = i4<=i2;
  i = i4;
  if (i5) goto l49_loop;
l59:
  *(OOC_INT32*)((_check_pointer(i1, 117342))+8) = i0;
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
  *(OOC_INT32*)((_check_pointer(i1, 117750))+8) = i0;
  i0 = (OOC_INT32)caseList;
  *(OOC_INT32*)((_check_pointer(i1, 117783))+12) = i0;
  i0 = (OOC_INT32)_default;
  *(OOC_INT32*)((_check_pointer(i1, 117820))+16) = i0;
  i0 = checkMatch;
  *(OOC_UINT8*)((_check_pointer(i1, 117855))+20) = i0;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 118184))+4);
  i2 = OOC_SymbolTable_TypeRules__IsValidCaseSelector((OOC_SymbolTable__Type)i2);
  i2 = !i2;
  i3 = (OOC_INT32)b;
  i4 = (OOC_INT32)caseList;
  if (i2) goto l11;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i4, 118291)), (OOC_INT32)0);
  i2 = i2-1;
  i5 = 0<=i2;
  i = 0;
  if (!i5) goto l12;
  i5=0;
l5_loop:
  i6 = _check_pointer(i4, 118315);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 118315))*4);
  i7 = _check_pointer(i4, 118315);
  i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 118342))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i5, i8, OOC_UINT32, 118315))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 118318)))), OOC_IR__CaseDesc_CheckLabels)),OOC_IR__CaseDesc_CheckLabels)((OOC_IR__Case)i7, (OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i9, (OOC_IR__CaseList)i4);
  i5 = i5+1;
  i6 = i5<=i2;
  i = i5;
  if (i6) goto l5_loop;
  goto l12;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 118241));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 118204)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 26, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l12:
  i2 = (OOC_INT32)sym;
  i5 = *(OOC_INT32*)((_check_pointer(i2, 118512))+16);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 118728)))), OOC_IR__VisitorDesc_VisitCaseStatm)),OOC_IR__VisitorDesc_VisitCaseStatm)((OOC_IR__Visitor)i0, (OOC_IR__CaseStatm)i1);
  return;
  ;
}

static void OOC_IR__InitLoopStatm(OOC_IR__LoopStatm loopStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)loopStatm;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i1, 119045))+8) = i0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 119513)))), OOC_IR__VisitorDesc_VisitLoopStatm)),OOC_IR__VisitorDesc_VisitLoopStatm)((OOC_IR__Visitor)i0, (OOC_IR__LoopStatm)i1);
  return;
  ;
}

static void OOC_IR__InitMoveBlock(OOC_IR__MoveBlock move, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression source, OOC_IR__Expression dest, OOC_IR__Expression size) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)move;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)source;
  *(OOC_INT32*)((_check_pointer(i1, 119827))+8) = i0;
  i0 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i1, 119855))+12) = i0;
  i0 = (OOC_INT32)size;
  *(OOC_INT32*)((_check_pointer(i1, 119879))+16) = i0;
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
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 120163)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  i3 = (OOC_INT32)dest;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 120207)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i3);
  i4 = (OOC_INT32)size;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 120249)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 120464)))), OOC_IR__VisitorDesc_VisitMoveBlock)),OOC_IR__VisitorDesc_VisitMoveBlock)((OOC_IR__Visitor)i0, (OOC_IR__MoveBlock)i1);
  return;
  ;
}

static void OOC_IR__InitRaise(OOC_IR__Raise raise, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression exception) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)raise;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)exception;
  *(OOC_INT32*)((_check_pointer(i1, 120730))+8) = i0;
  return;
  ;
}

OOC_IR__Raise OOC_IR__BuilderDesc_NewRaise(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression exception) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)exception;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 120915))+4);
  i1 = OOC_SymbolTable_TypeRules__IsException((OOC_SymbolTable__Type)i1);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 121054));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 121023)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 62, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Raise)(OOC_INT32)0;
  goto l4;
l3:
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__Raise.baseTypes[0]);
  OOC_IR__InitRaise((OOC_IR__Raise)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i0);
  return (OOC_IR__Raise)i2;
l4:
  _failed_function(120797); return 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 121246)))), OOC_IR__VisitorDesc_VisitRaise)),OOC_IR__VisitorDesc_VisitRaise)((OOC_IR__Visitor)i0, (OOC_IR__Raise)i1);
  return;
  ;
}

static void OOC_IR__InitRepeatStatm(OOC_IR__RepeatStatm repeatStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__StatementSeq body, OOC_IR__Expression exitCondition) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)repeatStatm;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i1, 121596))+8) = i0;
  i0 = (OOC_INT32)exitCondition;
  *(OOC_INT32*)((_check_pointer(i1, 121627))+12) = i0;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 121951)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 122208)))), OOC_IR__VisitorDesc_VisitRepeatStatm)),OOC_IR__VisitorDesc_VisitRepeatStatm)((OOC_IR__Visitor)i0, (OOC_IR__RepeatStatm)i1);
  return;
  ;
}

static void OOC_IR__InitReturn(OOC_IR__Return _return, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression result) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)_return;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)result;
  *(OOC_INT32*)((_check_pointer(i1, 122486))+8) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 122516))+12) = 0;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 122913)))), OOC_IR__VisitorDesc_VisitReturn)),OOC_IR__VisitorDesc_VisitReturn)((OOC_IR__Visitor)i0, (OOC_IR__Return)i1);
  return;
  ;
}

static void OOC_IR__InitCatchClause(OOC_IR__CatchClause _catch, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_SymbolTable__Type exceptionType, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)_catch;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)exceptionType;
  *(OOC_INT32*)((_check_pointer(i1, 123269))+8) = i0;
  i0 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i1, 123311))+12) = i0;
  *(OOC_UINT8*)((_check_pointer(i1, 123343))+16) = OOC_FALSE;
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
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 123614)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
  type = (OOC_SymbolTable__Type)i3;
  i4 = OOC_SymbolTable_TypeRules__IsException((OOC_SymbolTable__Type)i3);
  i4 = !i4;
  if (!i4) goto l4;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 123710));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 123679)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 62, (OOC_Scanner_Builder_BasicList__Symbol)i4);
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 123762));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 123991)))), OOC_IR__VisitorDesc_VisitCatchClause)),OOC_IR__VisitorDesc_VisitCatchClause)((OOC_IR__Visitor)i0, (OOC_IR__CatchClause)i1);
  return;
  ;
}

static void OOC_IR__InitTryStatm(OOC_IR__TryStatm tryStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__StatementSeq statmSeq, OOC_IR__CatchList catchList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)tryStatm;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i1, 124215))+8) = i0;
  i0 = (OOC_INT32)catchList;
  *(OOC_INT32*)((_check_pointer(i1, 124250))+12) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 124287))+16) = (OOC_INT32)0;
  return;
  ;
}

OOC_IR__TryStatm OOC_IR__BuilderDesc_NewTryStatm(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__StatementSeq statmSeq, OOC_IR__CatchList catchList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT32)catchList;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 124562)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l28;
  i2 = (OOC_INT32)b;
  i3=0;
l3_loop:
  i4 = i3!=0;
  j = 0;
  if (i4) goto l6;
  i4=OOC_FALSE;
  goto l8;
l6:
  i4 = _check_pointer(i0, 124633);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 124633))*4);
  i5 = _check_pointer(i0, 124701);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT32, 124701))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 124636))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 124704))+8);
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
  i5 = i3!=i4;
  j = i4;
  if (i5) goto l14;
  i5=OOC_FALSE;
  goto l16;
l14:
  i5 = _check_pointer(i0, 124633);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 124633))*4);
  i6 = _check_pointer(i0, 124701);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 124701))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 124636))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 124704))+8);
  i5 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i6);
  i5 = !i5;
  
l16:
  if (i5) goto l11_loop;
l20:
  i4 = i3!=i4;
  if (!i4) goto l23;
  i4 = _check_pointer(i0, 124817);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 124817))*4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 124820));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 124781)))), OOC_IR__BuilderDesc_WarnSym)),OOC_IR__BuilderDesc_WarnSym)((OOC_IR__Builder)i2, 65, (OOC_Scanner_Builder_BasicList__Symbol)i4);
  i4 = _check_pointer(i0, 124844);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 124844))*4);
  *(OOC_UINT8*)((_check_pointer(i4, 124847))+16) = OOC_TRUE;
l23:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 125195)))), OOC_IR__VisitorDesc_VisitTryStatm)),OOC_IR__VisitorDesc_VisitTryStatm)((OOC_IR__Visitor)i0, (OOC_IR__TryStatm)i1);
  return;
  ;
}

static void OOC_IR__InitWhileStatm(OOC_IR__WhileStatm whileStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq body) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)whileStatm;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i1, 125536))+8) = i0;
  i0 = (OOC_INT32)body;
  *(OOC_INT32*)((_check_pointer(i1, 125568))+12) = i0;
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
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 125851)))), OOC_IR__BuilderDesc_AssertBoolean)),OOC_IR__BuilderDesc_AssertBoolean)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 126098)))), OOC_IR__VisitorDesc_VisitWhileStatm)),OOC_IR__VisitorDesc_VisitWhileStatm)((OOC_IR__Visitor)i0, (OOC_IR__WhileStatm)i1);
  return;
  ;
}

static void OOC_IR__InitWithStatm(OOC_IR__WithStatm withStatm, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse, OOC_CHAR8 checkMatch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)withStatm;
  OOC_IR__InitStatement((OOC_IR__Statement)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)guard;
  *(OOC_INT32*)((_check_pointer(i1, 126497))+8) = i0;
  i0 = (OOC_INT32)pathTrue;
  *(OOC_INT32*)((_check_pointer(i1, 126528))+12) = i0;
  i0 = (OOC_INT32)pathFalse;
  *(OOC_INT32*)((_check_pointer(i1, 126565))+16) = i0;
  i0 = checkMatch;
  *(OOC_UINT8*)((_check_pointer(i1, 126604))+20) = i0;
  return;
  ;
}

OOC_IR__WithStatm OOC_IR__BuilderDesc_NewWithStatm(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_IR__Expression guard, OOC_IR__StatementSeq pathTrue, OOC_IR__StatementSeq pathFalse) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 126936))+16);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 127253)))), OOC_IR__VisitorDesc_VisitWithStatm)),OOC_IR__VisitorDesc_VisitWithStatm)((OOC_IR__Visitor)i0, (OOC_IR__WithStatm)i1);
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
      i1 = i0!=(OOC_INT32)0;
      i2 = (OOC_INT32)exception;
      if (!i1) goto l22;
l3_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 128264))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 128274)), (OOC_INT32)0);
      i1 = i1-1;
      i3 = 0<=i1;
      i = 0;
      if (!i3) goto l17;
      i3=0;
l6_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 128315))+12);
      i4 = _check_pointer(i4, 128325);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 128325))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 128328))+8);
      i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i4, (OOC_SymbolTable__Type)i2);
      if (!i4) goto l9;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 128405))+12);
      i4 = _check_pointer(i4, 128415);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 128415))*4);
      *(OOC_UINT8*)((_check_pointer(i4, 128418))+16) = OOC_TRUE;
l9:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 128527))+12);
      i4 = _check_pointer(i4, 128537);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 128537))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 128540))+8);
      i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i4);
      if (!i4) goto l12;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 128576))+12);
      i4 = _check_pointer(i4, 128586);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 128586))*4);
      *(OOC_UINT8*)((_check_pointer(i4, 128589))+16) = OOC_TRUE;
      return;
l12:
      i3 = i3+1;
      i4 = i3<=i1;
      i = i3;
      if (i4) goto l6_loop;
l17:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 128668))+16);
      _try = (OOC_IR__TryStatm)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l22:
      i0 = (OOC_INT32)procDecl;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l36;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 128758))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 128769))+52);
      raises = (OOC_SymbolTable__ExceptionNameArray)i0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 128810)), (OOC_INT32)0);
      i1 = i1-1;
      i3 = 0<=i1;
      i = 0;
      if (!i3) goto l36;
      i3=0;
l27_loop:
      i4 = _check_pointer(i0, 128865);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 128865))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 128868))+16);
      i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i4);
      if (!i4) goto l30;
      return;
l30:
      i3 = i3+1;
      i4 = i3<=i1;
      i = i3;
      if (i4) goto l27_loop;
l36:
      i0 = (OOC_INT32)procDecl;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l39;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 128993))+4);
      i0 = i0==(OOC_INT32)0;
      
      goto l41;
l39:
      i0=OOC_TRUE;
l41:
      if (i0) goto l43;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129104)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 63, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      goto l44;
l43:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129043)))), OOC_IR__BuilderDesc_WarnSym)),OOC_IR__BuilderDesc_WarnSym)((OOC_IR__Builder)i0, 64, (OOC_Scanner_Builder_BasicList__Symbol)i1);
l44:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 129174)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i2);
      module = (OOC_SymbolTable__Module)i0;
      i1 = (OOC_INT32)b;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 129192))+32);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129252))+16);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 129257))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129252))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129257))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 129261)), (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 129192))+32);
      i0 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i4, 129261)), i0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 129202)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i1, "module", 7, (Msg__StringPtr)i0);
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129273))+32);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 129334))+20);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 129345))+16);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 129350))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 129334))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 129345))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 129350))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129273))+32);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 129354)), (OOC_INT32)0);
      i2 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i3, 129354)), i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 129283)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i2);
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129691)))), &_td_OOC_IR__ConstDesc);
          if (i1) goto l148;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129740)))), &_td_OOC_IR__AbsDesc);
          if (i1) goto l146;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129798)))), &_td_OOC_IR__AdrDesc);
          if (i1) goto l144;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129855)))), &_td_OOC_IR__AshDesc);
          if (i1) goto l142;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 129942)))), &_td_OOC_IR__BinaryArithDesc);
          if (i1) goto l140;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130038)))), &_td_OOC_IR__BooleanOpDesc);
          if (i1) goto l138;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130132)))), &_td_OOC_IR__CapDesc);
          if (i1) goto l136;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130190)))), &_td_OOC_IR__CompareDesc);
          if (i1) goto l134;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130282)))), &_td_OOC_IR__ConcatDesc);
          if (i1) goto l124;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130411)))), &_td_OOC_IR__ChangeElementDesc);
          if (i1) goto l122;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130510)))), &_td_OOC_IR__DerefDesc);
          if (i1) goto l120;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130570)))), &_td_OOC_IR__EntierDesc);
          if (i1) goto l118;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130631)))), &_td_OOC_IR__IndexDesc);
          if (i1) goto l116;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130722)))), &_td_OOC_IR__LenDesc);
          if (i1) goto l114;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130778)))), &_td_OOC_IR__NegateDesc);
          if (i1) goto l112;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130839)))), &_td_OOC_IR__NewBlockDesc);
          if (i1) goto l110;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 130899)))), &_td_OOC_IR__NewObjectDesc);
          if (i1) goto l97;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131088)))), &_td_OOC_IR__NotDesc);
          if (i1) goto l95;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131146)))), &_td_OOC_IR__OddDesc);
          if (i1) goto l93;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131204)))), &_td_OOC_IR__ReferenceDesc);
          if (i1) goto l148;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131257)))), &_td_OOC_IR__SelectFieldDesc);
          if (i1) goto l90;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131322)))), &_td_OOC_IR__SelectProcDesc);
          if (i1) goto l88;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131388)))), &_td_OOC_IR__SetMemberDesc);
          if (i1) goto l86;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131483)))), &_td_OOC_IR__SetOpDesc);
          if (i1) goto l84;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131573)))), &_td_OOC_IR__SetRangeDesc);
          if (i1) goto l82;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131663)))), &_td_OOC_IR__ShiftDesc);
          if (i1) goto l80;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131751)))), &_td_OOC_IR__TypeCastDesc);
          if (i1) goto l78;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131811)))), &_td_OOC_IR__TypeConvDesc);
          if (i1) goto l76;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131871)))), &_td_OOC_IR__TypeTagDesc);
          if (i1) goto l74;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131932)))), &_td_OOC_IR__TypeTestDesc);
          if (i1) goto l72;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 131992)))), &_td_OOC_IR__TypeGuardDesc);
          if (i1) goto l70;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132064)))), &_td_OOC_IR__CallDesc);
          if (i1) goto l68;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132058)))), 132058);
          goto l148;
l68:
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckStatm((OOC_IR__Statement)i0);
          goto l148;
l70:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132031))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l72:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131970))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l74:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131908))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l76:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131849))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l78:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131789))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l80:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131698))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131731))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l82:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131611))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131643))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l84:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131518))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131550))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l86:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131427))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131462))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l88:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131362))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l90:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131298))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l93:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131179))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l95:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131121))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l97:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130932))+8);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l148;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130986))+8);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 130993)), (OOC_INT32)0);
          i1 = i1-1;
          i2 = 0<=i1;
          i = 0;
          if (!i2) goto l148;
          i2=0;
l102_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 131029))+8);
          i3 = _check_pointer(i3, 131036);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 131036))*4);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i3);
          i2 = i2+1;
          i3 = i2<=i1;
          i = i2;
          if (i3) goto l102_loop;
          goto l148;
l110:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130877))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l112:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130814))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l114:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130755))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l116:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130666))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130699))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l118:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130606))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l120:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130545))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l122:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130454))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130485))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l124:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130326))+8);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 130334)), (OOC_INT32)0);
          i1 = i1-1;
          i2 = 0<=i1;
          i = 0;
          if (!i2) goto l148;
          i2=0;
l127_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130368))+8);
          i3 = _check_pointer(i3, 130376);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 130376))*4);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i3);
          i2 = i2+1;
          i3 = i2<=i1;
          i = i2;
          if (i3) goto l127_loop;
          goto l148;
l134:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130227))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130259))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l136:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130165))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l138:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130077))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130109))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l140:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129983))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 130015))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l142:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129888))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129921))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l144:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129831))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l148;
l146:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 129773))+8);
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132342)))), &_td_OOC_IR__AssertDesc);
          if (i1) goto l128;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132407)))), &_td_OOC_IR__AssignmentDesc);
          if (i1) goto l126;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132549)))), &_td_OOC_IR__CallDesc);
          if (i1) goto l108;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 132907)))), &_td_OOC_IR__CopyDesc);
          if (i1) goto l106;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133000)))), &_td_OOC_IR__CopyParameterDesc);
          if (i1) goto l129;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133058)))), &_td_OOC_IR__CopyStringDesc);
          if (i1) goto l103;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133157)))), &_td_OOC_IR__ExitDesc);
          if (i1) goto l97;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133418)))), &_td_OOC_IR__ForStatmDesc);
          if (i1) goto l95;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133617)))), &_td_OOC_IR__IfStatmDesc);
          if (i1) goto l93;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133766)))), &_td_OOC_IR__CaseDesc);
          if (i1) goto l91;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 133834)))), &_td_OOC_IR__CaseStatmDesc);
          if (i1) goto l81;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134066)))), &_td_OOC_IR__LoopStatmDesc);
          if (i1) goto l79;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134391)))), &_td_OOC_IR__MoveBlockDesc);
          if (i1) goto l77;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134489)))), &_td_OOC_IR__RaiseDesc);
          if (i1) goto l75;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134612)))), &_td_OOC_IR__RepeatStatmDesc);
          if (i1) goto l73;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 134725)))), &_td_OOC_IR__ReturnDesc);
          if (i1) goto l56;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 135467)))), &_td_OOC_IR__TryStatmDesc);
          if (i1) goto l43;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 136010)))), &_td_OOC_IR__WhileStatmDesc);
          if (i1) goto l41;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 136114)))), &_td_OOC_IR__WithStatmDesc);
          if (i1) goto l39;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 136107)))), 136107);
          goto l129;
l39:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 136154))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 136193))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 136236))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l41:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 136051))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 136090))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l43:
          i1 = (OOC_INT32)procDecl;
          i2 = enclosingTry;
          *(OOC_UINT8*)((_check_pointer(i1, 135499))+64) = OOC_TRUE;
          enclosingTry = (i2+1);
          i1 = (OOC_INT32)currentTry;
          *(OOC_INT32*)((_check_pointer(i0, 135565))+16) = i1;
          currentTry = (OOC_IR__TryStatm)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135654))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135695))+16);
          i2 = enclosingTry;
          currentTry = (OOC_IR__TryStatm)i1;
          enclosingTry = (i2-1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135772))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 135782)), (OOC_INT32)0);
          i1 = i1-1;
          i2 = 0<=i1;
          i = 0;
          if (!i2) goto l129;
          i2=0;
l46_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135811))+12);
          i3 = _check_pointer(i3, 135821);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 135821))*4);
          i3 = *(OOC_UINT8*)((_check_pointer(i3, 135824))+16);
          i3 = !i3;
          if (!i3) goto l49;
          i3 = (OOC_INT32)b;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135887))+12);
          i4 = _check_pointer(i4, 135897);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 135897))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 135900));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 135855)))), OOC_IR__BuilderDesc_WarnSym)),OOC_IR__BuilderDesc_WarnSym)((OOC_IR__Builder)i3, 66, (OOC_Scanner_Builder_BasicList__Symbol)i4);
l49:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135955))+12);
          i3 = _check_pointer(i3, 135965);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 135965))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 135968))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i3);
          i2 = i2+1;
          i3 = i2<=i1;
          i = i2;
          if (i3) goto l46_loop;
          goto l129;
l56:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134762))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)procDecl;
          i2 = i1==(OOC_INT32)0;
          if (i2) goto l59;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 134827))+52);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 134839))+36);
          i2 = i2==(OOC_INT32)0;
          
          goto l61;
l59:
          i2=OOC_TRUE;
l61:
          if (i2) goto l67;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135116))+8);
          i2 = i2==(OOC_INT32)0;
          if (i2) goto l65;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135261))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 135339))+52);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 135351))+36);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 135269));
          i3 = (OOC_INT32)b;
          OOC_IR__MakeAssignmentCompatible((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i2, (void*)((_check_pointer(i0, 135281))+8), (OOC_SymbolTable__Type)i1);
          goto l71;
l65:
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 135188));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 135152)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 33, (OOC_Scanner_Builder_BasicList__Symbol)i2);
          goto l71;
l67:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134941))+8);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l71;
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 135010))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 135018));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 134977)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 32, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l71:
          i1 = enclosingTry;
          *(OOC_INT32*)((_check_pointer(i0, 135413))+12) = i1;
          goto l129;
l73:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134659))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134693))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l129;
l75:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134525))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134568))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 134578))+4);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 134590));
          OOC_IR__BuilderDesc_CheckExit_CheckException((OOC_SymbolTable__Type)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
          goto l129;
l77:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134431))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134466))+12);
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
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134279))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          enclosingTryLastLoop = i2;
          currentLoop = (OOC_IR__LoopStatm)i1;
          goto l129;
l81:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133874))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133918))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 133928)), (OOC_INT32)0);
          i1 = i1-1;
          i2 = 0<=i1;
          i = 0;
          if (!i2) goto l89;
          i2=0;
l84_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133968))+12);
          i3 = _check_pointer(i3, 133978);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 133978))*4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 133981))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i3);
          i2 = i2+1;
          i3 = i2<=i1;
          i = i2;
          if (i3) goto l84_loop;
l89:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 134039))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l91:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133806))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l93:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133655))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133694))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133737))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l95:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133457))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133489))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133523))+16);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133555))+20);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133593))+24);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq((OOC_IR__StatementSeq)i0);
          goto l129;
l97:
          i1 = (OOC_INT32)currentLoop;
          i2 = i1==(OOC_INT32)0;
          if (i2) goto l100;
          *(OOC_INT32*)((_check_pointer(i0, 133290))+8) = i1;
          goto l101;
l100:
          i1 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 133250));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 133218)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 25, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l101:
          i1 = enclosingTry;
          i2 = enclosingTryLastLoop;
          *(OOC_INT32*)((_check_pointer(i0, 133343))+12) = (i1-i2);
          goto l129;
l103:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133099))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 133134))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l129;
l106:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132942))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132977))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l129;
l108:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132584))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132627))+12);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 132637)), (OOC_INT32)0);
          i1 = i1-1;
          i2 = 0<=i1;
          i = 0;
          if (!i2) goto l116;
          i2=0;
l111_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132672))+12);
          i3 = _check_pointer(i3, 132682);
          i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
          i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 132682))*4);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i3);
          i2 = i2+1;
          i3 = i2<=i1;
          i = i2;
          if (i3) goto l111_loop;
l116:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132738))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 132745))+4);
          i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 132755)))), &_td_OOC_SymbolTable__FormalParsDesc, 132755);
          fpars = (OOC_SymbolTable__FormalPars)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 132801))+52);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 132808)), (OOC_INT32)0);
          i2 = i2-1;
          i3 = 0<=i2;
          i = 0;
          if (!i3) goto l129;
          i3=0;
l119_loop:
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 132848))+52);
          i4 = _check_pointer(i4, 132855);
          i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
          i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 132855))*4);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 132858))+16);
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 132870));
          OOC_IR__BuilderDesc_CheckExit_CheckException((OOC_SymbolTable__Type)i4, (OOC_Scanner_Builder_BasicList__Symbol)i5);
          i3 = i3+1;
          i4 = i3<=i2;
          i = i3;
          if (i4) goto l119_loop;
          goto l129;
l126:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132489))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132526))+12);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l129;
l128:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 132379))+8);
          OOC_IR__BuilderDesc_CheckExit_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
l129:
          return;
          ;
        }


      i0 = (OOC_INT32)statmSeq;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l11;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 136366)), (OOC_INT32)0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l11;
      i1=0;
l5_loop:
      i2 = (OOC_INT32)statmSeq;
      i2 = _check_pointer(i2, 136404);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 136404))*4);
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


  currentLoop = (OOC_IR__LoopStatm)(OOC_INT32)0;
  currentTry = (OOC_IR__TryStatm)(OOC_INT32)0;
  enclosingTry = 0;
  enclosingTryLastLoop = 0;
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
  *(OOC_INT32*)((_check_pointer(i1, 136831))+4) = i0;
  i0 = (OOC_INT32)statmSeq;
  *(OOC_INT32*)((_check_pointer(i1, 136852))+8) = i0;
  i0 = checkFunctionResult;
  *(OOC_UINT8*)((_check_pointer(i1, 136881))+12) = i0;
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
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 137886)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
          return;
          ;
        }

        
        OOC_IR__StatementSeq OOC_IR__BuilderDesc_NewProcedure_AddSetupCode_Prepend(ADT_ArrayList__ArrayList prefix, OOC_IR__StatementSeq statmSeq) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
          OOC_IR__StatementSeq _new;
          OOC_INT32 i;

          i0 = (OOC_INT32)prefix;
          i1 = (OOC_INT32)statmSeq;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 138112))+4);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 138132)), (OOC_INT32)0);
          i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__StatementSeq.baseTypes[0], (i2+i3));
          _new = (OOC_IR__StatementSeq)i2;
          i3 = *(OOC_INT32*)((_check_pointer(i0, 138165))+4);
          i3 = i3-1;
          i4 = 0<=i3;
          i = 0;
          if (!i4) goto l8;
          i4=0;
l3_loop:
          i5 = _check_pointer(i2, 138190);
          i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
          i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 138203));
          i7 = _check_pointer(i7, 138210);
          i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
          i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 138210))*4);
          *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 138190))*4) = (_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 138214)))), &_td_OOC_IR__StatementDesc, 138214));
          i4 = i4+1;
          i5 = i4<=i3;
          i = i4;
          if (i5) goto l3_loop;
l8:
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 138273)), (OOC_INT32)0);
          i3 = i3-1;
          i4 = 0<=i3;
          i = 0;
          if (!i4) goto l16;
          i4=0;
l11_loop:
          i5 = _check_pointer(i2, 138294);
          i6 = *(OOC_INT32*)((_check_pointer(i0, 138303))+4);
          i7 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
          i8 = _check_pointer(i1, 138322);
          i9 = OOC_ARRAY_LENGTH(i8, (OOC_INT32)0);
          i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 138322))*4);
          *(OOC_INT32*)(i5+(_check_index((i4+i6), i7, OOC_UINT32, 138294))*4) = i8;
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 138439))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 138451))+44);
      formalPars = (OOC_SymbolTable__VarDeclArray)i0;
      fparIndex = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 138552)), (OOC_INT32)0);
      i0 = 0!=i0;
      if (!i0) goto l11;
      i0=0;
l3_loop:
      i1 = (OOC_INT32)formalPars;
      i1 = _check_pointer(i1, 138585);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 138585))*4);
      fpar = (OOC_SymbolTable__VarDecl)i0;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 138613))+52);
      if (!i1) goto l6;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 138680)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)(OOC_INT32)0, (OOC_SymbolTable__VarDecl)i0);
      i2 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 138654)))), OOC_IR__BuilderDesc_NewCopyParameter)),OOC_IR__BuilderDesc_NewCopyParameter)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Var)i0);
      OOC_IR__BuilderDesc_NewProcedure_AddSetupCode_AddStatm((OOC_IR__Statement)i0);
l6:
      i0 = fparIndex;
      i0 = i0+1;
      fparIndex = i0;
      i1 = (OOC_INT32)formalPars;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 138552)), (OOC_INT32)0);
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
      _failed_function(137230); return 0;
      ;
    }


  i0 = (OOC_INT32)decl;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 138923))+42);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = hasBegin;
  
l4:
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)sym;
  if (!i1) goto l7;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 138958)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 57, (OOC_Scanner_Builder_BasicList__Symbol)i3);
l7:
  i1 = (OOC_INT32)statmSeq;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 139005)))), OOC_IR__BuilderDesc_CheckExit)),OOC_IR__BuilderDesc_CheckExit)((OOC_IR__Builder)i2, (OOC_SymbolTable__ProcDecl)i0, (OOC_IR__StatementSeq)i1);
  p = (OOC_IR__Procedure)((OOC_INT32)RT0__NewObject(_td_OOC_IR__Procedure.baseTypes[0]));
  i0 = (OOC_INT32)OOC_IR__BuilderDesc_NewProcedure_AddSetupCode((OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__ProcDecl)i0, (OOC_IR__StatementSeq)i1);
  statmSeq = (OOC_IR__StatementSeq)i0;
  i1 = (OOC_INT32)decl;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 139257))+16);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 139263));
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 139463)))), OOC_IR__VisitorDesc_VisitProcedure)),OOC_IR__VisitorDesc_VisitProcedure)((OOC_IR__Visitor)i0, (OOC_IR__Procedure)i1);
  return;
  ;
}

void OOC_IR__InitModule(OOC_IR__Module m, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_Scanner_InputBuffer__CharArray name, OOC_IR__ProcedureList procList, OOC_IR__Procedure moduleBody) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sym;
  i1 = (OOC_INT32)m;
  OOC_IR__InitNode((OOC_IR__Node)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i0 = (OOC_INT32)name;
  *(OOC_INT32*)((_check_pointer(i1, 139763))+4) = i0;
  i0 = (OOC_INT32)procList;
  *(OOC_INT32*)((_check_pointer(i1, 139784))+8) = i0;
  i0 = (OOC_INT32)moduleBody;
  *(OOC_INT32*)((_check_pointer(i1, 139813))+12) = i0;
  return;
  ;
}

OOC_IR__Module OOC_IR__BuilderDesc_NewModule(OOC_IR__Builder b, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_Scanner_InputBuffer__CharArray name, OOC_SymbolTable__Module decl, OOC_IR__ProcedureList procList, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_IR__Module m;
  auto void OOC_IR__BuilderDesc_NewModule_UnusedDeclarations(OOC_SymbolTable__Item item);
    
    void OOC_IR__BuilderDesc_NewModule_UnusedDeclarations(OOC_SymbolTable__Item item) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__Item nested;

      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 140198)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (!i1) goto l30;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 140445))+36);
      i1 = i1==0;
      if (i1) goto l5;
      i1=OOC_FALSE;
      goto l7;
l5:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 140480))+24);
      i1 = i1==0;
      
l7:
      if (i1) goto l9;
      i1=OOC_FALSE;
      goto l15;
l9:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 140536)))), &_td_OOC_SymbolTable__VarDeclDesc));
      if (i1) goto l12;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 140565)))), &_td_OOC_SymbolTable__VarDeclDesc, 140565)), 140573))+48);
      i1 = !i1;
      
      goto l15;
l12:
      i1=OOC_TRUE;
l15:
      if (i1) goto l17;
      i1=OOC_FALSE;
      goto l27;
l17:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 140608)))), &_td_OOC_SymbolTable__ProcDeclDesc));
      if (i1) goto l24;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 140651)))), &_td_OOC_SymbolTable__ProcDeclDesc, 140651)), 140660))+41);
      if (i1) goto l22;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 140701)))), &_td_OOC_SymbolTable__ProcDeclDesc, 140701)), 140710))+40);
      
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 140774))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 140741)))), OOC_IR__BuilderDesc_WarnName)),OOC_IR__BuilderDesc_WarnName)((OOC_IR__Builder)i1, 53, (OOC_SymbolTable__Name)i2);
l30:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 140858))+8);
      i1 = i0!=(OOC_INT32)0;
      nested = (OOC_SymbolTable__Item)i0;
      if (!i1) goto l38;
l33_loop:
      OOC_IR__BuilderDesc_NewModule_UnusedDeclarations((OOC_SymbolTable__Item)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 140962));
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
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 141118))+72);
  i4 = (OOC_INT32)sym;
  i5 = (OOC_INT32)statmSeq;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 141093)))), OOC_IR__BuilderDesc_NewProcedure)),OOC_IR__BuilderDesc_NewProcedure)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__ProcDecl)i3, (OOC_IR__StatementSeq)i5, OOC_TRUE);
  i5 = (OOC_INT32)name;
  i6 = (OOC_INT32)procList;
  OOC_IR__InitModule((OOC_IR__Module)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_Scanner_InputBuffer__CharArray)i5, (OOC_IR__ProcedureList)i6, (OOC_IR__Procedure)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 141156))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 141156))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141164)))), OOC_Error__ListDesc_NoErrors)),OOC_Error__ListDesc_NoErrors)((OOC_Error__List)i1);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 141395)))), OOC_IR__VisitorDesc_VisitModule)),OOC_IR__VisitorDesc_VisitModule)((OOC_IR__Visitor)i0, (OOC_IR__Module)i1);
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 141813)), (OOC_INT32)0);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l10;
      i2=0;
l5_loop:
      i3 = _check_pointer(i0, 141834);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      OOC_IR__ModuleDesc_Destroy_E((void*)(i3+(_check_index(i2, i4, OOC_UINT32, 141834))*4));
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
      *(OOC_INT32*)((_check_pointer(i0, 142010))+4) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142038)))), &_td_OOC_IR__ConstDesc);
      if (i1) goto l133;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142086)))), &_td_OOC_IR__OperatorDesc);
      if (i1) goto l15;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144301)))), &_td_OOC_IR__ReferenceDesc);
      if (i1) goto l13;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144352)))), &_td_OOC_IR__StatementDesc);
      if (i1) goto l11;
      Log__Type("--- expression type: ", 22, (void*)i0);
      _assert(OOC_FALSE, 127, 144489);
      goto l134;
l11:
      OOC_IR__ModuleDesc_Destroy_S((void*)(OOC_INT32)n);
      goto l134;
l13:
      *(OOC_INT32*)((_check_pointer(i0, 144327))+8) = (OOC_INT32)0;
      goto l134;
l15:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142116)))), &_td_OOC_IR__AbsDesc);
      if (i1) goto l130;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142164)))), &_td_OOC_IR__AdrDesc);
      if (i1) goto l128;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142211)))), &_td_OOC_IR__AshDesc);
      if (i1) goto l126;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142279)))), &_td_OOC_IR__BinaryArithDesc);
      if (i1) goto l124;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142356)))), &_td_OOC_IR__BooleanOpDesc);
      if (i1) goto l122;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142431)))), &_td_OOC_IR__CapDesc);
      if (i1) goto l120;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142479)))), &_td_OOC_IR__CompareDesc);
      if (i1) goto l118;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142552)))), &_td_OOC_IR__ConcatDesc);
      if (i1) goto l116;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142607)))), &_td_OOC_IR__ChangeElementDesc);
      if (i1) goto l114;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142687)))), &_td_OOC_IR__DerefDesc);
      if (i1) goto l112;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142769)))), &_td_OOC_IR__EntierDesc);
      if (i1) goto l110;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142820)))), &_td_OOC_IR__IndexDesc);
      if (i1) goto l108;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142892)))), &_td_OOC_IR__LenDesc);
      if (i1) goto l106;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 142994)))), &_td_OOC_IR__NegateDesc);
      if (i1) goto l104;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143045)))), &_td_OOC_IR__NewBlockDesc);
      if (i1) goto l102;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143095)))), &_td_OOC_IR__NewObjectDesc);
      if (i1) goto l100;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143152)))), &_td_OOC_IR__NotDesc);
      if (i1) goto l98;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143200)))), &_td_OOC_IR__OddDesc);
      if (i1) goto l96;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143248)))), &_td_OOC_IR__SelectFieldDesc);
      if (i1) goto l94;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143362)))), &_td_OOC_IR__SelectProcDesc);
      if (i1) goto l92;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143512)))), &_td_OOC_IR__SetMemberDesc);
      if (i1) goto l90;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143588)))), &_td_OOC_IR__SetOpDesc);
      if (i1) goto l88;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143659)))), &_td_OOC_IR__SetRangeDesc);
      if (i1) goto l86;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143730)))), &_td_OOC_IR__ShiftDesc);
      if (i1) goto l84;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143799)))), &_td_OOC_IR__TypeCastDesc);
      if (i1) goto l82;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143849)))), &_td_OOC_IR__TypeConvDesc);
      if (i1) goto l80;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143899)))), &_td_OOC_IR__TypeTagDesc);
      if (i1) goto l78;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 143950)))), &_td_OOC_IR__TypeTestDesc);
      if (i1) goto l76;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144094)))), &_td_OOC_IR__TypeGuardDesc);
      if (i1) goto l74;
      Log__Type("--- operator type: ", 20, (void*)i0);
      _assert(OOC_FALSE, 127, 144260);
      goto l134;
l74:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 144130))+8);
      expr = (OOC_IR__Expression)i0;
      OOC_IR__ModuleDesc_Destroy_E((void*)(OOC_INT32)&expr);
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 144171))+8) = (OOC_INT32)0;
      goto l134;
l76:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143979))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 144000))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144038))+20));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 144063))+24) = (OOC_INT32)0;
      goto l134;
l78:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143927))+8));
      goto l134;
l80:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143878))+8));
      goto l134;
l82:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143828))+8));
      goto l134;
l84:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143756))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143780))+12));
      goto l134;
l86:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143688))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143711))+12));
      goto l134;
l88:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143614))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143637))+16));
      goto l134;
l90:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143542))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143568))+12));
      goto l134;
l92:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143393))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 143418))+16) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 143451))+20) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 143480))+24) = (OOC_INT32)0;
      goto l134;
l94:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143280))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 143303))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 143331))+16) = (OOC_INT32)0;
      goto l134;
l96:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143224))+8));
      goto l134;
l98:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143176))+8));
      goto l134;
l100:
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 143129))+8));
      goto l134;
l102:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143074))+8));
      goto l134;
l104:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 143021))+8));
      goto l134;
l106:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142916))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142940))+20));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 142970))+16) = 0;
      goto l134;
l108:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142846))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142870))+12));
      goto l134;
l110:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142796))+8));
      goto l134;
l112:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142713))+8));
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 142737))+12) = (OOC_INT32)0;
      goto l134;
l114:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142641))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142663))+16));
      goto l134;
l116:
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 142583))+8));
      goto l134;
l118:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142507))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142530))+16));
      goto l134;
l120:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142455))+8));
      goto l134;
l122:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142386))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142409))+16));
      goto l134;
l124:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142311))+12));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142334))+16));
      goto l134;
l126:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142235))+8));
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142259))+12));
      goto l134;
l128:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142188))+8));
      goto l134;
l130:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 142140))+8));
      goto l134;
l133:
      *(OOC_INT32*)((_check_pointer(i0, 142060))+8) = (OOC_INT32)0;
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 144685)), (OOC_INT32)0);
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l11;
      i2=0;
l5_loop:
      i3 = _check_pointer(i0, 144706);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      OOC_IR__ModuleDesc_Destroy_S((void*)(i3+(_check_index(i2, i4, OOC_UINT32, 144706))*4));
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
      if (!i1) goto l91;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144861)))), &_td_OOC_IR__AssertDesc);
      if (i1) goto l89;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 144933)))), &_td_OOC_IR__AssignmentDesc);
      if (i1) goto l87;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145007)))), &_td_OOC_IR__CallDesc);
      if (i1) goto l85;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145112)))), &_td_OOC_IR__CopyDesc);
      if (i1) goto l83;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145177)))), &_td_OOC_IR__CopyParameterDesc);
      if (i1) goto l81;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145233)))), &_td_OOC_IR__CopyStringDesc);
      if (i1) goto l79;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145330)))), &_td_OOC_IR__ExitDesc);
      if (i1) goto l77;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145376)))), &_td_OOC_IR__ForStatmDesc);
      if (i1) goto l75;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145508)))), &_td_OOC_IR__IfStatmDesc);
      if (i1) goto l73;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145611)))), &_td_OOC_IR__CaseStatmDesc);
      if (i1) goto l63;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145894)))), &_td_OOC_IR__LoopStatmDesc);
      if (i1) goto l61;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 145944)))), &_td_OOC_IR__MoveBlockDesc);
      if (i1) goto l59;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146035)))), &_td_OOC_IR__RaiseDesc);
      if (i1) goto l57;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146083)))), &_td_OOC_IR__RepeatStatmDesc);
      if (i1) goto l55;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146165)))), &_td_OOC_IR__ReturnDesc);
      if (i1) goto l53;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146211)))), &_td_OOC_IR__TryStatmDesc);
      if (i1) goto l43;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146439)))), &_td_OOC_IR__WhileStatmDesc);
      if (i1) goto l41;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146512)))), &_td_OOC_IR__WithStatmDesc);
      if (i1) goto l39;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 146509)))), 146509);
      goto l90;
l39:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146540))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 146565))+12));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 146593))+16));
      goto l90;
l41:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146468))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 146493))+12));
      goto l90;
l43:
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 146241))+8));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146282))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 146292)), (OOC_INT32)0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l51;
      i1=0;
l46_loop:
      i2 = (OOC_INT32)*n;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 146313))+12);
      i2 = _check_pointer(i2, 146323);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 146323))*4);
      *(OOC_INT32*)((_check_pointer(i2, 146326))+4) = (OOC_INT32)0;
      i2 = (OOC_INT32)*n;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 146358))+12);
      i2 = _check_pointer(i2, 146368);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 146368))*4);
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i2, 146371))+12));
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l46_loop;
l51:
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 146409))+12) = (OOC_INT32)0;
      goto l90;
l53:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146190))+8));
      goto l90;
l55:
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 146116))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146137))+12));
      goto l90;
l57:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146059))+8));
      goto l90;
l59:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145972))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145995))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 146016))+16));
      goto l90;
l61:
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 145925))+8));
      goto l90;
l63:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145639))+8));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 145678))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 145687)), (OOC_INT32)0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l71;
      i1=0;
l66_loop:
      i2 = (OOC_INT32)*n;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 145708))+12);
      i2 = _check_pointer(i2, 145717);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 145717))*4);
      *(OOC_INT32*)((_check_pointer(i2, 145720))+8) = (OOC_INT32)0;
      i2 = (OOC_INT32)*n;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 145754))+12);
      i3 = _check_pointer(i3, 145763);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 145763))*4);
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i3, 145766))+12));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 145791))+12);
      i2 = _check_pointer(i2, 145800);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      *(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 145800))*4) = (OOC_INT32)0;
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l66_loop;
l71:
      i0 = (OOC_INT32)*n;
      *(OOC_INT32*)((_check_pointer(i0, 145838))+12) = (OOC_INT32)0;
      i0 = (OOC_INT32)*n;
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 145872))+16));
      goto l90;
l73:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145534))+8));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 145559))+12));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 145587))+16));
      goto l90;
l75:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145403))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145423))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145445))+16));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145465))+20));
      OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 145489))+24));
      goto l90;
l77:
      *(OOC_INT32*)((_check_pointer(i0, 145351))+8) = (OOC_INT32)0;
      goto l90;
l79:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145262))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145285))+12));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145306))+16));
      goto l90;
l81:
      *(OOC_INT32*)((_check_pointer(i0, 145207))+8) = (OOC_INT32)0;
      goto l90;
l83:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145135))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145158))+12));
      goto l90;
l85:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 145030))+8));
      OOC_IR__ModuleDesc_Destroy_EList((void*)((_check_pointer(i0, 145057))+12));
      *(OOC_INT32*)((_check_pointer(i0, 145081))+16) = (OOC_INT32)0;
      goto l90;
l87:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144962))+8));
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144987))+12));
      goto l90;
l89:
      OOC_IR__ModuleDesc_Destroy_E((void*)((_check_pointer(i0, 144886))+8));
      *(OOC_INT32*)((_check_pointer(i0, 144910))+12) = 0;
l90:
      *n = (OOC_IR__Statement)(OOC_INT32)0;
l91:
      return;
      ;
    }


  i0 = (OOC_INT32)m;
  *(OOC_INT32*)((_check_pointer(i0, 146675))+4) = (OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146712))+8);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 146721)), (OOC_INT32)0);
  i0 = i0-1;
  i1 = 0<=i0;
  i = 0;
  if (!i1) goto l8;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)m;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 146736))+8);
  i3 = _check_pointer(i3, 146745);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 146745))*4);
  *(OOC_INT32*)((_check_pointer(i3, 146748))+4) = (OOC_INT32)0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 146774))+8);
  i2 = _check_pointer(i2, 146783);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 146783))*4);
  OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i1, 146786))+8));
  i1 = (OOC_INT32)m;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 146805))+8);
  i1 = _check_pointer(i1, 146814);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i3 = i;
  *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 146814))*4) = (OOC_INT32)0;
  i1 = i3+1;
  i2 = i1<=i0;
  i = i1;
  if (i2) goto l3_loop;
l8:
  i0 = (OOC_INT32)m;
  *(OOC_INT32*)((_check_pointer(i0, 146840))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146864))+12);
  *(OOC_INT32*)((_check_pointer(i1, 146875))+4) = (OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 146899))+12);
  OOC_IR__ModuleDesc_Destroy_SSeq((void*)((_check_pointer(i0, 146910))+8));
  i0 = (OOC_INT32)m;
  *(OOC_INT32*)((_check_pointer(i0, 146927))+12) = (OOC_INT32)0;
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
  *(OOC_INT32*)(_check_pointer(i0, 147225)) = i1;
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
  *(OOC_INT32*)(_check_pointer(i0, 148077)) = i1;
  i1 = (OOC_INT32)pragmaHistory;
  *(OOC_INT32*)((_check_pointer(i0, 148102))+4) = i1;
  i1 = (OOC_INT32)errList;
  *(OOC_INT32*)((_check_pointer(i0, 148141))+8) = i1;
  i1 = (OOC_INT32)OOC_Scanner_Builder_BasicList__NewSymbol((OOC_Scanner_InputBuffer__CharArray)(OOC_INT32)0, -1);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(17);
  i3 = (OOC_INT32)Object_Boxed__false;
  i1 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i3);
  *(OOC_INT32*)((_check_pointer(i0, 148168))+16) = i1;
  i1 = (OOC_INT32)OOC_IR__InitBuilder_NewTypeType((OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Position)(OOC_INT32)0);
  *(OOC_INT32*)((_check_pointer(i0, 148332))+20) = i1;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)OOC_IR__InitBuilder_NewModuleType((OOC_SymbolTable__Item)(OOC_INT32)0, (OOC_SymbolTable__Position)(OOC_INT32)0);
  *(OOC_INT32*)((_check_pointer(i0, 148375))+24) = i1;
  i0 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 148422))+32) = (OOC_INT32)0;
  i1 = (OOC_INT32)fold;
  *(OOC_INT32*)((_check_pointer(i0, 148447))+12) = i1;
  *(OOC_INT32*)(_check_pointer(i1, 148476)) = i0;
  i1 = (OOC_INT32)module;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 148546))+40);
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringModule;
  i4 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringType;
  i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__ResolveQualident((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i3, (OOC_SymbolTable__Name)i4);
  string = (OOC_SymbolTable__Item)i1;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 148800)))), &_td_OOC_SymbolTable__TypeDeclDesc, 148800)), 148809))+40);
  *(OOC_INT32*)((_check_pointer(i0, 148773))+28) = i1;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 148736))+28) = (OOC_INT32)0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149379))+8);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 149385)))), &_td_OOC_IR__VarDesc);
  if (i1) goto l3;
  i1 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149752))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 149757));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 149721)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 29, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149419))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 149426)))), &_td_OOC_IR__VarDesc, 149426)), 149430))+8);
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 149441)))), &_td_OOC_SymbolTable__VarDeclDesc, 149441);
  var = (OOC_SymbolTable__VarDecl)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__DeclarationArray.baseTypes[0], 1);
  da = (OOC_SymbolTable__DeclarationArray)i2;
  i3 = _check_pointer(i2, 149478);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149513))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 149523))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 149534)))), &_td_OOC_SymbolTable__TypeDeclDesc, 149534)), 149543))+40);
  i0 = (OOC_INT32)OOC_IR__NewGuardedVar((OOC_SymbolTable__VarDecl)i1, (OOC_SymbolTable__Type)i0);
  *(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 149478))*4) = i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NewNested((OOC_SymbolTable__DeclarationArray)i2, 1);
  nested = (OOC_SymbolTable_Namespace__Nested)i0;
  i1 = (OOC_INT32)*namespace;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 149609)))), OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)),OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)((OOC_SymbolTable_Namespace__Nested)i0, (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 149654)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 149654)));
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
l4:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__DeclarationArray.baseTypes[0], 0);
  da = (OOC_SymbolTable__DeclarationArray)i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Namespace__NewNested((OOC_SymbolTable__DeclarationArray)i0, 0);
  nested = (OOC_SymbolTable_Namespace__Nested)i0;
  i1 = (OOC_INT32)*namespace;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 149920)))), OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)),OOC_SymbolTable_Namespace__NestedDesc_SetEnclosingNamespace)((OOC_SymbolTable_Namespace__Nested)i0, (OOC_SymbolTable_Namespace__Namespace)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 149965)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 149965)));
  *namespace = (OOC_SymbolTable__Namespace)i0;
  return;
  ;
}

void OOC_IR__BuilderDesc_EndTypeGuard(OOC_IR__Builder b, OOC_SymbolTable__Namespace *namespace) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)*namespace;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 150137)))), &_td_OOC_SymbolTable_Namespace__NestedDesc, 150137)), 150144))+8);
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 150459))+4);
  i1 = i1==45;
  i2 = (OOC_INT32)b;
  if (i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 151860)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 2, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  goto l48;
l3:
  i1 = (OOC_INT32)ns;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 150519)))), OOC_IR__BuilderDesc_GetName)),OOC_IR__BuilderDesc_GetName)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  i4 = (OOC_INT32)context;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150497)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i1, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, OOC_FALSE);
  i3 = i1==(OOC_INT32)0;
  decl = (OOC_SymbolTable__Declaration)i1;
  if (i3) goto l46;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150637)))), OOC_SymbolTable__DeclarationDesc_IncrUsageCount)),OOC_SymbolTable__DeclarationDesc_IncrUsageCount)((OOC_SymbolTable__Declaration)i1);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150673)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i3) goto l44;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150764)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i3) goto l42;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150835)))), &_td_OOC_IR__GuardedVarDesc);
  if (i3) goto l40;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 150977)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i3) goto l38;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 151053)))), &_td_OOC_SymbolTable__PredefProcDesc);
  if (i3) goto l36;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 151131)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i3) goto l34;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 151209)))), &_td_OOC_SymbolTable__ImportDesc);
  if (i3) goto l32;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 151301)))), &_td_OOC_SymbolTable__RedirectDesc);
  if (i3) goto l22;
  Log__Type("Unknown decl in NewIdentRef", 28, (void*)i1);
  _assert(OOC_FALSE, 127, 151806);
  goto l48;
l22:
  i3 = (OOC_INT32)baseNS;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 151373))+40);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 151350)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i5, OOC_FALSE);
  redirModule = (OOC_SymbolTable__Item)i3;
  i5 = i3==(OOC_INT32)0;
  if (i5) goto l25;
  i5 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 151440)))), &_td_OOC_SymbolTable__ImportDesc));
  
  goto l27;
l25:
  i5=OOC_TRUE;
l27:
  if (i5) goto l29;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 151553)))), &_td_OOC_SymbolTable__ImportDesc, 151553)), 151560))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 151575))+40);
  ns = (OOC_SymbolTable__Namespace)i3;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 151695))+44);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 151701))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 151695))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 151701))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 151705)), (OOC_INT32)0);
  i0 = (OOC_INT32)OOC_Scanner_Builder_BasicList__CloneSymbol((OOC_Scanner_Builder_BasicList__Symbol)i0, (void*)(_check_pointer(i5, 151705)), i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 151600)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i2, (OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l48;
l29:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 151473)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 41, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  goto l48;
l32:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 151269))+44);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 151243)))), OOC_IR__BuilderDesc_NewModuleRef)),OOC_IR__BuilderDesc_NewModuleRef)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Module)i1);
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
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 151013)))), OOC_IR__BuilderDesc_NewTypeRef)),OOC_IR__BuilderDesc_NewTypeRef)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__TypeDecl)i1);
  return (OOC_IR__Expression)i0;
  goto l48;
l40:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 150892))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 150872)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__VarDecl)i3);
  varRef = (OOC_IR__Var)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 150930))+44);
  *(OOC_INT32*)((_check_pointer(i0, 150916))+4) = i1;
  return (OOC_IR__Expression)i0;
  goto l48;
l42:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 150799)))), OOC_IR__BuilderDesc_NewVar)),OOC_IR__BuilderDesc_NewVar)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__VarDecl)i1);
  return (OOC_IR__Expression)i0;
  goto l48;
l44:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 150729))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 150741))+40);
  i0 = (OOC_INT32)OOC_IR__NewConst((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i1);
  return (OOC_IR__Expression)i0;
  goto l48;
l46:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 150581)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 1, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l48:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 152101))+16);
  return (OOC_IR__Expression)i0;
  ;
}

OOC_IR__Expression OOC_IR__BuilderDesc_NewQualident(OOC_IR__Builder b, OOC_SymbolTable__Namespace baseNS, OOC_IR__ModuleRef modref, OOC_SymbolTable__Item context, OOC_Scanner_Builder_BasicList__Symbol name) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)modref;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 152386))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 152397)))), &_td_OOC_SymbolTable__ModuleDesc, 152397)), 152404))+40);
  i2 = (OOC_INT32)baseNS;
  i3 = (OOC_INT32)context;
  i4 = (OOC_INT32)name;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 152357)))), OOC_IR__BuilderDesc_NewIdentRef)),OOC_IR__BuilderDesc_NewIdentRef)((OOC_IR__Builder)i0, (OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Namespace)i1, (OOC_SymbolTable__Item)i3, (OOC_Scanner_Builder_BasicList__Symbol)i4);
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
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 152720)))), OOC_IR__BuilderDesc_CheckFunctionOp)),OOC_IR__BuilderDesc_CheckFunctionOp)((OOC_IR__Builder)i0, (OOC_IR__Expression)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 152759))+4);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 152766)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i3) goto l3;
  varRef = (OOC_IR__Expression)i1;
  i3=i1;
  goto l4;
l3:
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 152804)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
  varRef = (OOC_IR__Expression)i3;
  
l4:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 152884))+4);
  i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 152891)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i4) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 153547));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 153521)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 20, (OOC_Scanner_Builder_BasicList__Symbol)i1);
  return (OOC_IR__Expression)i0;
  goto l23;
l7:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 152930))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 152941)))), &_td_OOC_SymbolTable__RecordDesc, 152941)), 152948))+44);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 152930))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 152941)))), &_td_OOC_SymbolTable__RecordDesc, 152941)), 152948))+44);
  i6 = (OOC_INT32)name;
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 152984)))), OOC_IR__BuilderDesc_GetName)),OOC_IR__BuilderDesc_GetName)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i6);
  i8 = (OOC_INT32)context;
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 152952)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i5, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Name)i7, OOC_FALSE);
  i5 = i4!=(OOC_INT32)0;
  decl = (OOC_SymbolTable__Declaration)i4;
  if (!i5) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 153049)))), OOC_SymbolTable__DeclarationDesc_IncrUsageCount)),OOC_SymbolTable__DeclarationDesc_IncrUsageCount)((OOC_SymbolTable__Declaration)i4);
l10:
  i5 = i4==(OOC_INT32)0;
  if (i5) goto l21;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 153178)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i5) goto l19;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 153294)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i5) goto l17;
  _assert(OOC_FALSE, 127, 153471);
  goto l23;
l17:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 153365))+4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 153332)))), OOC_IR__BuilderDesc_NewSelectProc)),OOC_IR__BuilderDesc_NewSelectProc)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1, (OOC_SymbolTable__Record)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 153376)))), &_td_OOC_SymbolTable__RecordDesc, 153376)), (OOC_SymbolTable__ProcDecl)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 153427)))), &_td_OOC_SymbolTable__ProcDeclDesc, 153427)), (OOC_Scanner_Builder_BasicList__Symbol)i6, OOC_FALSE);
  return (OOC_IR__Expression)i0;
  goto l23;
l19:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 153217)))), OOC_IR__BuilderDesc_NewSelectField)),OOC_IR__BuilderDesc_NewSelectField)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i3, (OOC_SymbolTable__FieldDecl)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 153257)))), &_td_OOC_SymbolTable__FieldDeclDesc, 153257)), (OOC_Scanner_Builder_BasicList__Symbol)i6);
  return (OOC_IR__Expression)i0;
  goto l23;
l21:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 153127)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 1, (OOC_Scanner_Builder_BasicList__Symbol)i6);
  return (OOC_IR__Expression)i0;
l23:
  _failed_function(152469); return 0;
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 154447)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l3;
      return OOC_FALSE;
      goto l4;
l3:
      i0 = *(OOC_INT16*)((_check_pointer(i0, 154484))+32);
      i1 = classes;
      return (_in(i0,i1));
l4:
      _failed_function(154368); return 0;
      ;
    }

    
    OOC_IR__Expression OOC_IR__BuilderDesc_NewOperator_UnaryOperator() {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Type type;
      OOC_CHAR8 isNumeric;
      OOC_CHAR8 isSet;
      OOC_CHAR8 isBoolean;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 154697))+16);
      i2 = (OOC_INT32)left;
      i1 = i2==i1;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 154722))+16);
      i2 = (OOC_INT32)right;
      i1 = i2==i1;
      
      goto l5;
l3:
      i1=OOC_TRUE;
l5:
      if (i1) goto l28;
      i0 = (OOC_INT32)right;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 154972))+4);
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
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155394)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l12:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)right;
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155339)))), OOC_IR__BuilderDesc_NewNegate)),OOC_IR__BuilderDesc_NewNegate)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l14:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)right;
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155201)))), OOC_IR__BuilderDesc_NewNegate)),OOC_IR__BuilderDesc_NewNegate)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      case 6:
        if (i1) goto l19;
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155535)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
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
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155689)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
l24:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)right;
        i2 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155637)))), OOC_IR__BuilderDesc_NewNot)),OOC_IR__BuilderDesc_NewNot)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__Expression)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      default:
        i0 = (OOC_INT32)b;
        i1 = (OOC_INT32)sym;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 155758)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i1);
        return (OOC_IR__Expression)i0;
        goto l29;
      }
l28:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 154932))+16);
      return (OOC_IR__Expression)i0;
l29:
      _failed_function(154572); return 0;
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156190)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l5;
          i0=OOC_FALSE;
          goto l8;
l5:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156230)))), &_td_OOC_SymbolTable__ArrayDesc, 156230)), 156236))+36);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 156459))+16);
      i3 = (OOC_INT32)left;
      i2 = i3==i2;
      if (i2) goto l3;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 156484))+16);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 156762))+4);
      i1 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i1);
      
l11:
      if (i1) goto l13;
      i1=OOC_FALSE;
      goto l15;
l13:
      i1 = (OOC_INT32)right;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 156796))+4);
      i1 = OOC_SymbolTable_TypeRules__IsSetType((OOC_SymbolTable__Type)i1);
      
l15:
      if (i1) goto l166;
      i1 = id;
      i1 = i1==16;
      if (i1) goto l164;
      i1 = (OOC_INT32)b;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 156946)))), OOC_IR__BuilderDesc_WidenToCommon)),OOC_IR__BuilderDesc_WidenToCommon)((OOC_IR__Builder)i1, (void*)(OOC_INT32)&left, (void*)(OOC_INT32)&right);
      if (i1) goto l33;
      i0 = (OOC_INT32)left;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 159777))+4);
      i0 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i0);
      if (i0) goto l23;
      i0=OOC_FALSE;
      goto l25;
l23:
      i0 = (OOC_INT32)right;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 159800))+4);
      i0 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i0);
      
l25:
      if (i0) goto l27;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 160031)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 7, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      
      goto l169;
l27:
      i0 = id;
      i0 = _in(i0,32256);
      if (i0) goto l30;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159964)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      
      goto l169;
l30:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159903)))), OOC_IR__BuilderDesc_NewCompare)),OOC_IR__BuilderDesc_NewCompare)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l33:
      i1 = (OOC_INT32)left;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 157001))+4);
      leftType = (OOC_SymbolTable__Type)i1;
      i2 = (OOC_INT32)right;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 157026))+4);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 158908))+4);
      i0 = OOC_IR__BuilderDesc_NewOperator_BinaryOperator_IsString((OOC_SymbolTable__Type)i0);
      
l68:
      if (i0) goto l70;
      i0=OOC_FALSE;
      goto l72;
l70:
      i0 = (OOC_INT32)right;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 158931))+4);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 159081))+4);
      i0 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i0);
      
      goto l81;
l79:
      i0=OOC_TRUE;
l81:
      if (i0) goto l83;
      i0 = (OOC_INT32)left;
      i1 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 159118))+28);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 159109))+4);
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
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 159531))+4);
      i1 = (OOC_INT32)nil;
      i0 = i0==i1;
      
      goto l113;
l111:
      i0=OOC_TRUE;
l113:
      if (i0) goto l115;
      i0 = (OOC_INT32)leftType;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159572)))), &_td_OOC_SymbolTable__PointerDesc);
      
      goto l117;
l115:
      i0=OOC_TRUE;
l117:
      if (i0) goto l119;
      i0 = (OOC_INT32)leftType;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159601)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l122;
l119:
      i0=OOC_TRUE;
l122:
      if (i0) goto l124;
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159706)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i0, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      
      goto l169;
l124:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159645)))), OOC_IR__BuilderDesc_NewCompare)),OOC_IR__BuilderDesc_NewCompare)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l126:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 159391)))), OOC_IR__BuilderDesc_NewCompare)),OOC_IR__BuilderDesc_NewCompare)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l128:
      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], 2);
      exprList = (OOC_IR__ExpressionList)i0;
      i1 = _check_pointer(i0, 159179);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = (OOC_INT32)left;
      *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 159179))*4) = i3;
      i1 = _check_pointer(i0, 159208);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i3 = (OOC_INT32)right;
      *(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 159208))*4) = i3;
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 159234)))), OOC_IR__BuilderDesc_NewConcat)),OOC_IR__BuilderDesc_NewConcat)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_IR__ExpressionList)i0);
      
      goto l169;
l130:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158962)))), OOC_IR__BuilderDesc_NewCompare)),OOC_IR__BuilderDesc_NewCompare)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
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
        _failed_case(i6, 158651);
        goto l136;
      }
l136:
      i0 = (OOC_INT32)b;
      i1 = variant;
      i2 = (OOC_INT32)right;
      i3 = (OOC_INT32)left;
      i4 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158760)))), OOC_IR__BuilderDesc_NewBooleanOp)),OOC_IR__BuilderDesc_NewBooleanOp)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
      
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
        _failed_case(i6, 158336);
        goto l144;
      }
l144:
      i0 = (OOC_INT32)b;
      i1 = variant;
      i2 = (OOC_INT32)right;
      i3 = (OOC_INT32)left;
      i4 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158543)))), OOC_IR__BuilderDesc_NewSetOp)),OOC_IR__BuilderDesc_NewSetOp)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
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
        _failed_case(i6, 158040);
        goto l150;
      }
l150:
      i0 = (OOC_INT32)b;
      i1 = variant;
      i2 = (OOC_INT32)right;
      i3 = (OOC_INT32)left;
      i4 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 158162)))), OOC_IR__BuilderDesc_NewBinaryArith)),OOC_IR__BuilderDesc_NewBinaryArith)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
      
      goto l169;
l152:
      if (!i3) goto l154;
      i1 = (OOC_INT32)b;
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 157761)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)&left, (OOC_SymbolTable__Type)i0);
      dummy = i1;
      i1 = (OOC_INT32)b;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 157801)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)&right, (OOC_SymbolTable__Type)i0);
      dummy = i0;
l154:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)sym;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)right;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157854)))), OOC_IR__BuilderDesc_NewBinaryArith)),OOC_IR__BuilderDesc_NewBinaryArith)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, 3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i3);
      
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
        _failed_case(i6, 157399);
        goto l161;
      }
l161:
      i0 = (OOC_INT32)b;
      i1 = variant;
      i2 = (OOC_INT32)right;
      i3 = (OOC_INT32)left;
      i4 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 157564)))), OOC_IR__BuilderDesc_NewBinaryArith)),OOC_IR__BuilderDesc_NewBinaryArith)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
      
      goto l169;
l164:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156903)))), OOC_IR__BuilderDesc_NewTypeTest)),OOC_IR__BuilderDesc_NewTypeTest)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l166:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)right;
      i2 = (OOC_INT32)left;
      i3 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 156825)))), OOC_IR__BuilderDesc_NewSetMember)),OOC_IR__BuilderDesc_NewSetMember)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
      
      goto l169;
l168:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 156704))+16);
      
l169:
      return (OOC_IR__Expression)i0;
      ;
    }


  i0 = (OOC_INT32)sym;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 160137))+4);
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
  _failed_function(153605); return 0;
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
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 161214))+54);
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)*arg;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 161254))+4);
      i1 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i1, 16);
      
l5:
      if (i1) goto l66;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 161422))+50);
      if (i1) goto l24;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162990))+40);
      i1 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i1);
      if (i1) goto l11;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 163533))+40);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 163506)))), OOC_IR__BuilderDesc_WidenForAssign)),OOC_IR__BuilderDesc_WidenForAssign)((OOC_IR__Builder)i1, (void*)(OOC_INT32)arg, (OOC_SymbolTable__Type)i0);
      ok = i0;
      
      goto l20;
l11:
      i1 = (OOC_INT32)*arg;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 163307))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 163319))+40);
      i1 = OOC_SymbolTable_TypeRules__IsArrayCompatible((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i2);
      if (i1) goto l14;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 163361))+40);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 163371)))), &_td_OOC_SymbolTable__ArrayDesc, 163371)), 163377))+36);
      i1 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i1, 11);
      
      goto l16;
l14:
      i1=OOC_TRUE;
l16:
      if (i1) goto l18;
      i1 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 163440))+40);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 163422)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i1, (void*)(OOC_INT32)arg, (OOC_SymbolTable__Type)i0);
      
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 163622));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 163586)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 12, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      goto l66;
l24:
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*arg;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 161481)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 161516))+49);
      if (i2) goto l27;
      i2=OOC_FALSE;
      goto l29;
l27:
      i2 = (OOC_INT32)*arg;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 161535))+4);
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 161542)))), &_td_OOC_SymbolTable__PointerDesc);
      
l29:
      if (!i2) goto l31;
      i2 = (OOC_INT32)*arg;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 161668));
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 161653)))), OOC_IR__BuilderDesc_NewDeref)),OOC_IR__BuilderDesc_NewDeref)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i2);
      *arg = (OOC_IR__Expression)i2;
l31:
      i2 = (OOC_INT32)*arg;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 161731))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 161742))+4);
      i2 = OOC_SymbolTable_TypeRules__SameType((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i2);
      if (i2) goto l38;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 161782))+40);
      i2 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i2, 11);
      if (i2) goto l36;
      i2=OOC_FALSE;
      goto l40;
l36:
      i2 = (OOC_INT32)*arg;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 161842))+4);
      i2 = OOC_SymbolTable_TypeRules__IsByteCompatible((OOC_SymbolTable__Type)i2);
      
      goto l40;
l38:
      i2=OOC_TRUE;
l40:
      if (i2) goto l46;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 161888))+40);
      i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i2);
      if (i2) goto l44;
      i2=OOC_FALSE;
      goto l48;
l44:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 161929))+40);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 161939)))), &_td_OOC_SymbolTable__ArrayDesc, 161939)), 161945))+36);
      i2 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i2, 11);
      
      goto l48;
l46:
      i2=OOC_TRUE;
l48:
      if (i2) goto l66;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162174))+40);
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 162181)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i2) goto l59;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162491))+40);
      i2 = OOC_SymbolTable_TypeRules__IsOpenArrayType((OOC_SymbolTable__Type)i2);
      if (i2) goto l54;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 162862));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162828)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 40, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l66;
l54:
      i2 = (OOC_INT32)*arg;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 162543))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162555))+40);
      i0 = OOC_SymbolTable_TypeRules__IsArrayCompatible((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
      i0 = !i0;
      if (!i0) goto l66;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 162732));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162698)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 40, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l66;
l59:
      i2 = (OOC_INT32)*arg;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 162236))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 162248))+40);
      i0 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i0);
      i0 = !i0;
      if (!i0) goto l66;
      i0 = (OOC_INT32)*arg;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 162430));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 162396)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 40, (OOC_Scanner_Builder_BasicList__Symbol)i0);
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 164713)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i1) goto l5;
          return 0;
          goto l8;
l5:
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 164758)))), &_td_OOC_SymbolTable__ArrayDesc, 164758)), 164764)))), OOC_SymbolTable__TypeDesc_ArrayDimensions)),OOC_SymbolTable__TypeDesc_ArrayDimensions)((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 164758)))), &_td_OOC_SymbolTable__ArrayDesc, 164758)));
          return i0;
          goto l8;
l7:
          return 1;
l8:
          _failed_function(164583); return 0;
          ;
        }


      i0 = (OOC_INT32)*arguments;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 164914)), (OOC_INT32)0);
      i1 = (OOC_INT32)ADT_ArrayList__New(i1);
      newArgs = (ADT_ArrayList__ArrayList)i1;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 164966)), (OOC_INT32)0);
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
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 165175))+44);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 165183)), (OOC_INT32)0);
      i3 = i1!=i3;
      if (i3) goto l7;
      i0=OOC_FALSE;
      goto l9;
l7:
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 165227)), (OOC_INT32)0);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 165374))+44);
      i2 = _check_pointer(i2, 165382);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 165382))*4);
      fpar = (OOC_SymbolTable__VarDecl)i1;
      i2 = (OOC_INT32)*arguments;
      i2 = _check_pointer(i2, 165421);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT32, 165421))*4);
      arg = (OOC_IR__Expression)i0;
      
      goto l16;
l15:
      i0 = (OOC_INT32)formalPars;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 165294))+32);
      fpar = (OOC_SymbolTable__VarDecl)i0;
      i1 = (OOC_INT32)receiver;
      arg = (OOC_IR__Expression)i1;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l16:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 165485));
      i2 = (OOC_INT32)b;
      OOC_IR__BuilderDesc_NewCall_MakeParameterCompatible((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (void*)(OOC_INT32)&arg, (OOC_SymbolTable__VarDecl)i1);
      i0 = *(OOC_UINT8*)((_check_pointer(i1, 165528))+51);
      if (i0) goto l19;
      i0=OOC_FALSE;
      goto l21;
l19:
      i0 = (OOC_INT32)arg;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 165581))+4);
      i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 16);
      i0 = !i0;
      
l21:
      if (i0) goto l23;
      i0 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)arg;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 165936)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
      goto l24;
l23:
      i0 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)arg;
      i4 = (OOC_INT32)sym;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 165884)))), OOC_IR__BuilderDesc_NewAdr)),OOC_IR__BuilderDesc_NewAdr)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 165873)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i2);
l24:
      i0 = (OOC_INT32)newFPars;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 165981)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i1);
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 166014))+55);
      if (!i2) goto l52;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 166062))+40);
      fparType = (OOC_SymbolTable__Type)i2;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 166093)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i3) goto l35;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 167081)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i2) goto l52;
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 167116))+50);
      if (!i1) goto l52;
      i1 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)arg;
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 167183));
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 167166)))), OOC_IR__BuilderDesc_NewTypeTag)),OOC_IR__BuilderDesc_NewTypeTag)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_IR__Expression)i3);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 167155)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 167219)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)(OOC_INT32)0);
      goto l52;
l35:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 166145))+36);
      i1 = OOC_IR__IsPredefType((OOC_SymbolTable__Type)i1, 11);
      if (i1) goto l49;
      i0 = (OOC_INT32)arg;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 166588))+4);
      i0 = OOC_IR__BuilderDesc_NewCall_TransformArgs_Dimensions((OOC_SymbolTable__Type)i0);
      i1 = (OOC_INT32)fparType;
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 166606)))), OOC_SymbolTable__ArrayDesc_GetOpenDimensions)),OOC_SymbolTable__ArrayDesc_GetOpenDimensions)((OOC_SymbolTable__Array)i1);
      i0 = i0>=i2;
      if (!i0) goto l52;
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 166883)))), OOC_SymbolTable__ArrayDesc_GetOpenDimensions)),OOC_SymbolTable__ArrayDesc_GetOpenDimensions)((OOC_SymbolTable__Array)i1);
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
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 166966));
      i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 166953)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i6, (OOC_IR__Expression)i5, i3);
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 166944)))), OOC_IR__BuilderDesc_Fold)),OOC_IR__BuilderDesc_Fold)((OOC_IR__Builder)i4, (OOC_IR__Expression)i5);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 166933)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 167008)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)(OOC_INT32)0);
      i3 = i3+1;
      i4 = i3<=i0;
      i = i3;
      if (i4) goto l42_loop;
      goto l52;
l49:
      i1 = (OOC_INT32)newArgs;
      i2 = (OOC_INT32)b;
      i3 = (OOC_INT32)arg;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 166351));
      i4 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
      i5 = (OOC_INT32)arg;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 166499))+4);
      i5 = *(OOC_INT32*)((_check_pointer(i5, 166505))+24);
      i5 = (OOC_INT32)Object_BigInt__NewInt(i5);
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 166336)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i4, (Object_Boxed__Object)i5);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 166325)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 166538)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)(OOC_INT32)0);
l52:
      i0 = argIndex;
      i0 = i0+1;
      i1 = fparIndex;
      i1 = i1+1;
      argIndex = i0;
      fparIndex = i1;
      i2 = (OOC_INT32)formalPars;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 165175))+44);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 165183)), (OOC_INT32)0);
      i2 = i1!=i2;
      if (i2) goto l55;
      i2=OOC_FALSE;
      goto l57;
l55:
      i2 = (OOC_INT32)*arguments;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 165227)), (OOC_INT32)0);
      i2 = i0!=i2;
      
l57:
      if (i2) goto l12_loop;
l61:
      i2 = (OOC_INT32)formalPars;
      i3 = *(OOC_UINT8*)((_check_pointer(i2, 167470))+48);
      i4 = (OOC_INT32)newArgs;
      if (!i3) goto l74;
      i3 = (OOC_INT32)*arguments;
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 167535)), (OOC_INT32)0);
      i5 = i0!=i5;
      if (!i5) goto l74;
      i5 = (OOC_INT32)newFPars;
      
l68_loop:
      i6 = _check_pointer(i3, 167568);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i0, i7, OOC_UINT32, 167568))*4);
      arg = (OOC_IR__Expression)i6;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 167597)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i4, (Object__Object)i6);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 167631)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i5, (Object__Object)(OOC_INT32)0);
      i0 = i0+1;
      argIndex = i0;
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i3, 167535)), (OOC_INT32)0);
      i6 = i0!=i6;
      if (i6) goto l68_loop;
l74:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 167741))+44);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 167749)), (OOC_INT32)0);
      i1 = i1!=i2;
      if (i1) goto l80;
      i1 = (OOC_INT32)*arguments;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 167899)), (OOC_INT32)0);
      i2 = i0!=i2;
      if (!i2) goto l81;
      i2 = (OOC_INT32)b;
      i1 = _check_pointer(i1, 168006);
      i3 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i3, OOC_UINT32, 168006))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 168016));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 167969)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 39, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l81;
l80:
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)endOfArgsSym;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 167819)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 38, (OOC_Scanner_Builder_BasicList__Symbol)i1);
l81:
      i0 = *(OOC_INT32*)((_check_pointer(i4, 168071))+4);
      *arguments = (OOC_IR__ExpressionList)((OOC_INT32)RT0__NewObject(_td_OOC_IR__ExpressionList.baseTypes[0], i0));
      i0 = *(OOC_INT32*)((_check_pointer(i4, 168113))+4);
      *argFormalPars = (OOC_SymbolTable__VarDeclArray)((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__VarDeclArray.baseTypes[0], i0));
      i0 = *(OOC_INT32*)((_check_pointer(i4, 168149))+4);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l93;
      i1 = (OOC_INT32)newFPars;
      i2=0;
l84_loop:
      i3 = (OOC_INT32)*arguments;
      i3 = _check_pointer(i3, 168178);
      i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 168192));
      i6 = _check_pointer(i6, 168199);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 168199))*4);
      *(OOC_INT32*)(i3+(_check_index(i2, i5, OOC_UINT32, 168178))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 168203)))), &_td_OOC_IR__ExpressionDesc, 168203));
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 168236));
      i3 = _check_pointer(i3, 168243);
      i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i5, OOC_UINT32, 168243))*4);
      i3 = i3==(OOC_INT32)0;
      if (i3) goto l87;
      i3 = (OOC_INT32)*argFormalPars;
      i3 = _check_pointer(i3, 168330);
      i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 168345));
      i6 = _check_pointer(i6, 168352);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 168352))*4);
      *(OOC_INT32*)(i3+(_check_index(i2, i5, OOC_UINT32, 168330))*4) = (_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 168360)))), &_td_OOC_SymbolTable__VarDeclDesc, 168360));
      goto l88;
l87:
      i3 = (OOC_INT32)*argFormalPars;
      i3 = _check_pointer(i3, 168282);
      i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      *(OOC_INT32*)(i3+(_check_index(i2, i5, OOC_UINT32, 168282))*4) = (OOC_INT32)0;
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 168517)), (OOC_INT32)0);
      i2 = min;
      i1 = i1<i2;
      if (i1) goto l3;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 168545)), (OOC_INT32)0);
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 168609));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 168569)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 13, (OOC_Scanner_Builder_BasicList__Symbol)i1);
      return OOC_FALSE;
l8:
      _failed_function(168430); return 0;
      ;
    }


  i0 = (OOC_INT32)design;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 168740)))), &_td_OOC_IR__PredefProcDesc);
  if (i1) goto l43;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 179046))+16);
  i2 = i0==i2;
  if (i2) goto l41;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 179185))+4);
  i2 = OOC_SymbolTable_TypeRules__IsValidReceiverType((OOC_SymbolTable__Type)i2);
  if (i2) goto l7;
  i2=OOC_FALSE;
  goto l9;
l7:
  i2 = (OOC_INT32)arguments;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 179217)), 0);
  i2 = i2==1;
  
l9:
  if (i2) goto l11;
  i2=OOC_FALSE;
  goto l13;
l11:
  i2 = (OOC_INT32)arguments;
  i2 = _check_pointer(i2, 179237);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 179237))*4);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 179241)))), &_td_OOC_IR__TypeRefDesc);
  
l13:
  if (i2) goto l39;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 179389))+4);
  i2 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 179396)))), &_td_OOC_SymbolTable__FormalParsDesc));
  if (i2) goto l37;
  i2 = isFunctionCall;
  if (i2) goto l19;
  i3=OOC_FALSE;
  goto l21;
l19:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 179523))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 179534)))), &_td_OOC_SymbolTable__FormalParsDesc, 179534)), 179545))+36);
  i3 = i3==(OOC_INT32)0;
  
l21:
  if (i3) goto l35;
  i2 = !i2;
  if (i2) goto l25;
  i2=OOC_FALSE;
  goto l27;
l25:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 179682))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 179693)))), &_td_OOC_SymbolTable__FormalParsDesc, 179693)), 179704))+36);
  i2 = i2!=(OOC_INT32)0;
  
l27:
  if (i2) goto l33;
  call = (OOC_IR__Call)((OOC_INT32)RT0__NewObject(_td_OOC_IR__Call.baseTypes[0]));
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 179841)))), &_td_OOC_IR__SelectProcDesc);
  if (i1) goto l31;
  receiver = (OOC_IR__Expression)(OOC_INT32)0;
  i1=(OOC_INT32)0;
  goto l32;
l31:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 179890)))), &_td_OOC_IR__SelectProcDesc, 179890)), 179901))+8);
  receiver = (OOC_IR__Expression)i1;
  
l32:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 180045))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 179995));
  i3 = (OOC_INT32)endOfArgsSym;
  OOC_IR__BuilderDesc_NewCall_TransformArgs((OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__FormalPars)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 180056)))), &_td_OOC_SymbolTable__FormalParsDesc, 180056)), (OOC_IR__Expression)i1, (void*)(OOC_INT32)&arguments, (void*)(OOC_INT32)&formalPars);
  i0 = (OOC_INT32)formalPars;
  i1 = (OOC_INT32)design;
  i2 = (OOC_INT32)arguments;
  i3 = (OOC_INT32)call;
  OOC_IR__InitCall((OOC_IR__Call)i3, (OOC_IR__Expression)i1, (OOC_IR__ExpressionList)i2, (OOC_SymbolTable__VarDeclArray)i0);
  return (OOC_IR__Expression)i3;
  goto l204;
l33:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 179783));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 179745)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 36, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l204;
l35:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 179625));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 179586)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 37, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l204;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 179467));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 179436)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 35, (OOC_Scanner_Builder_BasicList__Symbol)i0);
  return (OOC_IR__Expression)i0;
  goto l204;
l39:
  i2 = (OOC_INT32)arguments;
  i3 = _check_pointer(i2, 179297);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 179297))*4);
  i2 = _check_pointer(i2, 179354);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 179354))*4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 179300));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 179274)))), OOC_IR__BuilderDesc_NewTypeGuard)),OOC_IR__BuilderDesc_NewTypeGuard)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_IR__Expression)i0, (OOC_IR__TypeRef)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 179358)))), &_td_OOC_IR__TypeRefDesc, 179358)));
  return (OOC_IR__Expression)i0;
  goto l204;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 179080))+16);
  return (OOC_IR__Expression)i0;
  goto l204;
l43:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 168782))+8);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 168793)))), &_td_OOC_SymbolTable__PredefProcDesc, 168793);
  predefProc = (OOC_SymbolTable__PredefProc)i0;
  i1 = *(OOC_INT16*)((_check_pointer(i0, 168850))+42);
  i0 = *(OOC_INT16*)((_check_pointer(i0, 168871))+44);
  i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(i1, i0);
  i0 = !i0;
  if (!i0) goto l46;
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 169087))+16);
  return (OOC_IR__Expression)i0;
l46:
  i0 = (OOC_INT32)design;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 169135))+8);
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 169146)))), &_td_OOC_SymbolTable__PredefProcDesc, 169146)), 169157))+40);
  switch (i1) {
  case 0:
    i1 = (OOC_INT32)arguments;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 169248)), 0);
    i2 = i2>1;
    if (i2) goto l51;
    code = (OOC_IR__Expression)(OOC_INT32)0;
    i2=(OOC_INT32)0;
    goto l52;
l51:
    i2 = _check_pointer(i1, 169288);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i3, OOC_UINT8, 169288))*4);
    code = (OOC_IR__Expression)i2;
    
l52:
    i3 = (OOC_INT32)b;
    i1 = _check_pointer(i1, 169393);
    i4 = OOC_ARRAY_LENGTH(i1, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 169470));
    i5 = *(OOC_INT32*)((_check_pointer(i5, 169475))+16);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i4, OOC_UINT8, 169393))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 169377));
    i4 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__assertions;
    i4 = OOC_IR__GetPragmaValue((OOC_IR__Builder)i3, (Config_Section_Options__Option)i4, i5);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 169358)))), OOC_IR__BuilderDesc_NewAssert)),OOC_IR__BuilderDesc_NewAssert)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i1, (OOC_IR__Expression)i2, (!i4));
    return (OOC_IR__Expression)i0;
    goto l204;
  case 1:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 169562);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 169562))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 169541));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 169522)))), OOC_IR__BuilderDesc_NewAssert)),OOC_IR__BuilderDesc_NewAssert)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)(OOC_INT32)0, (OOC_IR__Expression)i2, OOC_FALSE);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 22:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 169652);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i5 = _check_pointer(i2, 169666);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i2 = _check_pointer(i2, 169737);
    i7 = OOC_ARRAY_LENGTH(i2, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 169652))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(1, i6, OOC_UINT8, 169666))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i7, OOC_UINT8, 169737))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 169721));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 169636));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 169705)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i5, (OOC_IR__Expression)i2, 0);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 169613)))), OOC_IR__BuilderDesc_NewCopyString)),OOC_IR__BuilderDesc_NewCopyString)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 21:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 169797);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 169797))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 169800))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 169807)))), &_td_OOC_SymbolTable__PointerDesc);
    if (i1) goto l58;
    i1 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 170759);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 170759))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 170762));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 170727)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 50, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    goto l72;
l58:
    i1 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 169859);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 169859))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 169839)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i0);
    i0 = (OOC_INT32)arguments;
    i2 = _check_pointer(i0, 169892);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 169892))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 169895))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 169906)))), &_td_OOC_SymbolTable__PointerDesc, 169906)), 169914))+32);
    type = (OOC_SymbolTable__Type)i2;
    i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 169945)))), &_td_OOC_SymbolTable__ArrayDesc);
    if (i3) goto l67;
    i0 = OOC_SymbolTable_TypeRules__VariableInstance((OOC_SymbolTable__Type)i2);
    i0 = !i0;
    if (!i0) goto l63;
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 170435);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 170435))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 170438));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 170396)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 56, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l63:
    i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(1, 1);
    if (!i0) goto l72;
    i0 = (OOC_INT32)b;
    i1 = (OOC_INT32)design;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 170591);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 170654);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i5, OOC_UINT8, 170654))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 170657))+4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 170591))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 170638));
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 170575));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 170616)))), OOC_IR__BuilderDesc_NewNewObject)),OOC_IR__BuilderDesc_NewNewObject)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i2, (OOC_IR__ExpressionList)(OOC_INT32)0);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 170534)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l72;
l67:
    i1 = _check_pointer(i0, 169994);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 169994))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 169997))+4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 170007)))), &_td_OOC_SymbolTable__PointerDesc, 170007)), 170015))+32);
    i0 = _check_pointer(i0, 169994);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 169994))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 169997))+4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 170007)))), &_td_OOC_SymbolTable__PointerDesc, 170007)), 170015))+32);
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 170029)))), &_td_OOC_SymbolTable__ArrayDesc, 170029)), 170035)))), OOC_SymbolTable__ArrayDesc_GetOpenDimensions)),OOC_SymbolTable__ArrayDesc_GetOpenDimensions)((OOC_SymbolTable__Array)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 170029)))), &_td_OOC_SymbolTable__ArrayDesc, 170029)));
    i0 = 1+i0;
    dim = i0;
    i0 = OOC_IR__BuilderDesc_NewCall_CheckNumberOfArguments(i0, i0);
    if (!i0) goto l72;
    i0 = (OOC_INT32)b;
    i1 = (OOC_INT32)design;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 170190);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i5 = _check_pointer(i2, 170252);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT8, 170252))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 170255))+4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 170190))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 170237));
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 170174));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 170215)))), OOC_IR__BuilderDesc_NewNewObject)),OOC_IR__BuilderDesc_NewNewObject)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i5, (OOC_IR__ExpressionList)i2);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 170133)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
l72:
    i0 = (OOC_INT32)b;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 170798))+16);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 4:
  case 5:
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 170869);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i4 = (OOC_INT32)b;
    i1 = _check_pointer(i1, 170901);
    i5 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i5, OOC_UINT8, 170901))*4);
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 170877)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i4, (OOC_IR__Expression)i1);
    *(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 170869))*4) = i1;
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 170936);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 170936))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 170916)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i4, (OOC_IR__Expression)i1);
    i1 = (OOC_INT32)arguments;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 170968)), 0);
    i2 = i2==1;
    if (i2) goto l76;
    i1 = _check_pointer(i1, 171086);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i2, OOC_UINT8, 171086))*4);
    delta = (OOC_IR__Expression)i1;
    goto l77;
l76:
    i1 = _check_pointer(i1, 171033);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 171033))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 171036))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 171017));
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 171001)))), OOC_IR__BuilderDesc_GetOne)),OOC_IR__BuilderDesc_GetOne)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i1);
    delta = (OOC_IR__Expression)i1;
l77:
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 171139);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 171139))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 171142))+4);
    i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 171116)))), OOC_IR__BuilderDesc_Widen)),OOC_IR__BuilderDesc_Widen)((OOC_IR__Builder)i4, (void*)(OOC_INT32)&delta, (OOC_SymbolTable__Type)i1);
    if (i1) goto l80;
    i1 = (OOC_INT32)delta;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 171529));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 171501)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i4, 5, (OOC_Scanner_Builder_BasicList__Symbol)i1);
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 171591);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i1 = _check_pointer(i1, 171605);
    i5 = OOC_ARRAY_LENGTH(i1, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 171591))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i5, OOC_UINT8, 171605))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 171576));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 171554)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l204;
l80:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 171174))+8);
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 171185)))), &_td_OOC_SymbolTable__PredefProcDesc, 171185)), 171196))+40);
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
    i2 = _check_pointer(i2, 171463);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 171463))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 171443));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 171345));
    i5 = (OOC_INT32)delta;
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 171386)))), OOC_IR__BuilderDesc_NewBinaryArith)),OOC_IR__BuilderDesc_NewBinaryArith)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i3, i1, (OOC_IR__Expression)i2, (OOC_IR__Expression)i5);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 171324)))), OOC_IR__BuilderDesc_NewAssignOp)),OOC_IR__BuilderDesc_NewAssignOp)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 6:
  case 7:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 171696);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 171696))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 171676)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 171719);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 171747);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i5, OOC_UINT8, 171747))*4);
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 171727)))), OOC_IR__BuilderDesc_AssertSet)),OOC_IR__BuilderDesc_AssertSet)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    *(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 171719))*4) = i2;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 171770);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 171802);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 171802))*4);
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 171778)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    *(OOC_INT32*)(i3+(_check_index(1, i4, OOC_UINT8, 171770))*4) = i2;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 171826))+8);
    i2 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 171837)))), &_td_OOC_SymbolTable__PredefProcDesc, 171837)), 171848))+40);
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
    i4 = _check_pointer(i3, 172126);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i3 = _check_pointer(i3, 172140);
    i6 = OOC_ARRAY_LENGTH(i3, 0);
    i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT8, 172126))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(1, i6, OOC_UINT8, 172140))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 172056));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 171993));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 172031)))), OOC_IR__BuilderDesc_NewChangeElement)),OOC_IR__BuilderDesc_NewChangeElement)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i5, i2, (OOC_IR__Expression)i4, (OOC_IR__Expression)i3);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 171973)))), OOC_IR__BuilderDesc_NewAssignOp)),OOC_IR__BuilderDesc_NewAssignOp)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 23:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 172217);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 172217))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 172202));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 172186)))), OOC_IR__BuilderDesc_NewRaise)),OOC_IR__BuilderDesc_NewRaise)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 2:
    i1 = (OOC_INT32)arguments;
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 172311)), 0);
    i2 = i2!=2;
    i3 = (OOC_INT32)b;
    if (i2) goto l95;
    i2 = _check_pointer(i1, 172430);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i5 = _check_pointer(i1, 172483);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT8, 172483))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 172486))+4);
    i1 = _check_pointer(i1, 172483);
    i6 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i6, OOC_UINT8, 172483))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 172486))+4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i4, OOC_UINT8, 172430))*4);
    i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 172492)))), OOC_SymbolTable__TypeDesc_ArrayDimensions)),OOC_SymbolTable__TypeDesc_ArrayDimensions)((OOC_SymbolTable__Type)i1);
    i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 172403)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i3, (OOC_IR__Expression)i2, 0, i1);
    dim = i1;
    
    goto l96;
l95:
    dim = 0;
    i1=0;
l96:
    i2 = (OOC_INT32)arguments;
    i4 = _check_pointer(i2, 172558);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(0, i5, OOC_UINT8, 172558))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 172561))+4);
    i4 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 172568)))), &_td_OOC_SymbolTable__ArrayDesc));
    if (!i4) goto l99;
    i2 = _check_pointer(i2, 172627);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 172627))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 172630));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 172598)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 15, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l99:
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 172708);
    i4 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 172708))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 172692));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 172676)))), OOC_IR__BuilderDesc_NewLen)),OOC_IR__BuilderDesc_NewLen)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2, i1);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 20:
  case 19:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 172792);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 172792))*4);
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 172769)))), OOC_IR__BuilderDesc_AssertType)),OOC_IR__BuilderDesc_AssertType)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    type = (OOC_SymbolTable__Type)i2;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 172816))+8);
    i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 172827)))), &_td_OOC_SymbolTable__PredefProcDesc, 172827)), 172838))+40);
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
    i3 = _check_pointer(i3, 173241);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 173241))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 173244));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 173220)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Object_Boxed__Object)i0);
    return (OOC_IR__Expression)i0;
    goto l204;
l111:
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 173048);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 173048))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 173051));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 173018)))), OOC_IR__BuilderDesc_ErrExpr)),OOC_IR__BuilderDesc_ErrExpr)((OOC_IR__Builder)i1, 18, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 3:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 173357);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 173357))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 173341));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 173324)))), OOC_IR__BuilderDesc_NewSize)),OOC_IR__BuilderDesc_NewSize)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 8:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 173431);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 173431))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 173415));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 173399)))), OOC_IR__BuilderDesc_NewAbs)),OOC_IR__BuilderDesc_NewAbs)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 9:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 173514);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 173528);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 173514))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 173528))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 173498));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 173482)))), OOC_IR__BuilderDesc_NewAsh)),OOC_IR__BuilderDesc_NewAsh)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 10:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 173624);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 173624))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 173595));
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 173603)))), OOC_IR__BuilderDesc_AssertChar)),OOC_IR__BuilderDesc_AssertChar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 173579)))), OOC_IR__BuilderDesc_NewCap)),OOC_IR__BuilderDesc_NewCap)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 11:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 173674);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 173674))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 173678)))), &_td_OOC_IR__ConstDesc);
    if (i1) goto l120;
    i0=OOC_FALSE;
    goto l122;
l120:
    i0 = _check_pointer(i0, 173716);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 173716))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 173719))+4);
    i0 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i0);
    
l122:
    if (i0) goto l137;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 173839);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 173839))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 173842))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 173848)))), &_td_OOC_SymbolTable__PredefTypeDesc);
    if (i1) goto l126;
    i1 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 174586);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 174586))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 174589));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 174554)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 174622);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 174622))*4);
    return (OOC_IR__Expression)i0;
    goto l204;
l126:
    i1 = _check_pointer(i0, 173896);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 173896))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 173899))+4);
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 173909)))), &_td_OOC_SymbolTable__PredefTypeDesc, 173909)), 173920))+32);
    i2 = (OOC_INT32)b;
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
      i0 = _check_pointer(i0, 174344);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 174344))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 174347));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 174312)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      i0 = (OOC_INT32)arguments;
      i0 = _check_pointer(i0, 174382);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 174382))*4);
      return (OOC_IR__Expression)i0;
      goto l135;
    }
l135:
    i0 = targetType;
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i0);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 174472);
    i3 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 174472))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 174420)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l204;
l137:
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 173810);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 173810))*4);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 12:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 174692);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 174692))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 174696)))), &_td_OOC_IR__ConstDesc);
    if (i1) goto l142;
    i0=OOC_FALSE;
    goto l144;
l142:
    i0 = _check_pointer(i0, 174734);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 174734))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 174737))+4);
    i0 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i0);
    
l144:
    if (i0) goto l159;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 174858);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 174858))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 174861))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 174867)))), &_td_OOC_SymbolTable__PredefTypeDesc);
    if (i1) goto l148;
    i1 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 175595);
    i2 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i2, OOC_UINT8, 175595))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 175598));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 175563)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i1, 5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 175631);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 175631))*4);
    return (OOC_IR__Expression)i0;
    goto l204;
l148:
    i1 = _check_pointer(i0, 174915);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 174915))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 174918))+4);
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 174928)))), &_td_OOC_SymbolTable__PredefTypeDesc, 174928)), 174939))+32);
    i2 = (OOC_INT32)b;
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
      i0 = _check_pointer(i0, 175353);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 175353))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 175356));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 175321)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      i0 = (OOC_INT32)arguments;
      i0 = _check_pointer(i0, 175391);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 175391))*4);
      return (OOC_IR__Expression)i0;
      goto l157;
    }
l157:
    i0 = targetType;
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i0);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 175481);
    i3 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 175481))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 175429)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i2, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l204;
l159:
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 174829);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 174829))*4);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 13:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 175695);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i3 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 175727);
    i4 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i4, OOC_UINT8, 175727))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 175703)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
    *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 175695))*4) = i0;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 175754);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 175754))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 175758)))), &_td_OOC_IR__ConstDesc);
    if (!i1) goto l164;
    i0 = _check_pointer(i0, 175968);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 175968))*4);
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 175943)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0, 0, 256);
    dummy = i0;
l164:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 176136);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 176136))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 176083)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 14:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 176183);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i3 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 176215);
    i4 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i4, OOC_UINT8, 176215))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 176191)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
    *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 176183))*4) = i0;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 176242);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 176242))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 176246)))), &_td_OOC_IR__ConstDesc);
    if (!i1) goto l168;
    i0 = _check_pointer(i0, 176456);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 176456))*4);
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 176431)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0, 0, 65536);
    dummy = i0;
l168:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(2);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 176672);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 176672))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 176615)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 15:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 176728);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i3 = (OOC_INT32)b;
    i0 = _check_pointer(i0, 176760);
    i4 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i4, OOC_UINT8, 176760))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 176736)))), OOC_IR__BuilderDesc_AssertInteger)),OOC_IR__BuilderDesc_AssertInteger)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0);
    *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 176728))*4) = i0;
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 176787);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 176787))*4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 176791)))), &_td_OOC_IR__ConstDesc);
    if (!i1) goto l172;
    i0 = _check_pointer(i0, 177001);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 177001))*4);
    i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 176976)))), OOC_IR__BuilderDesc_AssertIntConst)),OOC_IR__BuilderDesc_AssertIntConst)((OOC_IR__Builder)i3, (OOC_IR__Expression)i0, 0, 2147483647);
    dummy = i0;
l172:
    i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(3);
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 177262);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 177262))*4);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 177205)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i3, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 16:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 177351);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 177351))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 177335));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 177316)))), OOC_IR__BuilderDesc_NewEntier)),OOC_IR__BuilderDesc_NewEntier)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 17:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 177434);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 177434))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 177418));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 177402)))), OOC_IR__BuilderDesc_NewOdd)),OOC_IR__BuilderDesc_NewOdd)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 18:
    i0 = (OOC_INT32)arguments;
    i1 = _check_pointer(i0, 177490);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 177490))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 177493))+4);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 177499)))), &_td_OOC_SymbolTable__PredefTypeDesc);
    if (i1) goto l178;
    i0=OOC_FALSE;
    goto l184;
l178:
    i1 = _check_pointer(i0, 177542);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 177542))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 177545))+4);
    i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 177555)))), &_td_OOC_SymbolTable__PredefTypeDesc, 177555)), 177566))+32);
    i1 = i1==2;
    if (i1) goto l181;
    i0 = _check_pointer(i0, 177614);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 177614))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 177617))+4);
    i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 177627)))), &_td_OOC_SymbolTable__PredefTypeDesc, 177627)), 177638))+32);
    i0 = i0==3;
    
    goto l184;
l181:
    i0=OOC_TRUE;
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
    i2 = _check_pointer(i2, 177918);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 177918))*4);
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 177897)))), OOC_IR__BuilderDesc_AssertChar)),OOC_IR__BuilderDesc_AssertChar)((OOC_IR__Builder)i1, (OOC_IR__Expression)i2);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 177826)))), OOC_IR__BuilderDesc_NewTypeConv)),OOC_IR__BuilderDesc_NewTypeConv)((OOC_IR__Builder)i1, (OOC_SymbolTable__Type)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 26:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 178072);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i5 = _check_pointer(i2, 178086);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i2 = _check_pointer(i2, 178100);
    i7 = OOC_ARRAY_LENGTH(i2, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 178072))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(1, i6, OOC_UINT8, 178086))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(2, i7, OOC_UINT8, 178100))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 178024));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 178002)))), OOC_IR__BuilderDesc_NewMoveBlock)),OOC_IR__BuilderDesc_NewMoveBlock)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i4, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 27:
    i1 = (OOC_INT32)arguments;
    i2 = _check_pointer(i1, 178162);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 178162))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 178165))+4);
    i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 178171)))), &_td_OOC_SymbolTable__PointerDesc);
    if (i2) goto l192;
    i1 = _check_pointer(i1, 178225);
    i2 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 178225))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 178228))+4);
    i1 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i1, 12);
    
    goto l193;
l192:
    i1=OOC_TRUE;
l193:
    i2 = (OOC_INT32)b;
    if (i1) goto l196;
    i0 = (OOC_INT32)arguments;
    i0 = _check_pointer(i0, 178536);
    i1 = OOC_ARRAY_LENGTH(i0, 0);
    i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 178536))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 178539));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 178504)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i2, 50, (OOC_Scanner_Builder_BasicList__Symbol)i0);
    goto l197;
l196:
    i1 = (OOC_INT32)arguments;
    i1 = _check_pointer(i1, 178283);
    i3 = OOC_ARRAY_LENGTH(i1, 0);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i3, OOC_UINT8, 178283))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 178263)))), OOC_IR__BuilderDesc_AssertVar)),OOC_IR__BuilderDesc_AssertVar)((OOC_IR__Builder)i2, (OOC_IR__Expression)i1);
    i1 = (OOC_INT32)arguments;
    i3 = _check_pointer(i1, 178316);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 178316))*4);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 178319))+4);
    type = (OOC_SymbolTable__Type)i3;
    i3 = _check_pointer(i1, 178397);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i5 = _check_pointer(i1, 178454);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(0, i6, OOC_UINT8, 178454))*4);
    i1 = _check_pointer(i1, 178473);
    i6 = OOC_ARRAY_LENGTH(i1, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 178457))+4);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 178397))*4);
    i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(1, i6, OOC_UINT8, 178473))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 178439));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 178381));
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 178418)))), OOC_IR__BuilderDesc_NewNewBlock)),OOC_IR__BuilderDesc_NewNewBlock)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i5, (OOC_IR__Expression)i1);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 178344)))), OOC_IR__BuilderDesc_NewAssignment)),OOC_IR__BuilderDesc_NewAssignment)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i1);
    return (OOC_IR__Expression)i0;
l197:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 178575))+16);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 24:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i2 = _check_pointer(i2, 178695);
    i3 = OOC_ARRAY_LENGTH(i2, 0);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 178695))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 178679));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 178663)))), OOC_IR__BuilderDesc_NewAdr)),OOC_IR__BuilderDesc_NewAdr)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 25:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 178772);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 178786);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 178772))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 178786))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 178756));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 178738)))), OOC_IR__BuilderDesc_NewShift)),OOC_IR__BuilderDesc_NewShift)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2, OOC_FALSE);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 29:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 178881);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 178895);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 178881))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 178895))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 178865));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 178844)))), OOC_IR__BuilderDesc_NewTypeCast)),OOC_IR__BuilderDesc_NewTypeCast)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2);
    return (OOC_IR__Expression)i0;
    goto l204;
  case 28:
    i1 = (OOC_INT32)b;
    i2 = (OOC_INT32)arguments;
    i3 = _check_pointer(i2, 178980);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i2 = _check_pointer(i2, 178994);
    i5 = OOC_ARRAY_LENGTH(i2, 0);
    i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 178980))*4);
    i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(1, i5, OOC_UINT8, 178994))*4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 178964));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 178946)))), OOC_IR__BuilderDesc_NewShift)),OOC_IR__BuilderDesc_NewShift)((OOC_IR__Builder)i1, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_IR__Expression)i3, (OOC_IR__Expression)i2, OOC_TRUE);
    return (OOC_IR__Expression)i0;
    goto l204;
  default:
    _failed_case(i1, 169124);
    goto l204;
  }
l204:
  _failed_function(160294); return 0;
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
