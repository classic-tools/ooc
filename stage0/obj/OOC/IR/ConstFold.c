#include "OOC/IR/ConstFold.d"
#include "__oo2c.h"

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

static OOC_SymbolTable__Type OOC_IR_ConstFold__SmallestType(Language__Value value) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)value;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1796)))), &_td_Language_Integer__ValueDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1868)))), &_td_Language_Real__ValueDesc);
  if (i1) goto l9;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1988)))), &_td_Language_Set__ValueDesc);
  if (i1) goto l7;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1980)))), 1980);
  goto l12;
l7:
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(9);
  return (OOC_SymbolTable__Type)i0;
  goto l12;
l9:
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(7);
  return (OOC_SymbolTable__Type)i0;
  goto l12;
l11:
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__SmallestIntType((Language_Integer__Value)i0);
  return (OOC_SymbolTable__Type)i0;
l12:
  _failed_function(1662); return 0;
  ;
}

OOC_IR__Const OOC_IR_ConstFold__ConstFoldDesc_ValueConst(OOC_IR_ConstFold__ConstFold c, Language__Value value, OOC_IR__Operator op) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)value;
  i1 = (OOC_INT32)OOC_IR_ConstFold__SmallestType((Language__Value)i0);
  i2 = i1==(OOC_INT32)0;
  type = (OOC_SymbolTable__Type)i1;
  if (i2) goto l3;
  i2 = (OOC_INT32)c;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2370));
  i4 = (OOC_INT32)op;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 2390));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2370));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2378)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i2, (OOC_Scanner_Builder_BasicList__Symbol)i4, (OOC_SymbolTable__Type)i1, (Language__Value)i0);
  return (OOC_IR__Const)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2296));
  i2 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2329));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2296));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2304)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 10, (OOC_Scanner_Builder_BasicList__Symbol)i2);
  return (OOC_IR__Const)(OOC_INT32)0;
l4:
  _failed_function(2147); return 0;
  ;
}

OOC_IR__Const OOC_IR_ConstFold__ConstFoldDesc_BooleanConst(OOC_IR_ConstFold__ConstFold c, OOC_CHAR8 value, OOC_IR__Operator op) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2534));
  i2 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2554));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2534));
  i3 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(0);
  i4 = value;
  i4 = (OOC_INT32)Language_Boolean__New(i4);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2542)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i0, (OOC_Scanner_Builder_BasicList__Symbol)i2, (OOC_SymbolTable__Type)i3, (Language__Value)i4);
  return (OOC_IR__Const)i0;
  ;
}

OOC_CHAR8 OOC_IR_ConstFold__ConstFoldDesc_ValidEval(OOC_IR_ConstFold__ConstFold c, OOC_IR__Expression expr, Language__Value *result) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)c;
  *(OOC_INT32*)((_check_pointer(i0, 2740))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)expr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2762)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i1, (OOC_IR__Visitor)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2781))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2811));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2819))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2800))+4);
  i1 = i2!=i1;
  
l5:
  if (!i1) goto l7;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2851))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2862)))), &_td_OOC_IR__ConstDesc, 2862)), 2868))+8);
  *result = (Language__Value)i0;
  return OOC_TRUE;
l7:
  return OOC_FALSE;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitConst(OOC_IR_ConstFold__ConstFold c, OOC_IR__Const _const) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)_const;
  *(OOC_INT32*)((_check_pointer(i0, 3001))+4) = i1;
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
  i1 = *(OOC_INT8*)((_check_pointer(i0, 3713))+8);
  i2 = (OOC_INT32)c;
  switch (i1) {
  case 16:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3764))+12);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3774)))), &_td_OOC_IR__ConstDesc, 3774)), 3780))+8);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3787)))), &_td_Language_String__ValueDesc);
    if (i1) goto l5;
    length = 1;
    i1=1;
    goto l10;
l5:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3831))+12);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3841)))), &_td_OOC_IR__ConstDesc, 3841)), 3847))+8);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3831))+12);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3841)))), &_td_OOC_IR__ConstDesc, 3841)), 3847))+8);
    i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3862)))), &_td_Language_String__ValueDesc, 3862)), 3868)))), Language_String__ValueDesc_Length)),Language_String__ValueDesc_Length)((Language_String__Value)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3862)))), &_td_Language_String__ValueDesc, 3862)));
    i1 = i1+1;
    length = i1;
    
    goto l10;
  case 17:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4037))+20);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4052))+4);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4037))+20);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4052))+4);
    i4 = *(OOC_INT32*)((_check_pointer(i0, 4093))+16);
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4063)))), &_td_OOC_SymbolTable__ArrayDesc, 4063)), 4069)))), OOC_SymbolTable__ArrayDesc_GetNthElementType)),OOC_SymbolTable__ArrayDesc_GetNthElementType)((OOC_SymbolTable__Array)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4063)))), &_td_OOC_SymbolTable__ArrayDesc, 4063)), i4);
    type = (OOC_SymbolTable__Type)i1;
    i1 = *(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4125)))), &_td_OOC_SymbolTable__ArrayDesc, 4125)), 4131))+44);
    length = i1;
    goto l10;
  case 18:
  case 19:
    *(OOC_INT32*)((_check_pointer(i2, 4203))+4) = (OOC_INT32)0;
    return;
    goto l10;
  default:
    _failed_case(i1, 3705);
    goto l10;
  }
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 4253));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4274));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 4253));
  i4 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(5);
  i5 = length;
  i5 = (OOC_INT32)Language_Integer__New(i5);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4261)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i4, (Language__Value)i5);
  *(OOC_INT32*)((_check_pointer(i2, 4241))+4) = i0;
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
  Language__Value e;
  Language__Value s;
  OOC_INT32 element;
  OOC_UINT32 set;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4851))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4838)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&e);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4880))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4867)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&s);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 5040))+4) = (OOC_INT32)0;
  goto l8;
