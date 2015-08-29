#include <OOC/Scanner/Pragma.d>
#include <__oo2c.h>

void OOC_Scanner_Pragma__ErrorContextDesc_GetTemplate(OOC_Scanner_Pragma__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3212))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){80,114,97,103,109,97,32,115,116,97,114,116,32,100,101,108,105,109,105,116,101,114,32,119,105,116,104,105,110,32,112,114,97,103,109,97,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){80,114,97,103,109,97,32,110,111,116,32,99,108,111,115,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,107,101,121,119,111,114,100,32,96,36,123,115,121,109,95,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,115,121,109,98,111,108,32,96,36,123,115,121,109,95,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,105,100,101,110,116,105,102,105,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){73,108,108,101,103,97,108,32,118,97,114,105,97,98,108,101,32,110,97,109,101,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 7:
    _copy_16((const void*)((OOC_CHAR16[]){85,110,100,101,102,105,110,101,100,32,112,114,97,103,109,97,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 8:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,118,97,108,105,100,32,111,112,101,114,97,110,100,115,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 10:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,98,111,111,108,101,97,110,32,101,120,112,114,101,115,115,105,111,110,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 11:
    _copy_16((const void*)((OOC_CHAR16[]){78,111,32,111,112,101,110,32,96,73,70,39,32,115,116,97,116,101,109,101,110,116,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 12:
    _copy_16((const void*)((OOC_CHAR16[]){96,73,70,39,32,115,116,97,116,101,109,101,110,116,32,108,97,99,107,115,32,96,69,78,68,39,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 13:
    _copy_16((const void*)((OOC_CHAR16[]){96,69,76,83,69,39,32,112,97,114,116,32,97,108,114,101,97,100,121,32,100,101,102,105,110,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 14:
    _copy_16((const void*)((OOC_CHAR16[]){80,114,97,103,109,97,32,118,97,114,105,97,98,108,101,32,97,108,114,101,97,100,121,32,100,101,102,105,110,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 15:
    _copy_16((const void*)((OOC_CHAR16[]){86,97,108,117,101,32,110,111,116,32,97,115,115,105,103,110,109,101,110,116,32,99,111,109,112,97,116,105,98,108,101,32,116,111,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 16:
    _copy_16((const void*)((OOC_CHAR16[]){78,111,32,118,97,108,117,101,115,32,115,116,111,114,101,100,32,111,110,32,112,114,97,103,109,97,32,115,116,97,99,107,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  default:
    _failed_case(i1, 3204);
    goto l18;
  }
l18:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4200)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

void OOC_Scanner_Pragma__Init(struct OOC_Scanner_Pragma__State *state, RT0__Struct state__tag, OOC_Scanner_Builder__Builder builder, OOC_Config_Pragmas__Section defaultPragmas) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)builder;
  *(OOC_INT32*)((OOC_INT32)state+4) = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5010));
  *(OOC_INT32*)(OOC_INT32)state = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5069));
  i0 = (OOC_INT32)OOC_Scanner_Builder_BasicList__New((OOC_Scanner_InputBuffer__Buffer)i0, OOC_FALSE);
  *(OOC_INT32*)((OOC_INT32)state+16) = i0;
  *(OOC_INT32*)((OOC_INT32)state+8) = (OOC_INT32)0;
  *(OOC_UINT8*)((OOC_INT32)state+12) = OOC_TRUE;
  i0 = (OOC_INT32)defaultPragmas;
  i0 = (OOC_INT32)OOC_Config_Pragmas__NewHistory((OOC_Config_Pragmas__Section)i0);
  *(OOC_INT32*)((OOC_INT32)state+36) = i0;
  return;
  ;
}

static OOC_INT8 OOC_Scanner_Pragma__ParsePragma(struct OOC_Scanner_Pragma__State *state, RT0__Struct state__tag) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Msg__Msg lastError;
  OOC_Scanner_Builder_BasicList__Symbol prevSym;
  OOC_Scanner_Builder_BasicList__Symbol sym;
  OOC_CHAR8 nested;
  OOC_CHAR8 dummy;
  OOC_CHAR8 err;
  auto void OOC_Scanner_Pragma__ParsePragma_AppendErr(OOC_Scanner_Builder_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__ParsePragma_Err(OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__ParsePragma_CheckName(OOC_Scanner_Builder_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__ParsePragma_CheckBoolean(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag);
  auto void OOC_Scanner_Pragma__ParsePragma_NextSym();
  auto void OOC_Scanner_Pragma__ParsePragma_CheckSym(OOC_INT8 symId);
  auto OOC_CHAR8 OOC_Scanner_Pragma__ParsePragma_GetBool(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref);
  auto OOC_INT32 OOC_Scanner_Pragma__ParsePragma_GetInt(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref);
  auto Config_Value__StringPtr OOC_Scanner_Pragma__ParsePragma_GetString(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref);
  auto void OOC_Scanner_Pragma__ParsePragma_Expression(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag);
  auto OOC_CHAR8 OOC_Scanner_Pragma__ParsePragma_BoolExpression(OOC_CHAR8 eval);
  auto void OOC_Scanner_Pragma__ParsePragma_PushCond();
  auto void OOC_Scanner_Pragma__ParsePragma_PopCond();
  auto void OOC_Scanner_Pragma__ParsePragma_CheckForIf(OOC_CHAR8 noElse);
  auto void OOC_Scanner_Pragma__ParsePragma_Assignment(OOC_CHAR8 define, OOC_CHAR8 eval);
    
    void OOC_Scanner_Pragma__ParsePragma_AppendErr(OOC_Scanner_Builder_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 5629))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5603)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
      i0 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 5679))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5652)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 5732))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5703)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5762))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5762))+20);
      i2 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5771)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i2);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_Err(OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)OOC_Scanner_Pragma__pragmaContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i0 = (OOC_INT32)sym;
      OOC_Scanner_Pragma__ParsePragma_AppendErr((OOC_Scanner_Builder_BasicList__Symbol)i0);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_CheckName(OOC_Scanner_Builder_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1,i2;
      OOC_Scanner_InputBuffer__CharArray name;

      i0 = (OOC_INT32)sym;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6088))+8);
      name = (OOC_Scanner_InputBuffer__CharArray)i1;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6109)),(const void*)"TRUE"))==(OOC_INT32)0;
      if (i2) goto l3;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6129)),(const void*)"FALSE"))==(OOC_INT32)0;
      
      goto l5;
