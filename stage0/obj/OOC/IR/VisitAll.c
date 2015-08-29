#include "OOC/IR/VisitAll.d"
#include "__oo2c.h"

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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1541))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1541))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1550)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAdr(OOC_IR_VisitAll__Visitor v, OOC_IR__Adr adr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)adr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1644))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1644))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1652)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAsh(OOC_IR_VisitAll__Visitor v, OOC_IR__Ash ash) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)ash;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1746))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1746))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1753)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1774))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1774))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1779)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitBinaryArith(OOC_IR_VisitAll__Visitor v, OOC_IR__BinaryArith op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1887))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1887))+12);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1893)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1913))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1913))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1920)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitBooleanOp(OOC_IR_VisitAll__Visitor v, OOC_IR__BooleanOp op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2032))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2032))+12);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2038)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2058))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2058))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2065)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCap(OOC_IR_VisitAll__Visitor v, OOC_IR__Cap cap) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)cap;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2165))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2165))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2174)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitConcat(OOC_IR_VisitAll__Visitor v, OOC_IR__Concat op) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2312))+8);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2320)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2336))+8);
  i4 = _check_pointer(i4, 2344);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 2344))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2336))+8);
  i5 = _check_pointer(i5, 2344);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 2344))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 2347)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCompare(OOC_IR_VisitAll__Visitor v, OOC_IR__Compare op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2457))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2457))+12);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2463)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2483))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2483))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2490)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitDeref(OOC_IR_VisitAll__Visitor v, OOC_IR__Deref deref) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)deref;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2596))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2596))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2605)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitEntier(OOC_IR_VisitAll__Visitor v, OOC_IR__Entier entier) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)entier;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2713))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2713))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2722)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitIndex(OOC_IR_VisitAll__Visitor v, OOC_IR__Index index) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)index;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2827))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2827))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2834)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2857))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2857))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2864)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitLen(OOC_IR_VisitAll__Visitor v, OOC_IR__Len len) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)len;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2960))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2960))+12);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2967)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitNegate(OOC_IR_VisitAll__Visitor v, OOC_IR__Negate neg) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)neg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3067))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3067))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3076)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitNewBlock(OOC_IR_VisitAll__Visitor v, OOC_IR__NewBlock _new) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)_new;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3183))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3183))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3188)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitNewObject(OOC_IR_VisitAll__Visitor v, OOC_IR__NewObject _new) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)_new;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3323))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3372))+8);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3380)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)v;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3399))+8);
  i4 = _check_pointer(i4, 3407);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 3407))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3399))+8);
  i5 = _check_pointer(i5, 3407);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 3407))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 3410)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l5_loop;
l11:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitNot(OOC_IR_VisitAll__Visitor v, OOC_IR__Not neg) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)neg;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3530))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3530))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3539)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitOdd(OOC_IR_VisitAll__Visitor v, OOC_IR__Odd odd) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)odd;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3633))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3633))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3642)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSelectField(OOC_IR_VisitAll__Visitor v, OOC_IR__SelectField sf) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sf;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3750))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3750))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3758)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSelectProc(OOC_IR_VisitAll__Visitor v, OOC_IR__SelectProc sp) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)sp;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3872))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3872))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3882)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSetMember(OOC_IR_VisitAll__Visitor v, OOC_IR__SetMember range) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)range;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3999))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3999))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4008)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4031))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4031))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4036)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSetOp(OOC_IR_VisitAll__Visitor v, OOC_IR__SetOp op) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4138))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4138))+12);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4144)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4164))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4164))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4171)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSetRange(OOC_IR_VisitAll__Visitor v, OOC_IR__SetRange range) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)range;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4281))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4281))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4287)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4310))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4310))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4314)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitChangeElement(OOC_IR_VisitAll__Visitor v, OOC_IR__ChangeElement ch) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4431))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4431))+12);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4436)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4456))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4456))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4465)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitShift(OOC_IR_VisitAll__Visitor v, OOC_IR__Shift shift) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)shift;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4577))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4577))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4584)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4607))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4607))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4611)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeCast(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeCast op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4715))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4715))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4721)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeConv(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeConv op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4828))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4828))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4834)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeGuard(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeGuard op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4943))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4943))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4949)))), OOC_IR__TypeTestDesc_Accept)),OOC_IR__TypeTestDesc_Accept)((OOC_IR__TypeTest)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeTag(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeTag op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5054))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5054))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5062)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeTest(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeTest op) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)op;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5168))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5168))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5174)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
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
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5757)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 5779);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5779))*4);
  i5 = _check_pointer(i0, 5779);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 5779))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5782)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAssert(OOC_IR_VisitAll__Visitor v, OOC_IR__Assert assert) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)assert;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5909))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5945))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5945))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5956)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