l7:
  i2 = (OOC_INT32)e;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4921)))), &_td_Language_Integer__ValueDesc, 4921)), 4927)))), Language_Integer__ValueDesc_ToInt)),Language_Integer__ValueDesc_ToInt)((Language_Integer__Value)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4921)))), &_td_Language_Integer__ValueDesc, 4921)));
  element = i2;
  i3 = (OOC_INT32)s;
  i3 = *(OOC_UINT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 4956)))), &_td_Language_Set__ValueDesc, 4956)), 4962))+4);
  set = i3;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4989)))), OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)),OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)((OOC_IR_ConstFold__ConstFold)i0, (_in(i2,i3)), (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 4977))+4) = i1;
l8:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitSetRange(OOC_IR_ConstFold__ConstFold c, OOC_IR__SetRange op) {
  register OOC_INT32 i0,i1,i2,i3;
  Language__Value l;
  Language__Value r;
  OOC_INT32 left;
  OOC_INT32 right;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5237))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5224)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5263))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5250)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 5433))+4) = (OOC_INT32)0;
  goto l8;
l7:
  i2 = (OOC_INT32)l;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5300)))), &_td_Language_Integer__ValueDesc, 5300)), 5306)))), Language_Integer__ValueDesc_ToInt)),Language_Integer__ValueDesc_ToInt)((Language_Integer__Value)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5300)))), &_td_Language_Integer__ValueDesc, 5300)));
  left = i2;
  i3 = (OOC_INT32)r;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5341)))), &_td_Language_Integer__ValueDesc, 5341)), 5347)))), Language_Integer__ValueDesc_ToInt)),Language_Integer__ValueDesc_ToInt)((Language_Integer__Value)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5341)))), &_td_Language_Integer__ValueDesc, 5341)));
  right = i3;
  i2 = (OOC_INT32)Language_Set__New((_bit_range(i2,i3)));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5376)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Language__Value)i2, (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 5364))+4) = i1;
l8:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitSetOp(OOC_IR_ConstFold__ConstFold c, OOC_IR__SetOp op) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Language__Value l;
  Language__Value r;
  OOC_UINT32 left;
  OOC_UINT32 right;
  OOC_UINT32 result;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5639))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5626)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5665))+16);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5652)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 6149))+4) = (OOC_INT32)0;
  goto l15;
l7:
  i2 = (OOC_INT32)l;
  i2 = *(OOC_UINT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5701)))), &_td_Language_Set__ValueDesc, 5701)), 5707))+4);
  left = i2;
  i3 = (OOC_INT32)r;
  i3 = *(OOC_UINT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 5737)))), &_td_Language_Set__ValueDesc, 5737)), 5743))+4);
  right = i3;
  i4 = *(OOC_INT8*)((_check_pointer(i1, 5769))+8);
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
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5997));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6029));
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5997));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6005)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i4, 6, (OOC_Scanner_Builder_BasicList__Symbol)i3);
    *(OOC_INT32*)((_check_pointer(i0, 6046))+4) = (OOC_INT32)0;
    return;
    goto l14;
  }
l14:
  i2 = result;
  i2 = (OOC_INT32)Language_Set__New(i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6099)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Language__Value)i2, (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 6087))+4) = i1;
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
  Language__Value value;
  OOC_INT16 id;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6622))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6609)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&value);
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 7180))+4) = (OOC_INT32)0;
  goto l10;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6656))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6664))+4);
  i2 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6674)))), &_td_OOC_SymbolTable__PredefTypeDesc, 6674)), 6685))+32);
  id = i2;
  switch (i2) {
  case 3 ... 6:
    i2 = (OOC_INT32)value;
    i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6790)))), &_td_Language_Integer__ValueDesc, 6790)), 6796)))), Language_Integer__ValueDesc_Negate)),Language_Integer__ValueDesc_Negate)((Language_Integer__Value)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6790)))), &_td_Language_Integer__ValueDesc, 6790)));
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6764)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Language__Value)i2, (OOC_IR__Operator)i1);
    *(OOC_INT32*)((_check_pointer(i0, 6752))+4) = i1;
    goto l10;
  case 9:
    i2 = (OOC_INT32)value;
    i2 = *(OOC_UINT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6880)))), &_td_Language_Set__ValueDesc, 6880)), 6886))+4);
    i2 = (OOC_INT32)Language_Set__New((~i2));
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6849)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Language__Value)i2, (OOC_IR__Operator)i1);
    *(OOC_INT32*)((_check_pointer(i0, 6837))+4) = i1;
    goto l10;
  case 7:
  case 8:
    *(OOC_INT32*)((_check_pointer(i0, 7046))+4) = (OOC_INT32)0;
    goto l10;
  default:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7089));
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7129));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7089));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7097)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i3, 7, (OOC_Scanner_Builder_BasicList__Symbol)i1);
    *(OOC_INT32*)((_check_pointer(i0, 7143))+4) = (OOC_INT32)0;
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
  Language__Value value;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7509))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7496)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&value);
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 7608))+4) = (OOC_INT32)0;
  goto l4;
l3:
  i2 = (OOC_INT32)value;
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7577)))), &_td_Language_Boolean__ValueDesc, 7577)), 7583))+4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7548)))), OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)),OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)((OOC_IR_ConstFold__ConstFold)i0, (!i2), (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 7536))+4) = i1;
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
  Language__Value v;
  Language__Value e;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7849))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7836)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&v);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7876))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7863)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&e);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 7986))+4) = (OOC_INT32)0;
  goto l8;
l7:
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)e;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7933)))), &_td_Language_Integer__ValueDesc, 7933)), 7939)))), Language_Integer__ValueDesc_Ash)),Language_Integer__ValueDesc_Ash)((Language_Integer__Value)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7933)))), &_td_Language_Integer__ValueDesc, 7933)), (Language_Integer__Value)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 7956)))), &_td_Language_Integer__ValueDesc, 7956)));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7909)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i0, (Language__Value)i2, (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 7897))+4) = i1;
l8:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitCap(OOC_IR_ConstFold__ConstFold c, OOC_IR__Cap op) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Language__Value value;
  OOC_CHAR8 str[2];

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8157))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8144)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&value);
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 8400))+4) = (OOC_INT32)0;
  goto l4;
