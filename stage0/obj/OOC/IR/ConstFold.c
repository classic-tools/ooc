#include <OOC/IR/ConstFold.d>
#include <__oo2c.h>
#include <setjmp.h>

static void OOC_IR_ConstFold__InitConstFold(OOC_IR_ConstFold__ConstFold c) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)c;
  OOC_IR__InitConstFold((OOC_IR__ConstFold)i0, (OOC_IR__Builder)(OOC_INT32)0);
  return;
  ;
}

OOC_IR_ConstFold__ConstFold OOC_IR_ConstFold__NewConstFold() {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_IR_ConstFold__ConstFold.baseTypes[0]);
  OOC_IR_ConstFold__InitConstFold((OOC_IR_ConstFold__ConstFold)i0);
  return (OOC_IR_ConstFold__ConstFold)i0;
  ;
}

static OOC_SymbolTable__Type OOC_IR_ConstFold__SmallestType(Object_Boxed__Object value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)value;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1686)))), &_td_Object_BigInt__BigIntDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1758)))), &_td_Object_Boxed__LongRealDesc);
  if (i1) goto l9;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1882)))), &_td_Object_Boxed__SetDesc);
  if (i1) goto l7;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1874)))), 1874);
  goto l12;
l7:
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(10);
  return (OOC_SymbolTable__Type)i0;
  goto l12;
l9:
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(8);
  return (OOC_SymbolTable__Type)i0;
  goto l12;
l11:
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i0);
  return (OOC_SymbolTable__Type)i0;
l12:
  _failed_function(1554); return 0;
  ;
}

OOC_IR__Const OOC_IR_ConstFold__ConstFoldDesc_ValueConst(OOC_IR_ConstFold__ConstFold c, Object_Boxed__Object value, OOC_IR__Operator op) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)value;
  i1 = (OOC_INT32)OOC_IR_ConstFold__SmallestType((Object_Boxed__Object)i0);
  i2 = i1==(OOC_INT32)0;
  type = (OOC_SymbolTable__Type)i1;
  if (i2) goto l3;
  i2 = (OOC_INT32)c;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2262));
  i4 = (OOC_INT32)op;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 2282));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2262));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2270)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i0);
  return (OOC_IR__Const)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2188));
  i2 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2221));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2188));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2196)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 10, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  return (OOC_IR__Const)(OOC_INT32)0;
l4:
  _failed_function(2041); return 0;
  ;
}

OOC_IR__Const OOC_IR_ConstFold__ConstFoldDesc_BooleanConst(OOC_IR_ConstFold__ConstFold c, OOC_CHAR8 value, OOC_IR__Operator op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2426));
  i2 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2446));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2426));
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__GetType((OOC_INT32)0);
  i4 = value;
  i4 = (OOC_INT32)Object_Boxed__NewBoolean(i4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2434)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i4);
  return (OOC_IR__Const)i0;
  ;
}

OOC_CHAR8 OOC_IR_ConstFold__ConstFoldDesc_ValidEval(OOC_IR_ConstFold__ConstFold c, OOC_IR__Expression expr, Object_Boxed__Object *result) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)c;
  *(OOC_INT32*)((_check_pointer(i0, 2635))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)expr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2657)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2676))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2706));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2714))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2695))+4);
  i1 = i2!=i1;
  
l5:
  if (!i1) goto l7;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2746))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2757)))), &_td_OOC_IR__ConstDesc, 2757)), 2763))+8);
  *result = (Object_Boxed__Object)i0;
  return OOC_TRUE;
l7:
  return OOC_FALSE;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitConst(OOC_IR_ConstFold__ConstFold c, OOC_IR__Const _const) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)_const;
  *(OOC_INT32*)((_check_pointer(i0, 2896))+4) = i1;
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitVar(OOC_IR_ConstFold__ConstFold c, OOC_IR__Var car) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitPredefProc(OOC_IR_ConstFold__ConstFold c, OOC_IR__PredefProc pproc) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitProcedureRef(OOC_IR_ConstFold__ConstFold c, OOC_IR__ProcedureRef procRef) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitTypeRef(OOC_IR_ConstFold__ConstFold c, OOC_IR__TypeRef typeRef) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitModuleRef(OOC_IR_ConstFold__ConstFold c, OOC_IR__ModuleRef modRef) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitAdr(OOC_IR_ConstFold__ConstFold c, OOC_IR__Adr adr) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitLen(OOC_IR_ConstFold__ConstFold c, OOC_IR__Len len) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 length;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)len;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 3608))+8);
  i2 = (OOC_INT32)c;
  switch (i1) {
  case 16:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3659))+12);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3669)))), &_td_OOC_IR__ConstDesc, 3669)), 3675))+8);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3682)))), &_td_Object_Boxed__StringDesc);
    if (i1) goto l5;
    length = 1;
    i1=1;
    goto l10;
