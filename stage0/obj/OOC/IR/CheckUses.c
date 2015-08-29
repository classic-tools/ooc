#include <OOC/IR/CheckUses.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_IR_CheckUses__ErrorContextDesc_GetTemplate(OOC_IR_CheckUses__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5014))+8);
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
    _failed_case(i1, 5006);
    goto l9;
  }
l9:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5576)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5795))+8);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5803)))), &_td_OOC_IR__ProcedureRefDesc);
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5856))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5833))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5867)))), &_td_OOC_IR__ProcedureRefDesc, 5867)), 5880))+8);
  i2 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i3, (Object__Object)i2);
  
l5:
  if (!i2) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5914))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5925)))), &_td_OOC_IR__ProcedureRefDesc, 5925)), 5938))+8);
  procDecl = (OOC_SymbolTable__Declaration)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5959))+4);
  i1 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i2, (Object__Object)i1);
  obj = (Object__Object)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5996)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 5996)), 6005));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6022));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5996)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 5996)), 6005));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6013)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6464))+8);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6473)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__ProcData.baseTypes[0]);
  pd = (OOC_IR_CheckUses__ProcData)i4;
  i5 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)(_check_pointer(i4, 6504)) = i5;
  i5 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i4, 6542))+4) = i5;
  *(OOC_UINT8*)((_check_pointer(i4, 6575))+8) = 1u;
  *(OOC_UINT8*)((_check_pointer(i4, 6604))+9) = 0u;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6655))+8);
  i5 = _check_pointer(i5, 6664);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 6664))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6667))+4);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i0, (Object__Object)i5, (Object__Object)i4);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__VisitorCalls.baseTypes[0]);
  v = (OOC_IR_CheckUses__VisitorCalls)i2;
  OOC_IR_VisitAll__InitVisitor((OOC_IR_VisitAll__Visitor)i2);
  *(OOC_INT32*)((_check_pointer(i2, 6735))+4) = i0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6791))+8);
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 6800)), 0);
  i4 = 0<i3;
  if (!i4) goto l16;
  i4=0;
l11_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6835))+8);
  i5 = _check_pointer(i5, 6844);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 6844))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6847))+4);
  *(OOC_INT32*)(_check_pointer(i2, 6815)) = i5;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6866))+8);
  i5 = _check_pointer(i5, 6875);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 6875))*4);
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
  *(OOC_INT32*)(_check_pointer(i0, 7018)) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 7050))+4) = 0u;
  return (OOC_IR_CheckUses__Def)i0;
  ;
}

OOC_IR_CheckUses__Def OOC_IR_CheckUses__DefDesc_Copy(OOC_IR_CheckUses__Def def) {
  register OOC_INT32 i0,i1,i2;
  OOC_IR_CheckUses__Def def2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__Def.baseTypes[0]);
  def2 = (OOC_IR_CheckUses__Def)i0;
  i1 = (OOC_INT32)def;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7203));
  i2 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Copy((ADT_Dictionary_IntValue__Dictionary)i2);
  *(OOC_INT32*)(_check_pointer(i0, 7190)) = i2;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 7245))+4);
  *(OOC_UINT8*)((_check_pointer(i0, 7226))+4) = i1;
  return (OOC_IR_CheckUses__Def)i0;
  ;
}

OOC_INT32 OOC_IR_CheckUses__DefDesc_GetClass(OOC_IR_CheckUses__Def def, OOC_SymbolTable__Item var) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)def;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7362));
  i2 = (OOC_INT32)var;
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  return 0;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7402));
  i0 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i2);
  return i0;
l4:
  _failed_function(7310); return 0;
  ;
}

void OOC_IR_CheckUses__DefDesc_SetClass(OOC_IR_CheckUses__Def def, OOC_SymbolTable__Item var, OOC_INT32 _class) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)def;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7555));
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
      _failed_function(7717); return 0;
      ;
    }


  i0 = (OOC_INT32)def;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 7910))+4);
  if (i1) goto l22;
  i1 = (OOC_INT32)def2;
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 8024))+4);
  i2 = !i2;
  if (!i2) goto l23;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8082));
  i2 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i2);
  k = (Object__ObjectArrayPtr)i2;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8122)), 0);
  i4 = 0<i3;
  if (!i4) goto l12;
  i4=0;
l7_loop:
  i5 = _check_pointer(i2, 8144);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 8144))*4);
  i5 = _type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 8152)))), &_td_OOC_SymbolTable__ItemDesc, 8152);
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
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8259));
  i2 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i2);
  k = (Object__ObjectArrayPtr)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8299)), 0);
  i = 0;
  i4 = 0<i3;
  if (!i4) goto l23;
  i4=0;
l15_loop:
  i5 = _check_pointer(i2, 8321);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 8321))*4);
  i5 = _type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 8329)))), &_td_OOC_SymbolTable__ItemDesc, 8329);
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
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7951));
  i2 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Copy((ADT_Dictionary_IntValue__Dictionary)i2);
  *(OOC_INT32*)(_check_pointer(i0, 7937)) = i2;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 7995))+4);
  *(OOC_UINT8*)((_check_pointer(i0, 7975))+4) = i1;
l23:
  return;
  ;
}

void OOC_IR_CheckUses__DefDesc_Unreachable(OOC_IR_CheckUses__Def def) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)def;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8540));
  ADT_Dictionary_IntValue__DictionaryDesc_Clear((ADT_Dictionary_IntValue__Dictionary)i1);
  *(OOC_UINT8*)((_check_pointer(i0, 8563))+4) = 1u;
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
  register OOC_INT32 i0,i1,i2,i3;
  Config__Variable value;
  Msg__Msg e;

  i0 = (OOC_INT32)OOC_Config_StdPragmas__warnings;
  i1 = (OOC_INT32)sym;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9005))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 9015))+16);
  i3 = (OOC_INT32)pragmaHistory;
  i0 = (OOC_INT32)OOC_Config_Pragmas__HistoryDesc_GetValue((OOC_Config_Pragmas__History)i3, (Object__String)i0, i2);
  value = (Config__Variable)i0;
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9042)))), &_td_Config__BooleanVarDesc, 9042)), 9053));
  if (i0) goto l3;
  return (Msg__Msg)0;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_IR_CheckUses__checkUsesContext;
  i2 = code;
  i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i2);
  e = (Msg__Msg)i0;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 9144))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9120)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 9183))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9158)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 9225))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9198)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
  i1 = (OOC_INT32)errList;
  OOC_Error__ListDesc_Append((OOC_Error__List)i1, (Msg__Msg)i0);
  return (Msg__Msg)i0;