l3:
  i2 = (OOC_INT32)value;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8212)))), &_td_Language_String8__ValueDesc, 8212)), 8218))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8224))+4);
  i2 = _check_pointer(i2, 8230);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT8, 8230)));
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 2, OOC_UINT8, 8186))) = (_cap(i2));
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, 2, OOC_UINT8, 8243))) = (OOC_CHAR8)'\000';
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8271));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8291));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8271));
  i4 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(1);
  i5 = (OOC_INT32)Language_String8__NewString((void*)(OOC_INT32)str, 2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8279)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i3, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i4, (Language__Value)i5);
  *(OOC_INT32*)((_check_pointer(i0, 8259))+4) = i1;
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
  Language__Value l;
  Language__Value r;
  Language__Value result;
  auto Language__Value OOC_IR_ConstFold__ConstFoldDesc_VisitBinaryArith_IntegerOp();
  auto Language__Value OOC_IR_ConstFold__ConstFoldDesc_VisitBinaryArith_RealOp();
    
    Language__Value OOC_IR_ConstFold__ConstFoldDesc_VisitBinaryArith_IntegerOp() {
      register OOC_INT32 i0,i1,i2,i3;
      Language_Integer__Value left;
      Language_Integer__Value right;

      i0 = (OOC_INT32)l;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8917)))), &_td_Language_Integer__ValueDesc, 8917);
      left = (Language_Integer__Value)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8948)))), &_td_Language_Integer__ValueDesc, 8948);
      right = (Language_Integer__Value)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 8972))+8);
      switch (i3) {
      case 0:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9063)))), Language_Integer__ValueDesc_Sum)),Language_Integer__ValueDesc_Sum)((Language_Integer__Value)i0, (Language_Integer__Value)i1);
        return (Language__Value)i0;
        goto l16;
      case 1:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9107)))), Language_Integer__ValueDesc_Difference)),Language_Integer__ValueDesc_Difference)((Language_Integer__Value)i0, (Language_Integer__Value)i1);
        return (Language__Value)i0;
        goto l16;
      case 4:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9158)))), Language_Integer__ValueDesc_Product)),Language_Integer__ValueDesc_Product)((Language_Integer__Value)i0, (Language_Integer__Value)i1);
        return (Language__Value)i0;
        goto l16;
      case 2:
        i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9210)))), Language_Integer__ValueDesc_Sign)),Language_Integer__ValueDesc_Sign)((Language_Integer__Value)i1);
        i2 = i2==0;
        if (i2) goto l8;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9308)))), Language_Integer__ValueDesc_Quotient)),Language_Integer__ValueDesc_Quotient)((Language_Integer__Value)i0, (Language_Integer__Value)i1);
        return (Language__Value)i0;
        goto l16;
l8:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9236));
        i2 = (OOC_INT32)op;
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9271));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9236));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9244)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 8, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        goto l16;
      case 5:
        i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9370)))), Language_Integer__ValueDesc_Sign)),Language_Integer__ValueDesc_Sign)((Language_Integer__Value)i1);
        i2 = i2==0;
        if (i2) goto l13;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9468)))), Language_Integer__ValueDesc_Remainder)),Language_Integer__ValueDesc_Remainder)((Language_Integer__Value)i0, (Language_Integer__Value)i1);
        return (Language__Value)i0;
        goto l16;
l13:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9396));
        i2 = (OOC_INT32)op;
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9431));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9396));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9404)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 8, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        goto l16;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9514));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9546));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9514));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9522)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        goto l16;
      }
l16:
      return (Language__Value)(OOC_INT32)0;
      ;
    }

    
    Language__Value OOC_IR_ConstFold__ConstFoldDesc_VisitBinaryArith_RealOp() {
      register OOC_INT32 i0,i1,i2,i3;
      Language_Real__Value left;
      Language_Real__Value right;

      i0 = (OOC_INT32)l;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9699)))), &_td_Language_Real__ValueDesc, 9699);
      left = (Language_Real__Value)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9727)))), &_td_Language_Real__ValueDesc, 9727);
      right = (Language_Real__Value)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 9751))+8);
      switch (i3) {
      case 0:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9794)))), Language_Real__ValueDesc_Sum)),Language_Real__ValueDesc_Sum)((Language_Real__Value)i0, (Language_Real__Value)i1);
        return (Language__Value)i0;
        goto l11;
      case 1:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9838)))), Language_Real__ValueDesc_Difference)),Language_Real__ValueDesc_Difference)((Language_Real__Value)i0, (Language_Real__Value)i1);
        return (Language__Value)i0;
        goto l11;
      case 4:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9889)))), Language_Real__ValueDesc_Product)),Language_Real__ValueDesc_Product)((Language_Real__Value)i0, (Language_Real__Value)i1);
        return (Language__Value)i0;
        goto l11;
      case 3:
        i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9941)))), Language_Real__ValueDesc_Sign)),Language_Real__ValueDesc_Sign)((Language_Real__Value)i1);
        i2 = i2==0;
        if (i2) goto l8;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10039)))), Language_Real__ValueDesc_Quotient)),Language_Real__ValueDesc_Quotient)((Language_Real__Value)i0, (Language_Real__Value)i1);
        return (Language__Value)i0;
        goto l11;
l8:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9967));
        i2 = (OOC_INT32)op;
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10002));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9967));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9975)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 8, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        goto l11;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10084));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10116));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10084));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10092)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        goto l11;
      }
