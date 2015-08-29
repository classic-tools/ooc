#include <OOC/Parser.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Parser__ErrorContextDesc_GetTemplate(OOC_Parser__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3224))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){74,117,110,107,32,97,102,116,101,114,32,101,110,100,32,111,102,32,109,111,100,117,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,107,101,121,119,111,114,100,32,96,36,123,115,121,109,95,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,115,121,109,98,111,108,32,96,36,123,115,121,109,95,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,105,100,101,110,116,105,102,105,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,110,97,109,101,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,100,97,116,97,32,116,121,112,101,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 7:
    _copy_16((const void*)((OOC_CHAR16[]){85,110,101,120,112,101,99,116,101,100,32,115,121,109,98,111,108,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 8:
    _copy_16((const void*)((OOC_CHAR16[]){83,121,115,116,101,109,32,115,112,101,99,105,102,105,99,32,102,108,97,103,115,32,97,114,101,32,110,111,116,32,97,108,108,111,119,101,100,32,105,110,32,116,104,105,115,32,109,111,100,117,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 10:
    _copy_16((const void*)((OOC_CHAR16[]){77,117,108,116,105,112,97,114,116,32,105,100,101,110,116,105,102,105,101,114,115,32,110,111,116,32,115,117,112,112,111,114,116,101,100,32,102,111,114,32,116,104,105,115,32,109,111,100,117,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 9:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,110,110,111,116,32,117,115,101,32,114,101,115,116,32,112,97,114,97,109,101,116,101,114,32,105,110,32,116,104,105,115,32,109,111,100,117,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 11:
    _copy_16((const void*)((OOC_CHAR16[]){65,32,109,111,100,117,108,101,32,99,97,110,110,111,116,32,105,109,112,111,114,116,32,105,116,115,101,108,102,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 12:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,111,114,116,32,111,110,108,121,32,112,111,115,115,105,98,108,101,32,111,110,32,116,111,112,32,108,101,118,101,108,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 13:
    _copy_16((const void*)((OOC_CHAR16[]){84,104,105,115,32,111,98,106,101,99,116,32,99,97,110,32,111,110,108,121,32,98,101,32,101,120,112,111,114,116,101,100,32,119,105,116,104,32,96,42,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 14:
    _copy_16((const void*)((OOC_CHAR16[]){84,121,112,101,45,98,111,117,110,100,32,112,114,111,99,101,100,117,114,101,32,109,117,115,116,32,98,101,32,100,101,99,108,97,114,101,100,32,111,110,32,116,111,112,32,108,101,118,101,108,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 15:
    _copy_16((const void*)((OOC_CHAR16[]){70,97,99,116,111,114,32,115,116,97,114,116,115,32,119,105,116,104,32,105,108,108,101,103,97,108,32,115,121,109,98,111,108,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 16:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,118,97,108,105,100,32,102,108,97,103,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 17:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,107,101,121,119,111,114,100,32,96,73,78,84,69,82,70,65,67,69,39,32,111,114,32,96,70,79,82,69,73,71,78,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  case 19:
    _copy_16((const void*)((OOC_CHAR16[]){77,111,100,117,108,101,32,110,97,109,101,32,100,111,101,115,32,110,111,116,32,109,97,116,99,104,32,97,99,99,101,115,115,32,112,97,116,104,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l21;
  default:
    _failed_case(i1, 3216);
    goto l21;
  }
l21:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4491)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

OOC_AST__Node OOC_Parser__Module(OOC_Scanner_BasicList__Symbol sym, OOC_AST__Builder ast, OOC_Error__List errList, OOC_UINT32 parseOptions) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  Msg__Msg lastError;
  OOC_Scanner_BasicList__Symbol prevSym;
  OOC_AST__Node lastIdentDef;
  OOC_AST__Node module;
  OOC_Scanner_BasicList__Symbol nameSym;
  OOC_AST__Node name;
  OOC_Scanner_InputBuffer__CharArray headName;
  OOC_AST__Node moduleFlags;
  OOC_AST__Node scolon;
  OOC_AST__Node import;
  OOC_AST__Node body;
  OOC_AST__Node period;
  OOC_AST__Node eof;
  auto void OOC_Parser__Module_Err(OOC_INT32 code, OOC_Scanner_BasicList__Symbol sym);
  auto void OOC_Parser__Module_ErrEndPos(OOC_INT32 code, OOC_Scanner_BasicList__Symbol sym);
  auto void OOC_Parser__Module_ErrStringAttrib(const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_CHAR8 str[], OOC_LEN str_0d);
  auto void OOC_Parser__Module_NextSym(void);
  auto OOC_AST__Node OOC_Parser__Module_CheckSym(OOC_INT8 symId);
  auto OOC_AST__Node OOC_Parser__Module_MultiPartIdent(OOC_Scanner_InputBuffer__CharArray *name);
  auto OOC_AST__Node OOC_Parser__Module_Flags(OOC_INT8 context);
  auto OOC_AST__Node OOC_Parser__Module_IdentDef(OOC_INT32 level, OOC_CHAR8 noReadOnly, OOC_CHAR8 noMark, OOC_Scanner_InputBuffer__CharArray *name);
  auto OOC_AST__Node OOC_Parser__Module_ImportList(OOC_Scanner_InputBuffer__CharArray moduleName);
  auto OOC_AST__Node OOC_Parser__Module_Expr(void);
  auto OOC_AST__Node OOC_Parser__Module_Qualident(void);
  auto OOC_AST__Node OOC_Parser__Module_QualType(void);
  auto OOC_AST__Node OOC_Parser__Module_Designator(void);
  auto OOC_AST__Node OOC_Parser__Module_Expr(void);
  auto OOC_AST__Node OOC_Parser__Module_Type(OOC_INT32 level);
  auto OOC_AST__Node OOC_Parser__Module_FormalPars(void);
  auto OOC_AST__Node OOC_Parser__Module_TypePars(void);
  auto OOC_AST__Node OOC_Parser__Module_Type(OOC_INT32 level);
  auto OOC_AST__Node OOC_Parser__Module_Body(OOC_INT32 level, OOC_Scanner_InputBuffer__CharArray headName);
    
    void OOC_Parser__Module_Err(OOC_INT32 code, OOC_Scanner_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)OOC_Parser__parserContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 6854))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6828)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
      i0 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 6904))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6877)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6957))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6928)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)errList;
      i1 = (OOC_INT32)lastError;
      OOC_Error__ListDesc_Append((OOC_Error__List)i0, (Msg__Msg)i1);
      return;
      ;
    }

    
    void OOC_Parser__Module_ErrEndPos(OOC_INT32 code, OOC_Scanner_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)OOC_Parser__parserContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 7444))+16);
      i3 = *(OOC_INT32*)((_check_pointer(i1, 7453))+12);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7418)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, (i2+i3));
      i0 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 7503))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7476)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
      i0 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 7556))+24);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 7568))+12);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7527)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, (i2+i1));
      i0 = (OOC_INT32)errList;
      i1 = (OOC_INT32)lastError;
      OOC_Error__ListDesc_Append((OOC_Error__List)i0, (Msg__Msg)i1);
      return;
      ;
    }

    
    void OOC_Parser__Module_ErrStringAttrib(const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_CHAR8 str[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

      OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)(OOC_INT32)str, str_0d);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7886)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, (void*)(OOC_INT32)name, name_0d, (Msg__StringPtr)i1);
      return;
      ;
    }

    
    void OOC_Parser__Module_NextSym(void) {
      register OOC_INT32 i0,i1;
      OOC_Doc__Document document;

      i0 = (OOC_INT32)sym;
      prevSym = (OOC_Scanner_BasicList__Symbol)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8067));
      sym = (OOC_Scanner_BasicList__Symbol)i0;
      i1 = i0!=0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 8102))+4);
      i1 = i1==78;
      
l5:
      if (!i1) goto l26;
l7_loop:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 8165))+4);
      i1 = i1==78;
      if (i1) goto l10;
      i1=0u;
      goto l12;
l10:
      i1 = (OOC_INT32)lastIdentDef;
      i1 = i1!=0;
      
l12:
      if (i1) goto l14;
      i1=0u;
      goto l16;
l14:
      i1 = parseOptions;
      i1 = _in(3,i1);
      
l16:
      if (!i1) goto l21;
      i1 = (OOC_INT32)errList;
      i0 = (OOC_INT32)OOC_Doc_Input_Texinfo__Parse((OOC_Scanner_BasicList__Symbol)i0, 1u, (OOC_Error__List)i1);
      document = (OOC_Doc__Document)i0;
      i1 = i0!=0;
      if (!i1) goto l21;
      i1 = (OOC_INT32)lastIdentDef;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8392)))), OOC_AST__NodeDesc_AttachDocString)),OOC_AST__NodeDesc_AttachDocString)((OOC_AST__Node)i1, (OOC_Doc__Document)i0);
l21:
      i0 = (OOC_INT32)sym;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8472));
      sym = (OOC_Scanner_BasicList__Symbol)i0;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 8497))+4);
      i1 = i1!=78;
      if (!i1) goto l7_loop;
l26:
      return;
      ;
    }

    
    OOC_AST__Node OOC_Parser__Module_CheckSym(OOC_INT8 symId) {
      register OOC_INT32 i0,i1,i2,i3;

      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 9062))+4);
      i2 = symId;
      i1 = i1!=i2;
      if (!i1) goto l62;
      i1 = OOC_Scanner_Symbol__IsKeyword(i2);
      if (i1) goto l21;
      i1 = i2==45;
      if (i1) goto l19;
      i1 = i2==72;
      if (i1) goto l17;
l9:
      switch (i2) {
      case 46:
      case 20:
      case 19:
      case 18:
      case 32:
      case 33:
      case 34:
      case 22:
      case 23:
      case 24:
        i1 = (OOC_INT32)prevSym;
        i3 = i1!=(OOC_INT32)0;
        if (i3) goto l13;
        OOC_Parser__Module_Err(3, (OOC_Scanner_BasicList__Symbol)i0);
        goto l16;
l13:
        OOC_Parser__Module_ErrEndPos(3, (OOC_Scanner_BasicList__Symbol)i1);
        goto l16;
      default:
        OOC_Parser__Module_Err(3, (OOC_Scanner_BasicList__Symbol)i0);
        goto l16;
      }
l16:
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(i2, 81, OOC_UINT8, 10009))*10)), 10);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9907)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "sym_name", 9, (Msg__StringPtr)i1);
      goto l22;
l17:
      OOC_Parser__Module_Err(1, (OOC_Scanner_BasicList__Symbol)i0);
      goto l22;
l19:
      OOC_Parser__Module_Err(4, (OOC_Scanner_BasicList__Symbol)i0);
      goto l22;
l21:
      OOC_Parser__Module_Err(2, (OOC_Scanner_BasicList__Symbol)i0);
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(i2, 81, OOC_UINT8, 9279))*10)), 10);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9177)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "sym_name", 9, (Msg__StringPtr)i1);
l22:
      i0 = i2==36;
      if (i0) goto l25;
      i0=0u;
      goto l31;
l25:
      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10089))+4);
      i1 = i1==9;
      if (i1) goto l28;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 10115))+4);
      i0 = i0==20;
      
      goto l31;
l28:
      i0=1u;
l31:
      if (i0) goto l37;
      i0 = i2==9;
      if (i0) goto l35;
      i0=0u;
      goto l39;
l35:
      i0 = (OOC_INT32)sym;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 10178))+4);
      i0 = i0==36;
      
      goto l39;
l37:
      i0=1u;
l39:
      if (i0) goto l57;
      i0 = 25<=i2;
      if (i0) goto l43;
      i0=0u;
      goto l45;
l43:
      i0 = i2<=31;
      
l45:
      if (i0) goto l51;
      i0 = 48<=i2;
      if (i0) goto l49;
      i0=0u;
      goto l53;
l49:
      i0 = i2<=71;
      
      goto l53;
l51:
      i0=1u;
l53:
      if (i0) goto l55;
      i0=0u;
      goto l59;
l55:
      i0 = (OOC_INT32)sym;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 10347))+4);
      i0 = i0==45;
      
      goto l59;
l57:
      i0=1u;
l59:
      if (!i0) goto l61;
      OOC_Parser__Module_NextSym();
l61:
      i0 = (OOC_INT32)ast;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10422)))), OOC_AST__BuilderDesc_Terminal)),OOC_AST__BuilderDesc_Terminal)((OOC_AST__Builder)i0, (OOC_Scanner_BasicList__Symbol)i1);
      return (OOC_AST__Node)i0;
l62:
      i0 = (OOC_INT32)ast;
      i1 = (OOC_INT32)sym;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10468)))), OOC_AST__BuilderDesc_Terminal)),OOC_AST__BuilderDesc_Terminal)((OOC_AST__Builder)i0, (OOC_Scanner_BasicList__Symbol)i1);
      OOC_Parser__Module_NextSym();
      return (OOC_AST__Node)i0;
      ;
    }

    
    OOC_AST__Node OOC_Parser__Module_MultiPartIdent(OOC_Scanner_InputBuffer__CharArray *name) {
      register OOC_INT32 i0,i1;
      OOC_AST__NodeList nl;
      auto void OOC_Parser__Module_MultiPartIdent_Append(OOC_AST__Node node);
      auto OOC_Scanner_InputBuffer__CharArray OOC_Parser__Module_MultiPartIdent_AppendString(OOC_Scanner_InputBuffer__CharArray prefix, OOC_Scanner_InputBuffer__CharArray suffix);
        
        void OOC_Parser__Module_MultiPartIdent_Append(OOC_AST__Node node) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_Scanner_InputBuffer__CharArray _new;

          i0 = (OOC_INT32)*name;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 11096)), 0);
          i1 = Strings__Length((void*)(_check_pointer(i0, 11096)), i1);
          i2 = (OOC_INT32)sym;
          i3 = *(OOC_INT32*)((_check_pointer(i2, 11102))+12);
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], ((i1+i3)+1));
          _new = (OOC_Scanner_InputBuffer__CharArray)i1;
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11136)), 0);
          _copy_8((const void*)(_check_pointer(i0, 11130)),(void*)(_check_pointer(i1, 11136)),i3);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11167))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11167))+8);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11178)), 0);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11172)), 0);
          Strings__Append((void*)(_check_pointer(i0, 11172)), i2, (void*)(_check_pointer(i1, 11178)), i3);
          i0 = (OOC_INT32)nl;
          i1 = (OOC_INT32)node;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11192)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          return;
          ;
        }

        
        OOC_Scanner_InputBuffer__CharArray OOC_Parser__Module_MultiPartIdent_AppendString(OOC_Scanner_InputBuffer__CharArray prefix, OOC_Scanner_InputBuffer__CharArray suffix) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_INT32 len;
          OOC_Scanner_InputBuffer__CharArray s;

          i0 = (OOC_INT32)prefix;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 11398)), 0);
          i1 = Strings__Length((void*)(_check_pointer(i0, 11398)), i1);
          i2 = (OOC_INT32)suffix;
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11423)), 0);
          i3 = Strings__Length((void*)(_check_pointer(i2, 11423)), i3);
          i1 = (i1+i3)+2;
          len = i1;
          i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], i1);
          s = (OOC_Scanner_InputBuffer__CharArray)i1;
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11475)), 0);
          _copy_8((const void*)(_check_pointer(i0, 11471)),(void*)(_check_pointer(i1, 11475)),i3);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11509)), 0);
          Strings__Append(":", 2, (void*)(_check_pointer(i1, 11509)), i0);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11547)), 0);
          i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11543)), 0);
          Strings__Append((void*)(_check_pointer(i2, 11543)), i3, (void*)(_check_pointer(i1, 11547)), i0);
          return (OOC_Scanner_InputBuffer__CharArray)i1;
          ;
        }


      i0 = (OOC_INT32)ast;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11667)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
      nl = (OOC_AST__NodeList)i0;
      i0 = (OOC_INT32)sym;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11701))+8);
      *name = (OOC_Scanner_InputBuffer__CharArray)i0;
      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
      OOC_Parser__Module_MultiPartIdent_Append((OOC_AST__Node)i0);
      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 11761))+4);
      i1 = i1==20;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = parseOptions;
      i1 = !(_in(1,i1));
      
