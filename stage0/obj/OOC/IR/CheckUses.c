#include <OOC/IR/CheckUses.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_IR_CheckUses__ErrorContextDesc_GetTemplate(OOC_IR_CheckUses__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5042))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,85,110,100,101,102,105,110,101,100,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l9;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,86,97,114,105,97,98,108,101,32,109,97,121,32,98,101,32,117,110,100,101,102,105,110,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l9;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,85,110,114,101,97,99,104,97,98,108,101,32,99,111,100,101,0}),(void*)(OOC_INT32)t,128);
    goto l9;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,67,111,110,116,114,111,108,32,109,97,121,32,114,101,97,99,104,32,101,110,100,32,111,102,32,102,117,110,99,116,105,111,110,32,112,114,111,99,101,100,117,114,101,0}),(void*)(OOC_INT32)t,128);
    goto l9;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,84,121,112,101,32,116,101,115,116,32,109,97,100,101,32,117,110,114,101,97,99,104,97,98,108,101,32,98,121,32,112,114,101,99,101,101,100,105,110,103,32,103,117,97,114,100,0}),(void*)(OOC_INT32)t,128);
    goto l9;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){87,97,114,110,105,110,103,58,32,67,97,108,108,101,101,32,109,97,121,32,114,101,97,100,32,117,110,100,101,102,105,110,101,100,32,118,97,114,105,97,98,108,101,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l9;
  default:
    _failed_case(i1, 5034);
    goto l9;
  }
l9:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5604)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

void OOC_IR_CheckUses__VisitorCallsDesc_VisitCall(OOC_IR_CheckUses__VisitorCalls v, OOC_IR__Call call) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Declaration procDecl;
  Object__Object obj;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)call;
  OOC_IR_VisitAll__VisitorDesc_VisitCall((OOC_IR_VisitAll__Visitor)i0, (OOC_IR__Call)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5823))+8);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5831)))), &_td_OOC_IR__ProcedureRefDesc);
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5884))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5861))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5895)))), &_td_OOC_IR__ProcedureRefDesc, 5895)), 5908))+8);
  i2 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i3, (Object__Object)i2);
  
l5:
  if (!i2) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5942))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5953)))), &_td_OOC_IR__ProcedureRefDesc, 5953)), 5966))+8);
  procDecl = (OOC_SymbolTable__Declaration)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5987))+4);
  i1 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i2, (Object__Object)i1);
  obj = (Object__Object)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6024)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 6024)), 6033));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6050));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6024)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 6024)), 6033));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6041)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
l7:
  return;
  ;
}

static ADT_Dictionary__Dictionary OOC_IR_CheckUses__KnownProcs(OOC_IR__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  ADT_Dictionary__Dictionary knownProcs;
  OOC_INT32 i;
  OOC_IR_CheckUses__ProcData pd;
  OOC_IR_CheckUses__VisitorCalls v;

  i0 = (OOC_INT32)ADT_Dictionary__New();
  knownProcs = (ADT_Dictionary__Dictionary)i0;
  i1 = (OOC_INT32)module;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6492))+8);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6501)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__ProcData.baseTypes[0]);
  pd = (OOC_IR_CheckUses__ProcData)i4;
  i5 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)(_check_pointer(i4, 6532)) = i5;
  i5 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i4, 6570))+4) = i5;
  *(OOC_UINT8*)((_check_pointer(i4, 6603))+8) = 1u;
  *(OOC_UINT8*)((_check_pointer(i4, 6632))+9) = 0u;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6683))+8);
  i5 = _check_pointer(i5, 6692);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 6692))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6695))+4);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i0, (Object__Object)i5, (Object__Object)i4);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__VisitorCalls.baseTypes[0]);
  v = (OOC_IR_CheckUses__VisitorCalls)i2;
  OOC_IR_VisitAll__InitVisitor((OOC_IR_VisitAll__Visitor)i2);
  *(OOC_INT32*)((_check_pointer(i2, 6763))+4) = i0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6819))+8);
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 6828)), 0);
  i4 = 0<i3;
  if (!i4) goto l16;
  i4=0;
l11_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6863))+8);
  i5 = _check_pointer(i5, 6872);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 6872))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6875))+4);
  *(OOC_INT32*)(_check_pointer(i2, 6843)) = i5;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6894))+8);
  i5 = _check_pointer(i5, 6903);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 6903))*4);
  OOC_IR__ProcedureDesc_Accept((OOC_IR__Procedure)i5, (OOC_IR__Visitor)i2);
  i4 = i4+1;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l11_loop;
l16:
  return (ADT_Dictionary__Dictionary)i0;
  ;
}

static OOC_IR_CheckUses__Def OOC_IR_CheckUses__NewDef(void) {
  register OOC_INT32 i0,i1;
  OOC_IR_CheckUses__Def def;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__Def.baseTypes[0]);
  def = (OOC_IR_CheckUses__Def)i0;
  i1 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  *(OOC_INT32*)(_check_pointer(i0, 7046)) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 7078))+4) = 0u;
  return (OOC_IR_CheckUses__Def)i0;
  ;
}

OOC_IR_CheckUses__Def OOC_IR_CheckUses__DefDesc_Copy(OOC_IR_CheckUses__Def def) {
  register OOC_INT32 i0,i1,i2;
  OOC_IR_CheckUses__Def def2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__Def.baseTypes[0]);
  def2 = (OOC_IR_CheckUses__Def)i0;
  i1 = (OOC_INT32)def;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7231));
  i2 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Copy((ADT_Dictionary_IntValue__Dictionary)i2);
  *(OOC_INT32*)(_check_pointer(i0, 7218)) = i2;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 7273))+4);
  *(OOC_UINT8*)((_check_pointer(i0, 7254))+4) = i1;
  return (OOC_IR_CheckUses__Def)i0;
  ;
}

OOC_INT32 OOC_IR_CheckUses__DefDesc_GetClass(OOC_IR_CheckUses__Def def, OOC_SymbolTable__Item var) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)def;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7390));
  i2 = (OOC_INT32)var;
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  return 0;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7430));
  i0 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i2);
  return i0;
l4:
  _failed_function(7338); return 0;
  ;
}

void OOC_IR_CheckUses__DefDesc_SetClass(OOC_IR_CheckUses__Def def, OOC_SymbolTable__Item var, OOC_INT32 _class) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)def;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7583));
  i1 = (OOC_INT32)var;
  i2 = _class;
  ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i1, i2);
  return;
  ;
}

void OOC_IR_CheckUses__DefDesc_Merge(OOC_IR_CheckUses__Def def, OOC_IR_CheckUses__Def def2) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  Object__ObjectArrayPtr k;
  OOC_INT32 i;
  OOC_SymbolTable__Item v;
  auto OOC_INT32 OOC_IR_CheckUses__DefDesc_Merge_Merge(OOC_INT32 a, OOC_INT32 b);
    
    OOC_INT32 OOC_IR_CheckUses__DefDesc_Merge_Merge(OOC_INT32 a, OOC_INT32 b) {
      register OOC_INT32 i0,i1;

      i0 = a;
      i1 = b;
      i1 = i0==i1;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = i0!=1;
      
l5:
      if (i1) goto l7;
      return 1;
      goto l8;
l7:
      return i0;
l8:
      _failed_function(7745); return 0;
      ;
    }


  i0 = (OOC_INT32)def;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 7938))+4);
  if (i1) goto l22;
  i1 = (OOC_INT32)def2;
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 8052))+4);
  i2 = !i2;
  if (!i2) goto l23;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8110));
  i2 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i2);
  k = (Object__ObjectArrayPtr)i2;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8150)), 0);
  i4 = 0<i3;
  if (!i4) goto l12;
  i4=0;
l7_loop:
  i5 = _check_pointer(i2, 8172);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 8172))*4);
  i5 = _type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 8180)))), &_td_OOC_SymbolTable__ItemDesc, 8180);
  v = (OOC_SymbolTable__Item)i5;
  i6 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i5);
  i7 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i5);
  i6 = OOC_IR_CheckUses__DefDesc_Merge_Merge(i6, i7);
  OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i5, i6);
  i4 = i4+1;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l7_loop;
l12:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8287));
  i2 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i2);
  k = (Object__ObjectArrayPtr)i2;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8327)), 0);
  i4 = 0<i3;
  if (!i4) goto l23;
  i4=0;