l11:
      return (Language__Value)(OOC_INT32)0;
      ;
    }


  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10252))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10239)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10278))+16);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10265)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (!i0) goto l15;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10346))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10351))+4);
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10361)))), &_td_OOC_SymbolTable__PredefTypeDesc, 10361)), 10372))+32);
  switch (i0) {
  case 3:
  case 4:
  case 5:
    i0 = (OOC_INT32)OOC_IR_ConstFold__ConstFoldDesc_VisitBinaryArith_IntegerOp();
    result = (Language__Value)i0;
    goto l11;
  case 7:
  case 8:
    result = (Language__Value)(OOC_INT32)0;
    goto l11;
  default:
    _failed_case(i0, 10339);
    goto l11;
  }
l11:
  i0 = (OOC_INT32)result;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l15;
  i1 = (OOC_INT32)c;
  i2 = (OOC_INT32)op;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10649)))), OOC_IR_ConstFold__ConstFoldDesc_ValueConst)),OOC_IR_ConstFold__ConstFoldDesc_ValueConst)((OOC_IR_ConstFold__ConstFold)i1, (Language__Value)i0, (OOC_IR__Operator)i2);
  *(OOC_INT32*)((_check_pointer(i1, 10637))+4) = i0;
  return;
l15:
  i0 = (OOC_INT32)c;
  *(OOC_INT32*)((_check_pointer(i0, 10706))+4) = (OOC_INT32)0;
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitBooleanOp(OOC_IR_ConstFold__ConstFold c, OOC_IR__BooleanOp op) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Language__Value l;
  Language__Value r;
  OOC_CHAR8 left;
  OOC_CHAR8 right;
  OOC_CHAR8 result;

  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10904))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10891)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10930))+16);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10917)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 11204))+4) = (OOC_INT32)0;
  goto l21;
l7:
  i2 = (OOC_INT32)l;
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10970)))), &_td_Language_Boolean__ValueDesc, 10970)), 10976))+4);
  left = i2;
  i3 = (OOC_INT32)r;
  i3 = *(OOC_UINT8*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11009)))), &_td_Language_Boolean__ValueDesc, 11009)), 11015))+4);
  right = i3;
  i4 = *(OOC_INT8*)((_check_pointer(i1, 11036))+8);
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
    _failed_case(i4, 11029);
    goto l20;
  }
l20:
  i2 = result;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11161)))), OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)),OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)((OOC_IR_ConstFold__ConstFold)i0, i2, (OOC_IR__Operator)i1);
  *(OOC_INT32*)((_check_pointer(i0, 11149))+4) = i1;
l21:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitConcat(OOC_IR_ConstFold__ConstFold c, OOC_IR__Concat op) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  Language_String8__Value s8;
  Language_String16__Value s16;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11409))+8);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11417)), 0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)c;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11438))+8);
  i4 = _check_pointer(i4, 11446);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 11446))*4);
  i4 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 11450)))), &_td_OOC_IR__ConstDesc));
  if (!i4) goto l6;
  *(OOC_INT32*)((_check_pointer(i2, 11477))+4) = (OOC_INT32)0;
  return;
l6:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11541))+4);
  i1 = *(OOC_INT16*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11551)))), &_td_OOC_SymbolTable__PredefTypeDesc, 11551)), 11562))+32);
  switch (i1) {
  case 12:
    i1 = (OOC_INT32)Language_String8__NewString("", 1);
    s8 = (Language_String8__Value)i1;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11655))+8);
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11663)), 0);
    i2 = i2-1;
    i3 = 0<=i2;
    i = 0;
    if (!i3) goto l22;
    i3=0;
l17_loop:
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11697))+8);
    i4 = _check_pointer(i4, 11705);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 11705))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 11712)))), &_td_OOC_IR__ConstDesc, 11712)), 11718))+8);
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11687)))), Language_String8__ValueDesc_Concat)),Language_String8__ValueDesc_Concat)((Language_String8__Value)i1, (Language_String8__Value)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 11733)))), &_td_Language_String8__ValueDesc, 11733)));
    s8 = (Language_String8__Value)i1;
    i3 = i3+1;
    i4 = i3<=i2;
    i = i3;
    if (i4) goto l17_loop;
l22:
    i2 = (OOC_INT32)c;
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11772));
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11800))+4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11792));
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11772));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11780)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i5, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i4, (Language__Value)i1);
    *(OOC_INT32*)((_check_pointer(i2, 11760))+4) = i0;
    goto l34;
  case 13:
    i1 = (OOC_INT32)Language_String16__NewString(((OOC_CHAR16[]){0}), 1);
    s16 = (Language_String16__Value)i1;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11904))+8);
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11912)), 0);
    i2 = i2-1;
    i3 = 0<=i2;
    i = 0;
    if (!i3) goto l32;
    i3=0;
l27_loop:
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11948))+8);
    i4 = _check_pointer(i4, 11956);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 11956))*4);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 11963)))), &_td_OOC_IR__ConstDesc, 11963)), 11969))+8);
    i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11938)))), Language_String16__ValueDesc_Concat)),Language_String16__ValueDesc_Concat)((Language_String16__Value)i1, (Language_String16__Value)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 11985)))), &_td_Language_String16__ValueDesc, 11985)));
    s16 = (Language_String16__Value)i1;
    i3 = i3+1;
    i4 = i3<=i2;
    i = i3;
    if (i4) goto l27_loop;
l32:
    i2 = (OOC_INT32)c;
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12024));
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12052))+4);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12044));
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12024));
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12032)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i5, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i4, (Language__Value)i1);
    *(OOC_INT32*)((_check_pointer(i2, 12012))+4) = i0;
    goto l34;
  default:
    _failed_case(i1, 11534);
    goto l34;
  }