l5:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3725))+12);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3735)))), &_td_OOC_IR__ConstDesc, 3735)), 3741))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3754)))), &_td_Object_Boxed__StringDesc, 3754)), 3761));
    i1 = *(OOC_INT32*)(_check_pointer(i1, 3768));
    i1 = i1+1;
    length = i1;
    
    goto l10;
  case 17:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3935))+20);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3950))+4);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3935))+20);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3950))+4);
    i4 = *(OOC_INT32*)((_check_pointer(i0, 3991))+16);
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3961)))), &_td_OOC_SymbolTable__ArrayDesc, 3961)), 3967)))), OOC_SymbolTable__ArrayDesc_GetNthElementType)),OOC_SymbolTable__ArrayDesc_GetNthElementType)((OOC_SymbolTable__Array)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3961)))), &_td_OOC_SymbolTable__ArrayDesc, 3961)), i4);
    type = (OOC_SymbolTable__Type)i1;
    i1 = *(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4023)))), &_td_OOC_SymbolTable__ArrayDesc, 4023)), 4029))+44);
    length = i1;
    goto l10;
  case 18:
  case 19:
    *(OOC_INT32*)((_check_pointer(i2, 4101))+4) = (OOC_INT32)0;
    return;
    goto l10;
  default:
    _failed_case(i1, 3600);
    goto l10;
  }
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 4151));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4172));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 4151));
  i4 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i5 = length;
  i5 = (OOC_INT32)Object_BigInt__NewInt(i5);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4159)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i4, (Object_Boxed__Object)i5);
  *(OOC_INT32*)((_check_pointer(i2, 4139))+4) = i0;
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitDeref(OOC_IR_ConstFold__ConstFold c, OOC_IR__Deref deref) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitIndex(OOC_IR_ConstFold__ConstFold c, OOC_IR__Index index) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitSetMember(OOC_IR_ConstFold__ConstFold c, OOC_IR__SetMember op) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_Boxed__Object e;
  Object_Boxed__Object s;
  OOC_INT32 element;
  OOC_UINT32 set;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4749))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4736)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&e);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4778))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4765)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&s);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 4942))+4) = (OOC_INT32)0;
  goto l8;
l7:
  i2 = (OOC_INT32)e;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4818)))), &_td_Object_BigInt__BigIntDesc, 4818)), 4825)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4818)))), &_td_Object_BigInt__BigIntDesc, 4818)));
  element = i2;
  i3 = (OOC_INT32)s;
  i3 = *(OOC_UINT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4860)))), &_td_Object_Boxed__SetDesc, 4860)), 4864));
  set = i3;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4891)))), OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)),OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)((OOC_IR_ConstFold__ConstFold)i0, (_in(i2,i3)), (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 4879))+4) = i1;
l8:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitSetRange(OOC_IR_ConstFold__ConstFold c, OOC_IR__SetRange op) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_Boxed__Object l;
  Object_Boxed__Object r;
  OOC_INT32 left;
  OOC_INT32 right;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5137))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5124)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5163))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5150)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 5346))+4) = (OOC_INT32)0;
  goto l8;
l7:
  i2 = (OOC_INT32)l;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5199)))), &_td_Object_BigInt__BigIntDesc, 5199)), 5206)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5199)))), &_td_Object_BigInt__BigIntDesc, 5199)));
  left = i2;
  i3 = (OOC_INT32)r;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5244)))), &_td_Object_BigInt__BigIntDesc, 5244)), 5251)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5244)))), &_td_Object_BigInt__BigIntDesc, 5244)));
  right = i3;
  i2 = (OOC_INT32)Object_Boxed__NewSet((_bit_range(i2,i3)));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5284)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Object_Boxed__Object)i2, (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 5272))+4) = i1;
l8:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitSetOp(OOC_IR_ConstFold__ConstFold c, OOC_IR__SetOp op) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object_Boxed__Object l;
  Object_Boxed__Object r;
  OOC_UINT32 left;
  OOC_UINT32 right;
  OOC_UINT32 result;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5550))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5537)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5576))+16);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5563)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 6065))+4) = (OOC_INT32)0;
  goto l15;
l7:
  i2 = (OOC_INT32)l;
  i2 = *(OOC_UINT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5614)))), &_td_Object_Boxed__SetDesc, 5614)), 5618));
  left = i2;
  i3 = (OOC_INT32)r;
  i3 = *(OOC_UINT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5650)))), &_td_Object_Boxed__SetDesc, 5650)), 5654));
  right = i3;
  i4 = *(OOC_INT8*)((_check_pointer(i1, 5680))+8);
  switch (i4) {
  case 6:
    result = (i2|i3);
    goto l14;
  case 7:
    result = (_logical_subtr(i2,i3));
    goto l14;
  case 8:
    result = (i2&i3);
    goto l14;
  case 9:
    result = (i2^i3);
    goto l14;
  default:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5908));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5940));
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5908));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5916)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i4, 6, (OOC_Scanner_Builder_BasicList__Symbol)i3);
    *(OOC_INT32*)((_check_pointer(i0, 5957))+4) = (OOC_INT32)0;
    return;
    goto l14;
  }
l14:
  i2 = result;
  i2 = (OOC_INT32)Object_Boxed__NewSet(i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6010)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Object_Boxed__Object)i2, (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 5998))+4) = i1;
