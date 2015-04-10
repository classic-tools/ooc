#include "OOC/Doc/ResolveRef.d"
#include "__oo2c.h"

void OOC_Doc_ResolveRef__ErrorContextDesc_GetTemplate(OOC_Doc_ResolveRef__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 793))+8);
  switch (i1) {
  case 0:
    _copy_16(((OOC_CHAR16[]){82,101,102,101,114,101,110,99,101,32,99,111,109,109,97,110,100,32,105,115,32,101,109,112,116,121,0}),(OOC_INT32)t,128);
    goto l18;
  case 1:
    _copy_16(((OOC_CHAR16[]){82,101,102,101,114,101,110,99,101,32,99,111,109,109,97,110,100,32,99,111,110,116,97,105,110,115,32,109,97,114,107,117,112,32,99,111,109,109,97,110,100,115,0}),(OOC_INT32)t,128);
    goto l18;
  case 2:
    _copy_16(((OOC_CHAR16[]){73,110,118,97,108,105,100,32,99,104,97,114,97,99,116,101,114,32,96,36,123,99,104,97,114,125,39,32,105,110,32,114,101,102,101,114,101,110,99,101,32,99,111,109,109,97,110,100,0}),(OOC_INT32)t,128);
    goto l18;
  case 3:
    _copy_16(((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,109,111,100,117,108,101,32,110,97,109,101,44,32,98,117,116,32,102,111,117,110,100,32,96,36,123,99,104,97,114,125,39,0}),(OOC_INT32)t,128);
    goto l18;
  case 4:
    _copy_16(((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,105,100,101,110,116,105,102,105,101,114,44,32,98,117,116,32,102,111,117,110,100,32,96,36,123,99,104,97,114,125,39,0}),(OOC_INT32)t,128);
    goto l18;
  case 5:
    _copy_16(((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,105,100,101,110,116,105,102,105,101,114,32,97,116,32,101,110,100,32,111,102,32,114,101,102,101,114,101,110,99,101,32,99,111,109,109,97,110,100,0}),(OOC_INT32)t,128);
    goto l18;
  case 6:
    _copy_16(((OOC_CHAR16[]){67,111,117,108,100,32,110,111,116,32,114,101,115,111,108,118,101,32,105,100,101,110,116,105,102,105,101,114,32,96,36,123,105,100,101,110,116,125,39,0}),(OOC_INT32)t,128);
    goto l18;
  case 7:
    _copy_16(((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,97,32,109,111,100,117,108,101,0}),(OOC_INT32)t,128);
    goto l18;
  case 8:
    _copy_16(((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,97,32,99,111,110,115,116,97,110,116,0}),(OOC_INT32)t,128);
    goto l18;
  case 9:
    _copy_16(((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,97,32,114,101,99,111,114,100,32,102,105,101,108,100,0}),(OOC_INT32)t,128);
    goto l18;
  case 10:
    _copy_16(((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,97,32,112,97,114,97,109,101,116,101,114,0}),(OOC_INT32)t,128);
    goto l18;
  case 11:
    _copy_16(((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,97,32,112,114,111,99,101,100,117,114,101,0}),(OOC_INT32)t,128);
    goto l18;
  case 12:
    _copy_16(((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,97,32,116,121,112,101,0}),(OOC_INT32)t,128);
    goto l18;
  case 13:
    _copy_16(((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,97,32,118,97,114,105,97,98,108,101,0}),(OOC_INT32)t,128);
    goto l18;
  case 14:
    _copy_16(((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,101,120,112,111,114,116,101,100,0}),(OOC_INT32)t,128);
    goto l18;
  default:
    _failed_case(i1, 785);
    goto l18;
  }
l18:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1976)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

static OOC_CHAR8 OOC_Doc_ResolveRef__ParseRef(OOC_Doc__OberonRef ref, OOC_Error__List errList, OOC_CHAR8 *external, OOC_Doc__InlineList *tokenList) {
  register OOC_INT32 i0,i1;
  Msg__Msg lastError;
  OOC_Doc__InlineElement currElement;
  OOC_Doc__Text currText;
  OOC_INT32 currPos;
  OOC_CHAR8 _char;
  auto void OOC_Doc_ResolveRef__ParseRef_Err(OOC_INT32 code);
  auto OOC_CHAR8 OOC_Doc_ResolveRef__ParseRef_HasMarkup(OOC_Doc__InlineElement ptr);
  auto void OOC_Doc_ResolveRef__ParseRef_NextChar();
  auto void OOC_Doc_ResolveRef__ParseRef_S();
  auto void OOC_Doc_ResolveRef__ParseRef_SetCharAttribute();
  auto void OOC_Doc_ResolveRef__ParseRef_Ident(OOC_CHAR8 isModule);
    
    void OOC_Doc_ResolveRef__ParseRef_Err(OOC_INT32 code) {
      register OOC_INT32 i0,i1,i2;
      OOC_Doc__Element pos;

      i0 = (OOC_INT32)ref;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2397))+20);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2425))+20);
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2438)))), &_td_OOC_Doc__TextDesc));
      
      goto l5;