l5:
      if (!i1) goto l7;
      OOC_Parser__Module_Err(10, (OOC_Scanner_BasicList__Symbol)i0);
l7:
      i0 = (OOC_INT32)sym;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 11891))+4);
      i0 = i0==20;
      if (!i0) goto l15;
l10_loop:
      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(20);
      OOC_Parser__Module_MultiPartIdent_Append((OOC_AST__Node)i0);
      i0 = (OOC_INT32)sym;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11996))+8);
      i1 = (OOC_INT32)*name;
      i0 = (OOC_INT32)OOC_Parser__Module_MultiPartIdent_AppendString((OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i0);
      *name = (OOC_Scanner_InputBuffer__CharArray)i0;
      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
      OOC_Parser__Module_MultiPartIdent_Append((OOC_AST__Node)i0);
      i0 = (OOC_INT32)sym;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 11891))+4);
      i0 = i0==20;
      if (i0) goto l10_loop;
l15:
      i0 = (OOC_INT32)ast;
      i1 = (OOC_INT32)nl;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12072)))), OOC_AST__BuilderDesc_ModuleIdent)),OOC_AST__BuilderDesc_ModuleIdent)((OOC_AST__Builder)i0, (OOC_AST__NodeList)i1);
      return (OOC_AST__Node)i0;
      ;
    }

    
    OOC_AST__Node OOC_Parser__Module_Flags(OOC_INT8 context) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 counter;
      OOC_AST__Node lBrak;
      OOC_AST__NodeList flagList;
      OOC_AST__Node rBrak;
      auto OOC_CHAR8 OOC_Parser__Module_Flags_Ident(const OOC_CHAR8 name__ref[], OOC_LEN name_0d);
      auto OOC_AST__Node OOC_Parser__Module_Flags_Flag(void);
      auto OOC_AST__Node OOC_Parser__Module_Flags_ModuleFlags(void);
        
        OOC_CHAR8 OOC_Parser__Module_Flags_Ident(const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
          register OOC_INT32 i0,i1;
          OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

          OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
          i0 = (OOC_INT32)sym;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 12386))+4);
          i1 = i1==45;
          if (i1) goto l3;
          i0=0u;
          goto l4;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12413))+8);
          i0 = (
          _cmp8((const void*)(_check_pointer(i0, 12418)),(const void*)(OOC_INT32)name))==0;
          
l4:
          return i0;
          ;
        }

        
        OOC_AST__Node OOC_Parser__Module_Flags_Flag(void) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_AST__Node procId;
          OOC_AST__Node eql;
          OOC_AST__Node number;

          i0 = context;
          i1 = i0==9;
          if (i1) goto l3;
          i2=0u;
          goto l5;
l3:
          i2 = OOC_Parser__Module_Flags_Ident("PROC_ID", 8);
          
l5:
          if (i2) goto l31;
          i2 = i0==0;
          if (!i2) goto l11;
          i1=1u;
l11:
          if (i1) goto l13;
          i0 = i0==6;
          
          goto l15;
l13:
          i0=1u;
l15:
          if (i0) goto l17;
          i0=0u;
          goto l23;
l17:
          i0 = (OOC_INT32)sym;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 13090))+4);
          i1 = i1==43;
          if (i1) goto l20;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 13140))+4);
          i0 = i0==44;
          
          goto l23;
l20:
          i0=1u;
l23:
          if (i0) goto l29;
          i0 = (OOC_INT32)sym;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 13366))+4);
          i1 = i1==45;
          if (i1) goto l27;
          OOC_Parser__Module_Err(16, (OOC_Scanner_BasicList__Symbol)i0);
          return (OOC_AST__Node)(OOC_INT32)0;
          goto l32;
l27:
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
          return (OOC_AST__Node)i0;
          goto l32;
l29:
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 13342))+4);
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(i0);
          return (OOC_AST__Node)i0;
          goto l32;
l31:
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
          procId = (OOC_AST__Node)i0;
          i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(9);
          eql = (OOC_AST__Node)i1;
          i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(37);
          number = (OOC_AST__Node)i2;
          i3 = (OOC_INT32)ast;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12890)))), OOC_AST__BuilderDesc_ProcIdFlag)),OOC_AST__BuilderDesc_ProcIdFlag)((OOC_AST__Builder)i3, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2);
          return (OOC_AST__Node)i0;
l32:
          _failed_function(12464); return 0;
          ;
        }

        
        OOC_AST__Node OOC_Parser__Module_Flags_ModuleFlags(void) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          OOC_AST__Node external;
          OOC_AST__Node callConv;
          OOC_AST__NodeList moduleFlags;
          OOC_AST__Node semicolon;
          OOC_AST__Node link;
          OOC_AST__NodeList linkSections;
          OOC_AST__Node end;
          auto OOC_AST__Node OOC_Parser__Module_Flags_ModuleFlags_CheckString(void);
          auto OOC_AST__Node OOC_Parser__Module_Flags_ModuleFlags_LinkSection(void);
            
            OOC_AST__Node OOC_Parser__Module_Flags_ModuleFlags_CheckString(void) {
              register OOC_INT32 i0;

              i0 = (OOC_INT32)sym;
              i0 = *(OOC_INT8*)((_check_pointer(i0, 13823))+4);
              i0 = i0==43;
              if (i0) goto l3;
              i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(44);
              return (OOC_AST__Node)i0;
              goto l4;
l3:
              i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(43);
              return (OOC_AST__Node)i0;
l4:
              _failed_function(13766); return 0;
              ;
            }

            
            OOC_AST__Node OOC_Parser__Module_Flags_ModuleFlags_LinkSection(void) {
              register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
              OOC_AST__Node kw;
              OOC_AST__Node string;
              OOC_AST__Node addOptions;
              OOC_AST__Node addIdent1;
              OOC_AST__Node addComma;
              OOC_AST__Node addIdent2;
              OOC_AST__Node lParen;
              OOC_AST__NodeList dependences;
              OOC_AST__Node rParen;
              auto void OOC_Parser__Module_Flags_ModuleFlags_LinkSection_Options(void);
                
                void OOC_Parser__Module_Flags_ModuleFlags_LinkSection_Options(void) {
                  register OOC_INT32 i0;

                  addOptions = (OOC_AST__Node)(OOC_INT32)0;
                  addIdent1 = (OOC_AST__Node)(OOC_INT32)0;
                  addComma = (OOC_AST__Node)(OOC_INT32)0;
                  addIdent2 = (OOC_AST__Node)(OOC_INT32)0;
                  i0 = OOC_Parser__Module_Flags_Ident("ADD_OPTION", 11);
                  if (!i0) goto l6;
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
                  addOptions = (OOC_AST__Node)i0;
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
                  addIdent1 = (OOC_AST__Node)i0;
                  i0 = (OOC_INT32)sym;
                  i0 = *(OOC_INT8*)((_check_pointer(i0, 14561))+4);
                  i0 = i0==19;
                  if (!i0) goto l6;
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
                  addComma = (OOC_AST__Node)i0;
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
                  addIdent2 = (OOC_AST__Node)i0;
l6:
                  return;
                  ;
                }


              i0 = OOC_Parser__Module_Flags_Ident("FILE", 5);
              if (i0) goto l25;
              i0 = OOC_Parser__Module_Flags_Ident("OBJ", 4);
              if (i0) goto l23;
              i0 = OOC_Parser__Module_Flags_Ident("LIB", 4);
              if (i0) goto l7;
              i0 = OOC_Parser__Module_Flags_Ident("FRAMEWORK", 10);
              
              goto l9;
l7:
              i0=1u;
l9:
              if (i0) goto l11;
              return (OOC_AST__Node)(OOC_INT32)0;
              goto l26;
l11:
              i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
              kw = (OOC_AST__Node)i0;
              i0 = (OOC_INT32)OOC_Parser__Module_Flags_ModuleFlags_CheckString();
              string = (OOC_AST__Node)i0;
              i0 = (OOC_INT32)sym;
              i0 = *(OOC_INT8*)((_check_pointer(i0, 15604))+4);
              i0 = i0==32;
              if (i0) goto l14;
              lParen = (OOC_AST__Node)(OOC_INT32)0;
              dependences = (OOC_AST__NodeList)(OOC_INT32)0;
              rParen = (OOC_AST__Node)(OOC_INT32)0;
              goto l21;
l14:
              i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(32);
              lParen = (OOC_AST__Node)i0;
              i0 = (OOC_INT32)ast;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15713)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
              dependences = (OOC_AST__NodeList)i0;
l15_loop:
              i1 = (OOC_INT32)OOC_Parser__Module_Flags_ModuleFlags_CheckString();
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15776)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
              i1 = (OOC_INT32)sym;
              i1 = *(OOC_INT8*)((_check_pointer(i1, 15825))+4);
              i1 = i1==19;
              if (!i1) goto l20;
              i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15880)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
              goto l15_loop;
l20:
              i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(22);
              rParen = (OOC_AST__Node)i0;
l21:
              OOC_Parser__Module_Flags_ModuleFlags_LinkSection_Options();
              i0 = (OOC_INT32)ast;
              i1 = (OOC_INT32)kw;
              i2 = (OOC_INT32)string;
              i3 = (OOC_INT32)lParen;
              i4 = (OOC_INT32)dependences;
              i5 = (OOC_INT32)rParen;
              i6 = (OOC_INT32)addOptions;
              i7 = (OOC_INT32)addIdent1;
              i8 = (OOC_INT32)addComma;
              i9 = (OOC_INT32)addIdent2;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16216)))), OOC_AST__BuilderDesc_LinkLibFlag)),OOC_AST__BuilderDesc_LinkLibFlag)((OOC_AST__Builder)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3, (OOC_AST__NodeList)i4, (OOC_AST__Node)i5, (OOC_AST__Node)i6, (OOC_AST__Node)i7, (OOC_AST__Node)i8, (OOC_AST__Node)i9);
              return (OOC_AST__Node)i0;
              goto l26;
l23:
              i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
              kw = (OOC_AST__Node)i0;
              i1 = (OOC_INT32)OOC_Parser__Module_Flags_ModuleFlags_CheckString();
              string = (OOC_AST__Node)i1;
              i2 = (OOC_INT32)ast;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15422)))), OOC_AST__BuilderDesc_LinkObjFlag)),OOC_AST__BuilderDesc_LinkObjFlag)((OOC_AST__Builder)i2, (OOC_AST__Node)i0, (OOC_AST__Node)i1);
              return (OOC_AST__Node)i0;
              goto l26;
l25:
              i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
              kw = (OOC_AST__Node)i0;
              i0 = (OOC_INT32)OOC_Parser__Module_Flags_ModuleFlags_CheckString();
              string = (OOC_AST__Node)i0;
              OOC_Parser__Module_Flags_ModuleFlags_LinkSection_Options();
              i0 = (OOC_INT32)ast;
              i1 = (OOC_INT32)kw;
              i2 = (OOC_INT32)string;
              i3 = (OOC_INT32)addOptions;
              i4 = (OOC_INT32)addIdent1;
              i5 = (OOC_INT32)addComma;
              i6 = (OOC_INT32)addIdent2;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15174)))), OOC_AST__BuilderDesc_LinkFileFlag)),OOC_AST__BuilderDesc_LinkFileFlag)((OOC_AST__Builder)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3, (OOC_AST__Node)i4, (OOC_AST__Node)i5, (OOC_AST__Node)i6);
              return (OOC_AST__Node)i0;
l26:
              _failed_function(14033); return 0;
              ;
            }


          i0 = OOC_Parser__Module_Flags_Ident("OOC_EXTENSIONS", 15);
          if (i0) goto l36;
          i0 = OOC_Parser__Module_Flags_Ident("DEPRECATED", 11);
          if (i0) goto l34;
          i0 = OOC_Parser__Module_Flags_Ident("INTERFACE", 10);
          i0 = !i0;
          if (i0) goto l7;
          i0=0u;
          goto l9;
l7:
          i0 = OOC_Parser__Module_Flags_Ident("FOREIGN", 8);
          i0 = !i0;
          
l9:
          if (!i0) goto l11;
          i0 = (OOC_INT32)sym;
          OOC_Parser__Module_Err(17, (OOC_Scanner_BasicList__Symbol)i0);
l11:
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
          external = (OOC_AST__Node)i0;
          i0 = (OOC_INT32)OOC_Parser__Module_Flags_ModuleFlags_CheckString();
          callConv = (OOC_AST__Node)i0;
          i0 = (OOC_INT32)ast;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17123)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
          moduleFlags = (OOC_AST__NodeList)i0;
          i1 = (OOC_INT32)sym;
          i2 = *(OOC_INT8*)((_check_pointer(i1, 17160))+4);
          i2 = i2==19;
          if (i2) goto l14_loop;
          i0=i1;
          goto l19;
l14_loop:
          i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17207)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17266)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          i1 = (OOC_INT32)sym;
          i2 = *(OOC_INT8*)((_check_pointer(i1, 17160))+4);
          i2 = i2==19;
          if (i2) goto l14_loop;
l18:
          i0=i1;
l19:
          i0 = *(OOC_INT8*)((_check_pointer(i0, 17344))+4);
          i0 = i0==46;
          if (i0) goto l22;
          semicolon = (OOC_AST__Node)(OOC_INT32)0;
          link = (OOC_AST__Node)(OOC_INT32)0;
          linkSections = (OOC_AST__NodeList)(OOC_INT32)0;
          end = (OOC_AST__Node)(OOC_INT32)0;
          i0=(OOC_INT32)0;
          goto l33;
l22:
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(46);
          semicolon = (OOC_AST__Node)i0;
          i0 = OOC_Parser__Module_Flags_Ident("LINK", 5);
          if (i0) goto l25;
          i0 = (OOC_INT32)sym;
          OOC_Parser__Module_Err(16, (OOC_Scanner_BasicList__Symbol)i0);
          link = (OOC_AST__Node)(OOC_INT32)0;
          goto l26;
l25:
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
          link = (OOC_AST__Node)i0;
l26:
          i0 = (OOC_INT32)ast;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17638)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
          linkSections = (OOC_AST__NodeList)i0;
l27_loop:
          i0 = (OOC_INT32)linkSections;
          i1 = (OOC_INT32)OOC_Parser__Module_Flags_ModuleFlags_LinkSection();
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17698)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 17745))+4);
          i0 = i0==46;
          if (!i0) goto l32;
          i0 = (OOC_INT32)linkSections;
          i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(46);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17803)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          goto l27_loop;
l32:
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(48);
          end = (OOC_AST__Node)i0;
          
l33:
          i1 = (OOC_INT32)ast;
          i2 = (OOC_INT32)external;
          i3 = (OOC_INT32)callConv;
          i4 = (OOC_INT32)moduleFlags;
          i5 = (OOC_INT32)semicolon;
          i6 = (OOC_INT32)link;
          i7 = (OOC_INT32)linkSections;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18130)))), OOC_AST__BuilderDesc_ModuleFlags)),OOC_AST__BuilderDesc_ModuleFlags)((OOC_AST__Builder)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3, (OOC_AST__NodeList)i4, (OOC_AST__Node)i5, (OOC_AST__Node)i6, (OOC_AST__NodeList)i7, (OOC_AST__Node)i0);
          return (OOC_AST__Node)i0;
          goto l37;
l34:
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
          return (OOC_AST__Node)i0;
          goto l37;
l36:
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
          return (OOC_AST__Node)i0;
l37:
          _failed_function(13597); return 0;
          ;
        }


      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 18382))+4);
      i1 = i1==33;
      if (i1) goto l3;
      return (OOC_AST__Node)(OOC_INT32)0;
      goto l32;
l3:
      i1 = parseOptions;
      i1 = !(_in(0,i1));
      if (i1) goto l16;
      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(33);
      lBrak = (OOC_AST__Node)i0;
      i0 = (OOC_INT32)ast;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19108)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
      flagList = (OOC_AST__NodeList)i0;
      i1 = context;
      switch (i1) {
      case 10:
        i1 = (OOC_INT32)OOC_Parser__Module_Flags_ModuleFlags();
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19200)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
        goto l15;
      default:
l9_loop:
        i0 = (OOC_INT32)flagList;
        i1 = (OOC_INT32)OOC_Parser__Module_Flags_Flag();
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19279)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
        i0 = (OOC_INT32)sym;
        i0 = *(OOC_INT8*)((_check_pointer(i0, 19320))+4);
        i0 = i0==19;
        if (!i0) goto l15;
        i0 = (OOC_INT32)flagList;
        i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19370)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
        goto l9_loop;
      }
