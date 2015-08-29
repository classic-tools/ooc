#include <OOC/IR/CheckUses.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_IR_CheckUses__ErrorContextDesc_GetTemplate(OOC_IR_CheckUses__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3968))+8);
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
    _failed_case(i1, 3960);
    goto l9;
  }
l9:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4530)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

void OOC_IR_CheckUses__VisitorCallsDesc_VisitCall(OOC_IR_CheckUses__VisitorCalls v, OOC_IR__Call call) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Declaration procDecl;
  Object__Object obj;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)call;
  OOC_IR_VisitAll__VisitorDesc_VisitCall((OOC_IR_VisitAll__Visitor)i0, (OOC_IR__Call)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4749))+8);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4757)))), &_td_OOC_IR__ProcedureRefDesc);
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4787))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4810))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4787))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4821)))), &_td_OOC_IR__ProcedureRefDesc, 4821)), 4834))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4798)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i4, (Object__Object)i3);
  
l5:
  if (!i2) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4868))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4879)))), &_td_OOC_IR__ProcedureRefDesc, 4879)), 4892))+8);
  procDecl = (OOC_SymbolTable__Declaration)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4913))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4913))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4924)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i3, (Object__Object)i1);
  obj = (Object__Object)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4950)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 4950)), 4959));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4976));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4950)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 4950)), 4959));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4967)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
l7:
  return;
  ;
}

static ADT_Dictionary__Dictionary OOC_IR_CheckUses__KnownProcs(OOC_IR__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  ADT_Dictionary__Dictionary knownProcs;
  OOC_INT32 i;
  OOC_IR_CheckUses__ProcData pd;
  OOC_IR_CheckUses__VisitorCalls v;

  i0 = (OOC_INT32)ADT_Dictionary__New();
  knownProcs = (ADT_Dictionary__Dictionary)i0;
  i1 = (OOC_INT32)module;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5418))+8);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5427)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__ProcData.baseTypes[0]);
  pd = (OOC_IR_CheckUses__ProcData)i4;
  i5 = (OOC_INT32)ADT_ArrayList__New(4);
  *(OOC_INT32*)(_check_pointer(i4, 5458)) = i5;
  i5 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i4, 5496))+4) = i5;
  *(OOC_UINT8*)((_check_pointer(i4, 5529))+8) = 1u;
  *(OOC_UINT8*)((_check_pointer(i4, 5558))+9) = 0u;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5609))+8);
  i5 = _check_pointer(i5, 5618);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 5618))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 5621))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5598)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i5, (Object__Object)i4);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__VisitorCalls.baseTypes[0]);
  v = (OOC_IR_CheckUses__VisitorCalls)i2;
  OOC_IR_VisitAll__InitVisitor((OOC_IR_VisitAll__Visitor)i2);
  *(OOC_INT32*)((_check_pointer(i2, 5689))+4) = i0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5745))+8);
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 5754)), 0);
  i4 = 0<i3;
  if (!i4) goto l16;
  i4=0;
l11_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5789))+8);
  i5 = _check_pointer(i5, 5798);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 5798))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 5801))+4);
  *(OOC_INT32*)(_check_pointer(i2, 5769)) = i5;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5820))+8);
  i5 = _check_pointer(i5, 5829);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 5829))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5820))+8);
  i6 = _check_pointer(i6, 5829);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 5829))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 5832)))), OOC_IR__ProcedureDesc_Accept)),OOC_IR__ProcedureDesc_Accept)((OOC_IR__Procedure)i6, (OOC_IR__Visitor)i2);
  i4 = i4+1;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l11_loop;
l16:
  return (ADT_Dictionary__Dictionary)i0;
  ;
}

static OOC_IR_CheckUses__Def OOC_IR_CheckUses__NewDef() {
  register OOC_INT32 i0,i1;
  OOC_IR_CheckUses__Def def;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__Def.baseTypes[0]);
  def = (OOC_IR_CheckUses__Def)i0;
  i1 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  *(OOC_INT32*)(_check_pointer(i0, 5972)) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 6004))+4) = 0u;
  return (OOC_IR_CheckUses__Def)i0;
  ;
}

OOC_IR_CheckUses__Def OOC_IR_CheckUses__DefDesc_Copy(OOC_IR_CheckUses__Def def) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_IR_CheckUses__Def def2;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__Def.baseTypes[0]);
  def2 = (OOC_IR_CheckUses__Def)i0;
  i1 = (OOC_INT32)def;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6157));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6157));
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6163)))), ADT_Dictionary_IntValue__DictionaryDesc_Copy)),ADT_Dictionary_IntValue__DictionaryDesc_Copy)((ADT_Dictionary_IntValue__Dictionary)i3);
  *(OOC_INT32*)(_check_pointer(i0, 6144)) = i2;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 6199))+4);
  *(OOC_UINT8*)((_check_pointer(i0, 6180))+4) = i1;
  return (OOC_IR_CheckUses__Def)i0;
  ;
}

OOC_INT32 OOC_IR_CheckUses__DefDesc_GetClass(OOC_IR_CheckUses__Def def, OOC_SymbolTable__VarDecl var) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)def;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6319));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6319));
  i3 = (OOC_INT32)var;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6325)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l3;
  return 0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6359));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6359));
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6365)))), ADT_Dictionary_IntValue__DictionaryDesc_Get)),ADT_Dictionary_IntValue__DictionaryDesc_Get)((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i3);
  return i0;
l4:
  _failed_function(6264); return 0;
  ;
}

void OOC_IR_CheckUses__DefDesc_SetClass(OOC_IR_CheckUses__Def def, OOC_SymbolTable__VarDecl var, OOC_INT32 _class) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)def;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6515));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6515));
  i2 = (OOC_INT32)var;
  i3 = _class;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6521)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i2, i3);
  return;
  ;
}

void OOC_IR_CheckUses__DefDesc_Merge(OOC_IR_CheckUses__Def def, OOC_IR_CheckUses__Def def2) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object__ObjectArrayPtr k;
  OOC_INT32 i;
  OOC_SymbolTable__VarDecl v;
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
      _failed_function(6680); return 0;
      ;
    }


  i0 = (OOC_INT32)def;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 6873))+4);
  if (i1) goto l22;
  i1 = (OOC_INT32)def2;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 6987))+4);
  i1 = !i1;
  if (!i1) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7045));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7045));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7051)))), ADT_Dictionary_IntValue__DictionaryDesc_Keys)),ADT_Dictionary_IntValue__DictionaryDesc_Keys)((ADT_Dictionary_IntValue__Dictionary)i0);
  k = (Object__ObjectArrayPtr)i0;
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7085)), 0);
  i1 = 0<i0;
  if (!i1) goto l12;
  i1=0;
l7_loop:
  i2 = (OOC_INT32)k;
  i2 = _check_pointer(i2, 7107);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 7107))*4);
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7115)))), &_td_OOC_SymbolTable__VarDeclDesc, 7115);
  v = (OOC_SymbolTable__VarDecl)i1;
  i2 = (OOC_INT32)def;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7158)))), OOC_IR_CheckUses__DefDesc_GetClass)),OOC_IR_CheckUses__DefDesc_GetClass)((OOC_IR_CheckUses__Def)i2, (OOC_SymbolTable__VarDecl)i1);
  i4 = (OOC_INT32)def2;
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7176)))), OOC_IR_CheckUses__DefDesc_GetClass)),OOC_IR_CheckUses__DefDesc_GetClass)((OOC_IR_CheckUses__Def)i4, (OOC_SymbolTable__VarDecl)i1);
  i3 = OOC_IR_CheckUses__DefDesc_Merge_Merge(i3, i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7136)))), OOC_IR_CheckUses__DefDesc_SetClass)),OOC_IR_CheckUses__DefDesc_SetClass)((OOC_IR_CheckUses__Def)i2, (OOC_SymbolTable__VarDecl)i1, i3);
  i1 = i;
  i1 = i1+1;
  i = i1;
  i2 = i1<i0;
  if (i2) goto l7_loop;
l12:
  i0 = (OOC_INT32)def2;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7225));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7225));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7231)))), ADT_Dictionary_IntValue__DictionaryDesc_Keys)),ADT_Dictionary_IntValue__DictionaryDesc_Keys)((ADT_Dictionary_IntValue__Dictionary)i0);
  k = (Object__ObjectArrayPtr)i0;
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7265)), 0);
  i1 = 0<i0;
  if (!i1) goto l23;
  i1=0;