l4:
  _failed_function(8766); return 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9708));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9719))+4);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9843))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9848))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9843))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9848))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9852)), 0);
  i1 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i2, 9852)), i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9794)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i1);
l7:
  return;
  ;
}

static OOC_CHAR8 OOC_IR_CheckUses__NonlocalVar(OOC_SymbolTable__ProcDecl localProc, OOC_SymbolTable__VarDecl varDecl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)varDecl;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 10101))+59);
  if (i1) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10167)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
  i1 = (OOC_INT32)localProc;
  return (i0!=i1);
  goto l4;
l3:
  return 1u;
l4:
  _failed_function(9894); return 0;
  ;
}

void OOC_IR_CheckUses__ProcDataDesc_SetReadFlag(OOC_IR_CheckUses__ProcData pd, OOC_SymbolTable__VarDecl varDecl, OOC_INT32 flag) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 oldFlag;
  OOC_INT32 newFlag;

  i0 = (OOC_INT32)pd;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10409))+4);
  i2 = (OOC_INT32)varDecl;
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  oldFlag = 0;
  i1=0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10456))+4);
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  oldFlag = i1;
  
l4:
  i3 = flag;
  i3 = (_mod(i1,4))+i3*4;
  newFlag = i3;
  i4 = i3!=i1;
  if (!i4) goto l7;
  _assert((i1<i3), 127, 10639);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10674))+4);
  ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2, i3);
  *(OOC_UINT8*)((_check_pointer(i0, 10712))+9) = 1u;
l7:
  return;
  ;
}

void OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag(OOC_IR_CheckUses__ProcData pd, OOC_SymbolTable__Item item, OOC_INT32 flag) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 oldFlag;
  OOC_INT32 newFlag;

  i0 = (OOC_INT32)pd;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10888))+4);
  i2 = (OOC_INT32)item;
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  oldFlag = 0;
  i1=0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10932))+4);
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  oldFlag = i1;
  
l4:
  i3 = flag;
  i3 = i3+(i1>>2)*4;
  newFlag = i3;
  i4 = i3!=i1;
  if (!i4) goto l7;
  _assert((i1>i3), 127, 11114);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11149))+4);
  ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2, i3);
  *(OOC_UINT8*)((_check_pointer(i0, 11184))+9) = 1u;
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
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 11469))+56);
      i1 = !i1;
      if (i1) goto l3;
      i0=0u;
      goto l4;
l3:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11502)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
      i1 = (OOC_INT32)v;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11518))+20);
      i0 = i0==i1;
      
l4:
      return i0;
      ;
    }


  i0 = (OOC_INT32)varDecl;
  i0 = OOC_IR_CheckUses__EmitVarWarning_LocalVar((OOC_SymbolTable__VarDecl)i0);
  if (!i0) goto l28;
  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 11601))+32);
  i1 = i1==0;
  if (i1) goto l12;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 12149))+32);
  i1 = i1==1;
  if (i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12225))+28);
  i2 = (OOC_INT32)varDecl;
  i1 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i2);
  i1 = i1!=2;
  if (!i1) goto l28;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12298))+28);
  OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i2, 1);
  goto l28;
l10:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12178))+28);
  i1 = (OOC_INT32)varDecl;
  OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i1, 2);
  goto l28;
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11638))+28);
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
    _failed_case(i1, 11670);
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 12564))+8);
  switch (i1) {
  case 0:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 12609))+32);
    i1 = i1>=1;
    if (i1) goto l5;
    i1=0u;
    goto l7;
l5:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12640))+20);
    i2 = (OOC_INT32)varDecl;
    i1 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i1, (OOC_SymbolTable__VarDecl)i2);
    
l7:
    if (!i1) goto l30;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12681))+12);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12698))+20);
    i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
    pb = (Object__Object)i0;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12722)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 12722)), 12731))+4);
    i1 = (OOC_INT32)varDecl;
    ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i1, 2);
    goto l30;
  case 1:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12821))+20);
    i2 = (OOC_INT32)varDecl;
    i1 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i1, (OOC_SymbolTable__VarDecl)i2);
    if (!i1) goto l30;
    i1 = *(OOC_INT8*)((_check_pointer(i0, 12860))+32);
    i1 = i1==0;
    if (i1) goto l22;
    i1 = *(OOC_INT8*)((_check_pointer(i0, 13050))+32);
    i1 = i1==1;
    if (i1) goto l20;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13130))+28);
    i1 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i2);
    i1 = i1!=2;
    if (!i1) goto l30;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13205))+28);
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i2, 1);
    goto l30;
l20:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13081))+28);
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i2, 2);
    goto l30;
l22:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12899))+28);
    i1 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i2);
    _class = i1;
    i1 = i1!=2;
    if (!i1) goto l30;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12972))+24);
    OOC_IR_CheckUses__ProcDataDesc_SetReadFlag((OOC_IR_CheckUses__ProcData)i0, (OOC_SymbolTable__VarDecl)i2, 1);
    goto l30;
  case 2:
    i1 = (OOC_INT32)sym;
    i2 = contextCall;
    i3 = (OOC_INT32)varDecl;
    OOC_IR_CheckUses__EmitVarWarning((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i3, (OOC_Scanner_BasicList__Symbol)i1, i2);
    goto l30;
  default:
    _failed_case(i1, 12558);
    goto l30;
  }
l30:
  return;
  ;
}

void OOC_IR_CheckUses__VisitorDesc_VisitVar(OOC_IR_CheckUses__Visitor v, OOC_IR__Var var) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13461))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13484));
  i2 = (OOC_INT32)v;
  OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i2, (OOC_SymbolTable__VarDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13471)))), &_td_OOC_SymbolTable__VarDeclDesc, 13471)), (OOC_Scanner_BasicList__Symbol)i0, 0u);
  return;
  ;
}

