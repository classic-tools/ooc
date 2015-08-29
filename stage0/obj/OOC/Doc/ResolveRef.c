#include <OOC/Doc/ResolveRef.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Doc_ResolveRef__ErrorContextDesc_GetTemplate(OOC_Doc_ResolveRef__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 789))+8);
  switch (i1) {
  case 0:
    _copy_16((const void*)((OOC_CHAR16[]){82,101,102,101,114,101,110,99,101,32,99,111,109,109,97,110,100,32,105,115,32,101,109,112,116,121,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){82,101,102,101,114,101,110,99,101,32,99,111,109,109,97,110,100,32,99,111,110,116,97,105,110,115,32,109,97,114,107,117,112,32,99,111,109,109,97,110,100,115,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,118,97,108,105,100,32,99,104,97,114,97,99,116,101,114,32,96,36,123,99,104,97,114,125,39,32,105,110,32,114,101,102,101,114,101,110,99,101,32,99,111,109,109,97,110,100,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,109,111,100,117,108,101,32,110,97,109,101,44,32,98,117,116,32,102,111,117,110,100,32,96,36,123,99,104,97,114,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,105,100,101,110,116,105,102,105,101,114,44,32,98,117,116,32,102,111,117,110,100,32,96,36,123,99,104,97,114,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,105,100,101,110,116,105,102,105,101,114,32,97,116,32,101,110,100,32,111,102,32,114,101,102,101,114,101,110,99,101,32,99,111,109,109,97,110,100,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){67,111,117,108,100,32,110,111,116,32,114,101,115,111,108,118,101,32,105,100,101,110,116,105,102,105,101,114,32,96,36,123,105,100,101,110,116,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 7:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,97,32,109,111,100,117,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 8:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,97,32,99,111,110,115,116,97,110,116,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 9:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,97,32,114,101,99,111,114,100,32,102,105,101,108,100,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 10:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,97,32,112,97,114,97,109,101,116,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 11:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,97,32,112,114,111,99,101,100,117,114,101,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 12:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,97,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 13:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,97,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 14:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,101,32,114,101,102,101,114,101,110,99,101,100,32,100,101,99,108,97,114,97,116,105,111,110,32,105,115,32,110,111,116,32,101,120,112,111,114,116,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  default:
    _failed_case(i1, 781);
    goto l18;
  }
l18:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1972)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2393))+20);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2421))+20);
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2434)))), &_td_OOC_Doc__TextDesc));
      
      goto l5;
l3:
      i1=OOC_TRUE;
l5:
      if (i1) goto l7;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2500))+20);
      pos = (OOC_Doc__Element)i0;
      
      goto l8;
l7:
      pos = (OOC_Doc__Element)i0;
      
l8:
      i1 = (OOC_INT32)OOC_Doc_ResolveRef__resolveContext;
      i2 = code;
      i1 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i1, i2);
      lastError = (Msg__Msg)i1;
      i2 = *(OOC_INT32*)(_check_pointer(i0, 2618));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2592)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "pos", 4, i2);
      i1 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 2674))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2647)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "line", 5, i2);
      i1 = (OOC_INT32)lastError;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 2732))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2703)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "column", 7, i0);
      i0 = (OOC_INT32)errList;
      i1 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2761)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
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
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2971)))), &_td_OOC_Doc__TextDesc));
      if (!i1) goto l6;
      return OOC_TRUE;