l15_loop:
  i2 = (OOC_INT32)k;
  i2 = _check_pointer(i2, 7287);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 7287))*4);
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7295)))), &_td_OOC_SymbolTable__VarDeclDesc, 7295);
  v = (OOC_SymbolTable__VarDecl)i1;
  i2 = (OOC_INT32)def;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7338)))), OOC_IR_CheckUses__DefDesc_GetClass)),OOC_IR_CheckUses__DefDesc_GetClass)((OOC_IR_CheckUses__Def)i2, (OOC_SymbolTable__VarDecl)i1);
  i4 = (OOC_INT32)def2;
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7356)))), OOC_IR_CheckUses__DefDesc_GetClass)),OOC_IR_CheckUses__DefDesc_GetClass)((OOC_IR_CheckUses__Def)i4, (OOC_SymbolTable__VarDecl)i1);
  i3 = OOC_IR_CheckUses__DefDesc_Merge_Merge(i3, i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7316)))), OOC_IR_CheckUses__DefDesc_SetClass)),OOC_IR_CheckUses__DefDesc_SetClass)((OOC_IR_CheckUses__Def)i2, (OOC_SymbolTable__VarDecl)i1, i3);
  i1 = i;
  i1 = i1+1;
  i = i1;
  i2 = i1<i0;
  if (i2) goto l15_loop;
  goto l23;
l22:
  i1 = (OOC_INT32)def2;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6914));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6914));
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6920)))), ADT_Dictionary_IntValue__DictionaryDesc_Copy)),ADT_Dictionary_IntValue__DictionaryDesc_Copy)((ADT_Dictionary_IntValue__Dictionary)i3);
  *(OOC_INT32*)(_check_pointer(i0, 6900)) = i2;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 6958))+4);
  *(OOC_UINT8*)((_check_pointer(i0, 6938))+4) = i1;
l23:
  return;
  ;
}

void OOC_IR_CheckUses__DefDesc_Unreachable(OOC_IR_CheckUses__Def def) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)def;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7509));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7509));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7515)))), ADT_Dictionary_IntValue__DictionaryDesc_Clear)),ADT_Dictionary_IntValue__DictionaryDesc_Clear)((ADT_Dictionary_IntValue__Dictionary)i2);
  *(OOC_UINT8*)((_check_pointer(i0, 7532))+4) = 1u;
  return;
  ;
}

static OOC_IR_CheckUses__Def OOC_IR_CheckUses__NewUnreachableDef() {
  register OOC_INT32 i0;
  OOC_IR_CheckUses__Def def;

  i0 = (OOC_INT32)OOC_IR_CheckUses__NewDef();
  def = (OOC_IR_CheckUses__Def)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7666)))), OOC_IR_CheckUses__DefDesc_Unreachable)),OOC_IR_CheckUses__DefDesc_Unreachable)((OOC_IR_CheckUses__Def)i0);
  return (OOC_IR_CheckUses__Def)i0;
  ;
}

static Msg__Msg OOC_IR_CheckUses__WarnSymE(OOC_Error__List errList, OOC_Config_Pragmas__History pragmaHistory, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_INT32 code) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Config_Value__Value value;
  Msg__Msg e;

  i0 = (OOC_INT32)pragmaHistory;
  i1 = (OOC_INT32)OOC_Config_Pragmas_StdPragmas__warnings;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7972))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7972))+4);
  i3 = (OOC_INT32)sym;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7977)), 0);
  i4 = *(OOC_INT32*)((_check_pointer(i3, 7983))+16);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7941)))), OOC_Config_Pragmas__HistoryDesc_GetValue)),OOC_Config_Pragmas__HistoryDesc_GetValue)((OOC_Config_Pragmas__History)i0, (void*)(_check_pointer(i2, 7977)), i1, i4);
  value = (Config_Value__Value)i0;
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8011)))), &_td_Config_Value_Boolean__ValueDesc, 8011)), 8017));
  if (i0) goto l3;
  return (Msg__Msg)0;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_IR_CheckUses__checkUsesContext;
  i1 = code;
  i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
  e = (Msg__Msg)i0;
  i1 = *(OOC_INT32*)((_check_pointer(i3, 8108))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8084)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i1);
  i1 = *(OOC_INT32*)((_check_pointer(i3, 8147))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8122)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
  i1 = *(OOC_INT32*)((_check_pointer(i3, 8189))+24);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8162)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
  i1 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8212)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i1, (Msg__Msg)i0);
  return (Msg__Msg)i0;
l4:
  _failed_function(7735); return 0;
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8672));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8683))+4);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8807))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8812))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8807))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8812))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8816)), 0);
  i1 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i2, 8816)), i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8758)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "name", 5, (Msg__StringPtr)i1);
l7:
  return;
  ;
}

static OOC_CHAR8 OOC_IR_CheckUses__NonlocalVar(OOC_SymbolTable__ProcDecl localProc, OOC_SymbolTable__VarDecl varDecl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)varDecl;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 9065))+50);
  if (i1) goto l7;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9131)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l5;
  i0=0u;
  goto l6;
l5:
  i1 = (OOC_INT32)localProc;
  i0 = i0!=i1;
  
l6:
  return i0;
  goto l8;
l7:
  return 1u;
l8:
  _failed_function(8858); return 0;
  ;
}

void OOC_IR_CheckUses__ProcDataDesc_SetReadFlag(OOC_IR_CheckUses__ProcData pd, OOC_SymbolTable__VarDecl varDecl, OOC_INT32 flag) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 oldFlag;
  OOC_INT32 newFlag;

  i0 = (OOC_INT32)pd;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9351))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9351))+4);
  i3 = (OOC_INT32)varDecl;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9357)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l3;
  oldFlag = 0;
  i1=0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9398))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9398))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9404)))), ADT_Dictionary_IntValue__DictionaryDesc_Get)),ADT_Dictionary_IntValue__DictionaryDesc_Get)((ADT_Dictionary_IntValue__Dictionary)i2, (Object__Object)i3);
  oldFlag = i1;
  
l4:
  i2 = flag;
  i2 = (_mod(i1,4))+i2*4;
  newFlag = i2;
  i4 = i2!=i1;
  if (!i4) goto l7;
  _assert((i1<i2), 127, 9581);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9616))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9616))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9622)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i4, (Object__Object)i3, i2);
  *(OOC_UINT8*)((_check_pointer(i0, 9654))+9) = 1u;
l7:
  return;
  ;
}

void OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag(OOC_IR_CheckUses__ProcData pd, OOC_SymbolTable__VarDecl varDecl, OOC_INT32 flag) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 oldFlag;
  OOC_INT32 newFlag;

  i0 = (OOC_INT32)pd;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9836))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9836))+4);
  i3 = (OOC_INT32)varDecl;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9842)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i2, (Object__Object)i3);
  if (i1) goto l3;
  oldFlag = 0;
  i1=0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9883))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9883))+4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9889)))), ADT_Dictionary_IntValue__DictionaryDesc_Get)),ADT_Dictionary_IntValue__DictionaryDesc_Get)((ADT_Dictionary_IntValue__Dictionary)i2, (Object__Object)i3);
  oldFlag = i1;
  
l4:
  i2 = flag;
  i2 = i2+(i1>>2)*4;
  newFlag = i2;
  i4 = i2!=i1;
  if (!i4) goto l7;
  _assert((i1>i2), 127, 10068);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10103))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10103))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10109)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i4, (Object__Object)i3, i2);
  *(OOC_UINT8*)((_check_pointer(i0, 10141))+9) = 1u;
l7:
  return;
  ;
}

static void OOC_IR_CheckUses__EmitVarWarning(OOC_IR_CheckUses__Visitor v, OOC_SymbolTable__VarDecl varDecl, OOC_Scanner_Builder_BasicList__Symbol sym, OOC_CHAR8 contextCall) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 _class;
  auto OOC_CHAR8 OOC_IR_CheckUses__EmitVarWarning_LocalVar(OOC_SymbolTable__VarDecl varDecl);
    
    OOC_CHAR8 OOC_IR_CheckUses__EmitVarWarning_LocalVar(OOC_SymbolTable__VarDecl varDecl) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)varDecl;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 10426))+48);
      i1 = !i1;
      if (i1) goto l3;
      i0=0u;
      goto l4;