l3:
      i2=OOC_TRUE;
l5:
      if (i2) goto l7;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6150)),(const void*)"PUSH"))==(OOC_INT32)0;
      
      goto l9;
l7:
      i2=OOC_TRUE;
l9:
      if (i2) goto l11;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6180)),(const void*)"POP"))==(OOC_INT32)0;
      
      goto l13;
l11:
      i2=OOC_TRUE;
l13:
      if (i2) goto l15;
      i1 = (
      _cmp8((const void*)(_check_pointer(i1, 6199)),(const void*)"DEFINE"))==(OOC_INT32)0;
      
      goto l17;
l15:
      i1=OOC_TRUE;
l17:
      if (!i1) goto l19;
      OOC_Scanner_Pragma__ParsePragma_Err(6, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l19:
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_CheckBoolean(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6401)))), &_td_Config_Value_Boolean__ValueDesc));
      
l5:
      if (!i0) goto l10;
      i0 = eval;
      if (!i0) goto l9;
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)value+4);
      OOC_Scanner_Pragma__ParsePragma_Err(10, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l9:
      i0 = (OOC_INT32)Config_Value_Boolean__New(OOC_FALSE);
      *(OOC_INT32*)(OOC_INT32)value = i0;
l10:
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_NextSym() {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)sym;
      prevSym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6662));
      sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_CheckSym(OOC_INT8 symId) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)sym;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 6753))+4);
      i1 = symId;
      i0 = i0!=i1;
      if (!i0) goto l7;
      i0 = OOC_Scanner_Symbol__IsKeyword(i1);
      if (i0) goto l5;
      i0 = (OOC_INT32)sym;
      OOC_Scanner_Pragma__ParsePragma_Err(4, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l6;
l5:
      i0 = (OOC_INT32)sym;
      OOC_Scanner_Pragma__ParsePragma_Err(3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l6:
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(i1, 78, OOC_UINT8, 7027))*10)), 10);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6925)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "sym_name", 9, (Msg__StringPtr)i1);
l7:
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Scanner_Pragma__ParsePragma_GetBool(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(value,OOC_Scanner_Pragma__ParsePragma_Value ,1)

      OOC_INITIALIZE_VPAR(value__ref,value,OOC_Scanner_Pragma__ParsePragma_Value ,8)
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7184)))), &_td_Config_Value_Boolean__ValueDesc);
      
l5:
      if (i1) goto l7;
      return OOC_FALSE;
      goto l8;
l7:
      i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7253)))), &_td_Config_Value_Boolean__ValueDesc, 7253)), 7259));
      return i0;
l8:
      _failed_function(7095); return 0;
      ;
    }

    
    OOC_INT32 OOC_Scanner_Pragma__ParsePragma_GetInt(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref) {
      register OOC_INT32 i0;
      OOC_ALLOCATE_VPAR(value,OOC_Scanner_Pragma__ParsePragma_Value ,1)

      OOC_INITIALIZE_VPAR(value__ref,value,OOC_Scanner_Pragma__ParsePragma_Value ,8)
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i0 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7432)))), &_td_Config_Value_Integer__ValueDesc, 7432)), 7438));
      return i0;
      ;
    }

    
    Config_Value__StringPtr OOC_Scanner_Pragma__ParsePragma_GetString(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref) {
      register OOC_INT32 i0;
      OOC_ALLOCATE_VPAR(value,OOC_Scanner_Pragma__ParsePragma_Value ,1)

      OOC_INITIALIZE_VPAR(value__ref,value,OOC_Scanner_Pragma__ParsePragma_Value ,8)
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7569)))), &_td_Config_Value_String__ValueDesc, 7569)), 7575));
      return (Config_Value__StringPtr)i0;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_Expression(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT8 op;
      OOC_Scanner_Builder_BasicList__Symbol pos;
      struct OOC_Scanner_Pragma__ParsePragma_Value right;
      Config_Value__StringPtr leftString;
      Config_Value__StringPtr rightString;
      auto void OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag);
        
        void OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          struct OOC_Scanner_Pragma__ParsePragma_Value right;
          auto void OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag);
            
            void OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag) {
              register OOC_INT32 i0,i1,i2,i3,i4;
              struct OOC_Scanner_Pragma__ParsePragma_Value right;
              auto void OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term_Factor(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag);
                
                void OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term_Factor(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag) {
                  register OOC_INT32 i0,i1,i2,i3;
                  OOC_INT32 _int;

                  *(OOC_INT32*)(OOC_INT32)value = (OOC_INT32)0;
                  i0 = (OOC_INT32)sym;
                  *(OOC_INT32*)((OOC_INT32)value+4) = i0;
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 8241))+4);
                  switch (i1) {
                  case 43:
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8298))+8);
                    i1 = (
                    _cmp8((const void*)(_check_pointer(i1, 8303)),(const void*)"FALSE"))==(OOC_INT32)0;
                    if (i1) goto l5;
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8323))+8);
                    i1 = (
                    _cmp8((const void*)(_check_pointer(i1, 8328)),(const void*)"TRUE"))==(OOC_INT32)0;
                    
                    goto l7;