l34:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitCompare(OOC_IR_ConstFold__ConstFold c, OOC_IR__Compare op) {
  register OOC_INT32 i0,i1,i2;
  Language__Value l;
  Language__Value r;
  Language_Boolean__Value result;
  auto Language_Boolean__Value OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_StringOp8();
  auto Language_Boolean__Value OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_StringOp16();
  auto Language_Boolean__Value OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_IntegerOp();
  auto Language_Boolean__Value OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_RealOp();
  auto Language_Boolean__Value OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_CharOp();
  auto Language_Boolean__Value OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_BooleanOp();
    
    Language_Boolean__Value OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_StringOp8() {
      register OOC_INT32 i0,i1,i2,i3;
      Language_String8__Value left;
      Language_String8__Value right;
      OOC_CHAR8 result;

      i0 = (OOC_INT32)l;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12335)))), &_td_Language_String8__ValueDesc, 12335);
      left = (Language_String8__Value)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12366)))), &_td_Language_String8__ValueDesc, 12366);
      right = (Language_String8__Value)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 12385))+8);
      switch (i3) {
      case 10:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12434)))), Language_String8__ValueDesc_Compare)),Language_String8__ValueDesc_Compare)((Language_String8__Value)i0, (ADT_Object__Object)i1);
        result = (i0==0);
        goto l9;
      case 11:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12492)))), Language_String8__ValueDesc_Compare)),Language_String8__ValueDesc_Compare)((Language_String8__Value)i0, (ADT_Object__Object)i1);
        result = (i0!=0);
        goto l9;
      case 12:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12550)))), Language_String8__ValueDesc_Compare)),Language_String8__ValueDesc_Compare)((Language_String8__Value)i0, (ADT_Object__Object)i1);
        result = (i0<0);
        goto l9;
      case 13:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12608)))), Language_String8__ValueDesc_Compare)),Language_String8__ValueDesc_Compare)((Language_String8__Value)i0, (ADT_Object__Object)i1);
        result = (i0<=0);
        goto l9;
      case 14:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12667)))), Language_String8__ValueDesc_Compare)),Language_String8__ValueDesc_Compare)((Language_String8__Value)i0, (ADT_Object__Object)i1);
        result = (i0>0);
        goto l9;
      case 15:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12725)))), Language_String8__ValueDesc_Compare)),Language_String8__ValueDesc_Compare)((Language_String8__Value)i0, (ADT_Object__Object)i1);
        result = (i0>=0);
        goto l9;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12763));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12795));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12763));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12771)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        return (Language_Boolean__Value)(OOC_INT32)0;
        goto l9;
      }
l9:
      i0 = result;
      i0 = (OOC_INT32)Language_Boolean__New(i0);
      return (Language_Boolean__Value)i0;
      ;
    }

    
    Language_Boolean__Value OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_StringOp16() {
      register OOC_INT32 i0,i1,i2,i3;
      Language_String16__Value left;
      Language_String16__Value right;
      OOC_CHAR8 result;

      i0 = (OOC_INT32)l;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13005)))), &_td_Language_String16__ValueDesc, 13005);
      left = (Language_String16__Value)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13037)))), &_td_Language_String16__ValueDesc, 13037);
      right = (Language_String16__Value)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 13056))+8);
      switch (i3) {
      case 10:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13105)))), Language_String16__ValueDesc_Compare)),Language_String16__ValueDesc_Compare)((Language_String16__Value)i0, (ADT_Object__Object)i1);
        result = (i0==0);
        goto l9;
      case 11:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13163)))), Language_String16__ValueDesc_Compare)),Language_String16__ValueDesc_Compare)((Language_String16__Value)i0, (ADT_Object__Object)i1);
        result = (i0!=0);
        goto l9;
      case 12:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13221)))), Language_String16__ValueDesc_Compare)),Language_String16__ValueDesc_Compare)((Language_String16__Value)i0, (ADT_Object__Object)i1);
        result = (i0<0);
        goto l9;
      case 13:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13279)))), Language_String16__ValueDesc_Compare)),Language_String16__ValueDesc_Compare)((Language_String16__Value)i0, (ADT_Object__Object)i1);
        result = (i0<=0);
        goto l9;
      case 14:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13338)))), Language_String16__ValueDesc_Compare)),Language_String16__ValueDesc_Compare)((Language_String16__Value)i0, (ADT_Object__Object)i1);
        result = (i0>0);
        goto l9;
      case 15:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13396)))), Language_String16__ValueDesc_Compare)),Language_String16__ValueDesc_Compare)((Language_String16__Value)i0, (ADT_Object__Object)i1);
        result = (i0>=0);
        goto l9;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13434));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13466));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13434));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13442)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        return (Language_Boolean__Value)(OOC_INT32)0;
        goto l9;
      }
l9:
      i0 = result;
      i0 = (OOC_INT32)Language_Boolean__New(i0);
      return (Language_Boolean__Value)i0;
      ;
    }

    
    Language_Boolean__Value OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_IntegerOp() {
      register OOC_INT32 i0,i1,i2,i3;
      Language_Integer__Value left;
      Language_Integer__Value right;
      OOC_CHAR8 result;

      i0 = (OOC_INT32)l;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13674)))), &_td_Language_Integer__ValueDesc, 13674);
      left = (Language_Integer__Value)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13706)))), &_td_Language_Integer__ValueDesc, 13706);
      right = (Language_Integer__Value)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 13730))+8);
      switch (i3) {
      case 10:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13779)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i0, (ADT_Object__Object)i1);
        result = (i0==0);
        goto l9;
      case 11:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13837)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i0, (ADT_Object__Object)i1);
        result = (i0!=0);
        goto l9;
      case 12:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13895)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i0, (ADT_Object__Object)i1);
        result = (i0<0);
        goto l9;
      case 13:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13953)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i0, (ADT_Object__Object)i1);
        result = (i0<=0);
        goto l9;
      case 14:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14012)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i0, (ADT_Object__Object)i1);
        result = (i0>0);
        goto l9;
      case 15:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14070)))), Language_Integer__ValueDesc_Compare)),Language_Integer__ValueDesc_Compare)((Language_Integer__Value)i0, (ADT_Object__Object)i1);
        result = (i0>=0);
        goto l9;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14108));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14140));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14108));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14116)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        return (Language_Boolean__Value)(OOC_INT32)0;
        goto l9;
      }
