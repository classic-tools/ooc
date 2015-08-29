#include <OOC/Scanner/Pragma.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_Scanner_Pragma__ErrorContextDesc_GetTemplate(OOC_Scanner_Pragma__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3839))+8);
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
    _failed_case(i1, 3831);
    goto l19;
  }
l19:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4891)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

void OOC_Scanner_Pragma__Init(struct OOC_Scanner_Pragma__State *state, RT0__Struct state__tag, OOC_Scanner_Builder__Builder builder, OOC_Config_Pragmas__Section defaultPragmas) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)builder;
  *(OOC_INT32*)((OOC_INT32)state+4) = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5701));
  *(OOC_INT32*)(OOC_INT32)state = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5760));
  i0 = (OOC_INT32)OOC_Scanner_Builder_BasicList__New((OOC_Scanner_InputBuffer__Buffer)i0, 0u);
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
  OOC_Scanner_Builder_BasicList__Symbol prevSym;
  OOC_Scanner_Builder_BasicList__Symbol sym;
  OOC_CHAR8 nested;
  OOC_CHAR8 dummy;
  OOC_CHAR8 err;
  auto void OOC_Scanner_Pragma__ParsePragma_AppendErr(OOC_Scanner_Builder_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__ParsePragma_Err(OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__ParsePragma_CheckName(OOC_Scanner_Builder_BasicList__Symbol sym);
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
    
    void OOC_Scanner_Pragma__ParsePragma_AppendErr(OOC_Scanner_Builder_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 6320))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6294)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
      i0 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 6370))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6343)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 6423))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6394)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6453))+20);
      i1 = (OOC_INT32)lastError;
      OOC_Error__ListDesc_Append((OOC_Error__List)i0, (Msg__Msg)i1);
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6779))+8);
      name = (OOC_Scanner_InputBuffer__CharArray)i1;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6800)),(const void*)"TRUE"))==0;
      if (i2) goto l3;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6820)),(const void*)"FALSE"))==0;
      
      goto l5;
l3:
      i2=1u;
l5:
      if (i2) goto l7;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6841)),(const void*)"PUSH"))==0;
      
      goto l9;
l7:
      i2=1u;
l9:
      if (i2) goto l11;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6871)),(const void*)"POP"))==0;
      
      goto l13;
l11:
      i2=1u;
l13:
      if (i2) goto l15;
      i1 = (
      _cmp8((const void*)(_check_pointer(i1, 6890)),(const void*)"DEFINE"))==0;
      
      goto l17;
l15:
      i1=1u;
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
      i1 = i0!=0;
      if (i1) goto l3;
      i0=0u;
      goto l5;
l3:
      i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7092)))), &_td_Config_Value_Boolean__ValueDesc));
      
l5:
      if (!i0) goto l10;
      i0 = eval;
      if (!i0) goto l9;
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)value+4);
      OOC_Scanner_Pragma__ParsePragma_Err(10, (OOC_Scanner_Builder_BasicList__Symbol)i0);
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
      prevSym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7353));
      sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_CheckSym(OOC_INT8 symId) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 7444))+4);
      i2 = symId;
      i1 = i1!=i2;
      if (i1) goto l3;
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      goto l11;
l3:
      i1 = OOC_Scanner_Symbol__IsKeyword(i2);
      if (i1) goto l6;
      OOC_Scanner_Pragma__ParsePragma_Err(4, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l7;
l6:
      OOC_Scanner_Pragma__ParsePragma_Err(3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l7:
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(i2, 81, OOC_UINT8, 7717))*10)), 10);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7616)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "sym_name", 9, (Msg__StringPtr)i1);
      i0 = (OOC_INT32)sym;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7743));
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
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7953)))), &_td_Config_Value_Boolean__ValueDesc);
      
l5:
      if (i1) goto l7;
      return 0u;
      goto l8;
l7:
      i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8022)))), &_td_Config_Value_Boolean__ValueDesc, 8022)), 8028));
      return i0;