l5:
                    i1=OOC_TRUE;
l7:
                    if (i1) goto l16;
                    OOC_Scanner_Pragma__ParsePragma_CheckName((OOC_Scanner_Builder_BasicList__Symbol)i0);
                    i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+36);
                    i1 = (OOC_INT32)sym;
                    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8608))+8);
                    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8608))+8);
                    i1 = *(OOC_INT32*)((_check_pointer(i1, 8619))+16);
                    i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8613)), (OOC_INT32)0);
                    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8593)))), OOC_Config_Pragmas__HistoryDesc_GetValue)),OOC_Config_Pragmas__HistoryDesc_GetValue)((OOC_Config_Pragmas__History)i0, (void*)(_check_pointer(i2, 8613)), i3, i1);
                    i1 = i0!=(OOC_INT32)0;
                    if (i1) goto l14;
                    i0 = eval;
                    if (!i0) goto l17;
                    i0 = (OOC_INT32)sym;
                    OOC_Scanner_Pragma__ParsePragma_Err(7, (OOC_Scanner_Builder_BasicList__Symbol)i0);
                    goto l17;
l14:
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    goto l17;
l16:
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8437))+8);
                    i0 = (OOC_INT32)Config_Value_Boolean__New(((
                    _cmp8((const void*)(_check_pointer(i0, 8442)),(const void*)"TRUE"))==(OOC_INT32)0));
                    *(OOC_INT32*)(OOC_INT32)value = i0;
l17:
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 35:
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8985))+8);
                    i0 = (OOC_INT32)OOC_Scanner_Integer__Convert10((OOC_Scanner_InputBuffer__CharArray)i0, (void*)(OOC_INT32)&_int);
                    lastError = (Msg__Msg)i0;
                    i0 = i0!=(OOC_INT32)0;
                    if (!i0) goto l21;
                    i0 = (OOC_INT32)sym;
                    OOC_Scanner_Pragma__ParsePragma_AppendErr((OOC_Scanner_Builder_BasicList__Symbol)i0);
l21:
                    i0 = _int;
                    i0 = (OOC_INT32)Config_Value_Integer__New(i0);
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 36:
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9302))+8);
                    i0 = (OOC_INT32)OOC_Scanner_Integer__Convert16((OOC_Scanner_InputBuffer__CharArray)i0, (void*)(OOC_INT32)&_int);
                    lastError = (Msg__Msg)i0;
                    i0 = i0!=(OOC_INT32)0;
                    if (!i0) goto l25;
                    i0 = (OOC_INT32)sym;
                    OOC_Scanner_Pragma__ParsePragma_AppendErr((OOC_Scanner_Builder_BasicList__Symbol)i0);
l25:
                    i0 = _int;
                    i0 = (OOC_INT32)Config_Value_Integer__New(i0);
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 41:
                  case 42:
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9622))+8);
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9622))+8);
                    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9627)), (OOC_INT32)0);
                    i0 = (OOC_INT32)Config_Value_String__New((void*)(_check_pointer(i1, 9627)), i0);
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9686)))), &_td_Config_Value_String__ValueDesc, 9686)), 9692));
                    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9686)))), &_td_Config_Value_String__ValueDesc, 9686)), 9692));
                    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9700)), (OOC_INT32)0);
                    Strings__Delete((void*)(_check_pointer(i1, 9700)), i0, (OOC_INT32)0, 1);
                    i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
                    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9765)))), &_td_Config_Value_String__ValueDesc, 9765)), 9771));
                    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9765)))), &_td_Config_Value_String__ValueDesc, 9765)), 9771));
                    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9839)))), &_td_Config_Value_String__ValueDesc, 9839)), 9845));
                    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9839)))), &_td_Config_Value_String__ValueDesc, 9839)), 9845));
                    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9853)), (OOC_INT32)0);
                    i0 = Strings__Length((void*)(_check_pointer(i3, 9853)), i0);
                    i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9779)), (OOC_INT32)0);
                    Strings__Delete((void*)(_check_pointer(i1, 9779)), i2, (i0-1), 1);
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 30:
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    i0 = eval;
                    OOC_Scanner_Pragma__ParsePragma_Expression(i0, (void*)(OOC_INT32)value, (RT0__Struct)((OOC_INT32)value__tag));
                    OOC_Scanner_Pragma__ParsePragma_CheckSym(22);
                    goto l30;
                  case 33:
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    i0 = (OOC_INT32)value__tag;
                    i1 = eval;
                    OOC_Scanner_Pragma__ParsePragma_Expression(i1, (void*)(OOC_INT32)value, (RT0__Struct)i0);
                    OOC_Scanner_Pragma__ParsePragma_CheckBoolean(i1, (void*)(OOC_INT32)value, (RT0__Struct)i0);
                    i0 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
                    i0 = (OOC_INT32)Config_Value_Boolean__New((!i0));
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    goto l30;
                  default:
                    OOC_Scanner_Pragma__ParsePragma_Err(9, (OOC_Scanner_Builder_BasicList__Symbol)i0);
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  }
l30:
                  return;
                  ;
                }


              i0 = eval;
              i1 = (OOC_INT32)value__tag;
              OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term_Factor(i0, (void*)(OOC_INT32)value, (RT0__Struct)i1);
              i0 = (OOC_INT32)sym;
              i0 = *(OOC_INT8*)((_check_pointer(i0, 10548))+4);
              i0 = i0==5;
              if (!i0) goto l20;
              i0 = (OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value;
              i2 = (OOC_INT32)value+4;
l3_loop:
              i3 = eval;
              OOC_Scanner_Pragma__ParsePragma_CheckBoolean(i3, (void*)(OOC_INT32)value, (RT0__Struct)i1);
              i4 = (OOC_INT32)sym;
              *(OOC_INT32*)i2 = i4;
              OOC_Scanner_Pragma__ParsePragma_NextSym();
              if (i3) goto l6;
              i3=OOC_FALSE;
              goto l7;
l6:
              i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
              
l7:
              OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term_Factor(i3, (void*)(OOC_INT32)&right, (RT0__Struct)i0);
              i3 = eval;
              if (i3) goto l10;
              i3=OOC_FALSE;
              goto l11;
l10:
              i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
              
l11:
              OOC_Scanner_Pragma__ParsePragma_CheckBoolean(i3, (void*)(OOC_INT32)&right, (RT0__Struct)i0);
              i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
              if (i3) goto l14;
              i3=OOC_FALSE;
              goto l15;
l14:
              i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)&right);
              