l9:
      i0 = result;
      i0 = (OOC_INT32)Language_Boolean__New(i0);
      return (Language_Boolean__Value)i0;
      ;
    }

    
    Language_Boolean__Value OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_RealOp() {
      register OOC_INT32 i0,i1,i2,i3;
      Language_Real__Value left;
      Language_Real__Value right;
      OOC_CHAR8 result;

      i0 = (OOC_INT32)l;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14338)))), &_td_Language_Real__ValueDesc, 14338);
      left = (Language_Real__Value)i0;
      i1 = (OOC_INT32)r;
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14367)))), &_td_Language_Real__ValueDesc, 14367);
      right = (Language_Real__Value)i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 14391))+8);
      switch (i3) {
      case 10:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14440)))), Language_Real__ValueDesc_Compare)),Language_Real__ValueDesc_Compare)((Language_Real__Value)i0, (ADT_Object__Object)i1);
        result = (i0==0);
        goto l9;
      case 11:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14498)))), Language_Real__ValueDesc_Compare)),Language_Real__ValueDesc_Compare)((Language_Real__Value)i0, (ADT_Object__Object)i1);
        result = (i0!=0);
        goto l9;
      case 12:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14556)))), Language_Real__ValueDesc_Compare)),Language_Real__ValueDesc_Compare)((Language_Real__Value)i0, (ADT_Object__Object)i1);
        result = (i0<0);
        goto l9;
      case 13:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14614)))), Language_Real__ValueDesc_Compare)),Language_Real__ValueDesc_Compare)((Language_Real__Value)i0, (ADT_Object__Object)i1);
        result = (i0<=0);
        goto l9;
      case 14:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14673)))), Language_Real__ValueDesc_Compare)),Language_Real__ValueDesc_Compare)((Language_Real__Value)i0, (ADT_Object__Object)i1);
        result = (i0>0);
        goto l9;
      case 15:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14731)))), Language_Real__ValueDesc_Compare)),Language_Real__ValueDesc_Compare)((Language_Real__Value)i0, (ADT_Object__Object)i1);
        result = (i0>=0);
        goto l9;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14769));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14801));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14769));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14777)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        return (Language_Boolean__Value)(OOC_INT32)0;
        goto l9;
      }
l9:
      i0 = result;
      i0 = (OOC_INT32)Language_Boolean__New(i0);
      return (Language_Boolean__Value)i0;
      ;
    }

    
    Language_Boolean__Value OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_CharOp() {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_CHAR8 left;
      OOC_CHAR8 right;
      OOC_CHAR8 result;

      i0 = (OOC_INT32)l;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14993)))), &_td_Language_String8__ValueDesc, 14993)), 14999))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14993)))), &_td_Language_String8__ValueDesc, 14993)), 14999))+4);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15005)))), ADT_String__StringDesc_GetChar)),ADT_String__StringDesc_GetChar)((ADT_String__String)i0, 0);
      left = i0;
      i1 = (OOC_INT32)r;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15041)))), &_td_Language_String8__ValueDesc, 15041)), 15047))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15041)))), &_td_Language_String8__ValueDesc, 15041)), 15047))+4);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15053)))), ADT_String__StringDesc_GetChar)),ADT_String__StringDesc_GetChar)((ADT_String__String)i1, 0);
      right = i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 15078))+8);
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
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15390));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15422));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15390));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15398)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        return (Language_Boolean__Value)(OOC_INT32)0;
        goto l9;
      }
l9:
      i0 = result;
      i0 = (OOC_INT32)Language_Boolean__New(i0);
      return (Language_Boolean__Value)i0;
      ;
    }

    
    Language_Boolean__Value OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_BooleanOp() {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_CHAR8 left;
      OOC_CHAR8 right;
      OOC_CHAR8 result;

      i0 = (OOC_INT32)l;
      i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15620)))), &_td_Language_Boolean__ValueDesc, 15620)), 15626))+4);
      left = i0;
      i1 = (OOC_INT32)r;
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15657)))), &_td_Language_Boolean__ValueDesc, 15657)), 15663))+4);
      right = i1;
      i2 = (OOC_INT32)op;
      i3 = *(OOC_INT8*)((_check_pointer(i2, 15683))+8);
      switch (i3) {
      case 10:
        result = (i0==i1);
        goto l5;
      case 11:
        result = (i0!=i1);
        goto l5;
      default:
        i0 = (OOC_INT32)c;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15805));
        i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15837));
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15805));
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15813)))), OOC_IR__BuilderDesc_ErrSym)),OOC_IR__BuilderDesc_ErrSym)((OOC_IR__Builder)i0, 6, (OOC_Scanner_Builder_BasicList__Symbol)i2);
        return (Language_Boolean__Value)(OOC_INT32)0;
        goto l5;
      }
l5:
      i0 = result;
      i0 = (OOC_INT32)Language_Boolean__New(i0);
      return (Language_Boolean__Value)i0;
      ;
    }


  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15944))+12);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15931)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&l);
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15970))+16);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15957)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&r);
  
l5:
  if (i2) goto l7;
  *(OOC_INT32*)((_check_pointer(i0, 16647))+4) = (OOC_INT32)0;
  goto l21;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15999))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16004))+4);
  i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16014)))), &_td_OOC_SymbolTable__PredefTypeDesc, 16014)), 16025))+32);
  switch (i0) {
  case 3:
  case 4:
  case 5:
    i0 = (OOC_INT32)OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_IntegerOp();
    result = (Language_Boolean__Value)i0;
    goto l16;
  case 7:
  case 8:
    result = (Language_Boolean__Value)(OOC_INT32)0;
    goto l16;
  case 1:
    i0 = (OOC_INT32)OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_CharOp();
    result = (Language_Boolean__Value)i0;
    goto l16;
  case 12:
    i0 = (OOC_INT32)OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_StringOp8();
    result = (Language_Boolean__Value)i0;
    goto l16;
  case 13:
    i0 = (OOC_INT32)OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_StringOp16();
    result = (Language_Boolean__Value)i0;
    goto l16;
  case 0:
    i0 = (OOC_INT32)OOC_IR_ConstFold__ConstFoldDesc_VisitCompare_BooleanOp();
    result = (Language_Boolean__Value)i0;
    goto l16;
  default:
    _failed_case(i0, 15992);
    goto l16;
  }