void OOC_IR_CheckUses__VisitorDesc_VisitDeref(OOC_IR_CheckUses__Visitor v, OOC_IR__Deref deref) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object pb;
  OOC_INT8 oldMode;

  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 13639))+8);
  switch (i1) {
  case 0:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 13684))+32);
    i1 = i1>=1;
    if (!i1) goto l12;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13720))+12);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13737))+20);
    i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
    pb = (Object__Object)i0;
    i1 = (OOC_INT32)deref;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13761)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 13761)), 13770))+4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13786))+4);
    ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i1, 2);
    goto l12;
  case 1:
  case 2:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 13870))+32);
    i1 = i1==0;
    if (i1) goto l9;
    i1 = (OOC_INT32)deref;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13942))+28);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13961))+4);
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i2, (OOC_SymbolTable__Item)i3, 2);
    i2 = *(OOC_INT8*)((_check_pointer(i0, 13998))+32);
    oldMode = i2;
    *(OOC_INT8*)((_check_pointer(i0, 14014))+32) = 0;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14042))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14042))+8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14050)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
    *(OOC_INT8*)((_check_pointer(i0, 14071))+32) = i2;
    goto l12;
l9:
    i1 = (OOC_INT32)deref;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13902))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13902))+8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13910)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
    goto l12;
  default:
    _failed_case(i1, 13633);
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 14235))+32);
  oldMode = i1;
  i2 = (OOC_INT32)index;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14251))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14251))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14257)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i4, (OOC_IR__Visitor)i0);
  *(OOC_INT8*)((_check_pointer(i0, 14275))+32) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14299))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14299))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14305)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  *(OOC_INT8*)((_check_pointer(i0, 14323))+32) = i1;
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 14859))+32);
  oldMode = i1;
  i2 = (OOC_INT32)call;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14874))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14874))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14881)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i4, (OOC_IR__Visitor)i0);
  i3 = *(OOC_INT8*)((_check_pointer(i0, 14908))+8);
  switch (i3) {
  case 0:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14957))+8);
    i3 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14965)))), &_td_OOC_IR__ProcedureRefDesc));
    if (i3) goto l5;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15001))+8);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15012)))), &_td_OOC_IR__ProcedureRefDesc, 15012)), 15025))+8);
    i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15035)))), &_td_OOC_SymbolTable__ProcDeclDesc, 15035)), 15044))+52);
    
    goto l7;
l5:
    i3=1u;
l7:
    if (!i3) goto l9;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15074))+24);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15088))+4);
    i4 = (OOC_INT32)OOC_IR_CheckUses__any;
    ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i4, 2);
l9:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15182))+12);
    i = 0;
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 15192)), 0);
    i4 = 0<i3;
    if (!i4) goto l131;
    i4=0;
l12_loop:
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15216))+16);
    i5 = _check_pointer(i5, 15227);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15227))*4);
    i5 = i5!=(OOC_INT32)0;
    if (i5) goto l15;
    i5=0u;
    goto l17;
l15:
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15244))+16);
    i5 = _check_pointer(i5, 15255);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15255))*4);
    i5 = *(OOC_UINT8*)((_check_pointer(i5, 15258))+59);
    
l17:
    if (i5) goto l19;
    *(OOC_INT8*)((_check_pointer(i0, 15479))+32) = 0;
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15508))+12);
    i5 = _check_pointer(i5, 15518);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15518))*4);
    i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15508))+12);
    i6 = _check_pointer(i6, 15518);
    i7 = OOC_ARRAY_LENGTH(i6, 0);
    i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 15518))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15521)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i6, (OOC_IR__Visitor)i0);
    goto l23;
l19:
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15294))+12);
    i5 = _check_pointer(i5, 15304);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15304))*4);
    i5 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15308)))), &_td_OOC_IR__ConstDesc));
    if (!i5) goto l23;
    *(OOC_INT8*)((_check_pointer(i0, 15368))+32) = 1;
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15400))+12);
    i5 = _check_pointer(i5, 15410);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15410))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15417)))), &_td_OOC_IR__AdrDesc, 15417)), 15421))+8);
    i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15400))+12);
    i6 = _check_pointer(i6, 15410);
    i7 = OOC_ARRAY_LENGTH(i6, 0);
    i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 15410))*4);
    i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 15417)))), &_td_OOC_IR__AdrDesc, 15417)), 15421))+8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15428)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i6, (OOC_IR__Visitor)i0);
l23:
    i4 = i4+1;
    i = i4;
    i5 = i4<i3;
    if (i5) goto l12_loop;
    goto l131;
  case 1:
  case 2:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15622))+8);
    i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15630)))), &_td_OOC_IR__ProcedureRefDesc);
    if (i3) goto l32;
    i3=0u;
    goto l34;
l32:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15685))+8);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15662))+12);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15696)))), &_td_OOC_IR__ProcedureRefDesc, 15696)), 15709))+8);
    i3 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i4, (Object__Object)i3);
    
l34:
    if (i3) goto l43;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15922))+8);
    i3 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15930)))), &_td_OOC_IR__ProcedureRefDesc));
    if (i3) goto l38;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15968))+8);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15979)))), &_td_OOC_IR__ProcedureRefDesc, 15979)), 15992))+8);
    i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16002)))), &_td_OOC_SymbolTable__ProcDeclDesc, 16002)), 16011))+52);
    
    goto l40;
l38:
    i3=1u;