l15:
      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(23);
      rBrak = (OOC_AST__Node)i0;
      i1 = (OOC_INT32)ast;
      i2 = context;
      i3 = (OOC_INT32)lBrak;
      i4 = (OOC_INT32)flagList;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19558)))), OOC_AST__BuilderDesc_Flags)),OOC_AST__BuilderDesc_Flags)((OOC_AST__Builder)i1, i2, (OOC_AST__Node)i3, (OOC_AST__NodeList)i4, (OOC_AST__Node)i0);
      return (OOC_AST__Node)i0;
      goto l32;
l16:
      OOC_Parser__Module_Err(8, (OOC_Scanner_BasicList__Symbol)i0);
      counter = 0;
      i0=0;
l17_loop:
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 18625))+4);
      i2 = i2==72;
      if (i2) goto l25;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 18721))+4);
      switch (i2) {
      case 23:
        i0 = i0+1;
        counter = i0;
        
        goto l24;
      case 33:
        i0 = i0-1;
        counter = i0;
        prevSym = (OOC_Scanner_BasicList__Symbol)i1;
        
        goto l24;
      default:
        
        goto l24;
      }
l24:
      OOC_Parser__Module_NextSym();
      
      goto l26;
l25:
      counter = 0;
      i0=0;
l26:
      i1 = i0==0;
      if (!i1) goto l17_loop;
l30:
      return (OOC_AST__Node)(OOC_INT32)0;
l32:
      _failed_function(12130); return 0;
      ;
    }

    
    OOC_AST__Node OOC_Parser__Module_IdentDef(OOC_INT32 level, OOC_CHAR8 noReadOnly, OOC_CHAR8 noMark, OOC_Scanner_InputBuffer__CharArray *name) {
      register OOC_INT32 i0,i1,i2;
      OOC_AST__Node ident;
      OOC_AST__Node mark;

      i0 = (OOC_INT32)sym;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20936))+8);
      *name = (OOC_Scanner_InputBuffer__CharArray)i0;
      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
      ident = (OOC_AST__Node)i0;
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 20996))+4);
      i2 = i2==7;
      if (i2) goto l3;
      i2=0u;
      goto l5;
l3:
      i2 = noMark;
      i2 = !i2;
      
l5:
      if (i2) goto l18;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 21209))+4);
      i2 = i2==1;
      if (i2) goto l9;
      i2=0u;
      goto l11;
l9:
      i2 = noMark;
      i2 = !i2;
      
l11:
      if (i2) goto l13;
      mark = (OOC_AST__Node)(OOC_INT32)0;
      i1=(OOC_INT32)0;
      goto l25;
l13:
      i2 = level;
      i2 = i2!=0;
      if (!i2) goto l16;
      OOC_Parser__Module_Err(12, (OOC_Scanner_BasicList__Symbol)i1);
l16:
      i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(1);
      mark = (OOC_AST__Node)i1;
      
      goto l25;
l18:
      i2 = level;
      i2 = i2!=0;
      if (!i2) goto l21;
      OOC_Parser__Module_Err(12, (OOC_Scanner_BasicList__Symbol)i1);
l21:
      i1 = noReadOnly;
      if (!i1) goto l24;
      i1 = (OOC_INT32)sym;
      OOC_Parser__Module_Err(13, (OOC_Scanner_BasicList__Symbol)i1);
l24:
      i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(7);
      mark = (OOC_AST__Node)i1;
      
l25:
      i2 = (OOC_INT32)ast;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21409)))), OOC_AST__BuilderDesc_IdentDef)),OOC_AST__BuilderDesc_IdentDef)((OOC_AST__Builder)i2, (OOC_AST__Node)i0, (OOC_AST__Node)i1);
      lastIdentDef = (OOC_AST__Node)i0;
      return (OOC_AST__Node)i0;
      ;
    }

    
    OOC_AST__Node OOC_Parser__Module_ImportList(OOC_Scanner_InputBuffer__CharArray moduleName) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_AST__Node import;
      OOC_AST__NodeList imports;
      OOC_AST__Node scolon;
      auto OOC_AST__Node OOC_Parser__Module_ImportList_ImportDecl(void);
        
        OOC_AST__Node OOC_Parser__Module_ImportList_ImportDecl(void) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_AST__Node alias;
          OOC_AST__Node becomes;
          OOC_Scanner_BasicList__Symbol ptr;
          OOC_AST__Node module;
          OOC_Scanner_InputBuffer__CharArray name;

          i0 = (OOC_INT32)sym;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21865));
          i1 = i1!=0;
          if (i1) goto l3;
          i0=0u;
          goto l5;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21885));
          i0 = *(OOC_INT8*)((_check_pointer(i0, 21891))+4);
          i0 = i0==36;
          
l5:
          if (i0) goto l7;
          alias = (OOC_AST__Node)0;
          becomes = (OOC_AST__Node)0;
          i0=0;i1=0;
          goto l8;
l7:
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
          alias = (OOC_AST__Node)i0;
          i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(36);
          becomes = (OOC_AST__Node)i1;
          
l8:
          i2 = (OOC_INT32)sym;
          ptr = (OOC_Scanner_BasicList__Symbol)i2;
          i3 = (OOC_INT32)OOC_Parser__Module_MultiPartIdent((void*)(OOC_INT32)&name);
          module = (OOC_AST__Node)i3;
          i4 = (OOC_INT32)name;
          i5 = (OOC_INT32)moduleName;
          i4 = (
          _cmp8((const void*)(_check_pointer(i4, 22162)),(const void*)(_check_pointer(i5, 22176))))==0;
          if (!i4) goto l11;
          OOC_Parser__Module_Err(11, (OOC_Scanner_BasicList__Symbol)i2);
l11:
          i2 = (OOC_INT32)ast;
          i4 = (OOC_INT32)name;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22331)))), OOC_AST__BuilderDesc_ImportDecl)),OOC_AST__BuilderDesc_ImportDecl)((OOC_AST__Builder)i2, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i3, (OOC_Scanner_InputBuffer__CharArray)i4);
          return (OOC_AST__Node)i0;
          ;
        }


      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(70);
      import = (OOC_AST__Node)i0;
      i0 = (OOC_INT32)ast;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22577)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
      imports = (OOC_AST__NodeList)i0;
l1_loop:
      i0 = (OOC_INT32)imports;
      i1 = (OOC_INT32)OOC_Parser__Module_ImportList_ImportDecl();
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22620)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
      i0 = (OOC_INT32)sym;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 22660))+4);
      i0 = i0==19;
      if (!i0) goto l6;
      i0 = (OOC_INT32)imports;
      i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22703)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
      goto l1_loop;
l6:
      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(46);
      scolon = (OOC_AST__Node)i0;
      i1 = (OOC_INT32)ast;
      i2 = (OOC_INT32)imports;
      i3 = (OOC_INT32)import;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22850)))), OOC_AST__BuilderDesc_ImportList)),OOC_AST__BuilderDesc_ImportList)((OOC_AST__Builder)i1, (OOC_AST__Node)i3, (OOC_AST__NodeList)i2, (OOC_AST__Node)i0);
      return (OOC_AST__Node)i0;
      ;
    }

    
    OOC_AST__Node OOC_Parser__Module_Qualident(void) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_AST__Node module;
      OOC_AST__Node period;
      OOC_AST__Node ident;

      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
      module = (OOC_AST__Node)i0;
      i1 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i1, 23142))+4);
      i1 = i1==18;
      if (i1) goto l3;
      return (OOC_AST__Node)i0;
      goto l4;
l3:
      i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(18);
      period = (OOC_AST__Node)i1;
      i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
      ident = (OOC_AST__Node)i2;
      i3 = (OOC_INT32)ast;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 23273)))), OOC_AST__BuilderDesc_Operator)),OOC_AST__BuilderDesc_Operator)((OOC_AST__Builder)i3, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2);
      return (OOC_AST__Node)i0;
l4:
      _failed_function(22961); return 0;
      ;
    }

    
    OOC_AST__Node OOC_Parser__Module_QualType(void) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_AST__Node type;
      OOC_AST__Node left;
      OOC_AST__NodeList list;
      OOC_AST__Node right;

      i0 = (OOC_INT32)OOC_Parser__Module_Qualident();
      type = (OOC_AST__Node)i0;
      i1 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i1, 23598))+4);
      i1 = i1==32;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = parseOptions;
      i1 = _in(4,i1);
      
l5:
      if (i1) goto l7;
      return (OOC_AST__Node)i0;
      goto l18;
l7:
      i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(32);
      left = (OOC_AST__Node)i1;
      i2 = (OOC_INT32)ast;
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23721)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i2);
      list = (OOC_AST__NodeList)i2;
      i3 = (OOC_INT32)sym;
      i3 = *(OOC_INT8*)((_check_pointer(i3, 23752))+4);
      i3 = i3!=22;
      if (!i3) goto l17;
      i3 = (OOC_INT32)OOC_Parser__Module_QualType();
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23792)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
      i3 = (OOC_INT32)sym;
      i3 = *(OOC_INT8*)((_check_pointer(i3, 23833))+4);
      i3 = i3==19;
      if (!i3) goto l17;
l11_loop:
      i3 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23872)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
      i3 = (OOC_INT32)OOC_Parser__Module_QualType();
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23921)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
      i3 = (OOC_INT32)sym;
      i3 = *(OOC_INT8*)((_check_pointer(i3, 23833))+4);
      i3 = i3==19;
      if (i3) goto l11_loop;
l17:
      i3 = (OOC_INT32)OOC_Parser__Module_CheckSym(22);
      right = (OOC_AST__Node)i3;
      i4 = (OOC_INT32)ast;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 24029)))), OOC_AST__BuilderDesc_QualType)),OOC_AST__BuilderDesc_QualType)((OOC_AST__Builder)i4, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
      return (OOC_AST__Node)i0;
l18:
      _failed_function(23385); return 0;
      ;
    }

    
    OOC_AST__Node OOC_Parser__Module_Designator(void) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_AST__Node x;
      OOC_AST__Node op;
      OOC_AST__Node y;
      OOC_AST__Node left;
      OOC_AST__NodeList list;
      OOC_AST__Node right;
      auto OOC_AST__Node OOC_Parser__Module_Designator_Call(OOC_AST__Node design);
        
        OOC_AST__Node OOC_Parser__Module_Designator_Call(OOC_AST__Node design) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_AST__Node left;
          OOC_AST__NodeList list;
          OOC_AST__Node right;

          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(32);
          left = (OOC_AST__Node)i0;
          i1 = (OOC_INT32)ast;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24430)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i1);
          list = (OOC_AST__NodeList)i1;
          i2 = (OOC_INT32)sym;
          i2 = *(OOC_INT8*)((_check_pointer(i2, 24462))+4);
          i2 = i2!=22;
          if (!i2) goto l10;
          i2 = (OOC_INT32)OOC_Parser__Module_Expr();
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24503)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i1, (OOC_AST__Node)i2);
          i2 = (OOC_INT32)sym;
          i2 = *(OOC_INT8*)((_check_pointer(i2, 24542))+4);
          i2 = i2==19;
          if (!i2) goto l10;
l4_loop:
          i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24582)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i1, (OOC_AST__Node)i2);
          i2 = (OOC_INT32)OOC_Parser__Module_Expr();
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24634)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i1, (OOC_AST__Node)i2);
          i2 = (OOC_INT32)sym;
          i2 = *(OOC_INT8*)((_check_pointer(i2, 24542))+4);
          i2 = i2==19;
          if (i2) goto l4_loop;
l10:
          i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(22);
          right = (OOC_AST__Node)i2;
          i3 = (OOC_INT32)ast;
          i4 = (OOC_INT32)design;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 24740)))), OOC_AST__BuilderDesc_FunctionCall)),OOC_AST__BuilderDesc_FunctionCall)((OOC_AST__Builder)i3, (OOC_AST__Node)i4, (OOC_AST__Node)i0, (OOC_AST__NodeList)i1, (OOC_AST__Node)i2);
          return (OOC_AST__Node)i0;
          ;
        }


      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
      x = (OOC_AST__Node)i0;
      
l1_loop:
      i1 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i1, 25052))+4);
      switch (i1) {
      case 18:
        i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(18);
        op = (OOC_AST__Node)i1;
        i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
        y = (OOC_AST__Node)i2;
        i3 = (OOC_INT32)ast;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 25185)))), OOC_AST__BuilderDesc_Operator)),OOC_AST__BuilderDesc_Operator)((OOC_AST__Builder)i3, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2);
        x = (OOC_AST__Node)i0;
        
        goto l1_loop;
      case 17:
        i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(17);
        op = (OOC_AST__Node)i1;
        i2 = (OOC_INT32)ast;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25290)))), OOC_AST__BuilderDesc_Operator)),OOC_AST__BuilderDesc_Operator)((OOC_AST__Builder)i2, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)(OOC_INT32)0);
        x = (OOC_AST__Node)i0;
        
        goto l1_loop;
      case 33:
        i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(33);
        left = (OOC_AST__Node)i1;
        i2 = (OOC_INT32)ast;
        i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25402)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i2);
        list = (OOC_AST__NodeList)i2;
        i3 = (OOC_INT32)OOC_Parser__Module_Expr();
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25433)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
        i3 = (OOC_INT32)sym;
        i3 = *(OOC_INT8*)((_check_pointer(i3, 25472))+4);
        i3 = i3==19;
        if (i3) goto l7_loop;
        goto l12;
l7_loop:
        i3 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25512)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
        i3 = (OOC_INT32)OOC_Parser__Module_Expr();
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25564)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
        i3 = (OOC_INT32)sym;
        i3 = *(OOC_INT8*)((_check_pointer(i3, 25472))+4);
        i3 = i3==19;
        if (i3) goto l7_loop;
l12:
        i3 = (OOC_INT32)OOC_Parser__Module_CheckSym(23);
        right = (OOC_AST__Node)i3;
        i4 = (OOC_INT32)ast;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 25659)))), OOC_AST__BuilderDesc_ArrayIndex)),OOC_AST__BuilderDesc_ArrayIndex)((OOC_AST__Builder)i4, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
        x = (OOC_AST__Node)i0;
        
        goto l1_loop;
      case 32:
        i0 = (OOC_INT32)OOC_Parser__Module_Designator_Call((OOC_AST__Node)i0);
        x = (OOC_AST__Node)i0;
        
        goto l1_loop;
      default:
        goto l16;
      }
l16:
      return (OOC_AST__Node)i0;
      ;
    }

    
    OOC_AST__Node OOC_Parser__Module_Expr(void) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_AST__Node x;
      OOC_AST__Node op;
      OOC_AST__Node y;
      auto OOC_AST__Node OOC_Parser__Module_Expr_SimpleExpr(void);
        
        OOC_AST__Node OOC_Parser__Module_Expr_SimpleExpr(void) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_AST__Node op;
          OOC_AST__Node y;
          OOC_AST__Node x;
          auto OOC_AST__Node OOC_Parser__Module_Expr_SimpleExpr_Term(void);
            
            OOC_AST__Node OOC_Parser__Module_Expr_SimpleExpr_Term(void) {
              register OOC_INT32 i0,i1,i2,i3;
              OOC_AST__Node x;
              OOC_AST__Node op;
              OOC_AST__Node y;
              auto OOC_AST__Node OOC_Parser__Module_Expr_SimpleExpr_Term_Factor(void);
                
                OOC_AST__Node OOC_Parser__Module_Expr_SimpleExpr_Term_Factor(void) {
                  register OOC_INT32 i0,i1,i2,i3;
                  OOC_AST__Node factor;
                  OOC_AST__Node lParen;
                  OOC_AST__Node expr;
                  OOC_AST__Node rParen;
                  OOC_AST__Node op;
                  OOC_AST__Node right;
                  auto OOC_AST__Node OOC_Parser__Module_Expr_SimpleExpr_Term_Factor_Set(OOC_AST__Node type);
                    
                    OOC_AST__Node OOC_Parser__Module_Expr_SimpleExpr_Term_Factor_Set(OOC_AST__Node type) {
                      register OOC_INT32 i0,i1,i2,i3,i4;
                      OOC_AST__Node lBrace;
                      OOC_AST__NodeList elementList;
                      OOC_AST__Node rBrace;
                      auto OOC_AST__Node OOC_Parser__Module_Expr_SimpleExpr_Term_Factor_Set_Element(void);
                        
                        OOC_AST__Node OOC_Parser__Module_Expr_SimpleExpr_Term_Factor_Set_Element(void) {
                          register OOC_INT32 i0,i1,i2,i3;
                          OOC_AST__Node lExpr;
                          OOC_AST__Node upto;
                          OOC_AST__Node rExpr;

                          i0 = (OOC_INT32)OOC_Parser__Module_Expr();
                          lExpr = (OOC_AST__Node)i0;
                          i1 = (OOC_INT32)sym;
                          i1 = *(OOC_INT8*)((_check_pointer(i1, 26543))+4);
                          i1 = i1==21;
                          if (i1) goto l3;
                          return (OOC_AST__Node)i0;
                          goto l4;
l3:
                          i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(21);
                          upto = (OOC_AST__Node)i1;
                          i2 = (OOC_INT32)OOC_Parser__Module_Expr();
                          rExpr = (OOC_AST__Node)i2;
                          i3 = (OOC_INT32)ast;
                          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 26681)))), OOC_AST__BuilderDesc_Operator)),OOC_AST__BuilderDesc_Operator)((OOC_AST__Builder)i3, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2);
                          return (OOC_AST__Node)i0;