l8:
      _failed_function(7864); return 0;
      ;
    }

    
    OOC_INT32 OOC_Scanner_Pragma__ParsePragma_GetInt(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref) {
      register OOC_INT32 i0;
      OOC_ALLOCATE_VPAR(value,OOC_Scanner_Pragma__ParsePragma_Value ,1)

      OOC_INITIALIZE_VPAR(value__ref,value,OOC_Scanner_Pragma__ParsePragma_Value ,8)
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i0 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8201)))), &_td_Config_Value_Integer__ValueDesc, 8201)), 8207));
      return i0;
      ;
    }

    
    Config_Value__StringPtr OOC_Scanner_Pragma__ParsePragma_GetString(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref) {
      register OOC_INT32 i0;
      OOC_ALLOCATE_VPAR(value,OOC_Scanner_Pragma__ParsePragma_Value ,1)

      OOC_INITIALIZE_VPAR(value__ref,value,OOC_Scanner_Pragma__ParsePragma_Value ,8)
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8338)))), &_td_Config_Value_String__ValueDesc, 8338)), 8344));
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

                  *(OOC_INT32*)(OOC_INT32)value = 0;
                  i0 = (OOC_INT32)sym;
                  *(OOC_INT32*)((OOC_INT32)value+4) = i0;
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 9010))+4);
                  switch (i1) {
                  case 45:
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9067))+8);
                    i1 = (
                    _cmp8((const void*)(_check_pointer(i1, 9072)),(const void*)"FALSE"))==0;
                    if (i1) goto l5;
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9092))+8);
                    i1 = (
                    _cmp8((const void*)(_check_pointer(i1, 9097)),(const void*)"TRUE"))==0;
                    
                    goto l7;
l5:
                    i1=1u;
l7:
                    if (i1) goto l16;
                    OOC_Scanner_Pragma__ParsePragma_CheckName((OOC_Scanner_Builder_BasicList__Symbol)i0);
                    i0 = (OOC_INT32)sym;
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9377))+8);
                    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9377))+8);
                    i3 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+36);
                    i0 = *(OOC_INT32*)((_check_pointer(i0, 9388))+16);
                    i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9382)), 0);
                    i0 = (OOC_INT32)OOC_Config_Pragmas__HistoryDesc_GetValue((OOC_Config_Pragmas__History)i3, (void*)(_check_pointer(i1, 9382)), i2, i0);
                    i1 = i0!=0;
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
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9206))+8);
                    i0 = (OOC_INT32)Config_Value_Boolean__New(((
                    _cmp8((const void*)(_check_pointer(i0, 9211)),(const void*)"TRUE"))==0));
                    *(OOC_INT32*)(OOC_INT32)value = i0;
l17:
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 37:
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9754))+8);
                    i0 = (OOC_INT32)OOC_Scanner_Integer__Convert10((OOC_Scanner_InputBuffer__CharArray)i0, (void*)(OOC_INT32)&_int);
                    lastError = (Msg__Msg)i0;
                    i0 = i0!=0;
                    if (!i0) goto l21;
                    i0 = (OOC_INT32)sym;
                    OOC_Scanner_Pragma__ParsePragma_AppendErr((OOC_Scanner_Builder_BasicList__Symbol)i0);
l21:
                    i0 = _int;
                    i0 = (OOC_INT32)Config_Value_Integer__New(i0);
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 38:
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10071))+8);
                    i0 = (OOC_INT32)OOC_Scanner_Integer__Convert16((OOC_Scanner_InputBuffer__CharArray)i0, (void*)(OOC_INT32)&_int);
                    lastError = (Msg__Msg)i0;
                    i0 = i0!=0;
                    if (!i0) goto l25;
                    i0 = (OOC_INT32)sym;
                    OOC_Scanner_Pragma__ParsePragma_AppendErr((OOC_Scanner_Builder_BasicList__Symbol)i0);
