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
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1692)))), &_td_Object_BigInt__BigIntDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1764)))), &_td_Object_Boxed__LongRealDesc);
  if (i1) goto l9;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1888)))), &_td_Object_Boxed__SetDesc);
  if (i1) goto l7;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1880)))), 1880);
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
  _failed_function(1560); return 0;
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
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2268));
  i4 = (OOC_INT32)op;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 2288));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2268));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2276)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i0);
  return (OOC_IR__Const)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2194));
  i2 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2227));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2194));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2202)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 10, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  return (OOC_IR__Const)(OOC_INT32)0;
l4:
  _failed_function(2047); return 0;
  ;
}

OOC_IR__Const OOC_IR_ConstFold__ConstFoldDesc_BooleanConst(OOC_IR_ConstFold__ConstFold c, OOC_CHAR8 value, OOC_IR__Operator op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2432));
  i2 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2452));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2432));
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__GetType((OOC_INT32)0);
  i4 = value;
  i4 = (OOC_INT32)Object_Boxed__NewBoolean(i4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2440)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i4);
  return (OOC_IR__Const)i0;
  ;
}

OOC_CHAR8 OOC_IR_ConstFold__ConstFoldDesc_ValidEval(OOC_IR_ConstFold__ConstFold c, OOC_IR__Expression expr, Object_Boxed__Object *result) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)c;
  *(OOC_INT32*)((_check_pointer(i0, 2641))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)expr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2663)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2682))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2712));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2720))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2701))+4);
  i1 = i2!=i1;
  
l5:
  if (!i1) goto l7;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2752))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2763)))), &_td_OOC_IR__ConstDesc, 2763)), 2769))+8);
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
  *(OOC_INT32*)((_check_pointer(i0, 2902))+4) = i1;
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 3614))+8);
  i2 = (OOC_INT32)c;
  switch (i1) {
  case 16:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3665))+12);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3675)))), &_td_OOC_IR__ConstDesc, 3675)), 3681))+8);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3688)))), &_td_Object_Boxed__StringDesc);
    if (i1) goto l5;
    length = 1;
    i1=1;
    goto l10;
l5:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3731))+12);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3741)))), &_td_OOC_IR__ConstDesc, 3741)), 3747))+8);
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3760)))), &_td_Object_Boxed__StringDesc, 3760)), 3767));
    i1 = *(OOC_INT32*)(_check_pointer(i1, 3774));
    i1 = i1+1;
    length = i1;
    
    goto l10;
  case 17:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3941))+20);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3956))+4);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3941))+20);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3956))+4);
    i4 = *(OOC_INT32*)((_check_pointer(i0, 3997))+16);
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3967)))), &_td_OOC_SymbolTable__ArrayDesc, 3967)), 3973)))), OOC_SymbolTable__ArrayDesc_GetNthElementType)),OOC_SymbolTable__ArrayDesc_GetNthElementType)((OOC_SymbolTable__Array)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3967)))), &_td_OOC_SymbolTable__ArrayDesc, 3967)), i4);
    type = (OOC_SymbolTable__Type)i1;
    i1 = *(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4029)))), &_td_OOC_SymbolTable__ArrayDesc, 4029)), 4035))+44);
    length = i1;
    goto l10;
  case 18:
  case 19:
    *(OOC_INT32*)((_check_pointer(i2, 4107))+4) = (OOC_INT32)0;
    return;
    goto l10;
  default:
    _failed_case(i1, 3606);
    goto l10;
  }
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 4157));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4178));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 4157));
  i4 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(6);
  i5 = length;
  i5 = (OOC_INT32)Object_BigInt__NewInt(i5);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4165)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i4, (Object_Boxed__Object)i5);
  *(OOC_INT32*)((_check_pointer(i2, 4145))+4) = i0;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4755))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4742)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&e);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4784))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4771)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&s);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 4948))+4) = (OOC_INT32)0;
  goto l8;
