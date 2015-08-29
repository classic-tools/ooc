#include <OOC/IR/CheckUses.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_IR_CheckUses__ErrorContextDesc_GetTemplate(OOC_IR_CheckUses__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5058))+8);
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
    _failed_case(i1, 5050);
    goto l9;
  }
l9:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5620)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5839))+8);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5847)))), &_td_OOC_IR__ProcedureRefDesc);
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5900))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5877))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5911)))), &_td_OOC_IR__ProcedureRefDesc, 5911)), 5924))+8);
  i2 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i3, (Object__Object)i2);
  
l5:
  if (!i2) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5958))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5969)))), &_td_OOC_IR__ProcedureRefDesc, 5969)), 5982))+8);
  procDecl = (OOC_SymbolTable__Declaration)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6003))+4);
  i1 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i2, (Object__Object)i1);
  obj = (Object__Object)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6040)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 6040)), 6049));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6066));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6040)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 6040)), 6049));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6057)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6508))+8);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6517)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__ProcData.baseTypes[0]);
  pd = (OOC_IR_CheckUses__ProcData)i4;
  i5 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)(_check_pointer(i4, 6548)) = i5;
  i5 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i4, 6586))+4) = i5;
  *(OOC_UINT8*)((_check_pointer(i4, 6619))+8) = 1u;
  *(OOC_UINT8*)((_check_pointer(i4, 6648))+9) = 0u;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6699))+8);
  i5 = _check_pointer(i5, 6708);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 6708))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6711))+4);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i0, (Object__Object)i5, (Object__Object)i4);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__VisitorCalls.baseTypes[0]);
  v = (OOC_IR_CheckUses__VisitorCalls)i2;
  OOC_IR_VisitAll__InitVisitor((OOC_IR_VisitAll__Visitor)i2);
  *(OOC_INT32*)((_check_pointer(i2, 6779))+4) = i0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6835))+8);
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 6844)), 0);
  i4 = 0<i3;
  if (!i4) goto l16;
  i4=0;
l11_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6879))+8);
  i5 = _check_pointer(i5, 6888);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 6888))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6891))+4);
  *(OOC_INT32*)(_check_pointer(i2, 6859)) = i5;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6910))+8);
  i5 = _check_pointer(i5, 6919);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 6919))*4);
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
  *(OOC_INT32*)(_check_pointer(i0, 7062)) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 7094))+4) = 0u;
  return (OOC_IR_CheckUses__Def)i0;
  ;
}

OOC_IR_CheckUses__Def OOC_IR_CheckUses__DefDesc_Copy(OOC_IR_CheckUses__Def def) {
  register OOC_INT32 i0,i1,i2;
  OOC_IR_CheckUses__Def def2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__Def.baseTypes[0]);
  def2 = (OOC_IR_CheckUses__Def)i0;
  i1 = (OOC_INT32)def;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7247));
  i2 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Copy((ADT_Dictionary_IntValue__Dictionary)i2);
  *(OOC_INT32*)(_check_pointer(i0, 7234)) = i2;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 7289))+4);
  *(OOC_UINT8*)((_check_pointer(i0, 7270))+4) = i1;
  return (OOC_IR_CheckUses__Def)i0;
  ;
}

OOC_INT32 OOC_IR_CheckUses__DefDesc_GetClass(OOC_IR_CheckUses__Def def, OOC_SymbolTable__Item var) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)def;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7406));
  i2 = (OOC_INT32)var;
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  return 0;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7446));
  i0 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i2);
  return i0;
l4:
  _failed_function(7354); return 0;
  ;
}

void OOC_IR_CheckUses__DefDesc_SetClass(OOC_IR_CheckUses__Def def, OOC_SymbolTable__Item var, OOC_INT32 _class) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)def;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7599));
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
      _failed_function(7761); return 0;
      ;
    }


  i0 = (OOC_INT32)def;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 7954))+4);
  if (i1) goto l22;
  i1 = (OOC_INT32)def2;
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 8068))+4);
  i2 = !i2;
  if (!i2) goto l23;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8126));
  i2 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i2);
  k = (Object__ObjectArrayPtr)i2;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8166)), 0);
  i4 = 0<i3;
  if (!i4) goto l12;
  i4=0;
l7_loop:
  i5 = _check_pointer(i2, 8188);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 8188))*4);
  i5 = _type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 8196)))), &_td_OOC_SymbolTable__ItemDesc, 8196);
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
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8303));
  i2 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i2);
  k = (Object__ObjectArrayPtr)i2;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8343)), 0);
  i4 = 0<i3;
  if (!i4) goto l23;
  i4=0;
l15_loop:
  i5 = _check_pointer(i2, 8365);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 8365))*4);
  i5 = _type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 8373)))), &_td_OOC_SymbolTable__ItemDesc, 8373);
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
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7995));
  i2 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Copy((ADT_Dictionary_IntValue__Dictionary)i2);
  *(OOC_INT32*)(_check_pointer(i0, 7981)) = i2;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 8039))+4);
  *(OOC_UINT8*)((_check_pointer(i0, 8019))+4) = i1;
l23:
  return;
  ;
}

void OOC_IR_CheckUses__DefDesc_Unreachable(OOC_IR_CheckUses__Def def) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)def;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8584));
  ADT_Dictionary_IntValue__DictionaryDesc_Clear((ADT_Dictionary_IntValue__Dictionary)i1);
  *(OOC_UINT8*)((_check_pointer(i0, 8607))+4) = 1u;
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

static Msg__Msg OOC_IR_CheckUses__WarnSymE(OOC_Error__List errList, OOC_Config_Pragmas__History pragmaHistory, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT32 code) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Config_Value__Value value;
  Msg__Msg e;

  i0 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__warnings;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9047))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9047))+4);
  i2 = (OOC_INT32)sym;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9052)), 0);
  i3 = *(OOC_INT32*)((_check_pointer(i2, 9058))+16);
  i4 = (OOC_INT32)pragmaHistory;
  i0 = (OOC_INT32)OOC_Config_Pragmas__HistoryDesc_GetValue((OOC_Config_Pragmas__History)i4, (void*)(_check_pointer(i1, 9052)), i0, i3);
  value = (Config_Value__Value)i0;
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9086)))), &_td_Config_Value_Boolean__ValueDesc, 9086)), 9092));
  if (i0) goto l3;
  return (Msg__Msg)0;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_IR_CheckUses__checkUsesContext;
  i1 = code;
  i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
  e = (Msg__Msg)i0;
  i1 = *(OOC_INT32*)((_check_pointer(i2, 9183))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9159)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i1);
  i1 = *(OOC_INT32*)((_check_pointer(i2, 9222))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9197)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
  i1 = *(OOC_INT32*)((_check_pointer(i2, 9264))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9237)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
  i1 = (OOC_INT32)errList;
  OOC_Error__ListDesc_Append((OOC_Error__List)i1, (Msg__Msg)i0);
  return (Msg__Msg)i0;