l40:
    if (!i3) goto l42;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16043))+28);
    i4 = (OOC_INT32)OOC_IR_CheckUses__any;
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i3, (OOC_SymbolTable__Item)i4, 2);
l42:
    callee = (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
    inout = (ADT_Dictionary_IntValue__Dictionary)(OOC_INT32)0;
    i3=(OOC_INT32)0;i4=(OOC_INT32)0;
    goto l44;
l43:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15743))+8);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15754)))), &_td_OOC_IR__ProcedureRefDesc, 15754)), 15767))+8);
    i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15777)))), &_td_OOC_SymbolTable__ProcDeclDesc, 15777);
    callee = (OOC_SymbolTable__ProcDecl)i3;
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15824))+8);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15804))+12);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15835)))), &_td_OOC_IR__ProcedureRefDesc, 15835)), 15848))+8);
    i4 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i5, (Object__Object)i4);
    obj = (Object__Object)i4;
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15877)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 15877)), 15886))+4);
    inout = (ADT_Dictionary_IntValue__Dictionary)i4;
    {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
l44:
    i5 = (OOC_INT32)ADT_ArrayList__New(8);
    readList = (ADT_ArrayList__ArrayList)i5;
    i6 = (OOC_INT32)ADT_ArrayList__New(8);
    writeList = (ADT_ArrayList__ArrayList)i6;
    i7 = (OOC_INT32)ADT_Dictionary_IntValue__New();
    writeMaybeDict = (ADT_Dictionary_IntValue__Dictionary)i7;
    i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16321))+12);
    i = 0;
    i8 = OOC_ARRAY_LENGTH((_check_pointer(i8, 16331)), 0);
    i9 = 0<i8;
    if (!i9) goto l80;
    i9 = i3==(OOC_INT32)0;
    i10=0;
l47_loop:
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16355))+16);
    i11 = _check_pointer(i11, 16366);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 16366))*4);
    i11 = i11==(OOC_INT32)0;
    if (i11) goto l75;
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16423))+16);
    i11 = _check_pointer(i11, 16434);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 16434))*4);
    i11 = *(OOC_UINT8*)((_check_pointer(i11, 16437))+59);
    if (i11) goto l52;
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17387))+12);
    i11 = _check_pointer(i11, 17397);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 17397))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 17375)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i5, (Object__Object)i11);
    goto l75;
l52:
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16473))+12);
    i11 = _check_pointer(i11, 16483);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 16483))*4);
    i11 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 16487)))), &_td_OOC_IR__ConstDesc));
    if (!i11) goto l75;
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16560))+12);
    i11 = _check_pointer(i11, 16570);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 16570))*4);
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 16577)))), &_td_OOC_IR__AdrDesc, 16577)), 16581))+8);
    design = (OOC_IR__Expression)i11;
    if (i9) goto l71;
    i12 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16738))+16);
    i12 = _check_pointer(i12, 16749);
    i13 = OOC_ARRAY_LENGTH(i12, 0);
    i12 = (OOC_INT32)*(OOC_INT32*)(i12+(_check_index(i10, i13, OOC_UINT32, 16749))*4);
    i12 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i12);
    if (!i12) goto l75;
    i12 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16796))+16);
    i12 = _check_pointer(i12, 16807);
    i13 = OOC_ARRAY_LENGTH(i12, 0);
    i12 = (OOC_INT32)*(OOC_INT32*)(i12+(_check_index(i10, i13, OOC_UINT32, 16807))*4);
    i12 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i12);
    _class = i12;
    i13 = i12>>2;
    switch (i13) {
    case 1:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 16902)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i5, (Object__Object)i11);
      goto l63;
    case 0:
      goto l63;
    default:
      _failed_case(i13, 16827);
      goto l63;
    }
l63:
    i12 = _mod(i12,4);
    switch (i12) {
    case 2:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 17102)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i11);
      goto l75;
    case 1:
      ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i7, (Object__Object)i11, 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 17217)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i11);
      goto l75;
    case 0:
      goto l75;
    default:
      _failed_case(i12, 17025);
      goto l75;
    }
l71:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 16686)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i11);
l75:
    i10 = i10+1;
    i = i10;
    i11 = i10<i8;
    if (i11) goto l47_loop;
l80:
    i8 = *(OOC_INT32*)((_check_pointer(i5, 17456))+4);
    i = 0;
    i9 = 0<i8;
    if (!i9) goto l88;
    i9=0;
l83_loop:
    *(OOC_INT8*)((_check_pointer(i0, 17476))+32) = 0;
    i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 17507));
    i10 = _check_pointer(i10, 17513);
    i11 = OOC_ARRAY_LENGTH(i10, 0);
    i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i9, i11, OOC_UINT32, 17513))*4);
    i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 17507));
    i11 = _check_pointer(i11, 17513);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i9, i12, OOC_UINT32, 17513))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 17520)))), &_td_OOC_IR__ExpressionDesc, 17520)), 17531)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)(_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 17520)))), &_td_OOC_IR__ExpressionDesc, 17520)), (OOC_IR__Visitor)i0);
    i9 = i9+1;
    i = i9;
    i10 = i9<i8;
    if (i10) goto l83_loop;
l88:
    i5 = i3!=(OOC_INT32)0;
    if (!i5) goto l117;
    i5 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i3);
    k = (Object__ObjectArrayPtr)i5;
    i8 = OOC_ARRAY_LENGTH((_check_pointer(i5, 17643)), 0);
    i = 0;
    i9 = 0<i8;
    if (!i9) goto l117;
    i9=0;
l93_loop:
    i10 = _check_pointer(i5, 17666);
    i11 = OOC_ARRAY_LENGTH(i10, 0);
    i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i9, i11, OOC_UINT32, 17666))*4);
    i10 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 17670)))), &_td_OOC_SymbolTable__VarDeclDesc);
    if (i10) goto l96;
    i10 = _check_pointer(i5, 18530);
    i11 = OOC_ARRAY_LENGTH(i10, 0);
    i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i9, i11, OOC_UINT32, 18530))*4);
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18515))+28);
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i11, (OOC_SymbolTable__Item)(_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 18538)))), &_td_OOC_SymbolTable__TypeDesc, 18538)), 2);
    goto l111;
l96:
    i10 = _check_pointer(i5, 17715);
    i11 = OOC_ARRAY_LENGTH(i10, 0);
    i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i9, i11, OOC_UINT32, 17715))*4);
    i10 = _type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 17723)))), &_td_OOC_SymbolTable__VarDeclDesc, 17723);
    varDecl = (OOC_SymbolTable__VarDecl)i10;
    i11 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 17756)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i10);
    i11 = i11!=i4;
    if (!i11) goto l111;
    i11 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i10);
    _class = i11;
    i12 = i11>>2;
    switch (i12) {
    case 1:
      *(OOC_INT8*)((_check_pointer(i0, 17924))+32) = 0;
      i12 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 17984));
      OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i10, (OOC_Scanner_BasicList__Symbol)i12, 1u);
      goto l103;
    case 0:
      goto l103;
    default:
      _failed_case(i12, 17856);
      goto l103;
    }