l7:
  i2 = (OOC_INT32)e;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4824)))), &_td_Object_BigInt__BigIntDesc, 4824)), 4831)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4824)))), &_td_Object_BigInt__BigIntDesc, 4824)));
  element = i2;
  i3 = (OOC_INT32)s;
  i3 = *(OOC_UINT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4866)))), &_td_Object_Boxed__SetDesc, 4866)), 4870));
  set = i3;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4897)))), OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)),OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)((OOC_IR_ConstFold__ConstFold)i0, (_in(i2,i3)), (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 4885))+4) = i1;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5143))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5130)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5169))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5156)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 5352))+4) = (OOC_INT32)0;
  goto l8;
l7:
  i2 = (OOC_INT32)l;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5205)))), &_td_Object_BigInt__BigIntDesc, 5205)), 5212)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5205)))), &_td_Object_BigInt__BigIntDesc, 5205)));
  left = i2;
  i3 = (OOC_INT32)r;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5250)))), &_td_Object_BigInt__BigIntDesc, 5250)), 5257)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5250)))), &_td_Object_BigInt__BigIntDesc, 5250)));
  right = i3;
  i2 = (OOC_INT32)Object_Boxed__NewSet((_bit_range(i2,i3)));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5290)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Object_Boxed__Object)i2, (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 5278))+4) = i1;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5556))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5543)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5582))+16);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5569)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 6071))+4) = (OOC_INT32)0;
  goto l15;
l7:
  i2 = (OOC_INT32)l;
  i2 = *(OOC_UINT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5620)))), &_td_Object_Boxed__SetDesc, 5620)), 5624));
  left = i2;
  i3 = (OOC_INT32)r;
  i3 = *(OOC_UINT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5656)))), &_td_Object_Boxed__SetDesc, 5656)), 5660));
  right = i3;
  i4 = *(OOC_INT8*)((_check_pointer(i1, 5686))+8);
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
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5914));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5946));
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5914));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5922)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i4, 6, (OOC_Scanner_Builder_BasicList__Symbol)i3);
    *(OOC_INT32*)((_check_pointer(i0, 5963))+4) = (OOC_INT32)0;
    return;
    goto l14;
  }
l14:
  i2 = result;
  i2 = (OOC_INT32)Object_Boxed__NewSet(i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6016)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Object_Boxed__Object)i2, (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 6004))+4) = i1;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6542))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6529)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&value);
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 7103))+4) = (OOC_INT32)0;
  goto l10;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6576))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6584))+4);
  i2 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6594)))), &_td_OOC_SymbolTable__PredefTypeDesc, 6594)), 6605))+32);
  id = i2;
  switch (i2) {
  case 4 ... 7:
    i2 = (OOC_INT32)value;
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6709)))), &_td_Object_BigInt__BigIntDesc, 6709)), 6716)))), Object_BigInt__BigIntDesc_Neg)),Object_BigInt__BigIntDesc_Neg)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6709)))), &_td_Object_BigInt__BigIntDesc, 6709)));
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6684)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Object_Boxed__Object)i2, (OOC_IR__Operator)i1);
    *(OOC_INT32*)((_check_pointer(i0, 6672))+4) = i1;
    goto l10;
  case 10:
    i2 = (OOC_INT32)value;
    i2 = *(OOC_UINT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6804)))), &_td_Object_Boxed__SetDesc, 6804)), 6808));
    i2 = (OOC_INT32)Object_Boxed__NewSet((~i2));
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6766)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Object_Boxed__Object)i2, (OOC_IR__Operator)i1);
    *(OOC_INT32*)((_check_pointer(i0, 6754))+4) = i1;
    goto l10;
  case 8:
  case 9:
    *(OOC_INT32*)((_check_pointer(i0, 6969))+4) = (OOC_INT32)0;
    goto l10;
  default:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7012));
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7052));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7012));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7020)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 7, (OOC_Scanner_Builder_BasicList__Symbol)i1);
    *(OOC_INT32*)((_check_pointer(i0, 7066))+4) = (OOC_INT32)0;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7430))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7417)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&value);
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 7529))+4) = (OOC_INT32)0;
  goto l4;
l3:
  i2 = (OOC_INT32)value;
  i2 = *(OOC_UINT8*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7496)))), &_td_Object_Boxed__BooleanDesc, 7496)), 7504));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7469)))), OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)),OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)((OOC_IR_ConstFold__ConstFold)i0, (!i2), (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 7457))+4) = i1;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7788))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7775)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&v);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7815))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7802)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&e);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 8087))+4) = (OOC_INT32)0;
  goto l12;