l4:
  _failed_function(8810); return 0;
  ;
}

static void OOC_IR_CheckUses__WarnSym(OOC_Error__List errList, OOC_Config_Pragmas__History pragmaHistory, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT32 code) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)errList;
  i1 = (OOC_INT32)pragmaHistory;
  i2 = (OOC_INT32)sym;
  i3 = code;
  i0 = (OOC_INT32)OOC_IR_CheckUses__WarnSymE((OOC_Error__List)i0, (OOC_Config_Pragmas__History)i1, (OOC_Scanner_Builder_BasicList__Symbol)i2, i3);
  return;
  ;
}

static void OOC_IR_CheckUses__WarnSymV(OOC_IR_CheckUses__Visitor v, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT32 code, OOC_SymbolTable__VarDecl varDecl) {
  register OOC_INT32 i0,i1,i2,i3;
  Msg__Msg e;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9747));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9758))+4);
  i2 = (OOC_INT32)sym;
  i3 = code;
  i0 = (OOC_INT32)OOC_IR_CheckUses__WarnSymE((OOC_Error__List)i1, (OOC_Config_Pragmas__History)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, i3);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9882))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9887))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9882))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9887))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9891)), 0);
  i1 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i2, 9891)), i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9833)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i1);
l7:
  return;
  ;
}

static OOC_CHAR8 OOC_IR_CheckUses__NonlocalVar(OOC_SymbolTable__ProcDecl localProc, OOC_SymbolTable__VarDecl varDecl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)varDecl;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 10140))+50);
  if (i1) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10206)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
  i1 = (OOC_INT32)localProc;
  return (i0!=i1);
  goto l4;
l3:
  return 1u;
l4:
  _failed_function(9933); return 0;
  ;
}

void OOC_IR_CheckUses__ProcDataDesc_SetReadFlag(OOC_IR_CheckUses__ProcData pd, OOC_SymbolTable__VarDecl varDecl, OOC_INT32 flag) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 oldFlag;
  OOC_INT32 newFlag;

  i0 = (OOC_INT32)pd;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10448))+4);
  i2 = (OOC_INT32)varDecl;
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  oldFlag = 0;
  i1=0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10495))+4);
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  oldFlag = i1;
  
l4:
  i3 = flag;
  i3 = (_mod(i1,4))+i3*4;
  newFlag = i3;
  i4 = i3!=i1;
  if (!i4) goto l7;
  _assert((i1<i3), 127, 10678);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10713))+4);
  ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2, i3);
  *(OOC_UINT8*)((_check_pointer(i0, 10751))+9) = 1u;
l7:
  return;
  ;
}

void OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag(OOC_IR_CheckUses__ProcData pd, OOC_SymbolTable__Item item, OOC_INT32 flag) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 oldFlag;
  OOC_INT32 newFlag;

  i0 = (OOC_INT32)pd;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10927))+4);
  i2 = (OOC_INT32)item;
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  oldFlag = 0;
  i1=0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10971))+4);
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  oldFlag = i1;
  
l4:
  i3 = flag;
  i3 = i3+(i1>>2)*4;
  newFlag = i3;
  i4 = i3!=i1;
  if (!i4) goto l7;
  _assert((i1>i3), 127, 11153);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11188))+4);
  ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2, i3);
  *(OOC_UINT8*)((_check_pointer(i0, 11223))+9) = 1u;
l7:
  return;
  ;
}

static void OOC_IR_CheckUses__EmitVarWarning(OOC_IR_CheckUses__Visitor v, OOC_SymbolTable__VarDecl varDecl, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_CHAR8 contextCall) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 _class;
  auto OOC_CHAR8 OOC_IR_CheckUses__EmitVarWarning_LocalVar(OOC_SymbolTable__VarDecl varDecl);
    
    OOC_CHAR8 OOC_IR_CheckUses__EmitVarWarning_LocalVar(OOC_SymbolTable__VarDecl varDecl) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)varDecl;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 11508))+48);
      i1 = !i1;
      if (i1) goto l3;
      i0=0u;
      goto l4;
l3:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11541)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
      i1 = (OOC_INT32)v;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11557))+20);
      i0 = i0==i1;
      
l4:
      return i0;
      ;
    }


  i0 = (OOC_INT32)varDecl;
  i0 = OOC_IR_CheckUses__EmitVarWarning_LocalVar((OOC_SymbolTable__VarDecl)i0);
  if (!i0) goto l28;
  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 11640))+32);
  i1 = i1==0;
  if (i1) goto l12;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 12188))+32);
  i1 = i1==1;
  if (i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12264))+28);
  i2 = (OOC_INT32)varDecl;
  i1 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i2);
  i1 = i1!=2;
  if (!i1) goto l28;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12337))+28);
  OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i2, 1);
  goto l28;
l10:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12217))+28);
  i1 = (OOC_INT32)varDecl;
  OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i1, 2);
  goto l28;
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11677))+28);
  i2 = (OOC_INT32)varDecl;
  i1 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i2);
  _class = i1;
  switch (i1) {
  case 0:
    i1 = contextCall;
    if (i1) goto l17;
    i1 = (OOC_INT32)sym;
    OOC_IR_CheckUses__WarnSymV((OOC_IR_CheckUses__Visitor)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, 1, (OOC_SymbolTable__VarDecl)i2);
    goto l28;
l17:
    i1 = (OOC_INT32)sym;
    OOC_IR_CheckUses__WarnSymV((OOC_IR_CheckUses__Visitor)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, 6, (OOC_SymbolTable__VarDecl)i2);
    goto l28;
  case 1:
    i1 = contextCall;
    if (i1) goto l22;
    i1 = (OOC_INT32)sym;
    OOC_IR_CheckUses__WarnSymV((OOC_IR_CheckUses__Visitor)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, 2, (OOC_SymbolTable__VarDecl)i2);
    goto l28;
l22:
    i1 = (OOC_INT32)sym;
    OOC_IR_CheckUses__WarnSymV((OOC_IR_CheckUses__Visitor)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, 6, (OOC_SymbolTable__VarDecl)i2);
    goto l28;
  case 2:
    goto l28;
  default:
    _failed_case(i1, 11709);
    goto l28;
  }
l28:
  return;
  ;
}

static void OOC_IR_CheckUses__VisitVarDecl(OOC_IR_CheckUses__Visitor v, OOC_SymbolTable__VarDecl varDecl, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_CHAR8 contextCall) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object pb;
  OOC_INT32 _class;

  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 12603))+8);
  switch (i1) {
  case 0:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 12648))+32);
    i1 = i1>=1;
    if (i1) goto l5;
    i1=0u;
    goto l7;