l3:
      i1=OOC_TRUE;
l5:
      if (i1) goto l7;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2504))+20);
      pos = (OOC_Doc__Element)i0;
      
      goto l8;
l7:
      pos = (OOC_Doc__Element)i0;
      
l8:
      i1 = (OOC_INT32)OOC_Doc_ResolveRef__resolveContext;
      i2 = code;
      i1 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i1, i2);
      lastError = (Msg__Msg)i1;
      i2 = *(OOC_INT32*)(_check_pointer(i0, 2622));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2596)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "pos", 4, i2);
      i1 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 2678))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2651)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "line", 5, i2);
      i1 = (OOC_INT32)lastError;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 2736))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2707)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "column", 7, i0);
      i0 = (OOC_INT32)errList;
      i1 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2765)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
      currText = (OOC_Doc__Text)(OOC_INT32)0;
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Doc_ResolveRef__ParseRef_HasMarkup(OOC_Doc__InlineElement ptr) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)ptr;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l11;
l3_loop:
      i0 = (OOC_INT32)ptr;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2975)))), &_td_OOC_Doc__TextDesc));
      if (!i1) goto l6;
      return OOC_TRUE;
l6:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3046))+12);
      ptr = (OOC_Doc__InlineElement)i0;
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l3_loop;
l11:
      return OOC_FALSE;
      ;
    }

    
    void OOC_Doc_ResolveRef__ParseRef_NextChar() {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = currPos;
      i0 = i0+1;
      currPos = i0;
      i1 = (OOC_INT32)currText;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3184))+16);
      i2 = _check_pointer(i2, 3192);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i0 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 3192)));
      i1 = i1!=(OOC_INT32)0;
      _char = i0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = i0==(OOC_CHAR8)'\000';
      
l5:
      if (!i1) goto l20;
l7_loop:
      i1 = (OOC_INT32)currElement;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3283))+12);
      currElement = (OOC_Doc__InlineElement)i1;
      i2 = i1==(OOC_INT32)0;
      currPos = 0;
      if (i2) goto l10;
      i0 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3432)))), &_td_OOC_Doc__TextDesc, 3432);
      currText = (OOC_Doc__Text)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3465))+16);
      i1 = _check_pointer(i1, 3473);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 3473)));
      _char = i1;
      
      goto l11;
l10:
      currText = (OOC_Doc__Text)(OOC_INT32)0;
      i1=i0;i0=(OOC_INT32)0;
l11:
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l14;
      i0=OOC_FALSE;
      goto l16;
l14:
      i0 = i1==(OOC_CHAR8)'\000';
      
l16:
      if (!i0) goto l20;
      i0=i1;
      goto l7_loop;
l20:
      return;
      ;
    }

    
    void OOC_Doc_ResolveRef__ParseRef_S() {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)currText;
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = _char;
      i0 = i0<=(OOC_CHAR8)' ';
      
l5:
      if (!i0) goto l16;
l7_loop:
      OOC_Doc_ResolveRef__ParseRef_NextChar();
      i0 = (OOC_INT32)currText;
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l10;
      i0=OOC_FALSE;
      goto l12;
l10:
      i0 = _char;
      i0 = i0<=(OOC_CHAR8)' ';
      
l12:
      if (i0) goto l7_loop;