l15:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitChangeElement(OOC_IR_ConstFold__ConstFold c, OOC_IR__ChangeElement op) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitSelectField(OOC_IR_ConstFold__ConstFold c, OOC_IR__SelectField sf) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitSelectProc(OOC_IR_ConstFold__ConstFold c, OOC_IR__SelectProc sp) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitNegate(OOC_IR_ConstFold__ConstFold c, OOC_IR__Negate op) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_Boxed__Object value;
  OOC_INT16 id;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6536))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6523)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&value);
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 7097))+4) = (OOC_INT32)0;
  goto l10;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6570))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6578))+4);
  i2 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6588)))), &_td_OOC_SymbolTable__PredefTypeDesc, 6588)), 6599))+32);
  id = i2;
  switch (i2) {
  case 4 ... 7:
    i2 = (OOC_INT32)value;
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6703)))), &_td_Object_BigInt__BigIntDesc, 6703)), 6710)))), Object_BigInt__BigIntDesc_Neg)),Object_BigInt__BigIntDesc_Neg)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6703)))), &_td_Object_BigInt__BigIntDesc, 6703)));
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6678)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Object_Boxed__Object)i2, (OOC_IR__Operator)i1);
    *(OOC_INT32*)((_check_pointer(i0, 6666))+4) = i1;
    goto l10;
  case 10:
    i2 = (OOC_INT32)value;
    i2 = *(OOC_UINT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6798)))), &_td_Object_Boxed__SetDesc, 6798)), 6802));
    i2 = (OOC_INT32)Object_Boxed__NewSet((~i2));
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6760)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Object_Boxed__Object)i2, (OOC_IR__Operator)i1);
    *(OOC_INT32*)((_check_pointer(i0, 6748))+4) = i1;
    goto l10;
  case 8:
  case 9:
    *(OOC_INT32*)((_check_pointer(i0, 6963))+4) = (OOC_INT32)0;
    goto l10;
  default:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7006));
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7046));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7006));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7014)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 7, (OOC_Scanner_Builder_BasicList__Symbol)i1);
    *(OOC_INT32*)((_check_pointer(i0, 7060))+4) = (OOC_INT32)0;
    goto l10;
  }
l10:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitNewBlock(OOC_IR_ConstFold__ConstFold c, OOC_IR__NewBlock _new) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitNewObject(OOC_IR_ConstFold__ConstFold c, OOC_IR__NewObject _new) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitNot(OOC_IR_ConstFold__ConstFold c, OOC_IR__Not op) {
  register OOC_INT32 i0,i1,i2;
  Object_Boxed__Object value;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7424))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7411)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&value);
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 7523))+4) = (OOC_INT32)0;
  goto l4;
l3:
  i2 = (OOC_INT32)value;
  i2 = *(OOC_UINT8*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7490)))), &_td_Object_Boxed__BooleanDesc, 7490)), 7498));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7463)))), OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)),OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)((OOC_IR_ConstFold__ConstFold)i0, (!i2), (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 7451))+4) = i1;
l4:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitAbs(OOC_IR_ConstFold__ConstFold c, OOC_IR__Abs op) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitAsh(OOC_IR_ConstFold__ConstFold c, OOC_IR__Ash op) {
  register OOC_INT32 i0,i1,i2,i3;
  Object_Boxed__Object v;
  Object_Boxed__Object e;
  OOC_INT32 shift;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7782))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7769)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&v);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7809))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7796)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&e);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 8081))+4) = (OOC_INT32)0;
  goto l12;
l7:
  i2 = (OOC_INT32)e;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7847)))), &_td_Object_BigInt__BigIntDesc, 7847)), 7854)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7847)))), &_td_Object_BigInt__BigIntDesc, 7847)));
  i3 = i2<0;
  shift = i2;
  if (i3) goto l10;
  i3 = (OOC_INT32)v;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8024)))), &_td_Object_BigInt__BigIntDesc, 8024)), 8031)))), Object_BigInt__BigIntDesc_LShift)),Object_BigInt__BigIntDesc_LShift)((Object_BigInt__BigInt)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8024)))), &_td_Object_BigInt__BigIntDesc, 8024)), i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8001)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Object_Boxed__Object)i2, (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 7989))+4) = i1;
  goto l12;
l10:
  i3 = (OOC_INT32)v;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7938)))), &_td_Object_BigInt__BigIntDesc, 7938)), 7945)))), Object_BigInt__BigIntDesc_RShift)),Object_BigInt__BigIntDesc_RShift)((Object_BigInt__BigInt)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7938)))), &_td_Object_BigInt__BigIntDesc, 7938)), (-i2));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7915)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Object_Boxed__Object)i2, (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 7903))+4) = i1;
l12:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitCap(OOC_IR_ConstFold__ConstFold c, OOC_IR__Cap op) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Object_Boxed__Object value;
  OOC_CHAR8 str[2];

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8250))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8237)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&value);
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 8521))+4) = (OOC_INT32)0;
  goto l4;
l3:
  i2 = (OOC_INT32)value;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8314)))), &_td_Object_Boxed__StringDesc, 8314)), 8321));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8314)))), &_td_Object_Boxed__StringDesc, 8314)), 8321));
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8327)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i2, 0);
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 2, OOC_UINT8, 8279))) = (_cap(i2));
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, 2, OOC_UINT8, 8349))) = (OOC_CHAR8)'\000';
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8377));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8397));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8377));
  i4 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
  i5 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 2);
  i5 = (OOC_INT32)Object_Boxed__NewString((Object__String)i5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8385)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i4, (Object_Boxed__Object)i5);
  *(OOC_INT32*)((_check_pointer(i0, 8365))+4) = i1;