l5:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12679))+20);
    i2 = (OOC_INT32)varDecl;
    i1 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i1, (OOC_SymbolTable__VarDecl)i2);
    
l7:
    if (!i1) goto l30;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12720))+12);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12737))+20);
    i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
    pb = (Object__Object)i0;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12761)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 12761)), 12770))+4);
    i1 = (OOC_INT32)varDecl;
    ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i1, 2);
    goto l30;
  case 1:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12860))+20);
    i2 = (OOC_INT32)varDecl;
    i1 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i1, (OOC_SymbolTable__VarDecl)i2);
    if (!i1) goto l30;
    i1 = *(OOC_INT8*)((_check_pointer(i0, 12899))+32);
    i1 = i1==0;
    if (i1) goto l22;
    i1 = *(OOC_INT8*)((_check_pointer(i0, 13089))+32);
    i1 = i1==1;
    if (i1) goto l20;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13169))+28);
    i1 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i2);
    i1 = i1!=2;
    if (!i1) goto l30;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13244))+28);
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i2, 1);
    goto l30;
l20:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13120))+28);
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__Item)i2, 2);
    goto l30;
l22:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12938))+28);
    i1 = OOC_IR_CheckUses__DefDesc_GetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i2);
    _class = i1;
    i1 = i1!=2;
    if (!i1) goto l30;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13011))+24);
    OOC_IR_CheckUses__ProcDataDesc_SetReadFlag((OOC_IR_CheckUses__ProcData)i0, (OOC_SymbolTable__VarDecl)i2, 1);
    goto l30;
  case 2:
    i1 = (OOC_INT32)sym;
    i2 = contextCall;
    i3 = (OOC_INT32)varDecl;
    OOC_IR_CheckUses__EmitVarWarning((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i3, (OOC_Scanner_Builder_BasicList__Symbol)i1, i2);
    goto l30;
  default:
    _failed_case(i1, 12597);
    goto l30;
  }
l30:
  return;
  ;
}

void OOC_IR_CheckUses__VisitorDesc_VisitVar(OOC_IR_CheckUses__Visitor v, OOC_IR__Var var) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13500))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13523));
  i2 = (OOC_INT32)v;
  OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i2, (OOC_SymbolTable__VarDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13510)))), &_td_OOC_SymbolTable__VarDeclDesc, 13510)), (OOC_Scanner_Builder_BasicList__Symbol)i0, 0u);
  return;
  ;
}

void OOC_IR_CheckUses__VisitorDesc_VisitDeref(OOC_IR_CheckUses__Visitor v, OOC_IR__Deref deref) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__Object pb;
  OOC_INT8 oldMode;

  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 13678))+8);
  switch (i1) {
  case 0:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 13723))+32);
    i1 = i1>=1;
    if (!i1) goto l12;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13759))+12);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13776))+20);
    i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
    pb = (Object__Object)i0;
    i1 = (OOC_INT32)deref;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13800)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 13800)), 13809))+4);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13825))+4);
    ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i1, 2);
    goto l12;
  case 1:
  case 2:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 13909))+32);
    i1 = i1==0;
    if (i1) goto l9;
    i1 = (OOC_INT32)deref;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13981))+28);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14000))+4);
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i2, (OOC_SymbolTable__Item)i3, 2);
    i2 = *(OOC_INT8*)((_check_pointer(i0, 14037))+32);
    oldMode = i2;
    *(OOC_INT8*)((_check_pointer(i0, 14053))+32) = 0;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14081))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14081))+8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14089)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
    *(OOC_INT8*)((_check_pointer(i0, 14110))+32) = i2;
    goto l12;
l9:
    i1 = (OOC_INT32)deref;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13941))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13941))+8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13949)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
    goto l12;
  default:
    _failed_case(i1, 13672);
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 14274))+32);
  oldMode = i1;
  i2 = (OOC_INT32)index;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14290))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14290))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14296)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i4, (OOC_IR__Visitor)i0);
  *(OOC_INT8*)((_check_pointer(i0, 14314))+32) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14338))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14338))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14344)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  *(OOC_INT8*)((_check_pointer(i0, 14362))+32) = i1;
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

  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 14878))+32);
  oldMode = i1;
  i2 = (OOC_INT32)call;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14893))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14893))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14900)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i4, (OOC_IR__Visitor)i0);
  i3 = *(OOC_INT8*)((_check_pointer(i0, 14927))+8);
  switch (i3) {
  case 0:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14976))+8);
    i3 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14984)))), &_td_OOC_IR__ProcedureRefDesc));
    if (i3) goto l5;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15020))+8);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15031)))), &_td_OOC_IR__ProcedureRefDesc, 15031)), 15044))+8);
    i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15054)))), &_td_OOC_SymbolTable__ProcDeclDesc, 15054)), 15063))+44);
    
    goto l7;
l5:
    i3=1u;
l7:
    if (!i3) goto l9;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15093))+24);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15107))+4);
    i4 = (OOC_INT32)OOC_IR_CheckUses__any;
    ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i4, 2);
l9:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15201))+12);
    i = 0;
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 15211)), 0);
    i4 = 0<i3;
    if (!i4) goto l131;
    i4=0;
l12_loop:
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15235))+16);
    i5 = _check_pointer(i5, 15246);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15246))*4);
    i5 = i5!=(OOC_INT32)0;
    if (i5) goto l15;
    i5=0u;
    goto l17;
l15:
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15263))+16);
    i5 = _check_pointer(i5, 15274);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15274))*4);
    i5 = *(OOC_UINT8*)((_check_pointer(i5, 15277))+50);
    
l17:
    if (i5) goto l19;
    *(OOC_INT8*)((_check_pointer(i0, 15498))+32) = 0;
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15527))+12);
    i5 = _check_pointer(i5, 15537);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15537))*4);
    i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15527))+12);
    i6 = _check_pointer(i6, 15537);
    i7 = OOC_ARRAY_LENGTH(i6, 0);
    i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 15537))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15540)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i6, (OOC_IR__Visitor)i0);
    goto l23;
l19:
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15313))+12);
    i5 = _check_pointer(i5, 15323);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15323))*4);
    i5 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15327)))), &_td_OOC_IR__ConstDesc));
    if (!i5) goto l23;
    *(OOC_INT8*)((_check_pointer(i0, 15387))+32) = 1;
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15419))+12);
    i5 = _check_pointer(i5, 15429);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 15429))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15436)))), &_td_OOC_IR__AdrDesc, 15436)), 15440))+8);
    i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15419))+12);
    i6 = _check_pointer(i6, 15429);
    i7 = OOC_ARRAY_LENGTH(i6, 0);
    i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 15429))*4);
    i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 15436)))), &_td_OOC_IR__AdrDesc, 15436)), 15440))+8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15447)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i6, (OOC_IR__Visitor)i0);