l16:
      return;
      ;
    }

    
    void OOC_Doc_ResolveRef__ParseRef_SetCharAttribute() {
      register OOC_INT32 i0,i1;
      OOC_CHAR8 str[2];

      i0 = _char;
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 2, OOC_UINT8, 3723))) = i0;
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, 2, OOC_UINT8, 3739))) = (OOC_CHAR8)'\000';
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)str, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3765)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "char", 5, (Msg__StringPtr)i1);
      return;
      ;
    }

    
    void OOC_Doc_ResolveRef__ParseRef_Ident(OOC_CHAR8 isModule) {
      register OOC_INT32 i0,i1,i2;
      OOC_INT32 i;
      OOC_CHAR8 str[1024];
      auto OOC_CHAR8 OOC_Doc_ResolveRef__ParseRef_Ident_Valid(OOC_CHAR8 ch);
        
        OOC_CHAR8 OOC_Doc_ResolveRef__ParseRef_Ident_Valid(OOC_CHAR8 ch) {
          register OOC_INT32 i0;

          i0 = ch;
          switch (i0) {
          case (OOC_CHAR8)'a' ... (OOC_CHAR8)'z':
          case (OOC_CHAR8)'A' ... (OOC_CHAR8)'Z':
          case (OOC_CHAR8)'0' ... (OOC_CHAR8)'9':
          case (OOC_CHAR8)'_':
            return OOC_TRUE;
            goto l5;
          case (OOC_CHAR8)':':
            i0 = isModule;
            return i0;
            goto l5;
          default:
            return OOC_FALSE;
            goto l5;
          }
l5:
          _failed_function(3962); return 0;
          ;
        }


      i0 = (OOC_INT32)currText;
      i0 = i0==(OOC_INT32)0;
      if (i0) goto l23;
      i0 = _char;
      i0 = OOC_Doc_ResolveRef__ParseRef_Ident_Valid(i0);
      if (i0) goto l9;
      i0 = isModule;
      if (i0) goto l7;
      OOC_Doc_ResolveRef__ParseRef_Err(4);
      OOC_Doc_ResolveRef__ParseRef_SetCharAttribute();
      goto l24;
l7:
      OOC_Doc_ResolveRef__ParseRef_Err(3);
      OOC_Doc_ResolveRef__ParseRef_SetCharAttribute();
      goto l24;
l9:
      i = 0;
l10_loop:
      i0 = i;
      i1 = i0<1023;
      if (!i1) goto l13;
      i1 = _char;
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 4377))) = i1;
      i = (i0+1);
l13:
      OOC_Doc_ResolveRef__ParseRef_NextChar();
      i0 = (OOC_INT32)currText;
      i0 = i0==(OOC_INT32)0;
      if (i0) goto l16;
      i0 = _char;
      i0 = OOC_Doc_ResolveRef__ParseRef_Ident_Valid(i0);
      i0 = !i0;
      
      goto l18;
l16:
      i0=OOC_TRUE;
l18:
      if (!i0) goto l10_loop;
l21:
      i0 = i;
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 4504))) = (OOC_CHAR8)'\000';
      i0 = (OOC_INT32)*tokenList;
      i1 = (OOC_INT32)ref;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4563))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4563))+20);
      i1 = _check_pointer(i1, 4575);
      i1 = (OOC_INT32)OOC_Doc__NewText((void*)(OOC_INT32)str, 1024, (void*)(_check_pointer(i2, 4575)), (RT0__Struct)((OOC_INT32)&_td_OOC_Doc__Position));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4532)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i0, (OOC_Doc__InlineElement)i1);
      goto l24;
l23:
      OOC_Doc_ResolveRef__ParseRef_Err(5);
l24:
      return;
      ;
    }


  lastError = (Msg__Msg)(OOC_INT32)0;
  *external = OOC_FALSE;
  i0 = (OOC_INT32)OOC_Doc__NewInlineList();
  *tokenList = (OOC_Doc__InlineList)i0;
  i0 = (OOC_INT32)ref;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4872))+20);
  currElement = (OOC_Doc__InlineElement)i0;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l29;
  i0 = OOC_Doc_ResolveRef__ParseRef_HasMarkup((OOC_Doc__InlineElement)i0);
  if (i0) goto l27;
  i0 = (OOC_INT32)currElement;
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5047)))), &_td_OOC_Doc__TextDesc, 5047);
  currText = (OOC_Doc__Text)i0;
  currPos = 0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5096))+16);
  i0 = _check_pointer(i0, 5104);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT32, 5104)));
  _char = i0;
  OOC_Doc_ResolveRef__ParseRef_S();
  i0 = _char;
  i0 = i0==(OOC_CHAR8)'*';
  if (i0) goto l7;
  OOC_Doc_ResolveRef__ParseRef_Ident(OOC_FALSE);
  goto l8;