l15:
              i3 = (OOC_INT32)Config_Value_Boolean__New(i3);
              *(OOC_INT32*)(OOC_INT32)value = i3;
              i3 = (OOC_INT32)sym;
              i3 = *(OOC_INT8*)((_check_pointer(i3, 10548))+4);
              i3 = i3==5;
              if (i3) goto l3_loop;
l20:
              return;
              ;
            }


          i0 = eval;
          i1 = (OOC_INT32)value__tag;
          OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term(i0, (void*)(OOC_INT32)value, (RT0__Struct)i1);
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 10948))+4);
          i0 = i0==8;
          if (!i0) goto l20;
          i0 = (OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value;
          i2 = (OOC_INT32)value+4;
l3_loop:
          i3 = eval;
          OOC_Scanner_Pragma__ParsePragma_CheckBoolean(i3, (void*)(OOC_INT32)value, (RT0__Struct)i1);
          i4 = (OOC_INT32)sym;
          *(OOC_INT32*)i2 = i4;
          OOC_Scanner_Pragma__ParsePragma_NextSym();
          if (i3) goto l6;
          i3=OOC_FALSE;
          goto l7;
l6:
          i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
          i3 = !i3;
          
l7:
          OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term(i3, (void*)(OOC_INT32)&right, (RT0__Struct)i0);
          i3 = eval;
          if (i3) goto l10;
          i3=OOC_FALSE;
          goto l11;
l10:
          i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
          i3 = !i3;
          
l11:
          OOC_Scanner_Pragma__ParsePragma_CheckBoolean(i3, (void*)(OOC_INT32)&right, (RT0__Struct)i0);
          i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
          if (i3) goto l14;
          i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)&right);
          
          goto l15;
l14:
          i3=OOC_TRUE;
l15:
          i3 = (OOC_INT32)Config_Value_Boolean__New(i3);
          *(OOC_INT32*)(OOC_INT32)value = i3;
          i3 = (OOC_INT32)sym;
          i3 = *(OOC_INT8*)((_check_pointer(i3, 10948))+4);
          i3 = i3==8;
          if (i3) goto l3_loop;
l20:
          return;
          ;
        }


      i0 = eval;
      OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr(i0, (void*)(OOC_INT32)value, (RT0__Struct)((OOC_INT32)value__tag));
      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 11349))+4);
      i1 = 9<=i1;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 11361))+4);
      i1 = i1<=14;
      
l5:
      if (!i1) goto l70;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 11403))+4);
      op = i1;
      pos = (OOC_Scanner_Builder_BasicList__Symbol)i0;
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      i0 = eval;
      OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr(i0, (void*)(OOC_INT32)&right, (RT0__Struct)((OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value));
      i0 = eval;
      i1 = !i0;
      if (i1) goto l9;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i1 = i1==(OOC_INT32)0;
      
      goto l11;
l9:
      i1=OOC_TRUE;
l11:
      if (i1) goto l13;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)&right;
      i1 = i1==(OOC_INT32)0;
      
      goto l14;
l13:
      i1=OOC_TRUE;
l14:
      i2 = (OOC_INT32)pos;
      if (i1) goto l69;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i1 = (OOC_INT32)RT0__TypeOf((void*)i1);
      i3 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)&right;
      i3 = (OOC_INT32)RT0__TypeOf((void*)i3);
      i1 = i1!=i3;
      if (i1) goto l27;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11666)))), &_td_Config_Value_Boolean__ValueDesc);
      if (i1) goto l21;
      i1=OOC_FALSE;
      goto l23;
l21:
      i1 = op;
      i1 = 11<=i1;
      
l23:
      if (i1) goto l25;
      i1=OOC_FALSE;
      goto l29;
l25:
      i1 = op;
      i1 = i1<=14;
      
      goto l29;
l27:
      i1=OOC_TRUE;