l3:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10459)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
      i1 = (OOC_INT32)v;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10475))+20);
      i0 = i0==i1;
      
l4:
      return i0;
      ;
    }


  i0 = (OOC_INT32)varDecl;
  i0 = OOC_IR_CheckUses__EmitVarWarning_LocalVar((OOC_SymbolTable__VarDecl)i0);
  if (!i0) goto l28;
  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10558))+32);
  i1 = i1==0;
  if (i1) goto l12;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 11106))+32);
  i1 = i1==1;
  if (i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11182))+28);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11182))+28);
  i3 = (OOC_INT32)varDecl;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11186)))), OOC_IR_CheckUses__DefDesc_GetClass)),OOC_IR_CheckUses__DefDesc_GetClass)((OOC_IR_CheckUses__Def)i2, (OOC_SymbolTable__VarDecl)i3);
  i1 = i1!=2;
  if (!i1) goto l28;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11255))+28);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11255))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11259)))), OOC_IR_CheckUses__DefDesc_SetClass)),OOC_IR_CheckUses__DefDesc_SetClass)((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__VarDecl)i3, 1);
  goto l28;
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11135))+28);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11135))+28);
  i2 = (OOC_INT32)varDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11139)))), OOC_IR_CheckUses__DefDesc_SetClass)),OOC_IR_CheckUses__DefDesc_SetClass)((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__VarDecl)i2, 2);
  goto l28;
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10595))+28);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10595))+28);
  i3 = (OOC_INT32)varDecl;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10599)))), OOC_IR_CheckUses__DefDesc_GetClass)),OOC_IR_CheckUses__DefDesc_GetClass)((OOC_IR_CheckUses__Def)i2, (OOC_SymbolTable__VarDecl)i3);
  _class = i1;
  switch (i1) {
  case 0:
    i1 = contextCall;
    if (i1) goto l17;
    i1 = (OOC_INT32)sym;
    OOC_IR_CheckUses__WarnSymV((OOC_IR_CheckUses__Visitor)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, 1, (OOC_SymbolTable__VarDecl)i3);
    goto l28;
l17:
    i1 = (OOC_INT32)sym;
    OOC_IR_CheckUses__WarnSymV((OOC_IR_CheckUses__Visitor)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, 6, (OOC_SymbolTable__VarDecl)i3);
    goto l28;
  case 1:
    i1 = contextCall;
    if (i1) goto l22;
    i1 = (OOC_INT32)sym;
    OOC_IR_CheckUses__WarnSymV((OOC_IR_CheckUses__Visitor)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, 2, (OOC_SymbolTable__VarDecl)i3);
    goto l28;
l22:
    i1 = (OOC_INT32)sym;
    OOC_IR_CheckUses__WarnSymV((OOC_IR_CheckUses__Visitor)i0, (OOC_Scanner_Builder_BasicList__Symbol)i1, 6, (OOC_SymbolTable__VarDecl)i3);
    goto l28;
  case 2:
    goto l28;
  default:
    _failed_case(i1, 10627);
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 11521))+8);
  switch (i1) {
  case 0:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 11566))+32);
    i1 = i1>=1;
    if (i1) goto l5;
    i1=0u;
    goto l7;
l5:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11597))+20);
    i2 = (OOC_INT32)varDecl;
    i1 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i1, (OOC_SymbolTable__VarDecl)i2);
    
l7:
    if (!i1) goto l30;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11638))+12);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11638))+12);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11655))+20);
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11649)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
    pb = (Object__Object)i0;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11679)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 11679)), 11688))+4);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11679)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 11679)), 11688))+4);
    i2 = (OOC_INT32)varDecl;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11694)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i2, 2);
    goto l30;
  case 1:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11778))+20);
    i2 = (OOC_INT32)varDecl;
    i1 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i1, (OOC_SymbolTable__VarDecl)i2);
    if (!i1) goto l30;
    i1 = *(OOC_INT8*)((_check_pointer(i0, 11817))+32);
    i1 = i1==0;
    if (i1) goto l22;
    i1 = *(OOC_INT8*)((_check_pointer(i0, 12007))+32);
    i1 = i1==1;
    if (i1) goto l20;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12087))+28);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12087))+28);
    i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12091)))), OOC_IR_CheckUses__DefDesc_GetClass)),OOC_IR_CheckUses__DefDesc_GetClass)((OOC_IR_CheckUses__Def)i3, (OOC_SymbolTable__VarDecl)i2);
    i1 = i1!=2;
    if (!i1) goto l30;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12162))+28);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12162))+28);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12166)))), OOC_IR_CheckUses__DefDesc_SetClass)),OOC_IR_CheckUses__DefDesc_SetClass)((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__VarDecl)i2, 1);
    goto l30;
l20:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12038))+28);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12038))+28);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12042)))), OOC_IR_CheckUses__DefDesc_SetClass)),OOC_IR_CheckUses__DefDesc_SetClass)((OOC_IR_CheckUses__Def)i0, (OOC_SymbolTable__VarDecl)i2, 2);
    goto l30;
l22:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11856))+28);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11856))+28);
    i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11860)))), OOC_IR_CheckUses__DefDesc_GetClass)),OOC_IR_CheckUses__DefDesc_GetClass)((OOC_IR_CheckUses__Def)i3, (OOC_SymbolTable__VarDecl)i2);
    _class = i1;
    i1 = i1!=2;
    if (!i1) goto l30;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11929))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11929))+24);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11943)))), OOC_IR_CheckUses__ProcDataDesc_SetReadFlag)),OOC_IR_CheckUses__ProcDataDesc_SetReadFlag)((OOC_IR_CheckUses__ProcData)i0, (OOC_SymbolTable__VarDecl)i2, 1);
    goto l30;
  case 2:
    i1 = (OOC_INT32)sym;
    i2 = contextCall;
    i3 = (OOC_INT32)varDecl;
    OOC_IR_CheckUses__EmitVarWarning((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i3, (OOC_Scanner_Builder_BasicList__Symbol)i1, i2);
    goto l30;
  default:
    _failed_case(i1, 11515);
    goto l30;
  }
l30:
  return;
  ;
}

void OOC_IR_CheckUses__VisitorDesc_VisitVar(OOC_IR_CheckUses__Visitor v, OOC_IR__Var var) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12418))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12441));
  i2 = (OOC_INT32)v;
  OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i2, (OOC_SymbolTable__VarDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12428)))), &_td_OOC_SymbolTable__VarDeclDesc, 12428)), (OOC_Scanner_Builder_BasicList__Symbol)i0, 0u);
  return;
  ;
}

void OOC_IR_CheckUses__VisitorDesc_VisitDeref(OOC_IR_CheckUses__Visitor v, OOC_IR__Deref deref) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT8 oldMode;

  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 12579))+32);
  oldMode = i1;
  *(OOC_INT8*)((_check_pointer(i0, 12591))+32) = 0;
  i2 = (OOC_INT32)deref;
  OOC_IR_VisitAll__VisitorDesc_VisitDeref((OOC_IR_VisitAll__Visitor)i0, (OOC_IR__Deref)i2);
  *(OOC_INT8*)((_check_pointer(i0, 12637))+32) = i1;
  return;
  ;
}

void OOC_IR_CheckUses__VisitorDesc_VisitIndex(OOC_IR_CheckUses__Visitor v, OOC_IR__Index index) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT8 oldMode;

  i0 = (OOC_INT32)v;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 12781))+32);
  oldMode = i1;
  i2 = (OOC_INT32)index;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12797))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12797))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12803)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i4, (OOC_IR__Visitor)i0);
  *(OOC_INT8*)((_check_pointer(i0, 12821))+32) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12845))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12845))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12851)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i0);
  *(OOC_INT8*)((_check_pointer(i0, 12869))+32) = i1;
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 13385))+32);
  oldMode = i1;
  i2 = (OOC_INT32)call;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13400))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13400))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13407)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i4, (OOC_IR__Visitor)i0);
  i3 = *(OOC_INT8*)((_check_pointer(i0, 13434))+8);
  switch (i3) {
  case 0:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13496))+12);
    i = 0;
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 13506)), 0);
    i4 = 0<i3;
    if (!i4) goto l107;
    i4=0;
l5_loop:
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13530))+16);
    i5 = _check_pointer(i5, 13541);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13541))*4);
    i5 = i5!=(OOC_INT32)0;
    if (i5) goto l8;
    i5=0u;
    goto l10;