l7:
  *external = OOC_TRUE;
  OOC_Doc_ResolveRef__ParseRef_NextChar();
  OOC_Doc_ResolveRef__ParseRef_S();
  OOC_Doc_ResolveRef__ParseRef_Ident(OOC_TRUE);
l8:
  OOC_Doc_ResolveRef__ParseRef_S();
  i0 = (OOC_INT32)currText;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l11;
  i0=OOC_FALSE;
  goto l13;
l11:
  i0 = _char;
  i0 = i0==(OOC_CHAR8)'.';
  
l13:
  if (!i0) goto l23;
l14_loop:
  OOC_Doc_ResolveRef__ParseRef_NextChar();
  OOC_Doc_ResolveRef__ParseRef_S();
  OOC_Doc_ResolveRef__ParseRef_Ident(OOC_FALSE);
  OOC_Doc_ResolveRef__ParseRef_S();
  i0 = (OOC_INT32)currText;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l17;
  i0=OOC_FALSE;
  goto l19;
l17:
  i0 = _char;
  i0 = i0==(OOC_CHAR8)'.';
  
l19:
  if (i0) goto l14_loop;
l23:
  i0 = (OOC_INT32)currText;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l30;
  OOC_Doc_ResolveRef__ParseRef_Err(2);
  OOC_Doc_ResolveRef__ParseRef_SetCharAttribute();
  goto l30;
l27:
  OOC_Doc_ResolveRef__ParseRef_Err(1);
  goto l30;
l29:
  OOC_Doc_ResolveRef__ParseRef_Err(0);
l30:
  i0 = (OOC_INT32)lastError;
  return (i0==(OOC_INT32)0);
  ;
}

void OOC_Doc_ResolveRef__Resolve(OOC_SymbolTable__Module symTab, OOC_Error__List errList) {
  register OOC_INT32 i0;
  ADT_Dictionary__Dictionary interfaceCache;
  auto void OOC_Doc_ResolveRef__Resolve_ResolveRef(OOC_Doc__Document doc, OOC_Doc__OberonRef ref, OOC_SymbolTable__Declaration refererDecl, OOC_SymbolTable__Item identificationContext, OOC_SymbolTable__Namespace nsRecord);
  auto void OOC_Doc_ResolveRef__Resolve_ResolveDoc(OOC_Doc__Document doc, OOC_SymbolTable__Declaration refererDecl, OOC_SymbolTable__Item identificationContext, OOC_SymbolTable__Namespace nsRecord);
  auto void OOC_Doc_ResolveRef__Resolve_RecResolve(OOC_SymbolTable__Item item, OOC_SymbolTable__Item identificationContext, OOC_SymbolTable__Namespace nsRecord);
    
    void OOC_Doc_ResolveRef__Resolve_ResolveRef(OOC_Doc__Document doc, OOC_Doc__OberonRef ref, OOC_SymbolTable__Declaration refererDecl, OOC_SymbolTable__Item identificationContext, OOC_SymbolTable__Namespace nsRecord) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_CHAR8 external;
      OOC_Doc__InlineList tokenList;
      OOC_Doc__InlineElement part;
      OOC_Scanner_InputBuffer__CharArray module;
      OOC_INT32 len;
      OOC_Doc__InlineElement ptr;
      OOC_Scanner_InputBuffer__CharArray id;
      OOC_SymbolTable__Declaration decl;
      OOC_SymbolTable__Namespace ns;
      Msg__Msg lastError;
      auto OOC_SymbolTable__Name OOC_Doc_ResolveRef__Resolve_ResolveRef_GetName();
      auto void OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(OOC_INT32 code);
      auto OOC_CHAR8 OOC_Doc_ResolveRef__Resolve_ResolveRef_Exported(OOC_SymbolTable__Declaration decl);
        
        OOC_SymbolTable__Name OOC_Doc_ResolveRef__Resolve_ResolveRef_GetName() {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SymbolTable__Name n;

          i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
          n = (OOC_SymbolTable__Name)i0;
          i1 = (OOC_INT32)part;
          i2 = (OOC_INT32)ref;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6375)))), &_td_OOC_Doc__TextDesc, 6375)), 6380))+16);
          i3 = *(OOC_INT32*)(_check_pointer(i2, 6393));
          i4 = *(OOC_INT32*)((_check_pointer(i2, 6432))+4);
          i2 = *(OOC_INT32*)((_check_pointer(i2, 6448))+8);
          OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i1, i3, i4, i2);
          return (OOC_SymbolTable__Name)i0;
          ;
        }

        
        void OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(OOC_INT32 code) {
          register OOC_INT32 i0,i1,i2;
          OOC_Doc__Element pos;

          i0 = (OOC_INT32)ref;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6609))+20);
          pos = (OOC_Doc__Element)i0;
          i1 = (OOC_INT32)OOC_Doc_ResolveRef__resolveContext;
          i2 = code;
          i1 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i1, i2);
          lastError = (Msg__Msg)i1;
          i2 = *(OOC_INT32*)(_check_pointer(i0, 6721));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6695)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "pos", 4, i2);
          i1 = (OOC_INT32)lastError;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 6779))+4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6752)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "line", 5, i2);
          i1 = (OOC_INT32)lastError;
          i0 = *(OOC_INT32*)((_check_pointer(i0, 6839))+8);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6810)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "column", 7, i0);
          i0 = (OOC_INT32)errList;
          i1 = (OOC_INT32)lastError;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6870)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
          return;
          ;
        }

        
        OOC_CHAR8 OOC_Doc_ResolveRef__Resolve_ResolveRef_Exported(OOC_SymbolTable__Declaration decl) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SymbolTable__Module module;
          ADT_Object__Object obj;
          ADT_Dictionary__Dictionary exports;

          i0 = (OOC_INT32)decl;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7099)))), &_td_OOC_SymbolTable__ModuleDesc);
          if (i1) goto l6;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7258)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
          module = (OOC_SymbolTable__Module)i1;
          i2 = (OOC_INT32)interfaceCache;
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7298)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i1);
          i2 = !i2;
          if (!i2) goto l5;
          i2 = (OOC_INT32)interfaceCache;
          i3 = (OOC_INT32)OOC_SymbolTable_Exports__GetExports((OOC_SymbolTable__Module)i1, OOC_FALSE);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7347)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i1, (ADT_Object__Object)i3);