l29:
      if (i1) goto l67;
      if (!i0) goto l69;
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11884)))), &_td_Config_Value_Boolean__ValueDesc);
      if (i1) goto l59;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12205)))), &_td_Config_Value_Integer__ValueDesc);
      if (i1) goto l48;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12958)))), &_td_Config_Value_String__ValueDesc);
      if (!i0) goto l69;
      i0 = (OOC_INT32)OOC_Scanner_Pragma__ParsePragma_GetString((void*)(OOC_INT32)value);
      leftString = (Config_Value__StringPtr)i0;
      i1 = (OOC_INT32)OOC_Scanner_Pragma__ParsePragma_GetString((void*)(OOC_INT32)&right);
      rightString = (Config_Value__StringPtr)i1;
      i3 = op;
      switch (i3) {
      case 9:
        i0 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i0, 13185)),(const void*)(_check_pointer(i1, 13200))))==(OOC_INT32)0));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 10:
        i0 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i0, 13289)),(const void*)(_check_pointer(i1, 13304))))!=(OOC_INT32)0));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 11:
        i0 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i0, 13393)),(const void*)(_check_pointer(i1, 13408))))<(OOC_INT32)0));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 12:
        i0 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i0, 13497)),(const void*)(_check_pointer(i1, 13513))))<=(OOC_INT32)0));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 13:
        i0 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i0, 13602)),(const void*)(_check_pointer(i1, 13617))))>(OOC_INT32)0));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 14:
        i0 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i0, 13706)),(const void*)(_check_pointer(i1, 13722))))>=(OOC_INT32)0));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      default:
        _failed_case(i3, 13088);
        goto l69;
      }
l48:
      i0 = op;
      switch (i0) {
      case 9:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0==i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 10:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0!=i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 11:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0<i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 12:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0<=i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 13:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0>i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 14:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0>=i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      default:
        _failed_case(i0, 12245);
        goto l69;
      }
l59:
      i0 = op;
      switch (i0) {
      case 9:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0==i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 10:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0!=i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      default:
        _failed_case(i0, 11924);
        goto l69;
      }
l67:
      OOC_Scanner_Pragma__ParsePragma_Err(8, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l69:
      *(OOC_INT32*)((OOC_INT32)value+4) = i2;
l70:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Scanner_Pragma__ParsePragma_BoolExpression(OOC_CHAR8 eval) {
      register OOC_INT32 i0,i1;
      struct OOC_Scanner_Pragma__ParsePragma_Value value;

      i0 = eval;
      i1 = (OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value;
      OOC_Scanner_Pragma__ParsePragma_Expression(i0, (void*)(OOC_INT32)&value, (RT0__Struct)i1);
      OOC_Scanner_Pragma__ParsePragma_CheckBoolean(i0, (void*)(OOC_INT32)&value, (RT0__Struct)i1);
      i0 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)&value);
      return i0;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_PushCond() {
      register OOC_INT32 i0,i1,i2;
      OOC_Scanner_Pragma__ConditionStack cond;

      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_Pragma__ConditionStack.baseTypes[0]);
      cond = (OOC_Scanner_Pragma__ConditionStack)i0;
      i1 = (OOC_INT32)state+8;
      i2 = (OOC_INT32)*(OOC_INT32*)i1;
      *(OOC_INT32*)(_check_pointer(i0, 14198)) = i2;
      i2 = (OOC_INT32)sym;
      *(OOC_INT32*)((_check_pointer(i0, 14236))+4) = i2;
      i2 = *(OOC_UINT8*)((OOC_INT32)state+12);
      *(OOC_UINT8*)((_check_pointer(i0, 14262))+8) = (!i2);
      *(OOC_UINT8*)((_check_pointer(i0, 14307))+9) = OOC_FALSE;
      *(OOC_UINT8*)((_check_pointer(i0, 14339))+10) = OOC_FALSE;
      *(OOC_INT32*)i1 = i0;
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_PopCond() {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)state+8;
      i1 = (OOC_INT32)*(OOC_INT32*)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14488));
      *(OOC_INT32*)i0 = i1;
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_CheckForIf(OOC_CHAR8 noElse) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+8);
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l10;
      i1 = noElse;
      if (i1) goto l5;
      i0=OOC_FALSE;
      goto l7;
l5:
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 14813))+10);
      
l7:
      if (!i0) goto l11;
      i0 = (OOC_INT32)sym;
      OOC_Scanner_Pragma__ParsePragma_Err(13, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      OOC_Scanner_Pragma__ParsePragma_PushCond();
      goto l11;
l10:
      i0 = (OOC_INT32)sym;
      OOC_Scanner_Pragma__ParsePragma_Err(11, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      OOC_Scanner_Pragma__ParsePragma_PushCond();
l11:
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_Assignment(OOC_CHAR8 define, OOC_CHAR8 eval) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      Config_Value__Value varValue;
      OOC_Scanner_Builder_BasicList__Symbol pos;
      OOC_Scanner_Builder_BasicList__Symbol name;
      struct OOC_Scanner_Pragma__ParsePragma_Value value;

      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 15186))+4);
      i1 = i1==43;
      if (i1) goto l3;
      OOC_Scanner_Pragma__ParsePragma_Err(5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l45;
l3:
      i1 = eval;
      if (i1) goto l6;
      OOC_Scanner_Pragma__ParsePragma_CheckName((OOC_Scanner_Builder_BasicList__Symbol)i0);
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      OOC_Scanner_Pragma__ParsePragma_CheckSym(34);
      OOC_Scanner_Pragma__ParsePragma_Expression(i1, (void*)(OOC_INT32)&value, (RT0__Struct)((OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value));
      goto l45;
l6:
      i2 = (OOC_INT32)state+36;
      i3 = (OOC_INT32)*(OOC_INT32*)i2;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15292))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15292))+8);
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 15297)), (OOC_INT32)0);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 15303))+16);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15277)))), OOC_Config_Pragmas__HistoryDesc_GetValue)),OOC_Config_Pragmas__HistoryDesc_GetValue)((OOC_Config_Pragmas__History)i3, (void*)(_check_pointer(i4, 15297)), i5, i0);
      varValue = (Config_Value__Value)i0;
      i3 = (OOC_INT32)sym;
      pos = (OOC_Scanner_Builder_BasicList__Symbol)i3;
      OOC_Scanner_Pragma__ParsePragma_CheckName((OOC_Scanner_Builder_BasicList__Symbol)i3);
      i3 = (OOC_INT32)sym;
      name = (OOC_Scanner_Builder_BasicList__Symbol)i3;
      i4 = i0==(OOC_INT32)0;
      if (i4) goto l9;
      i5=OOC_FALSE;
      goto l11;