l103:
    i11 = _mod(i11,4);
    switch (i11) {
    case 2:
      *(OOC_INT8*)((_check_pointer(i0, 18172))+32) = 1;
      i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18233));
      OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i10, (OOC_Scanner_BasicList__Symbol)i11, 1u);
      goto l111;
    case 1:
      *(OOC_INT8*)((_check_pointer(i0, 18289))+32) = 2;
      i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18355));
      OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i10, (OOC_Scanner_BasicList__Symbol)i11, 1u);
      goto l111;
    case 0:
      goto l111;
    default:
      _failed_case(i11, 18103);
      goto l111;
    }
l111:
    i9 = i9+1;
    i = i9;
    i10 = i9<i8;
    if (i10) goto l93_loop;
l117:
    i3 = *(OOC_INT32*)((_check_pointer(i6, 18630))+4);
    i = 0;
    i4 = 0<i3;
    if (!i4) goto l131;
    i4=0;
l120_loop:
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 18683));
    i5 = _check_pointer(i5, 18689);
    i8 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i8, OOC_UINT32, 18689))*4);
    i5 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i7, (Object__Object)i5);
    if (i5) goto l123;
    *(OOC_INT8*)((_check_pointer(i0, 18755))+32) = 1;
    goto l124;
l123:
    *(OOC_INT8*)((_check_pointer(i0, 18710))+32) = 2;
l124:
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 18801));
    i5 = _check_pointer(i5, 18807);
    i8 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i8, OOC_UINT32, 18807))*4);
    i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 18801));
    i8 = _check_pointer(i8, 18807);
    i9 = OOC_ARRAY_LENGTH(i8, 0);
    i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 18807))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 18814)))), &_td_OOC_IR__ExpressionDesc, 18814)), 18825)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)(_type_guard(i8, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 18814)))), &_td_OOC_IR__ExpressionDesc, 18814)), (OOC_IR__Visitor)i0);
    i4 = i4+1;
    i = i4;
    i5 = i4<i3;
    if (i5) goto l120_loop;
    goto l131;
  default:
    _failed_case(i3, 14902);
    goto l131;
  }
l131:
  *(OOC_INT8*)((_check_pointer(i0, 18867))+32) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18901))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18908))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18901))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18908))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18913)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  type = (OOC_SymbolTable__Type)i1;
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18941)))), &_td_OOC_SymbolTable__FormalParsDesc, 18941)), 18952))+57);
  if (!i1) goto l134;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18974))+28);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19290))+4);
  i1 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i1);
  k = (Object__ObjectArrayPtr)i1;
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19328)), 0);
  i3 = 0<i2;
  if (!i3) goto l27;
  i3 = (OOC_INT32)knownProcs;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19358));
  i5 = *(OOC_INT32*)((_check_pointer(i5, 19366))+4);
  j = 0;
  i6 = 0<i5;
  if (!i6) goto l22;
  i6=0;
l6_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19401));
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i7, 19409));
  i7 = _check_pointer(i7, 19415);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 19415))*4);
  i7 = _type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 19423)))), &_td_OOC_SymbolTable__ProcDeclDesc, 19423);
  callerDecl = (OOC_SymbolTable__ProcDecl)i7;
  i8 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i3, (Object__Object)i7);
  obj = (Object__Object)i8;
  i8 = _type_guard(i8, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 19501)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 19501);
  pdCaller = (OOC_IR_CheckUses__ProcData)i8;
  i9 = _check_pointer(i1, 19547);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 19532))+4);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i4, i10, OOC_UINT32, 19547))*4);
  i9 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i11, (Object__Object)i9);
  i9 = !i9;
  if (i9) goto l9;
  i7=0u;
  goto l15;
l9:
  i9 = _check_pointer(i1, 19568);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i4, i10, OOC_UINT32, 19568))*4);
  i9 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 19572)))), &_td_OOC_SymbolTable__TypeDesc);
  if (i9) goto l12;
  i9 = _check_pointer(i1, 19625);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i4, i10, OOC_UINT32, 19625))*4);
  i7 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i7, (OOC_SymbolTable__VarDecl)(_type_guard(i9, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 19633)))), &_td_OOC_SymbolTable__VarDeclDesc, 19633)));
  
  goto l15;
l12:
  i7=1u;
l15:
  if (!i7) goto l17;
  i7 = _check_pointer(i1, 19679);
  i9 = OOC_ARRAY_LENGTH(i7, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 19667))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i9, OOC_UINT32, 19679))*4);
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
          *(OOC_INT32*)((_check_pointer(i0, 20285))+28) = i1;
          *(OOC_INT8*)((_check_pointer(i0, 20307))+32) = 0;
          i1 = (OOC_INT32)expr;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20334)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
          return;
          ;
        }

        
        void OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign(OOC_IR__Expression design, OOC_INT8 mode) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)v;
          i1 = (OOC_INT32)def;
          *(OOC_INT32*)((_check_pointer(i0, 20459))+28) = i1;
          i1 = mode;
          *(OOC_INT8*)((_check_pointer(i0, 20481))+32) = i1;
          i1 = (OOC_INT32)design;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20510)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
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
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20951))+8);
              i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20961)))), &_td_OOC_IR__TypeTestDesc, 20961);
              localTest = (OOC_IR__TypeTest)i1;
              i2 = (OOC_INT32)prevGuards;
              i = 0;
              i3 = *(OOC_INT32*)((_check_pointer(i2, 21006))+4);
              i4 = 0<i3;
              if (!i4) goto l19;
              i4=0;
l3_loop:
              i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 21047));
              i5 = _check_pointer(i5, 21053);
              i6 = OOC_ARRAY_LENGTH(i5, 0);
              i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 21053))*4);
              i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 21060)))), &_td_OOC_IR__TypeTestDesc, 21060);
              test = (OOC_IR__TypeTest)i4;
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21091))+8);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21121))+8);
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 21100)))), &_td_OOC_IR__VarDesc, 21100)), 21104))+8);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 21130)))), &_td_OOC_IR__VarDesc, 21130)), 21134))+8);
              i5 = i5==i6;
              if (i5) goto l6;
              i4=0u;
              goto l8;