l5:
          i2 = (OOC_INT32)interfaceCache;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7444)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (ADT_Object__Object)i1);
          obj = (ADT_Object__Object)i1;
          i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7496)))), &_td_ADT_Dictionary__DictionaryDesc, 7496);
          exports = (ADT_Dictionary__Dictionary)i1;
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7533)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (ADT_Object__Object)i0);
          return i0;
          goto l7;
l6:
          return OOC_TRUE;
l7:
          _failed_function(6921); return 0;
          ;
        }


      i0 = (OOC_INT32)ref;
      i1 = (OOC_INT32)errList;
      i1 = OOC_Doc_ResolveRef__ParseRef((OOC_Doc__OberonRef)i0, (OOC_Error__List)i1, (void*)(OOC_INT32)&external, (void*)(OOC_INT32)&tokenList);
      if (!i1) goto l118;
      i1 = (OOC_INT32)tokenList;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7680));
      part = (OOC_Doc__InlineElement)i2;
      i3 = external;
      if (i3) goto l96;
      i2 = (OOC_INT32)nsRecord;
      i3 = i2!=(OOC_INT32)0;
      decl = (OOC_SymbolTable__Declaration)(OOC_INT32)0;
      if (i3) goto l7;
      i0=OOC_FALSE;
      goto l9;
l7:
      i0 = *(OOC_INT32*)((_check_pointer(i0, 8670))+16);
      i0 = i0==13;
      
l9:
      if (i0) goto l11;
      i0=OOC_FALSE;
      goto l13;
l11:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8726));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8732))+12);
      i0 = i0==(OOC_INT32)0;
      
l13:
      if (i0) goto l15;
      i0=(OOC_INT32)0;
      goto l16;
l15:
      i0 = (OOC_INT32)identificationContext;
      i1 = (OOC_INT32)OOC_Doc_ResolveRef__Resolve_ResolveRef_GetName();
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8998)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, OOC_TRUE);
      decl = (OOC_SymbolTable__Declaration)i0;
      
l16:
      i1 = i0==(OOC_INT32)0;
      if (!i1) goto l20;
      i0 = (OOC_INT32)identificationContext;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9281)))), OOC_SymbolTable__ItemDesc_Namespace)),OOC_SymbolTable__ItemDesc_Namespace)((OOC_SymbolTable__Item)i0);
      ns = (OOC_SymbolTable__Namespace)i1;
      i2 = (OOC_INT32)OOC_Doc_ResolveRef__Resolve_ResolveRef_GetName();
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9318)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i1, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i2, OOC_TRUE);
      decl = (OOC_SymbolTable__Declaration)i0;
      