l9:
      i5 = define;
      i5 = !i5;
      
l11:
      if (i5) goto l20;
      i5 = i0!=(OOC_INT32)0;
      if (i5) goto l15;
      i5=OOC_FALSE;
      goto l17;
l15:
      i5 = define;
      
l17:
      if (!i5) goto l21;
      OOC_Scanner_Pragma__ParsePragma_Err(14, (OOC_Scanner_Builder_BasicList__Symbol)i3);
      goto l21;
l20:
      OOC_Scanner_Pragma__ParsePragma_Err(7, (OOC_Scanner_Builder_BasicList__Symbol)i3);
l21:
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      OOC_Scanner_Pragma__ParsePragma_CheckSym(34);
      OOC_Scanner_Pragma__ParsePragma_Expression(i1, (void*)(OOC_INT32)&value, (RT0__Struct)((OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value));
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)&value;
      i5 = i1!=(OOC_INT32)0;
      if (!i5) goto l45;
l24:
      if (i4) goto l41;
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15887)))), &_td_Config_Value_Boolean__ValueDesc);
      if (i4) goto l36;
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15996)))), &_td_Config_Value_Integer__ValueDesc);
      if (i4) goto l34;
      i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16105)))), &_td_Config_Value_String__ValueDesc);
      if (i4) goto l32;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16095)))), 16095);
      goto l37;
l32:
      err = (!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16166)))), &_td_Config_Value_String__ValueDesc)));
      goto l37;
l34:
      err = (!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16058)))), &_td_Config_Value_Integer__ValueDesc)));
      goto l37;
l36:
      err = (!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15949)))), &_td_Config_Value_Boolean__ValueDesc)));
l37:
      i0 = (OOC_INT32)*(OOC_INT32*)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16259))+8);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16259))+8);
      i3 = *(OOC_INT32*)((_check_pointer(i3, 16271))+16);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 16264)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16243)))), OOC_Config_Pragmas__HistoryDesc_SetValue)),OOC_Config_Pragmas__HistoryDesc_SetValue)((OOC_Config_Pragmas__History)i0, (void*)(_check_pointer(i2, 16264)), i4, i3, (Config_Value__Value)i1);
      i0 = err;
      if (!i0) goto l45;
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)&value+4);
      OOC_Scanner_Pragma__ParsePragma_Err(15, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l45;
l41:
      i0 = (OOC_INT32)*(OOC_INT32*)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15810))+8);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15810))+8);
      i3 = *(OOC_INT32*)((_check_pointer(i3, 15822))+16);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 15815)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15794)))), OOC_Config_Pragmas__HistoryDesc_SetValue)),OOC_Config_Pragmas__HistoryDesc_SetValue)((OOC_Config_Pragmas__History)i0, (void*)(_check_pointer(i2, 15815)), i4, i3, (Config_Value__Value)i1);
l45:
      return;
      ;
    }


  lastError = (Msg__Msg)(OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+16);
  prevSym = (OOC_Scanner_Builder_BasicList__Symbol)(OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16875))+8);
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
  i0 = (OOC_INT32)state+12;
  i1 = (OOC_INT32)state+36;
  i2 = (OOC_INT32)state+8;
l1_loop:
  i3 = (OOC_INT32)sym;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 16917))+4);
  i4 = i4==50;
  if (i4) goto l4;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 16958))+4);
  i4 = i4==48;
  
  goto l6;
l4:
  i4=OOC_TRUE;
l6:
  if (i4) goto l8;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17002))+4);
  i4 = i4==47;
  
  goto l9;
l8:
  i4=OOC_TRUE;
l9:
  nested = i4;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17036))+4);
  i4 = i4==50;
  if (i4) goto l12;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17061))+4);
  i4 = i4==48;
  
  goto l14;
l12:
  i4=OOC_TRUE;
l14:
  if (i4) goto l65;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17689))+4);
  i4 = i4==47;
  if (i4) goto l59;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17937))+4);
  i4 = i4==46;
  if (i4) goto l57;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 18124))+4);
  i4 = i4==43;
  if (i4) goto l22;
  i4=OOC_FALSE;
  goto l24;
l22:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18151))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 18156)),(const void*)"DEFINE"))==(OOC_INT32)0;
  
l24:
  if (i4) goto l55;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 18251))+4);
  i4 = i4==43;
  if (i4) goto l28;
  i4=OOC_FALSE;
  goto l30;
l28:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18278))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 18283)),(const void*)"PUSH"))==(OOC_INT32)0;
  