l23:
    i4 = i4+1;
    i = i4;
    i5 = i4<i3;
    if (i5) goto l12_loop;
    goto l131;
  case 1:
  case 2:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15641))+8);
    i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15649)))), &_td_OOC_IR__ProcedureRefDesc);
    if (i3) goto l32;
    i3=0u;
    goto l34;
l32:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15704))+8);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15681))+12);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15715)))), &_td_OOC_IR__ProcedureRefDesc, 15715)), 15728))+8);
    i3 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i4, (Object__Object)i3);
    
l34:
    if (i3) goto l43;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15941))+8);
    i3 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15949)))), &_td_OOC_IR__ProcedureRefDesc));
    if (i3) goto l38;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15987))+8);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15998)))), &_td_OOC_IR__ProcedureRefDesc, 15998)), 16011))+8);
    i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16021)))), &_td_OOC_SymbolTable__ProcDeclDesc, 16021)), 16030))+44);
    
    goto l40;
l38:
    i3=1u;
l40:
    if (!i3) goto l42;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16062))+28);
    i4 = (OOC_INT32)OOC_IR_CheckUses__any;
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i3, (OOC_SymbolTable__Item)i4, 2);
l42:
    callee = (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
    inout = (ADT_Dictionary_IntValue__Dictionary)(OOC_INT32)0;
    i3=(OOC_INT32)0;i4=(OOC_INT32)0;
    goto l44;
l43:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15762))+8);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15773)))), &_td_OOC_IR__ProcedureRefDesc, 15773)), 15786))+8);
    i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15796)))), &_td_OOC_SymbolTable__ProcDeclDesc, 15796);
    callee = (OOC_SymbolTable__ProcDecl)i3;
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15843))+8);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15823))+12);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15854)))), &_td_OOC_IR__ProcedureRefDesc, 15854)), 15867))+8);
    i4 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i5, (Object__Object)i4);
    obj = (Object__Object)i4;
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15896)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 15896)), 15905))+4);
    inout = (ADT_Dictionary_IntValue__Dictionary)i4;
    {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
l44:
    i5 = (OOC_INT32)ADT_ArrayList__New(8);
    readList = (ADT_ArrayList__ArrayList)i5;
    i6 = (OOC_INT32)ADT_ArrayList__New(8);
    writeList = (ADT_ArrayList__ArrayList)i6;
    i7 = (OOC_INT32)ADT_Dictionary_IntValue__New();
    writeMaybeDict = (ADT_Dictionary_IntValue__Dictionary)i7;
    i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16340))+12);
    i = 0;
    i8 = OOC_ARRAY_LENGTH((_check_pointer(i8, 16350)), 0);
    i9 = 0<i8;
    if (!i9) goto l80;
    i9 = i3==(OOC_INT32)0;
    i10=0;
l47_loop:
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16374))+16);
    i11 = _check_pointer(i11, 16385);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 16385))*4);
    i11 = i11==(OOC_INT32)0;
    if (i11) goto l75;
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16442))+16);
    i11 = _check_pointer(i11, 16453);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 16453))*4);
    i11 = *(OOC_UINT8*)((_check_pointer(i11, 16456))+50);
    if (i11) goto l52;
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17406))+12);
    i11 = _check_pointer(i11, 17416);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 17416))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 17394)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i5, (Object__Object)i11);
    goto l75;
l52:
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16492))+12);
    i11 = _check_pointer(i11, 16502);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 16502))*4);
    i11 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 16506)))), &_td_OOC_IR__ConstDesc));
    if (!i11) goto l75;
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16579))+12);
    i11 = _check_pointer(i11, 16589);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 16589))*4);
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 16596)))), &_td_OOC_IR__AdrDesc, 16596)), 16600))+8);
    design = (OOC_IR__Expression)i11;
    if (i9) goto l71;
    i12 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16757))+16);
    i12 = _check_pointer(i12, 16768);
    i13 = OOC_ARRAY_LENGTH(i12, 0);
    i12 = (OOC_INT32)*(OOC_INT32*)(i12+(_check_index(i10, i13, OOC_UINT32, 16768))*4);
    i12 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i12);
    if (!i12) goto l75;
    i12 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16815))+16);
    i12 = _check_pointer(i12, 16826);
    i13 = OOC_ARRAY_LENGTH(i12, 0);
    i12 = (OOC_INT32)*(OOC_INT32*)(i12+(_check_index(i10, i13, OOC_UINT32, 16826))*4);
    i12 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i12);
    _class = i12;
    i13 = i12>>2;
    switch (i13) {
    case 1:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 16921)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i5, (Object__Object)i11);
      goto l63;
    case 0:
      goto l63;
    default:
      _failed_case(i13, 16846);
      goto l63;
    }
l63:
    i12 = _mod(i12,4);
    switch (i12) {
    case 2:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 17121)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i11);
      goto l75;
    case 1:
      ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i7, (Object__Object)i11, 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 17236)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i11);
      goto l75;
    case 0:
      goto l75;
    default:
      _failed_case(i12, 17044);
      goto l75;
    }
l71:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 16705)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i11);
l75:
    i10 = i10+1;
    i = i10;
    i11 = i10<i8;
    if (i11) goto l47_loop;
l80:
    i8 = *(OOC_INT32*)((_check_pointer(i5, 17475))+4);
    i = 0;
    i9 = 0<i8;
    if (!i9) goto l88;
    i9=0;
l83_loop:
    *(OOC_INT8*)((_check_pointer(i0, 17495))+32) = 0;
    i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 17526));
    i10 = _check_pointer(i10, 17532);
    i11 = OOC_ARRAY_LENGTH(i10, 0);
    i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i9, i11, OOC_UINT32, 17532))*4);
    i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 17526));
    i11 = _check_pointer(i11, 17532);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i9, i12, OOC_UINT32, 17532))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 17539)))), &_td_OOC_IR__ExpressionDesc, 17539)), 17550)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)(_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 17539)))), &_td_OOC_IR__ExpressionDesc, 17539)), (OOC_IR__Visitor)i0);
    i9 = i9+1;
    i = i9;
    i10 = i9<i8;
    if (i10) goto l83_loop;
l88:
    i5 = i3!=(OOC_INT32)0;
    if (!i5) goto l117;
    i5 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i3);
    k = (Object__ObjectArrayPtr)i5;
    i8 = OOC_ARRAY_LENGTH((_check_pointer(i5, 17662)), 0);
    i = 0;
    i9 = 0<i8;
    if (!i9) goto l117;
    i9=0;