l20:
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l23;
      i1=OOC_FALSE;
      goto l25;
l23:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9419)))), &_td_OOC_SymbolTable__ImportDesc);
      
l25:
      if (!i1) goto l28;
      i1 = (OOC_INT32)doc;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9512)))), OOC_Doc__DocumentDesc_AddUsedImport)),OOC_Doc__DocumentDesc_AddUsedImport)((OOC_Doc__Document)i1, (ADT_Object__Object)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9565)))), &_td_OOC_SymbolTable__ImportDesc, 9565)), 9572))+44);
      decl = (OOC_SymbolTable__Declaration)i0;
      
l28:
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l31;
      i1=OOC_FALSE;
      goto l33;
l31:
      i1 = (OOC_INT32)part;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9641))+12);
      i1 = i1!=(OOC_INT32)0;
      
l33:
      if (!i1) goto l45;
l36_loop:
      i1 = (OOC_INT32)part;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9688))+12);
      part = (OOC_Doc__InlineElement)i1;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9724)))), OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace)),OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace)((OOC_SymbolTable__Declaration)i0, OOC_TRUE);
      ns = (OOC_SymbolTable__Namespace)i0;
      i1 = (OOC_INT32)identificationContext;
      i2 = (OOC_INT32)OOC_Doc_ResolveRef__Resolve_ResolveRef_GetName();
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9777)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, OOC_TRUE);
      decl = (OOC_SymbolTable__Declaration)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l39;
      i1=OOC_FALSE;
      goto l41;
l39:
      i1 = (OOC_INT32)part;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9641))+12);
      i1 = i1!=(OOC_INT32)0;
      
l41:
      if (i1) goto l36_loop;
l45:
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l94;
      i1 = (OOC_INT32)ref;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 10076))+16);
      switch (i1) {
      case 11:
        i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10146)))), &_td_OOC_SymbolTable__ModuleDesc));
        if (!i0) goto l86;
        OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(7);
        goto l86;
      case 12:
        i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10275)))), &_td_OOC_SymbolTable__ConstDeclDesc));
        if (!i0) goto l86;
        OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(8);
        goto l86;
      case 13:
        i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10410)))), &_td_OOC_SymbolTable__FieldDeclDesc));
        if (!i0) goto l86;
        OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(9);
        goto l86;
      case 14:
        i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10545)))), &_td_OOC_SymbolTable__VarDeclDesc));
        if (i1) goto l64;
        i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10591)))), &_td_OOC_SymbolTable__VarDeclDesc, 10591)), 10599))+48);
        i0 = !i0;
        
        goto l66;
l64:
        i0=OOC_TRUE;
l66:
        if (!i0) goto l86;
        OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(10);
        goto l86;
      case 15:
        i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10733)))), &_td_OOC_SymbolTable__ProcDeclDesc));
        if (!i0) goto l86;
        OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(11);
        goto l86;
      case 16:
        i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10865)))), &_td_OOC_SymbolTable__TypeDeclDesc));
        if (!i0) goto l86;
        OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(12);
        goto l86;
      case 17:
        i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10996)))), &_td_OOC_SymbolTable__VarDeclDesc));
        if (i1) goto l80;
        i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11024)))), &_td_OOC_SymbolTable__VarDeclDesc, 11024)), 11032))+48);
        
        goto l82;
l80:
        i0=OOC_TRUE;
l82:
        if (!i0) goto l86;
        OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(13);
        goto l86;
      default:
        _failed_case(i1, 10068);
        goto l86;
      }
l86:
      i0 = (OOC_INT32)decl;
      i0 = OOC_Doc_ResolveRef__Resolve_ResolveRef_Exported((OOC_SymbolTable__Declaration)i0);
      i0 = !i0;
      if (i0) goto l89;
      i0=OOC_FALSE;
      goto l91;
l89:
      i0 = (OOC_INT32)refererDecl;
      i0 = OOC_Doc_ResolveRef__Resolve_ResolveRef_Exported((OOC_SymbolTable__Declaration)i0);
      
l91:
      if (!i0) goto l93;
      OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(14);
l93:
      i0 = (OOC_INT32)ref;
      i1 = (OOC_INT32)decl;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11276)))), OOC_Doc__OberonRefDesc_SetTarget)),OOC_Doc__OberonRefDesc_SetTarget)((OOC_Doc__OberonRef)i0, (ADT_Object__Object)i1);
      goto l118;