l4:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitEntier(OOC_IR_ConstFold__ConstFold c, OOC_IR__Entier op) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitOdd(OOC_IR_ConstFold__ConstFold c, OOC_IR__Odd op) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitShift(OOC_IR_ConstFold__ConstFold c, OOC_IR__Shift op) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitBinaryArith(OOC_IR_ConstFold__ConstFold c, OOC_IR__BinaryArith op) {
  register OOC_INT32 i0,i1,i2;
  Object_Boxed__Object l;
  Object_Boxed__Object r;
  Object_Boxed__Object result;
  auto Object_Boxed__Object OOC_IR_ConstFold__ConstFoldDesc_VisitBinaryArith_IntegerOp();
  auto Object_Boxed__Object OOC_IR_ConstFold__ConstFoldDesc_VisitBinaryArith_RealOp();
    
    Object_Boxed__Object OOC_IR_ConstFold__ConstFoldDesc_VisitBinaryArith_IntegerOp() {
      register OOC_INT32 i0,i1,i2,i3;
      Object_BigInt__BigInt left;
      Object_BigInt__BigInt right;

      i0 = (OOC_INT32)l;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9033)))), &_td_Object_BigInt__BigIntDesc, 9033);
      left = (Object_BigInt__BigInt)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9064)))), &_td_Object_BigInt__BigIntDesc, 9064);
      right = (Object_BigInt__BigInt)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 9089))+8);
      switch (i3) {
      case 0:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9180)))), Object_BigInt__BigIntDesc_Add)),Object_BigInt__BigIntDesc_Add)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
        return (Object_Boxed__Object)i0;
        goto l16;
      case 1:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9224)))), Object_BigInt__BigIntDesc_Sub)),Object_BigInt__BigIntDesc_Sub)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
        return (Object_Boxed__Object)i0;
        goto l16;
      case 4:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9268)))), Object_BigInt__BigIntDesc_Mul)),Object_BigInt__BigIntDesc_Mul)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
        return (Object_Boxed__Object)i0;
        goto l16;
      case 2:
        i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9316)))), Object_BigInt__BigIntDesc_Sign)),Object_BigInt__BigIntDesc_Sign)((Object_BigInt__BigInt)i1);
        i2 = i2==0;
        if (i2) goto l8;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9414)))), Object_BigInt__BigIntDesc_Div)),Object_BigInt__BigIntDesc_Div)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
        return (Object_Boxed__Object)i0;
        goto l16;
l8:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9342));
        i2 = (OOC_INT32)op;
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9377));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9342));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9350)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 8, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        goto l16;
      case 5:
        i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9471)))), Object_BigInt__BigIntDesc_Sign)),Object_BigInt__BigIntDesc_Sign)((Object_BigInt__BigInt)i1);
        i2 = i2==0;
        if (i2) goto l13;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9569)))), Object_BigInt__BigIntDesc_Mod)),Object_BigInt__BigIntDesc_Mod)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
        return (Object_Boxed__Object)i0;
        goto l16;
l13:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9497));
        i2 = (OOC_INT32)op;
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9532));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9497));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9505)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 8, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        goto l16;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9609));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9641));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9609));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9617)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        goto l16;
      }
l16:
      return (Object_Boxed__Object)(OOC_INT32)0;
      ;
    }

    
    Object_Boxed__Object OOC_IR_ConstFold__ConstFoldDesc_VisitBinaryArith_RealOp() {
      register OOC_INT32 i0,i1,i2,i3;
      Object_Boxed__LongReal left;
      Object_Boxed__LongReal right;

      i0 = (OOC_INT32)l;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9797)))), &_td_Object_Boxed__LongRealDesc, 9797);
      left = (Object_Boxed__LongReal)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9829)))), &_td_Object_Boxed__LongRealDesc, 9829);
      right = (Object_Boxed__LongReal)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 9856))+8);
      switch (i3) {
      case 0:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9899)))), Object_Boxed__LongRealDesc_Add)),Object_Boxed__LongRealDesc_Add)((Object_Boxed__LongReal)i0, (Object_Boxed__LongReal)i1);
        return (Object_Boxed__Object)i0;
        goto l11;
      case 1:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9943)))), Object_Boxed__LongRealDesc_Sub)),Object_Boxed__LongRealDesc_Sub)((Object_Boxed__LongReal)i0, (Object_Boxed__LongReal)i1);
        return (Object_Boxed__Object)i0;
        goto l11;
      case 4:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9987)))), Object_Boxed__LongRealDesc_Mul)),Object_Boxed__LongRealDesc_Mul)((Object_Boxed__LongReal)i0, (Object_Boxed__LongReal)i1);
        return (Object_Boxed__Object)i0;
        goto l11;
      case 3:
        i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10035)))), Object_Boxed__LongRealDesc_Sign)),Object_Boxed__LongRealDesc_Sign)((Object_Boxed__LongReal)i1);
        i2 = i2==0;
        if (i2) goto l8;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10133)))), Object_Boxed__LongRealDesc_Div)),Object_Boxed__LongRealDesc_Div)((Object_Boxed__LongReal)i0, (Object_Boxed__LongReal)i1);
        return (Object_Boxed__Object)i0;
        goto l11;
l8:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10061));
        i2 = (OOC_INT32)op;
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10096));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10061));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10069)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 8, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        goto l11;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10173));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10205));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10173));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10181)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        goto l11;
      }
l11:
      return (Object_Boxed__Object)(OOC_INT32)0;
      ;
    }


  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10341))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10328)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10367))+16);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10354)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (!i0) goto l15;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10435))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10440))+4);
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10450)))), &_td_OOC_SymbolTable__PredefTypeDesc, 10450)), 10461))+32);
  switch (i0) {
  case 4:
  case 5:
  case 6:
    i0 = (OOC_INT32)OOC_IR_ConstFold__ConstFoldDesc_VisitBinaryArith_IntegerOp();
    result = (Object_Boxed__Object)i0;
    goto l11;
  case 8:
  case 9:
    result = (Object_Boxed__Object)(OOC_INT32)0;
    goto l11;
  default:
    _failed_case(i0, 10428);
    goto l11;
  }
