#include <OOC/Scanner/Pragma.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Scanner_Pragma__ErrorContextDesc_GetTemplate(OOC_Scanner_Pragma__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3831))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){80,114,97,103,109,97,32,115,116,97,114,116,32,100,101,108,105,109,105,116,101,114,32,119,105,116,104,105,110,32,112,114,97,103,109,97,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){80,114,97,103,109,97,32,110,111,116,32,99,108,111,115,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,107,101,121,119,111,114,100,32,96,36,123,115,121,109,95,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,115,121,109,98,111,108,32,96,36,123,115,121,109,95,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,105,100,101,110,116,105,102,105,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){73,108,108,101,103,97,108,32,118,97,114,105,97,98,108,101,32,110,97,109,101,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 7:
    _copy_16((const void*)((OOC_CHAR16[]){85,110,100,101,102,105,110,101,100,32,112,114,97,103,109,97,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 8:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,118,97,108,105,100,32,111,112,101,114,97,110,100,115,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 10:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,98,111,111,108,101,97,110,32,101,120,112,114,101,115,115,105,111,110,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 11:
    _copy_16((const void*)((OOC_CHAR16[]){78,111,32,111,112,101,110,32,96,73,70,39,32,115,116,97,116,101,109,101,110,116,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 12:
    _copy_16((const void*)((OOC_CHAR16[]){96,73,70,39,32,115,116,97,116,101,109,101,110,116,32,108,97,99,107,115,32,96,69,78,68,39,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 13:
    _copy_16((const void*)((OOC_CHAR16[]){96,69,76,83,69,39,32,112,97,114,116,32,97,108,114,101,97,100,121,32,100,101,102,105,110,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 14:
    _copy_16((const void*)((OOC_CHAR16[]){80,114,97,103,109,97,32,118,97,114,105,97,98,108,101,32,97,108,114,101,97,100,121,32,100,101,102,105,110,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 15:
    _copy_16((const void*)((OOC_CHAR16[]){86,97,108,117,101,32,110,111,116,32,97,115,115,105,103,110,109,101,110,116,32,99,111,109,112,97,116,105,98,108,101,32,116,111,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 16:
    _copy_16((const void*)((OOC_CHAR16[]){78,111,32,118,97,108,117,101,115,32,115,116,111,114,101,100,32,111,110,32,112,114,97,103,109,97,32,115,116,97,99,107,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  case 17:
    _copy_16((const void*)((OOC_CHAR16[]){96,87,73,84,72,39,32,115,116,97,116,101,109,101,110,116,32,108,97,99,107,115,32,96,69,78,68,39,0}),(void*)(OOC_INT32)t,128);
    goto l19;
  default:
    _failed_case(i1, 3823);
    goto l19;
  }
l19:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4883)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

void OOC_Scanner_Pragma__Init(struct OOC_Scanner_Pragma__State *state, RT0__Struct state__tag, OOC_Scanner_Builder__Builder builder, OOC_Config_Pragmas__Section defaultPragmas) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)builder;
  *(OOC_INT32*)((OOC_INT32)state+4) = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5693));
  *(OOC_INT32*)(OOC_INT32)state = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5752));
  i0 = (OOC_INT32)OOC_Scanner_BasicList__New((OOC_Scanner_InputBuffer__Buffer)i0, 0u);
  *(OOC_INT32*)((OOC_INT32)state+16) = i0;
  *(OOC_INT32*)((OOC_INT32)state+8) = 0;
  *(OOC_UINT8*)((OOC_INT32)state+12) = 1u;
  i0 = (OOC_INT32)defaultPragmas;
  i0 = (OOC_INT32)OOC_Config_Pragmas__NewHistory((OOC_Config_Pragmas__Section)i0);
  *(OOC_INT32*)((OOC_INT32)state+36) = i0;
  return;
  ;
}

static OOC_INT8 OOC_Scanner_Pragma__ParsePragma(struct OOC_Scanner_Pragma__State *state, RT0__Struct state__tag) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Msg__Msg lastError;
  OOC_Scanner_BasicList__Symbol prevSym;
  OOC_Scanner_BasicList__Symbol sym;
  OOC_CHAR8 nested;
  OOC_CHAR8 dummy;
  OOC_CHAR8 err;
  auto void OOC_Scanner_Pragma__ParsePragma_AppendErr(OOC_Scanner_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__ParsePragma_Err(OOC_INT32 code, OOC_Scanner_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__ParsePragma_CheckName(OOC_Scanner_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__ParsePragma_CheckBoolean(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag);
  auto void OOC_Scanner_Pragma__ParsePragma_NextSym(void);
  auto void OOC_Scanner_Pragma__ParsePragma_CheckSym(OOC_INT8 symId);
  auto OOC_CHAR8 OOC_Scanner_Pragma__ParsePragma_GetBool(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref);
  auto OOC_INT32 OOC_Scanner_Pragma__ParsePragma_GetInt(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref);
  auto Config_Value__StringPtr OOC_Scanner_Pragma__ParsePragma_GetString(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref);
  auto void OOC_Scanner_Pragma__ParsePragma_Expression(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag);
  auto OOC_CHAR8 OOC_Scanner_Pragma__ParsePragma_BoolExpression(OOC_CHAR8 eval);
  auto void OOC_Scanner_Pragma__ParsePragma_PushCond(void);
  auto void OOC_Scanner_Pragma__ParsePragma_PopCond(void);
  auto void OOC_Scanner_Pragma__ParsePragma_CheckForIf(OOC_CHAR8 noElse);
  auto void OOC_Scanner_Pragma__ParsePragma_Assignment(OOC_CHAR8 define, OOC_CHAR8 eval);
    
    void OOC_Scanner_Pragma__ParsePragma_AppendErr(OOC_Scanner_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 6312))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6286)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
      i0 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 6362))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6335)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6415))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6386)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6445))+20);
      i1 = (OOC_INT32)lastError;
      OOC_Error__ListDesc_Append((OOC_Error__List)i0, (Msg__Msg)i1);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_Err(OOC_INT32 code, OOC_Scanner_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)OOC_Scanner_Pragma__pragmaContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i0 = (OOC_INT32)sym;
      OOC_Scanner_Pragma__ParsePragma_AppendErr((OOC_Scanner_BasicList__Symbol)i0);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_CheckName(OOC_Scanner_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1,i2;
      OOC_Scanner_InputBuffer__CharArray name;

      i0 = (OOC_INT32)sym;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6771))+8);
      name = (OOC_Scanner_InputBuffer__CharArray)i1;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6792)),(const void*)"TRUE"))==0;
      if (i2) goto l3;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6812)),(const void*)"FALSE"))==0;
      
      goto l5;