l6:
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21184))+12);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21236))+12);
              i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i4);
              
l8:
              if (i4) goto l10;
              i4=0u;
              goto l12;
l10:
              i4 = (OOC_INT32)v;
              i4 = *(OOC_INT8*)((_check_pointer(i4, 21271))+8);
              i4 = i4==2;
              
l12:
              if (!i4) goto l14;
              i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 21357));
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
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21484))+8);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i4);
              def = (OOC_IR_CheckUses__Def)i1;
              i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i3);
              def2 = (OOC_IR_CheckUses__Def)i1;
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21595))+12);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i4);
              i4 = (OOC_INT32)def;
              OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i4, (OOC_IR_CheckUses__Def)i1);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21663))+16);
              i1 = i1!=0;
              if (!i1) goto l30;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21710))+16);
              i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21720)), 0);
              i1 = i1==1;
              if (i1) goto l24;
              i1=0u;
              goto l26;
l24:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21750))+16);
              i1 = _check_pointer(i1, 21760);
              i4 = OOC_ARRAY_LENGTH(i1, 0);
              i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i4, OOC_UINT8, 21760))*4);
              i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21764)))), &_td_OOC_IR__WithStatmDesc);
              
l26:
              if (i1) goto l28;
              i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i3);
              def2 = (OOC_IR_CheckUses__Def)i1;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22012))+16);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
              i0 = (OOC_INT32)def;
              OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
              goto l30;
l28:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21822))+8);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21810)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21832)))), &_td_OOC_IR__TypeTestDesc, 21832)));
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21879))+16);
              i0 = _check_pointer(i0, 21889);
              i1 = OOC_ARRAY_LENGTH(i0, 0);
              i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 21889))*4);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckStatm_CheckWith((OOC_IR_CheckUses__Def)i3, (OOC_IR__WithStatm)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21896)))), &_td_OOC_IR__WithStatmDesc, 21896)), (ADT_ArrayList__ArrayList)i2);
l30:
              return;
              ;
            }


          i0 = (OOC_INT32)statm;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22148)))), &_td_OOC_IR__AssertDesc);
          if (i1) goto l114;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22449)))), &_td_OOC_IR__AssignOpDesc);
          if (i1) goto l112;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22609)))), &_td_OOC_IR__AssignmentDesc);
          if (i1) goto l110;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22734)))), &_td_OOC_IR__CallDesc);
          if (i1) goto l108;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22801)))), &_td_OOC_IR__CopyDesc);
          if (i1) goto l106;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22917)))), &_td_OOC_IR__CopyParameterDesc);
          if (i1) goto l127;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22988)))), &_td_OOC_IR__CopyStringDesc);
          if (i1) goto l103;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23110)))), &_td_OOC_IR__ForStatmDesc);
          if (i1) goto l101;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23363)))), &_td_OOC_IR__IfStatmDesc);
          if (i1) goto l99;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23590)))), &_td_OOC_IR__CaseStatmDesc);
          if (i1) goto l86;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24084)))), &_td_OOC_IR__LoopStatmDesc);
          if (i1) goto l81;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24275)))), &_td_OOC_IR__ExitDesc);
          if (i1) goto l79;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24418)))), &_td_OOC_IR__MoveBlockDesc);
          if (i1) goto l62;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25138)))), &_td_OOC_IR__RaiseDesc);
          if (i1) goto l60;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25245)))), &_td_OOC_IR__RepeatStatmDesc);
          if (i1) goto l58;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25375)))), &_td_OOC_IR__ReturnDesc);
          if (i1) goto l53;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25569)))), &_td_OOC_IR__TryStatmDesc);
          if (i1) goto l43;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25880)))), &_td_OOC_IR__WhileStatmDesc);
          if (i1) goto l41;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26001)))), &_td_OOC_IR__WithStatmDesc);
          if (i1) goto l39;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25994)))), 25994);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25924))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25967))+12);
          i1 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          goto l127;
l43:
          i1 = (OOC_INT32)def;
          i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          defIn = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25651))+8);
          i3 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i3, (OOC_IR__StatementSeq)i2);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25696))+12);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 25706)), 0);
          i = 0;
          i3 = 0<i2;
          if (!i3) goto l127;
          i3=0;
l46_loop:
          i4 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i4;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25785))+12);
          i5 = _check_pointer(i5, 25795);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 25795))*4);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 25798))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i4, (OOC_IR__StatementSeq)i5);
          i5 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i5, (OOC_IR_CheckUses__Def)i4);
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l46_loop;
          goto l127;
l53:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25409))+8);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l56;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25456))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
l56:
          i0 = (OOC_INT32)v;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25492))+16);
          i1 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i0);
          goto l127;
l58:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25299))+8);
          i2 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25332))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l127;
l60:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25177))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i0);
          goto l127;
l62:
          i1 = (OOC_INT32)v;
          i2 = *(OOC_INT8*)((_check_pointer(i1, 24451))+8);
          i2 = i2==0;
          if (!i2) goto l65;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24496))+24);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24510))+4);
          i2 = (OOC_INT32)OOC_IR_CheckUses__any;
          ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2, 2);
l65:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24601))+8);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24609)))), &_td_OOC_IR__AdrDesc);
          if (i1) goto l68;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24719))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          goto l69;
l68:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24652))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24663)))), &_td_OOC_IR__AdrDesc, 24663)), 24667))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
l69:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24769))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24811))+12);
          expr = (OOC_IR__Expression)i1;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24837)))), &_td_OOC_IR__TypeConvDesc);
          if (!i2) goto l73;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24886)))), &_td_OOC_IR__TypeConvDesc, 24886)), 24895))+8);
          expr = (OOC_IR__Expression)i1;
          
l73:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24936)))), &_td_OOC_IR__AdrDesc);
          if (i2) goto l76;
          i1 = (OOC_INT32)v;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25033))+28);
          i2 = (OOC_INT32)OOC_IR_CheckUses__any;
          OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i2, 2);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25089))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l127;