l4:
                          _failed_function(26381); return 0;
                          ;
                        }


                      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(34);
                      lBrace = (OOC_AST__Node)i0;
                      i0 = (OOC_INT32)ast;
                      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27034)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
                      elementList = (OOC_AST__NodeList)i0;
                      i1 = (OOC_INT32)sym;
                      i1 = *(OOC_INT8*)((_check_pointer(i1, 27072))+4);
                      i1 = i1!=24;
                      if (!i1) goto l10;
                      i1 = (OOC_INT32)OOC_Parser__Module_Expr_SimpleExpr_Term_Factor_Set_Element();
                      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27126)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                      i0 = (OOC_INT32)sym;
                      i0 = *(OOC_INT8*)((_check_pointer(i0, 27174))+4);
                      i0 = i0==19;
                      if (!i0) goto l10;
l4_loop:
                      i0 = (OOC_INT32)elementList;
                      i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
                      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27227)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                      i1 = (OOC_INT32)OOC_Parser__Module_Expr_SimpleExpr_Term_Factor_Set_Element();
                      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27292)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                      i0 = (OOC_INT32)sym;
                      i0 = *(OOC_INT8*)((_check_pointer(i0, 27174))+4);
                      i0 = i0==19;
                      if (i0) goto l4_loop;
l10:
                      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(24);
                      rBrace = (OOC_AST__Node)i0;
                      i1 = (OOC_INT32)ast;
                      i2 = (OOC_INT32)type;
                      i3 = (OOC_INT32)lBrace;
                      i4 = (OOC_INT32)elementList;
                      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27426)))), OOC_AST__BuilderDesc_Set)),OOC_AST__BuilderDesc_Set)((OOC_AST__Builder)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3, (OOC_AST__NodeList)i4, (OOC_AST__Node)i0);
                      return (OOC_AST__Node)i0;
                      ;
                    }


                  i0 = (OOC_INT32)sym;
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 27750))+4);
                  i1 = i1==45;
                  if (i1) goto l35;
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 27960))+4);
                  i1 = 37<=i1;
                  if (i1) goto l5;
                  i1=0u;
                  goto l7;
l5:
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 27990))+4);
                  i1 = i1<=41;
                  
l7:
                  if (i1) goto l33;
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 28087))+4);
                  i1 = i1==43;
                  if (i1) goto l11;
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 28140))+4);
                  i1 = i1==44;
                  
                  goto l13;
l11:
                  i1=1u;
l13:
                  if (i1) goto l31;
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 28238))+4);
                  i1 = i1==42;
                  if (i1) goto l29;
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 28330))+4);
                  i1 = i1==34;
                  if (i1) goto l27;
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 28413))+4);
                  i1 = i1==32;
                  if (i1) goto l25;
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 28651))+4);
                  i1 = i1==35;
                  if (i1) goto l23;
                  OOC_Parser__Module_Err(15, (OOC_Scanner_BasicList__Symbol)i0);
                  i0 = (OOC_INT32)ast;
                  i1 = (OOC_INT32)sym;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28890)))), OOC_AST__BuilderDesc_Terminal)),OOC_AST__BuilderDesc_Terminal)((OOC_AST__Builder)i0, (OOC_Scanner_BasicList__Symbol)i1);
                  
                  goto l40;
l23:
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(35);
                  op = (OOC_AST__Node)i0;
                  i1 = (OOC_INT32)OOC_Parser__Module_Expr_SimpleExpr_Term_Factor();
                  right = (OOC_AST__Node)i1;
                  i2 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 28778)))), OOC_AST__BuilderDesc_Operator)),OOC_AST__BuilderDesc_Operator)((OOC_AST__Builder)i2, (OOC_AST__Node)(OOC_INT32)0, (OOC_AST__Node)i0, (OOC_AST__Node)i1);
                  
                  goto l40;
l25:
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(32);
                  lParen = (OOC_AST__Node)i0;
                  i1 = (OOC_INT32)OOC_Parser__Module_Expr();
                  expr = (OOC_AST__Node)i1;
                  i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(22);
                  rParen = (OOC_AST__Node)i2;
                  i3 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 28597)))), OOC_AST__BuilderDesc_Factor)),OOC_AST__BuilderDesc_Factor)((OOC_AST__Builder)i3, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2);
                  
                  goto l40;
l27:
                  i0 = (OOC_INT32)OOC_Parser__Module_Expr_SimpleExpr_Term_Factor_Set((OOC_AST__Node)(OOC_INT32)0);
                  
                  goto l40;
l29:
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(42);
                  
                  goto l40;
l31:
                  i0 = *(OOC_INT8*)((_check_pointer(i0, 28210))+4);
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(i0);
                  
                  goto l40;
l33:
                  i0 = *(OOC_INT8*)((_check_pointer(i0, 28059))+4);
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(i0);
                  
                  goto l40;
l35:
                  i0 = (OOC_INT32)OOC_Parser__Module_Designator();
                  factor = (OOC_AST__Node)i0;
                  i1 = (OOC_INT32)sym;
                  i1 = *(OOC_INT8*)((_check_pointer(i1, 27835))+4);
                  i1 = i1==34;
                  if (!i1) goto l40;
                  i0 = (OOC_INT32)OOC_Parser__Module_Expr_SimpleExpr_Term_Factor_Set((OOC_AST__Node)i0);
                  
l40:
                  return (OOC_AST__Node)i0;
                  ;
                }


              i0 = (OOC_INT32)OOC_Parser__Module_Expr_SimpleExpr_Term_Factor();
              x = (OOC_AST__Node)i0;
              i1 = (OOC_INT32)sym;
              i2 = *(OOC_INT8*)((_check_pointer(i1, 29178))+4);
              i2 = 1<=i2;
              if (i2) goto l3;
              i2=0u;
              goto l5;
l3:
              i2 = *(OOC_INT8*)((_check_pointer(i1, 29190))+4);
              i2 = i2<=5;
              
l5:
              if (!i2) goto l17;
              i0=i1;
l8_loop:
              i0 = *(OOC_INT8*)((_check_pointer(i0, 29244))+4);
              i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(i0);
              op = (OOC_AST__Node)i0;
              i0 = (OOC_INT32)OOC_Parser__Module_Expr_SimpleExpr_Term_Factor();
              y = (OOC_AST__Node)i0;
              i1 = (OOC_INT32)ast;
              i2 = (OOC_INT32)x;
              i3 = (OOC_INT32)op;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29298)))), OOC_AST__BuilderDesc_Operator)),OOC_AST__BuilderDesc_Operator)((OOC_AST__Builder)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3, (OOC_AST__Node)i0);
              x = (OOC_AST__Node)i0;
              i1 = (OOC_INT32)sym;
              i2 = *(OOC_INT8*)((_check_pointer(i1, 29178))+4);
              i2 = 1<=i2;
              if (i2) goto l11;
              i2=0u;
              goto l13;
l11:
              i2 = *(OOC_INT8*)((_check_pointer(i1, 29190))+4);
              i2 = i2<=5;
              
l13:
              if (!i2) goto l17;
              i0=i1;
              goto l8_loop;
l17:
              return (OOC_AST__Node)i0;
              ;
            }


          i0 = (OOC_INT32)sym;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 29506))+4);
          i1 = i1==6;
          if (i1) goto l3;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 29533))+4);
          i1 = i1==7;
          
          goto l5;
l3:
          i1=1u;
l5:
          if (i1) goto l7;
          i0 = (OOC_INT32)OOC_Parser__Module_Expr_SimpleExpr_Term();
          x = (OOC_AST__Node)i0;
          
          goto l8;
l7:
          i0 = *(OOC_INT8*)((_check_pointer(i0, 29588))+4);
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(i0);
          op = (OOC_AST__Node)i0;
          i0 = (OOC_INT32)OOC_Parser__Module_Expr_SimpleExpr_Term();
          y = (OOC_AST__Node)i0;
          i1 = (OOC_INT32)ast;
          i2 = (OOC_INT32)op;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29636)))), OOC_AST__BuilderDesc_Operator)),OOC_AST__BuilderDesc_Operator)((OOC_AST__Builder)i1, (OOC_AST__Node)(OOC_INT32)0, (OOC_AST__Node)i2, (OOC_AST__Node)i0);
          x = (OOC_AST__Node)i0;
          
l8:
          i1 = (OOC_INT32)sym;
          i2 = *(OOC_INT8*)((_check_pointer(i1, 29741))+4);
          i2 = 6<=i2;
          if (i2) goto l11;
          i1=0u;
          goto l13;
l11:
          i1 = *(OOC_INT8*)((_check_pointer(i1, 29753))+4);
          i1 = i1<=8;
          
l13:
          if (!i1) goto l24;
l15_loop:
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 29804))+4);
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(i0);
          op = (OOC_AST__Node)i0;
          i0 = (OOC_INT32)OOC_Parser__Module_Expr_SimpleExpr_Term();
          y = (OOC_AST__Node)i0;
          i1 = (OOC_INT32)ast;
          i2 = (OOC_INT32)x;
          i3 = (OOC_INT32)op;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29852)))), OOC_AST__BuilderDesc_Operator)),OOC_AST__BuilderDesc_Operator)((OOC_AST__Builder)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3, (OOC_AST__Node)i0);
          x = (OOC_AST__Node)i0;
          i1 = (OOC_INT32)sym;
          i2 = *(OOC_INT8*)((_check_pointer(i1, 29741))+4);
          i2 = 6<=i2;
          if (i2) goto l18;
          i1=0u;
          goto l20;
l18:
          i1 = *(OOC_INT8*)((_check_pointer(i1, 29753))+4);
          i1 = i1<=8;
          
l20:
          if (i1) goto l15_loop;
l24:
          return (OOC_AST__Node)i0;
          ;
        }


      i0 = (OOC_INT32)OOC_Parser__Module_Expr_SimpleExpr();
      x = (OOC_AST__Node)i0;
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 30122))+4);
      i2 = 9<=i2;
      if (i2) goto l3;
      i2=0u;
      goto l5;
l3:
      i2 = *(OOC_INT8*)((_check_pointer(i1, 30134))+4);
      i2 = i2<=16;
      
l5:
      if (!i2) goto l8;
      i0 = *(OOC_INT8*)((_check_pointer(i1, 30185))+4);
      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(i0);
      op = (OOC_AST__Node)i0;
      i0 = (OOC_INT32)OOC_Parser__Module_Expr_SimpleExpr();
      y = (OOC_AST__Node)i0;
      i1 = (OOC_INT32)ast;
      i2 = (OOC_INT32)x;
      i3 = (OOC_INT32)op;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30235)))), OOC_AST__BuilderDesc_Operator)),OOC_AST__BuilderDesc_Operator)((OOC_AST__Builder)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3, (OOC_AST__Node)i0);
      
l8:
      return (OOC_AST__Node)i0;
      ;
    }

    
    OOC_AST__Node OOC_Parser__Module_FormalPars(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_AST__Node oldLastIdentDef;
      OOC_AST__Node flags;
      OOC_AST__Node lParen;
      OOC_AST__NodeList fpSections;
      OOC_AST__Node rParen;
      OOC_AST__Node colon;
      OOC_AST__Node result;
      OOC_AST__Node raises;
      OOC_AST__NodeList raisesList;
      auto OOC_AST__Node OOC_Parser__Module_FormalPars_FPSection(void);
        
        OOC_AST__Node OOC_Parser__Module_FormalPars_FPSection(void) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_AST__Node var;
          OOC_AST__NodeList fpList;
          OOC_AST__Node ident;
          OOC_Scanner_InputBuffer__CharArray dummy;
          OOC_AST__Node colon;
          OOC_AST__Node type;

          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 30799))+4);
          i0 = i0==68;
          if (i0) goto l3;
          var = (OOC_AST__Node)(OOC_INT32)0;
          i0=(OOC_INT32)0;
          goto l4;
l3:
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(68);
          var = (OOC_AST__Node)i0;
          
l4:
          i1 = (OOC_INT32)ast;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30930)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i1);
          fpList = (OOC_AST__NodeList)i1;
l5_loop:
          i2 = (OOC_INT32)OOC_Parser__Module_IdentDef(0, 0u, 1u, (void*)(OOC_INT32)&dummy);
          ident = (OOC_AST__Node)i2;
          lastIdentDef = (OOC_AST__Node)i2;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31062)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i1, (OOC_AST__Node)i2);
          i2 = (OOC_INT32)OOC_Parser__Module_Flags(8);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31096)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i1, (OOC_AST__Node)i2);
          i2 = (OOC_INT32)sym;
          i2 = *(OOC_INT8*)((_check_pointer(i2, 31152))+4);
          i2 = i2==19;
          if (!i2) goto l10;
          i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31196)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i1, (OOC_AST__Node)i2);
          goto l5_loop;
l10:
          i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(20);
          colon = (OOC_AST__Node)i2;
          i3 = (OOC_INT32)OOC_Parser__Module_Type((-2147483647-1));
          type = (OOC_AST__Node)i3;
          i4 = (OOC_INT32)ast;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 31388)))), OOC_AST__BuilderDesc_FPSection)),OOC_AST__BuilderDesc_FPSection)((OOC_AST__Builder)i4, (OOC_AST__Node)i0, (OOC_AST__NodeList)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3);
          return (OOC_AST__Node)i0;
          ;
        }


      i0 = (OOC_INT32)lastIdentDef;
      oldLastIdentDef = (OOC_AST__Node)i0;
      i0 = (OOC_INT32)OOC_Parser__Module_Flags(0);
      flags = (OOC_AST__Node)i0;
      i0 = (OOC_INT32)sym;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 31774))+4);
      i0 = i0==32;
      if (i0) goto l3;
      lParen = (OOC_AST__Node)(OOC_INT32)0;
      fpSections = (OOC_AST__NodeList)(OOC_INT32)0;
      rParen = (OOC_AST__Node)(OOC_INT32)0;
      colon = (OOC_AST__Node)(OOC_INT32)0;
      result = (OOC_AST__Node)(OOC_INT32)0;
      raisesList = (OOC_AST__NodeList)(OOC_INT32)0;
      raises = (OOC_AST__Node)(OOC_INT32)0;
      i0=(OOC_INT32)0;i1=(OOC_INT32)0;i2=(OOC_INT32)0;i3=(OOC_INT32)0;i4=(OOC_INT32)0;
      goto l37;
l3:
      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(32);
      lParen = (OOC_AST__Node)i0;
      i0 = (OOC_INT32)ast;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31870)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
      fpSections = (OOC_AST__NodeList)i0;
      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 31902))+4);
      i1 = i1==68;
      if (i1) goto l6;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 31928))+4);
      i0 = i0==45;
      
      goto l8;
l6:
      i0=1u;
l8:
      if (!i0) goto l22;