l3:
      i2=1u;
l5:
      if (i2) goto l7;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6833)),(const void*)"PUSH"))==0;
      
      goto l9;
l7:
      i2=1u;
l9:
      if (i2) goto l11;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6863)),(const void*)"POP"))==0;
      
      goto l13;
l11:
      i2=1u;
l13:
      if (i2) goto l15;
      i1 = (
      _cmp8((const void*)(_check_pointer(i1, 6882)),(const void*)"DEFINE"))==0;
      
      goto l17;
l15:
      i1=1u;
l17:
      if (!i1) goto l19;
      OOC_Scanner_Pragma__ParsePragma_Err(6, (OOC_Scanner_BasicList__Symbol)i0);
l19:
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_CheckBoolean(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i1 = i0!=0;
      if (i1) goto l3;
      i0=0u;
      goto l5;
l3:
      i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7084)))), &_td_Config_Value_Boolean__ValueDesc));
      
l5:
      if (!i0) goto l10;
      i0 = eval;
      if (!i0) goto l9;
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)value+4);
      OOC_Scanner_Pragma__ParsePragma_Err(10, (OOC_Scanner_BasicList__Symbol)i0);
l9:
      i0 = (OOC_INT32)Config_Value_Boolean__New(0u);
      *(OOC_INT32*)(OOC_INT32)value = i0;
l10:
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_NextSym(void) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)sym;
      prevSym = (OOC_Scanner_BasicList__Symbol)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7345));
      sym = (OOC_Scanner_BasicList__Symbol)i0;
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_CheckSym(OOC_INT8 symId) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 7436))+4);
      i2 = symId;
      i1 = i1!=i2;
      if (i1) goto l3;
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      goto l11;
l3:
      i1 = OOC_Scanner_Symbol__IsKeyword(i2);
      if (i1) goto l6;
      OOC_Scanner_Pragma__ParsePragma_Err(4, (OOC_Scanner_BasicList__Symbol)i0);
      goto l7;
l6:
      OOC_Scanner_Pragma__ParsePragma_Err(3, (OOC_Scanner_BasicList__Symbol)i0);
l7:
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(i2, 81, OOC_UINT8, 7709))*10)), 10);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7608)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "sym_name", 9, (Msg__StringPtr)i1);
      i0 = (OOC_INT32)sym;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7735));
      i0 = i0!=0;
      if (!i0) goto l11;
      OOC_Scanner_Pragma__ParsePragma_NextSym();
l11:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Scanner_Pragma__ParsePragma_GetBool(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(value,OOC_Scanner_Pragma__ParsePragma_Value ,1)

      OOC_INITIALIZE_VPAR(value__ref,value,OOC_Scanner_Pragma__ParsePragma_Value ,8)
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i1 = i0!=0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7945)))), &_td_Config_Value_Boolean__ValueDesc);
      
l5:
      if (i1) goto l7;
      return 0u;
      goto l8;
l7:
      i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8014)))), &_td_Config_Value_Boolean__ValueDesc, 8014)), 8020));
      return i0;
l8:
      _failed_function(7856); return 0;
      ;
    }

    
    OOC_INT32 OOC_Scanner_Pragma__ParsePragma_GetInt(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref) {
      register OOC_INT32 i0;
      OOC_ALLOCATE_VPAR(value,OOC_Scanner_Pragma__ParsePragma_Value ,1)

      OOC_INITIALIZE_VPAR(value__ref,value,OOC_Scanner_Pragma__ParsePragma_Value ,8)
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i0 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8193)))), &_td_Config_Value_Integer__ValueDesc, 8193)), 8199));
      return i0;
      ;
    }

    
    Config_Value__StringPtr OOC_Scanner_Pragma__ParsePragma_GetString(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref) {
      register OOC_INT32 i0;
      OOC_ALLOCATE_VPAR(value,OOC_Scanner_Pragma__ParsePragma_Value ,1)

      OOC_INITIALIZE_VPAR(value__ref,value,OOC_Scanner_Pragma__ParsePragma_Value ,8)
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8330)))), &_td_Config_Value_String__ValueDesc, 8330)), 8336));
      return (Config_Value__StringPtr)i0;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_Expression(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT8 op;
      OOC_Scanner_BasicList__Symbol pos;
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

                  *(OOC_INT32*)(OOC_INT32)value = 0;
                  i0 = (OOC_INT32)sym;
                  *(OOC_INT32*)((OOC_INT32)value+4) = i0;
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 9002))+4);
                  switch (i1) {
                  case 45:
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9059))+8);
                    i1 = (
                    _cmp8((const void*)(_check_pointer(i1, 9064)),(const void*)"FALSE"))==0;
                    if (i1) goto l5;
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9084))+8);
                    i1 = (
                    _cmp8((const void*)(_check_pointer(i1, 9089)),(const void*)"TRUE"))==0;
                    
                    goto l7;