l15_loop:
  i5 = _check_pointer(i2, 8349);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 8349))*4);
  i5 = _type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 8357)))), &_td_OOC_SymbolTable__ItemDesc, 8357);
  v = (OOC_SymbolTable__Item)i5;
  i6 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i5);
  i7 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i5);
  i6 = OOC_IR_CheckUses__DefDesc_Merge_Merge(i6, i7);
  OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i5, i6);
  i4 = i4+1;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l15_loop;
  goto l23;
l22:
  i1 = (OOC_INT32)def2;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7979));
  i2 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Copy((ADT_Dictionary_IntValue__Dictionary)i2);
  *(OOC_INT32*)(_check_pointer(i0, 7965)) = i2;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 8023))+4);
  *(OOC_UINT8*)((_check_pointer(i0, 8003))+4) = i1;
l23:
  return;
  ;
}

void OOC_IR_CheckUses__DefDesc_Unreachable(OOC_IR_CheckUses__Def def) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)def;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8568));
  ADT_Dictionary_IntValue__DictionaryDesc_Clear((ADT_Dictionary_IntValue__Dictionary)i1);
  *(OOC_UINT8*)((_check_pointer(i0, 8591))+4) = 1u;
  return;
  ;
}

static OOC_IR_CheckUses__Def OOC_IR_CheckUses__NewUnreachableDef(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)OOC_IR_CheckUses__NewDef();
  OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i0);
  return (OOC_IR_CheckUses__Def)i0;
  ;
}

static Msg__Msg OOC_IR_CheckUses__WarnSymE(OOC_Error__List errList, OOC_Config_Pragmas__History pragmaHistory, OOC_Scanner_BasicList__Symbol sym, OOC_INT32 code) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Config_Value__Value value;
  Msg__Msg e;

  i0 = (OOC_INT32)OOC_Config_StdPragmas__warnings;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9031))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9031))+4);
  i2 = (OOC_INT32)sym;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9036)), 0);
  i3 = *(OOC_INT32*)((_check_pointer(i2, 9042))+16);
  i4 = (OOC_INT32)pragmaHistory;
  i0 = (OOC_INT32)OOC_Config_Pragmas__HistoryDesc_GetValue((OOC_Config_Pragmas__History)i4, (void*)(_check_pointer(i1, 9036)), i0, i3);
  value = (Config_Value__Value)i0;
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9070)))), &_td_Config_Value_Boolean__ValueDesc, 9070)), 9076));
  if (i0) goto l3;
  return (Msg__Msg)0;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_IR_CheckUses__checkUsesContext;
  i1 = code;
  i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
  e = (Msg__Msg)i0;
  i1 = *(OOC_INT32*)((_check_pointer(i2, 9167))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9143)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i1);
  i1 = *(OOC_INT32*)((_check_pointer(i2, 9206))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9181)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
  i1 = *(OOC_INT32*)((_check_pointer(i2, 9248))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9221)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
  i1 = (OOC_INT32)errList;
  OOC_Error__ListDesc_Append((OOC_Error__List)i1, (Msg__Msg)i0);
  return (Msg__Msg)i0;
l4:
  _failed_function(8794); return 0;
  ;
}

static void OOC_IR_CheckUses__WarnSym(OOC_Error__List errList, OOC_Config_Pragmas__History pragmaHistory, OOC_Scanner_BasicList__Symbol sym, OOC_INT32 code) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)errList;
  i1 = (OOC_INT32)pragmaHistory;
  i2 = (OOC_INT32)sym;
  i3 = code;
  i0 = (OOC_INT32)OOC_IR_CheckUses__WarnSymE((OOC_Error__List)i0, (OOC_Config_Pragmas__History)i1, (OOC_Scanner_BasicList__Symbol)i2, i3);
  return;
  ;
}

static void OOC_IR_CheckUses__WarnSymV(OOC_IR_CheckUses__Visitor v, OOC_Scanner_BasicList__Symbol sym, OOC_INT32 code, OOC_SymbolTable__VarDecl varDecl) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9731));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9742))+4);
  i2 = (OOC_INT32)sym;
  i3 = code;
  i0 = (OOC_INT32)OOC_IR_CheckUses__WarnSymE((OOC_Error__List)i1, (OOC_Config_Pragmas__History)i0, (OOC_Scanner_BasicList__Symbol)i2, i3);
  e = (Msg__Msg)i0;
  i1 = i0!=0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)varDecl;
  i1 = i1!=0;
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)varDecl;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9866))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9871))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9866))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9871))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9875)), 0);
  i1 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i2, 9875)), i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9817)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i1);
l7:
  return;
  ;
}

static OOC_CHAR8 OOC_IR_CheckUses__NonlocalVar(OOC_SymbolTable__ProcDecl localProc, OOC_SymbolTable__VarDecl varDecl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)varDecl;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 10124))+55);
  if (i1) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10190)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
  i1 = (OOC_INT32)localProc;
  return (i0!=i1);
  goto l4;
l3:
  return 1u;
l4:
  _failed_function(9917); return 0;
  ;
}

void OOC_IR_CheckUses__ProcDataDesc_SetReadFlag(OOC_IR_CheckUses__ProcData pd, OOC_SymbolTable__VarDecl varDecl, OOC_INT32 flag) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 oldFlag;
  OOC_INT32 newFlag;

  i0 = (OOC_INT32)pd;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10432))+4);
  i2 = (OOC_INT32)varDecl;
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  oldFlag = 0;
  i1=0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10479))+4);
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  oldFlag = i1;
  
l4:
  i3 = flag;
  i3 = (_mod(i1,4))+i3*4;
  newFlag = i3;
  i4 = i3!=i1;
  if (!i4) goto l7;
  _assert((i1<i3), 127, 10662);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10697))+4);
  ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2, i3);
  *(OOC_UINT8*)((_check_pointer(i0, 10735))+9) = 1u;
l7:
  return;
  ;
}

void OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag(OOC_IR_CheckUses__ProcData pd, OOC_SymbolTable__Item item, OOC_INT32 flag) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 oldFlag;
  OOC_INT32 newFlag;

  i0 = (OOC_INT32)pd;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10911))+4);
  i2 = (OOC_INT32)item;
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  oldFlag = 0;
  i1=0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10955))+4);
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  oldFlag = i1;
  
l4:
  i3 = flag;
  i3 = i3+(i1>>2)*4;
  newFlag = i3;
  i4 = i3!=i1;
  if (!i4) goto l7;
  _assert((i1>i3), 127, 11137);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11172))+4);
  ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2, i3);
  *(OOC_UINT8*)((_check_pointer(i0, 11207))+9) = 1u;
l7:
  return;
  ;
}

static void OOC_IR_CheckUses__EmitVarWarning(OOC_IR_CheckUses__Visitor v, OOC_SymbolTable__VarDecl varDecl, OOC_Scanner_BasicList__Symbol sym, OOC_CHAR8 contextCall) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 _class;
  auto OOC_CHAR8 OOC_IR_CheckUses__EmitVarWarning_LocalVar(OOC_SymbolTable__VarDecl varDecl);
    
    OOC_CHAR8 OOC_IR_CheckUses__EmitVarWarning_LocalVar(OOC_SymbolTable__VarDecl varDecl) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)varDecl;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 11492))+52);
      i1 = !i1;
      if (i1) goto l3;
      i0=0u;
      goto l4;
l3:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11525)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
      i1 = (OOC_INT32)v;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11541))+20);
      i0 = i0==i1;
      
l4:
      return i0;
      ;
    }


  i0 = (OOC_INT32)varDecl;
  i0 = OOC_IR_CheckUses__EmitVarWarning_LocalVar((OOC_SymbolTable__VarDecl)i0);
  if (!i0) goto l28;
  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 11624))+32);
  i1 = i1==0;
  if (i1) goto l12;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 12172))+32);
  i1 = i1==1;
  if (i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12248))+28);
  i2 = (OOC_INT32)varDecl;
  i1 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i2);
  i1 = i1!=2;
  if (!i1) goto l28;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12321))+28);
  OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i2, 1);
  goto l28;