l11:
  i0 = (OOC_INT32)result;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l15;
  i1 = (OOC_INT32)c;
  i2 = (OOC_INT32)op;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10738)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i1, (Object_Boxed__Object)i0, (OOC_IR__Operator)i2);
  *(OOC_INT32*)((_check_pointer(i1, 10726))+4) = i0;
  return;
l15:
  i0 = (OOC_INT32)c;
  *(OOC_INT32*)((_check_pointer(i0, 10795))+4) = (OOC_INT32)0;
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitBooleanOp(OOC_IR_ConstFold__ConstFold c, OOC_IR__BooleanOp op) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Object_Boxed__Object l;
  Object_Boxed__Object r;
  OOC_CHAR8 left;
  OOC_CHAR8 right;
  OOC_CHAR8 result;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10991))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10978)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11017))+16);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11004)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 11291))+4) = (OOC_INT32)0;
  goto l21;
l7:
  i2 = (OOC_INT32)l;
  i2 = *(OOC_UINT8*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11055)))), &_td_Object_Boxed__BooleanDesc, 11055)), 11063));
  left = i2;
  i3 = (OOC_INT32)r;
  i3 = *(OOC_UINT8*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11094)))), &_td_Object_Boxed__BooleanDesc, 11094)), 11102));
  right = i3;
  i4 = *(OOC_INT8*)((_check_pointer(i1, 11123))+8);
  switch (i4) {
  case 20:
    if (i2) goto l12;
    i2=OOC_FALSE;
    goto l13;
l12:
    i2=i3;
l13:
    result = i2;
    goto l20;
  case 21:
    if (i2) goto l17;
    i2=i3;
    goto l18;
l17:
    i2=OOC_TRUE;
l18:
    result = i2;
    goto l20;
  default:
    _failed_case(i4, 11116);
    goto l20;
  }
l20:
  i2 = result;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11248)))), OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)),OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)((OOC_IR_ConstFold__ConstFold)i0, i2, (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 11236))+4) = i1;
l21:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitConcat(OOC_IR_ConstFold__ConstFold c, OOC_IR__Concat op) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Object__String s;
  OOC_INT32 i;

  i0 = (OOC_INT32)Object__emptyString;
  s = (Object__String)i0;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11492))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11500)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  i4 = (OOC_INT32)c;
  if (!i3) goto l13;
  i3=i0;i0=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11520))+8);
  i5 = _check_pointer(i5, 11528);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i0, i6, OOC_UINT32, 11528))*4);
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11532)))), &_td_OOC_IR__ConstDesc);
  if (i5) goto l7;
  *(OOC_INT32*)((_check_pointer(i4, 11636))+4) = (OOC_INT32)0;
  return;
  
  goto l8;
l7:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11567))+8);
  i5 = _check_pointer(i5, 11575);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i0, i6, OOC_UINT32, 11575))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11582)))), &_td_OOC_IR__ConstDesc, 11582)), 11588))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11601)))), &_td_Object_Boxed__StringDesc, 11601)), 11608));
  i3 = (OOC_INT32)Object__Concat2((void*)i3,(void*)i5);
  s = (Object__String)i3;
  
l8:
  i0 = i0+1;
  i5 = i0<=i2;
  i = i0;
  if (i5) goto l4_loop;
l12:
  i0=i3;
l13:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 11705));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11725));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11733))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 11705));
  i0 = (OOC_INT32)Object_Boxed__NewString((Object__String)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11713)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i5, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i0);
  *(OOC_INT32*)((_check_pointer(i4, 11693))+4) = i0;
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitCompare(OOC_IR_ConstFold__ConstFold c, OOC_IR__Compare op) {
  register OOC_INT32 i0,i1,i2;
  Object_Boxed__Object l;
  Object_Boxed__Object r;
  Object_Boxed__Boolean result;
  auto Object_Boxed__Boolean OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_StringOp();
  auto Object_Boxed__Boolean OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_IntegerOp();
  auto Object_Boxed__Boolean OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_RealOp();
  auto Object_Boxed__Boolean OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_CharOp();
  auto Object_Boxed__Boolean OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_BooleanOp();
    
    Object_Boxed__Boolean OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_StringOp() {
      register OOC_INT32 i0,i1,i2,i3;
      Object_Boxed__String left;
      Object_Boxed__String right;
      OOC_CHAR8 result;

      i0 = (OOC_INT32)l;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12051)))), &_td_Object_Boxed__StringDesc, 12051);
      left = (Object_Boxed__String)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12081)))), &_td_Object_Boxed__StringDesc, 12081);
      right = (Object_Boxed__String)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 12101))+8);
      switch (i3) {
      case 10:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12150)))), Object_Boxed__StringDesc_Cmp)),Object_Boxed__StringDesc_Cmp)((Object_Boxed__String)i0, (Object__Object)i1);
        result = (i0==0);
        goto l9;
      case 11:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12204)))), Object_Boxed__StringDesc_Cmp)),Object_Boxed__StringDesc_Cmp)((Object_Boxed__String)i0, (Object__Object)i1);
        result = (i0!=0);
        goto l9;
      case 12:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12258)))), Object_Boxed__StringDesc_Cmp)),Object_Boxed__StringDesc_Cmp)((Object_Boxed__String)i0, (Object__Object)i1);
        result = (i0<0);
        goto l9;
      case 13:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12312)))), Object_Boxed__StringDesc_Cmp)),Object_Boxed__StringDesc_Cmp)((Object_Boxed__String)i0, (Object__Object)i1);
        result = (i0<=0);
        goto l9;
      case 14:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12367)))), Object_Boxed__StringDesc_Cmp)),Object_Boxed__StringDesc_Cmp)((Object_Boxed__String)i0, (Object__Object)i1);
        result = (i0>0);
        goto l9;
      case 15:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12421)))), Object_Boxed__StringDesc_Cmp)),Object_Boxed__StringDesc_Cmp)((Object_Boxed__String)i0, (Object__Object)i1);
        result = (i0>=0);
        goto l9;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12455));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12487));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12455));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12463)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        return (Object_Boxed__Boolean)(OOC_INT32)0;
        goto l9;
      }