l5:
                    i1=1u;
l7:
                    if (i1) goto l16;
                    OOC_Scanner_Pragma__ParsePragma_CheckName((OOC_Scanner_BasicList__Symbol)i0);
                    i0 = (OOC_INT32)sym;
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9369))+8);
                    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9369))+8);
                    i3 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+36);
                    i0 = *(OOC_INT32*)((_check_pointer(i0, 9380))+16);
                    i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9374)), 0);
                    i0 = (OOC_INT32)OOC_Config_Pragmas__HistoryDesc_GetValue((OOC_Config_Pragmas__History)i3, (void*)(_check_pointer(i1, 9374)), i2, i0);
                    i1 = i0!=0;
                    if (i1) goto l14;
                    i0 = eval;
                    if (!i0) goto l17;
                    i0 = (OOC_INT32)sym;
                    OOC_Scanner_Pragma__ParsePragma_Err(7, (OOC_Scanner_BasicList__Symbol)i0);
                    goto l17;
l14:
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    goto l17;
l16:
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9198))+8);
                    i0 = (OOC_INT32)Config_Value_Boolean__New(((
                    _cmp8((const void*)(_check_pointer(i0, 9203)),(const void*)"TRUE"))==0));
                    *(OOC_INT32*)(OOC_INT32)value = i0;
l17:
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 37:
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9746))+8);
                    i0 = (OOC_INT32)OOC_Scanner_Integer__Convert10((OOC_Scanner_InputBuffer__CharArray)i0, (void*)(OOC_INT32)&_int);
                    lastError = (Msg__Msg)i0;
                    i0 = i0!=0;
                    if (!i0) goto l21;
                    i0 = (OOC_INT32)sym;
                    OOC_Scanner_Pragma__ParsePragma_AppendErr((OOC_Scanner_BasicList__Symbol)i0);
l21:
                    i0 = _int;
                    i0 = (OOC_INT32)Config_Value_Integer__New(i0);
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 38:
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10063))+8);
                    i0 = (OOC_INT32)OOC_Scanner_Integer__Convert16((OOC_Scanner_InputBuffer__CharArray)i0, (void*)(OOC_INT32)&_int);
                    lastError = (Msg__Msg)i0;
                    i0 = i0!=0;
                    if (!i0) goto l25;
                    i0 = (OOC_INT32)sym;
                    OOC_Scanner_Pragma__ParsePragma_AppendErr((OOC_Scanner_BasicList__Symbol)i0);
l25:
                    i0 = _int;
                    i0 = (OOC_INT32)Config_Value_Integer__New(i0);
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 43:
                  case 44:
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10383))+8);
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10383))+8);
                    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10388)), 0);
                    i0 = (OOC_INT32)Config_Value_String__New((void*)(_check_pointer(i1, 10388)), i0);
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10447)))), &_td_Config_Value_String__ValueDesc, 10447)), 10453));
                    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10447)))), &_td_Config_Value_String__ValueDesc, 10447)), 10453));
                    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10461)), 0);
                    Strings__Delete((void*)(_check_pointer(i1, 10461)), i0, 0, 1);
                    i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
                    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10526)))), &_td_Config_Value_String__ValueDesc, 10526)), 10532));
                    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10526)))), &_td_Config_Value_String__ValueDesc, 10526)), 10532));
                    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10600)))), &_td_Config_Value_String__ValueDesc, 10600)), 10606));
                    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10600)))), &_td_Config_Value_String__ValueDesc, 10600)), 10606));
                    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10614)), 0);
                    i0 = Strings__Length((void*)(_check_pointer(i3, 10614)), i0);
                    i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 10540)), 0);
                    Strings__Delete((void*)(_check_pointer(i1, 10540)), i2, (i0-1), 1);
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 32:
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    i0 = eval;
                    OOC_Scanner_Pragma__ParsePragma_Expression(i0, (void*)(OOC_INT32)value, (RT0__Struct)((OOC_INT32)value__tag));
                    OOC_Scanner_Pragma__ParsePragma_CheckSym(22);
                    goto l30;
                  case 35:
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
                    OOC_Scanner_Pragma__ParsePragma_Err(9, (OOC_Scanner_BasicList__Symbol)i0);
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
              i0 = *(OOC_INT8*)((_check_pointer(i0, 11309))+4);
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
              i3=0u;
              goto l7;
l6:
              i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
              
l7:
              OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term_Factor(i3, (void*)(OOC_INT32)&right, (RT0__Struct)i0);
              i3 = eval;
              if (i3) goto l10;
              i3=0u;
              goto l11;
l10:
              i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
              
l11:
              OOC_Scanner_Pragma__ParsePragma_CheckBoolean(i3, (void*)(OOC_INT32)&right, (RT0__Struct)i0);
              i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
              if (i3) goto l14;
              i3=0u;
              goto l15;