l93_loop:
    i10 = _check_pointer(i5, 17685);
    i11 = OOC_ARRAY_LENGTH(i10, 0);
    i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i9, i11, OOC_UINT32, 17685))*4);
    i10 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 17689)))), &_td_OOC_SymbolTable__VarDeclDesc);
    if (i10) goto l96;
    i10 = _check_pointer(i5, 18549);
    i11 = OOC_ARRAY_LENGTH(i10, 0);
    i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i9, i11, OOC_UINT32, 18549))*4);
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18534))+28);
    OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i11, (OOC_SymbolTable__Item)(_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 18557)))), &_td_OOC_SymbolTable__TypeDesc, 18557)), 2);
    goto l111;
l96:
    i10 = _check_pointer(i5, 17734);
    i11 = OOC_ARRAY_LENGTH(i10, 0);
    i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i9, i11, OOC_UINT32, 17734))*4);
    i10 = _type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 17742)))), &_td_OOC_SymbolTable__VarDeclDesc, 17742);
    varDecl = (OOC_SymbolTable__VarDecl)i10;
    i11 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 17775)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i10);
    i11 = i11!=i4;
    if (!i11) goto l111;
    i11 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i10);
    _class = i11;
    i12 = i11>>2;
    switch (i12) {
    case 1:
      *(OOC_INT8*)((_check_pointer(i0, 17943))+32) = 0;
      i12 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18003));
      OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i10, (OOC_Scanner_Builder_BasicList__Symbol)i12, 1u);
      goto l103;
    case 0:
      goto l103;
    default:
      _failed_case(i12, 17875);
      goto l103;
    }
l103:
    i11 = _mod(i11,4);
    switch (i11) {
    case 2:
      *(OOC_INT8*)((_check_pointer(i0, 18191))+32) = 1;
      i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18252));
      OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i10, (OOC_Scanner_Builder_BasicList__Symbol)i11, 1u);
      goto l111;
    case 1:
      *(OOC_INT8*)((_check_pointer(i0, 18308))+32) = 2;
      i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18374));
      OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i10, (OOC_Scanner_Builder_BasicList__Symbol)i11, 1u);
      goto l111;
    case 0:
      goto l111;
    default:
      _failed_case(i11, 18122);
      goto l111;
    }
l111:
    i9 = i9+1;
    i = i9;
    i10 = i9<i8;
    if (i10) goto l93_loop;
l117:
    i3 = *(OOC_INT32*)((_check_pointer(i6, 18649))+4);
    i = 0;
    i4 = 0<i3;
    if (!i4) goto l131;
    i4=0;
l120_loop:
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 18702));
    i5 = _check_pointer(i5, 18708);
    i8 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i8, OOC_UINT32, 18708))*4);
    i5 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i7, (Object__Object)i5);
    if (i5) goto l123;
    *(OOC_INT8*)((_check_pointer(i0, 18774))+32) = 1;
    goto l124;
l123:
    *(OOC_INT8*)((_check_pointer(i0, 18729))+32) = 2;
l124:
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 18820));
    i5 = _check_pointer(i5, 18826);
    i8 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i8, OOC_UINT32, 18826))*4);
    i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 18820));
    i8 = _check_pointer(i8, 18826);
    i9 = OOC_ARRAY_LENGTH(i8, 0);
    i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 18826))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 18833)))), &_td_OOC_IR__ExpressionDesc, 18833)), 18844)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)(_type_guard(i8, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 18833)))), &_td_OOC_IR__ExpressionDesc, 18833)), (OOC_IR__Visitor)i0);
    i4 = i4+1;
    i = i4;
    i5 = i4<i3;
    if (i5) goto l120_loop;
    goto l131;
  default:
    _failed_case(i3, 14921);
    goto l131;
  }
l131:
  *(OOC_INT8*)((_check_pointer(i0, 18886))+32) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18915))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18922))+4);
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18932)))), &_td_OOC_SymbolTable__FormalParsDesc, 18932)), 18943))+49);
  if (!i1) goto l134;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18965))+28);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19281))+4);
  i1 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i1);
  k = (Object__ObjectArrayPtr)i1;
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19319)), 0);
  i3 = 0<i2;
  if (!i3) goto l27;
  i3 = (OOC_INT32)knownProcs;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19349));
  i5 = *(OOC_INT32*)((_check_pointer(i5, 19357))+4);
  j = 0;
  i6 = 0<i5;
  if (!i6) goto l22;
  i6=0;
l6_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19392));
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i7, 19400));
  i7 = _check_pointer(i7, 19406);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 19406))*4);
  i7 = _type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 19414)))), &_td_OOC_SymbolTable__ProcDeclDesc, 19414);
  callerDecl = (OOC_SymbolTable__ProcDecl)i7;
  i8 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i3, (Object__Object)i7);
  obj = (Object__Object)i8;
  i8 = _type_guard(i8, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 19492)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 19492);
  pdCaller = (OOC_IR_CheckUses__ProcData)i8;
  i9 = _check_pointer(i1, 19538);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 19523))+4);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i4, i10, OOC_UINT32, 19538))*4);
  i9 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i11, (Object__Object)i9);
  i9 = !i9;
  if (i9) goto l9;
  i7=0u;
  goto l15;
l9:
  i9 = _check_pointer(i1, 19559);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i4, i10, OOC_UINT32, 19559))*4);
  i9 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 19563)))), &_td_OOC_SymbolTable__TypeDesc);
  if (i9) goto l12;
  i9 = _check_pointer(i1, 19616);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i4, i10, OOC_UINT32, 19616))*4);
  i7 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i7, (OOC_SymbolTable__VarDecl)(_type_guard(i9, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 19624)))), &_td_OOC_SymbolTable__VarDeclDesc, 19624)));
  
  goto l15;
l12:
  i7=1u;
l15:
  if (!i7) goto l17;
  i7 = _check_pointer(i1, 19670);
  i9 = OOC_ARRAY_LENGTH(i7, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 19658))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i9, OOC_UINT32, 19670))*4);
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
          *(OOC_INT32*)((_check_pointer(i0, 20276))+28) = i1;
          *(OOC_INT8*)((_check_pointer(i0, 20298))+32) = 0;
          i1 = (OOC_INT32)expr;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20325)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
          return;
          ;
        }

        
        void OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign(OOC_IR__Expression design, OOC_INT8 mode) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)v;
          i1 = (OOC_INT32)def;
          *(OOC_INT32*)((_check_pointer(i0, 20450))+28) = i1;
          i1 = mode;
          *(OOC_INT8*)((_check_pointer(i0, 20472))+32) = i1;
          i1 = (OOC_INT32)design;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20501)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
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
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20942))+8);
              i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20952)))), &_td_OOC_IR__TypeTestDesc, 20952);
              localTest = (OOC_IR__TypeTest)i1;
              i2 = (OOC_INT32)prevGuards;
              i = 0;
              i3 = *(OOC_INT32*)((_check_pointer(i2, 20997))+4);
              i4 = 0<i3;
              if (!i4) goto l15;
              i4=0;