l8:
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13558))+16);
    i5 = _check_pointer(i5, 13569);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13569))*4);
    i5 = *(OOC_UINT8*)((_check_pointer(i5, 13572))+50);
    
l10:
    if (i5) goto l12;
    *(OOC_INT8*)((_check_pointer(i0, 13694))+32) = 0;
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13723))+12);
    i5 = _check_pointer(i5, 13733);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13733))*4);
    i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13723))+12);
    i6 = _check_pointer(i6, 13733);
    i7 = OOC_ARRAY_LENGTH(i6, 0);
    i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 13733))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 13736)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i6, (OOC_IR__Visitor)i0);
    goto l13;
l12:
    *(OOC_INT8*)((_check_pointer(i0, 13600))+32) = 1;
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13630))+12);
    i5 = _check_pointer(i5, 13640);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13640))*4);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 13647)))), &_td_OOC_IR__AdrDesc, 13647)), 13651))+8);
    i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13630))+12);
    i6 = _check_pointer(i6, 13640);
    i7 = OOC_ARRAY_LENGTH(i6, 0);
    i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 13640))*4);
    i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 13647)))), &_td_OOC_IR__AdrDesc, 13647)), 13651))+8);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 13658)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i6, (OOC_IR__Visitor)i0);
l13:
    i4 = i4+1;
    i = i4;
    i5 = i4<i3;
    if (i5) goto l5_loop;
    goto l107;
  case 1:
  case 2:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13837))+8);
    i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13845)))), &_td_OOC_IR__ProcedureRefDesc);
    if (i3) goto l22;
    i3=0u;
    goto l24;
l22:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13877))+12);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13900))+8);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13877))+12);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13911)))), &_td_OOC_IR__ProcedureRefDesc, 13911)), 13924))+8);
    i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13888)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i5, (Object__Object)i4);
    
l24:
    if (i3) goto l26;
    callee = (OOC_SymbolTable__ProcDecl)(OOC_INT32)0;
    inout = (ADT_Dictionary_IntValue__Dictionary)(OOC_INT32)0;
    i3=(OOC_INT32)0;i4=(OOC_INT32)0;
    goto l27;
l26:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13958))+8);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13969)))), &_td_OOC_IR__ProcedureRefDesc, 13969)), 13982))+8);
    i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13992)))), &_td_OOC_SymbolTable__ProcDeclDesc, 13992);
    callee = (OOC_SymbolTable__ProcDecl)i3;
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14019))+12);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14039))+8);
    i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14019))+12);
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14050)))), &_td_OOC_IR__ProcedureRefDesc, 14050)), 14063))+8);
    i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14030)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i6, (Object__Object)i5);
    obj = (Object__Object)i4;
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14092)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 14092)), 14101))+4);
    inout = (ADT_Dictionary_IntValue__Dictionary)i4;
    {register OOC_INT32 h0=i3;i3=i4;i4=h0;}
l27:
    i5 = (OOC_INT32)ADT_ArrayList__New(8);
    readList = (ADT_ArrayList__ArrayList)i5;
    i6 = (OOC_INT32)ADT_ArrayList__New(8);
    writeList = (ADT_ArrayList__ArrayList)i6;
    i7 = (OOC_INT32)ADT_Dictionary_IntValue__New();
    writeMaybeDict = (ADT_Dictionary_IntValue__Dictionary)i7;
    i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14323))+12);
    i = 0;
    i8 = OOC_ARRAY_LENGTH((_check_pointer(i8, 14333)), 0);
    i9 = 0<i8;
    if (!i9) goto l60;
    i9 = i3==(OOC_INT32)0;
    i10=0;
l30_loop:
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14357))+16);
    i11 = _check_pointer(i11, 14368);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 14368))*4);
    i11 = i11==(OOC_INT32)0;
    if (i11) goto l55;
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14425))+16);
    i11 = _check_pointer(i11, 14436);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 14436))*4);
    i11 = *(OOC_UINT8*)((_check_pointer(i11, 14439))+50);
    if (i11) goto l35;
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15250))+12);
    i11 = _check_pointer(i11, 15260);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 15260))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15238)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i5, (Object__Object)i11);
    goto l55;
l35:
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14480))+12);
    i11 = _check_pointer(i11, 14490);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i10, i12, OOC_UINT32, 14490))*4);
    i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 14497)))), &_td_OOC_IR__AdrDesc, 14497)), 14501))+8);
    design = (OOC_IR__Expression)i11;
    if (i9) goto l52;
    i12 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14652))+16);
    i12 = _check_pointer(i12, 14663);
    i13 = OOC_ARRAY_LENGTH(i12, 0);
    i12 = (OOC_INT32)*(OOC_INT32*)(i12+(_check_index(i10, i13, OOC_UINT32, 14663))*4);
    i12 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14640)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i12);
    if (!i12) goto l55;
    i12 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14708))+16);
    i12 = _check_pointer(i12, 14719);
    i13 = OOC_ARRAY_LENGTH(i12, 0);
    i12 = (OOC_INT32)*(OOC_INT32*)(i12+(_check_index(i10, i13, OOC_UINT32, 14719))*4);
    i12 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14699)))), ADT_Dictionary_IntValue__DictionaryDesc_Get)),ADT_Dictionary_IntValue__DictionaryDesc_Get)((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i12);
    _class = i12;
    i13 = i12>>2;
    switch (i13) {
    case 1:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14808)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i5, (Object__Object)i11);
      goto l44;
    case 0:
      goto l44;
    default:
      _failed_case(i13, 14737);
      goto l44;
    }
l44:
    i12 = _mod(i12,4);
    switch (i12) {
    case 2:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14994)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i11);
      goto l55;
    case 1:
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 15063)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i7, (Object__Object)i11, 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 15103)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i11);
      goto l55;
    case 0:
      goto l55;
    default:
      _failed_case(i12, 14921);
      goto l55;
    }
l52:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14602)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i6, (Object__Object)i11);
l55:
    i10 = i10+1;
    i = i10;
    i11 = i10<i8;
    if (i11) goto l30_loop;
l60:
    i8 = *(OOC_INT32*)((_check_pointer(i5, 15319))+4);
    i = 0;
    i9 = 0<i8;
    if (!i9) goto l68;
    i9=0;
l63_loop:
    *(OOC_INT8*)((_check_pointer(i0, 15339))+32) = 0;
    i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 15370));
    i10 = _check_pointer(i10, 15376);
    i11 = OOC_ARRAY_LENGTH(i10, 0);
    i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i9, i11, OOC_UINT32, 15376))*4);
    i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 15370));
    i11 = _check_pointer(i11, 15376);
    i12 = OOC_ARRAY_LENGTH(i11, 0);
    i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i9, i12, OOC_UINT32, 15376))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 15383)))), &_td_OOC_IR__ExpressionDesc, 15383)), 15394)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)(_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 15383)))), &_td_OOC_IR__ExpressionDesc, 15383)), (OOC_IR__Visitor)i0);
    i9 = i9+1;
    i = i9;
    i10 = i9<i8;
    if (i10) goto l63_loop;
l68:
    i5 = i3!=(OOC_INT32)0;
    if (!i5) goto l93;
    i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15470)))), ADT_Dictionary_IntValue__DictionaryDesc_Keys)),ADT_Dictionary_IntValue__DictionaryDesc_Keys)((ADT_Dictionary_IntValue__Dictionary)i3);
    k = (Object__ObjectArrayPtr)i5;
    i8 = OOC_ARRAY_LENGTH((_check_pointer(i5, 15506)), 0);
    i = 0;
    i9 = 0<i8;
    if (!i9) goto l93;
    i9=0;
l73_loop:
    i10 = _check_pointer(i5, 15536);
    i11 = OOC_ARRAY_LENGTH(i10, 0);
    i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i9, i11, OOC_UINT32, 15536))*4);
    i10 = _type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 15544)))), &_td_OOC_SymbolTable__VarDeclDesc, 15544);
    varDecl = (OOC_SymbolTable__VarDecl)i10;
    i11 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 15575)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i10);
    i11 = i11!=i4;
    if (!i11) goto l87;
    i11 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15629)))), ADT_Dictionary_IntValue__DictionaryDesc_Get)),ADT_Dictionary_IntValue__DictionaryDesc_Get)((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i10);
    _class = i11;
    i12 = i11>>2;
    switch (i12) {
    case 1:
      *(OOC_INT8*)((_check_pointer(i0, 15733))+32) = 0;
      i12 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15791));
      OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i10, (OOC_Scanner_Builder_BasicList__Symbol)i12, 1u);
      goto l80;
    case 0:
      goto l80;
    default:
      _failed_case(i12, 15669);
      goto l80;
    }