l7:
  i2 = (OOC_INT32)e;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7853)))), &_td_Object_BigInt__BigIntDesc, 7853)), 7860)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7853)))), &_td_Object_BigInt__BigIntDesc, 7853)));
  i3 = i2<0;
  shift = i2;
  if (i3) goto l10;
  i3 = (OOC_INT32)v;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8030)))), &_td_Object_BigInt__BigIntDesc, 8030)), 8037)))), Object_BigInt__BigIntDesc_LShift)),Object_BigInt__BigIntDesc_LShift)((Object_BigInt__BigInt)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8030)))), &_td_Object_BigInt__BigIntDesc, 8030)), i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8007)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Object_Boxed__Object)i2, (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 7995))+4) = i1;
  goto l12;
l10:
  i3 = (OOC_INT32)v;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7944)))), &_td_Object_BigInt__BigIntDesc, 7944)), 7951)))), Object_BigInt__BigIntDesc_RShift)),Object_BigInt__BigIntDesc_RShift)((Object_BigInt__BigInt)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7944)))), &_td_Object_BigInt__BigIntDesc, 7944)), (-i2));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7921)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Object_Boxed__Object)i2, (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 7909))+4) = i1;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8256))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8243)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&value);
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 8527))+4) = (OOC_INT32)0;
  goto l4;
l3:
  i2 = (OOC_INT32)value;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8320)))), &_td_Object_Boxed__StringDesc, 8320)), 8327));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8320)))), &_td_Object_Boxed__StringDesc, 8320)), 8327));
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 8333)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i2, 0);
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 2, OOC_UINT8, 8285))) = (_cap(i2));
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, 2, OOC_UINT8, 8355))) = (OOC_CHAR8)'\000';
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8383));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8403));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8383));
  i4 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
  i5 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 2);
  i5 = (OOC_INT32)Object_Boxed__NewString((Object__String)i5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8391)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i4, (Object_Boxed__Object)i5);
  *(OOC_INT32*)((_check_pointer(i0, 8371))+4) = i1;
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
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9039)))), &_td_Object_BigInt__BigIntDesc, 9039);
      left = (Object_BigInt__BigInt)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9070)))), &_td_Object_BigInt__BigIntDesc, 9070);
      right = (Object_BigInt__BigInt)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 9095))+8);
      switch (i3) {
      case 0:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9186)))), Object_BigInt__BigIntDesc_Add)),Object_BigInt__BigIntDesc_Add)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
        return (Object_Boxed__Object)i0;
        goto l16;
      case 1:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9230)))), Object_BigInt__BigIntDesc_Sub)),Object_BigInt__BigIntDesc_Sub)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
        return (Object_Boxed__Object)i0;
        goto l16;
      case 4:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9274)))), Object_BigInt__BigIntDesc_Mul)),Object_BigInt__BigIntDesc_Mul)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
        return (Object_Boxed__Object)i0;
        goto l16;
      case 2:
        i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9322)))), Object_BigInt__BigIntDesc_Sign)),Object_BigInt__BigIntDesc_Sign)((Object_BigInt__BigInt)i1);
        i2 = i2==0;
        if (i2) goto l8;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9420)))), Object_BigInt__BigIntDesc_Div)),Object_BigInt__BigIntDesc_Div)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
        return (Object_Boxed__Object)i0;
        goto l16;