l25:
                    i0 = _int;
                    i0 = (OOC_INT32)Config_Value_Integer__New(i0);
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 43:
                  case 44:
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10391))+8);
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10391))+8);
                    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10396)), 0);
                    i0 = (OOC_INT32)Config_Value_String__New((void*)(_check_pointer(i1, 10396)), i0);
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10455)))), &_td_Config_Value_String__ValueDesc, 10455)), 10461));
                    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10455)))), &_td_Config_Value_String__ValueDesc, 10455)), 10461));
                    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10469)), 0);
                    Strings__Delete((void*)(_check_pointer(i1, 10469)), i0, 0, 1);
                    i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
                    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10534)))), &_td_Config_Value_String__ValueDesc, 10534)), 10540));
                    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10534)))), &_td_Config_Value_String__ValueDesc, 10534)), 10540));
                    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10608)))), &_td_Config_Value_String__ValueDesc, 10608)), 10614));
                    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10608)))), &_td_Config_Value_String__ValueDesc, 10608)), 10614));
                    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10622)), 0);
                    i0 = Strings__Length((void*)(_check_pointer(i3, 10622)), i0);
                    i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 10548)), 0);
                    Strings__Delete((void*)(_check_pointer(i1, 10548)), i2, (i0-1), 1);
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
              i0 = *(OOC_INT8*)((_check_pointer(i0, 11317))+4);
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
              i3 = *(OOC_INT8*)((_check_pointer(i3, 11317))+4);
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
          i0 = *(OOC_INT8*)((_check_pointer(i0, 11717))+4);
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
          i3 = *(OOC_INT8*)((_check_pointer(i3, 11717))+4);
          i3 = i3==8;
          if (i3) goto l3_loop;
l20:
          return;
          ;
        }


      i0 = eval;
      OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr(i0, (void*)(OOC_INT32)value, (RT0__Struct)((OOC_INT32)value__tag));
      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 12118))+4);
      i1 = 9<=i1;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 12130))+4);
      i1 = i1<=14;
      
l5:
      if (!i1) goto l70;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 12172))+4);
      op = i1;
      pos = (OOC_Scanner_Builder_BasicList__Symbol)i0;
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
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12435)))), &_td_Config_Value_Boolean__ValueDesc);
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
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12653)))), &_td_Config_Value_Boolean__ValueDesc);
      if (i2) goto l59;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12974)))), &_td_Config_Value_Integer__ValueDesc);
      if (i2) goto l48;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13727)))), &_td_Config_Value_String__ValueDesc);
      if (!i1) goto l69;
      i1 = (OOC_INT32)OOC_Scanner_Pragma__ParsePragma_GetString((void*)(OOC_INT32)value);
      leftString = (Config_Value__StringPtr)i1;
      i2 = (OOC_INT32)OOC_Scanner_Pragma__ParsePragma_GetString((void*)(OOC_INT32)&right);
      rightString = (Config_Value__StringPtr)i2;
      i3 = op;
      switch (i3) {
      case 9:
        i1 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i1, 13954)),(const void*)(_check_pointer(i2, 13969))))==0));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 10:
        i1 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i1, 14058)),(const void*)(_check_pointer(i2, 14073))))!=0));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 11:
        i1 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i1, 14162)),(const void*)(_check_pointer(i2, 14177))))<0));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 12:
        i1 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i1, 14266)),(const void*)(_check_pointer(i2, 14282))))<=0));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 13:
        i1 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i1, 14371)),(const void*)(_check_pointer(i2, 14386))))>0));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      case 14:
        i1 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i1, 14475)),(const void*)(_check_pointer(i2, 14491))))>=0));
        *(OOC_INT32*)(OOC_INT32)value = i1;
        goto l69;
      default:
        _failed_case(i3, 13857);
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
        _failed_case(i1, 13014);
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
        _failed_case(i1, 12693);
        goto l69;
      }