l14:
              i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)&right);
              
l15:
              i3 = (OOC_INT32)Config_Value_Boolean__New(i3);
              *(OOC_INT32*)(OOC_INT32)value = i3;
              i3 = (OOC_INT32)sym;
              i3 = *(OOC_INT8*)((_check_pointer(i3, 11309))+4);
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
          i0 = *(OOC_INT8*)((_check_pointer(i0, 11709))+4);
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
          i3=0u;
          goto l7;
l6:
          i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
          i3 = !i3;
          
l7:
          OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term(i3, (void*)(OOC_INT32)&right, (RT0__Struct)i0);
          i3 = eval;
          if (i3) goto l10;
          i3=0u;
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
          i3=1u;
l15:
          i3 = (OOC_INT32)Config_Value_Boolean__New(i3);
          *(OOC_INT32*)(OOC_INT32)value = i3;
          i3 = (OOC_INT32)sym;
          i3 = *(OOC_INT8*)((_check_pointer(i3, 11709))+4);
          i3 = i3==8;
          if (i3) goto l3_loop;
l20:
          return;
          ;
        }


      i0 = eval;
      OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr(i0, (void*)(OOC_INT32)value, (RT0__Struct)((OOC_INT32)value__tag));
      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 12110))+4);
      i1 = 9<=i1;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 12122))+4);
      i1 = i1<=14;
      
l5:
      if (!i1) goto l70;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 12164))+4);
      op = i1;
      pos = (OOC_Scanner_BasicList__Symbol)i0;
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      i0 = eval;
      OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr(i0, (void*)(OOC_INT32)&right, (RT0__Struct)((OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value));
      i0 = (OOC_INT32)pos;
      i1 = eval;
      i2 = !i1;
      if (i2) goto l9;
      i2 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i2 = i2==0;
      
      goto l11;
l9:
      i2=1u;
l11:
      if (i2) goto l13;
      i2 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)&right;
      i2 = i2==0;
      
      goto l15;
l13:
      i2=1u;
l15:
      if (i2) goto l69;
      i2 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i2 = (OOC_INT32)RT0__TypeOf((void*)i2);
      i3 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)&right;
      i3 = (OOC_INT32)RT0__TypeOf((void*)i3);
      i2 = i2!=i3;
      if (i2) goto l27;
      i2 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12427)))), &_td_Config_Value_Boolean__ValueDesc);
      if (i2) goto l21;
      i2=0u;
      goto l23;
l21:
      i2 = op;
      i2 = 11<=i2;
      
l23:
      if (i2) goto l25;
      i2=0u;
      goto l29;
l25:
      i2 = op;
      i2 = i2<=14;
      
      goto l29;
l27:
      i2=1u;
l29:
      if (i2) goto l67;
      if (!i1) goto l69;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12645)))), &_td_Config_Value_Boolean__ValueDesc);
      if (i2) goto l59;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12966)))), &_td_Config_Value_Integer__ValueDesc);
      if (i2) goto l48;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13719)))), &_td_Config_Value_String__ValueDesc);
      if (!i1) goto l69;
      i1 = (OOC_INT32)OOC_Scanner_Pragma__ParsePragma_GetString((void*)(OOC_INT32)value);
      leftString = (Config_Value__StringPtr)i1;
      i2 = (OOC_INT32)OOC_Scanner_Pragma__ParsePragma_GetString((void*)(OOC_INT32)&right);
      rightString = (Config_Value__StringPtr)i2;
      i3 = op;
      switch (i3) {
      case 9:
        i1 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i1, 13946)),(const void*)(_check_pointer(i2, 13961))))==0));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 10:
        i1 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i1, 14050)),(const void*)(_check_pointer(i2, 14065))))!=0));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 11:
        i1 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i1, 14154)),(const void*)(_check_pointer(i2, 14169))))<0));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 12:
        i1 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i1, 14258)),(const void*)(_check_pointer(i2, 14274))))<=0));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 13:
        i1 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i1, 14363)),(const void*)(_check_pointer(i2, 14378))))>0));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 14:
        i1 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i1, 14467)),(const void*)(_check_pointer(i2, 14483))))>=0));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      default:
        _failed_case(i3, 13849);
        goto l69;
      }
l48:
      i1 = op;
      switch (i1) {
      case 9:
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i2 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i1 = (OOC_INT32)Config_Value_Boolean__New((i1==i2));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 10:
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i2 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i1 = (OOC_INT32)Config_Value_Boolean__New((i1!=i2));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 11:
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i2 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i1 = (OOC_INT32)Config_Value_Boolean__New((i1<i2));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 12:
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i2 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i1 = (OOC_INT32)Config_Value_Boolean__New((i1<=i2));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 13:
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i2 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i1 = (OOC_INT32)Config_Value_Boolean__New((i1>i2));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 14:
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i2 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i1 = (OOC_INT32)Config_Value_Boolean__New((i1>=i2));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      default:
        _failed_case(i1, 13006);
        goto l69;
      }
l59:
      i1 = op;
      switch (i1) {
      case 9:
        i1 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
        i2 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)&right);
        i1 = (OOC_INT32)Config_Value_Boolean__New((i1==i2));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 10:
        i1 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
        i2 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)&right);
        i1 = (OOC_INT32)Config_Value_Boolean__New((i1!=i2));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      default:
        _failed_case(i1, 12685);
        goto l69;
      }
l67:
      OOC_Scanner_Pragma__ParsePragma_Err(8, (OOC_Scanner_BasicList__Symbol)i0);