l10:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12201))+28);
  i1 = (OOC_INT32)varDecl;
  OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i1, 2);
  goto l28;
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11661))+28);
  i2 = (OOC_INT32)varDecl;
  i1 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i2);
  _class = i1;
  switch (i1) {
  case 0:
    i1 = contextCall;
    if (i1) goto l17;
    i1 = (OOC_INT32)sym;
    OOC_IR_CheckUses__WarnSymV((OOC_IR_CheckUses__Visitor)i0, (OOC_Scanner_BasicList__Symbol)i1, 1, (OOC_SymbolTable__VarDecl)i2);
    goto l28;
l17:
    i1 = (OOC_INT32)sym;
    OOC_IR_CheckUses__WarnSymV((OOC_IR_CheckUses__Visitor)i0, (OOC_Scanner_BasicList__Symbol)i1, 6, (OOC_SymbolTable__VarDecl)i2);
    goto l28;
  case 1:
    i1 = contextCall;
    if (i1) goto l22;
    i1 = (OOC_INT32)sym;
    OOC_IR_CheckUses__WarnSymV((OOC_IR_CheckUses__Visitor)i0, (OOC_Scanner_BasicList__Symbol)i1, 2, (OOC_SymbolTable__VarDecl)i2);
    goto l28;
l22:
    i1 = (OOC_INT32)sym;
    OOC_IR_CheckUses__WarnSymV((OOC_IR_CheckUses__Visitor)i0, (OOC_Scanner_BasicList__Symbol)i1, 6, (OOC_SymbolTable__VarDecl)i2);
    goto l28;
  case 2:
    goto l28;
  default:
    _failed_case(i1, 11693);
    goto l28;
  }
l28:
  return;
  ;
}

static void OOC_IR_CheckUses__VisitVarDecl(OOC_IR_CheckUses__Visitor v, OOC_SymbolTable__VarDecl varDecl, OOC_Scanner_BasicList__Symbol sym, OOC_CHAR8 contextCall) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object pb;
  OOC_INT32 _class;

  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 12587))+8);
  switch (i1) {
  case 0:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 12632))+32);
    i1 = i1>=1;
    if (i1) goto l5;
    i1=0u;
    goto l7;
l5:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12663))+20);
    i2 = (OOC_INT32)varDecl;
    i1 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i1, (OOC_SymbolTable__VarDecl)i2);
    
l7:
    if (!i1) goto l30;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12704))+12);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12721))+20);
    i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
    pb = (Object__Object)i0;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12745)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 12745)), 12754))+4);
    i1 = (OOC_INT32)varDecl;
    ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i1, 2);
    goto l30;
  case 1:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12844))+20);
    i2 = (OOC_INT32)varDecl;
    i1 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i1, (OOC_SymbolTable__VarDecl)i2);
    if (!i1) goto l30;
    i1 = *(OOC_INT8*)((_check_pointer(i0, 12883))+32);
    i1 = i1==0;
    if (i1) goto l22;
    i1 = *(OOC_INT8*)((_check_pointer(i0, 13073))+32);
    i1 = i1==1;
    if (i1) goto l20;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13153))+28);
    i1 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i2);
    i1 = i1!=2;
    if (!i1) goto l30;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13228))+28);
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i2, 1);
    goto l30;
l20:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13104))+28);
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i2, 2);
    goto l30;
l22:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12922))+28);
    i1 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i2);
    _class = i1;
    i1 = i1!=2;
    if (!i1) goto l30;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12995))+24);
    OOC_IR_CheckUses__ProcDataDesc_SetReadFlag((OOC_IR_CheckUses__ProcData)i0, (OOC_SymbolTable__VarDecl)i2, 1);
    goto l30;
  case 2:
    i1 = (OOC_INT32)sym;
    i2 = contextCall;
    i3 = (OOC_INT32)varDecl;
    OOC_IR_CheckUses__EmitVarWarning((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i3, (OOC_Scanner_BasicList__Symbol)i1, i2);
    goto l30;
  default:
    _failed_case(i1, 12581);
    goto l30;
  }
l30:
  return;
  ;
}

void OOC_IR_CheckUses__VisitorDesc_VisitVar(OOC_IR_CheckUses__Visitor v, OOC_IR__Var var) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13484))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13507));
  i2 = (OOC_INT32)v;
  OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i2, (OOC_SymbolTable__VarDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13494)))), &_td_OOC_SymbolTable__VarDeclDesc, 13494)), (OOC_Scanner_BasicList__Symbol)i0, 0u);
  return;
  ;
}

void OOC_IR_CheckUses__VisitorDesc_VisitDeref(OOC_IR_CheckUses__Visitor v, OOC_IR__Deref deref) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object pb;
  OOC_INT8 oldMode;

  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 13662))+8);
  switch (i1) {
  case 0:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 13707))+32);
    i1 = i1>=1;
    if (!i1) goto l12;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13743))+12);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13760))+20);
    i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
    pb = (Object__Object)i0;
    i1 = (OOC_INT32)deref;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13784)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 13784)), 13793))+4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13809))+4);
    ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i1, 2);
    goto l12;
  case 1:
  case 2:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 13893))+32);
    i1 = i1==0;
    if (i1) goto l9;
    i1 = (OOC_INT32)deref;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13965))+28);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13984))+4);
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i2, (OOC_SymbolTable__Item)i3, 2);
    i2 = *(OOC_INT8*)((_check_pointer(i0, 14021))+32);
    oldMode = i2;
    *(OOC_INT8*)((_check_pointer(i0, 14037))+32) = 0;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14065))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14065))+8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14073)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
    *(OOC_INT8*)((_check_pointer(i0, 14094))+32) = i2;
    goto l12;
l9:
    i1 = (OOC_INT32)deref;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13925))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13925))+8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13933)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
    goto l12;
  default:
    _failed_case(i1, 13656);
    goto l12;
  }
l12:
  return;
  ;
}

void OOC_IR_CheckUses__VisitorDesc_VisitIndex(OOC_IR_CheckUses__Visitor v, OOC_IR__Index index) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT8 oldMode;

  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 14258))+32);
  oldMode = i1;
  i2 = (OOC_INT32)index;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14274))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14274))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14280)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i4, (OOC_IR__Visitor)i0);
  *(OOC_INT8*)((_check_pointer(i0, 14298))+32) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14322))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14322))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14328)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  *(OOC_INT8*)((_check_pointer(i0, 14346))+32) = i1;
  return;
  ;
}

void OOC_IR_CheckUses__VisitorDesc_VisitAdr(OOC_IR_CheckUses__Visitor v, OOC_IR__Adr adr) {

  return;
  ;
}

void OOC_IR_CheckUses__VisitorDesc_VisitCall(OOC_IR_CheckUses__Visitor v, OOC_IR__Call call) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13;
  OOC_INT8 oldMode;
  OOC_INT32 i;
  OOC_SymbolTable__ProcDecl callee;
  Object__Object obj;
  ADT_Dictionary_IntValue__Dictionary inout;
  ADT_ArrayList__ArrayList readList;
  ADT_ArrayList__ArrayList writeList;
  ADT_Dictionary_IntValue__Dictionary writeMaybeDict;
  OOC_IR__Expression design;
  OOC_INT32 _class;
  Object__ObjectArrayPtr k;
  OOC_SymbolTable__VarDecl varDecl;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 14882))+32);
  oldMode = i1;
  i2 = (OOC_INT32)call;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14897))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14897))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14904)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i4, (OOC_IR__Visitor)i0);
  i3 = *(OOC_INT8*)((_check_pointer(i0, 14931))+8);
  switch (i3) {
  case 0:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14980))+8);
    i3 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14988)))), &_td_OOC_IR__ProcedureRefDesc));
    if (i3) goto l5;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15024))+8);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15035)))), &_td_OOC_IR__ProcedureRefDesc, 15035)), 15048))+8);
    i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15058)))), &_td_OOC_SymbolTable__ProcDeclDesc, 15058)), 15067))+48);
    
    goto l7;
l5:
    i3=1u;
l7:
    if (!i3) goto l9;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15097))+24);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15111))+4);
    i4 = (OOC_INT32)OOC_IR_CheckUses__any;
    ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i4, 2);
l9:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15205))+12);
    i = 0;
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 15215)), 0);
    i4 = 0<i3;
    if (!i4) goto l131;
    i4=0;
l12_loop:
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15239))+16);
    i5 = _check_pointer(i5, 15250);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15250))*4);
    i5 = i5!=(OOC_INT32)0;
    if (i5) goto l15;
    i5=0u;
    goto l17;
l15:
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15267))+16);
    i5 = _check_pointer(i5, 15278);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15278))*4);
    i5 = *(OOC_UINT8*)((_check_pointer(i5, 15281))+55);
    