l8:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9348));
        i2 = (OOC_INT32)op;
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9383));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9348));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9356)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 8, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        goto l16;
      case 5:
        i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9477)))), Object_BigInt__BigIntDesc_Sign)),Object_BigInt__BigIntDesc_Sign)((Object_BigInt__BigInt)i1);
        i2 = i2==0;
        if (i2) goto l13;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9575)))), Object_BigInt__BigIntDesc_Mod)),Object_BigInt__BigIntDesc_Mod)((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i1);
        return (Object_Boxed__Object)i0;
        goto l16;
l13:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9503));
        i2 = (OOC_INT32)op;
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9538));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9503));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9511)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 8, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        goto l16;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9615));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9647));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9615));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9623)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
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
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9803)))), &_td_Object_Boxed__LongRealDesc, 9803);
      left = (Object_Boxed__LongReal)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9835)))), &_td_Object_Boxed__LongRealDesc, 9835);
      right = (Object_Boxed__LongReal)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 9862))+8);
      switch (i3) {
      case 0:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9905)))), Object_Boxed__LongRealDesc_Add)),Object_Boxed__LongRealDesc_Add)((Object_Boxed__LongReal)i0, (Object_Boxed__LongReal)i1);
        return (Object_Boxed__Object)i0;
        goto l11;
      case 1:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9949)))), Object_Boxed__LongRealDesc_Sub)),Object_Boxed__LongRealDesc_Sub)((Object_Boxed__LongReal)i0, (Object_Boxed__LongReal)i1);
        return (Object_Boxed__Object)i0;
        goto l11;
      case 4:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9993)))), Object_Boxed__LongRealDesc_Mul)),Object_Boxed__LongRealDesc_Mul)((Object_Boxed__LongReal)i0, (Object_Boxed__LongReal)i1);
        return (Object_Boxed__Object)i0;
        goto l11;
      case 3:
        i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10041)))), Object_Boxed__LongRealDesc_Sign)),Object_Boxed__LongRealDesc_Sign)((Object_Boxed__LongReal)i1);
        i2 = i2==0;
        if (i2) goto l8;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10139)))), Object_Boxed__LongRealDesc_Div)),Object_Boxed__LongRealDesc_Div)((Object_Boxed__LongReal)i0, (Object_Boxed__LongReal)i1);
        return (Object_Boxed__Object)i0;
        goto l11;
l8:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10067));
        i2 = (OOC_INT32)op;
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10102));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10067));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10075)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 8, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        goto l11;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10179));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10211));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10179));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10187)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        goto l11;
      }
l11:
      return (Object_Boxed__Object)(OOC_INT32)0;
      ;
    }


  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10347))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10334)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10373))+16);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10360)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (!i0) goto l15;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10441))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10446))+4);
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10456)))), &_td_OOC_SymbolTable__PredefTypeDesc, 10456)), 10467))+32);
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
    _failed_case(i0, 10434);
    goto l11;
  }
l11:
  i0 = (OOC_INT32)result;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l15;
  i1 = (OOC_INT32)c;
  i2 = (OOC_INT32)op;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10744)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i1, (Object_Boxed__Object)i0, (OOC_IR__Operator)i2);
  *(OOC_INT32*)((_check_pointer(i1, 10732))+4) = i0;
  return;
l15:
  i0 = (OOC_INT32)c;
  *(OOC_INT32*)((_check_pointer(i0, 10801))+4) = (OOC_INT32)0;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10997))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10984)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11023))+16);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11010)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 11297))+4) = (OOC_INT32)0;
  goto l21;
l7:
  i2 = (OOC_INT32)l;
  i2 = *(OOC_UINT8*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11061)))), &_td_Object_Boxed__BooleanDesc, 11061)), 11069));
  left = i2;
  i3 = (OOC_INT32)r;
  i3 = *(OOC_UINT8*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11100)))), &_td_Object_Boxed__BooleanDesc, 11100)), 11108));
  right = i3;
  i4 = *(OOC_INT8*)((_check_pointer(i1, 11129))+8);
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
    _failed_case(i4, 11122);
    goto l20;
  }
l20:
  i2 = result;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11254)))), OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)),OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)((OOC_IR_ConstFold__ConstFold)i0, i2, (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 11242))+4) = i1;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11498))+8);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11506)), (OOC_INT32)0);
  i2 = i2-1;
  i3 = 0<=i2;
  i = 0;
  i4 = (OOC_INT32)c;
  if (!i3) goto l13;
  i3=i0;i0=0;
l4_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11526))+8);
  i5 = _check_pointer(i5, 11534);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i0, i6, OOC_UINT32, 11534))*4);
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11538)))), &_td_OOC_IR__ConstDesc);
  if (i5) goto l7;
  *(OOC_INT32*)((_check_pointer(i4, 11642))+4) = (OOC_INT32)0;
  return;
  
  goto l8;