l76:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24984)))), &_td_OOC_IR__AdrDesc, 24984)), 24988))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l79:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24324))+8);
          i1 = (OOC_INT32)loopExits;
          i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
          obj = (Object__Object)i0;
          i1 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24346)))), &_td_OOC_IR_CheckUses__DefDesc, 24346)), (OOC_IR_CheckUses__Def)i1);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i0);
          goto l127;
l81:
          i1 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
          defIn = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)loopExits;
          ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i0, (Object__Object)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24215))+8);
          i2 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i0);
          i0 = _check_pointer(i1, 24246);
          i1 = (OOC_INT32)def;
          i1 = _check_pointer(i1, 24236);
          i2 = (OOC_INT32)&_td_OOC_IR_CheckUses__DefDesc;
          i2 = i2!=i2;
          if (!i2) goto l84;
          _failed_type_assert(24236);
l84:
          _copy_block(i0,i1,8);
          goto l127;
l86:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23633))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)def;
          i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          defIn = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i2);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23736))+12);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 23745)), 0);
          i = 0;
          i3 = 0<i2;
          if (!i3) goto l94;
          i3=0;
l89_loop:
          i4 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i4;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23824))+12);
          i5 = _check_pointer(i5, 23833);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 23833))*4);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23836))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i4, (OOC_IR__StatementSeq)i5);
          i5 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i5, (OOC_IR_CheckUses__Def)i4);
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l89_loop;
l94:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23911))+16);
          i2 = i2!=(OOC_INT32)0;
          if (!i2) goto l127;
          i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i1;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24003))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
          goto l127;
l99:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23404))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)def;
          i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23477))+12);
          i3 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i3, (OOC_IR__StatementSeq)i2);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23524))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
          goto l127;
l101:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23152))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23186))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23220))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i1, 1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23329))+24);
          i1 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          goto l127;
l103:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23032))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23069))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l106:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22839))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22876))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l108:
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l127;
l110:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22653))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22689))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l112:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22491))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22525))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22564))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l114:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22182))+8);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l121;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22223))+8);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22234)))), &_td_OOC_IR__ConstDesc);
          if (i1) goto l119;
          i1=0u;
          goto l123;
l119:
          i1 = (OOC_INT32)Object_Boxed__false;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22288))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22302)))), &_td_OOC_IR__ConstDesc, 22302)), 22308))+8);
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22275)))), Object_Boxed__BooleanDesc_Equals)),Object_Boxed__BooleanDesc_Equals)((Object_Boxed__Boolean)i1, (Object__Object)i2);
          
          goto l123;
l121:
          i1=1u;
l123:
          if (i1) goto l125;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22395))+8);
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
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26260)), 0);
      i1 = 0!=i1;
      if (i1) goto l5;
      i1=0u;
      goto l7;
l5:
      i1 = (OOC_INT32)def;
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 26270))+4);
      i1 = !i1;
      
l7:
      if (i1) goto l9;
      i1=i0;i0=0;
      goto l19;
l9:
      i1=0;
l10_loop:
      i0 = _check_pointer(i0, 26315);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 26315))*4);
      OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckStatm((OOC_IR__Statement)i0);
      i0 = i;
      i0 = i0+1;
      i = i0;
      i1 = (OOC_INT32)statmSeq;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 26260)), 0);
      i2 = i0!=i2;
      if (i2) goto l13;
      i2=0u;
      goto l15;
l13:
      i2 = (OOC_INT32)def;
      i2 = *(OOC_UINT8*)((_check_pointer(i2, 26270))+4);
      i2 = !i2;
      
l15:
      if (!i2) goto l19;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
      goto l10_loop;
l19:
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 26380)), 0);
      i2 = i0!=i2;
      if (i2) goto l22;
      i2=0u;
      goto l24;
l22:
      i2 = (OOC_INT32)v;
      i2 = *(OOC_INT8*)((_check_pointer(i2, 26388))+8);
      i2 = i2==2;
      
l24:
      if (!i2) goto l27;
      i1 = _check_pointer(i1, 26469);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 26469))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26472));
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26640))+64);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26651))+44);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=0u;
      goto l4;
l3:
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 26691))+50);
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
      i1 = *(OOC_INT32*)((_check_pointer(i0, 26879))+4);
      i2 = 0<i1;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26926));
      i3 = _check_pointer(i3, 26932);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 26932))*4);
      i4 = (OOC_INT32)knownProcs;
      i3 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i4, (Object__Object)i3);
      pd = (Object__Object)i3;
      *(OOC_UINT8*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 26949)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 26949)), 26958))+8) = 1u;
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27301))+4);
      i1 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i1);
      k = (Object__ObjectArrayPtr)i1;
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 27341)), 0);
      i3 = (OOC_INT32)def;
      i4 = 0<i2;
      if (!i4) goto l11;
      i4=0;
l3_loop:
      i5 = _check_pointer(i1, 27379);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 27379))*4);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 27364));
      i5 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i6, (Object__Object)i5);
      i5 = !i5;
      if (!i5) goto l6;
      i5 = _check_pointer(i1, 27436);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 27436))*4);
      OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag((OOC_IR_CheckUses__ProcData)i0, (OOC_SymbolTable__Item)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 27444)))), &_td_OOC_SymbolTable__ItemDesc, 27444)), 0);
l6:
      i4 = i4+1;
      i = i4;
      i5 = i4<i2;
      if (i5) goto l3_loop;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 27511));
      i1 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i1);
      k = (Object__ObjectArrayPtr)i1;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 27551)), 0);
      i = 0;
      i4 = 0<i2;
      if (!i4) goto l36;
      i4 = (OOC_INT32)localProc;
      i5=0;
l14_loop:
      i6 = _check_pointer(i1, 27576);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 27576))*4);
      item = (Object__Object)i6;
      i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 27598)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i7) goto l21;
      i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 28048)))), &_td_OOC_SymbolTable__TypeDesc);
      if (i7) goto l19;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 28042)))), 28042);
      goto l31;
l19:
      *nonlocalWrites = 1u;
      OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag((OOC_IR_CheckUses__ProcData)i0, (OOC_SymbolTable__Item)i6, 2);
      goto l31;