l67:
      OOC_Scanner_Pragma__ParsePragma_Err(8, (OOC_Scanner_Builder_BasicList__Symbol)i0);
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
      *(OOC_INT32*)(_check_pointer(i0, 14967)) = i2;
      i2 = (OOC_INT32)sym;
      *(OOC_INT32*)((_check_pointer(i0, 15005))+4) = i2;
      i2 = *(OOC_UINT8*)((OOC_INT32)state+12);
      *(OOC_UINT8*)((_check_pointer(i0, 15031))+8) = (!i2);
      *(OOC_UINT8*)((_check_pointer(i0, 15076))+9) = 0u;
      *(OOC_UINT8*)((_check_pointer(i0, 15108))+10) = 0u;
      *(OOC_UINT8*)((_check_pointer(i0, 15142))+11) = 0u;
      *(OOC_INT32*)i1 = i0;
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_PopCond(void) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)state+8;
      i1 = (OOC_INT32)*(OOC_INT32*)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15289));
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
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 15614))+10);
      
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
      i1 = *(OOC_INT8*)((_check_pointer(i0, 15987))+4);
      i1 = i1==45;
      if (i1) goto l3;
      OOC_Scanner_Pragma__ParsePragma_Err(5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l45;
l3:
      i1 = eval;
      if (i1) goto l6;
      OOC_Scanner_Pragma__ParsePragma_CheckName((OOC_Scanner_Builder_BasicList__Symbol)i0);
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      OOC_Scanner_Pragma__ParsePragma_CheckSym(36);
      OOC_Scanner_Pragma__ParsePragma_Expression(i1, (void*)(OOC_INT32)&value, (RT0__Struct)((OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value));
      goto l45;
l6:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16093))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16093))+8);
      i4 = (OOC_INT32)state+36;
      i5 = (OOC_INT32)*(OOC_INT32*)i4;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 16098)), 0);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 16104))+16);
      i0 = (OOC_INT32)OOC_Config_Pragmas__HistoryDesc_GetValue((OOC_Config_Pragmas__History)i5, (void*)(_check_pointer(i2, 16098)), i3, i0);
      varValue = (Config_Value__Value)i0;
      i2 = (OOC_INT32)sym;
      pos = (OOC_Scanner_Builder_BasicList__Symbol)i2;
      OOC_Scanner_Pragma__ParsePragma_CheckName((OOC_Scanner_Builder_BasicList__Symbol)i2);
      i2 = (OOC_INT32)sym;
      name = (OOC_Scanner_Builder_BasicList__Symbol)i2;
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
      OOC_Scanner_Pragma__ParsePragma_Err(14, (OOC_Scanner_Builder_BasicList__Symbol)i2);
      goto l21;
l20:
      OOC_Scanner_Pragma__ParsePragma_Err(7, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l21:
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      OOC_Scanner_Pragma__ParsePragma_CheckSym(36);
      OOC_Scanner_Pragma__ParsePragma_Expression(i1, (void*)(OOC_INT32)&value, (RT0__Struct)((OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value));
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)&value;
      i5 = i1!=(OOC_INT32)0;
      if (!i5) goto l45;
l24:
      if (i3) goto l41;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16688)))), &_td_Config_Value_Boolean__ValueDesc);
      if (i3) goto l36;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16797)))), &_td_Config_Value_Integer__ValueDesc);
      if (i3) goto l34;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16906)))), &_td_Config_Value_String__ValueDesc);
      if (i3) goto l32;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16896)))), 16896);
      goto l37;
l32:
      err = (!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16967)))), &_td_Config_Value_String__ValueDesc)));
      goto l37;
l34:
      err = (!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16859)))), &_td_Config_Value_Integer__ValueDesc)));
      goto l37;
l36:
      err = (!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16750)))), &_td_Config_Value_Boolean__ValueDesc)));
l37:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17060))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17060))+8);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 17072))+16);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 17065)), 0);
      i4 = (OOC_INT32)*(OOC_INT32*)i4;
      OOC_Config_Pragmas__HistoryDesc_SetValue((OOC_Config_Pragmas__History)i4, (void*)(_check_pointer(i0, 17065)), i3, i2, (Config_Value__Value)i1);
      i0 = err;
      if (!i0) goto l45;
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)&value+4);
      OOC_Scanner_Pragma__ParsePragma_Err(15, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l45;
l41:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16611))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16611))+8);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 16623))+16);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 16616)), 0);
      i4 = (OOC_INT32)*(OOC_INT32*)i4;
      OOC_Config_Pragmas__HistoryDesc_SetValue((OOC_Config_Pragmas__History)i4, (void*)(_check_pointer(i0, 16616)), i3, i2, (Config_Value__Value)i1);