l7:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11573))+8);
  i5 = _check_pointer(i5, 11581);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i0, i6, OOC_UINT32, 11581))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11588)))), &_td_OOC_IR__ConstDesc, 11588)), 11594))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11607)))), &_td_Object_Boxed__StringDesc, 11607)), 11614));
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
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 11711));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11731));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11739))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 11711));
  i0 = (OOC_INT32)Object_Boxed__NewString((Object__String)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11719)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i5, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i0);
  *(OOC_INT32*)((_check_pointer(i4, 11699))+4) = i0;
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
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12057)))), &_td_Object_Boxed__StringDesc, 12057);
      left = (Object_Boxed__String)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12087)))), &_td_Object_Boxed__StringDesc, 12087);
      right = (Object_Boxed__String)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 12107))+8);
      switch (i3) {
      case 10:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12156)))), Object_Boxed__StringDesc_Cmp)),Object_Boxed__StringDesc_Cmp)((Object_Boxed__String)i0, (Object__Object)i1);
        result = (i0==0);
        goto l9;
      case 11:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12210)))), Object_Boxed__StringDesc_Cmp)),Object_Boxed__StringDesc_Cmp)((Object_Boxed__String)i0, (Object__Object)i1);
        result = (i0!=0);
        goto l9;
      case 12:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12264)))), Object_Boxed__StringDesc_Cmp)),Object_Boxed__StringDesc_Cmp)((Object_Boxed__String)i0, (Object__Object)i1);
        result = (i0<0);
        goto l9;
      case 13:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12318)))), Object_Boxed__StringDesc_Cmp)),Object_Boxed__StringDesc_Cmp)((Object_Boxed__String)i0, (Object__Object)i1);
        result = (i0<=0);
        goto l9;
      case 14:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12373)))), Object_Boxed__StringDesc_Cmp)),Object_Boxed__StringDesc_Cmp)((Object_Boxed__String)i0, (Object__Object)i1);
        result = (i0>0);
        goto l9;
      case 15:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12427)))), Object_Boxed__StringDesc_Cmp)),Object_Boxed__StringDesc_Cmp)((Object_Boxed__String)i0, (Object__Object)i1);
        result = (i0>=0);
        goto l9;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12461));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12493));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12461));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12469)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
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
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12703)))), &_td_Object_BigInt__BigIntDesc, 12703);
      left = (Object_BigInt__BigInt)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12735)))), &_td_Object_BigInt__BigIntDesc, 12735);
      right = (Object_BigInt__BigInt)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 12760))+8);
      switch (i3) {
      case 10:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12809)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i1);
        result = (i0==0);
        goto l9;
      case 11:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12863)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i1);
        result = (i0!=0);
        goto l9;
      case 12:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12917)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i1);
        result = (i0<0);
        goto l9;
      case 13:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12971)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i1);
        result = (i0<=0);
        goto l9;
      case 14:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13026)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i1);
        result = (i0>0);
        goto l9;
      case 15:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13080)))), Object_BigInt__BigIntDesc_Cmp)),Object_BigInt__BigIntDesc_Cmp)((Object_BigInt__BigInt)i0, (Object__Object)i1);
        result = (i0>=0);
        goto l9;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13114));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13146));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13114));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13122)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
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
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13354)))), &_td_Object_Boxed__LongRealDesc, 13354);
      left = (Object_Boxed__LongReal)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13387)))), &_td_Object_Boxed__LongRealDesc, 13387);
      right = (Object_Boxed__LongReal)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 13414))+8);
      switch (i3) {
      case 10:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13463)))), Object_Boxed__LongRealDesc_Cmp)),Object_Boxed__LongRealDesc_Cmp)((Object_Boxed__LongReal)i0, (Object__Object)i1);
        result = (i0==0);
        goto l9;
      case 11:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13517)))), Object_Boxed__LongRealDesc_Cmp)),Object_Boxed__LongRealDesc_Cmp)((Object_Boxed__LongReal)i0, (Object__Object)i1);
        result = (i0!=0);
        goto l9;
      case 12:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13571)))), Object_Boxed__LongRealDesc_Cmp)),Object_Boxed__LongRealDesc_Cmp)((Object_Boxed__LongReal)i0, (Object__Object)i1);
        result = (i0<0);
        goto l9;
      case 13:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13625)))), Object_Boxed__LongRealDesc_Cmp)),Object_Boxed__LongRealDesc_Cmp)((Object_Boxed__LongReal)i0, (Object__Object)i1);
        result = (i0<=0);
        goto l9;
      case 14:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13680)))), Object_Boxed__LongRealDesc_Cmp)),Object_Boxed__LongRealDesc_Cmp)((Object_Boxed__LongReal)i0, (Object__Object)i1);
        result = (i0>0);
        goto l9;
      case 15:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13734)))), Object_Boxed__LongRealDesc_Cmp)),Object_Boxed__LongRealDesc_Cmp)((Object_Boxed__LongReal)i0, (Object__Object)i1);
        result = (i0>=0);
        goto l9;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13768));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13800));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13768));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13776)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
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
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13999)))), &_td_Object_Boxed__StringDesc, 13999)), 14006));
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13999)))), &_td_Object_Boxed__StringDesc, 13999)), 14006));
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14012)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, 0);
      left = i0;
      i1 = (OOC_INT32)r;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14045)))), &_td_Object_Boxed__StringDesc, 14045)), 14052));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14045)))), &_td_Object_Boxed__StringDesc, 14045)), 14052));
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14058)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, 0);
      right = i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 14086))+8);
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
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14398));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14430));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14398));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14406)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
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
      i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14631)))), &_td_Object_Boxed__BooleanDesc, 14631)), 14639));
      left = i0;
      i1 = (OOC_INT32)r;
      i1 = *(OOC_UINT8*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14668)))), &_td_Object_Boxed__BooleanDesc, 14668)), 14676));
      right = i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 14696))+8);
      switch (i3) {
      case 10:
        result = (i0==i1);
        goto l5;
      case 11:
        result = (i0!=i1);
        goto l5;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14818));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14850));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14818));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14826)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14962))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14949)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14988))+16);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14975)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 15646))+4) = (OOC_INT32)0;
  goto l20;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15017))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15022))+4);
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15032)))), &_td_OOC_SymbolTable__PredefTypeDesc, 15032)), 15043))+32);
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
    _failed_case(i0, 15010);
    goto l15;
  }