l21:
      i7 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i4, (OOC_SymbolTable__VarDecl)i6);
      if (!i7) goto l31;
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 27682));
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
        _failed_case(i7, 27674);
        goto l31;
      }
l31:
      i5 = i5+1;
      i = i5;
      i6 = i5<i2;
      if (i6) goto l14_loop;
l36:
      i1 = *(OOC_UINT8*)((_check_pointer(i3, 28177))+4);
      if (i1) goto l39;
      i1=0u;
      goto l41;
l39:
      i1 = (OOC_INT32)localProc;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28256))+64);
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 28267))+57);
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
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 28395))+51);
      
      goto l49;
l46:
      i1=1u;
l49:
      if (!i1) goto l51;
      i1 = (OOC_INT32)localProc;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28433))+64);
      *(OOC_UINT8*)((_check_pointer(i1, 28444))+57) = 1u;
      *(OOC_UINT8*)((_check_pointer(i0, 28473))+9) = 1u;
l51:
      return;
      ;
    }


  i0 = (OOC_INT32)moduleDecl;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 29974))+52);
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
  *(OOC_INT32*)(_check_pointer(i2, 30145)) = i3;
  i3 = (OOC_INT32)pragmaHistory;
  *(OOC_INT32*)((_check_pointer(i2, 30171))+4) = i3;
  *(OOC_INT32*)((_check_pointer(i2, 30209))+28) = 0;
  *(OOC_INT32*)((_check_pointer(i2, 30227))+12) = i1;
  i3 = (OOC_INT32)ADT_Dictionary__New();
  loopExits = (ADT_Dictionary__Dictionary)i3;
  *(OOC_INT8*)((_check_pointer(i2, 30521))+8) = 0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30578))+8);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 30587)), 0);
  i2 = 0<i0;
  if (!i2) goto l12;
  i2=i1;i1=0;
l7_loop:
  i3 = (OOC_INT32)module;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 30615))+8);
  i3 = _check_pointer(i3, 30624);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 30624))*4);
  proc = (OOC_IR__Procedure)i1;
  i3 = (OOC_INT32)v;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30654))+4);
  *(OOC_INT32*)((_check_pointer(i3, 30636))+20) = i4;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 30689))+20);
  i2 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i2, (Object__Object)i4);
  pd = (Object__Object)i2;
  *(OOC_INT32*)((_check_pointer(i3, 30709))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30730)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 30730));
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
  *(OOC_INT32*)((_check_pointer(i3, 30748))+16) = i2;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewDef();
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30823))+8);
  OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)pd;
  i2 = (OOC_INT32)knownProcs;
  OOC_IR_CheckUses__TransitiveWriteClosure((ADT_Dictionary__Dictionary)i2, (OOC_IR_CheckUses__ProcData)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30879)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 30879)));
  i1 = i;
  i1 = i1+1;
  i = i1;
  i3 = i1<i0;
  if (i3) goto l7_loop;
l12:
  i0 = (OOC_INT32)v;
  *(OOC_INT8*)((_check_pointer(i0, 31060))+8) = 1;
l13_loop:
  inWorklist = 0;
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31152))+8);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 31161)), 0);
  i1 = 0<i0;
  if (!i1) goto l27;
  i1=0;
l16_loop:
  i2 = (OOC_INT32)module;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31191))+8);
  i2 = _check_pointer(i2, 31200);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 31200))*4);
  proc = (OOC_IR__Procedure)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31238))+4);
  i3 = (OOC_INT32)knownProcs;
  i2 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i3, (Object__Object)i2);
  pd = (Object__Object)i2;
  i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31260)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 31260)), 31269))+8);
  if (!i3) goto l22;
  i3 = (OOC_INT32)v;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31315))+4);
  *(OOC_INT32*)((_check_pointer(i3, 31297))+20) = i4;
  *(OOC_INT32*)((_check_pointer(i3, 31333))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 31354)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 31354));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 31376))+24);
  *(OOC_UINT8*)((_check_pointer(i2, 31390))+9) = 0u;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
  *(OOC_INT32*)((_check_pointer(i3, 31425))+16) = i2;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewDef();
  def = (OOC_IR_CheckUses__Def)i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31520))+8);
  OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)v;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31543))+16);
  i3 = (OOC_INT32)def;
  OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i2, (OOC_IR_CheckUses__Def)i3);
  i2 = (OOC_INT32)proc;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31659))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31590))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31603))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31620))+16);
  OOC_IR_CheckUses__CheckUses_SetWriteFlags((OOC_SymbolTable__ProcDecl)i3, (OOC_IR_CheckUses__ProcData)i4, (OOC_IR_CheckUses__Def)i1, (void*)((_check_pointer(i2, 31664))+52));
  i1 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31707))+24);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 31721))+9);
  if (!i1) goto l22;
  i1 = (OOC_INT32)pd;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31773)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 31773)), 31782));
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
  *(OOC_INT8*)((_check_pointer(i0, 31956))+8) = 2;
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32012))+8);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 32021)), 0);
  i1 = 0<i0;
  if (!i1) goto l49;
  i1=0;
l34_loop:
  i2 = (OOC_INT32)module;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32049))+8);
  i2 = _check_pointer(i2, 32058);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 32058))*4);
  proc = (OOC_IR__Procedure)i1;
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32088))+4);
  *(OOC_INT32*)((_check_pointer(i2, 32070))+20) = i3;
  i3 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
  *(OOC_INT32*)((_check_pointer(i2, 32102))+16) = i3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32150))+16);
  i2 = i2!=0;
  if (!i2) goto l44;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewDef();
  def = (OOC_IR_CheckUses__Def)i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32229))+8);
  OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)def;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 32256))+4);
  i1 = !i1;
  if (i1) goto l39;
  i1=0u;
  goto l41;
l39:
  i1 = (OOC_INT32)proc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32291))+4);
  i1 = OOC_IR_CheckUses__CheckUses_CheckedFunction((OOC_SymbolTable__ProcDecl)i1);
  
l41:
  if (!i1) goto l44;
  i1 = (OOC_INT32)proc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32349))+16);
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