l6:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3042))+12);
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
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3180))+16);
      i2 = _check_pointer(i2, 3188);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i0 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 3188)));
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3279))+12);
      currElement = (OOC_Doc__InlineElement)i1;
      i2 = i1==(OOC_INT32)0;
      currPos = 0;
      if (i2) goto l10;
      i0 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3428)))), &_td_OOC_Doc__TextDesc, 3428);
      currText = (OOC_Doc__Text)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3461))+16);
      i1 = _check_pointer(i1, 3469);
      i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
      i1 = *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT32, 3469)));
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
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 2, OOC_UINT8, 3719))) = i0;
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, 2, OOC_UINT8, 3735))) = (OOC_CHAR8)'\000';
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)str, 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3761)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "char", 5, (Msg__StringPtr)i1);
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
          _failed_function(3958); return 0;
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
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 4373))) = i1;
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
      *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 4500))) = (OOC_CHAR8)'\000';
      i0 = (OOC_INT32)*tokenList;
      i1 = (OOC_INT32)ref;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4559))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4559))+20);
      i1 = _check_pointer(i1, 4571);
      i1 = (OOC_INT32)OOC_Doc__NewText((void*)(OOC_INT32)str, 1024, (void*)(_check_pointer(i2, 4571)), (RT0__Struct)((OOC_INT32)&_td_OOC_Doc__Position));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4528)))), OOC_Doc__InlineListDesc_Append)),OOC_Doc__InlineListDesc_Append)((OOC_Doc__InlineList)i0, (OOC_Doc__InlineElement)i1);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4868))+20);
  currElement = (OOC_Doc__InlineElement)i0;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l29;
  i0 = OOC_Doc_ResolveRef__ParseRef_HasMarkup((OOC_Doc__InlineElement)i0);
  if (i0) goto l27;
  i0 = (OOC_INT32)currElement;
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5043)))), &_td_OOC_Doc__TextDesc, 5043);
  currText = (OOC_Doc__Text)i0;
  currPos = 0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5092))+16);
  i0 = _check_pointer(i0, 5100);
  i1 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT32, 5100)));
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6371)))), &_td_OOC_Doc__TextDesc, 6371)), 6376))+16);
          i3 = *(OOC_INT32*)(_check_pointer(i2, 6389));
          i4 = *(OOC_INT32*)((_check_pointer(i2, 6428))+4);
          i2 = *(OOC_INT32*)((_check_pointer(i2, 6444))+8);
          OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i1, i3, i4, i2);
          return (OOC_SymbolTable__Name)i0;
          ;
        }

        
        void OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(OOC_INT32 code) {
          register OOC_INT32 i0,i1,i2;
          OOC_Doc__Element pos;

          i0 = (OOC_INT32)ref;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6605))+20);
          pos = (OOC_Doc__Element)i0;
          i1 = (OOC_INT32)OOC_Doc_ResolveRef__resolveContext;
          i2 = code;
          i1 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i1, i2);
          lastError = (Msg__Msg)i1;
          i2 = *(OOC_INT32*)(_check_pointer(i0, 6717));
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6691)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "pos", 4, i2);
          i1 = (OOC_INT32)lastError;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 6775))+4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6748)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "line", 5, i2);
          i1 = (OOC_INT32)lastError;
          i0 = *(OOC_INT32*)((_check_pointer(i0, 6835))+8);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6806)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i1, "column", 7, i0);
          i0 = (OOC_INT32)errList;
          i1 = (OOC_INT32)lastError;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6866)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i1);
          return;
          ;
        }

        
        OOC_CHAR8 OOC_Doc_ResolveRef__Resolve_ResolveRef_Exported(OOC_SymbolTable__Declaration decl) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SymbolTable__Module module;
          Object__Object obj;
          ADT_Dictionary__Dictionary exports;

          i0 = (OOC_INT32)decl;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7095)))), &_td_OOC_SymbolTable__ModuleDesc);
          if (i1) goto l6;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7254)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
          module = (OOC_SymbolTable__Module)i1;
          i2 = (OOC_INT32)interfaceCache;
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7294)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i2, (Object__Object)i1);
          i2 = !i2;
          if (!i2) goto l5;
          i2 = (OOC_INT32)interfaceCache;
          i3 = (OOC_INT32)OOC_SymbolTable_Exports__GetExports((OOC_SymbolTable__Module)i1, OOC_FALSE);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7343)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)i3);
l5:
          i2 = (OOC_INT32)interfaceCache;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7440)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (Object__Object)i1);
          obj = (Object__Object)i1;
          i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7492)))), &_td_ADT_Dictionary__DictionaryDesc, 7492);
          exports = (ADT_Dictionary__Dictionary)i1;
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7529)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
          return i0;
          goto l7;
l6:
          return OOC_TRUE;
l7:
          _failed_function(6917); return 0;
          ;
        }


      i0 = (OOC_INT32)ref;
      i1 = (OOC_INT32)errList;
      i1 = OOC_Doc_ResolveRef__ParseRef((OOC_Doc__OberonRef)i0, (OOC_Error__List)i1, (void*)(OOC_INT32)&external, (void*)(OOC_INT32)&tokenList);
      if (!i1) goto l118;
      i1 = (OOC_INT32)tokenList;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7676));
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
      i0 = *(OOC_INT32*)((_check_pointer(i0, 8666))+16);
      i0 = i0==14;
      