l80:
    i11 = _mod(i11,4);
    switch (i11) {
    case 2:
      *(OOC_INT8*)((_check_pointer(i0, 15965))+32) = 1;
      i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16024));
      OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i10, (OOC_Scanner_Builder_BasicList__Symbol)i11, 1u);
      goto l87;
    case 1:
      *(OOC_INT8*)((_check_pointer(i0, 16076))+32) = 2;
      i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16140));
      OOC_IR_CheckUses__VisitVarDecl((OOC_IR_CheckUses__Visitor)i0, (OOC_SymbolTable__VarDecl)i10, (OOC_Scanner_Builder_BasicList__Symbol)i11, 1u);
      goto l87;
    case 0:
      goto l87;
    default:
      _failed_case(i11, 15900);
      goto l87;
    }
l87:
    i9 = i9+1;
    i = i9;
    i10 = i9<i8;
    if (i10) goto l73_loop;
l93:
    i3 = *(OOC_INT32*)((_check_pointer(i6, 16300))+4);
    i = 0;
    i4 = 0<i3;
    if (!i4) goto l107;
    i4=0;
l96_loop:
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 16353));
    i5 = _check_pointer(i5, 16359);
    i8 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i8, OOC_UINT32, 16359))*4);
    i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 16336)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i7, (Object__Object)i5);
    if (i5) goto l99;
    *(OOC_INT8*)((_check_pointer(i0, 16425))+32) = 1;
    goto l100;
l99:
    *(OOC_INT8*)((_check_pointer(i0, 16380))+32) = 2;
l100:
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 16471));
    i5 = _check_pointer(i5, 16477);
    i8 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i8, OOC_UINT32, 16477))*4);
    i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 16471));
    i8 = _check_pointer(i8, 16477);
    i9 = OOC_ARRAY_LENGTH(i8, 0);
    i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 16477))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 16484)))), &_td_OOC_IR__ExpressionDesc, 16484)), 16495)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)(_type_guard(i8, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 16484)))), &_td_OOC_IR__ExpressionDesc, 16484)), (OOC_IR__Visitor)i0);
    i4 = i4+1;
    i = i4;
    i5 = i4<i3;
    if (i5) goto l96_loop;
    goto l107;
  default:
    _failed_case(i3, 13428);
    goto l107;
  }
l107:
  *(OOC_INT8*)((_check_pointer(i0, 16537))+32) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16566))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16573))+4);
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16583)))), &_td_OOC_SymbolTable__FormalParsDesc, 16583)), 16594))+49);
  if (!i1) goto l110;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16616))+28);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16616))+28);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16620)))), OOC_IR_CheckUses__DefDesc_Unreachable)),OOC_IR_CheckUses__DefDesc_Unreachable)((OOC_IR_CheckUses__Def)i0);
l110:
  return;
  ;
}

static void OOC_IR_CheckUses__TransitiveWriteClosure(ADT_Dictionary__Dictionary knownProcs, OOC_IR_CheckUses__ProcData pd) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
  Object__ObjectArrayPtr k;
  OOC_INT32 i;
  OOC_INT32 j;
  OOC_SymbolTable__ProcDecl callerDecl;
  Object__Object obj;
  OOC_IR_CheckUses__ProcData pdCaller;

  i0 = (OOC_INT32)pd;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16932))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16932))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16938)))), ADT_Dictionary_IntValue__DictionaryDesc_Keys)),ADT_Dictionary_IntValue__DictionaryDesc_Keys)((ADT_Dictionary_IntValue__Dictionary)i2);
  k = (Object__ObjectArrayPtr)i1;
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 16970)), 0);
  i3 = 0<i2;
  if (!i3) goto l23;
  i3 = (OOC_INT32)knownProcs;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17000));
  i5 = *(OOC_INT32*)((_check_pointer(i5, 17008))+4);
  j = 0;
  i6 = 0<i5;
  if (!i6) goto l18;
  i6=0;
l6_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17043));
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i7, 17051));
  i7 = _check_pointer(i7, 17057);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 17057))*4);
  i7 = _type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 17065)))), &_td_OOC_SymbolTable__ProcDeclDesc, 17065);
  callerDecl = (OOC_SymbolTable__ProcDecl)i7;
  i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17101)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i3, (Object__Object)i7);
  obj = (Object__Object)i8;
  i8 = _type_guard(i8, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 17143)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 17143);
  pdCaller = (OOC_IR_CheckUses__ProcData)i8;
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 17174))+4);
  i10 = _check_pointer(i1, 17189);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i12 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 17174))+4);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 17189))*4);
  i9 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 17180)))), ADT_Dictionary_IntValue__DictionaryDesc_HasKey)),ADT_Dictionary_IntValue__DictionaryDesc_HasKey)((ADT_Dictionary_IntValue__Dictionary)i12, (Object__Object)i10);
  i9 = !i9;
  if (i9) goto l9;
  i7=0u;
  goto l11;
l9:
  i9 = _check_pointer(i1, 17275);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i4, i10, OOC_UINT32, 17275))*4);
  i7 = OOC_IR_CheckUses__NonlocalVar((OOC_SymbolTable__ProcDecl)i7, (OOC_SymbolTable__VarDecl)(_type_guard(i9, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 17283)))), &_td_OOC_SymbolTable__VarDeclDesc, 17283)));
  
l11:
  if (!i7) goto l13;
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 17316))+4);
  i9 = _check_pointer(i1, 17328);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 17316))+4);
  i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i4, i10, OOC_UINT32, 17328))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 17322)))), ADT_Dictionary_IntValue__DictionaryDesc_Set)),ADT_Dictionary_IntValue__DictionaryDesc_Set)((ADT_Dictionary_IntValue__Dictionary)i11, (Object__Object)i9, 2);
  OOC_IR_CheckUses__TransitiveWriteClosure((ADT_Dictionary__Dictionary)i3, (OOC_IR_CheckUses__ProcData)i8);
l13:
  i6 = i6+1;
  j = i6;
  i7 = i6<i5;
  if (i7) goto l6_loop;
l18:
  i4 = i4+1;
  i = i4;
  i5 = i4<i2;
  if (i5) goto l3_loop;
l23:
  return;
  ;
}

void OOC_IR_CheckUses__CheckUses(OOC_IR__Module module, OOC_Config_Pragmas__History pragmaHistory, OOC_Error__List errList) {
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
  auto void OOC_IR_CheckUses__CheckUses_SetWriteFlags(OOC_IR_CheckUses__ProcData pd, OOC_IR_CheckUses__Def def);
    
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
          *(OOC_INT32*)((_check_pointer(i0, 17910))+28) = i1;
          *(OOC_INT8*)((_check_pointer(i0, 17932))+32) = 0;
          i1 = (OOC_INT32)expr;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17959)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
          return;
          ;
        }

        
        void OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign(OOC_IR__Expression design, OOC_INT8 mode) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)v;
          i1 = (OOC_INT32)def;
          *(OOC_INT32*)((_check_pointer(i0, 18084))+28) = i1;
          i1 = mode;
          *(OOC_INT8*)((_check_pointer(i0, 18106))+32) = i1;
          i1 = (OOC_INT32)design;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18135)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
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
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18576))+8);
              i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18586)))), &_td_OOC_IR__TypeTestDesc, 18586);
              localTest = (OOC_IR__TypeTest)i1;
              i2 = (OOC_INT32)prevGuards;
              i = 0;
              i3 = *(OOC_INT32*)((_check_pointer(i2, 18631))+4);
              i4 = 0<i3;
              if (!i4) goto l15;
              i4=0;
l3_loop:
              i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18672));
              i5 = _check_pointer(i5, 18678);
              i6 = OOC_ARRAY_LENGTH(i5, 0);
              i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 18678))*4);
              i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18685)))), &_td_OOC_IR__TypeTestDesc, 18685);
              test = (OOC_IR__TypeTest)i4;
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18716))+8);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18746))+8);
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 18725)))), &_td_OOC_IR__VarDesc, 18725)), 18729))+8);
              i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 18755)))), &_td_OOC_IR__VarDesc, 18755)), 18759))+8);
              i5 = i5==i6;
              if (i5) goto l6;
              i4=0u;
              goto l8;