l9:
      i0 = result;
      i0 = (OOC_INT32)Object_Boxed__NewBoolean(i0);
      return (Object_Boxed__Boolean)i0;
      ;
    }

    
    Object_Boxed__Boolean OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_IntegerOp() {
      register OOC_INT32 i0,i1,i2,i3;
      Object_BigInt__BigInt left;
      Object_BigInt__BigInt right;
      OOC_CHAR8 result;

      i0 = (OOC_INT32)l;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12697)))), &_td_Object_BigInt__BigIntDesc, 12697);
      left = (Object_BigInt__BigInt)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12729)))), &_td_Object_BigInt__BigIntDesc, 12729);
      right = (Object_BigInt__BigInt)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 12754))+8);
      switch (i3) {
      case 10:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12803)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i1);
        result = (i0==0);
        goto l9;
      case 11:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12857)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i1);
        result = (i0!=0);
        goto l9;
      case 12:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12911)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i1);
        result = (i0<0);
        goto l9;
      case 13:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12965)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i1);
        result = (i0<=0);
        goto l9;
      case 14:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13020)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i1);
        result = (i0>0);
        goto l9;
      case 15:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13074)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i1);
        result = (i0>=0);
        goto l9;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13108));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13140));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13108));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13116)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        return (Object_Boxed__Boolean)(OOC_INT32)0;
        goto l9;
      }
l9:
      i0 = result;
      i0 = (OOC_INT32)Object_Boxed__NewBoolean(i0);
      return (Object_Boxed__Boolean)i0;
      ;
    }

    
    Object_Boxed__Boolean OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_RealOp() {
      register OOC_INT32 i0,i1,i2,i3;
      Object_Boxed__LongReal left;
      Object_Boxed__LongReal right;
      OOC_CHAR8 result;

      i0 = (OOC_INT32)l;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13348)))), &_td_Object_Boxed__LongRealDesc, 13348);
      left = (Object_Boxed__LongReal)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13381)))), &_td_Object_Boxed__LongRealDesc, 13381);
      right = (Object_Boxed__LongReal)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 13408))+8);
      switch (i3) {
      case 10:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13457)))), Object_Boxed__LongRealDesc_Cmp)),Object_Boxed__LongRealDesc_Cmp)((Object_Boxed__LongReal)i0, (Object__Object)i1);
        result = (i0==0);
        goto l9;
      case 11:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13511)))), Object_Boxed__LongRealDesc_Cmp)),Object_Boxed__LongRealDesc_Cmp)((Object_Boxed__LongReal)i0, (Object__Object)i1);
        result = (i0!=0);
        goto l9;
      case 12:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13565)))), Object_Boxed__LongRealDesc_Cmp)),Object_Boxed__LongRealDesc_Cmp)((Object_Boxed__LongReal)i0, (Object__Object)i1);
        result = (i0<0);
        goto l9;
      case 13:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13619)))), Object_Boxed__LongRealDesc_Cmp)),Object_Boxed__LongRealDesc_Cmp)((Object_Boxed__LongReal)i0, (Object__Object)i1);
        result = (i0<=0);
        goto l9;
      case 14:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13674)))), Object_Boxed__LongRealDesc_Cmp)),Object_Boxed__LongRealDesc_Cmp)((Object_Boxed__LongReal)i0, (Object__Object)i1);
        result = (i0>0);
        goto l9;
      case 15:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13728)))), Object_Boxed__LongRealDesc_Cmp)),Object_Boxed__LongRealDesc_Cmp)((Object_Boxed__LongReal)i0, (Object__Object)i1);
        result = (i0>=0);
        goto l9;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13762));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13794));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13762));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13770)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        return (Object_Boxed__Boolean)(OOC_INT32)0;
        goto l9;
      }
l9:
      i0 = result;
      i0 = (OOC_INT32)Object_Boxed__NewBoolean(i0);
      return (Object_Boxed__Boolean)i0;
      ;
    }

    
    Object_Boxed__Boolean OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_CharOp() {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_CHAR32 left;
      OOC_CHAR32 right;
      OOC_CHAR8 result;

      i0 = (OOC_INT32)l;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13993)))), &_td_Object_Boxed__StringDesc, 13993)), 14000));
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13993)))), &_td_Object_Boxed__StringDesc, 13993)), 14000));
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14006)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, 0);
      left = i0;
      i1 = (OOC_INT32)r;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14039)))), &_td_Object_Boxed__StringDesc, 14039)), 14046));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14039)))), &_td_Object_Boxed__StringDesc, 14039)), 14046));
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14052)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, 0);
      right = i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 14080))+8);
      switch (i3) {
      case 10:
        result = (i0==i1);
        goto l9;
      case 11:
        result = (i0!=i1);
        goto l9;
      case 12:
        result = (i0<i1);
        goto l9;
      case 13:
        result = (i0<=i1);
        goto l9;
      case 14:
        result = (i0>i1);
        goto l9;
      case 15:
        result = (i0>=i1);
        goto l9;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14392));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14424));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14392));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14400)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        return (Object_Boxed__Boolean)(OOC_INT32)0;
        goto l9;
      }