l9:
      if (i0) goto l11;
      i0=OOC_FALSE;
      goto l13;
l11:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8722));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8728))+12);
      i0 = i0==(OOC_INT32)0;
      
l13:
      if (i0) goto l15;
      i0=(OOC_INT32)0;
      goto l16;
l15:
      i0 = (OOC_INT32)identificationContext;
      i1 = (OOC_INT32)OOC_Doc_ResolveRef__Resolve_ResolveRef_GetName();
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8994)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i2, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i1, OOC_TRUE);
      decl = (OOC_SymbolTable__Declaration)i0;
      
l16:
      i1 = i0==(OOC_INT32)0;
      if (!i1) goto l20;
      i0 = (OOC_INT32)identificationContext;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9277)))), OOC_SymbolTable__ItemDesc_Namespace)),OOC_SymbolTable__ItemDesc_Namespace)((OOC_SymbolTable__Item)i0);
      ns = (OOC_SymbolTable__Namespace)i1;
      i2 = (OOC_INT32)OOC_Doc_ResolveRef__Resolve_ResolveRef_GetName();
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9314)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i1, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Name)i2, OOC_TRUE);
      decl = (OOC_SymbolTable__Declaration)i0;
      
l20:
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l23;
      i1=OOC_FALSE;
      goto l25;
l23:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9415)))), &_td_OOC_SymbolTable__ImportDesc);
      
l25:
      if (!i1) goto l28;
      i1 = (OOC_INT32)doc;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9508)))), OOC_Doc__DocumentDesc_AddUsedImport)),OOC_Doc__DocumentDesc_AddUsedImport)((OOC_Doc__Document)i1, (ADT_Storable__Object)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9561)))), &_td_OOC_SymbolTable__ImportDesc, 9561)), 9568))+44);
      decl = (OOC_SymbolTable__Declaration)i0;
      
l28:
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l31;
      i1=OOC_FALSE;
      goto l33;
l31:
      i1 = (OOC_INT32)part;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9637))+12);
      i1 = i1!=(OOC_INT32)0;
      
l33:
      if (!i1) goto l45;
l36_loop:
      i1 = (OOC_INT32)part;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9684))+12);
      part = (OOC_Doc__InlineElement)i1;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9720)))), OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace)),OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace)((OOC_SymbolTable__Declaration)i0, OOC_TRUE);
      ns = (OOC_SymbolTable__Namespace)i0;
      i1 = (OOC_INT32)identificationContext;
      i2 = (OOC_INT32)OOC_Doc_ResolveRef__Resolve_ResolveRef_GetName();
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9773)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, OOC_TRUE);
      decl = (OOC_SymbolTable__Declaration)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l39;
      i1=OOC_FALSE;
      goto l41;
l39:
      i1 = (OOC_INT32)part;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9637))+12);
      i1 = i1!=(OOC_INT32)0;
      
l41:
      if (i1) goto l36_loop;
l45:
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l94;
      i1 = (OOC_INT32)ref;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 10072))+16);
      switch (i1) {
      case 12:
        i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10142)))), &_td_OOC_SymbolTable__ModuleDesc));
        if (!i0) goto l86;
        OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(7);
        goto l86;
      case 13:
        i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10271)))), &_td_OOC_SymbolTable__ConstDeclDesc));
        if (!i0) goto l86;
        OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(8);
        goto l86;
      case 14:
        i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10406)))), &_td_OOC_SymbolTable__FieldDeclDesc));
        if (!i0) goto l86;
        OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(9);
        goto l86;
      case 15:
        i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10541)))), &_td_OOC_SymbolTable__VarDeclDesc));
        if (i1) goto l64;
        i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10587)))), &_td_OOC_SymbolTable__VarDeclDesc, 10587)), 10595))+48);
        i0 = !i0;
        
        goto l66;
l64:
        i0=OOC_TRUE;