l4:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAssignment(OOC_IR_VisitAll__Visitor v, OOC_IR__Assignment assignment) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)assignment;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6090))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6090))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6100)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6128))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6128))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6135)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAssignOp(OOC_IR_VisitAll__Visitor v, OOC_IR__AssignOp assignOp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)assignOp;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6256))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6256))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6266)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6292))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6292))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6299)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCall(OOC_IR_VisitAll__Visitor v, OOC_IR__Call call) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)call;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6424))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6424))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6432)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6473))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6484)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6502))+12);
  i4 = _check_pointer(i4, 6513);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 6513))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6502))+12);
  i5 = _check_pointer(i5, 6513);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 6513))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6516)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i3);
  i2 = i2+1;
  i4 = i2<=i1;
  i = i2;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCopy(OOC_IR_VisitAll__Visitor v, OOC_IR__Copy cp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)cp;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6620))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6620))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6628)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6648))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6648))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6654)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCopyParameter(OOC_IR_VisitAll__Visitor v, OOC_IR__CopyParameter cp) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)cp;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6767))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6767))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6774)))), OOC_IR__VarDesc_Accept)),OOC_IR__VarDesc_Accept)((OOC_IR__Var)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCopyString(OOC_IR_VisitAll__Visitor v, OOC_IR__CopyString cp) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)cp;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6890))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6890))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6898)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6918))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6918))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6924)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6944))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6944))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6955)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7153))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7153))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7158)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7184))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7184))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7191)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7217))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7217))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7222)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7248))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7248))+20);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7254)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7302))+24);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitIfStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__IfStatm ifStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)ifStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7412))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7412))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7419)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7466))+12);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7494))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7553))+16);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
l4:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCase(OOC_IR_VisitAll__Visitor v, OOC_IR__Case _case) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)_case;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7705))+8);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7713)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  i3 = (OOC_INT32)v;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7731))+8);
  i4 = _check_pointer(i4, 7739);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 7739))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7731))+8);
  i5 = _check_pointer(i5, 7739);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 7739))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7742)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i5, (OOC_IR__Visitor)i3);
  i2 = i2+1;
  i4 = i2<=i1;
  i = i2;
  if (i4) goto l3_loop;
l8:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7795))+12);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCaseStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__CaseStatm caseStatm) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)caseStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7935))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7935))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7943)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7989))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7999)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8022))+12);
  i4 = _check_pointer(i4, 8032);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 8032))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8022))+12);
  i5 = _check_pointer(i5, 8032);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 8032))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 8035)))), OOC_IR__CaseDesc_Accept)),OOC_IR__CaseDesc_Accept)((OOC_IR__Case)i5, (OOC_IR__Visitor)i3);
  i2 = i2+1;
  i4 = i2<=i1;
  i = i2;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8075))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l11;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8134))+16);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
l11:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitLoopStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__LoopStatm loopStatm) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)loopStatm;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8287))+8);
  i1 = (OOC_INT32)v;
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i1, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitMoveBlock(OOC_IR_VisitAll__Visitor v, OOC_IR__MoveBlock move) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)move;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8396))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8396))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8404)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8426))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8426))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8432)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8454))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8454))+16);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8460)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitRepeatStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__RepeatStatm repeatStatm) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)repeatStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8614))+8);
  i2 = (OOC_INT32)v;
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8638))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8638))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8653)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitReturn(OOC_IR_VisitAll__Visitor v, OOC_IR__Return _return) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)_return;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8771))+8);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8804))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8804))+8);
  i2 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8812)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
l4:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitWhileStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__WhileStatm whileStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)whileStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8946))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8946))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8953)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9003))+12);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitWithStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__WithStatm withStatm) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)withStatm;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9123))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9123))+8);
  i3 = (OOC_INT32)v;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9130)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9179))+12);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9209))+16);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l4;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9270))+16);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
l4:
  return;
  ;
}

static void OOC_IR_VisitAll__VisitProcedureList(OOC_IR_VisitAll__Visitor v, OOC_IR__ProcedureList procList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT32)procList;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9449)), (OOC_INT32)0);
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 9471);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9471))*4);
  i5 = _check_pointer(i0, 9471);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 9471))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9474)))), OOC_IR__ProcedureDesc_Accept)),OOC_IR__ProcedureDesc_Accept)((OOC_IR__Procedure)i5, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitProcedure(OOC_IR_VisitAll__Visitor v, OOC_IR__Procedure procedure) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)procedure;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9632))+8);
  i1 = (OOC_INT32)v;
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i1, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitModule(OOC_IR_VisitAll__Visitor v, OOC_IR__Module module) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9766))+8);
  i2 = (OOC_INT32)v;
  OOC_IR_VisitAll__VisitProcedureList((OOC_IR_VisitAll__Visitor)i2, (OOC_IR__ProcedureList)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9811))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9823))+8);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i2, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_OOC_IR_VisitAll_init(void) {

  return;
  ;
}

/* --- */