l45:
      return;
      ;
    }


  lastError = (Msg__Msg)(OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+16);
  prevSym = (OOC_Scanner_Builder_BasicList__Symbol)(OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17676))+8);
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
  i0 = (OOC_INT32)state+12;
  i1 = (OOC_INT32)state+36;
  i2 = (OOC_INT32)state+8;
l1_loop:
  i3 = (OOC_INT32)sym;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17718))+4);
  i4 = i4==52;
  if (i4) goto l4;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17759))+4);
  i4 = i4==50;
  
  goto l6;
l4:
  i4=1u;
l6:
  if (i4) goto l8;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17803))+4);
  i4 = i4==49;
  
  goto l9;
l8:
  i4=1u;
l9:
  nested = i4;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17837))+4);
  i4 = i4==52;
  if (i4) goto l12;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 17862))+4);
  i4 = i4==50;
  
  goto l14;
l12:
  i4=1u;
l14:
  if (i4) goto l96;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 18490))+4);
  i4 = i4==49;
  if (i4) goto l90;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 18738))+4);
  i4 = i4==48;
  if (i4) goto l77;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 19200))+4);
  i4 = i4==45;
  if (i4) goto l22;
  i4=0u;
  goto l24;
l22:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19227))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 19232)),(const void*)"DEFINE"))==0;
  
l24:
  if (i4) goto l75;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 19327))+4);
  i4 = i4==45;
  if (i4) goto l28;
  i4=0u;
  goto l30;
l28:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19354))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 19359)),(const void*)"PUSH"))==0;
  
l30:
  if (i4) goto l70;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 19492))+4);
  i4 = i4==45;
  if (i4) goto l34;
  i4=0u;
  goto l36;
l34:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19519))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 19524)),(const void*)"POP"))==0;
  
l36:
  if (i4) goto l61;
  i4 = *(OOC_INT8*)((_check_pointer(i3, 19792))+4);
  i4 = i4==58;
  if (i4) goto l43;
  i3 = *(OOC_INT8*)((_check_pointer(i3, 20506))+4);
  i3 = i3==45;
  if (!i3) goto l109;
  i3 = *(OOC_UINT8*)i0;
  OOC_Scanner_Pragma__ParsePragma_Assignment(0u, i3);
  goto l109;
l43:
  OOC_Scanner_Pragma__ParsePragma_PushCond();
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  *(OOC_UINT8*)((_check_pointer(i3, 19857))+11) = 1u;
  *(OOC_UINT8*)((_check_pointer(i3, 19900))+10) = 1u;
  i3 = *(OOC_UINT8*)i0;
  if (!i3) goto l46;
  i3 = (OOC_INT32)*(OOC_INT32*)i1;
  OOC_Config_Pragmas__HistoryDesc_Push((OOC_Config_Pragmas__History)i3);
l46:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i3 = (OOC_INT32)sym;
  i3 = *(OOC_INT8*)((_check_pointer(i3, 20196))+4);
  i3 = i3==45;
  if (!i3) goto l49;
  i3 = *(OOC_UINT8*)i0;
  OOC_Scanner_Pragma__ParsePragma_Assignment(0u, i3);
l49:
  i3 = (OOC_INT32)sym;
  i3 = *(OOC_INT8*)((_check_pointer(i3, 20297))+4);
  i3 = i3==46;
  if (!i3) goto l59;
l51_loop:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i3 = (OOC_INT32)sym;
  i3 = *(OOC_INT8*)((_check_pointer(i3, 20360))+4);
  i3 = i3==45;
  if (!i3) goto l54;
  i3 = *(OOC_UINT8*)i0;
  OOC_Scanner_Pragma__ParsePragma_Assignment(0u, i3);