l69:
      *(OOC_INT32*)((OOC_INT32)value+4) = i0;
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

    
    void OOC_Scanner_Pragma__ParsePragma_PushCond(void) {
      register OOC_INT32 i0,i1,i2;
      OOC_Scanner_Pragma__ConditionStack cond;

      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_Pragma__ConditionStack.baseTypes[0]);
      cond = (OOC_Scanner_Pragma__ConditionStack)i0;
      i1 = (OOC_INT32)state+8;
      i2 = (OOC_INT32)*(OOC_INT32*)i1;
      *(OOC_INT32*)(_check_pointer(i0, 14959)) = i2;
      i2 = (OOC_INT32)sym;
      *(OOC_INT32*)((_check_pointer(i0, 14997))+4) = i2;
      i2 = *(OOC_UINT8*)((OOC_INT32)state+12);
      *(OOC_UINT8*)((_check_pointer(i0, 15023))+8) = (!i2);
      *(OOC_UINT8*)((_check_pointer(i0, 15068))+9) = 0u;
      *(OOC_UINT8*)((_check_pointer(i0, 15100))+10) = 0u;
      *(OOC_UINT8*)((_check_pointer(i0, 15134))+11) = 0u;
      *(OOC_INT32*)i1 = i0;
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_PopCond(void) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)state+8;
      i1 = (OOC_INT32)*(OOC_INT32*)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15281));
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
      i0=0u;
      goto l7;
l5:
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 15606))+10);
      
l7:
      if (!i0) goto l11;
      i0 = (OOC_INT32)sym;
      OOC_Scanner_Pragma__ParsePragma_Err(13, (OOC_Scanner_BasicList__Symbol)i0);
      OOC_Scanner_Pragma__ParsePragma_PushCond();
      goto l11;
l10:
      i0 = (OOC_INT32)sym;
      OOC_Scanner_Pragma__ParsePragma_Err(11, (OOC_Scanner_BasicList__Symbol)i0);
      OOC_Scanner_Pragma__ParsePragma_PushCond();
l11:
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_Assignment(OOC_CHAR8 define, OOC_CHAR8 eval) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      Config_Value__Value varValue;
      OOC_Scanner_BasicList__Symbol pos;
      OOC_Scanner_BasicList__Symbol name;
      struct OOC_Scanner_Pragma__ParsePragma_Value value;

      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 15979))+4);
      i1 = i1==45;
      if (i1) goto l3;
      OOC_Scanner_Pragma__ParsePragma_Err(5, (OOC_Scanner_BasicList__Symbol)i0);
      goto l45;
l3:
      i1 = eval;
      if (i1) goto l6;
      OOC_Scanner_Pragma__ParsePragma_CheckName((OOC_Scanner_BasicList__Symbol)i0);
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      OOC_Scanner_Pragma__ParsePragma_CheckSym(36);
      OOC_Scanner_Pragma__ParsePragma_Expression(i1, (void*)(OOC_INT32)&value, (RT0__Struct)((OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value));
      goto l45;
l6:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16085))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16085))+8);
      i4 = (OOC_INT32)state+36;
      i5 = (OOC_INT32)*(OOC_INT32*)i4;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 16090)), 0);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 16096))+16);
      i0 = (OOC_INT32)OOC_Config_Pragmas__HistoryDesc_GetValue((OOC_Config_Pragmas__History)i5, (void*)(_check_pointer(i2, 16090)), i3, i0);
      varValue = (Config_Value__Value)i0;
      i2 = (OOC_INT32)sym;
      pos = (OOC_Scanner_BasicList__Symbol)i2;
      OOC_Scanner_Pragma__ParsePragma_CheckName((OOC_Scanner_BasicList__Symbol)i2);
      i2 = (OOC_INT32)sym;
      name = (OOC_Scanner_BasicList__Symbol)i2;
      i3 = i0==(OOC_INT32)0;
      if (i3) goto l9;
      i5=0u;
      goto l11;
l9:
      i5 = define;
      i5 = !i5;
      
l11:
      if (i5) goto l20;
      i5 = i0!=(OOC_INT32)0;
      if (i5) goto l15;
      i5=0u;
      goto l17;
l15:
      i5 = define;
      
l17:
      if (!i5) goto l21;
      OOC_Scanner_Pragma__ParsePragma_Err(14, (OOC_Scanner_BasicList__Symbol)i2);
      goto l21;
l20:
      OOC_Scanner_Pragma__ParsePragma_Err(7, (OOC_Scanner_BasicList__Symbol)i2);
l21:
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      OOC_Scanner_Pragma__ParsePragma_CheckSym(36);
      OOC_Scanner_Pragma__ParsePragma_Expression(i1, (void*)(OOC_INT32)&value, (RT0__Struct)((OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value));
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)&value;
      i5 = i1!=(OOC_INT32)0;
      if (!i5) goto l45;
l24:
      if (i3) goto l41;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16680)))), &_td_Config_Value_Boolean__ValueDesc);
      if (i3) goto l36;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16789)))), &_td_Config_Value_Integer__ValueDesc);
      if (i3) goto l34;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16898)))), &_td_Config_Value_String__ValueDesc);
      if (i3) goto l32;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16888)))), 16888);
      goto l37;
l32:
      err = (!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16959)))), &_td_Config_Value_String__ValueDesc)));
      goto l37;
l34:
      err = (!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16851)))), &_td_Config_Value_Integer__ValueDesc)));
      goto l37;