l10_loop:
      i0 = (OOC_INT32)fpSections;
      i1 = (OOC_INT32)OOC_Parser__Module_FormalPars_FPSection();
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31991)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
      i0 = (OOC_INT32)sym;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 32034))+4);
      i0 = i0==46;
      if (!i0) goto l22;
      i0 = (OOC_INT32)fpSections;
      i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(46);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32088)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 32149))+4);
      i2 = i2==76;
      if (!i2) goto l10_loop;
      i2 = parseOptions;
      i2 = !(_in(2,i2));
      if (!i2) goto l19;
      OOC_Parser__Module_Err(9, (OOC_Scanner_BasicList__Symbol)i1);
l19:
      i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(76);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32330)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
l22:
      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(22);
      rParen = (OOC_AST__Node)i0;
      i1 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i1, 32547))+4);
      i1 = i1==20;
      if (i1) goto l25;
      colon = (OOC_AST__Node)(OOC_INT32)0;
      result = (OOC_AST__Node)(OOC_INT32)0;
      i1=(OOC_INT32)0;i2=(OOC_INT32)0;
      goto l26;
l25:
      i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(20);
      colon = (OOC_AST__Node)i1;
      i2 = (OOC_INT32)OOC_Parser__Module_QualType();
      result = (OOC_AST__Node)i2;
      
l26:
      i3 = (OOC_INT32)sym;
      i3 = *(OOC_INT8*)((_check_pointer(i3, 32738))+4);
      i3 = i3==27;
      if (i3) goto l29;
      raises = (OOC_AST__Node)(OOC_INT32)0;
      raisesList = (OOC_AST__NodeList)(OOC_INT32)0;
      i3=(OOC_INT32)0;i4=(OOC_INT32)0;
      goto l37;
l29:
      i3 = (OOC_INT32)OOC_Parser__Module_CheckSym(27);
      raises = (OOC_AST__Node)i3;
      i4 = (OOC_INT32)ast;
      i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 32837)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i4);
      raisesList = (OOC_AST__NodeList)i4;
l30_loop:
      i5 = (OOC_INT32)OOC_Parser__Module_Qualident();
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 32891)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i4, (OOC_AST__Node)i5);
      i5 = (OOC_INT32)sym;
      i5 = *(OOC_INT8*)((_check_pointer(i5, 32934))+4);
      i5 = i5==19;
      if (!i5) goto l37;
      i5 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 32984)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i4, (OOC_AST__Node)i5);
      goto l30_loop;
l37:
      i5 = (OOC_INT32)oldLastIdentDef;
      lastIdentDef = (OOC_AST__Node)i5;
      i5 = (OOC_INT32)ast;
      i6 = (OOC_INT32)flags;
      i7 = (OOC_INT32)lParen;
      i8 = (OOC_INT32)fpSections;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 33415)))), OOC_AST__BuilderDesc_FormalPars)),OOC_AST__BuilderDesc_FormalPars)((OOC_AST__Builder)i5, (OOC_AST__Node)i6, (OOC_AST__Node)i7, (OOC_AST__NodeList)i8, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3, (OOC_AST__NodeList)i4);
      return (OOC_AST__Node)i0;
      ;
    }

    
    OOC_AST__Node OOC_Parser__Module_TypePars(void) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_AST__Node oldLastIdentDef;
      OOC_AST__Node lParen;
      OOC_AST__NodeList tpSections;
      OOC_AST__Node rParen;
      auto OOC_AST__Node OOC_Parser__Module_TypePars_TPSection(void);
        
        OOC_AST__Node OOC_Parser__Module_TypePars_TPSection(void) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_AST__NodeList tpList;
          OOC_AST__Node ident;
          OOC_Scanner_InputBuffer__CharArray dummy;
          OOC_AST__Node colon;
          OOC_AST__Node type;

          i0 = (OOC_INT32)ast;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33917)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
          tpList = (OOC_AST__NodeList)i0;
l1_loop:
          i1 = (OOC_INT32)OOC_Parser__Module_IdentDef(0, 0u, 1u, (void*)(OOC_INT32)&dummy);
          ident = (OOC_AST__Node)i1;
          lastIdentDef = (OOC_AST__Node)i1;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34047)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          i1 = (OOC_INT32)sym;
          i1 = *(OOC_INT8*)((_check_pointer(i1, 34081))+4);
          i1 = i1==19;
          if (!i1) goto l6;
          i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34125)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          goto l1_loop;
l6:
          i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(20);
          colon = (OOC_AST__Node)i1;
          i2 = (OOC_INT32)OOC_Parser__Module_Qualident();
          type = (OOC_AST__Node)i2;
          i3 = (OOC_INT32)ast;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 34346)))), OOC_AST__BuilderDesc_TPSection)),OOC_AST__BuilderDesc_TPSection)((OOC_AST__Builder)i3, (OOC_AST__NodeList)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2);
          return (OOC_AST__Node)i0;
          ;
        }


      i0 = (OOC_INT32)lastIdentDef;
      oldLastIdentDef = (OOC_AST__Node)i0;
      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(32);
      lParen = (OOC_AST__Node)i0;
      i0 = (OOC_INT32)ast;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34619)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
      tpSections = (OOC_AST__NodeList)i0;
      i0 = (OOC_INT32)sym;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 34648))+4);
      i0 = i0==45;
      if (!i0) goto l9;
l3_loop:
      i0 = (OOC_INT32)tpSections;
      i1 = (OOC_INT32)OOC_Parser__Module_TypePars_TPSection();
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34706)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
      i0 = (OOC_INT32)sym;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 34745))+4);
      i0 = i0==46;
      if (!i0) goto l9;
      i0 = (OOC_INT32)tpSections;
      i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(46);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34796)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
      goto l3_loop;
l9:
      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(22);
      rParen = (OOC_AST__Node)i0;
      i1 = (OOC_INT32)oldLastIdentDef;
      lastIdentDef = (OOC_AST__Node)i1;
      i1 = (OOC_INT32)ast;
      i2 = (OOC_INT32)lParen;
      i3 = (OOC_INT32)tpSections;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34999)))), OOC_AST__BuilderDesc_TypePars)),OOC_AST__BuilderDesc_TypePars)((OOC_AST__Builder)i1, (OOC_AST__Node)i2, (OOC_AST__NodeList)i3, (OOC_AST__Node)i0);
      return (OOC_AST__Node)i0;
      ;
    }

    
    OOC_AST__Node OOC_Parser__Module_Type(OOC_INT32 level) {
      register OOC_INT32 i0,i1,i2;
      OOC_AST__Node type;
      auto OOC_AST__Node OOC_Parser__Module_Type_ArrayType(void);
      auto OOC_AST__Node OOC_Parser__Module_Type_RecordType(void);
      auto OOC_AST__Node OOC_Parser__Module_Type_PointerType(void);
      auto OOC_AST__Node OOC_Parser__Module_Type_ProcType(void);
        
        OOC_AST__Node OOC_Parser__Module_Type_ArrayType(void) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_AST__Node array;
          OOC_AST__Node flags;
          OOC_AST__NodeList exprList;
          OOC_AST__Node of;
          OOC_AST__Node type;

          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(62);
          array = (OOC_AST__Node)i0;
          i1 = (OOC_INT32)OOC_Parser__Module_Flags(1);
          flags = (OOC_AST__Node)i1;
          i2 = (OOC_INT32)ast;
          i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35455)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i2);
          exprList = (OOC_AST__NodeList)i2;
          i3 = (OOC_INT32)sym;
          i3 = *(OOC_INT8*)((_check_pointer(i3, 35487))+4);
          i3 = i3!=25;
          if (!i3) goto l9;
l3_loop:
          i3 = (OOC_INT32)OOC_Parser__Module_Expr();
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35545)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
          i3 = (OOC_INT32)sym;
          i3 = *(OOC_INT8*)((_check_pointer(i3, 35583))+4);
          i3 = i3==19;
          if (!i3) goto l9;
          i3 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35631)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
          goto l3_loop;
l9:
          i3 = (OOC_INT32)OOC_Parser__Module_CheckSym(25);
          of = (OOC_AST__Node)i3;
          i4 = level;
          i4 = (OOC_INT32)OOC_Parser__Module_Type(i4);
          type = (OOC_AST__Node)i4;
          i5 = (OOC_INT32)ast;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 35829)))), OOC_AST__BuilderDesc_ArrayType)),OOC_AST__BuilderDesc_ArrayType)((OOC_AST__Builder)i5, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__NodeList)i2, (OOC_AST__Node)i3, (OOC_AST__Node)i4);
          return (OOC_AST__Node)i0;
          ;
        }

        
        OOC_AST__Node OOC_Parser__Module_Type_RecordType(void) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
          OOC_AST__Node record;
          OOC_AST__Node flags;
          OOC_AST__Node lParen;
          OOC_AST__Node qualident;
          OOC_AST__Node rParen;
          OOC_AST__NodeList fieldLists;
          OOC_AST__Node end;
          auto OOC_AST__Node OOC_Parser__Module_Type_RecordType_FieldList(void);
            
            OOC_AST__Node OOC_Parser__Module_Type_RecordType_FieldList(void) {
              register OOC_INT32 i0,i1,i2,i3;
              OOC_AST__NodeList identList;
              OOC_Scanner_InputBuffer__CharArray dummy;
              OOC_AST__Node colon;
              OOC_AST__Node type;

              i0 = (OOC_INT32)ast;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36357)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
              identList = (OOC_AST__NodeList)i0;
l1_loop:
              i1 = level;
              i1 = (OOC_INT32)OOC_Parser__Module_IdentDef(i1, 0u, 0u, (void*)(OOC_INT32)&dummy);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36410)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
              i1 = (OOC_INT32)OOC_Parser__Module_Flags(7);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36481)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
              i1 = (OOC_INT32)sym;
              i1 = *(OOC_INT8*)((_check_pointer(i1, 36535))+4);
              i1 = i1==19;
              if (!i1) goto l6;
              i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36584)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
              goto l1_loop;
l6:
              i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(20);
              colon = (OOC_AST__Node)i1;
              i2 = level;
              i2 = (OOC_INT32)OOC_Parser__Module_Type(i2);
              type = (OOC_AST__Node)i2;
              i3 = (OOC_INT32)ast;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 36782)))), OOC_AST__BuilderDesc_FieldList)),OOC_AST__BuilderDesc_FieldList)((OOC_AST__Builder)i3, (OOC_AST__NodeList)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2);
              return (OOC_AST__Node)i0;
              ;
            }


          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(63);
          record = (OOC_AST__Node)i0;
          i0 = (OOC_INT32)OOC_Parser__Module_Flags(2);
          flags = (OOC_AST__Node)i0;
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 37092))+4);
          i0 = i0==32;
          if (i0) goto l3;
          lParen = (OOC_AST__Node)(OOC_INT32)0;
          qualident = (OOC_AST__Node)(OOC_INT32)0;
          rParen = (OOC_AST__Node)(OOC_INT32)0;
          
          goto l4;
l3:
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(32);
          lParen = (OOC_AST__Node)i0;
          i0 = (OOC_INT32)OOC_Parser__Module_QualType();
          qualident = (OOC_AST__Node)i0;
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(22);
          rParen = (OOC_AST__Node)i0;
          
l4:
          i0 = (OOC_INT32)ast;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37373)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
          fieldLists = (OOC_AST__NodeList)i0;
l5_loop:
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 37420))+4);
          i0 = i0==45;
          if (i0) goto l8;
          i0 = (OOC_INT32)fieldLists;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37528)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)(OOC_INT32)0);
          goto l9;
l8:
          i0 = (OOC_INT32)fieldLists;
          i1 = (OOC_INT32)OOC_Parser__Module_Type_RecordType_FieldList();
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37468)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
l9:
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 37575))+4);
          i0 = i0==46;
          if (!i0) goto l14;
          i0 = (OOC_INT32)fieldLists;
          i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(46);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 37627)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          goto l5_loop;
l14:
          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(48);
          end = (OOC_AST__Node)i0;
          i1 = (OOC_INT32)ast;
          i2 = (OOC_INT32)fieldLists;
          i3 = (OOC_INT32)rParen;
          i4 = (OOC_INT32)qualident;
          i5 = (OOC_INT32)lParen;
          i6 = (OOC_INT32)flags;
          i7 = (OOC_INT32)record;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 37781)))), OOC_AST__BuilderDesc_RecordType)),OOC_AST__BuilderDesc_RecordType)((OOC_AST__Builder)i1, (OOC_AST__Node)i7, (OOC_AST__Node)i6, (OOC_AST__Node)i5, (OOC_AST__Node)i4, (OOC_AST__Node)i3, (OOC_AST__NodeList)i2, (OOC_AST__Node)i0);
          return (OOC_AST__Node)i0;
          ;
        }

        
        OOC_AST__Node OOC_Parser__Module_Type_PointerType(void) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_AST__Node pointer;
          OOC_AST__Node flags;
          OOC_AST__Node to;
          OOC_AST__Node type;

          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(64);
          pointer = (OOC_AST__Node)i0;
          i1 = (OOC_INT32)OOC_Parser__Module_Flags(3);
          flags = (OOC_AST__Node)i1;
          i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(30);
          to = (OOC_AST__Node)i2;
          i3 = level;
          i3 = (OOC_INT32)OOC_Parser__Module_Type(i3);
          type = (OOC_AST__Node)i3;
          i4 = (OOC_INT32)ast;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 38255)))), OOC_AST__BuilderDesc_PointerType)),OOC_AST__BuilderDesc_PointerType)((OOC_AST__Builder)i4, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3);
          return (OOC_AST__Node)i0;
          ;
        }

        
        OOC_AST__Node OOC_Parser__Module_Type_ProcType(void) {
          register OOC_INT32 i0,i1,i2;
          OOC_AST__Node procedure;
          OOC_AST__Node formalPars;

          i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(69);
          procedure = (OOC_AST__Node)i0;
          i1 = (OOC_INT32)OOC_Parser__Module_FormalPars();
          formalPars = (OOC_AST__Node)i1;
          i2 = (OOC_INT32)ast;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 38580)))), OOC_AST__BuilderDesc_ProcType)),OOC_AST__BuilderDesc_ProcType)((OOC_AST__Builder)i2, (OOC_AST__Node)i0, (OOC_AST__Node)i1);
          return (OOC_AST__Node)i0;
          ;
        }


      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 38734))+4);
      switch (i1) {
      case 45:
        i0 = (OOC_INT32)OOC_Parser__Module_QualType();
        type = (OOC_AST__Node)i0;
        
        goto l8;
      case 62:
        i0 = (OOC_INT32)OOC_Parser__Module_Type_ArrayType();
        type = (OOC_AST__Node)i0;
        
        goto l8;
      case 63:
        i0 = (OOC_INT32)OOC_Parser__Module_Type_RecordType();
        type = (OOC_AST__Node)i0;
        
        goto l8;
      case 64:
        i0 = (OOC_INT32)OOC_Parser__Module_Type_PointerType();
        type = (OOC_AST__Node)i0;
        
        goto l8;
      case 69:
        i0 = (OOC_INT32)OOC_Parser__Module_Type_ProcType();
        type = (OOC_AST__Node)i0;
        
        goto l8;
      default:
        OOC_Parser__Module_Err(6, (OOC_Scanner_BasicList__Symbol)i0);
        type = (OOC_AST__Node)(OOC_INT32)0;
        i0=(OOC_INT32)0;
        goto l8;
      }
l8:
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 39098))+4);
      i2 = i2<46;
      if (i2) goto l11;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 39130))+4);
      i2 = i2>49;
      
      goto l13;
l11:
      i2=1u;
l13:
      if (i2) goto l15;
      i2=0u;
      goto l17;
l15:
      i2 = *(OOC_INT8*)((_check_pointer(i1, 39167))+4);
      i2 = i2!=22;
      
l17:
      if (!i2) goto l51;
      OOC_Parser__Module_Err(7, (OOC_Scanner_BasicList__Symbol)i1);
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 39355))+4);
      i2 = i2<45;
      if (i2) goto l21;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 39383))+4);
      i2 = i2>49;
      
      goto l23;
l21:
      i2=1u;
l23:
      if (i2) goto l25;
      i2=0u;
      goto l27;
l25:
      i2 = *(OOC_INT8*)((_check_pointer(i1, 39424))+4);
      i2 = i2<65;
      
l27:
      if (i2) goto l29;
      i1=0u;
      goto l31;