l17:
    if (i5) goto l19;
    *(OOC_INT8*)((_check_pointer(i0, 15502))+32) = 0;
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15531))+12);
    i5 = _check_pointer(i5, 15541);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15541))*4);
    i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15531))+12);
    i6 = _check_pointer(i6, 15541);
    i7 = OOC_ARRAY_LENGTH(i6, 0);
    i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 15541))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15544)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i6, (OOC_IR__Visitor)i0);
    goto l23;
l19:
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15317))+12);
    i5 = _check_pointer(i5, 15327);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15327))*4);
    i5 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15331)))), &_td_OOC_IR__ConstDesc));
    if (!i5) goto l23;
    *(OOC_INT8*)((_check_pointer(i0, 15391))+32) = 1;
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15423))+12);
    i5 = _check_pointer(i5, 15433);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15433))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15440)))), &_td_OOC_IR__AdrDesc, 15440)), 15444))+8);
    i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15423))+12);
    i6 = _check_pointer(i6, 15433);
    i7 = OOC_ARRAY_LENGTH(i6, 0);
    i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 15433))*4);
    i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 15440)))), &_td_OOC_IR__AdrDesc, 15440)), 15444))+8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15451)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i6, (OOC_IR__Visitor)i0);
l23:
    i4 = i4+1;
    i = i4;
    i5 = i4<i3;
    if (i5) goto l12_loop;
    goto l131;
  case 1:
  case 2:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15645))+8);
    i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15653)))), &_td_OOC_IR__ProcedureRefDesc);
    if (i3) goto l32;
    i3=0u;
    goto l34;
l32:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15708))+8);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15685))+12);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15719)))), &_td_OOC_IR__ProcedureRefDesc, 15719)), 15732))+8);
    i3 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i4, (Object__Object)i3);
    
l34:
    if (i3) goto l43;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15945))+8);
    i3 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15953)))), &_td_OOC_IR__ProcedureRefDesc));
    if (i3) goto l38;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15991))+8);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16002)))), &_td_OOC_IR__ProcedureRefDesc, 16002)), 16015))+8);
    i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16025)))), &_td_OOC_SymbolTable__ProcDeclDesc, 16025)), 16034))+48);
    
    goto l40;
l38:
    i3=1u;
l40:
    if (!i3) goto l42;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16066))+28);
    i4 = (OOC_INT32)OOC_IR_CheckUses__any;
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i3, (OOC_SymbolTable__Item)i4, 2);
l42:
    callee = (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
    inout = (ADT_Dictionary_IntValue__Dictionary)(OOC_INT32)0;
    i3=(OOC_INT32)0;i4=(OOC_INT32)0;
    goto l44;
l43:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15766))+8);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15777)))), &_td_OOC_IR__ProcedureRefDesc, 15777)), 15790))+8);
    i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15800)))), &_td_OOC_SymbolTable__ProcDeclDesc, 15800);
    callee = (OOC_SymbolTable__ProcDecl)i3;
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15847))+8);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15827))+12);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15858)))), &_td_OOC_IR__ProcedureRefDesc, 15858)), 15871))+8);
    i4 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i5, (Object__Object)i4);
    obj = (Object__Object)i4;
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15900)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 15900)), 15909))+4);
    inout = (ADT_Dictionary_IntValue__Dictionary)i4;
    {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
l44:
    i5 = (OOC_INT32)ADT_ArrayList__New(8);
    readList = (ADT_ArrayList__ArrayList)i5;
    i6 = (OOC_INT32)ADT_ArrayList__New(8);
    writeList = (ADT_ArrayList__ArrayList)i6;
    i7 = (OOC_INT32)ADT_Dictionary_IntValue__New();
    writeMaybeDict = (ADT_Dictionary_IntValue__Dictionary)i7;
    i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16344))+12);
    i = 0;
    i8 = OOC_ARRAY_LENGTH((_check_pointer(i8, 16354)), 0);
    i9 = 0<i8;
    if (!i9) goto l80;
    i9 = i3==(OOC_INT32)0;
    i10=0;
l47_loop:
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16378))+16);
    i11 = _check_pointer(i11, 16389);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 16389))*4);
    i11 = i11==(OOC_INT32)0;
    if (i11) goto l75;
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16446))+16);
    i11 = _check_pointer(i11, 16457);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 16457))*4);
    i11 = *(OOC_UINT8*)((_check_pointer(i11, 16460))+55);
    if (i11) goto l52;
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17410))+12);
    i11 = _check_pointer(i11, 17420);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 17420))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 17398)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i5, (Object__Object)i11);
    goto l75;
l52:
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16496))+12);
    i11 = _check_pointer(i11, 16506);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 16506))*4);
    i11 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 16510)))), &_td_OOC_IR__ConstDesc));
    if (!i11) goto l75;
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16583))+12);
    i11 = _check_pointer(i11, 16593);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 16593))*4);
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 16600)))), &_td_OOC_IR__AdrDesc, 16600)), 16604))+8);
    design = (OOC_IR__Expression)i11;
    if (i9) goto l71;
    i12 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16761))+16);
    i12 = _check_pointer(i12, 16772);
    i13 = OOC_ARRAY_LENGTH(i12, 0);
    i12 = (OOC_INT32)*(OOC_INT32*)(i12+(_check_index(i10, i13, OOC_UINT32, 16772))*4);
    i12 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i12);
    if (!i12) goto l75;
    i12 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16819))+16);
    i12 = _check_pointer(i12, 16830);
    i13 = OOC_ARRAY_LENGTH(i12, 0);
    i12 = (OOC_INT32)*(OOC_INT32*)(i12+(_check_index(i10, i13, OOC_UINT32, 16830))*4);
    i12 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i12);
    _class = i12;
    i13 = i12>>2;
    switch (i13) {
    case 1:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 16925)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i5, (Object__Object)i11);
      goto l63;
    case 0:
      goto l63;
    default:
      _failed_case(i13, 16850);
      goto l63;
    }
l63:
    i12 = _mod(i12,4);
    switch (i12) {
    case 2:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 17125)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i11);
      goto l75;
    case 1:
      ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i7, (Object__Object)i11, 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 17240)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i11);
      goto l75;
    case 0:
      goto l75;
    default:
      _failed_case(i12, 17048);
      goto l75;
    }
l71:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 16709)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i11);
l75:
    i10 = i10+1;
    i = i10;
    i11 = i10<i8;
    if (i11) goto l47_loop;
l80:
    i8 = *(OOC_INT32*)((_check_pointer(i5, 17479))+4);
    i = 0;
    i9 = 0<i8;
    if (!i9) goto l88;
    i9=0;
l83_loop:
    *(OOC_INT8*)((_check_pointer(i0, 17499))+32) = 0;
    i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 17530));
    i10 = _check_pointer(i10, 17536);
    i11 = OOC_ARRAY_LENGTH(i10, 0);
    i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i9, i11, OOC_UINT32, 17536))*4);
    i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 17530));
    i11 = _check_pointer(i11, 17536);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i9, i12, OOC_UINT32, 17536))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 17543)))), &_td_OOC_IR__ExpressionDesc, 17543)), 17554)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)(_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 17543)))), &_td_OOC_IR__ExpressionDesc, 17543)), (OOC_IR__Visitor)i0);
    i9 = i9+1;
    i = i9;
    i10 = i9<i8;
    if (i10) goto l83_loop;
l88:
    i5 = i3!=(OOC_INT32)0;
    if (!i5) goto l117;
    i5 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i3);
    k = (Object__ObjectArrayPtr)i5;
    i8 = OOC_ARRAY_LENGTH((_check_pointer(i5, 17666)), 0);
    i = 0;
    i9 = 0<i8;
    if (!i9) goto l117;
    i9=0;
l93_loop:
    i10 = _check_pointer(i5, 17689);
    i11 = OOC_ARRAY_LENGTH(i10, 0);
    i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i9, i11, OOC_UINT32, 17689))*4);
    i10 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 17693)))), &_td_OOC_SymbolTable__VarDeclDesc);
    if (i10) goto l96;
    i10 = _check_pointer(i5, 18553);
    i11 = OOC_ARRAY_LENGTH(i10, 0);
    i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i9, i11, OOC_UINT32, 18553))*4);
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18538))+28);
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i11, (OOC_SymbolTable__Item)(_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 18561)))), &_td_OOC_SymbolTable__TypeDesc, 18561)), 2);
    goto l111;