l6:
              i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18809))+12);
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18861))+12);
              i4 = OOC_SymbolTable_TypeRules__IsExtensionOf((OOC_SymbolTable__Type)i5, (OOC_SymbolTable__Type)i4);
              
l8:
              if (!i4) goto l10;
              i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18937));
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
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19064))+8);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i4);
              def = (OOC_IR_CheckUses__Def)i1;
              i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19132)))), OOC_IR_CheckUses__DefDesc_Copy)),OOC_IR_CheckUses__DefDesc_Copy)((OOC_IR_CheckUses__Def)i3);
              def2 = (OOC_IR_CheckUses__Def)i1;
              i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19175))+12);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i4);
              i4 = (OOC_INT32)def;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 19200)))), OOC_IR_CheckUses__DefDesc_Merge)),OOC_IR_CheckUses__DefDesc_Merge)((OOC_IR_CheckUses__Def)i4, (OOC_IR_CheckUses__Def)i1);
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19243))+16);
              i1 = i1!=0;
              if (!i1) goto l26;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19290))+16);
              i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 19300)), 0);
              i1 = i1==1;
              if (i1) goto l20;
              i1=0u;
              goto l22;
l20:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19330))+16);
              i1 = _check_pointer(i1, 19340);
              i4 = OOC_ARRAY_LENGTH(i1, 0);
              i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i4, OOC_UINT8, 19340))*4);
              i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19344)))), &_td_OOC_IR__WithStatmDesc);
              
l22:
              if (i1) goto l24;
              i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19545)))), OOC_IR_CheckUses__DefDesc_Copy)),OOC_IR_CheckUses__DefDesc_Copy)((OOC_IR_CheckUses__Def)i3);
              def2 = (OOC_IR_CheckUses__Def)i1;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19592))+16);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
              i0 = (OOC_INT32)def;
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19622)))), OOC_IR_CheckUses__DefDesc_Merge)),OOC_IR_CheckUses__DefDesc_Merge)((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
              goto l26;
l24:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19402))+8);
              OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19390)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19412)))), &_td_OOC_IR__TypeTestDesc, 19412)));
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19459))+16);
              i0 = _check_pointer(i0, 19469);
              i1 = OOC_ARRAY_LENGTH(i0, 0);
              i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 19469))*4);
              OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckStatm_CheckWith((OOC_IR_CheckUses__Def)i3, (OOC_IR__WithStatm)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19476)))), &_td_OOC_IR__WithStatmDesc, 19476)), (ADT_ArrayList__ArrayList)i2);
l26:
              return;
              ;
            }


          i0 = (OOC_INT32)statm;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19728)))), &_td_OOC_IR__AssertDesc);
          if (i1) goto l111;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20029)))), &_td_OOC_IR__AssignOpDesc);
          if (i1) goto l109;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20189)))), &_td_OOC_IR__AssignmentDesc);
          if (i1) goto l107;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20314)))), &_td_OOC_IR__CallDesc);
          if (i1) goto l105;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20381)))), &_td_OOC_IR__CopyDesc);
          if (i1) goto l103;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20497)))), &_td_OOC_IR__CopyParameterDesc);
          if (i1) goto l124;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20568)))), &_td_OOC_IR__CopyStringDesc);
          if (i1) goto l100;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20690)))), &_td_OOC_IR__ForStatmDesc);
          if (i1) goto l98;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20943)))), &_td_OOC_IR__IfStatmDesc);
          if (i1) goto l96;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21170)))), &_td_OOC_IR__CaseStatmDesc);
          if (i1) goto l83;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21664)))), &_td_OOC_IR__LoopStatmDesc);
          if (i1) goto l78;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21855)))), &_td_OOC_IR__ExitDesc);
          if (i1) goto l76;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21998)))), &_td_OOC_IR__MoveBlockDesc);
          if (i1) goto l62;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22530)))), &_td_OOC_IR__RaiseDesc);
          if (i1) goto l60;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22637)))), &_td_OOC_IR__RepeatStatmDesc);
          if (i1) goto l58;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22767)))), &_td_OOC_IR__ReturnDesc);
          if (i1) goto l53;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22961)))), &_td_OOC_IR__TryStatmDesc);
          if (i1) goto l43;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23272)))), &_td_OOC_IR__WhileStatmDesc);
          if (i1) goto l41;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23393)))), &_td_OOC_IR__WithStatmDesc);
          if (i1) goto l39;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23386)))), 23386);
          goto l124;
l39:
          i1 = (OOC_INT32)def;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23433)))), OOC_IR_CheckUses__DefDesc_Copy)),OOC_IR_CheckUses__DefDesc_Copy)((OOC_IR_CheckUses__Def)i1);
          defIn = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)def;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23455)))), OOC_IR_CheckUses__DefDesc_Unreachable)),OOC_IR_CheckUses__DefDesc_Unreachable)((OOC_IR_CheckUses__Def)i2);
          i2 = (OOC_INT32)ADT_ArrayList__New(4);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckStatm_CheckWith((OOC_IR_CheckUses__Def)i1, (OOC_IR__WithStatm)i0, (ADT_ArrayList__ArrayList)i2);
          goto l124;
l41:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23316))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23359))+12);
          i1 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          goto l124;
l43:
          i1 = (OOC_INT32)def;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23000)))), OOC_IR_CheckUses__DefDesc_Copy)),OOC_IR_CheckUses__DefDesc_Copy)((OOC_IR_CheckUses__Def)i1);
          defIn = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23043))+8);
          i3 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i3, (OOC_IR__StatementSeq)i2);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23088))+12);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 23098)), 0);
          i = 0;
          i3 = 0<i2;
          if (!i3) goto l124;
          i3=0;
l46_loop:
          i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23131)))), OOC_IR_CheckUses__DefDesc_Copy)),OOC_IR_CheckUses__DefDesc_Copy)((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i4;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23177))+12);
          i5 = _check_pointer(i5, 23187);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 23187))*4);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23190))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i4, (OOC_IR__StatementSeq)i5);
          i5 = (OOC_INT32)def;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 23217)))), OOC_IR_CheckUses__DefDesc_Merge)),OOC_IR_CheckUses__DefDesc_Merge)((OOC_IR_CheckUses__Def)i5, (OOC_IR_CheckUses__Def)i4);
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l46_loop;
          goto l124;
l53:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22801))+8);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l56;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22848))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
l56:
          i0 = (OOC_INT32)v;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22884))+16);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22884))+16);
          i2 = (OOC_INT32)def;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22893)))), OOC_IR_CheckUses__DefDesc_Merge)),OOC_IR_CheckUses__DefDesc_Merge)((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i2);
          i0 = (OOC_INT32)def;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22919)))), OOC_IR_CheckUses__DefDesc_Unreachable)),OOC_IR_CheckUses__DefDesc_Unreachable)((OOC_IR_CheckUses__Def)i0);
          goto l124;
l58:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22691))+8);
          i2 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22724))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l124;
l60:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22569))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          i0 = (OOC_INT32)def;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22595)))), OOC_IR_CheckUses__DefDesc_Unreachable)),OOC_IR_CheckUses__DefDesc_Unreachable)((OOC_IR_CheckUses__Def)i0);
          goto l124;
l62:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22035))+8);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22043)))), &_td_OOC_IR__AdrDesc);
          if (i1) goto l65;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22153))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          goto l66;
l65:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22086))+8);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22097)))), &_td_OOC_IR__AdrDesc, 22097)), 22101))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
l66:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22203))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22245))+12);
          expr = (OOC_IR__Expression)i1;
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22271)))), &_td_OOC_IR__TypeConvDesc);
          if (!i2) goto l70;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22320)))), &_td_OOC_IR__TypeConvDesc, 22320)), 22329))+8);
          expr = (OOC_IR__Expression)i1;
          
l70:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22370)))), &_td_OOC_IR__AdrDesc);
          if (i2) goto l73;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22481))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l124;