l66:
        if (!i0) goto l86;
        OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(10);
        goto l86;
      case 16:
        i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10729)))), &_td_OOC_SymbolTable__ProcDeclDesc));
        if (!i0) goto l86;
        OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(11);
        goto l86;
      case 17:
        i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10861)))), &_td_OOC_SymbolTable__TypeDeclDesc));
        if (!i0) goto l86;
        OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(12);
        goto l86;
      case 18:
        i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10992)))), &_td_OOC_SymbolTable__VarDeclDesc));
        if (i1) goto l80;
        i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11020)))), &_td_OOC_SymbolTable__VarDeclDesc, 11020)), 11028))+48);
        
        goto l82;
l80:
        i0=OOC_TRUE;
l82:
        if (!i0) goto l86;
        OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(13);
        goto l86;
      default:
        _failed_case(i1, 10064);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11272)))), OOC_Doc__OberonRefDesc_SetTarget)),OOC_Doc__OberonRefDesc_SetTarget)((OOC_Doc__OberonRef)i0, (ADT_Storable__Object)i1);
      goto l118;
l94:
      OOC_Doc_ResolveRef__Resolve_ResolveRef_Err(6);
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)part;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10020)))), &_td_OOC_Doc__TextDesc, 10020)), 10025))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10020)))), &_td_OOC_Doc__TextDesc, 10020)), 10025))+16);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10033)), (OOC_INT32)0);
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i2, 10033)), i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9928)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "ident", 6, (Msg__StringPtr)i1);
      goto l118;
l96:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7971)))), &_td_OOC_Doc__TextDesc, 7971)), 7976))+16);
      module = (OOC_Scanner_InputBuffer__CharArray)i1;
      len = 1;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8038))+12);
      ptr = (OOC_Doc__InlineElement)i3;
      i4 = i3!=(OOC_INT32)0;
      if (i4) goto l99;
      i3=1;
      goto l105;
l99:
      i4=i3;i3=1;
l100_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8129)))), &_td_OOC_Doc__TextDesc, 8129)), 8134))+16);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8129)))), &_td_OOC_Doc__TextDesc, 8129)), 8134))+16);
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i6, 8142)), (OOC_INT32)0);
      i5 = Strings__Length((void*)(_check_pointer(i5, 8142)), i6);
      i3 = i3+(i5+1);
      len = i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 8171))+12);
      ptr = (OOC_Doc__InlineElement)i4;
      i5 = i4!=(OOC_INT32)0;
      if (i5) goto l100_loop;
l105:
      i3 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], i3);
      id = (OOC_Scanner_InputBuffer__CharArray)i3;
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8257)), (OOC_INT32)0);
      _copy_8((const void*)"",(void*)(_check_pointer(i3, 8257)),i4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8282))+12);
      ptr = (OOC_Doc__InlineElement)i2;
      i4 = i2!=(OOC_INT32)0;
      if (!i4) goto l116;
l108_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8363)))), &_td_OOC_Doc__TextDesc, 8363)), 8368))+16);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8363)))), &_td_OOC_Doc__TextDesc, 8363)), 8368))+16);
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8381)), (OOC_INT32)0);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 8376)), (OOC_INT32)0);
      Strings__Append((void*)(_check_pointer(i4, 8376)), i5, (void*)(_check_pointer(i3, 8381)), i6);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8407))+12);
      ptr = (OOC_Doc__InlineElement)i2;
      i4 = i2!=(OOC_INT32)0;
      if (!i4) goto l112;
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8490)), (OOC_INT32)0);
      Strings__Append(".", 2, (void*)(_check_pointer(i3, 8490)), i5);
l112:
      if (i4) goto l108_loop;
l116:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8548)))), OOC_Doc__OberonRefDesc_SetExternalTarget)),OOC_Doc__OberonRefDesc_SetExternalTarget)((OOC_Doc__OberonRef)i0, (OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i3);
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
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11748)))), &_td_OOC_Doc__GlyphDesc);
          if (i1) goto l25;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11804)))), &_td_OOC_Doc__TextDesc);
          if (i1) goto l25;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11859)))), &_td_OOC_Doc__OberonRefDesc);
          if (i1) goto l22;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11973)))), &_td_OOC_Doc__MarkedInlineDesc);
          if (i1) goto l20;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12058)))), &_td_OOC_Doc__EmailDesc);
          if (i1) goto l18;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12181)))), &_td_OOC_Doc__UrefDesc);
          if (i1) goto l16;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12176)))), 12176);
          goto l25;