l96:
    i10 = _check_pointer(i5, 17738);
    i11 = OOC_ARRAY_LENGTH(i10, 0);
    i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i9, i11, OOC_UINT32, 17738))*4);
    i10 = _type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 17746)))), &_td_OOC_SymbolTable__VarDeclDesc, 17746);
    varDecl = (OOC_SymbolTable__VarDecl)i10;
    i11 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 17779)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i10);
    i11 = i11!=i4;
    if (!i11) goto l111;
    i11 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i10);
    _class = i11;
    i12 = i11>>2;
    switch (i12) {
    case 1:
      *(OOC_INT8*)((_check_pointer(i0, 17947))+32) = 0;
      i12 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18007));
      OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i10, (OOC_Scanner_BasicList__Symbol)i12, 1u);
      goto l103;
    case 0:
      goto l103;
    default:
      _failed_case(i12, 17879);
      goto l103;
    }
l103:
    i11 = _mod(i11,4);
    switch (i11) {
    case 2:
      *(OOC_INT8*)((_check_pointer(i0, 18195))+32) = 1;
      i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18256));
      OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i10, (OOC_Scanner_BasicList__Symbol)i11, 1u);
      goto l111;
    case 1:
      *(OOC_INT8*)((_check_pointer(i0, 18312))+32) = 2;
      i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18378));
      OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i10, (OOC_Scanner_BasicList__Symbol)i11, 1u);
      goto l111;
    case 0:
      goto l111;
    default:
      _failed_case(i11, 18126);
      goto l111;
    }
l111:
    i9 = i9+1;
    i = i9;
    i10 = i9<i8;
    if (i10) goto l93_loop;
l117:
    i3 = *(OOC_INT32*)((_check_pointer(i6, 18653))+4);
    i = 0;
    i4 = 0<i3;
    if (!i4) goto l131;
    i4=0;
l120_loop:
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 18706));
    i5 = _check_pointer(i5, 18712);
    i8 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i8, OOC_UINT32, 18712))*4);
    i5 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i7, (Object__Object)i5);
    if (i5) goto l123;
    *(OOC_INT8*)((_check_pointer(i0, 18778))+32) = 1;
    goto l124;
l123:
    *(OOC_INT8*)((_check_pointer(i0, 18733))+32) = 2;
l124:
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 18824));
    i5 = _check_pointer(i5, 18830);
    i8 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i8, OOC_UINT32, 18830))*4);
    i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 18824));
    i8 = _check_pointer(i8, 18830);
    i9 = OOC_ARRAY_LENGTH(i8, 0);
    i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 18830))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 18837)))), &_td_OOC_IR__ExpressionDesc, 18837)), 18848)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)(_type_guard(i8, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 18837)))), &_td_OOC_IR__ExpressionDesc, 18837)), (OOC_IR__Visitor)i0);
    i4 = i4+1;
    i = i4;
    i5 = i4<i3;
    if (i5) goto l120_loop;
    goto l131;
  default:
    _failed_case(i3, 14925);
    goto l131;
  }
l131:
  *(OOC_INT8*)((_check_pointer(i0, 18890))+32) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18924))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18931))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18924))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18931))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18936)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  type = (OOC_SymbolTable__Type)i1;
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18964)))), &_td_OOC_SymbolTable__FormalParsDesc, 18964)), 18975))+53);
  if (!i1) goto l134;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18997))+28);
  OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i0);
l134:
  return;
  ;
}

static void OOC_IR_CheckUses__TransitiveWriteClosure(ADT_Dictionary__Dictionary knownProcs, OOC_IR_CheckUses__ProcData pd) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
  Object__ObjectArrayPtr k;
  OOC_INT32 i;
  OOC_INT32 j;
  OOC_SymbolTable__ProcDecl callerDecl;
  Object__Object obj;
  OOC_IR_CheckUses__ProcData pdCaller;

  i0 = (OOC_INT32)pd;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19313))+4);
  i1 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i1);
  k = (Object__ObjectArrayPtr)i1;
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19351)), 0);
  i3 = 0<i2;
  if (!i3) goto l27;
  i3 = (OOC_INT32)knownProcs;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19381));
  i5 = *(OOC_INT32*)((_check_pointer(i5, 19389))+4);
  j = 0;
  i6 = 0<i5;
  if (!i6) goto l22;
  i6=0;
l6_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19424));
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i7, 19432));
  i7 = _check_pointer(i7, 19438);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 19438))*4);
  i7 = _type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 19446)))), &_td_OOC_SymbolTable__ProcDeclDesc, 19446);
  callerDecl = (OOC_SymbolTable__ProcDecl)i7;
  i8 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i3, (Object__Object)i7);
  obj = (Object__Object)i8;
  i8 = _type_guard(i8, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 19524)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 19524);
  pdCaller = (OOC_IR_CheckUses__ProcData)i8;
  i9 = _check_pointer(i1, 19570);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 19555))+4);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i4, i10, OOC_UINT32, 19570))*4);
  i9 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i11, (Object__Object)i9);
  i9 = !i9;
  if (i9) goto l9;
  i7=0u;
  goto l15;
l9:
  i9 = _check_pointer(i1, 19591);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i4, i10, OOC_UINT32, 19591))*4);
  i9 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 19595)))), &_td_OOC_SymbolTable__TypeDesc);
  if (i9) goto l12;
  i9 = _check_pointer(i1, 19648);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i4, i10, OOC_UINT32, 19648))*4);
  i7 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i7, (OOC_SymbolTable__VarDecl)(_type_guard(i9, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 19656)))), &_td_OOC_SymbolTable__VarDeclDesc, 19656)));
  
  goto l15;
l12:
  i7=1u;
l15:
  if (!i7) goto l17;
  i7 = _check_pointer(i1, 19702);
  i9 = OOC_ARRAY_LENGTH(i7, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 19690))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i9, OOC_UINT32, 19702))*4);
  ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i10, (Object__Object)i7, 2);
  OOC_IR_CheckUses__TransitiveWriteClosure((ADT_Dictionary__Dictionary)i3, (OOC_IR_CheckUses__ProcData)i8);
l17:
  i6 = i6+1;
  j = i6;
  i7 = i6<i5;
  if (i7) goto l6_loop;
l22:
  i4 = i4+1;
  i = i4;
  i5 = i4<i2;
  if (i5) goto l3_loop;
l27:
  return;
  ;
}

void OOC_IR_CheckUses__CheckUses(OOC_IR__Module module, OOC_SymbolTable__Module moduleDecl, OOC_Config_Pragmas__History pragmaHistory, OOC_Error__List errList) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  ADT_Dictionary__Dictionary knownProcs;
  OOC_IR_CheckUses__Visitor v;
  ADT_Dictionary__Dictionary loopExits;
  OOC_INT32 i;
  OOC_IR__Procedure proc;
  Object__Object pd;
  OOC_INT32 inWorklist;
  OOC_IR_CheckUses__Def def;
  auto void OOC_IR_CheckUses__CheckUses_CheckStatmSeq(OOC_IR_CheckUses__Def def, OOC_IR__StatementSeq statmSeq);
  auto OOC_CHAR8 OOC_IR_CheckUses__CheckUses_CheckedFunction(OOC_SymbolTable__ProcDecl procDecl);
  auto void OOC_IR_CheckUses__CheckUses_CallersToWorklist(ADT_ArrayList__ArrayList callers);
  auto void OOC_IR_CheckUses__CheckUses_SetWriteFlags(OOC_SymbolTable__ProcDecl localProc, OOC_IR_CheckUses__ProcData pd, OOC_IR_CheckUses__Def def, OOC_CHAR8 *nonlocalWrites);
    
    void OOC_IR_CheckUses__CheckUses_CheckStatmSeq(OOC_IR_CheckUses__Def def, OOC_IR__StatementSeq statmSeq) {
      register OOC_INT32 i0,i1,i2;
      OOC_INT32 i;
      auto void OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr(OOC_IR__Expression expr);
      auto void OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign(OOC_IR__Expression design, OOC_INT8 mode);
      auto void OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckStatm(OOC_IR__Statement statm);
        
        void OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr(OOC_IR__Expression expr) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)v;
          i1 = (OOC_INT32)def;
          *(OOC_INT32*)((_check_pointer(i0, 20308))+28) = i1;
          *(OOC_INT8*)((_check_pointer(i0, 20330))+32) = 0;
          i1 = (OOC_INT32)expr;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20357)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
          return;
          ;
        }

        
        void OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign(OOC_IR__Expression design, OOC_INT8 mode) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)v;
          i1 = (OOC_INT32)def;
          *(OOC_INT32*)((_check_pointer(i0, 20482))+28) = i1;
          i1 = mode;
          *(OOC_INT8*)((_check_pointer(i0, 20504))+32) = i1;
          i1 = (OOC_INT32)design;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20533)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
          return;
          ;
        }

        
        void OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckStatm(OOC_IR__Statement statm) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          OOC_IR_CheckUses__Def def2;
          OOC_IR_CheckUses__Def defIn;
          OOC_INT32 i;
          Object__Object obj;
          OOC_IR__Expression expr;
          auto void OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckStatm_CheckWith(OOC_IR_CheckUses__Def defIn, OOC_IR__WithStatm with, ADT_ArrayList__ArrayList prevGuards);
            
            void OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckStatm_CheckWith(OOC_IR_CheckUses__Def defIn, OOC_IR__WithStatm with, ADT_ArrayList__ArrayList prevGuards) {
              register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
              OOC_IR__TypeTest localTest;
              OOC_IR__TypeTest test;
              OOC_IR_CheckUses__Def defOld;
              OOC_IR_CheckUses__Def def2;

              i0 = (OOC_INT32)with;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20974))+8);
              i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20984)))), &_td_OOC_IR__TypeTestDesc, 20984);
              localTest = (OOC_IR__TypeTest)i1;
              i2 = (OOC_INT32)prevGuards;
              i = 0;
              i3 = *(OOC_INT32*)((_check_pointer(i2, 21029))+4);
              i4 = 0<i3;
              if (!i4) goto l19;
              i4=0;