l54:
  i3 = (OOC_INT32)sym;
  i3 = *(OOC_INT8*)((_check_pointer(i3, 20297))+4);
  i3 = i3==46;
  if (i3) goto l51_loop;
l59:
  OOC_Scanner_Pragma__ParsePragma_CheckSym(29);
  goto l109;
l61:
  i4 = *(OOC_UINT8*)i0;
  if (!i4) goto l68;
  i4 = (OOC_INT32)*(OOC_INT32*)i1;
  i5 = *(OOC_INT32*)((_check_pointer(i4, 19608))+16);
  i5 = i5==0;
  if (i5) goto l66;
  i3 = *(OOC_INT32*)((_check_pointer(i3, 19726))+16);
  OOC_Config_Pragmas__HistoryDesc_Pop((OOC_Config_Pragmas__History)i4, i3);
  goto l68;
l66:
  OOC_Scanner_Pragma__ParsePragma_Err(16, (OOC_Scanner_Builder_BasicList__Symbol)i3);
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
  i3 = *(OOC_UINT8*)((_check_pointer(i3, 18834))+8);
  i3 = !i3;
  *(OOC_UINT8*)i0 = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)i2;
  i4 = *(OOC_UINT8*)((_check_pointer(i4, 18875))+11);
  if (i4) goto l82;
  i3=0u;
l82:
  if (!i3) goto l88;
  i3 = (OOC_INT32)*(OOC_INT32*)i1;
  i4 = *(OOC_INT32*)((_check_pointer(i3, 18943))+16);
  i4 = i4==0;
  if (i4) goto l86;
  i4 = (OOC_INT32)sym;
  i4 = *(OOC_INT32*)((_check_pointer(i4, 19057))+16);
  OOC_Config_Pragmas__HistoryDesc_Pop((OOC_Config_Pragmas__History)i3, i4);
  goto l88;
l86:
  i3 = (OOC_INT32)sym;
  OOC_Scanner_Pragma__ParsePragma_Err(16, (OOC_Scanner_Builder_BasicList__Symbol)i3);
l88:
  OOC_Scanner_Pragma__ParsePragma_PopCond();
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  goto l109;
l90:
  OOC_Scanner_Pragma__ParsePragma_CheckForIf(1u);
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  *(OOC_UINT8*)((_check_pointer(i3, 18566))+10) = 1u;
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  i4 = *(OOC_UINT8*)((_check_pointer(i3, 18650))+8);
  i4 = !i4;
  if (i4) goto l93;
  i3=0u;
  goto l94;
l93:
  i3 = *(OOC_UINT8*)((_check_pointer(i3, 18711))+9);
  i3 = !i3;
  
l94:
  *(OOC_UINT8*)i0 = i3;
  goto l109;
l96:
  i3 = *(OOC_INT8*)((_check_pointer(i3, 17903))+4);
  i3 = i3==52;
  if (i3) goto l99;
  OOC_Scanner_Pragma__ParsePragma_CheckForIf(1u);
  goto l100;
l99:
  OOC_Scanner_Pragma__ParsePragma_PushCond();
l100:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  i4 = *(OOC_UINT8*)((_check_pointer(i3, 18075))+8);
  if (i4) goto l103;
  i4 = *(OOC_UINT8*)((_check_pointer(i3, 18108))+9);
  
  goto l105;
l103:
  i4=1u;
l105:
  if (i4) goto l107;
  i4 = OOC_Scanner_Pragma__ParsePragma_BoolExpression(1u);
  *(OOC_UINT8*)((_check_pointer(i3, 18335))+9) = i4;
  i3 = (OOC_INT32)*(OOC_INT32*)i2;
  i3 = *(OOC_UINT8*)((_check_pointer(i3, 18418))+9);
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
  i4 = *(OOC_INT8*)((_check_pointer(i3, 20600))+4);
  i4 = i4==46;
  if (!i4) goto l111;
  goto l123;