l16:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12229))+16);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12271))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12314))+24);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          goto l25;
l18:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12107))+16);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12153))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          goto l25;
l20:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12029))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          goto l25;
l22:
          i1 = (OOC_INT32)nsRecord;
          i2 = (OOC_INT32)identificationContext;
          i3 = (OOC_INT32)refererDecl;
          i4 = (OOC_INT32)doc;
          OOC_Doc_ResolveRef__Resolve_ResolveRef((OOC_Doc__Document)i4, (OOC_Doc__OberonRef)i0, (OOC_SymbolTable__Declaration)i3, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Namespace)i1);
l25:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12364))+12);
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
          if (!i1) goto l48;
l3_loop:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12611)))), &_td_OOC_Doc__ParagraphDesc);
          if (i1) goto l42;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12693)))), &_td_OOC_Doc__ExampleDesc);
          if (i1) goto l40;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12773)))), &_td_OOC_Doc__PreCondDesc);
          if (i1) goto l38;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12851)))), &_td_OOC_Doc__PostCondDesc);
          if (i1) goto l36;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12930)))), &_td_OOC_Doc__ItemDesc);
          if (i1) goto l34;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13005)))), &_td_OOC_Doc__ItemizeDesc);
          if (i1) goto l32;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13167)))), &_td_OOC_Doc__EnumerateDesc);
          if (i1) goto l30;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13288)))), &_td_OOC_Doc__FirstColumnDesc);
          if (i1) goto l28;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13372)))), &_td_OOC_Doc__TableRowDesc);
          if (i1) goto l26;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13499)))), &_td_OOC_Doc__TableDesc);
          if (i1) goto l24;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13494)))), 13494);
          goto l43;
l24:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13547))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          goto l43;
l26:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13423))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13476))+24);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          goto l43;
l28:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13343))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          goto l43;
l30:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13219))+28);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13261))+32);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          goto l43;
l32:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13056))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13098))+24);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13140))+28);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          goto l43;
l34:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12977))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          goto l43;
l36:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12902))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          goto l43;
l38:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12823))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i1);
          goto l43;
l40:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12744))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
          goto l43;
l42:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12664))+20);
          OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i1);
l43:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13593))+12);
          ptr = (OOC_Doc__BlockElement)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l48:
          return;
          ;
        }


      i0 = (OOC_INT32)doc;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13687));
      OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveBlockList((OOC_Doc__BlockElement)i0);
      i0 = (OOC_INT32)doc;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13729))+4);
      OOC_Doc_ResolveRef__Resolve_ResolveDoc_ResolveInlineList((OOC_Doc__InlineElement)i0);
      return;
      ;
    }

    
    void OOC_Doc_ResolveRef__Resolve_RecResolve(OOC_SymbolTable__Item item, OOC_SymbolTable__Item identificationContext, OOC_SymbolTable__Namespace nsRecord) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Namespace ns;
      OOC_SymbolTable__Item ptr;

      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13965)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (i1) goto l6;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14374)))), &_td_OOC_SymbolTable__RecordDesc);
      if (!i1) goto l17;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14414)))), OOC_SymbolTable__RecordDesc_Namespace)),OOC_SymbolTable__RecordDesc_Namespace)((OOC_SymbolTable__Record)i0);
      nsRecord = (OOC_SymbolTable__Namespace)i1;
      goto l17;
l6:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14003)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l12;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14098)))), OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace)),OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace)((OOC_SymbolTable__Declaration)i0, OOC_FALSE);
      ns = (OOC_SymbolTable__Namespace)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l13;
      nsRecord = (OOC_SymbolTable__Namespace)i1;
      goto l13;
l12:
      identificationContext = (OOC_SymbolTable__Item)i0;
l13:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14238))+28);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l17;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14288))+28);
      i2 = (OOC_INT32)nsRecord;
      i3 = (OOC_INT32)identificationContext;
      OOC_Doc_ResolveRef__Resolve_ResolveDoc((OOC_Doc__Document)i1, (OOC_SymbolTable__Declaration)i0, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Namespace)i2);
l17:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14504))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l25;
      i1 = (OOC_INT32)nsRecord;
      i2 = (OOC_INT32)identificationContext;
      
l20_loop:
      OOC_Doc_ResolveRef__Resolve_RecResolve((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Namespace)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14623));
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