l3_loop:
              i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 21070));
              i5 = _check_pointer(i5, 21076);
              i6 = OOC_ARRAY_LENGTH(i5, 0);
              i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 21076))*4);
              i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 21083)))), &_td_OOC_IR__TypeTestDesc, 21083);
              test = (OOC_IR__TypeTest)i4;
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21114))+8);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21144))+8);
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 21123)))), &_td_OOC_IR__VarDesc, 21123)), 21127))+8);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 21153)))), &_td_OOC_IR__VarDesc, 21153)), 21157))+8);
              i5 = i5==i6;
              if (i5) goto l6;
              i4=0u;
              goto l8;
l6:
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21207))+12);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21259))+12);
              i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i4);
              
l8:
              if (i4) goto l10;
              i4=0u;
              goto l12;
l10:
              i4 = (OOC_INT32)v;
              i4 = *(OOC_INT8*)((_check_pointer(i4, 21294))+8);
              i4 = i4==2;
              
l12:
              if (!i4) goto l14;
              i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 21380));
              i5 = (OOC_INT32)pragmaHistory;
              i6 = (OOC_INT32)errList;
              OOC_IR_CheckUses__WarnSym((OOC_Error__List)i6, (OOC_Config_Pragmas__History)i5, (OOC_Scanner_BasicList__Symbol)i4, 5);
l14:
              i4 = i;
              i4 = i4+1;
              i = i4;
              i5 = i4<i3;
              if (i5) goto l3_loop;
l19:
              i1 = (OOC_INT32)def;
              defOld = (OOC_IR_CheckUses__Def)i1;
              i3 = (OOC_INT32)defIn;
              def = (OOC_IR_CheckUses__Def)i3;
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21507))+8);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i4);
              def = (OOC_IR_CheckUses__Def)i1;
              i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i3);
              def2 = (OOC_IR_CheckUses__Def)i1;
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21618))+12);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i4);
              i4 = (OOC_INT32)def;
              OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i4, (OOC_IR_CheckUses__Def)i1);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21686))+16);
              i1 = i1!=0;
              if (!i1) goto l30;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21733))+16);
              i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21743)), 0);
              i1 = i1==1;
              if (i1) goto l24;
              i1=0u;
              goto l26;
l24:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21773))+16);
              i1 = _check_pointer(i1, 21783);
              i4 = OOC_ARRAY_LENGTH(i1, 0);
              i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i4, OOC_UINT8, 21783))*4);
              i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21787)))), &_td_OOC_IR__WithStatmDesc);
              
l26:
              if (i1) goto l28;
              i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i3);
              def2 = (OOC_IR_CheckUses__Def)i1;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22035))+16);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
              i0 = (OOC_INT32)def;
              OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
              goto l30;
l28:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21845))+8);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21833)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21855)))), &_td_OOC_IR__TypeTestDesc, 21855)));
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21902))+16);
              i0 = _check_pointer(i0, 21912);
              i1 = OOC_ARRAY_LENGTH(i0, 0);
              i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 21912))*4);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckStatm_CheckWith((OOC_IR_CheckUses__Def)i3, (OOC_IR__WithStatm)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21919)))), &_td_OOC_IR__WithStatmDesc, 21919)), (ADT_ArrayList__ArrayList)i2);
l30:
              return;
              ;
            }


          i0 = (OOC_INT32)statm;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22171)))), &_td_OOC_IR__AssertDesc);
          if (i1) goto l114;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22472)))), &_td_OOC_IR__AssignOpDesc);
          if (i1) goto l112;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22632)))), &_td_OOC_IR__AssignmentDesc);
          if (i1) goto l110;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22757)))), &_td_OOC_IR__CallDesc);
          if (i1) goto l108;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22824)))), &_td_OOC_IR__CopyDesc);
          if (i1) goto l106;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22940)))), &_td_OOC_IR__CopyParameterDesc);
          if (i1) goto l127;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23011)))), &_td_OOC_IR__CopyStringDesc);
          if (i1) goto l103;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23133)))), &_td_OOC_IR__ForStatmDesc);
          if (i1) goto l101;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23386)))), &_td_OOC_IR__IfStatmDesc);
          if (i1) goto l99;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23613)))), &_td_OOC_IR__CaseStatmDesc);
          if (i1) goto l86;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24107)))), &_td_OOC_IR__LoopStatmDesc);
          if (i1) goto l81;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24298)))), &_td_OOC_IR__ExitDesc);
          if (i1) goto l79;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24441)))), &_td_OOC_IR__MoveBlockDesc);
          if (i1) goto l62;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25161)))), &_td_OOC_IR__RaiseDesc);
          if (i1) goto l60;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25268)))), &_td_OOC_IR__RepeatStatmDesc);
          if (i1) goto l58;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25398)))), &_td_OOC_IR__ReturnDesc);
          if (i1) goto l53;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25592)))), &_td_OOC_IR__TryStatmDesc);
          if (i1) goto l43;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25903)))), &_td_OOC_IR__WhileStatmDesc);
          if (i1) goto l41;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26024)))), &_td_OOC_IR__WithStatmDesc);
          if (i1) goto l39;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26017)))), 26017);
          goto l127;
l39:
          i1 = (OOC_INT32)def;
          i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          defIn = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i2);
          i2 = (OOC_INT32)ADT_ArrayList__New(4);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckStatm_CheckWith((OOC_IR_CheckUses__Def)i1, (OOC_IR__WithStatm)i0, (ADT_ArrayList__ArrayList)i2);
          goto l127;
l41:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25947))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25990))+12);
          i1 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          goto l127;
l43:
          i1 = (OOC_INT32)def;
          i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          defIn = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25674))+8);
          i3 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i3, (OOC_IR__StatementSeq)i2);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25719))+12);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 25729)), 0);
          i = 0;
          i3 = 0<i2;
          if (!i3) goto l127;
          i3=0;
l46_loop:
          i4 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i4;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25808))+12);
          i5 = _check_pointer(i5, 25818);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 25818))*4);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 25821))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i4, (OOC_IR__StatementSeq)i5);
          i5 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i5, (OOC_IR_CheckUses__Def)i4);
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l46_loop;
          goto l127;
l53:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25432))+8);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l56;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25479))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
l56:
          i0 = (OOC_INT32)v;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25515))+16);
          i1 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i0);
          goto l127;
l58:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25322))+8);
          i2 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25355))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l127;
l60:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25200))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i0);
          goto l127;
l62:
          i1 = (OOC_INT32)v;
          i2 = *(OOC_INT8*)((_check_pointer(i1, 24474))+8);
          i2 = i2==0;
          if (!i2) goto l65;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24519))+24);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24533))+4);
          i2 = (OOC_INT32)OOC_IR_CheckUses__any;
          ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2, 2);
l65:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24624))+8);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24632)))), &_td_OOC_IR__AdrDesc);
          if (i1) goto l68;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24742))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          goto l69;