l36:
      err = (!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16742)))), &_td_Config_Value_Boolean__ValueDesc)));
l37:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17052))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17052))+8);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 17064))+16);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 17057)), 0);
      i4 = (OOC_INT32)*(OOC_INT32*)i4;
      OOC_Config_Pragmas__HistoryDesc_SetValue((OOC_Config_Pragmas__History)i4, (void*)(_check_pointer(i0, 17057)), i3, i2, (Config_Value__Value)i1);
      i0 = err;
      if (!i0) goto l45;
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)&value+4);
      OOC_Scanner_Pragma__ParsePragma_Err(15, (OOC_Scanner_BasicList__Symbol)i0);
      goto l45;
l41:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16603))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16603))+8);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 16615))+16);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 16608)), 0);
      i4 = (OOC_INT32)*(OOC_INT32*)i4;
      OOC_Config_Pragmas__HistoryDesc_SetValue((OOC_Config_Pragmas__History)i4, (void*)(_check_pointer(i0, 16608)), i3, i2, (Config_Value__Value)i1);
l45:
      return;
      ;
    }


  lastError = (Msg__Msg)(OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+16);
  prevSym = (OOC_Scanner_BasicList__Symbol)(OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17668))+8);
  sym = (OOC_Scanner_BasicList__Symbol)i0;
  i0 = (OOC_INT32)state+12;
  i1 = (OOC_INT32)state+36;
  i2 = (OOC_INT32)state+8;
l1_loop:
  i3 = (OOC_INT32)sym;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17710))+4);
  i4 = i4==52;
  if (i4) goto l4;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17751))+4);
  i4 = i4==50;
  
  goto l6;
l4:
  i4=1u;
l6:
  if (i4) goto l8;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17795))+4);
  i4 = i4==49;
  
  goto l9;
l8:
  i4=1u;
l9:
  nested = i4;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17829))+4);
  i4 = i4==52;
  if (i4) goto l12;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17854))+4);
  i4 = i4==50;
  
  goto l14;
l12:
  i4=1u;
l14:
  if (i4) goto l96;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 18482))+4);
  i4 = i4==49;
  if (i4) goto l90;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 18730))+4);
  i4 = i4==48;
  if (i4) goto l77;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 19192))+4);
  i4 = i4==45;
  if (i4) goto l22;
  i4=0u;
  goto l24;
l22:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19219))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 19224)),(const void*)"DEFINE"))==0;
  
l24:
  if (i4) goto l75;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 19319))+4);
  i4 = i4==45;
  if (i4) goto l28;
  i4=0u;
  goto l30;
l28:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19346))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 19351)),(const void*)"PUSH"))==0;
  
l30:
  if (i4) goto l70;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 19484))+4);
  i4 = i4==45;
  if (i4) goto l34;
  i4=0u;
  goto l36;
l34:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19511))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 19516)),(const void*)"POP"))==0;
  
l36:
  if (i4) goto l61;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 19784))+4);
  i4 = i4==58;
  if (i4) goto l43;
  i3 = *(OOC_INT8*)((_check_pointer(i3, 20498))+4);
  i3 = i3==45;
  if (!i3) goto l109;
  i3 = *(OOC_UINT8*)i0;
  OOC_Scanner_Pragma__ParsePragma_Assignment(0u, i3);
  goto l109;
l43:
  OOC_Scanner_Pragma__ParsePragma_PushCond();
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  *(OOC_UINT8*)((_check_pointer(i3, 19849))+11) = 1u;
  *(OOC_UINT8*)((_check_pointer(i3, 19892))+10) = 1u;
  i3 = *(OOC_UINT8*)i0;
  if (!i3) goto l46;
  i3 = (OOC_INT32)*(OOC_INT32*)i1;
  OOC_Config_Pragmas__HistoryDesc_Push((OOC_Config_Pragmas__History)i3);
l46:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i3 = (OOC_INT32)sym;
  i3 = *(OOC_INT8*)((_check_pointer(i3, 20188))+4);
  i3 = i3==45;
  if (!i3) goto l49;
  i3 = *(OOC_UINT8*)i0;
  OOC_Scanner_Pragma__ParsePragma_Assignment(0u, i3);
l49:
  i3 = (OOC_INT32)sym;
  i3 = *(OOC_INT8*)((_check_pointer(i3, 20289))+4);
  i3 = i3==46;
  if (!i3) goto l59;
l51_loop:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i3 = (OOC_INT32)sym;
  i3 = *(OOC_INT8*)((_check_pointer(i3, 20352))+4);
  i3 = i3==45;
  if (!i3) goto l54;
  i3 = *(OOC_UINT8*)i0;
  OOC_Scanner_Pragma__ParsePragma_Assignment(0u, i3);
l54:
  i3 = (OOC_INT32)sym;
  i3 = *(OOC_INT8*)((_check_pointer(i3, 20289))+4);
  i3 = i3==46;
  if (i3) goto l51_loop;
l59:
  OOC_Scanner_Pragma__ParsePragma_CheckSym(29);
  goto l109;
l61:
  i4 = *(OOC_UINT8*)i0;
  if (!i4) goto l68;
  i4 = (OOC_INT32)*(OOC_INT32*)i1;
  i5 = *(OOC_INT32*)((_check_pointer(i4, 19600))+16);
  i5 = i5==0;
  if (i5) goto l66;
  i3 = *(OOC_INT32*)((_check_pointer(i3, 19718))+16);
  OOC_Config_Pragmas__HistoryDesc_Pop((OOC_Config_Pragmas__History)i4, i3);
  goto l68;