l16:
  i0 = (OOC_INT32)result;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l19;
  i1 = (OOC_INT32)c;
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 16607))+4);
  i2 = (OOC_INT32)op;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16587)))), OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)),OOC_IR_ConstFold__ConstFoldDesc_BooleanConst)((OOC_IR_ConstFold__ConstFold)i1, i0, (OOC_IR__Operator)i2);
  *(OOC_INT32*)((_check_pointer(i1, 16575))+4) = i0;
  goto l21;
l19:
  i0 = (OOC_INT32)c;
  *(OOC_INT32*)((_check_pointer(i0, 16540))+4) = (OOC_INT32)0;
l21:
  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitTypeCast(OOC_IR_ConstFold__ConstFold c, OOC_IR__TypeCast op) {

  return;
  ;
}

void OOC_IR_ConstFold__ConstFoldDesc_VisitTypeConv(OOC_IR_ConstFold__ConstFold c, OOC_IR__TypeConv op) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Language__Value value;
  Language_String__Value str;
  auto OOC_CHAR8 OOC_IR_ConstFold__ConstFoldDesc_VisitTypeConv_IsPredefType(OOC_SymbolTable__Type type, OOC_INT16 id);
  auto OOC_INT16 OOC_IR_ConstFold__ConstFoldDesc_VisitTypeConv_BaseChar(OOC_SymbolTable__PredefType type);
    
    OOC_CHAR8 OOC_IR_ConstFold__ConstFoldDesc_VisitTypeConv_IsPredefType(OOC_SymbolTable__Type type, OOC_INT16 id) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17059)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l4;
l3:
      i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17090)))), &_td_OOC_SymbolTable__PredefTypeDesc, 17090)), 17101))+32);
      i1 = id;
      i0 = i0==i1;
      
l4:
      return i0;
      ;
    }

    
    OOC_INT16 OOC_IR_ConstFold__ConstFoldDesc_VisitTypeConv_BaseChar(OOC_SymbolTable__PredefType type) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)type;
      i0 = *(OOC_INT16*)((_check_pointer(i0, 17220))+32);
      switch (i0) {
      case 1:
      case 12:
        return 1;
        goto l5;
      case 2:
      case 13:
        return 2;
        goto l5;
      default:
        _failed_case(i0, 17211);
        goto l5;
      }
l5:
      _failed_function(17148); return 0;
      ;
    }


  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)op;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17774))+8);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17761)))), OOC_IR_ConstFold__ConstFoldDesc_ValidEval)),OOC_IR_ConstFold__ConstFoldDesc_ValidEval)((OOC_IR_ConstFold__ConstFold)i0, (OOC_IR__Expression)i2, (void*)(OOC_INT32)&value);
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 20100))+4) = (OOC_INT32)0;
  goto l60;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17822))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  if (i2) goto l6;
  i2=OOC_FALSE;
  goto l8;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17858))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17864))+4);
  i2 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i2);
  
l8:
  if (i2) goto l54;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18291))+4);
  i2 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i2);
  if (i2) goto l12;
  i2=OOC_FALSE;
  goto l14;
l12:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18333))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18339))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  
l14:
  if (i2) goto l47;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18799))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18804))+4);
  i2 = OOC_SymbolTable_TypeRules__IsIntegerType((OOC_SymbolTable__Type)i2);
  if (i2) goto l18;
  i2=OOC_FALSE;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18829))+4);
  i2 = OOC_SymbolTable_TypeRules__IsRealType((OOC_SymbolTable__Type)i2);
  
l20:
  if (i2) goto l45;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19044))+4);
  i0 = OOC_IR_ConstFold__ConstFoldDesc_VisitTypeConv_IsPredefType((OOC_SymbolTable__Type)i0, 2);
  if (i0) goto l24;
  i0=OOC_FALSE;
  goto l26;
l24:
  i0 = (OOC_INT32)op;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19099))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19105))+4);
  i0 = OOC_IR_ConstFold__ConstFoldDesc_VisitTypeConv_IsPredefType((OOC_SymbolTable__Type)i0, 1);
  
l26:
  if (i0) goto l43;
  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19370))+4);
  i1 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i1);
  if (i1) goto l30;
  i1 = (OOC_INT32)c;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 20031));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20059))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20051));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 20031));
  i5 = (OOC_INT32)value;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20039)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i0, (OOC_SymbolTable__Type)i3, (Language__Value)i5);
  *(OOC_INT32*)((_check_pointer(i1, 20019))+4) = i0;
  goto l60;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19516))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19522))+4);
  i1 = OOC_SymbolTable_TypeRules__IsStringConst((OOC_SymbolTable__Type)i1);
  if (i1) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19552))+8);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19559)))), &_td_OOC_IR__ConstDesc);
  if (i1) goto l35;
  i1=OOC_FALSE;
  goto l38;
l35:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19591))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19597))+4);
  i1 = OOC_SymbolTable_TypeRules__IsCharType((OOC_SymbolTable__Type)i1);
  
  goto l38;
l37:
  i1=OOC_TRUE;