l9:
      i0 = result;
      i0 = (OOC_INT32)Object_Boxed__NewBoolean(i0);
      return (Object_Boxed__Boolean)i0;
      ;
    }

    
    Object_Boxed__Boolean OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_BooleanOp() {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_CHAR8 left;
      OOC_CHAR8 right;
      OOC_CHAR8 result;

      i0 = (OOC_INT32)l;
      i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14625)))), &_td_Object_Boxed__BooleanDesc, 14625)), 14633));
      left = i0;
      i1 = (OOC_INT32)r;
      i1 = *(OOC_UINT8*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14662)))), &_td_Object_Boxed__BooleanDesc, 14662)), 14670));
      right = i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 14690))+8);
      switch (i3) {
      case 10:
        result = (i0==i1);
        goto l5;
      case 11:
        result = (i0!=i1);
        goto l5;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14812));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14844));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14812));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14820)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        return (Object_Boxed__Boolean)(OOC_INT32)0;
        goto l5;
      }
l5:
      i0 = result;
      i0 = (OOC_INT32)Object_Boxed__NewBoolean(i0);
      return (Object_Boxed__Boolean)i0;
      ;
    }


  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14956))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14943)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14982))+16);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14969)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 15640))+4) = (OOC_INT32)0;
  goto l20;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15011))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15016))+4);
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15026)))), &_td_OOC_SymbolTable__PredefTypeDesc, 15026)), 15037))+32);
  switch (i0) {
  case 4:
  case 5:
  case 6:
    i0 = (OOC_INT32)OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_IntegerOp();
    result = (Object_Boxed__Boolean)i0;
    goto l15;
  case 8:
  case 9:
    result = (Object_Boxed__Boolean)(OOC_INT32)0;
    goto l15;
  case 1:
    i0 = (OOC_INT32)OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_CharOp();
    result = (Object_Boxed__Boolean)i0;
    goto l15;
  case 13:
  case 14:
  case 15:
    i0 = (OOC_INT32)OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_StringOp();
    result = (Object_Boxed__Boolean)i0;
    goto l15;
  case 0:
    i0 = (OOC_INT32)OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_BooleanOp();
    result = (Object_Boxed__Boolean)i0;
    goto l15;
  default:
    _failed_case(i0, 15004);
    goto l15;
  }
l15:
  i0 = (OOC_INT32)result;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l18;
  i1 = (OOC_INT32)c;
  i0 = *(OOC_UINT8*)(_check_pointer(i0, 15600));
  i2 = (OOC_INT32)op;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15580)))), OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)),OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)((OOC_IR_ConstFold__ConstFold)i1, i0, (OOC_IR__Operator)i2);
  *(OOC_INT32*)((_check_pointer(i1, 15568))+4) = i0;
  goto l20;
l18:
  i0 = (OOC_INT32)c;
  *(OOC_INT32*)((_check_pointer(i0, 15533))+4) = (OOC_INT32)0;
l20:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitTypeCast(OOC_IR_ConstFold__ConstFold c, OOC_IR__TypeCast op) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitTypeConv(OOC_IR_ConstFold__ConstFold c, OOC_IR__TypeConv op) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Object_Boxed__Object value;
  Object_Boxed__String str;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16314))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16301)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&value);
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 18103))+4) = (OOC_INT32)0;
  goto l52;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16362))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  if (i2) goto l6;
  i2=OOC_FALSE;
  goto l8;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16398))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16404))+4);
  i2 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i2);
  
l8:
  if (i2) goto l50;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16666))+4);
  i2 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i2);
  if (i2) goto l12;
  i2=OOC_FALSE;
  goto l14;
l12:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16708))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16714))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  
l14:
  if (i2) goto l43;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17221))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17226))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  if (i2) goto l18;
  i2=OOC_FALSE;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17251))+4);
  i2 = OOC_SymbolTable_TypeRules__IsRealType((OOC_SymbolTable__Type)i2);
  
l20:
  if (i2) goto l41;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17479))+4);
  i2 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i2);
  if (i2) goto l24;
  i2=OOC_FALSE;
  goto l26;
l24:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17504))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17509))+4);
  i2 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i2);
  
l26:
  if (i2) goto l52;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17626))+4);
  i2 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i2);
  if (i2) goto l30;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18034));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18062))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18054));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18034));
  i5 = (OOC_INT32)value;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18042)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i5);
  *(OOC_INT32*)((_check_pointer(i0, 18022))+4) = i1;
  goto l52;
l30:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17772))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17778))+4);
  i2 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i2);
  if (i2) goto l37;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17808))+8);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17815)))), &_td_OOC_IR__ConstDesc);
  if (i2) goto l35;
  i2=OOC_FALSE;
  goto l38;
l35:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17847))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17853))+4);
  i2 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i2);
  
  goto l38;
l37:
  i2=OOC_TRUE;
l38:
  _assert(i2, 127, 17744);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17880))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17890)))), &_td_OOC_IR__ConstDesc, 17890)), 17896))+8);
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17910)))), &_td_Object_Boxed__StringDesc, 17910);
  str = (Object_Boxed__String)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17941));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17964))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17979))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 17970));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17941));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17950)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i5, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  *(OOC_INT32*)((_check_pointer(i0, 17928))+4) = i1;
  goto l52;