l3_loop:
              i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 21038));
              i5 = _check_pointer(i5, 21044);
              i6 = OOC_ARRAY_LENGTH(i5, 0);
              i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 21044))*4);
              i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 21051)))), &_td_OOC_IR__TypeTestDesc, 21051);
              test = (OOC_IR__TypeTest)i4;
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21082))+8);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21112))+8);
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 21091)))), &_td_OOC_IR__VarDesc, 21091)), 21095))+8);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 21121)))), &_td_OOC_IR__VarDesc, 21121)), 21125))+8);
              i5 = i5==i6;
              if (i5) goto l6;
              i4=0u;
              goto l8;
l6:
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21175))+12);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21227))+12);
              i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i4);
              
l8:
              if (!i4) goto l10;
              i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 21303));
              i5 = (OOC_INT32)pragmaHistory;
              i6 = (OOC_INT32)errList;
              OOC_IR_CheckUses__WarnSym((OOC_Error__List)i6, (OOC_Config_Pragmas__History)i5, (OOC_Scanner_Builder_BasicList__Symbol)i4, 5);
l10:
              i4 = i;
              i4 = i4+1;
              i = i4;
              i5 = i4<i3;
              if (i5) goto l3_loop;
l15:
              i1 = (OOC_INT32)def;
              defOld = (OOC_IR_CheckUses__Def)i1;
              i3 = (OOC_INT32)defIn;
              def = (OOC_IR_CheckUses__Def)i3;
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21430))+8);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i4);
              def = (OOC_IR_CheckUses__Def)i1;
              i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i3);
              def2 = (OOC_IR_CheckUses__Def)i1;
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21541))+12);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i4);
              i4 = (OOC_INT32)def;
              OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i4, (OOC_IR_CheckUses__Def)i1);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21609))+16);
              i1 = i1!=0;
              if (!i1) goto l26;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21656))+16);
              i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21666)), 0);
              i1 = i1==1;
              if (i1) goto l20;
              i1=0u;
              goto l22;
l20:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21696))+16);
              i1 = _check_pointer(i1, 21706);
              i4 = OOC_ARRAY_LENGTH(i1, 0);
              i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i4, OOC_UINT8, 21706))*4);
              i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21710)))), &_td_OOC_IR__WithStatmDesc);
              
l22:
              if (i1) goto l24;
              i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i3);
              def2 = (OOC_IR_CheckUses__Def)i1;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21958))+16);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
              i0 = (OOC_INT32)def;
              OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
              goto l26;
l24:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21768))+8);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21756)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21778)))), &_td_OOC_IR__TypeTestDesc, 21778)));
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21825))+16);
              i0 = _check_pointer(i0, 21835);
              i1 = OOC_ARRAY_LENGTH(i0, 0);
              i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 21835))*4);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckStatm_CheckWith((OOC_IR_CheckUses__Def)i3, (OOC_IR__WithStatm)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21842)))), &_td_OOC_IR__WithStatmDesc, 21842)), (ADT_ArrayList__ArrayList)i2);
l26:
              return;
              ;
            }


          i0 = (OOC_INT32)statm;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22094)))), &_td_OOC_IR__AssertDesc);
          if (i1) goto l114;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22395)))), &_td_OOC_IR__AssignOpDesc);
          if (i1) goto l112;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22555)))), &_td_OOC_IR__AssignmentDesc);
          if (i1) goto l110;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22680)))), &_td_OOC_IR__CallDesc);
          if (i1) goto l108;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22747)))), &_td_OOC_IR__CopyDesc);
          if (i1) goto l106;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22863)))), &_td_OOC_IR__CopyParameterDesc);
          if (i1) goto l127;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22934)))), &_td_OOC_IR__CopyStringDesc);
          if (i1) goto l103;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23056)))), &_td_OOC_IR__ForStatmDesc);
          if (i1) goto l101;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23309)))), &_td_OOC_IR__IfStatmDesc);
          if (i1) goto l99;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23536)))), &_td_OOC_IR__CaseStatmDesc);
          if (i1) goto l86;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24030)))), &_td_OOC_IR__LoopStatmDesc);
          if (i1) goto l81;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24221)))), &_td_OOC_IR__ExitDesc);
          if (i1) goto l79;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24364)))), &_td_OOC_IR__MoveBlockDesc);
          if (i1) goto l62;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25084)))), &_td_OOC_IR__RaiseDesc);
          if (i1) goto l60;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25191)))), &_td_OOC_IR__RepeatStatmDesc);
          if (i1) goto l58;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25321)))), &_td_OOC_IR__ReturnDesc);
          if (i1) goto l53;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25515)))), &_td_OOC_IR__TryStatmDesc);
          if (i1) goto l43;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25826)))), &_td_OOC_IR__WhileStatmDesc);
          if (i1) goto l41;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25947)))), &_td_OOC_IR__WithStatmDesc);
          if (i1) goto l39;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25940)))), 25940);
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
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25870))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25913))+12);
          i1 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          goto l127;
l43:
          i1 = (OOC_INT32)def;
          i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          defIn = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25597))+8);
          i3 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i3, (OOC_IR__StatementSeq)i2);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25642))+12);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 25652)), 0);
          i = 0;
          i3 = 0<i2;
          if (!i3) goto l127;
          i3=0;
l46_loop:
          i4 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i4;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25731))+12);
          i5 = _check_pointer(i5, 25741);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 25741))*4);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 25744))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i4, (OOC_IR__StatementSeq)i5);
          i5 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i5, (OOC_IR_CheckUses__Def)i4);
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l46_loop;
          goto l127;
l53:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25355))+8);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l56;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25402))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
l56:
          i0 = (OOC_INT32)v;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25438))+16);
          i1 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i0);
          goto l127;
l58:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25245))+8);
          i2 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25278))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l127;
l60:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25123))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i0);
          goto l127;
l62:
          i1 = (OOC_INT32)v;
          i2 = *(OOC_INT8*)((_check_pointer(i1, 24397))+8);
          i2 = i2==0;
          if (!i2) goto l65;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24442))+24);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24456))+4);
          i2 = (OOC_INT32)OOC_IR_CheckUses__any;
          ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2, 2);