l68:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24675))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24686)))), &_td_OOC_IR__AdrDesc, 24686)), 24690))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
l69:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24792))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24834))+12);
          expr = (OOC_IR__Expression)i1;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24860)))), &_td_OOC_IR__TypeConvDesc);
          if (!i2) goto l73;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24909)))), &_td_OOC_IR__TypeConvDesc, 24909)), 24918))+8);
          expr = (OOC_IR__Expression)i1;
          
l73:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24959)))), &_td_OOC_IR__AdrDesc);
          if (i2) goto l76;
          i1 = (OOC_INT32)v;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25056))+28);
          i2 = (OOC_INT32)OOC_IR_CheckUses__any;
          OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i2, 2);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25112))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l127;
l76:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25007)))), &_td_OOC_IR__AdrDesc, 25007)), 25011))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l79:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24347))+8);
          i1 = (OOC_INT32)loopExits;
          i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
          obj = (Object__Object)i0;
          i1 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24369)))), &_td_OOC_IR_CheckUses__DefDesc, 24369)), (OOC_IR_CheckUses__Def)i1);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i0);
          goto l127;
l81:
          i1 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
          defIn = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)loopExits;
          ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i0, (Object__Object)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24238))+8);
          i2 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i0);
          i0 = _check_pointer(i1, 24269);
          i1 = (OOC_INT32)def;
          i1 = _check_pointer(i1, 24259);
          i2 = (OOC_INT32)&_td_OOC_IR_CheckUses__DefDesc;
          i2 = i2!=i2;
          if (!i2) goto l84;
          _failed_type_assert(24259);
l84:
          _copy_block(i0,i1,8);
          goto l127;
l86:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23656))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)def;
          i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          defIn = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i2);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23759))+12);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 23768)), 0);
          i = 0;
          i3 = 0<i2;
          if (!i3) goto l94;
          i3=0;
l89_loop:
          i4 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i4;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23847))+12);
          i5 = _check_pointer(i5, 23856);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 23856))*4);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23859))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i4, (OOC_IR__StatementSeq)i5);
          i5 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i5, (OOC_IR_CheckUses__Def)i4);
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l89_loop;
l94:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23934))+16);
          i2 = i2!=(OOC_INT32)0;
          if (!i2) goto l127;
          i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i1;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24026))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
          goto l127;
l99:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23427))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)def;
          i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23500))+12);
          i3 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i3, (OOC_IR__StatementSeq)i2);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23547))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
          goto l127;
l101:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23175))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23209))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23243))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i1, 1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23352))+24);
          i1 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          goto l127;
l103:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23055))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23092))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l106:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22862))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22899))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l108:
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l127;
l110:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22676))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22712))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l112:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22514))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22548))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22587))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l114:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22205))+8);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l121;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22246))+8);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22257)))), &_td_OOC_IR__ConstDesc);
          if (i1) goto l119;
          i1=0u;
          goto l123;
l119:
          i1 = (OOC_INT32)Object_Boxed__false;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22311))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22325)))), &_td_OOC_IR__ConstDesc, 22325)), 22331))+8);
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22298)))), Object_Boxed__BooleanDesc_Equals)),Object_Boxed__BooleanDesc_Equals)((Object_Boxed__Boolean)i1, (Object__Object)i2);
          
          goto l123;
l121:
          i1=1u;
l123:
          if (i1) goto l125;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22418))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l127;
l125:
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i0);
l127:
          return;
          ;
        }


      i0 = (OOC_INT32)statmSeq;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l27;
      i = 0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26283)), 0);
      i1 = 0!=i1;
      if (i1) goto l5;
      i1=0u;
      goto l7;
l5:
      i1 = (OOC_INT32)def;
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 26293))+4);
      i1 = !i1;
      
l7:
      if (i1) goto l9;
      i1=i0;i0=0;
      goto l19;
l9:
      i1=0;
l10_loop:
      i0 = _check_pointer(i0, 26338);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 26338))*4);
      OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckStatm((OOC_IR__Statement)i0);
      i0 = i;
      i0 = i0+1;
      i = i0;
      i1 = (OOC_INT32)statmSeq;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 26283)), 0);
      i2 = i0!=i2;
      if (i2) goto l13;
      i2=0u;
      goto l15;
l13:
      i2 = (OOC_INT32)def;
      i2 = *(OOC_UINT8*)((_check_pointer(i2, 26293))+4);
      i2 = !i2;
      
l15:
      if (!i2) goto l19;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
      goto l10_loop;
l19:
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 26403)), 0);
      i2 = i0!=i2;
      if (i2) goto l22;
      i2=0u;
      goto l24;
l22:
      i2 = (OOC_INT32)v;
      i2 = *(OOC_INT8*)((_check_pointer(i2, 26411))+8);
      i2 = i2==2;
      
l24:
      if (!i2) goto l27;
      i1 = _check_pointer(i1, 26492);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 26492))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26495));
      i1 = (OOC_INT32)errList;
      i2 = (OOC_INT32)pragmaHistory;
      OOC_IR_CheckUses__WarnSym((OOC_Error__List)i1, (OOC_Config_Pragmas__History)i2, (OOC_Scanner_BasicList__Symbol)i0, 3);
l27:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_IR_CheckUses__CheckUses_CheckedFunction(OOC_SymbolTable__ProcDecl procDecl) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)procDecl;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26663))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26674))+40);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=0u;
      goto l4;
l3:
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 26714))+46);
      i0 = !i0;
      
l4:
      return i0;
      ;
    }

    
    void OOC_IR_CheckUses__CheckUses_CallersToWorklist(ADT_ArrayList__ArrayList callers) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;
      Object__Object pd;

      i0 = (OOC_INT32)callers;
      i = 0;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 26902))+4);
      i2 = 0<i1;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26949));
      i3 = _check_pointer(i3, 26955);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 26955))*4);
      i4 = (OOC_INT32)knownProcs;
      i3 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i4, (Object__Object)i3);
      pd = (Object__Object)i3;
      *(OOC_UINT8*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 26972)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 26972)), 26981))+8) = 1u;
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l3_loop;
l8:
      return;
      ;
    }

    
    void OOC_IR_CheckUses__CheckUses_SetWriteFlags(OOC_SymbolTable__ProcDecl localProc, OOC_IR_CheckUses__ProcData pd, OOC_IR_CheckUses__Def def, OOC_CHAR8 *nonlocalWrites) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      Object__ObjectArrayPtr k;
      OOC_INT32 i;
      Object__Object item;

      *nonlocalWrites = 0u;
      i0 = (OOC_INT32)pd;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27324))+4);
      i1 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i1);
      k = (Object__ObjectArrayPtr)i1;
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 27364)), 0);
      i3 = (OOC_INT32)def;
      i4 = 0<i2;
      if (!i4) goto l11;
      i4=0;
l3_loop:
      i5 = _check_pointer(i1, 27402);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 27402))*4);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 27387));
      i5 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i6, (Object__Object)i5);
      i5 = !i5;
      if (!i5) goto l6;
      i5 = _check_pointer(i1, 27459);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 27459))*4);
      OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag((OOC_IR_CheckUses__ProcData)i0, (OOC_SymbolTable__Item)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 27467)))), &_td_OOC_SymbolTable__ItemDesc, 27467)), 0);
l6:
      i4 = i4+1;
      i = i4;
      i5 = i4<i2;
      if (i5) goto l3_loop;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 27534));
      i1 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i1);
      k = (Object__ObjectArrayPtr)i1;
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 27574)), 0);
      i4 = 0<i2;
      if (!i4) goto l36;
      i4 = (OOC_INT32)localProc;
      i5=0;
l14_loop:
      i6 = _check_pointer(i1, 27599);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 27599))*4);
      item = (Object__Object)i6;
      i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 27621)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i7) goto l21;
      i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 28071)))), &_td_OOC_SymbolTable__TypeDesc);
      if (i7) goto l19;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 28065)))), 28065);
      goto l31;
l19:
      *nonlocalWrites = 1u;
      OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag((OOC_IR_CheckUses__ProcData)i0, (OOC_SymbolTable__Item)i6, 2);
      goto l31;