l30:
  if (i4) goto l50;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 18416))+4);
  i4 = i4==43;
  if (i4) goto l34;
  i4=OOC_FALSE;
  goto l36;
l34:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18443))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 18448)),(const void*)"POP"))==(OOC_INT32)0;
  
l36:
  if (i4) goto l41;
  i3 = *(OOC_INT8*)((_check_pointer(i3, 18716))+4);
  i3 = i3==43;
  if (!i3) goto l78;
  i3 = *(OOC_UINT8*)i0;
  OOC_Scanner_Pragma__ParsePragma_Assignment(OOC_FALSE, i3);
  goto l78;
l41:
  i4 = *(OOC_UINT8*)i0;
  if (!i4) goto l48;
  i4 = (OOC_INT32)*(OOC_INT32*)i1;
  i5 = *(OOC_INT32*)((_check_pointer(i4, 18532))+16);
  i5 = i5==0;
  if (i5) goto l46;
  i3 = *(OOC_INT32*)((_check_pointer(i3, 18650))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18640)))), OOC_Config_Pragmas__HistoryDesc_Pop)),OOC_Config_Pragmas__HistoryDesc_Pop)((OOC_Config_Pragmas__History)i4, i3);
  goto l48;
l46:
  OOC_Scanner_Pragma__ParsePragma_Err(16, (OOC_Scanner_Builder_BasicList__Symbol)i3);
l48:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  goto l78;
l50:
  i3 = *(OOC_UINT8*)i0;
  if (!i3) goto l53;
  i3 = (OOC_INT32)*(OOC_INT32*)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18364)))), OOC_Config_Pragmas__HistoryDesc_Push)),OOC_Config_Pragmas__HistoryDesc_Push)((OOC_Config_Pragmas__History)i3);
l53:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  goto l78;
l55:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i3 = *(OOC_UINT8*)i0;
  OOC_Scanner_Pragma__ParsePragma_Assignment(OOC_TRUE, i3);
  goto l78;
l57:
  OOC_Scanner_Pragma__ParsePragma_CheckForIf(OOC_FALSE);
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  i3 = *(OOC_UINT8*)((_check_pointer(i3, 18033))+8);
  *(OOC_UINT8*)i0 = (!i3);
  OOC_Scanner_Pragma__ParsePragma_PopCond();
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  goto l78;
l59:
  OOC_Scanner_Pragma__ParsePragma_CheckForIf(OOC_TRUE);
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  *(OOC_UINT8*)((_check_pointer(i3, 17765))+10) = OOC_TRUE;
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  i4 = *(OOC_UINT8*)((_check_pointer(i3, 17849))+8);
  i4 = !i4;
  if (i4) goto l62;
  i3=OOC_FALSE;
  goto l63;
l62:
  i3 = *(OOC_UINT8*)((_check_pointer(i3, 17910))+9);
  i3 = !i3;
  
l63:
  *(OOC_UINT8*)i0 = i3;
  goto l78;
l65:
  i3 = *(OOC_INT8*)((_check_pointer(i3, 17102))+4);
  i3 = i3==50;
  if (i3) goto l68;
  OOC_Scanner_Pragma__ParsePragma_CheckForIf(OOC_TRUE);
  goto l69;
l68:
  OOC_Scanner_Pragma__ParsePragma_PushCond();
l69:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  i4 = *(OOC_UINT8*)((_check_pointer(i3, 17274))+8);
  if (i4) goto l72;
  i4 = *(OOC_UINT8*)((_check_pointer(i3, 17307))+9);
  
  goto l74;
l72:
  i4=OOC_TRUE;
l74:
  if (i4) goto l76;
  i4 = OOC_Scanner_Pragma__ParsePragma_BoolExpression(OOC_TRUE);
  *(OOC_UINT8*)((_check_pointer(i3, 17534))+9) = i4;
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  i3 = *(OOC_UINT8*)((_check_pointer(i3, 17617))+9);
  *(OOC_UINT8*)i0 = i3;
  goto l77;
l76:
  i3 = OOC_Scanner_Pragma__ParsePragma_BoolExpression(OOC_FALSE);
  dummy = i3;
  *(OOC_UINT8*)i0 = OOC_FALSE;
l77:
  OOC_Scanner_Pragma__ParsePragma_CheckSym(26);
l78:
  i3 = (OOC_INT32)sym;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 18810))+4);
  i4 = i4==44;
  if (!i4) goto l80;
  goto l92;
l80:
  i4 = *(OOC_INT8*)((_check_pointer(i3, 18872))+4);
  i4 = i4!=46;
  if (i4) goto l83;
  i3=OOC_FALSE;
  goto l89;
l83:
  i3 = *(OOC_INT8*)((_check_pointer(i3, 18910))+4);
  i3 = i3==72;
  if (i3) goto l86;
  i3 = nested;
  i3 = !i3;
  
  goto l89;
l86:
  i3=OOC_TRUE;
l89:
  if (!i3) goto l1_loop;
  goto l94;
l92:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  goto l1_loop;
l94:
  OOC_Scanner_Pragma__ParsePragma_CheckSym(72);
  i0 = *(OOC_UINT8*)i0;
  if (i0) goto l97;
  return 2;
  goto l98;
l97:
  return 0;
l98:
  _failed_function(5240); return 0;
  ;
}