l73:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22418)))), &_td_OOC_IR__AdrDesc, 22418)), 22422))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l124;
l76:
          i1 = (OOC_INT32)loopExits;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21904))+8);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21894)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
          obj = (Object__Object)i0;
          i1 = (OOC_INT32)def;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21926)))), &_td_OOC_IR_CheckUses__DefDesc, 21926)), 21930)))), OOC_IR_CheckUses__DefDesc_Merge)),OOC_IR_CheckUses__DefDesc_Merge)((OOC_IR_CheckUses__Def)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21926)))), &_td_OOC_IR_CheckUses__DefDesc, 21926)), (OOC_IR_CheckUses__Def)i1);
          i0 = (OOC_INT32)def;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21956)))), OOC_IR_CheckUses__DefDesc_Unreachable)),OOC_IR_CheckUses__DefDesc_Unreachable)((OOC_IR_CheckUses__Def)i0);
          goto l124;
l78:
          i1 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
          defIn = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)loopExits;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21741)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i2, (Object__Object)i0, (Object__Object)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21795))+8);
          i2 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i0);
          i0 = _check_pointer(i1, 21826);
          i1 = (OOC_INT32)def;
          i1 = _check_pointer(i1, 21816);
          i2 = (OOC_INT32)&_td_OOC_IR_CheckUses__DefDesc;
          i2 = i2!=i2;
          if (!i2) goto l81;
          _failed_type_assert(21816);
l81:
          _copy_block(i0,i1,8);
          goto l124;
l83:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21213))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)def;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21245)))), OOC_IR_CheckUses__DefDesc_Copy)),OOC_IR_CheckUses__DefDesc_Copy)((OOC_IR_CheckUses__Def)i1);
          defIn = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)def;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21267)))), OOC_IR_CheckUses__DefDesc_Unreachable)),OOC_IR_CheckUses__DefDesc_Unreachable)((OOC_IR_CheckUses__Def)i2);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21316))+12);
          i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 21325)), 0);
          i = 0;
          i3 = 0<i2;
          if (!i3) goto l91;
          i3=0;
l86_loop:
          i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21358)))), OOC_IR_CheckUses__DefDesc_Copy)),OOC_IR_CheckUses__DefDesc_Copy)((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i4;
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21404))+12);
          i5 = _check_pointer(i5, 21413);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 21413))*4);
          i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 21416))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i4, (OOC_IR__StatementSeq)i5);
          i5 = (OOC_INT32)def;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 21443)))), OOC_IR_CheckUses__DefDesc_Merge)),OOC_IR_CheckUses__DefDesc_Merge)((OOC_IR_CheckUses__Def)i5, (OOC_IR_CheckUses__Def)i4);
          i3 = i3+1;
          i = i3;
          i4 = i3<i2;
          if (i4) goto l86_loop;
l91:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21491))+16);
          i2 = i2!=(OOC_INT32)0;
          if (!i2) goto l124;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21537)))), OOC_IR_CheckUses__DefDesc_Copy)),OOC_IR_CheckUses__DefDesc_Copy)((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i1;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21583))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          i0 = (OOC_INT32)def;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21609)))), OOC_IR_CheckUses__DefDesc_Merge)),OOC_IR_CheckUses__DefDesc_Merge)((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
          goto l124;
l96:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20984))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)def;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21014)))), OOC_IR_CheckUses__DefDesc_Copy)),OOC_IR_CheckUses__DefDesc_Copy)((OOC_IR_CheckUses__Def)i1);
          def2 = (OOC_IR_CheckUses__Def)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21057))+12);
          i3 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i3, (OOC_IR__StatementSeq)i2);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21104))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          i0 = (OOC_INT32)def;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21130)))), OOC_IR_CheckUses__DefDesc_Merge)),OOC_IR_CheckUses__DefDesc_Merge)((OOC_IR_CheckUses__Def)i0, (OOC_IR_CheckUses__Def)i1);
          goto l124;
l98:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20732))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20766))+16);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20800))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i1, 1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20909))+24);
          i1 = (OOC_INT32)def;
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i1, (OOC_IR__StatementSeq)i0);
          goto l124;
l100:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20612))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20649))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l124;
l103:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20419))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20456))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l124;
l105:
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l124;
l107:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20233))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20269))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l124;
l109:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20071))+12);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20105))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i1);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20144))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckDesign((OOC_IR__Expression)i0, 1);
          goto l124;
l111:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19762))+8);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l118;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19803))+8);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19814)))), &_td_OOC_IR__ConstDesc);
          if (i1) goto l116;
          i1=0u;
          goto l120;
l116:
          i1 = (OOC_INT32)Object_Boxed__false;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19868))+8);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19882)))), &_td_OOC_IR__ConstDesc, 19882)), 19888))+8);
          i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19855)))), Object_Boxed__BooleanDesc_Equals)),Object_Boxed__BooleanDesc_Equals)((Object_Boxed__Boolean)i1, (Object__Object)i2);
          
          goto l120;
l118:
          i1=1u;
l120:
          if (i1) goto l122;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19975))+8);
          OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckExpr((OOC_IR__Expression)i0);
          goto l124;
l122:
          i0 = (OOC_INT32)def;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19917)))), OOC_IR_CheckUses__DefDesc_Unreachable)),OOC_IR_CheckUses__DefDesc_Unreachable)((OOC_IR_CheckUses__Def)i0);
l124:
          return;
          ;
        }


      i0 = (OOC_INT32)statmSeq;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l23;
      i = 0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 23652)), 0);
      i1 = 0!=i1;
      if (i1) goto l5;
      i1=0u;
      goto l7;
l5:
      i1 = (OOC_INT32)def;
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 23662))+4);
      i1 = !i1;
      
l7:
      if (i1) goto l9;
      i1=i0;i0=0;
      goto l19;
l9:
      i1=0;
l10_loop:
      i0 = _check_pointer(i0, 23707);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i1, i2, OOC_UINT32, 23707))*4);
      OOC_IR_CheckUses__CheckUses_CheckStatmSeq_CheckStatm((OOC_IR__Statement)i0);
      i0 = i;
      i0 = i0+1;
      i = i0;
      i1 = (OOC_INT32)statmSeq;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 23652)), 0);
      i2 = i0!=i2;
      if (i2) goto l13;
      i2=0u;
      goto l15;
l13:
      i2 = (OOC_INT32)def;
      i2 = *(OOC_UINT8*)((_check_pointer(i2, 23662))+4);
      i2 = !i2;
      
l15:
      if (!i2) goto l19;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
      goto l10_loop;
l19:
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 23772)), 0);
      i2 = i0!=i2;
      if (!i2) goto l23;
      i1 = _check_pointer(i1, 23831);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i2, OOC_UINT32, 23831))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23834));
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
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24002))+52);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24013))+36);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=0u;
      goto l4;
l3:
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 24053))+42);
      i0 = !i0;
      
l4:
      return i0;
      ;
    }

    
    void OOC_IR_CheckUses__CheckUses_CallersToWorklist(ADT_ArrayList__ArrayList callers) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;
      Object__Object pd;

      i0 = (OOC_INT32)callers;
      i = 0;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 24241))+4);
      i2 = 0<i1;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = (OOC_INT32)knownProcs;
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24288));
      i4 = _check_pointer(i4, 24294);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 24294))*4);
      i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 24276)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i3, (Object__Object)i4);
      pd = (Object__Object)i3;
      *(OOC_UINT8*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 24311)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 24311)), 24320))+8) = 1u;
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l3_loop;
l8:
      return;
      ;
    }

    
    void OOC_IR_CheckUses__CheckUses_SetWriteFlags(OOC_IR_CheckUses__ProcData pd, OOC_IR_CheckUses__Def def) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      Object__ObjectArrayPtr k;
      OOC_INT32 i;

      i0 = (OOC_INT32)def;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24513));
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24513));
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24519)))), ADT_Dictionary_IntValue__DictionaryDesc_Keys)),ADT_Dictionary_IntValue__DictionaryDesc_Keys)((ADT_Dictionary_IntValue__Dictionary)i2);
      k = (Object__ObjectArrayPtr)i1;
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 24553)), 0);
      i3 = 0<i2;
      if (!i3) goto l14;
      i3 = (OOC_INT32)pd;
      i4=0;