l29:
      i1 = *(OOC_INT8*)((_check_pointer(i1, 39451))+4);
      i1 = i1!=22;
      
l31:
      if (!i1) goto l51;
l33_loop:
      OOC_Parser__Module_NextSym();
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 39355))+4);
      i2 = i2<45;
      if (i2) goto l36;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 39383))+4);
      i2 = i2>49;
      
      goto l38;
l36:
      i2=1u;
l38:
      if (i2) goto l40;
      i2=0u;
      goto l42;
l40:
      i2 = *(OOC_INT8*)((_check_pointer(i1, 39424))+4);
      i2 = i2<65;
      
l42:
      if (i2) goto l44;
      i1=0u;
      goto l46;
l44:
      i1 = *(OOC_INT8*)((_check_pointer(i1, 39451))+4);
      i1 = i1!=22;
      
l46:
      if (i1) goto l33_loop;
l51:
      return (OOC_AST__Node)i0;
      ;
    }

    
    OOC_AST__Node OOC_Parser__Module_Body(OOC_INT32 level, OOC_Scanner_InputBuffer__CharArray headName) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_AST__NodeList declSeq;
      OOC_AST__Node begin;
      OOC_AST__NodeList statmSeq;
      OOC_AST__Node end;
      OOC_Scanner_BasicList__Symbol ptr;
      OOC_AST__Node name;
      OOC_Scanner_InputBuffer__CharArray tailName;
      auto OOC_AST__NodeList OOC_Parser__Module_Body_DeclSeq(void);
      auto OOC_AST__NodeList OOC_Parser__Module_Body_StatementSeq(void);
      auto void OOC_Parser__Module_Body_CheckName(OOC_Scanner_BasicList__Symbol sym, OOC_Scanner_InputBuffer__CharArray head, OOC_Scanner_InputBuffer__CharArray tail);
        
        OOC_AST__NodeList OOC_Parser__Module_Body_DeclSeq(void) {
          register OOC_INT32 i0,i1;
          OOC_AST__NodeList nl;
          auto OOC_AST__Node OOC_Parser__Module_Body_DeclSeq_ConstDecl(void);
          auto OOC_AST__Node OOC_Parser__Module_Body_DeclSeq_TypeDecl(void);
          auto OOC_AST__Node OOC_Parser__Module_Body_DeclSeq_VarDecl(void);
          auto OOC_AST__Node OOC_Parser__Module_Body_DeclSeq_ProcDecl(void);
            
            OOC_AST__Node OOC_Parser__Module_Body_DeclSeq_ConstDecl(void) {
              register OOC_INT32 i0,i1,i2,i3,i4,i5;
              OOC_AST__Node identDef;
              OOC_Scanner_InputBuffer__CharArray dummy;
              OOC_AST__Node flags;
              OOC_AST__Node equal;
              OOC_AST__Node expr;
              OOC_AST__Node scolon;

              i0 = level;
              i0 = (OOC_INT32)OOC_Parser__Module_IdentDef(i0, 1u, 0u, (void*)(OOC_INT32)&dummy);
              identDef = (OOC_AST__Node)i0;
              i1 = (OOC_INT32)OOC_Parser__Module_Flags(4);
              flags = (OOC_AST__Node)i1;
              i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(9);
              equal = (OOC_AST__Node)i2;
              i3 = (OOC_INT32)OOC_Parser__Module_Expr();
              expr = (OOC_AST__Node)i3;
              i4 = (OOC_INT32)OOC_Parser__Module_CheckSym(46);
              scolon = (OOC_AST__Node)i4;
              i5 = (OOC_INT32)ast;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 40395)))), OOC_AST__BuilderDesc_ConstDecl)),OOC_AST__BuilderDesc_ConstDecl)((OOC_AST__Builder)i5, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3, (OOC_AST__Node)i4);
              return (OOC_AST__Node)i0;
              ;
            }

            
            OOC_AST__Node OOC_Parser__Module_Body_DeclSeq_TypeDecl(void) {
              register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
              OOC_AST__Node identDef;
              OOC_Scanner_InputBuffer__CharArray dummy;
              OOC_AST__Node flags;
              OOC_AST__Node typePars;
              OOC_AST__Node equal;
              OOC_AST__Node type;
              OOC_AST__Node scolon;

              i0 = level;
              i0 = (OOC_INT32)OOC_Parser__Module_IdentDef(i0, 1u, 0u, (void*)(OOC_INT32)&dummy);
              identDef = (OOC_AST__Node)i0;
              i1 = (OOC_INT32)OOC_Parser__Module_Flags(5);
              flags = (OOC_AST__Node)i1;
              i2 = (OOC_INT32)sym;
              i2 = *(OOC_INT8*)((_check_pointer(i2, 40859))+4);
              i2 = i2==32;
              if (i2) goto l3;
              i2=0u;
              goto l5;
l3:
              i2 = parseOptions;
              i2 = _in(4,i2);
              
l5:
              if (i2) goto l7;
              typePars = (OOC_AST__Node)(OOC_INT32)0;
              i2=(OOC_INT32)0;
              goto l8;
l7:
              i2 = (OOC_INT32)OOC_Parser__Module_TypePars();
              typePars = (OOC_AST__Node)i2;
              
l8:
              i3 = (OOC_INT32)OOC_Parser__Module_CheckSym(9);
              equal = (OOC_AST__Node)i3;
              i4 = level;
              i4 = (OOC_INT32)OOC_Parser__Module_Type(i4);
              type = (OOC_AST__Node)i4;
              i5 = (OOC_INT32)OOC_Parser__Module_CheckSym(46);
              scolon = (OOC_AST__Node)i5;
              i6 = (OOC_INT32)ast;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 41160)))), OOC_AST__BuilderDesc_TypeDecl)),OOC_AST__BuilderDesc_TypeDecl)((OOC_AST__Builder)i6, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3, (OOC_AST__Node)i4, (OOC_AST__Node)i5);
              return (OOC_AST__Node)i0;
              ;
            }

            
            OOC_AST__Node OOC_Parser__Module_Body_DeclSeq_VarDecl(void) {
              register OOC_INT32 i0,i1,i2,i3,i4;
              OOC_AST__NodeList identList;
              OOC_Scanner_InputBuffer__CharArray dummy;
              OOC_AST__Node colon;
              OOC_AST__Node type;
              OOC_AST__Node scolon;

              i0 = (OOC_INT32)ast;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41576)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
              identList = (OOC_AST__NodeList)i0;
l1_loop:
              i1 = level;
              i1 = (OOC_INT32)OOC_Parser__Module_IdentDef(i1, 0u, 0u, (void*)(OOC_INT32)&dummy);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41629)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
              i1 = (OOC_INT32)OOC_Parser__Module_Flags(6);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41700)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
              i1 = (OOC_INT32)sym;
              i2 = *(OOC_INT8*)((_check_pointer(i1, 41757))+4);
              i2 = i2==19;
              if (!i2) goto l3;
              goto l8;
l3:
              i2 = *(OOC_INT8*)((_check_pointer(i1, 41863))+4);
              i2 = i2==45;
              if (!i2) goto l10;
              OOC_Parser__Module_Err(4, (OOC_Scanner_BasicList__Symbol)i1);
              goto l1_loop;
l8:
              i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 41806)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
              goto l1_loop;
l10:
              i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(20);
              colon = (OOC_AST__Node)i1;
              i2 = level;
              i2 = (OOC_INT32)OOC_Parser__Module_Type(i2);
              type = (OOC_AST__Node)i2;
              i3 = (OOC_INT32)OOC_Parser__Module_CheckSym(46);
              scolon = (OOC_AST__Node)i3;
              i4 = (OOC_INT32)ast;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 42138)))), OOC_AST__BuilderDesc_VarDecl)),OOC_AST__BuilderDesc_VarDecl)((OOC_AST__Builder)i4, (OOC_AST__NodeList)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3);
              return (OOC_AST__Node)i0;
              ;
            }

            
            OOC_AST__Node OOC_Parser__Module_Body_DeclSeq_ProcDecl(void) {
              register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
              OOC_AST__Node proc;
              OOC_AST__Node arrow;
              OOC_AST__Node receiver;
              OOC_AST__Node flags;
              OOC_AST__Node identDef;
              OOC_Scanner_InputBuffer__CharArray procName;
              OOC_AST__Node formalPars;
              OOC_AST__Node semicolon1;
              OOC_AST__Node body;
              OOC_AST__Node semicolon2;
              auto OOC_AST__Node OOC_Parser__Module_Body_DeclSeq_ProcDecl_Receiver(void);
                
                OOC_AST__Node OOC_Parser__Module_Body_DeclSeq_ProcDecl_Receiver(void) {
                  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
                  OOC_AST__Node lParen;
                  OOC_AST__Node var;
                  OOC_AST__Node ident;
                  OOC_Scanner_InputBuffer__CharArray dummy;
                  OOC_AST__Node colon;
                  OOC_AST__Node type;
                  OOC_AST__Node lParenAlias;
                  OOC_AST__NodeList aliasList;
                  OOC_AST__Node rParenAlias;
                  OOC_AST__Node rParen;
                  auto void OOC_Parser__Module_Body_DeclSeq_ProcDecl_Receiver_AliasList(OOC_AST__Node *lParen, OOC_AST__NodeList *aliasList, OOC_AST__Node *rParen);
                    
                    void OOC_Parser__Module_Body_DeclSeq_ProcDecl_Receiver_AliasList(OOC_AST__Node *lParen, OOC_AST__NodeList *aliasList, OOC_AST__Node *rParen) {
                      register OOC_INT32 i0,i1;

                      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(32);
                      *lParen = (OOC_AST__Node)i0;
                      i0 = (OOC_INT32)ast;
                      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42920)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
                      *aliasList = (OOC_AST__NodeList)i0;
                      i1 = (OOC_INT32)sym;
                      i1 = *(OOC_INT8*)((_check_pointer(i1, 42957))+4);
                      i1 = i1==45;
                      if (!i1) goto l9;
l3_loop:
                      i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
                      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43030)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                      i1 = (OOC_INT32)sym;
                      i1 = *(OOC_INT8*)((_check_pointer(i1, 43088))+4);
                      i1 = i1==19;
                      if (!i1) goto l9;
                      i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
                      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 43142)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                      goto l3_loop;
l9:
                      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(22);
                      *rParen = (OOC_AST__Node)i0;
                      return;
                      ;
                    }


                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(32);
                  lParen = (OOC_AST__Node)i0;
                  i0 = (OOC_INT32)sym;
                  i0 = *(OOC_INT8*)((_check_pointer(i0, 43594))+4);
                  i0 = i0==68;
                  if (i0) goto l3;
                  var = (OOC_AST__Node)(OOC_INT32)0;
                  
                  goto l4;
l3:
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(68);
                  var = (OOC_AST__Node)i0;
                  
l4:
                  i0 = (OOC_INT32)OOC_Parser__Module_IdentDef(0, 0u, 1u, (void*)(OOC_INT32)&dummy);
                  ident = (OOC_AST__Node)i0;
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(20);
                  colon = (OOC_AST__Node)i0;
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
                  type = (OOC_AST__Node)i0;
                  i0 = (OOC_INT32)sym;
                  i0 = *(OOC_INT8*)((_check_pointer(i0, 43898))+4);
                  i0 = i0==32;
                  if (i0) goto l7;
                  lParenAlias = (OOC_AST__Node)(OOC_INT32)0;
                  aliasList = (OOC_AST__NodeList)(OOC_INT32)0;
                  rParenAlias = (OOC_AST__Node)(OOC_INT32)0;
                  goto l8;
l7:
                  OOC_Parser__Module_Body_DeclSeq_ProcDecl_Receiver_AliasList((void*)(OOC_INT32)&lParenAlias, (void*)(OOC_INT32)&aliasList, (void*)(OOC_INT32)&rParenAlias);
l8:
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(22);
                  rParen = (OOC_AST__Node)i0;
                  i1 = (OOC_INT32)ast;
                  i2 = (OOC_INT32)lParenAlias;
                  i3 = (OOC_INT32)aliasList;
                  i4 = (OOC_INT32)rParenAlias;
                  i5 = (OOC_INT32)lParen;
                  i6 = (OOC_INT32)var;
                  i7 = (OOC_INT32)ident;
                  i8 = (OOC_INT32)colon;
                  i9 = (OOC_INT32)type;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 44203)))), OOC_AST__BuilderDesc_Receiver)),OOC_AST__BuilderDesc_Receiver)((OOC_AST__Builder)i1, (OOC_AST__Node)i5, (OOC_AST__Node)i6, (OOC_AST__Node)i7, (OOC_AST__Node)i8, (OOC_AST__Node)i9, (OOC_AST__Node)i2, (OOC_AST__NodeList)i3, (OOC_AST__Node)i4, (OOC_AST__Node)i0);
                  return (OOC_AST__Node)i0;
                  ;
                }


              i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(69);
              proc = (OOC_AST__Node)i0;
              i0 = (OOC_INT32)sym;
              i0 = *(OOC_INT8*)((_check_pointer(i0, 44608))+4);
              i0 = i0==17;
              if (i0) goto l3;
              arrow = (OOC_AST__Node)(OOC_INT32)0;
              
              goto l4;
l3:
              i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(17);
              arrow = (OOC_AST__Node)i0;
              
l4:
              i0 = (OOC_INT32)sym;
              i1 = *(OOC_INT8*)((_check_pointer(i0, 44751))+4);
              i1 = i1==32;
              if (i1) goto l7;
              receiver = (OOC_AST__Node)(OOC_INT32)0;
              i0=(OOC_INT32)0;
              goto l11;
l7:
              i1 = level;
              i1 = i1!=0;
              if (!i1) goto l10;
              OOC_Parser__Module_Err(14, (OOC_Scanner_BasicList__Symbol)i0);
l10:
              i0 = (OOC_INT32)OOC_Parser__Module_Body_DeclSeq_ProcDecl_Receiver();
              receiver = (OOC_AST__Node)i0;
              
l11:
              i1 = (OOC_INT32)OOC_Parser__Module_Flags(9);
              flags = (OOC_AST__Node)i1;
              i2 = level;
              i2 = (OOC_INT32)OOC_Parser__Module_IdentDef(i2, 1u, 0u, (void*)(OOC_INT32)&procName);
              identDef = (OOC_AST__Node)i2;
              i3 = (OOC_INT32)OOC_Parser__Module_FormalPars();
              formalPars = (OOC_AST__Node)i3;
              i4 = (OOC_INT32)OOC_Parser__Module_CheckSym(46);
              semicolon1 = (OOC_AST__Node)i4;
              i5 = (OOC_INT32)arrow;
              i6 = i5==(OOC_INT32)0;
              if (i6) goto l14;
              i6=0u;
              goto l16;
l14:
              i6 = (OOC_INT32)ast;
              i7 = (OOC_INT32)moduleFlags;
              i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 45170)))), OOC_AST__BuilderDesc_ProcWithoutBody)),OOC_AST__BuilderDesc_ProcWithoutBody)((OOC_AST__Builder)i6, (OOC_AST__Node)i7, (OOC_AST__Node)i1);
              i6 = !i6;
              
l16:
              if (i6) goto l18;
              body = (OOC_AST__Node)(OOC_INT32)0;
              semicolon2 = (OOC_AST__Node)(OOC_INT32)0;
              i6=(OOC_INT32)0;i7=(OOC_INT32)0;
              goto l19;
l18:
              i6 = level;
              i7 = (OOC_INT32)procName;
              i6 = (OOC_INT32)OOC_Parser__Module_Body((i6+1), (OOC_Scanner_InputBuffer__CharArray)i7);
              body = (OOC_AST__Node)i6;
              i7 = (OOC_INT32)OOC_Parser__Module_CheckSym(46);
              semicolon2 = (OOC_AST__Node)i7;
              
l19:
              i8 = (OOC_INT32)ast;
              i9 = (OOC_INT32)proc;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 45419)))), OOC_AST__BuilderDesc_ProcDecl)),OOC_AST__BuilderDesc_ProcDecl)((OOC_AST__Builder)i8, (OOC_AST__Node)i9, (OOC_AST__Node)i5, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3, (OOC_AST__Node)i4, (OOC_AST__Node)i6, (OOC_AST__Node)i7);
              return (OOC_AST__Node)i0;
              ;
            }


          i0 = (OOC_INT32)ast;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45825)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
          nl = (OOC_AST__NodeList)i0;