l15:
  i0 = (OOC_INT32)result;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l18;
  i1 = (OOC_INT32)c;
  i0 = *(OOC_UINT8*)(_check_pointer(i0, 15606));
  i2 = (OOC_INT32)op;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15586)))), OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)),OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)((OOC_IR_ConstFold__ConstFold)i1, i0, (OOC_IR__Operator)i2);
  *(OOC_INT32*)((_check_pointer(i1, 15574))+4) = i0;
  goto l20;
l18:
  i0 = (OOC_INT32)c;
  *(OOC_INT32*)((_check_pointer(i0, 15539))+4) = (OOC_INT32)0;
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
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16320))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16307)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&value);
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 18258))+4) = (OOC_INT32)0;
  goto l53;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16368))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  if (i2) goto l6;
  i2=OOC_FALSE;
  goto l8;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16404))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16410))+4);
  i2 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i2);
  
l8:
  if (i2) goto l51;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16672))+4);
  i2 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i2);
  if (i2) goto l12;
  i2=OOC_FALSE;
  goto l14;
l12:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16714))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16720))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  
l14:
  if (i2) goto l43;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17376))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17381))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  if (i2) goto l18;
  i2=OOC_FALSE;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17406))+4);
  i2 = OOC_SymbolTable_TypeRules__IsRealType((OOC_SymbolTable__Type)i2);
  
l20:
  if (i2) goto l41;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17634))+4);
  i2 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i2);
  if (i2) goto l24;
  i2=OOC_FALSE;
  goto l26;
l24:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17659))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17664))+4);
  i2 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i2);
  
l26:
  if (i2) goto l53;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17781))+4);
  i2 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i2);
  if (i2) goto l30;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18189));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18217))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18209));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18189));
  i5 = (OOC_INT32)value;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18197)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i5);
  *(OOC_INT32*)((_check_pointer(i0, 18177))+4) = i1;
  goto l53;