l41:
  i2 = (OOC_INT32)value;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17357)))), &_td_Object_BigInt__BigIntDesc, 17357)), 17364)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17357)))), &_td_Object_BigInt__BigIntDesc, 17357)));
  i2 = (OOC_INT32)Object_Boxed__NewLongReal(((OOC_REAL64)i2));
  value = (Object_Boxed__Object)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17400));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17428))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17420));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17400));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17408)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i5, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i4, (Object_Boxed__Object)i2);
  *(OOC_INT32*)((_check_pointer(i0, 17388))+4) = i1;
  goto l52;
l43:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16819))+4);
  i2 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16830)))), &_td_OOC_SymbolTable__PredefTypeDesc, 16830)), 16841))+32);
  switch (i2) {
  case 1:
    i2 = (OOC_INT32)value;
    i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16946)))), &_td_Object_BigInt__BigIntDesc, 16946)), 16953)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16946)))), &_td_Object_BigInt__BigIntDesc, 16946)));
    i2 = (OOC_INT32)Object__NewLatin1Char(i2);
    i2 = (OOC_INT32)Object_Boxed__NewString((Object__String)i2);
    value = (Object_Boxed__Object)i2;
    goto l48;
  case 2:
    i2 = (OOC_INT32)value;
    i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17074)))), &_td_Object_BigInt__BigIntDesc, 17074)), 17081)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17074)))), &_td_Object_BigInt__BigIntDesc, 17074)));
    i2 = (OOC_INT32)Object__NewUCS2Char(i2);
    i2 = (OOC_INT32)Object_Boxed__NewString((Object__String)i2);
    value = (Object_Boxed__Object)i2;
    goto l48;
  default:
    _failed_case(i2, 16812);
    goto l48;
  }
l48:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17133));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17165))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17156));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17133));
  i5 = (OOC_INT32)value;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17142)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i5);
  *(OOC_INT32*)((_check_pointer(i0, 17121))+4) = i1;
  goto l52;
l50:
  i2 = (OOC_INT32)value;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16532)))), &_td_Object_Boxed__StringDesc, 16532)), 16539));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16532)))), &_td_Object_Boxed__StringDesc, 16532)), 16539));
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16545)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i2, 0);
  i2 = (OOC_INT32)Object_BigInt__NewInt(i2);
  value = (Object_Boxed__Object)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16580));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16612))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16603));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16580));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16589)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i5, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i4, (Object_Boxed__Object)i2);
  *(OOC_INT32*)((_check_pointer(i0, 16568))+4) = i1;
l52:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitTypeGuard(OOC_IR_ConstFold__ConstFold c, OOC_IR__TypeGuard op) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitTypeTag(OOC_IR_ConstFold__ConstFold c, OOC_IR__TypeTag op) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitTypeTest(OOC_IR_ConstFold__ConstFold c, OOC_IR__TypeTest op) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitCall(OOC_IR_ConstFold__ConstFold c, OOC_IR__Call call) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitAssert(OOC_IR_ConstFold__ConstFold c, OOC_IR__Assert assert) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitReturn(OOC_IR_ConstFold__ConstFold c, OOC_IR__Return _return) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitAssignment(OOC_IR_ConstFold__ConstFold c, OOC_IR__Assignment assignment) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitAssignOp(OOC_IR_ConstFold__ConstFold c, OOC_IR__AssignOp assignOp) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitExit(OOC_IR_ConstFold__ConstFold c, OOC_IR__Exit exit) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitForStatm(OOC_IR_ConstFold__ConstFold c, OOC_IR__ForStatm forStatm) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitIfStatm(OOC_IR_ConstFold__ConstFold c, OOC_IR__IfStatm ifStatm) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitCase(OOC_IR_ConstFold__ConstFold c, OOC_IR__Case _case) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitCaseStatm(OOC_IR_ConstFold__ConstFold c, OOC_IR__CaseStatm caseStatm) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitLoopStatm(OOC_IR_ConstFold__ConstFold c, OOC_IR__LoopStatm loopStatm) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitMoveBlock(OOC_IR_ConstFold__ConstFold c, OOC_IR__MoveBlock move) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitRaise(OOC_IR_ConstFold__ConstFold c, OOC_IR__Raise raise) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitRepeatStatm(OOC_IR_ConstFold__ConstFold c, OOC_IR__RepeatStatm repeatStatm) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitCatchClause(OOC_IR_ConstFold__ConstFold c, OOC_IR__CatchClause _catch) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitTryStatm(OOC_IR_ConstFold__ConstFold c, OOC_IR__TryStatm tryStatm) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitWhileStatm(OOC_IR_ConstFold__ConstFold c, OOC_IR__WhileStatm whileStatm) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitWithStatm(OOC_IR_ConstFold__ConstFold c, OOC_IR__WithStatm withStatm) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitCopy(OOC_IR_ConstFold__ConstFold c, OOC_IR__Copy cp) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitCopyParameter(OOC_IR_ConstFold__ConstFold c, OOC_IR__CopyParameter cp) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitCopyString(OOC_IR_ConstFold__ConstFold c, OOC_IR__CopyString cp) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitProcedure(OOC_IR_ConstFold__ConstFold c, OOC_IR__Procedure procedure) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitModule(OOC_IR_ConstFold__ConstFold c, OOC_IR__Module module) {

  return;
  ;
}

void OOC_OOC_IR_ConstFold_init(void) {

  return;
  ;
}

/* --- */