l66:
  OOC_Scanner_Pragma__ParsePragma_Err(16, (OOC_Scanner_BasicList__Symbol)i3);
l68:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  goto l109;
l70:
  i3 = *(OOC_UINT8*)i0;
  if (!i3) goto l73;
  i3 = (OOC_INT32)*(OOC_INT32*)i1;
  OOC_Config_Pragmas__HistoryDesc_Push((OOC_Config_Pragmas__History)i3);
l73:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  goto l109;
l75:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i3 = *(OOC_UINT8*)i0;
  OOC_Scanner_Pragma__ParsePragma_Assignment(1u, i3);
  goto l109;
l77:
  OOC_Scanner_Pragma__ParsePragma_CheckForIf(0u);
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  i3 = *(OOC_UINT8*)((_check_pointer(i3, 18826))+8);
  i3 = !i3;
  *(OOC_UINT8*)i0 = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)i2;
  i4 = *(OOC_UINT8*)((_check_pointer(i4, 18867))+11);
  if (i4) goto l82;
  i3=0u;
l82:
  if (!i3) goto l88;
  i3 = (OOC_INT32)*(OOC_INT32*)i1;
  i4 = *(OOC_INT32*)((_check_pointer(i3, 18935))+16);
  i4 = i4==0;
  if (i4) goto l86;
  i4 = (OOC_INT32)sym;
  i4 = *(OOC_INT32*)((_check_pointer(i4, 19049))+16);
  OOC_Config_Pragmas__HistoryDesc_Pop((OOC_Config_Pragmas__History)i3, i4);
  goto l88;
l86:
  i3 = (OOC_INT32)sym;
  OOC_Scanner_Pragma__ParsePragma_Err(16, (OOC_Scanner_BasicList__Symbol)i3);
l88:
  OOC_Scanner_Pragma__ParsePragma_PopCond();
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  goto l109;
l90:
  OOC_Scanner_Pragma__ParsePragma_CheckForIf(1u);
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  *(OOC_UINT8*)((_check_pointer(i3, 18558))+10) = 1u;
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  i4 = *(OOC_UINT8*)((_check_pointer(i3, 18642))+8);
  i4 = !i4;
  if (i4) goto l93;
  i3=0u;
  goto l94;
l93:
  i3 = *(OOC_UINT8*)((_check_pointer(i3, 18703))+9);
  i3 = !i3;
  
l94:
  *(OOC_UINT8*)i0 = i3;
  goto l109;
l96:
  i3 = *(OOC_INT8*)((_check_pointer(i3, 17895))+4);
  i3 = i3==52;
  if (i3) goto l99;
  OOC_Scanner_Pragma__ParsePragma_CheckForIf(1u);
  goto l100;
l99:
  OOC_Scanner_Pragma__ParsePragma_PushCond();
l100:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  i4 = *(OOC_UINT8*)((_check_pointer(i3, 18067))+8);
  if (i4) goto l103;
  i4 = *(OOC_UINT8*)((_check_pointer(i3, 18100))+9);
  
  goto l105;
l103:
  i4=1u;
l105:
  if (i4) goto l107;
  i4 = OOC_Scanner_Pragma__ParsePragma_BoolExpression(1u);
  *(OOC_UINT8*)((_check_pointer(i3, 18327))+9) = i4;
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  i3 = *(OOC_UINT8*)((_check_pointer(i3, 18410))+9);
  *(OOC_UINT8*)i0 = i3;
  goto l108;
l107:
  i3 = OOC_Scanner_Pragma__ParsePragma_BoolExpression(0u);
  dummy = i3;
  *(OOC_UINT8*)i0 = 0u;
l108:
  OOC_Scanner_Pragma__ParsePragma_CheckSym(28);
l109:
  i3 = (OOC_INT32)sym;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 20592))+4);
  i4 = i4==46;
  if (!i4) goto l111;
  goto l123;
l111:
  i4 = *(OOC_INT8*)((_check_pointer(i3, 20654))+4);
  i4 = i4!=48;
  if (i4) goto l114;
  i3=0u;
  goto l120;
l114:
  i3 = *(OOC_INT8*)((_check_pointer(i3, 20692))+4);
  i3 = i3==75;
  if (i3) goto l117;
  i3 = nested;
  i3 = !i3;
  
  goto l120;
l117:
  i3=1u;
l120:
  if (!i3) goto l1_loop;
  goto l125;
l123:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  goto l1_loop;
l125:
  OOC_Scanner_Pragma__ParsePragma_CheckSym(75);
  i0 = *(OOC_UINT8*)i0;
  if (i0) goto l128;
  return 2;
  goto l129;
l128:
  return 0;
l129:
  _failed_function(5923); return 0;
  ;
}