l1_loop:
          i0 = (OOC_INT32)sym;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 45872))+4);
          i1 = i1==66;
          if (i1) goto l28;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 46096))+4);
          i1 = i1==67;
          if (i1) goto l18;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 46313))+4);
          i1 = i1==68;
          if (!i1) goto l38;
          i0 = (OOC_INT32)nl;
          i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(68);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46378)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 46434))+4);
          i0 = i0==45;
          if (!i0) goto l1_loop;
l11_loop:
          i0 = (OOC_INT32)nl;
          i1 = (OOC_INT32)OOC_Parser__Module_Body_DeclSeq_VarDecl();
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46474)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 46434))+4);
          i0 = i0==45;
          if (i0) goto l11_loop;
          goto l1_loop;
l18:
          i0 = (OOC_INT32)nl;
          i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(67);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46158)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 46215))+4);
          i0 = i0==45;
          if (!i0) goto l1_loop;
l21_loop:
          i0 = (OOC_INT32)nl;
          i1 = (OOC_INT32)OOC_Parser__Module_Body_DeclSeq_TypeDecl();
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46255)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 46215))+4);
          i0 = i0==45;
          if (i0) goto l21_loop;
          goto l1_loop;
l28:
          i0 = (OOC_INT32)nl;
          i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(66);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45939)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 45997))+4);
          i0 = i0==45;
          if (!i0) goto l1_loop;
l31_loop:
          i0 = (OOC_INT32)nl;
          i1 = (OOC_INT32)OOC_Parser__Module_Body_DeclSeq_ConstDecl();
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46037)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 45997))+4);
          i0 = i0==45;
          if (i0) goto l31_loop;
          goto l1_loop;
l38:
          i0 = *(OOC_INT8*)((_check_pointer(i0, 46639))+4);
          i0 = i0==69;
          if (!i0) goto l46;
l41_loop:
          i0 = (OOC_INT32)nl;
          i1 = (OOC_INT32)OOC_Parser__Module_Body_DeclSeq_ProcDecl();
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46679)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 46639))+4);
          i0 = i0==69;
          if (i0) goto l41_loop;
l46:
          i0 = (OOC_INT32)nl;
          return (OOC_AST__NodeList)i0;
          ;
        }

        
        OOC_AST__NodeList OOC_Parser__Module_Body_StatementSeq(void) {
          register OOC_INT32 i0,i1;
          OOC_AST__NodeList list;
          auto OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement(void);
            
            OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement(void) {
              register OOC_INT32 i0;
              auto OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_ProcCallOrAssignment(void);
              auto OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_IfStatm(void);
              auto OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_CaseStatm(void);
              auto OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_WhileStatm(void);
              auto OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_RepeatStatm(void);
              auto OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_ForStatm(void);
              auto OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_LoopStatm(void);
              auto OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_WithStatm(void);
              auto OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_ExitStatm(void);
              auto OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_ReturnStatm(void);
              auto OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_TryStatm(void);
                
                OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_ProcCallOrAssignment(void) {
                  register OOC_INT32 i0,i1,i2,i3;
                  OOC_AST__Node design;
                  OOC_AST__Node becomes;
                  OOC_AST__Node value;

                  i0 = (OOC_INT32)OOC_Parser__Module_Designator();
                  design = (OOC_AST__Node)i0;
                  i1 = (OOC_INT32)sym;
                  i1 = *(OOC_INT8*)((_check_pointer(i1, 47133))+4);
                  i1 = i1==36;
                  if (i1) goto l3;
                  i1 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47363)))), OOC_AST__BuilderDesc_ProcedureCall)),OOC_AST__BuilderDesc_ProcedureCall)((OOC_AST__Builder)i1, (OOC_AST__Node)i0);
                  return (OOC_AST__Node)i0;
                  goto l4;
l3:
                  i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(36);
                  becomes = (OOC_AST__Node)i1;
                  i2 = (OOC_INT32)OOC_Parser__Module_Expr();
                  value = (OOC_AST__Node)i2;
                  i3 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 47285)))), OOC_AST__BuilderDesc_Operator)),OOC_AST__BuilderDesc_Operator)((OOC_AST__Builder)i3, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2);
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 47268)))), OOC_AST__BuilderDesc_Assignment)),OOC_AST__BuilderDesc_Assignment)((OOC_AST__Builder)i3, (OOC_AST__Node)i0);
                  return (OOC_AST__Node)i0;
l4:
                  _failed_function(46899); return 0;
                  ;
                }

                
                OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_IfStatm(void) {
                  register OOC_INT32 i0,i1,i2,i3,i4;
                  OOC_AST__NodeList guardList;
                  OOC_AST__Node _else;
                  OOC_AST__NodeList elseStatmSeq;

                  i0 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47805)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
                  guardList = (OOC_AST__NodeList)i0;
                  i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(52);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47843)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
l1_loop:
                  i1 = (OOC_INT32)OOC_Parser__Module_Expr();
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47916)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                  i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(28);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47958)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                  i1 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq();
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48016)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                  i1 = (OOC_INT32)sym;
                  i2 = *(OOC_INT8*)((_check_pointer(i1, 48064))+4);
                  i2 = i2==50;
                  if (!i2) goto l6;
                  i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(50);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48115)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                  goto l1_loop;
l6:
                  i1 = *(OOC_INT8*)((_check_pointer(i1, 48244))+4);
                  i1 = i1==49;
                  if (i1) goto l9;
                  _else = (OOC_AST__Node)(OOC_INT32)0;
                  elseStatmSeq = (OOC_AST__NodeList)(OOC_INT32)0;
                  i1=(OOC_INT32)0;i2=(OOC_INT32)0;
                  goto l10;
l9:
                  i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(49);
                  _else = (OOC_AST__Node)i1;
                  i2 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq();
                  elseStatmSeq = (OOC_AST__NodeList)i2;
                  
l10:
                  i3 = (OOC_INT32)OOC_Parser__Module_CheckSym(48);
                  end = (OOC_AST__Node)i3;
                  i4 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 48519)))), OOC_AST__BuilderDesc_IfStatm)),OOC_AST__BuilderDesc_IfStatm)((OOC_AST__Builder)i4, (OOC_AST__NodeList)i0, (OOC_AST__Node)i1, (OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
                  return (OOC_AST__Node)i0;
                  ;
                }

                
                OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_CaseStatm(void) {
                  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
                  OOC_AST__Node _case;
                  OOC_AST__Node expr;
                  OOC_AST__Node of;
                  OOC_AST__NodeList caseList;
                  OOC_AST__Node _else;
                  OOC_AST__NodeList elseStatmSeq;
                  OOC_AST__Node end;
                  auto void OOC_Parser__Module_Body_StatementSeq_Statement_CaseStatm_Case(OOC_AST__NodeList caseList);
                    
                    void OOC_Parser__Module_Body_StatementSeq_Statement_CaseStatm_Case(OOC_AST__NodeList caseList) {
                      register OOC_INT32 i0,i1,i2,i3,i4;
                      OOC_AST__NodeList labels;
                      OOC_AST__Node startValue;
                      OOC_AST__Node upto;
                      OOC_AST__Node endValue;

                      i0 = (OOC_INT32)sym;
                      i0 = *(OOC_INT8*)((_check_pointer(i0, 49088))+4);
                      i0 = i0<47;
                      if (i0) goto l3;
                      i0 = (OOC_INT32)caseList;
                      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49934)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)(OOC_INT32)0);
                      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49974)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)(OOC_INT32)0);
                      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50014)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)(OOC_INT32)0);
                      goto l14;
l3:
                      i0 = (OOC_INT32)ast;
                      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49141)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
                      labels = (OOC_AST__NodeList)i0;
l4_loop:
                      i1 = (OOC_INT32)OOC_Parser__Module_Expr();
                      startValue = (OOC_AST__Node)i1;
                      i2 = (OOC_INT32)sym;
                      i2 = *(OOC_INT8*)((_check_pointer(i2, 49244))+4);
                      i2 = i2==21;
                      if (i2) goto l7;
                      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49490)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                      goto l8;
l7:
                      i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(21);
                      upto = (OOC_AST__Node)i2;
                      i3 = (OOC_INT32)OOC_Parser__Module_Expr();
                      endValue = (OOC_AST__Node)i3;
                      i4 = (OOC_INT32)ast;
                      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 49400)))), OOC_AST__BuilderDesc_Operator)),OOC_AST__BuilderDesc_Operator)((OOC_AST__Builder)i4, (OOC_AST__Node)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3);
                      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49387)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
l8:
                      i1 = (OOC_INT32)sym;
                      i1 = *(OOC_INT8*)((_check_pointer(i1, 49560))+4);
                      i1 = i1==19;
                      if (!i1) goto l13;
                      i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(19);
                      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49612)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                      goto l4_loop;
l13:
                      i1 = (OOC_INT32)caseList;
                      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49762)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i1, (OOC_AST__Node)i0);
                      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(20);
                      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49805)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i1, (OOC_AST__Node)i0);
                      i0 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq();
                      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49865)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i1, (OOC_AST__Node)i0);
l14:
                      return;
                      ;
                    }


                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(53);
                  _case = (OOC_AST__Node)i0;
                  i0 = (OOC_INT32)OOC_Parser__Module_Expr();
                  expr = (OOC_AST__Node)i0;
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(25);
                  of = (OOC_AST__Node)i0;
                  i0 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50360)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
                  caseList = (OOC_AST__NodeList)i0;
                  OOC_Parser__Module_Body_StatementSeq_Statement_CaseStatm_Case((OOC_AST__NodeList)i0);
                  i0 = (OOC_INT32)sym;
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 50427))+4);
                  i1 = i1==47;
                  if (!i1) goto l9;
l4_loop:
                  i0 = (OOC_INT32)caseList;
                  i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(47);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50471)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                  OOC_Parser__Module_Body_StatementSeq_Statement_CaseStatm_Case((OOC_AST__NodeList)i0);
                  i0 = (OOC_INT32)sym;
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 50427))+4);
                  i1 = i1==47;
                  if (i1) goto l4_loop;
l9:
                  i0 = *(OOC_INT8*)((_check_pointer(i0, 50571))+4);
                  i0 = i0==49;
                  if (i0) goto l12;
                  _else = (OOC_AST__Node)(OOC_INT32)0;
                  elseStatmSeq = (OOC_AST__NodeList)(OOC_INT32)0;
                  i0=(OOC_INT32)0;i1=(OOC_INT32)0;
                  goto l13;
l12:
                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(49);
                  _else = (OOC_AST__Node)i0;
                  i1 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq();
                  elseStatmSeq = (OOC_AST__NodeList)i1;
                  
l13:
                  i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(48);
                  end = (OOC_AST__Node)i2;
                  i3 = (OOC_INT32)ast;
                  i4 = (OOC_INT32)_case;
                  i5 = (OOC_INT32)expr;
                  i6 = (OOC_INT32)of;
                  i7 = (OOC_INT32)caseList;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 50846)))), OOC_AST__BuilderDesc_CaseStatm)),OOC_AST__BuilderDesc_CaseStatm)((OOC_AST__Builder)i3, (OOC_AST__Node)i4, (OOC_AST__Node)i5, (OOC_AST__Node)i6, (OOC_AST__NodeList)i7, (OOC_AST__Node)i0, (OOC_AST__NodeList)i1, (OOC_AST__Node)i2);
                  return (OOC_AST__Node)i0;
                  ;
                }

                
                OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_WhileStatm(void) {
                  register OOC_INT32 i0,i1,i2,i3,i4,i5;
                  OOC_AST__Node _while;
                  OOC_AST__Node guard;
                  OOC_AST__Node _do;
                  OOC_AST__NodeList statmSeq;
                  OOC_AST__Node end;

                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(54);
                  _while = (OOC_AST__Node)i0;
                  i1 = (OOC_INT32)OOC_Parser__Module_Expr();
                  guard = (OOC_AST__Node)i1;
                  i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(29);
                  _do = (OOC_AST__Node)i2;
                  i3 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq();
                  statmSeq = (OOC_AST__NodeList)i3;
                  i4 = (OOC_INT32)OOC_Parser__Module_CheckSym(48);
                  end = (OOC_AST__Node)i4;
                  i5 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 51425)))), OOC_AST__BuilderDesc_WhileStatm)),OOC_AST__BuilderDesc_WhileStatm)((OOC_AST__Builder)i5, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2, (OOC_AST__NodeList)i3, (OOC_AST__Node)i4);
                  return (OOC_AST__Node)i0;
                  ;
                }

                
                OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_RepeatStatm(void) {
                  register OOC_INT32 i0,i1,i2,i3,i4;
                  OOC_AST__Node repeat;
                  OOC_AST__NodeList statmSeq;
                  OOC_AST__Node until;
                  OOC_AST__Node expr;

                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(55);
                  repeat = (OOC_AST__Node)i0;
                  i1 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq();
                  statmSeq = (OOC_AST__NodeList)i1;
                  i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(51);
                  until = (OOC_AST__Node)i2;
                  i3 = (OOC_INT32)OOC_Parser__Module_Expr();
                  expr = (OOC_AST__Node)i3;
                  i4 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 51915)))), OOC_AST__BuilderDesc_RepeatStatm)),OOC_AST__BuilderDesc_RepeatStatm)((OOC_AST__Builder)i4, (OOC_AST__Node)i0, (OOC_AST__NodeList)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3);
                  return (OOC_AST__Node)i0;
                  ;
                }

                
                OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_ForStatm(void) {
                  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
                  OOC_AST__Node _for;
                  OOC_AST__Node ident;
                  OOC_AST__Node becomes;
                  OOC_AST__Node startValue;
                  OOC_AST__Node to;
                  OOC_AST__Node endValue;
                  OOC_AST__Node by;
                  OOC_AST__Node step;
                  OOC_AST__Node _do;
                  OOC_AST__NodeList statmSeq;
                  OOC_AST__Node end;

                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(57);
                  _for = (OOC_AST__Node)i0;
                  i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(45);
                  ident = (OOC_AST__Node)i1;
                  i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(36);
                  becomes = (OOC_AST__Node)i2;
                  i3 = (OOC_INT32)OOC_Parser__Module_Expr();
                  startValue = (OOC_AST__Node)i3;
                  i4 = (OOC_INT32)OOC_Parser__Module_CheckSym(30);
                  to = (OOC_AST__Node)i4;
                  i5 = (OOC_INT32)OOC_Parser__Module_Expr();
                  endValue = (OOC_AST__Node)i5;
                  i6 = (OOC_INT32)sym;
                  i6 = *(OOC_INT8*)((_check_pointer(i6, 52598))+4);
                  i6 = i6==31;
                  if (i6) goto l3;
                  by = (OOC_AST__Node)(OOC_INT32)0;
                  step = (OOC_AST__Node)(OOC_INT32)0;
                  i6=(OOC_INT32)0;i7=(OOC_INT32)0;
                  goto l4;
l3:
                  i6 = (OOC_INT32)OOC_Parser__Module_CheckSym(31);
                  by = (OOC_AST__Node)i6;
                  i7 = (OOC_INT32)OOC_Parser__Module_Expr();
                  step = (OOC_AST__Node)i7;
                  
l4:
                  i8 = (OOC_INT32)OOC_Parser__Module_CheckSym(29);
                  _do = (OOC_AST__Node)i8;
                  i9 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq();
                  statmSeq = (OOC_AST__NodeList)i9;
                  i10 = (OOC_INT32)OOC_Parser__Module_CheckSym(48);
                  end = (OOC_AST__Node)i10;
                  i11 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 52921)))), OOC_AST__BuilderDesc_ForStatm)),OOC_AST__BuilderDesc_ForStatm)((OOC_AST__Builder)i11, (OOC_AST__Node)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3, (OOC_AST__Node)i4, (OOC_AST__Node)i5, (OOC_AST__Node)i6, (OOC_AST__Node)i7, (OOC_AST__Node)i8, (OOC_AST__NodeList)i9, (OOC_AST__Node)i10);
                  return (OOC_AST__Node)i0;
                  ;
                }

                
                OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_LoopStatm(void) {
                  register OOC_INT32 i0,i1,i2,i3;
                  OOC_AST__Node loop;
                  OOC_AST__NodeList statmSeq;
                  OOC_AST__Node end;

                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(56);
                  loop = (OOC_AST__Node)i0;
                  i1 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq();
                  statmSeq = (OOC_AST__NodeList)i1;
                  i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(48);
                  end = (OOC_AST__Node)i2;
                  i3 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 53426)))), OOC_AST__BuilderDesc_LoopStatm)),OOC_AST__BuilderDesc_LoopStatm)((OOC_AST__Builder)i3, (OOC_AST__Node)i0, (OOC_AST__NodeList)i1, (OOC_AST__Node)i2);
                  return (OOC_AST__Node)i0;
                  ;
                }

                
                OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_WithStatm(void) {
                  register OOC_INT32 i0,i1,i2,i3,i4;
                  OOC_AST__NodeList guardList;
                  OOC_AST__Node var;
                  OOC_AST__Node colon;
                  OOC_AST__Node type;
                  OOC_AST__Node _else;
                  OOC_AST__NodeList elseStatmSeq;
                  OOC_AST__Node end;

                  i0 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53878)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
                  guardList = (OOC_AST__NodeList)i0;
                  i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(58);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53916)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