l38:
  _assert(i1, 127, 19488);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19624))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19634)))), &_td_OOC_IR__ConstDesc, 19634)), 19640))+8);
  str = (Language_String__Value)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19656)))), &_td_Language_String__ValueDesc, 19656));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19688))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19694))+4);
  i0 = OOC_IR_ConstFold__ConstFoldDesc_VisitTypeConv_BaseChar((OOC_SymbolTable__PredefType)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19705)))), &_td_OOC_SymbolTable__PredefTypeDesc, 19705)));
  i1 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19744))+4);
  i1 = OOC_IR_ConstFold__ConstFoldDesc_VisitTypeConv_BaseChar((OOC_SymbolTable__PredefType)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19755)))), &_td_OOC_SymbolTable__PredefTypeDesc, 19755)));
  i0 = i0<i1;
  if (!i0) goto l41;
  i0 = (OOC_INT32)str;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19824)))), &_td_Language_String8__ValueDesc, 19824)), 19830))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19837))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19824)))), &_td_Language_String8__ValueDesc, 19824)), 19830))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19837))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19891)))), Language_String__ValueDesc_Length)),Language_String__ValueDesc_Length)((Language_String__Value)i0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 19844)), 0);
  i0 = (OOC_INT32)Language_String16__NewRegion8((void*)(_check_pointer(i1, 19844)), i2, 0, i0);
  str = (Language_String__Value)i0;
l41:
  i0 = (OOC_INT32)c;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19938));
  i2 = (OOC_INT32)op;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19961))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19976))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 19967));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19938));
  i5 = (OOC_INT32)str;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19947)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i2, (Language__Value)i5);
  *(OOC_INT32*)((_check_pointer(i0, 19925))+4) = i1;
  goto l60;
l43:
  i0 = (OOC_INT32)value;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19238)))), &_td_Language_String8__ValueDesc, 19238)), 19244)))), Language_String8__ValueDesc_CharAt)),Language_String8__ValueDesc_CharAt)((Language_String8__Value)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19238)))), &_td_Language_String8__ValueDesc, 19238)), 0);
  i0 = (OOC_INT32)Language_String16__NewChar(i0);
  value = (Language__Value)i0;
  i1 = (OOC_INT32)c;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 19281));
  i3 = (OOC_INT32)op;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 19313))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 19304));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 19281));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 19290)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i5, (OOC_Scanner_Builder_BasicList__Symbol)i3, (OOC_SymbolTable__Type)i4, (Language__Value)i0);
  *(OOC_INT32*)((_check_pointer(i1, 19269))+4) = i0;
  goto l60;
l45:
  i2 = (OOC_INT32)value;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18927)))), &_td_Language_Integer__ValueDesc, 18927)), 18933)))), Language_Integer__ValueDesc_ToInt)),Language_Integer__ValueDesc_ToInt)((Language_Integer__Value)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18927)))), &_td_Language_Integer__ValueDesc, 18927)));
  i2 = (OOC_INT32)Language_Real__New(((OOC_REAL64)i2));
  value = (Language__Value)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18965));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18993))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18985));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18965));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18973)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i5, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i4, (Language__Value)i2);
  *(OOC_INT32*)((_check_pointer(i0, 18953))+4) = i1;
  goto l60;
l47:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18444))+4);
  i2 = *(OOC_INT16*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18455)))), &_td_OOC_SymbolTable__PredefTypeDesc, 18455)), 18466))+32);
  switch (i2) {
  case 1:
    i2 = (OOC_INT32)value;
    i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18552)))), &_td_Language_Integer__ValueDesc, 18552)), 18558)))), Language_Integer__ValueDesc_ToInt)),Language_Integer__ValueDesc_ToInt)((Language_Integer__Value)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18552)))), &_td_Language_Integer__ValueDesc, 18552)));
    i2 = (OOC_INT32)Language_String8__NewChar(i2);
    value = (Language__Value)i2;
    goto l52;
  case 2:
    i2 = (OOC_INT32)value;
    i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18658)))), &_td_Language_Integer__ValueDesc, 18658)), 18664)))), Language_Integer__ValueDesc_ToInt)),Language_Integer__ValueDesc_ToInt)((Language_Integer__Value)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18658)))), &_td_Language_Integer__ValueDesc, 18658)));
    i2 = (OOC_INT32)Language_String16__NewChar(i2);
    value = (Language__Value)i2;
    goto l52;
  default:
    _failed_case(i2, 18437);
    goto l52;
  }
l52:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18711));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18743))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18734));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18711));
  i5 = (OOC_INT32)value;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18720)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i4, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i3, (Language__Value)i5);
  *(OOC_INT32*)((_check_pointer(i0, 18699))+4) = i1;
  goto l60;
l54:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17974))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17979))+4);
  i2 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i2, 2);
  if (i2) goto l57;
  i2 = (OOC_INT32)value;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18144)))), &_td_Language_String8__ValueDesc, 18144)), 18150))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18157))+4);
  i2 = _check_pointer(i2, 18164);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT8, 18164)));
  i2 = (OOC_INT32)Language_Integer__New(i2);
  value = (Language__Value)i2;
  
  goto l58;
l57:
  i2 = (OOC_INT32)value;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18060)))), &_td_Language_String16__ValueDesc, 18060)), 18066))+4);
  i2 = _check_pointer(i2, 18073);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(0, i3, OOC_UINT8, 18073))*2);
  i2 = (OOC_INT32)Language_Integer__New(i2);
  value = (Language__Value)i2;
  
l58:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18205));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18237))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18228));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18205));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18214)))), OOC_IR__BuilderDesc_NewConst)),OOC_IR__BuilderDesc_NewConst)((OOC_IR__Builder)i5, (OOC_Scanner_Builder_BasicList__Symbol)i1, (OOC_SymbolTable__Type)i4, (Language__Value)i2);
  *(OOC_INT32*)((_check_pointer(i0, 18193))+4) = i1;
l60:
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

void OOC_IR_ConstFold__ConstFoldDesc_VisitRepeatStatm(OOC_IR_ConstFold__ConstFold c, OOC_IR__RepeatStatm repeatStatm) {

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