l94:
      OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(6);
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)part;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10024)))), &_td_OOC_Doc__TextDesc, 10024)), 10029))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10024)))), &_td_OOC_Doc__TextDesc, 10024)), 10029))+16);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10037)), 0);
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i2, 10037)), i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9932)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "ident", 6, (Msg__StringPtr)i1);
      goto l118;
l96:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7975)))), &_td_OOC_Doc__TextDesc, 7975)), 7980))+16);
      module = (OOC_Scanner_InputBuffer__CharArray)i1;
      len = 1;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8042))+12);
      ptr = (OOC_Doc__InlineElement)i3;
      i4 = i3!=(OOC_INT32)0;
      if (i4) goto l99;
      i3=1;
      goto l105;
l99:
      i4=i3;i3=1;
l100_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8133)))), &_td_OOC_Doc__TextDesc, 8133)), 8138))+16);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8133)))), &_td_OOC_Doc__TextDesc, 8133)), 8138))+16);
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i6, 8146)), 0);
      i5 = Strings__Length((void*)(_check_pointer(i5, 8146)), i6);
      i3 = i3+(i5+1);
      len = i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8175))+12);
      ptr = (OOC_Doc__InlineElement)i4;
      i5 = i4!=(OOC_INT32)0;
      if (i5) goto l100_loop;
l105:
      i3 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], i3);
      id = (OOC_Scanner_InputBuffer__CharArray)i3;
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8261)), 0);
      _copy_8("",(_check_pointer(i3, 8261)),i4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8286))+12);
      ptr = (OOC_Doc__InlineElement)i2;
      i4 = i2!=(OOC_INT32)0;
      if (!i4) goto l116;
l108_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8367)))), &_td_OOC_Doc__TextDesc, 8367)), 8372))+16);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8367)))), &_td_OOC_Doc__TextDesc, 8367)), 8372))+16);
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8385)), 0);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 8380)), 0);
      Strings__Append((void*)(_check_pointer(i4, 8380)), i5, (void*)(_check_pointer(i3, 8385)), i6);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8411))+12);
      ptr = (OOC_Doc__InlineElement)i2;
      i4 = i2!=(OOC_INT32)0;
      if (!i4) goto l112;
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8494)), 0);
      Strings__Append(".", 2, (void*)(_check_pointer(i3, 8494)), i5);
l112:
      if (i4) goto l108_loop;
l116:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8552)))), OOC_Doc__OberonRefDesc_SetExternalTarget)),OOC_Doc__OberonRefDesc_SetExternalTarget)((OOC_Doc__OberonRef)i0, (OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i3);
l118:
      return;
      ;
    }

    
    void OOC_Doc_ResolveRef__Resolve_ResolveDoc(OOC_Doc__Document doc, OOC_SymbolTable__Declaration refererDecl, OOC_SymbolTable__Item identificationContext, OOC_SymbolTable__Namespace nsRecord) {
      register OOC_INT32 i0;
      auto void OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList(OOC_Doc__InlineElement inlineList);
      auto void OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList(OOC_Doc__BlockElement blockList);
        
        void OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList(OOC_Doc__InlineElement inlineList) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_Doc__InlineElement ptr;

          i0 = (OOC_INT32)inlineList;
          ptr = (OOC_Doc__InlineElement)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l30;
l3_loop:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11752)))), &_td_OOC_Doc__GlyphDesc);
          if (i1) goto l25;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11808)))), &_td_OOC_Doc__TextDesc);
          if (i1) goto l25;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11863)))), &_td_OOC_Doc__OberonRefDesc);
          if (i1) goto l22;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11977)))), &_td_OOC_Doc__MarkedInlineDesc);
          if (i1) goto l20;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12062)))), &_td_OOC_Doc__EmailDesc);
          if (i1) goto l18;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12185)))), &_td_OOC_Doc__UrefDesc);
          if (i1) goto l16;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12180)))), 12180);
          goto l25;
l16:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12233))+16);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12275))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12318))+24);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          goto l25;
l18:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12111))+16);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12157))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          goto l25;
l20:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12033))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          goto l25;
l22:
          i1 = (OOC_INT32)nsRecord;
          i2 = (OOC_INT32)identificationContext;
          i3 = (OOC_INT32)refererDecl;
          i4 = (OOC_INT32)doc;
          OOC_Doc_ResolveRef__Resolve_ResolveRef((OOC_Doc__Document)i4, (OOC_Doc__OberonRef)i0, (OOC_SymbolTable__Declaration)i3, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Namespace)i1);