l1_loop:
                  i1 = (OOC_INT32)OOC_Parser__Module_Qualident();
                  var = (OOC_AST__Node)i1;
                  i2 = (OOC_INT32)OOC_Parser__Module_CheckSym(20);
                  colon = (OOC_AST__Node)i2;
                  i3 = (OOC_INT32)OOC_Parser__Module_QualType();
                  type = (OOC_AST__Node)i3;
                  i4 = (OOC_INT32)ast;
                  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 54120)))), OOC_AST__BuilderDesc_Operator)),OOC_AST__BuilderDesc_Operator)((OOC_AST__Builder)i4, (OOC_AST__Node)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54107)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                  i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(29);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54175)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                  i1 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq();
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54231)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                  i1 = (OOC_INT32)sym;
                  i2 = *(OOC_INT8*)((_check_pointer(i1, 54279))+4);
                  i2 = i2==47;
                  if (!i2) goto l6;
                  i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(47);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54328)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
                  goto l1_loop;
l6:
                  i1 = *(OOC_INT8*)((_check_pointer(i1, 54455))+4);
                  i1 = i1==49;
                  if (i1) goto l9;
                  _else = (OOC_AST__Node)(OOC_INT32)0;
                  elseStatmSeq = (OOC_AST__NodeList)(OOC_INT32)0;
                  i1=(OOC_INT32)0;i2=(OOC_INT32)0;
                  goto l10;
l9:
                  i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(49);
                  _else = (OOC_AST__Node)i1;
                  i2 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq();
                  elseStatmSeq = (OOC_AST__NodeList)i2;
                  
l10:
                  i3 = (OOC_INT32)OOC_Parser__Module_CheckSym(48);
                  end = (OOC_AST__Node)i3;
                  i4 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 54730)))), OOC_AST__BuilderDesc_WithStatm)),OOC_AST__BuilderDesc_WithStatm)((OOC_AST__Builder)i4, (OOC_AST__NodeList)i0, (OOC_AST__Node)i1, (OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
                  return (OOC_AST__Node)i0;
                  ;
                }

                
                OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_ExitStatm(void) {
                  register OOC_INT32 i0,i1;
                  OOC_AST__Node exit;

                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(60);
                  exit = (OOC_AST__Node)i0;
                  i1 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 55020)))), OOC_AST__BuilderDesc_ExitStatm)),OOC_AST__BuilderDesc_ExitStatm)((OOC_AST__Builder)i1, (OOC_AST__Node)i0);
                  return (OOC_AST__Node)i0;
                  ;
                }

                
                OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_ReturnStatm(void) {
                  register OOC_INT32 i0,i1,i2;
                  OOC_AST__Node _return;
                  OOC_AST__Node expr;

                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(61);
                  _return = (OOC_AST__Node)i0;
                  i1 = (OOC_INT32)sym;
                  i1 = *(OOC_INT8*)((_check_pointer(i1, 55302))+4);
                  i1 = i1<46;
                  if (i1) goto l3;
                  expr = (OOC_AST__Node)(OOC_INT32)0;
                  i1=(OOC_INT32)0;
                  goto l4;
l3:
                  i1 = (OOC_INT32)OOC_Parser__Module_Expr();
                  expr = (OOC_AST__Node)i1;
                  
l4:
                  i2 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 55443)))), OOC_AST__BuilderDesc_ReturnStatm)),OOC_AST__BuilderDesc_ReturnStatm)((OOC_AST__Builder)i2, (OOC_AST__Node)i0, (OOC_AST__Node)i1);
                  return (OOC_AST__Node)i0;
                  ;
                }

                
                OOC_AST__Node OOC_Parser__Module_Body_StatementSeq_Statement_TryStatm(void) {
                  register OOC_INT32 i0,i1,i2,i3,i4;
                  OOC_AST__Node _try;
                  OOC_AST__NodeList statmSeq;
                  OOC_AST__NodeList catchList;
                  OOC_AST__Node end;

                  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(59);
                  _try = (OOC_AST__Node)i0;
                  i1 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq();
                  statmSeq = (OOC_AST__NodeList)i1;
                  i2 = (OOC_INT32)ast;
                  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 55934)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i2);
                  catchList = (OOC_AST__NodeList)i2;
                  i3 = (OOC_INT32)sym;
                  i3 = *(OOC_INT8*)((_check_pointer(i3, 55972))+4);
                  i3 = i3==26;
                  if (!i3) goto l8;
l3_loop:
                  i3 = (OOC_INT32)OOC_Parser__Module_CheckSym(26);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 56018)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
                  i3 = (OOC_INT32)OOC_Parser__Module_Qualident();
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 56074)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
                  i3 = (OOC_INT32)OOC_Parser__Module_CheckSym(20);
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 56119)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
                  i3 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq();
                  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 56175)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
                  i3 = (OOC_INT32)sym;
                  i3 = *(OOC_INT8*)((_check_pointer(i3, 55972))+4);
                  i3 = i3==26;
                  if (i3) goto l3_loop;
l8:
                  i3 = (OOC_INT32)OOC_Parser__Module_CheckSym(48);
                  end = (OOC_AST__Node)i3;
                  i4 = (OOC_INT32)ast;
                  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 56280)))), OOC_AST__BuilderDesc_TryStatm)),OOC_AST__BuilderDesc_TryStatm)((OOC_AST__Builder)i4, (OOC_AST__Node)i0, (OOC_AST__NodeList)i1, (OOC_AST__NodeList)i2, (OOC_AST__Node)i3);
                  return (OOC_AST__Node)i0;
                  ;
                }


              i0 = (OOC_INT32)sym;
              i0 = *(OOC_INT8*)((_check_pointer(i0, 56612))+4);
              switch (i0) {
              case 45:
                i0 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq_Statement_ProcCallOrAssignment();
                return (OOC_AST__Node)i0;
                goto l14;
              case 52:
                i0 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq_Statement_IfStatm();
                return (OOC_AST__Node)i0;
                goto l14;
              case 53:
                i0 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq_Statement_CaseStatm();
                return (OOC_AST__Node)i0;
                goto l14;
              case 54:
                i0 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq_Statement_WhileStatm();
                return (OOC_AST__Node)i0;
                goto l14;
              case 55:
                i0 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq_Statement_RepeatStatm();
                return (OOC_AST__Node)i0;
                goto l14;
              case 57:
                i0 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq_Statement_ForStatm();
                return (OOC_AST__Node)i0;
                goto l14;
              case 56:
                i0 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq_Statement_LoopStatm();
                return (OOC_AST__Node)i0;
                goto l14;
              case 58:
                i0 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq_Statement_WithStatm();
                return (OOC_AST__Node)i0;
                goto l14;
              case 60:
                i0 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq_Statement_ExitStatm();
                return (OOC_AST__Node)i0;
                goto l14;
              case 61:
                i0 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq_Statement_ReturnStatm();
                return (OOC_AST__Node)i0;
                goto l14;
              case 59:
                i0 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq_Statement_TryStatm();
                return (OOC_AST__Node)i0;
                goto l14;
              default:
                return (OOC_AST__Node)(OOC_INT32)0;
                goto l14;
              }
l14:
              _failed_function(46857); return 0;
              ;
            }


          i0 = (OOC_INT32)ast;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57422)))), OOC_AST__BuilderDesc_NewNodeList)),OOC_AST__BuilderDesc_NewNodeList)((OOC_AST__Builder)i0);
          list = (OOC_AST__NodeList)i0;
          i1 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq_Statement();
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57451)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 57493))+4);
          i0 = i0==46;
          if (!i0) goto l8;
l3_loop:
          i0 = (OOC_INT32)list;
          i1 = (OOC_INT32)OOC_Parser__Module_CheckSym(46);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57535)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          i1 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq_Statement();
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 57589)))), OOC_AST__NodeListDesc_Append)),OOC_AST__NodeListDesc_Append)((OOC_AST__NodeList)i0, (OOC_AST__Node)i1);
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 57493))+4);
          i0 = i0==46;
          if (i0) goto l3_loop;
l8:
          i0 = (OOC_INT32)list;
          return (OOC_AST__NodeList)i0;
          ;
        }

        
        void OOC_Parser__Module_Body_CheckName(OOC_Scanner_BasicList__Symbol sym, OOC_Scanner_InputBuffer__CharArray head, OOC_Scanner_InputBuffer__CharArray tail) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)errList;
          i0 = *(OOC_INT32*)(_check_pointer(i0, 57776));
          i0 = i0==0;
          if (i0) goto l3;
          i0=0u;
          goto l5;
l3:
          i0 = (OOC_INT32)head;
          i1 = (OOC_INT32)tail;
          i0 = (
          _cmp8((const void*)(_check_pointer(i0, 57799)),(const void*)(_check_pointer(i1, 57807))))!=0;
          
l5:
          if (!i0) goto l7;
          i0 = (OOC_INT32)sym;
          OOC_Parser__Module_Err(5, (OOC_Scanner_BasicList__Symbol)i0);
          i0 = (OOC_INT32)head;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 57889)), 0);
          OOC_Parser__Module_ErrStringAttrib("name", 5, (void*)(_check_pointer(i0, 57889)), i1);
l7:
          return;
          ;
        }


      i0 = (OOC_INT32)OOC_Parser__Module_Body_DeclSeq();
      declSeq = (OOC_AST__NodeList)i0;
      i0 = (OOC_INT32)sym;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 58050))+4);
      i0 = i0==65;
      if (i0) goto l3;
      begin = (OOC_AST__Node)(OOC_INT32)0;
      statmSeq = (OOC_AST__NodeList)(OOC_INT32)0;
      goto l4;
l3:
      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(65);
      begin = (OOC_AST__Node)i0;
      i0 = (OOC_INT32)OOC_Parser__Module_Body_StatementSeq();
      statmSeq = (OOC_AST__NodeList)i0;
l4:
      i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(48);
      end = (OOC_AST__Node)i0;
      i0 = (OOC_INT32)sym;
      ptr = (OOC_Scanner_BasicList__Symbol)i0;
      i1 = (OOC_INT32)OOC_Parser__Module_MultiPartIdent((void*)(OOC_INT32)&tailName);
      name = (OOC_AST__Node)i1;
      i1 = (OOC_INT32)headName;
      i2 = (OOC_INT32)tailName;
      OOC_Parser__Module_Body_CheckName((OOC_Scanner_BasicList__Symbol)i0, (OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i2);
      i0 = (OOC_INT32)ast;
      i1 = (OOC_INT32)declSeq;
      i2 = (OOC_INT32)begin;
      i3 = (OOC_INT32)statmSeq;
      i4 = (OOC_INT32)end;
      i5 = (OOC_INT32)name;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 58375)))), OOC_AST__BuilderDesc_Body)),OOC_AST__BuilderDesc_Body)((OOC_AST__Builder)i0, (OOC_AST__NodeList)i1, (OOC_AST__Node)i2, (OOC_AST__NodeList)i3, (OOC_AST__Node)i4, (OOC_AST__Node)i5);
      return (OOC_AST__Node)i0;
      ;
    }


  lastError = (Msg__Msg)(OOC_INT32)0;
  prevSym = (OOC_Scanner_BasicList__Symbol)(OOC_INT32)0;
  lastIdentDef = (OOC_AST__Node)(OOC_INT32)0;
  i0 = (OOC_INT32)sym;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 58526))+4);
  i1 = i1==78;
  if (!i1) goto l8;
l3_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58571));
  sym = (OOC_Scanner_BasicList__Symbol)i0;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 58526))+4);
  i1 = i1==78;
  if (i1) goto l3_loop;
l8:
  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(71);
  module = (OOC_AST__Node)i0;
  i0 = (OOC_INT32)sym;
  nameSym = (OOC_Scanner_BasicList__Symbol)i0;
  i0 = (OOC_INT32)OOC_Parser__Module_MultiPartIdent((void*)(OOC_INT32)&headName);
  name = (OOC_AST__Node)i0;
  i0 = (OOC_INT32)ast;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58775));
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l11;
  i0=0u;
  goto l13;
l11:
  i1 = (OOC_INT32)headName;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58828));
  i0 = (
  _cmp8((const void*)(_check_pointer(i1, 58821)),(const void*)(_check_pointer(i0, 58848))))!=0;
  
l13:
  if (!i0) goto l15;
  i0 = (OOC_INT32)nameSym;
  OOC_Parser__Module_Err(19, (OOC_Scanner_BasicList__Symbol)i0);
  i0 = (OOC_INT32)ast;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58929));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58929));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 58949)), 0);
  OOC_Parser__Module_ErrStringAttrib("name", 5, (void*)(_check_pointer(i1, 58949)), i0);
l15:
  i0 = (OOC_INT32)name;
  lastIdentDef = (OOC_AST__Node)i0;
  i0 = (OOC_INT32)OOC_Parser__Module_Flags(10);
  moduleFlags = (OOC_AST__Node)i0;
  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(46);
  scolon = (OOC_AST__Node)i0;
  i0 = (OOC_INT32)sym;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 59090))+4);
  i0 = i0==70;
  if (i0) goto l18;
  import = (OOC_AST__Node)(OOC_INT32)0;
  
  goto l19;
l18:
  i0 = (OOC_INT32)headName;
  i0 = (OOC_INT32)OOC_Parser__Module_ImportList((OOC_Scanner_InputBuffer__CharArray)i0);
  import = (OOC_AST__Node)i0;
  
l19:
  i0 = parseOptions;
  i0 = !(_in(5,i0));
  if (i0) goto l22;
  body = (OOC_AST__Node)(OOC_INT32)0;
  period = (OOC_AST__Node)(OOC_INT32)0;
  goto l23;
l22:
  i0 = (OOC_INT32)headName;
  i0 = (OOC_INT32)OOC_Parser__Module_Body(0, (OOC_Scanner_InputBuffer__CharArray)i0);
  body = (OOC_AST__Node)i0;
  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(18);
  period = (OOC_AST__Node)i0;
  i0 = (OOC_INT32)OOC_Parser__Module_CheckSym(72);
  eof = (OOC_AST__Node)i0;
l23:
  i0 = (OOC_INT32)ast;
  i1 = (OOC_INT32)module;
  i2 = (OOC_INT32)name;
  i3 = (OOC_INT32)moduleFlags;
  i4 = (OOC_INT32)scolon;
  i5 = (OOC_INT32)import;
  i6 = (OOC_INT32)body;
  i7 = (OOC_INT32)period;
  i8 = (OOC_INT32)headName;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59428)))), OOC_AST__BuilderDesc_Module)),OOC_AST__BuilderDesc_Module)((OOC_AST__Builder)i0, (OOC_AST__Node)i1, (OOC_AST__Node)i2, (OOC_AST__Node)i3, (OOC_AST__Node)i4, (OOC_AST__Node)i5, (OOC_AST__Node)i6, (OOC_AST__Node)i7, (OOC_Scanner_InputBuffer__CharArray)i8);
  return (OOC_AST__Node)i0;
  ;
}

void OOC_OOC_Parser_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Parser__ErrorContext.baseTypes[0]);
  OOC_Parser__parserContext = (OOC_Parser__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:Parser", 11);
  return;
  ;
}

/* --- */