l30:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17927))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17933))+4);
  i2 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i2);
  if (i2) goto l37;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17963))+8);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17970)))), &_td_OOC_IR__ConstDesc);
  if (i2) goto l35;
  i2=OOC_FALSE;
  goto l38;
l35:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18002))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18008))+4);
  i2 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i2);
  
  goto l38;
l37:
  i2=OOC_TRUE;
l38:
  _assert(i2, 127, 17899);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18035))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18045)))), &_td_OOC_IR__ConstDesc, 18045)), 18051))+8);
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18065)))), &_td_Object_Boxed__StringDesc, 18065);
  str = (Object_Boxed__String)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18096));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18119))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18134))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 18125));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18096));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18105)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i5, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i1, (Object_Boxed__Object)i2);
  *(OOC_INT32*)((_check_pointer(i0, 18083))+4) = i1;
  goto l53;
l41:
  i2 = (OOC_INT32)value;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17512)))), &_td_Object_BigInt__BigIntDesc, 17512)), 17519)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17512)))), &_td_Object_BigInt__BigIntDesc, 17512)));
  i2 = (OOC_INT32)Object_Boxed__NewLongReal(((OOC_REAL64)i2));
  value = (Object_Boxed__Object)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17555));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17583))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17575));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17555));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17563)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i5, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i4, (Object_Boxed__Object)i2);
  *(OOC_INT32*)((_check_pointer(i0, 17543))+4) = i1;
  goto l53;
l43:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16846))+4);
  i2 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16857)))), &_td_OOC_SymbolTable__PredefTypeDesc, 16857)), 16868))+32);
  switch (i2) {
  case 1:
    i2 = (OOC_INT32)value;
    i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16973)))), &_td_Object_BigInt__BigIntDesc, 16973)), 16980)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16973)))), &_td_Object_BigInt__BigIntDesc, 16973)));
    i2 = (OOC_INT32)Object__NewLatin1Char(i2);
    i2 = (OOC_INT32)Object_Boxed__NewString((Object__String)i2);
    value = (Object_Boxed__Object)i2;
    goto l49;
  case 2:
    i2 = (OOC_INT32)value;
    i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17101)))), &_td_Object_BigInt__BigIntDesc, 17101)), 17108)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17101)))), &_td_Object_BigInt__BigIntDesc, 17101)));
    i2 = (OOC_INT32)Object__NewUCS2Char(i2);
    i2 = (OOC_INT32)Object_Boxed__NewString((Object__String)i2);
    value = (Object_Boxed__Object)i2;
    goto l49;
  case 3:
    i2 = (OOC_INT32)value;
    i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17229)))), &_td_Object_BigInt__BigIntDesc, 17229)), 17236)))), Object_BigInt__BigIntDesc_ToLongInt)),Object_BigInt__BigIntDesc_ToLongInt)((Object_BigInt__BigInt)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17229)))), &_td_Object_BigInt__BigIntDesc, 17229)));
    i2 = (OOC_INT32)Object__NewUCS4Char(i2);
    i2 = (OOC_INT32)Object_Boxed__NewString((Object__String)i2);
    value = (Object_Boxed__Object)i2;
    goto l49;
  default:
    _failed_case(i2, 16839);
    goto l49;
  }
l49:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17288));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17320))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17311));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17288));
  i5 = (OOC_INT32)value;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17297)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i3, (Object_Boxed__Object)i5);
  *(OOC_INT32*)((_check_pointer(i0, 17276))+4) = i1;
  goto l53;
l51:
  i2 = (OOC_INT32)value;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16538)))), &_td_Object_Boxed__StringDesc, 16538)), 16545));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16538)))), &_td_Object_Boxed__StringDesc, 16538)), 16545));
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16551)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i2, 0);
  i2 = (OOC_INT32)Object_BigInt__NewInt(i2);
  value = (Object_Boxed__Object)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16586));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16618))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16609));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16586));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16595)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i5, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i4, (Object_Boxed__Object)i2);
  *(OOC_INT32*)((_check_pointer(i0, 16574))+4) = i1;
l53:
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