l65:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24547))+8);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24555)))), &_td_OOC_IR__AdrDesc);
          if (i1) goto l68;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24665))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          goto l69;
l68:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24598))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24609)))), &_td_OOC_IR__AdrDesc, 24609)), 24613))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
l69:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24715))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24757))+12);
          expr = (OOC_IR__Expression)i1;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24783)))), &_td_OOC_IR__TypeConvDesc);
          if (!i2) goto l73;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24832)))), &_td_OOC_IR__TypeConvDesc, 24832)), 24841))+8);
          expr = (OOC_IR__Expression)i1;
          
l73:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24882)))), &_td_OOC_IR__AdrDesc);
          if (i2) goto l76;
          i1 = (OOC_INT32)v;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24979))+28);
          i2 = (OOC_INT32)OOC_IR_CheckUses__any;
          OOC_IR_CheckUses__DefDesc_SetClass((OOC_IR_CheckUses__Def)i1, (OOC_SymbolTable__Item)i2, 2);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25035))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l127;
l76:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24930)))), &_td_OOC_IR__AdrDesc, 24930)), 24934))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l79:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24270))+8);
          i1 = (OOC_INT32)loopExits;
          i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
          obj = (Object__Object)i0;
          i1 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24292)))), &_td_OOC_IR_CheckUses__DefDesc, 24292)), (OOC_IR_CheckUses__Def)i1);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i0);
          goto l127;
l81:
          i1 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
          defIn = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)loopExits;
          ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i0, (Object__Object)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24161))+8);
          i2 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i0);
          i0 = _check_pointer(i1, 24192);
          i1 = (OOC_INT32)def;
          i1 = _check_pointer(i1, 24182);
          i2 = (OOC_INT32)&_td_OOC_IR_CheckUses__DefDesc;
          i2 = i2!=i2;
          if (!i2) goto l84;
          _failed_type_assert(24182);
l84:
          _copy_block(i0,i1,8);
          goto l127;
l86:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23579))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)def;
          i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          defIn = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Unreachable((OOC_IR_CheckUses__Def)i2);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23682))+12);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 23691)), 0);
          i = 0;
          i3 = 0<i2;
          if (!i3) goto l94;
          i3=0;
l89_loop:
          i4 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i4;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23770))+12);
          i5 = _check_pointer(i5, 23779);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 23779))*4);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23782))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i4, (OOC_IR__StatementSeq)i5);
          i5 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i5, (OOC_IR_CheckUses__Def)i4);
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l89_loop;
l94:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23857))+16);
          i2 = i2!=(OOC_INT32)0;
          if (!i2) goto l127;
          i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i1;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23949))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
          goto l127;
l99:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23350))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)def;
          i1 = (OOC_INT32)OOC_IR_CheckUses__DefDesc_Copy((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23423))+12);
          i3 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i3, (OOC_IR__StatementSeq)i2);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23470))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          i0 = (OOC_INT32)def;
          OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
          goto l127;
l101:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23098))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23132))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23166))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i1, 1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23275))+24);
          i1 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          goto l127;
l103:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22978))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23015))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l106:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22785))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22822))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l108:
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l127;
l110:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22599))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22635))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l112:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22437))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22471))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22510))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l127;
l114:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22128))+8);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l121;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22169))+8);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22180)))), &_td_OOC_IR__ConstDesc);
          if (i1) goto l119;
          i1=0u;
          goto l123;
l119:
          i1 = (OOC_INT32)Object_Boxed__false;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22234))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22248)))), &_td_OOC_IR__ConstDesc, 22248)), 22254))+8);
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22221)))), Object_Boxed__BooleanDesc_Equals)),Object_Boxed__BooleanDesc_Equals)((Object_Boxed__Boolean)i1, (Object__Object)i2);
          
          goto l123;
l121:
          i1=1u;
l123:
          if (i1) goto l125;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22341))+8);
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
      if (!i1) goto l23;
      i = 0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26206)), 0);
      i1 = 0!=i1;
      if (i1) goto l5;
      i1=0u;
      goto l7;
l5:
      i1 = (OOC_INT32)def;
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 26216))+4);
      i1 = !i1;
      
l7:
      if (i1) goto l9;
      i1=i0;i0=0;
      goto l19;
l9:
      i1=0;
l10_loop:
      i0 = _check_pointer(i0, 26261);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 26261))*4);
      OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckStatm((OOC_IR__Statement)i0);
      i0 = i;
      i0 = i0+1;
      i = i0;
      i1 = (OOC_INT32)statmSeq;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 26206)), 0);
      i2 = i0!=i2;
      if (i2) goto l13;
      i2=0u;
      goto l15;
l13:
      i2 = (OOC_INT32)def;
      i2 = *(OOC_UINT8*)((_check_pointer(i2, 26216))+4);
      i2 = !i2;
      
l15:
      if (!i2) goto l19;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
      goto l10_loop;
l19:
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 26326)), 0);
      i2 = i0!=i2;
      if (!i2) goto l23;
      i1 = _check_pointer(i1, 26385);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 26385))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26388));
      i1 = (OOC_INT32)errList;
      i2 = (OOC_INT32)pragmaHistory;
      OOC_IR_CheckUses__WarnSym((OOC_Error__List)i1, (OOC_Config_Pragmas__History)i2, (OOC_Scanner_Builder_BasicList__Symbol)i0, 3);
l23:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_IR_CheckUses__CheckUses_CheckedFunction(OOC_SymbolTable__ProcDecl procDecl) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)procDecl;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26556))+56);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26567))+36);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=0u;
      goto l4;
l3:
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 26607))+42);
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
      i1 = *(OOC_INT32*)((_check_pointer(i0, 26795))+4);
      i2 = 0<i1;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26842));
      i3 = _check_pointer(i3, 26848);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 26848))*4);
      i4 = (OOC_INT32)knownProcs;
      i3 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i4, (Object__Object)i3);
      pd = (Object__Object)i3;
      *(OOC_UINT8*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 26865)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 26865)), 26874))+8) = 1u;
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27217))+4);
      i1 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i1);
      k = (Object__ObjectArrayPtr)i1;
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 27257)), 0);
      i3 = (OOC_INT32)def;
      i4 = 0<i2;
      if (!i4) goto l11;
      i4=0;
l3_loop:
      i5 = _check_pointer(i1, 27295);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 27295))*4);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 27280));
      i5 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i6, (Object__Object)i5);
      i5 = !i5;
      if (!i5) goto l6;
      i5 = _check_pointer(i1, 27352);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 27352))*4);
      OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag((OOC_IR_CheckUses__ProcData)i0, (OOC_SymbolTable__Item)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 27360)))), &_td_OOC_SymbolTable__ItemDesc, 27360)), 0);
