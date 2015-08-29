#include <OOC/IR/VisitAll.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_IR_VisitAll__InitVisitor(OOC_IR_VisitAll__Visitor v) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)v;
  OOC_IR__InitVisitor((OOC_IR__Visitor)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitConst(OOC_IR_VisitAll__Visitor v, OOC_IR__Const _const) {

  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAbs(OOC_IR_VisitAll__Visitor v, OOC_IR__Abs abs) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)abs;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1547))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1547))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1556)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAdr(OOC_IR_VisitAll__Visitor v, OOC_IR__Adr adr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)adr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1650))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1650))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1658)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAsh(OOC_IR_VisitAll__Visitor v, OOC_IR__Ash ash) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)ash;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1752))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1752))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1759)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1780))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1780))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1785)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitBinaryArith(OOC_IR_VisitAll__Visitor v, OOC_IR__BinaryArith op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1893))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1893))+12);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1899)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1919))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1919))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1926)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitBooleanOp(OOC_IR_VisitAll__Visitor v, OOC_IR__BooleanOp op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2038))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2038))+12);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2044)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2064))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2064))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2071)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCap(OOC_IR_VisitAll__Visitor v, OOC_IR__Cap cap) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)cap;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2171))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2171))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2180)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitConcat(OOC_IR_VisitAll__Visitor v, OOC_IR__Concat op) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2318))+8);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2326)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2342))+8);
  i4 = _check_pointer(i4, 2350);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 2350))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2342))+8);
  i5 = _check_pointer(i5, 2350);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 2350))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 2353)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCompare(OOC_IR_VisitAll__Visitor v, OOC_IR__Compare op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2463))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2463))+12);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2469)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2489))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2489))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2496)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitConstructor(OOC_IR_VisitAll__Visitor v, OOC_IR__Constructor cons) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)cons;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2612))+8);
  i2 = (OOC_INT32)v;
  OOC_IR__NewObjectDesc_Accept((OOC_IR__NewObject)i1, (OOC_IR__Visitor)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2642))+12);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2670))+12);
  OOC_IR__CallDesc_Accept((OOC_IR__Call)i0, (OOC_IR__Visitor)i2);
l4:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitDeref(OOC_IR_VisitAll__Visitor v, OOC_IR__Deref deref) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)deref;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2792))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2792))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2801)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitEntier(OOC_IR_VisitAll__Visitor v, OOC_IR__Entier entier) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)entier;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2909))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2909))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2918)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitIndex(OOC_IR_VisitAll__Visitor v, OOC_IR__Index index) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)index;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3023))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3023))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3030)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3053))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3053))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3060)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitLen(OOC_IR_VisitAll__Visitor v, OOC_IR__Len len) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)len;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3156))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3156))+12);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3163)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitNegate(OOC_IR_VisitAll__Visitor v, OOC_IR__Negate neg) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)neg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3263))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3263))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3272)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitNewBlock(OOC_IR_VisitAll__Visitor v, OOC_IR__NewBlock _new) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)_new;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3379))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3379))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3384)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitNewObject(OOC_IR_VisitAll__Visitor v, OOC_IR__NewObject _new) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)_new;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3519))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3568))+8);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3576)), 0);
  i2 = 0<i1;
  if (!i2) goto l11;
  i2 = (OOC_INT32)v;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3595))+8);
  i4 = _check_pointer(i4, 3603);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 3603))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3595))+8);
  i5 = _check_pointer(i5, 3603);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 3603))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 3606)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l5_loop;
l11:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitNot(OOC_IR_VisitAll__Visitor v, OOC_IR__Not neg) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)neg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3726))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3726))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3735)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitOdd(OOC_IR_VisitAll__Visitor v, OOC_IR__Odd odd) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)odd;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3829))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3829))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3838)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSelectField(OOC_IR_VisitAll__Visitor v, OOC_IR__SelectField sf) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sf;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3946))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3946))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3954)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSelectProc(OOC_IR_VisitAll__Visitor v, OOC_IR__SelectProc sp) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sp;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4068))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4068))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4078)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSetMember(OOC_IR_VisitAll__Visitor v, OOC_IR__SetMember range) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)range;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4195))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4195))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4204)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4227))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4227))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4232)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSetOp(OOC_IR_VisitAll__Visitor v, OOC_IR__SetOp op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4334))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4334))+12);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4340)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4360))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4360))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4367)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSetRange(OOC_IR_VisitAll__Visitor v, OOC_IR__SetRange range) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)range;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4477))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4477))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4483)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4506))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4506))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4510)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitChangeElement(OOC_IR_VisitAll__Visitor v, OOC_IR__ChangeElement ch) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4627))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4627))+12);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4632)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4652))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4652))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4661)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitShift(OOC_IR_VisitAll__Visitor v, OOC_IR__Shift shift) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)shift;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4773))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4773))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4780)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4803))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4803))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4807)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeCast(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeCast op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4911))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4911))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4917)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeConv(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeConv op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5024))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5024))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5030)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeGuard(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeGuard op) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)op;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5139))+8);
  i1 = (OOC_INT32)v;
  OOC_IR__TypeTestDesc_Accept((OOC_IR__TypeTest)i0, (OOC_IR__Visitor)i1);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeTag(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeTag op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5250))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5250))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5258)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeTest(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeTest op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5364))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5364))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5370)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitModuleRef(OOC_IR_VisitAll__Visitor v, OOC_IR__ModuleRef modRef) {

  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitPredefProc(OOC_IR_VisitAll__Visitor v, OOC_IR__PredefProc pproc) {

  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitProcedureRef(OOC_IR_VisitAll__Visitor v, OOC_IR__ProcedureRef procRef) {

  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeRef(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeRef typeRef) {

  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitVar(OOC_IR_VisitAll__Visitor v, OOC_IR__Var var) {

  return;
  ;
}

static void OOC_IR_VisitAll__VisitStatementSeq(OOC_IR_VisitAll__Visitor v, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)statmSeq;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5953)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 5975);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5975))*4);
  i5 = _check_pointer(i0, 5975);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 5975))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5978)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAssert(OOC_IR_VisitAll__Visitor v, OOC_IR__Assert assert) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)assert;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6105))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6141))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6141))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6152)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