void OOC_Scanner_Pragma__AddSymbol(struct OOC_Scanner_Pragma__State *state, RT0__Struct state__tag, OOC_INT8 *inputMode, OOC_INT8 id, OOC_INT32 cstart, OOC_INT32 cend, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Msg__Msg lastError;
  auto void OOC_Scanner_Pragma__AddSymbol_Err(OOC_INT32 code);
  auto void OOC_Scanner_Pragma__AddSymbol_ErrSym(OOC_INT32 code, OOC_Scanner_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__AddSymbol_EndOfPragma(void);
  auto void OOC_Scanner_Pragma__AddSymbol_EndOfFile(void);
    
    void OOC_Scanner_Pragma__AddSymbol_Err(OOC_INT32 code) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)OOC_Scanner_Pragma__pragmaContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 21299))+8);
      i2 = cstart;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21256)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, (i2+i1));
      i0 = (OOC_INT32)lastError;
      i1 = line;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21333)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
      i0 = (OOC_INT32)lastError;
      i1 = column;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21379)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21433))+20);
      i1 = (OOC_INT32)lastError;
      OOC_Error__ListDesc_Append((OOC_Error__List)i0, (Msg__Msg)i1);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__AddSymbol_ErrSym(OOC_INT32 code, OOC_Scanner_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)OOC_Scanner_Pragma__pragmaContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 21644))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21618)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
      i0 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 21694))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21667)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 21747))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21718)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21777))+20);
      i1 = (OOC_INT32)lastError;
      OOC_Error__ListDesc_Append((OOC_Error__List)i0, (Msg__Msg)i1);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__AddSymbol_EndOfPragma(void) {
      register OOC_INT32 i0,i1,i2,i3,i4;

      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+4);
      i1 = *(OOC_INT32*)((OOC_INT32)state+32);
      i2 = *(OOC_INT32*)((OOC_INT32)state+28);
      i3 = *(OOC_INT32*)((OOC_INT32)state+20);
      i4 = cend;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21881)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i0, 79, i3, i4, i2, i1);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__AddSymbol_EndOfFile(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;

      OOC_Scanner_Pragma__AddSymbol_Err(2);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((OOC_INT32)state+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22108)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i1);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((OOC_INT32)state+28);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22167)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((OOC_INT32)state+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22225)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      OOC_Scanner_Pragma__AddSymbol_EndOfPragma();
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+4);
      i1 = id;
      i2 = cstart;
      i3 = cend;
      i4 = line;
      i5 = column;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22311)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i0, i1, i2, i3, i4, i5);
      return;
      ;
    }


  i0 = *inputMode;
  switch (i0) {
  case 0:
    i0 = id;
    switch (i0) {
    case 74:
      *inputMode = 1;
      i0 = cstart;
      *(OOC_INT32*)((OOC_INT32)state+20) = i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 22593))+8);
      *(OOC_INT32*)((OOC_INT32)state+24) = (i0+i1);
      i0 = line;
      *(OOC_INT32*)((OOC_INT32)state+28) = i0;
      i0 = column;
      *(OOC_INT32*)((OOC_INT32)state+32) = i0;
      goto l33;
    case 72:
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+8);
      i1 = i0!=0;
      if (!i1) goto l12;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 22777))+11);
      if (i1) goto l10;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22917))+4);
      OOC_Scanner_Pragma__AddSymbol_ErrSym(12, (OOC_Scanner_BasicList__Symbol)i0);
      goto l12;
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22844))+4);
      OOC_Scanner_Pragma__AddSymbol_ErrSym(17, (OOC_Scanner_BasicList__Symbol)i0);
l12:
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+4);
      i1 = cstart;
      i2 = cend;
      i3 = line;
      i4 = column;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22976)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i0, 72, i1, i2, i3, i4);
      goto l33;
    default:
      _failed_case(i0, 22431);
      goto l33;
    }
    /* goto: unreachable */
  case 1:
    i0 = id;
    switch (i0) {
    case 74:
      OOC_Scanner_Pragma__AddSymbol_Err(1);
      goto l33;
    case 75:
      i1 = (OOC_INT32)state+16;
      i2 = (OOC_INT32)*(OOC_INT32*)i1;
      i3 = column;
      i4 = line;
      i5 = cend;
      i6 = cstart;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23193)))), OOC_Scanner_BasicList__BuilderDesc_AddSymbol)),OOC_Scanner_BasicList__BuilderDesc_AddSymbol)((OOC_Scanner_BasicList__Builder)i2, i0, i6, i5, i4, i3);
      i0 = OOC_Scanner_Pragma__ParsePragma((void*)(OOC_INT32)state, (RT0__Struct)((OOC_INT32)state__tag));
      *inputMode = i0;
      i0 = i0==0;
      if (!i0) goto l21;
      OOC_Scanner_Pragma__AddSymbol_EndOfPragma();
l21:
      i0 = (OOC_INT32)*(OOC_INT32*)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23378)))), OOC_Scanner_BasicList__BuilderDesc_Clear)),OOC_Scanner_BasicList__BuilderDesc_Clear)((OOC_Scanner_BasicList__Builder)i0);
      goto l33;
    case 72:
      OOC_Scanner_Pragma__AddSymbol_EndOfFile();
      goto l33;
    default:
      i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+16);
      i2 = column;
      i3 = line;
      i4 = cend;
      i5 = cstart;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23500)))), OOC_Scanner_BasicList__BuilderDesc_AddSymbol)),OOC_Scanner_BasicList__BuilderDesc_AddSymbol)((OOC_Scanner_BasicList__Builder)i1, i0, i5, i4, i3, i2);
      goto l33;
    }
    /* goto: unreachable */
  case 2:
    i0 = id;
    switch (i0) {
    case 74:
      *inputMode = 1;
      goto l33;
    case 75:
      goto l33;
    case 72:
      OOC_Scanner_Pragma__AddSymbol_EndOfFile();
      goto l33;
    default:
      goto l33;
    }
    /* goto: unreachable */
  default:
    _failed_case(i0, 22390);
    goto l33;
  }
l33:
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