l6:
      i4 = i4+1;
      i = i4;
      i5 = i4<i2;
      if (i5) goto l3_loop;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 27427));
      i1 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i1);
      k = (Object__ObjectArrayPtr)i1;
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 27467)), 0);
      i4 = 0<i2;
      if (!i4) goto l36;
      i4 = (OOC_INT32)localProc;
      i5=0;
l14_loop:
      i6 = _check_pointer(i1, 27492);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 27492))*4);
      item = (Object__Object)i6;
      i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 27514)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i7) goto l21;
      i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 27964)))), &_td_OOC_SymbolTable__TypeDesc);
      if (i7) goto l19;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 27958)))), 27958);
      goto l31;
l19:
      *nonlocalWrites = 1u;
      OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag((OOC_IR_CheckUses__ProcData)i0, (OOC_SymbolTable__Item)i6, 2);
      goto l31;
l21:
      i7 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i4, (OOC_SymbolTable__VarDecl)i6);
      if (!i7) goto l31;
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 27598));
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
        _failed_case(i7, 27590);
        goto l31;
      }
l31:
      i5 = i5+1;
      i = i5;
      i6 = i5<i2;
      if (i6) goto l14_loop;
l36:
      return;
      ;
    }


  i0 = (OOC_INT32)moduleDecl;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 29547))+44);
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
  *(OOC_INT32*)(_check_pointer(i2, 29718)) = i3;
  i3 = (OOC_INT32)pragmaHistory;
  *(OOC_INT32*)((_check_pointer(i2, 29744))+4) = i3;
  *(OOC_INT32*)((_check_pointer(i2, 29782))+28) = 0;
  *(OOC_INT32*)((_check_pointer(i2, 29800))+12) = i1;
  i3 = (OOC_INT32)ADT_Dictionary__New();
  loopExits = (ADT_Dictionary__Dictionary)i3;
  *(OOC_INT8*)((_check_pointer(i2, 30094))+8) = 0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30151))+8);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 30160)), 0);
  i2 = 0<i0;
  if (!i2) goto l12;
  i2=i1;i1=0;
l7_loop:
  i3 = (OOC_INT32)module;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 30188))+8);
  i3 = _check_pointer(i3, 30197);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 30197))*4);
  proc = (OOC_IR__Procedure)i1;
  i3 = (OOC_INT32)v;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30227))+4);
  *(OOC_INT32*)((_check_pointer(i3, 30209))+20) = i4;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 30262))+20);
  i2 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i2, (Object__Object)i4);
  pd = (Object__Object)i2;
  *(OOC_INT32*)((_check_pointer(i3, 30282))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30303)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 30303));
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
  *(OOC_INT32*)((_check_pointer(i3, 30321))+16) = i2;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewDef();
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30396))+8);
  OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)pd;
  i2 = (OOC_INT32)knownProcs;
  OOC_IR_CheckUses__TransitiveWriteClosure((ADT_Dictionary__Dictionary)i2, (OOC_IR_CheckUses__ProcData)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30452)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 30452)));
  i1 = i;
  i1 = i1+1;
  i = i1;
  i3 = i1<i0;
  if (i3) goto l7_loop;
l12:
  i0 = (OOC_INT32)v;
  *(OOC_INT8*)((_check_pointer(i0, 30633))+8) = 1;
l13_loop:
  inWorklist = 0;
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30725))+8);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 30734)), 0);
  i1 = 0<i0;
  if (!i1) goto l27;
  i1=0;
l16_loop:
  i2 = (OOC_INT32)module;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 30764))+8);
  i2 = _check_pointer(i2, 30773);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 30773))*4);
  proc = (OOC_IR__Procedure)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30811))+4);
  i3 = (OOC_INT32)knownProcs;
  i2 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i3, (Object__Object)i2);
  pd = (Object__Object)i2;
  i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30833)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 30833)), 30842))+8);
  if (!i3) goto l22;
  i3 = (OOC_INT32)v;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30888))+4);
  *(OOC_INT32*)((_check_pointer(i3, 30870))+20) = i4;
  *(OOC_INT32*)((_check_pointer(i3, 30906))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30927)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 30927));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 30949))+24);
  *(OOC_UINT8*)((_check_pointer(i2, 30963))+9) = 0u;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
  *(OOC_INT32*)((_check_pointer(i3, 30998))+16) = i2;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewDef();
  def = (OOC_IR_CheckUses__Def)i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31093))+8);
  OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)v;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31116))+16);
  i3 = (OOC_INT32)def;
  OOC_IR_CheckUses__DefDesc_Merge((OOC_IR_CheckUses__Def)i2, (OOC_IR_CheckUses__Def)i3);
  i2 = (OOC_INT32)proc;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31232))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31163))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31176))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31193))+16);
  OOC_IR_CheckUses__CheckUses_SetWriteFlags((OOC_SymbolTable__ProcDecl)i3, (OOC_IR_CheckUses__ProcData)i4, (OOC_IR_CheckUses__Def)i1, (void*)((_check_pointer(i2, 31237))+44));
  i1 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31280))+24);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 31294))+9);
  if (!i1) goto l22;
  i1 = (OOC_INT32)pd;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31346)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 31346)), 31355));
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
  *(OOC_INT8*)((_check_pointer(i0, 31529))+8) = 2;
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31585))+8);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 31594)), 0);
  i1 = 0<i0;
  if (!i1) goto l49;
  i1=0;
l34_loop:
  i2 = (OOC_INT32)module;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 31622))+8);
  i2 = _check_pointer(i2, 31631);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 31631))*4);
  proc = (OOC_IR__Procedure)i1;
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31661))+4);
  *(OOC_INT32*)((_check_pointer(i2, 31643))+20) = i3;
  i3 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
  *(OOC_INT32*)((_check_pointer(i2, 31675))+16) = i3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31723))+16);
  i2 = i2!=0;
  if (!i2) goto l44;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewDef();
  def = (OOC_IR_CheckUses__Def)i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31802))+8);
  OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)def;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 31829))+4);
  i1 = !i1;
  if (i1) goto l39;
  i1=0u;
  goto l41;
l39:
  i1 = (OOC_INT32)proc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31864))+4);
  i1 = OOC_IR_CheckUses__CheckUses_CheckedFunction((OOC_SymbolTable__ProcDecl)i1);
  
l41:
  if (!i1) goto l44;
  i1 = (OOC_INT32)proc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31922))+16);
  i2 = (OOC_INT32)pragmaHistory;
  i3 = (OOC_INT32)errList;
  OOC_IR_CheckUses__WarnSym((OOC_Error__List)i3, (OOC_Config_Pragmas__History)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1, 4);
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