l111:
  i4 = *(OOC_INT8*)((_check_pointer(i3, 20662))+4);
  i4 = i4!=48;
  if (i4) goto l114;
  i3=0u;
  goto l120;
l114:
  i3 = *(OOC_INT8*)((_check_pointer(i3, 20700))+4);
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
  _failed_function(5931); return 0;
  ;
}

void OOC_Scanner_Pragma__AddSymbol(struct OOC_Scanner_Pragma__State *state, RT0__Struct state__tag, OOC_INT8 *inputMode, OOC_INT8 id, OOC_INT32 cstart, OOC_INT32 cend, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Msg__Msg lastError;
  auto void OOC_Scanner_Pragma__AddSymbol_Err(OOC_INT32 code);
  auto void OOC_Scanner_Pragma__AddSymbol_ErrSym(OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__AddSymbol_EndOfPragma(void);
  auto void OOC_Scanner_Pragma__AddSymbol_EndOfFile(void);
    
    void OOC_Scanner_Pragma__AddSymbol_Err(OOC_INT32 code) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)OOC_Scanner_Pragma__pragmaContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 21307))+8);
      i2 = cstart;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21264)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, (i2+i1));
      i0 = (OOC_INT32)lastError;
      i1 = line;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21341)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
      i0 = (OOC_INT32)lastError;
      i1 = column;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21387)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21441))+20);
      i1 = (OOC_INT32)lastError;
      OOC_Error__ListDesc_Append((OOC_Error__List)i0, (Msg__Msg)i1);
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
      i2 = *(OOC_INT32*)((_check_pointer(i1, 21652))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21626)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
      i0 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 21702))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21675)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 21755))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21726)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21785))+20);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21889)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i0, 79, i3, i4, i2, i1);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__AddSymbol_EndOfFile(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;

      OOC_Scanner_Pragma__AddSymbol_Err(2);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((OOC_INT32)state+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22116)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i1);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((OOC_INT32)state+28);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22175)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((OOC_INT32)state+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22233)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      OOC_Scanner_Pragma__AddSymbol_EndOfPragma();
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+4);
      i1 = id;
      i2 = cstart;
      i3 = cend;
      i4 = line;
      i5 = column;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22319)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i0, i1, i2, i3, i4, i5);
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
      i1 = *(OOC_INT32*)((_check_pointer(i1, 22601))+8);
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
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 22785))+11);
      if (i1) goto l10;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22925))+4);
      OOC_Scanner_Pragma__AddSymbol_ErrSym(12, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l12;
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22852))+4);
      OOC_Scanner_Pragma__AddSymbol_ErrSym(17, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l12:
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+4);
      i1 = cstart;
      i2 = cend;
      i3 = line;
      i4 = column;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22984)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i0, 72, i1, i2, i3, i4);
      goto l33;
    default:
      _failed_case(i0, 22439);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23201)))), OOC_Scanner_Builder_BasicList__BuilderDesc_AddSymbol)),OOC_Scanner_Builder_BasicList__BuilderDesc_AddSymbol)((OOC_Scanner_Builder_BasicList__Builder)i2, i0, i6, i5, i4, i3);
      i0 = OOC_Scanner_Pragma__ParsePragma((void*)(OOC_INT32)state, (RT0__Struct)((OOC_INT32)state__tag));
      *inputMode = i0;
      i0 = i0==0;
      if (!i0) goto l21;
      OOC_Scanner_Pragma__AddSymbol_EndOfPragma();
l21:
      i0 = (OOC_INT32)*(OOC_INT32*)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23386)))), OOC_Scanner_Builder_BasicList__BuilderDesc_Clear)),OOC_Scanner_Builder_BasicList__BuilderDesc_Clear)((OOC_Scanner_Builder_BasicList__Builder)i0);
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
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23508)))), OOC_Scanner_Builder_BasicList__BuilderDesc_AddSymbol)),OOC_Scanner_Builder_BasicList__BuilderDesc_AddSymbol)((OOC_Scanner_Builder_BasicList__Builder)i1, i0, i5, i4, i3, i2);
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
    _failed_case(i0, 22398);
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