void OOC_Scanner_Pragma__AddSymbol(struct OOC_Scanner_Pragma__State *state, RT0__Struct state__tag, OOC_INT8 *inputMode, OOC_INT8 id, OOC_INT32 cstart, OOC_INT32 cend, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Msg__Msg lastError;
  auto void OOC_Scanner_Pragma__AddSymbol_Err(OOC_INT32 code);
  auto void OOC_Scanner_Pragma__AddSymbol_ErrSym(OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__AddSymbol_EndOfPragma();
  auto void OOC_Scanner_Pragma__AddSymbol_EndOfFile();
    
    void OOC_Scanner_Pragma__AddSymbol_Err(OOC_INT32 code) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)OOC_Scanner_Pragma__pragmaContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 19517))+8);
      i2 = cstart;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19474)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, (i2+i1));
      i0 = (OOC_INT32)lastError;
      i1 = line;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19551)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
      i0 = (OOC_INT32)lastError;
      i1 = column;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19597)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19651))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19651))+20);
      i2 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19660)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i2);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__AddSymbol_ErrSym(OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)OOC_Scanner_Pragma__pragmaContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 19862))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19836)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
      i0 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 19912))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19885)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 19965))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19936)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19995))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19995))+20);
      i2 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20004)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i2);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__AddSymbol_EndOfPragma() {
      register OOC_INT32 i0,i1,i2,i3,i4;

      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+4);
      i1 = *(OOC_INT32*)((OOC_INT32)state+32);
      i2 = *(OOC_INT32*)((OOC_INT32)state+28);
      i3 = *(OOC_INT32*)((OOC_INT32)state+20);
      i4 = cend;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20099)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i0, 76, i3, i4, i2, i1);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__AddSymbol_EndOfFile() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;

      OOC_Scanner_Pragma__AddSymbol_Err(2);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((OOC_INT32)state+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20326)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i1);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((OOC_INT32)state+28);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20385)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((OOC_INT32)state+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20443)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      OOC_Scanner_Pragma__AddSymbol_EndOfPragma();
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+4);
      i1 = id;
      i2 = cstart;
      i3 = cend;
      i4 = line;
      i5 = column;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20529)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i0, i1, i2, i3, i4, i5);
      return;
      ;
    }


  i0 = *inputMode;
  switch (i0) {
  case 0:
    i0 = id;
    switch (i0) {
    case 71:
      i0 = cstart;
      *inputMode = 1;
      *(OOC_INT32*)((OOC_INT32)state+20) = i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 20811))+8);
      *(OOC_INT32*)((OOC_INT32)state+24) = (i0+i1);
      i0 = line;
      *(OOC_INT32*)((OOC_INT32)state+28) = i0;
      i0 = column;
      *(OOC_INT32*)((OOC_INT32)state+32) = i0;
      goto l29;
    case 69:
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+8);
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l8;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21015))+4);
      OOC_Scanner_Pragma__AddSymbol_ErrSym(12, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l8:
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+4);
      i1 = cstart;
      i2 = cend;
      i3 = line;
      i4 = column;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21059)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i0, 69, i1, i2, i3, i4);
      goto l29;
    default:
      _failed_case(i0, 20649);
      goto l29;
    }
    /* goto: unreachable */
  case 1:
    i0 = id;
    switch (i0) {
    case 71:
      OOC_Scanner_Pragma__AddSymbol_Err(1);
      goto l29;
    case 72:
      i1 = (OOC_INT32)state+16;
      i2 = (OOC_INT32)*(OOC_INT32*)i1;
      i3 = column;
      i4 = line;
      i5 = cend;
      i6 = cstart;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21276)))), OOC_Scanner_Builder_BasicList__BuilderDesc_AddSymbol)),OOC_Scanner_Builder_BasicList__BuilderDesc_AddSymbol)((OOC_Scanner_Builder_BasicList__Builder)i2, i0, i6, i5, i4, i3);
      i0 = OOC_Scanner_Pragma__ParsePragma((void*)(OOC_INT32)state, (RT0__Struct)((OOC_INT32)state__tag));
      *inputMode = i0;
      i0 = i0==0;
      if (!i0) goto l17;
      OOC_Scanner_Pragma__AddSymbol_EndOfPragma();
l17:
      i0 = (OOC_INT32)*(OOC_INT32*)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21461)))), OOC_Scanner_Builder_BasicList__BuilderDesc_Clear)),OOC_Scanner_Builder_BasicList__BuilderDesc_Clear)((OOC_Scanner_Builder_BasicList__Builder)i0);
      goto l29;
    case 69:
      OOC_Scanner_Pragma__AddSymbol_EndOfFile();
      goto l29;
    default:
      i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+16);
      i2 = column;
      i3 = line;
      i4 = cend;
      i5 = cstart;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21583)))), OOC_Scanner_Builder_BasicList__BuilderDesc_AddSymbol)),OOC_Scanner_Builder_BasicList__BuilderDesc_AddSymbol)((OOC_Scanner_Builder_BasicList__Builder)i1, i0, i5, i4, i3, i2);
      goto l29;
    }
    /* goto: unreachable */
  case 2:
    i0 = id;
    switch (i0) {
    case 71:
      *inputMode = 1;
      goto l29;
    case 72:
      goto l29;
    case 69:
      OOC_Scanner_Pragma__AddSymbol_EndOfFile();
      goto l29;
    default:
      goto l29;
    }
    /* goto: unreachable */
  default:
    _failed_case(i0, 20608);
    goto l29;
  }
l29:
  return;
  ;
}

void OOC_OOC_Scanner_Pragma_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_Pragma__ErrorContext.baseTypes[0]);
  OOC_Scanner_Pragma__pragmaContext = (OOC_Scanner_Pragma__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:Scanner:Pragma", 19);
  return;
  ;
}

/* --- */