l25:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12368))+12);
          ptr = (OOC_Doc__InlineElement)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l30:
          return;
          ;
        }

        
        void OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList(OOC_Doc__BlockElement blockList) {
          register OOC_INT32 i0,i1;
          OOC_Doc__BlockElement ptr;

          i0 = (OOC_INT32)blockList;
          ptr = (OOC_Doc__BlockElement)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l44;
l3_loop:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12615)))), &_td_OOC_Doc__ParagraphDesc);
          if (i1) goto l38;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12697)))), &_td_OOC_Doc__ExampleDesc);
          if (i1) goto l36;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12777)))), &_td_OOC_Doc__PreCondDesc);
          if (i1) goto l34;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12855)))), &_td_OOC_Doc__PostCondDesc);
          if (i1) goto l32;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12934)))), &_td_OOC_Doc__ItemDesc);
          if (i1) goto l30;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13009)))), &_td_OOC_Doc__ItemizeDesc);
          if (i1) goto l28;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13171)))), &_td_OOC_Doc__FirstColumnDesc);
          if (i1) goto l26;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13255)))), &_td_OOC_Doc__TableRowDesc);
          if (i1) goto l24;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13382)))), &_td_OOC_Doc__TableDesc);
          if (i1) goto l22;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13377)))), 13377);
          goto l39;
l22:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13430))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          goto l39;
l24:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13306))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13359))+24);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          goto l39;
l26:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13226))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          goto l39;
l28:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13060))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13102))+24);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13144))+28);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          goto l39;
l30:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12981))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          goto l39;
l32:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12906))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          goto l39;
l34:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12827))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          goto l39;
l36:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12748))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          goto l39;
l38:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12668))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
l39:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13476))+12);
          ptr = (OOC_Doc__BlockElement)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l44:
          return;
          ;
        }


      i0 = (OOC_INT32)doc;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13570));
      OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i0);
      i0 = (OOC_INT32)doc;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13612))+4);
      OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i0);
      return;
      ;
    }

    
    void OOC_Doc_ResolveRef__Resolve_RecResolve(OOC_SymbolTable__Item item, OOC_SymbolTable__Item identificationContext, OOC_SymbolTable__Namespace nsRecord) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Namespace ns;
      OOC_SymbolTable__Item ptr;

      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13848)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (i1) goto l6;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14257)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i1) goto l17;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14297)))), OOC_SymbolTable__RecordDesc_Namespace)),OOC_SymbolTable__RecordDesc_Namespace)((OOC_SymbolTable__Record)i0);
      nsRecord = (OOC_SymbolTable__Namespace)i1;
      goto l17;
l6:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13886)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l12;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13981)))), OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace)),OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace)((OOC_SymbolTable__Declaration)i0, OOC_FALSE);
      ns = (OOC_SymbolTable__Namespace)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l13;
      nsRecord = (OOC_SymbolTable__Namespace)i1;
      goto l13;
l12:
      identificationContext = (OOC_SymbolTable__Item)i0;
l13:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14121))+28);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l17;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14171))+28);
      i2 = (OOC_INT32)nsRecord;
      i3 = (OOC_INT32)identificationContext;
      OOC_Doc_ResolveRef__Resolve_ResolveDoc((OOC_Doc__Document)i1, (OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Namespace)i2);
l17:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14387))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l25;
      i1 = (OOC_INT32)nsRecord;
      i2 = (OOC_INT32)identificationContext;
      
l20_loop:
      OOC_Doc_ResolveRef__Resolve_RecResolve((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Namespace)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14506));
      ptr = (OOC_SymbolTable__Item)i0;
      i3 = i0!=(OOC_INT32)0;
      if (i3) goto l20_loop;
l25:
      return;
      ;
    }


  i0 = (OOC_INT32)ADT_Dictionary__New();
  interfaceCache = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)symTab;
  OOC_Doc_ResolveRef__Resolve_RecResolve((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Namespace)(OOC_INT32)0);
  return;
  ;
}

void OOC_OOC_Doc_ResolveRef_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Doc_ResolveRef__ErrorContext.baseTypes[0]);
  OOC_Doc_ResolveRef__resolveContext = (OOC_Doc_ResolveRef__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:Doc:ResolveRef", 19);
  return;
  ;
}

/* --- */