l21:
      i7 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i4, (OOC_SymbolTable__VarDecl)i6);
      if (!i7) goto l31;
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 27705));
      i7 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i7, (Object__Object)i6);
      switch (i7) {
      case 0:
        OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag((OOC_IR_CheckUses__ProcData)i0, (OOC_SymbolTable__Item)i6, 0);
        goto l31;
      case 1:
        *nonlocalWrites = 1u;
        OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag((OOC_IR_CheckUses__ProcData)i0, (OOC_SymbolTable__Item)i6, 1);
        goto l31;
      case 2:
        *nonlocalWrites = 1u;
        OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag((OOC_IR_CheckUses__ProcData)i0, (OOC_SymbolTable__Item)i6, 2);
        goto l31;
      default:
        _failed_case(i7, 27697);
        goto l31;
      }
l31:
      i5 = i5+1;
      i = i5;
      i6 = i5<i2;
      if (i6) goto l14_loop;
l36:
      i1 = *(OOC_UINT8*)((_check_pointer(i3, 28200))+4);
      if (i1) goto l39;
      i1=0u;
      goto l41;
l39:
      i1 = (OOC_INT32)localProc;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28279))+60);
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 28290))+53);
      i1 = !i1;
      
l41:
      if (i1) goto l43;
      i1=0u;
      goto l49;
l43:
      i1 = (OOC_INT32)localProc;
      i2 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)i1);
      i2 = !i2;
      if (i2) goto l46;
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 28418))+47);
      
      goto l49;
l46:
      i1=1u;
l49:
      if (!i1) goto l51;
      i1 = (OOC_INT32)localProc;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28456))+60);
      *(OOC_UINT8*)((_check_pointer(i1, 28467))+53) = 1u;
      *(OOC_UINT8*)((_check_pointer(i0, 28496))+9) = 1u;
l51:
      return;
      ;
    }


  i0 = (OOC_INT32)moduleDecl;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 29997))+48);
  i0 = i0!=0;
  if (!i0) goto l3;
  return;
l3:
  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)OOC_IR_CheckUses__KnownProcs((OOC_IR__Module)i0);
  knownProcs = (ADT_Dictionary__Dictionary)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__Visitor.baseTypes[0]);
  v = (OOC_IR_CheckUses__Visitor)i2;
  OOC_IR_VisitAll__InitVisitor((OOC_IR_VisitAll__Visitor)i2);
  i3 = (OOC_INT32)errList;
  *(OOC_INT32*)(_check_pointer(i2, 30168)) = i3;
  i3 = (OOC_INT32)pragmaHistory;
  *(OOC_INT32*)((_check_pointer(i2, 30194))+4) = i3;
  *(OOC_INT32*)((_check_pointer(i2, 30232))+28) = 0;
  *(OOC_INT32*)((_check_pointer(i2, 30250))+12) = i1;
  i3 = (OOC_INT32)ADT_Dictionary__New();
  loopExits = (ADT_Dictionary__Dictionary)i3;
  *(OOC_INT8*)((_check_pointer(i2, 30544))+8) = 0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30601))+8);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 30610)), 0);
  i2 = 0<i0;
  if (!i2) goto l12;
  i2=i1;i1=0;
l7_loop:
  i3 = (OOC_INT32)module;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 30638))+8);
  i3 = _check_pointer(i3, 30647);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 30647))*4);
  proc = (OOC_IR__Procedure)i1;
  i3 = (OOC_INT32)v;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30677))+4);
  *(OOC_INT32*)((_check_pointer(i3, 30659))+20) = i4;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 30712))+20);
  i2 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i2, (Object__Object)i4);
  pd = (Object__Object)i2;
  *(OOC_INT32*)((_check_pointer(i3, 30732))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30753)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 30753));
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
  *(OOC_INT32*)((_check_pointer(i3, 30771))+16) = i2;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewDef();
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30846))+8);
  OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)pd;
  i2 = (OOC_INT32)knownProcs;
  OOC_IR_CheckUses__TransitiveWriteClosure((ADT_Dictionary__Dictionary)i2, (OOC_IR_CheckUses__ProcData)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30902)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 30902)));
  i1 = i;
  i1 = i1+1;
  i = i1;
  i3 = i1<i0;
  if (i3) goto l7_loop;
l12:
  i0 = (OOC_INT32)v;
  *(OOC_INT8*)((_check_pointer(i0, 31083))+8) = 1;
l13_loop:
  inWorklist = 0;
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31175))+8);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 31184)), 0);
  i1 = 0<i0;
  if (!i1) goto l27;
  i1=0;
l16_loop:
  i2 = (OOC_INT32)module;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31214))+8);
  i2 = _check_pointer(i2, 31223);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 31223))*4);
  proc = (OOC_IR__Procedure)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31261))+4);
  i3 = (OOC_INT32)knownProcs;
  i2 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i3, (Object__Object)i2);
  pd = (Object__Object)i2;
  i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31283)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 31283)), 31292))+8);
  if (!i3) goto l22;
  i3 = (OOC_INT32)v;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31338))+4);
  *(OOC_INT32*)((_check_pointer(i3, 31320))+20) = i4;
  *(OOC_INT32*)((_check_pointer(i3, 31356))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31377)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 31377));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 31399))+24);
  *(OOC_UINT8*)((_check_pointer(i2, 31413))+9) = 0u;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
  *(OOC_INT32*)((_check_pointer(i3, 31448))+16) = i2;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewDef();
  def = (OOC_IR_CheckUses__Def)i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31543))+8);
  OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)v;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31566))+16);
  i3 = (OOC_INT32)def;
  OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i2, (OOC_IR_CheckUses__Def)i3);
  i2 = (OOC_INT32)proc;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31682))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31613))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31626))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31643))+16);
  OOC_IR_CheckUses__CheckUses_SetWriteFlags((OOC_SymbolTable__ProcDecl)i3, (OOC_IR_CheckUses__ProcData)i4, (OOC_IR_CheckUses__Def)i1, (void*)((_check_pointer(i2, 31687))+48));
  i1 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31730))+24);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 31744))+9);
  if (!i1) goto l22;
  i1 = (OOC_INT32)pd;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31796)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 31796)), 31805));
  OOC_IR_CheckUses__CheckUses_CallersToWorklist((ADT_ArrayList__ArrayList)i1);
  i1 = inWorklist;
  inWorklist = (i1+1);
l22:
  i1 = i;
  i1 = i1+1;
  i = i1;
  i2 = i1<i0;
  if (i2) goto l16_loop;
l27:
  i0 = inWorklist;
  i0 = i0==0;
  if (!i0) goto l13_loop;
l31:
  i0 = (OOC_INT32)v;
  *(OOC_INT8*)((_check_pointer(i0, 31979))+8) = 2;
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32035))+8);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 32044)), 0);
  i1 = 0<i0;
  if (!i1) goto l49;
  i1=0;
l34_loop:
  i2 = (OOC_INT32)module;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32072))+8);
  i2 = _check_pointer(i2, 32081);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 32081))*4);
  proc = (OOC_IR__Procedure)i1;
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32111))+4);
  *(OOC_INT32*)((_check_pointer(i2, 32093))+20) = i3;
  i3 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
  *(OOC_INT32*)((_check_pointer(i2, 32125))+16) = i3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32173))+16);
  i2 = i2!=0;
  if (!i2) goto l44;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewDef();
  def = (OOC_IR_CheckUses__Def)i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32252))+8);
  OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)def;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 32279))+4);
  i1 = !i1;
  if (i1) goto l39;
  i1=0u;
  goto l41;
l39:
  i1 = (OOC_INT32)proc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32314))+4);
  i1 = OOC_IR_CheckUses__CheckUses_CheckedFunction((OOC_SymbolTable__ProcDecl)i1);
  
l41:
  if (!i1) goto l44;
  i1 = (OOC_INT32)proc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32372))+16);
  i2 = (OOC_INT32)pragmaHistory;
  i3 = (OOC_INT32)errList;
  OOC_IR_CheckUses__WarnSym((OOC_Error__List)i3, (OOC_Config_Pragmas__History)i2, (OOC_Scanner_BasicList__Symbol)i1, 4);
l44:
  i1 = i;
  i1 = i1+1;
  i = i1;
  i2 = i1<i0;
  if (i2) goto l34_loop;
l49:
  return;
  ;
}

void OOC_OOC_IR_CheckUses_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__ErrorContext.baseTypes[0]);
  OOC_IR_CheckUses__checkUsesContext = (OOC_IR_CheckUses__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:IR:CheckUses", 17);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(17);
  OOC_IR_CheckUses__any = (OOC_SymbolTable__Type)i0;
  return;
  ;
}

/* --- */