l4:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAssignment(OOC_IR_VisitAll__Visitor v, OOC_IR__Assignment assignment) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)assignment;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6286))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6286))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6296)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6324))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6324))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6331)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAssignOp(OOC_IR_VisitAll__Visitor v, OOC_IR__AssignOp assignOp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)assignOp;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6452))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6452))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6462)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6488))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6488))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6495)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCall(OOC_IR_VisitAll__Visitor v, OOC_IR__Call call) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)call;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6620))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6620))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6628)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6669))+12);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6680)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6698))+12);
  i4 = _check_pointer(i4, 6709);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 6709))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6698))+12);
  i5 = _check_pointer(i5, 6709);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 6709))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6712)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i3);
  i2 = i2+1;
  i = i2;
  i4 = i2<i1;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCopy(OOC_IR_VisitAll__Visitor v, OOC_IR__Copy cp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)cp;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6816))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6816))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6824)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6844))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6844))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6850)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCopyParameter(OOC_IR_VisitAll__Visitor v, OOC_IR__CopyParameter cp) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)cp;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6963))+8);
  i1 = (OOC_INT32)v;
  OOC_IR__VarDesc_Accept((OOC_IR__Var)i0, (OOC_IR__Visitor)i1);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCopyString(OOC_IR_VisitAll__Visitor v, OOC_IR__CopyString cp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)cp;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7086))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7086))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7094)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7114))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7114))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7120)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7140))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7140))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7151)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitExit(OOC_IR_VisitAll__Visitor v, OOC_IR__Exit exit) {

  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitForStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__ForStatm forStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)forStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7349))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7349))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7354)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7380))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7380))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7387)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7413))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7413))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7418)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7444))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7444))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7450)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7498))+24);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitIfStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__IfStatm ifStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)ifStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7608))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7608))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7615)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7662))+12);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7690))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7749))+16);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
l4:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCase(OOC_IR_VisitAll__Visitor v, OOC_IR__Case _case) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)_case;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7901))+8);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7909)), 0);
  i2 = (OOC_INT32)v;
  i3 = 0<i1;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7927))+8);
  i4 = _check_pointer(i4, 7935);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7935))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7927))+8);
  i5 = _check_pointer(i5, 7935);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 7935))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7938)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7991))+12);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i2, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCaseStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__CaseStatm caseStatm) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)caseStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8131))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8131))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8139)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8185))+12);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8195)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8218))+12);
  i4 = _check_pointer(i4, 8228);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 8228))*4);
  OOC_IR__CaseDesc_Accept((OOC_IR__Case)i4, (OOC_IR__Visitor)i3);
  i2 = i2+1;
  i = i2;
  i4 = i2<i1;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8271))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8330))+16);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
l11:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitLoopStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__LoopStatm loopStatm) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)loopStatm;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8483))+8);
  i1 = (OOC_INT32)v;
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i1, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitMoveBlock(OOC_IR_VisitAll__Visitor v, OOC_IR__MoveBlock move) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)move;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8592))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8592))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8600)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8622))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8622))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8628)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8650))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8650))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8656)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitRaise(OOC_IR_VisitAll__Visitor v, OOC_IR__Raise raise) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)raise;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8764))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8764))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8775)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitRepeatStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__RepeatStatm repeatStatm) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)repeatStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8925))+8);
  i2 = (OOC_INT32)v;
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8949))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8949))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8964)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitReturn(OOC_IR_VisitAll__Visitor v, OOC_IR__Return _return) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)_return;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9082))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9115))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9115))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9123)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
l4:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCatchClause(OOC_IR_VisitAll__Visitor v, OOC_IR__CatchClause _catch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)_catch;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9270))+12);
  i1 = (OOC_INT32)v;
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i1, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTryStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__TryStatm tryStatm) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)tryStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9433))+8);
  i2 = (OOC_INT32)v;
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9475))+12);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9485)), 0);
  i3 = 0<i1;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9507))+12);
  i4 = _check_pointer(i4, 9517);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9517))*4);
  OOC_IR__CatchClauseDesc_Accept((OOC_IR__CatchClause)i4, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitWhileStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__WhileStatm whileStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)whileStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9654))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9654))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9661)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9711))+12);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitWithStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__WithStatm withStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)withStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9831))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9831))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9838)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9887))+12);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9917))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9978))+16);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
l4:
  return;
  ;
}

static void OOC_IR_VisitAll__VisitProcedureList(OOC_IR_VisitAll__Visitor v, OOC_IR__ProcedureList procList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)procList;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10157)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 10179);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 10179))*4);
  OOC_IR__ProcedureDesc_Accept((OOC_IR__Procedure)i4, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitProcedure(OOC_IR_VisitAll__Visitor v, OOC_IR__Procedure procedure) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procedure;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10340))+8);
  i1 = (OOC_INT32)v;
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i1, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitModule(OOC_IR_VisitAll__Visitor v, OOC_IR__Module module) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10474))+8);
  i2 = (OOC_INT32)v;
  OOC_IR_VisitAll__VisitProcedureList((OOC_IR_VisitAll__Visitor)i2, (OOC_IR__ProcedureList)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10519))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10531))+8);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i2, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_OOC_IR_VisitAll_init(void) {

  return;
  ;
}

/* --- */