l3_loop:
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24577));
      i6 = _check_pointer(i1, 24589);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 24589))*4);
      i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24577));
      i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 24583)))), ADT_Dictionary_IntValue__DictionaryDesc_Get)),ADT_Dictionary_IntValue__DictionaryDesc_Get)((ADT_Dictionary_IntValue__Dictionary)i7, (Object__Object)i6);
      switch (i5) {
      case 0:
        i5 = _check_pointer(i1, 24645);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 24645))*4);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 24630)))), OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag)),OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag)((OOC_IR_CheckUses__ProcData)i3, (OOC_SymbolTable__VarDecl)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 24653)))), &_td_OOC_SymbolTable__VarDeclDesc, 24653)), 0);
        goto l9;
      case 1:
        i5 = _check_pointer(i1, 24731);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 24731))*4);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 24716)))), OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag)),OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag)((OOC_IR_CheckUses__ProcData)i3, (OOC_SymbolTable__VarDecl)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 24739)))), &_td_OOC_SymbolTable__VarDeclDesc, 24739)), 1);
        goto l9;
      case 2:
        i5 = _check_pointer(i1, 24806);
        i6 = OOC_ARRAY_LENGTH(i5, 0);
        i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 24806))*4);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 24791)))), OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag)),OOC_IR_CheckUses__ProcDataDesc_SetWriteFlag)((OOC_IR_CheckUses__ProcData)i3, (OOC_SymbolTable__VarDecl)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 24814)))), &_td_OOC_SymbolTable__VarDeclDesc, 24814)), 2);
        goto l9;
      default:
        _failed_case(i5, 24569);
        goto l9;
      }
l9:
      i4 = i4+1;
      i = i4;
      i5 = i4<i2;
      if (i5) goto l3_loop;
l14:
      return;
      ;
    }


  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)OOC_IR_CheckUses__KnownProcs((OOC_IR__Module)i0);
  knownProcs = (ADT_Dictionary__Dictionary)i1;
  i2 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__Visitor.baseTypes[0]);
  v = (OOC_IR_CheckUses__Visitor)i2;
  OOC_IR_VisitAll__InitVisitor((OOC_IR_VisitAll__Visitor)i2);
  i3 = (OOC_INT32)errList;
  *(OOC_INT32*)(_check_pointer(i2, 26398)) = i3;
  i3 = (OOC_INT32)pragmaHistory;
  *(OOC_INT32*)((_check_pointer(i2, 26424))+4) = i3;
  *(OOC_INT32*)((_check_pointer(i2, 26462))+28) = 0;
  *(OOC_INT32*)((_check_pointer(i2, 26480))+12) = i1;
  i3 = (OOC_INT32)ADT_Dictionary__New();
  loopExits = (ADT_Dictionary__Dictionary)i3;
  *(OOC_INT8*)((_check_pointer(i2, 26774))+8) = 0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26831))+8);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 26840)), 0);
  i2 = 0<i0;
  if (!i2) goto l9;
  i2=i1;i1=0;
l4_loop:
  i3 = (OOC_INT32)module;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 26868))+8);
  i3 = _check_pointer(i3, 26877);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 26877))*4);
  proc = (OOC_IR__Procedure)i1;
  i3 = (OOC_INT32)v;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 26907))+4);
  *(OOC_INT32*)((_check_pointer(i3, 26889))+20) = i4;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 26942))+20);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26936)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (Object__Object)i4);
  pd = (Object__Object)i2;
  *(OOC_INT32*)((_check_pointer(i3, 26962))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26983)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 26983));
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
  *(OOC_INT32*)((_check_pointer(i3, 27001))+16) = i2;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewDef();
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27076))+8);
  OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)pd;
  i2 = (OOC_INT32)knownProcs;
  OOC_IR_CheckUses__TransitiveWriteClosure((ADT_Dictionary__Dictionary)i2, (OOC_IR_CheckUses__ProcData)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27132)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 27132)));
  i1 = i;
  i1 = i1+1;
  i = i1;
  i3 = i1<i0;
  if (i3) goto l4_loop;
l9:
  i0 = (OOC_INT32)v;
  *(OOC_INT8*)((_check_pointer(i0, 27313))+8) = 1;
l10_loop:
  inWorklist = 0;
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27405))+8);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 27414)), 0);
  i1 = 0<i0;
  if (!i1) goto l24;
  i1=0;
l13_loop:
  i2 = (OOC_INT32)module;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 27444))+8);
  i2 = _check_pointer(i2, 27453);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 27453))*4);
  proc = (OOC_IR__Procedure)i1;
  i2 = (OOC_INT32)knownProcs;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27491))+4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27482)))), ADT_Dictionary__DictionaryDesc_Get)),ADT_Dictionary__DictionaryDesc_Get)((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  pd = (Object__Object)i2;
  i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27513)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 27513)), 27522))+8);
  if (!i3) goto l19;
  i3 = (OOC_INT32)v;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27568))+4);
  *(OOC_INT32*)((_check_pointer(i3, 27550))+20) = i4;
  *(OOC_INT32*)((_check_pointer(i3, 27586))+24) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27607)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 27607));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 27629))+24);
  *(OOC_UINT8*)((_check_pointer(i2, 27643))+9) = 0u;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
  *(OOC_INT32*)((_check_pointer(i3, 27678))+16) = i2;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewDef();
  def = (OOC_IR_CheckUses__Def)i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27773))+8);
  OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)v;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27796))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27796))+16);
  i4 = (OOC_INT32)def;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27805)))), OOC_IR_CheckUses__DefDesc_Merge)),OOC_IR_CheckUses__DefDesc_Merge)((OOC_IR_CheckUses__Def)i3, (OOC_IR_CheckUses__Def)i4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27843))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27860))+16);
  OOC_IR_CheckUses__CheckUses_SetWriteFlags((OOC_IR_CheckUses__ProcData)i2, (OOC_IR_CheckUses__Def)i1);
  i1 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27897))+24);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 27911))+9);
  if (!i1) goto l19;
  i1 = (OOC_INT32)pd;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27963)))), &_td_OOC_IR_CheckUses__ProcDataDesc, 27963)), 27972));
  OOC_IR_CheckUses__CheckUses_CallersToWorklist((ADT_ArrayList__ArrayList)i1);
  i1 = inWorklist;
  inWorklist = (i1+1);
l19:
  i1 = i;
  i1 = i1+1;
  i = i1;
  i2 = i1<i0;
  if (i2) goto l13_loop;
l24:
  i0 = inWorklist;
  i0 = i0==0;
  if (!i0) goto l10_loop;
l28:
  i0 = (OOC_INT32)v;
  *(OOC_INT8*)((_check_pointer(i0, 28146))+8) = 2;
  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28202))+8);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 28211)), 0);
  i1 = 0<i0;
  if (!i1) goto l46;
  i1=0;
l31_loop:
  i2 = (OOC_INT32)module;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 28239))+8);
  i2 = _check_pointer(i2, 28248);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 28248))*4);
  proc = (OOC_IR__Procedure)i1;
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28278))+4);
  *(OOC_INT32*)((_check_pointer(i2, 28260))+20) = i3;
  i3 = (OOC_INT32)OOC_IR_CheckUses__NewUnreachableDef();
  *(OOC_INT32*)((_check_pointer(i2, 28292))+16) = i3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28340))+16);
  i2 = i2!=0;
  if (!i2) goto l41;
  i2 = (OOC_INT32)OOC_IR_CheckUses__NewDef();
  def = (OOC_IR_CheckUses__Def)i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28419))+8);
  OOC_IR_CheckUses__CheckUses_CheckStatmSeq((OOC_IR_CheckUses__Def)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)def;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 28446))+4);
  i1 = !i1;
  if (i1) goto l36;
  i1=0u;
  goto l38;
l36:
  i1 = (OOC_INT32)proc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28481))+4);
  i1 = OOC_IR_CheckUses__CheckUses_CheckedFunction((OOC_SymbolTable__ProcDecl)i1);
  
l38:
  if (!i1) goto l41;
  i1 = (OOC_INT32)proc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28539))+16);
  i2 = (OOC_INT32)pragmaHistory;
  i3 = (OOC_INT32)errList;
  OOC_IR_CheckUses__WarnSym((OOC_Error__List)i3, (OOC_Config_Pragmas__History)i2, (OOC_Scanner_Builder_BasicList__Symbol)i1, 4);
l41:
  i1 = i;
  i1 = i1+1;
  i = i1;
  i2 = i1<i0;
  if (i2) goto l31_loop;
l46:
  return;
  ;
}

void OOC_OOC_IR_CheckUses_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_CheckUses__ErrorContext.baseTypes[0]);
  OOC_IR_CheckUses__checkUsesContext = (OOC_IR_CheckUses__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:IR:CheckUses", 17);
  return;
  ;
}

/* --- */
