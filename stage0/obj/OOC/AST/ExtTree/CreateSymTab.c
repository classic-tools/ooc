#include <OOC/AST/ExtTree/CreateSymTab.d>
#include <__oo2c.h>

OOC_SymbolTable__Name OOC_AST_ExtTree_CreateSymTab__GetName(OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_Scanner_Builder_BasicList__Symbol sym;
  OOC_SymbolTable__Name name;

  i0 = (OOC_INT32)node;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2340)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2395)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2389)))), 2389);
  goto l8;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2434));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2441));
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2379));
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
l8:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  name = (OOC_SymbolTable__Name)i0;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2499))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 2509))+16);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 2519))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 2530))+24);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i1);
  return (OOC_SymbolTable__Name)i0;
  ;
}

static OOC_SymbolTable__Position OOC_AST_ExtTree_CreateSymTab__GetPosition(OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_Scanner_Builder_BasicList__Symbol sym;
  OOC_SymbolTable__Position position;

  i0 = (OOC_INT32)node;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2709)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2764)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2758)))), 2758);
  goto l8;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2803));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2810));
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2748));
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
l8:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Position.baseTypes[0]);
  position = (OOC_SymbolTable__Position)i0;
  i1 = (OOC_INT32)sym;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 2880))+16);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 2890))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 2901))+24);
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, i2, i3, i1);
  return (OOC_SymbolTable__Position)i0;
  ;
}

static OOC_INT8 OOC_AST_ExtTree_CreateSymTab__ExportMark(OOC_AST__Node id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)id;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3024)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3017)))), 3017);
  goto l15;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3058))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3127))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3133));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3138))+8);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3143)),(const void*)"*"))==(OOC_INT32)0;
  if (i1) goto l11;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3204))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3210));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3215))+8);
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 3220)),(const void*)"-"))==(OOC_INT32)0;
  if (!i0) goto l15;
  return 2;
  goto l15;
l11:
  return 1;
  goto l15;
l13:
  return 0;
l15:
  _failed_function(2962); return 0;
  ;
}

static OOC_INT32 OOC_AST_ExtTree_CreateSymTab__EndOfType(OOC_AST__Node t) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 end;

  i0 = (OOC_INT32)t;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l47;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3463)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l45;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3533)))), &_td_OOC_AST_ExtTree__OperatorDesc);
  if (i1) goto l43;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3600)))), &_td_OOC_AST_ExtTree__ArrayTypeDesc);
  if (i1) goto l41;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3667)))), &_td_OOC_AST_ExtTree__RecordTypeDesc);
  if (i1) goto l39;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3734)))), &_td_OOC_AST_ExtTree__PointerTypeDesc);
  if (i1) goto l37;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3803)))), &_td_OOC_AST_ExtTree__ProcTypeDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4108)))), &_td_OOC_AST_ExtTree__FormalParsDesc);
  if (i1) goto l17;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4105)))), 4105);
  goto l48;
l17:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4145))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4221))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l22;
  return -1;
  goto l48;
l22:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4271))+12);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l24:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4195))+20);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l27:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3838))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l30;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4074));
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3892))+4);
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  end = i1;
  i2 = i1==-1;
  if (i2) goto l33;
  return i1;
  goto l48;
l33:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3967));
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3786))+12);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l39:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3718))+24);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3650))+16);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l43:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3582))+8);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l45:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3501));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3513));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 3506))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 3518))+12);
  return (i1+i0);
  goto l48;
l47:
  return -1;
l48:
  _failed_function(3326); return 0;
  ;
}

static void OOC_AST_ExtTree_CreateSymTab__Accept(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Item oldParent;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4466))+4);
  oldParent = (OOC_SymbolTable__Item)i1;
  i2 = (OOC_INT32)node;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4493)))), &_td_OOC_AST_ExtTree__NodeDesc, 4493)), 4498)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4493)))), &_td_OOC_AST_ExtTree__NodeDesc, 4493)), (OOC_AST_ExtTree__Visitor)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4517))+4) = i1;
  return;
  ;
}

static void OOC_AST_ExtTree_CreateSymTab__AcceptParent(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node, OOC_SymbolTable__Item newParent) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Item oldParent;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4892))+4);
  oldParent = (OOC_SymbolTable__Item)i1;
  i2 = (OOC_INT32)newParent;
  *(OOC_INT32*)((_check_pointer(i0, 4907))+4) = i2;
  i2 = (OOC_INT32)node;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4947)))), &_td_OOC_AST_ExtTree__NodeDesc, 4947)), 4952)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4947)))), &_td_OOC_AST_ExtTree__NodeDesc, 4947)), (OOC_AST_ExtTree__Visitor)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4971))+4) = i1;
  return;
  ;
}

static OOC_SymbolTable__Type OOC_AST_ExtTree_CreateSymTab__GetType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  *(OOC_INT32*)((_check_pointer(i0, 5108))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)node;
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5158))+8);
  _assert((i1!=(OOC_INT32)0), 127, 5149);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5183))+8);
  return (OOC_SymbolTable__Type)i0;
  ;
}

static void OOC_AST_ExtTree_CreateSymTab__AddFlags(OOC_SymbolTable__Item item, OOC_AST_ExtTree__Flags flags) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_AST_ExtTree__NodeList l;
  OOC_INT32 i;
  OOC_AST_ExtTree__Node n;

  i0 = (OOC_INT32)flags;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l15;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5397))+8);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5415)))), &_td_OOC_AST_ExtTree__NodeListDesc, 5415);
  l = (OOC_AST_ExtTree__NodeList)i0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 5447));
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l15;
  i2 = (OOC_INT32)item;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5477))+4);
  i4 = _check_pointer(i4, 5480);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5480))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5492)))), &_td_OOC_AST_ExtTree__NodeDesc, 5492);
  n = (OOC_AST_ExtTree__Node)i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5513)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i5) goto l8;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5507)))), 5507);
  goto l9;
l8:
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5549)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i4);
l9:
  i3 = i3+2;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l5_loop;
l15:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitNodeList(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__NodeList nl) {

  _assert(OOC_FALSE, 127, 5697);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitModule(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17;
  OOC_SymbolTable__Name moduleName;
  OOC_AST_ExtTree__ModuleFlags mf;
  OOC_INT8 _class;
  OOC_INT8 callConv;
  Object__String str;
  OOC_SymbolTable__Module moduleDecl;
  OOC_INT32 i;
  OOC_AST__Node n;
  Object__CharsLatin1 chars;
  URI__URI uri;
  Msg__Msg res;
  Object__String prefixOption;
  Object__String suffixOption;
  Object__StringArrayPtr depList;
  OOC_INT32 j;

  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6199))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6205));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6215))+4);
  i1 = _check_pointer(i1, 6218);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 6218))*4);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i1);
  moduleName = (OOC_SymbolTable__Name)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6260))+28);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 6284));
  i4 = *(OOC_INT32*)((_check_pointer(i1, 6321))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i1, 6339))+8);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i5);
  mf = (OOC_AST_ExtTree__ModuleFlags)(OOC_INT32)0;
  _class = 0;
  callConv = 0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6450))+8);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l4;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6482))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6489))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6499))+4);
  i2 = _check_pointer(i2, 6502);
  i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 6502))*4);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6506)))), &_td_OOC_AST_ExtTree__ModuleFlagsDesc);
  
l4:
  i3 = (OOC_INT32)v;
  if (i2) goto l7;
  i2=0;i4=0;i5=(OOC_INT32)0;
  goto l16;
l7:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6553))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6560))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6570))+4);
  i2 = _check_pointer(i2, 6573);
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 6573))*4);
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6585)))), &_td_OOC_AST_ExtTree__ModuleFlagsDesc, 6585);
  mf = (OOC_AST_ExtTree__ModuleFlags)i2;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6611));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6621));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 6626))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 6631)),(const void*)"FOREIGN"))==(OOC_INT32)0;
  if (i4) goto l14;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6697));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6707));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 6712))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 6717)),(const void*)"INTERFACE"))==(OOC_INT32)0;
  if (i4) goto l12;
  i4=0;
  goto l15;
l12:
  _class = 3;
  i4=3;
  goto l15;
l14:
  _class = 2;
  i4=2;
l15:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6798))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6798))+4);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 6808)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i6, OOC_TRUE);
  str = (Object__String)i5;
  i5 = OOC_SymbolTable__StringToCallConv((Object__String)i5);
  callConv = i5;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6882));
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6882));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6887)))), OOC_SymbolTable_Builder__BuilderDesc_SetClass)),OOC_SymbolTable_Builder__BuilderDesc_SetClass)((OOC_SymbolTable_Builder__Builder)i7, i4);
  {register OOC_INT32 h0=i2;i2=i4;i4=i5;i5=h0;}
l16:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6940));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6976))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 6982))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6940));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6945)))), OOC_SymbolTable_Builder__BuilderDesc_NewModule)),OOC_SymbolTable_Builder__BuilderDesc_NewModule)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Name)i1, (OOC_Doc__Document)i7, i2, i4, (OOC_AST__Node)i0);
  moduleDecl = (OOC_SymbolTable__Module)i1;
  i2 = i5!=(OOC_INT32)0;
  if (i2) goto l19;
  i2=OOC_FALSE;
  goto l21;
l19:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7081))+20);
  i2 = i2!=(OOC_INT32)0;
  
l21:
  if (!i2) goto l66;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7130))+20);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 7144));
  i2 = i2-1;
  i4 = 0<=i2;
  i = 0;
  if (!i4) goto l66;
  i4=0;
l25_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7170))+20);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7184))+4);
  i6 = _check_pointer(i6, 7187);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 7187))*4);
  n = (OOC_AST__Node)i6;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7206)))), &_td_OOC_AST_ExtTree__LinkFileFlagDesc);
  if (i7) goto l51;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7963)))), &_td_OOC_AST_ExtTree__LinkLibFlagDesc);
  if (!i7) goto l60;
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8006))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8006))+4);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 8015)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i8, OOC_TRUE);
  str = (Object__String)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8050))+24);
  i8 = i8!=(OOC_INT32)0;
  if (i8) goto l32;
  prefixOption = (Object__String)(OOC_INT32)0;
  i8=(OOC_INT32)0;
  goto l33;
l32:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8103))+24);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8103))+24);
  i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 8114)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i9, OOC_FALSE);
  prefixOption = (Object__String)i8;
  
l33:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8211))+32);
  i9 = i9!=(OOC_INT32)0;
  if (i9) goto l36;
  suffixOption = (Object__String)(OOC_INT32)0;
  i9=(OOC_INT32)0;
  goto l37;
l36:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8264))+32);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8264))+32);
  i9 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 8275)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i10, OOC_FALSE);
  suffixOption = (Object__String)i9;
  
l37:
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8372))+12);
  i10 = i10==(OOC_INT32)0;
  if (i10) goto l48;
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8471))+12);
  i10 = *(OOC_INT32*)(_check_pointer(i10, 8485));
  i10 = (OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], ((i10>>1)+1));
  depList = (Object__StringArrayPtr)i10;
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8528))+12);
  i11 = *(OOC_INT32*)(_check_pointer(i11, 8542));
  i11 = i11-1;
  i12 = 0<=i11;
  j = 0;
  if (!i12) goto l47;
  i12=0;
l42_loop:
  i13 = _check_pointer(i10, 8579);
  i14 = OOC_ARRAY_LENGTH(i13, (OOC_INT32)0);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8593))+12);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i15, 8607))+4);
  i15 = _check_pointer(i15, 8610);
  i16 = OOC_ARRAY_LENGTH(i15, (OOC_INT32)0);
  i15 = (OOC_INT32)*(OOC_INT32*)(i15+(_check_index(i12, i16, OOC_UINT32, 8610))*4);
  i16 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8593))+12);
  i16 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i16, 8607))+4);
  i16 = _check_pointer(i16, 8610);
  i17 = OOC_ARRAY_LENGTH(i16, (OOC_INT32)0);
  i16 = (OOC_INT32)*(OOC_INT32*)(i16+(_check_index(i12, i17, OOC_UINT32, 8610))*4);
  i15 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i15, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i15, 8622)))), &_td_OOC_AST_ExtTree__TerminalDesc, 8622)), 8631)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)(_type_guard(i16, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i16, 8622)))), &_td_OOC_AST_ExtTree__TerminalDesc, 8622)), OOC_TRUE);
  *(OOC_INT32*)(i13+(_check_index((i12>>1), i14, OOC_UINT32, 8579))*4) = i15;
  i12 = i12+2;
  i13 = i12<=i11;
  j = i12;
  if (i13) goto l42_loop;
l47:
  i6=i10;
  goto l49;
l48:
  i6 = (OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], 0);
  depList = (Object__StringArrayPtr)i6;
  
l49:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8703)))), OOC_SymbolTable__ModuleDesc_AddLinkLib)),OOC_SymbolTable__ModuleDesc_AddLinkLib)((OOC_SymbolTable__Module)i1, (Object__String)i7, (Object__StringArrayPtr)i6, (Object__String)i8, (Object__String)i9);
  goto l60;
l51:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7250))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7250))+4);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7260)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i8, OOC_TRUE);
  str = (Object__String)i7;
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7310)))), &_td_Object__String8Desc, 7310)), 7318)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7310)))), &_td_Object__String8Desc, 7310)));
  chars = (Object__CharsLatin1)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7378))+16);
  i9 = OOC_ARRAY_LENGTH((_check_pointer(i7, 7374)), (OOC_INT32)0);
  i7 = (OOC_INT32)URI_Parser__NewURI((void*)(_check_pointer(i7, 7374)), i9, (URI__HierarchicalURI)i8, (void*)(OOC_INT32)&res);
  i8 = (OOC_INT32)res;
  uri = (URI__URI)i7;
  _assert((i8==(OOC_INT32)0), 127, 7405);
  _assert((i7!=(OOC_INT32)0), 127, 7435);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7492))+20);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7475)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i7, (URI__HierarchicalURI)i8);
  uri = (URI__URI)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7519))+12);
  i8 = i8!=(OOC_INT32)0;
  if (i8) goto l54;
  prefixOption = (Object__String)(OOC_INT32)0;
  i8=(OOC_INT32)0;
  goto l55;
l54:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7572))+12);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7572))+12);
  i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 7583)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i9, OOC_FALSE);
  prefixOption = (Object__String)i8;
  
l55:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7680))+20);
  i9 = i9!=(OOC_INT32)0;
  if (i9) goto l58;
  suffixOption = (Object__String)(OOC_INT32)0;
  i6=(OOC_INT32)0;
  goto l59;
l58:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7733))+20);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7733))+20);
  i6 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 7744)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i6, OOC_FALSE);
  suffixOption = (Object__String)i6;
  
l59:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7846)))), OOC_SymbolTable__ModuleDesc_AddLinkFile)),OOC_SymbolTable__ModuleDesc_AddLinkFile)((OOC_SymbolTable__Module)i1, (URI__HierarchicalURI)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7869)))), &_td_URI__HierarchicalURIDesc, 7869)), (Object__String)i8, (Object__String)i6);
l60:
  i4 = i4+1;
  i6 = i4<=i2;
  i = i4;
  if (i6) goto l25_loop;
l66:
  *(OOC_INT32*)((_check_pointer(i3, 8859))+12) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8895))+16);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l69;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8949))+16);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i2, (OOC_SymbolTable__Item)i1);
l69:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8998))+20);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l72;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9092))+20);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i0, (OOC_SymbolTable__Item)i1);
l72:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitImportList(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ImportList importList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)importList;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9273))+4);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 9282));
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9325))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9334))+4);
  i4 = _check_pointer(i4, 9337);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9337))*4);
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i4);
  i3 = i3+2;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitBody(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Body body) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)body;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9482));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 9491));
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9517));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9526))+4);
  i4 = _check_pointer(i4, 9529);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9529))*4);
  i4 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9533)))), &_td_OOC_AST_ExtTree__TerminalDesc));
  if (!i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9582));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9591))+4);
  i4 = _check_pointer(i4, 9594);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9594))*4);
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i4);
l6:
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l3_loop;
l11:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitImportDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ImportDecl importDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SymbolTable__Name moduleName;
  OOC_Scanner_Builder_BasicList__Symbol nameSym;
  OOC_SymbolTable__Name name;

  i0 = (OOC_INT32)importDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9898))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9906));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9916))+4);
  i1 = _check_pointer(i1, 9919);
  i2 = OOC_ARRAY_LENGTH(i1, (OOC_INT32)0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 9919))*4);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i1);
  moduleName = (OOC_SymbolTable__Name)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9965))+12);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 9989));
  i4 = *(OOC_INT32*)((_check_pointer(i1, 10026))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i1, 10044))+8);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i5);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10132))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10140));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10150))+4);
  i2 = _check_pointer(i2, 10171);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10182))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 10190));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 10200));
  i4 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index((i3-1), i4, OOC_UINT32, 10171))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10217)))), &_td_OOC_AST_ExtTree__TerminalDesc, 10217)), 10226));
  nameSym = (OOC_Scanner_Builder_BasicList__Symbol)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10251))+4);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l3;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10357))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 10365));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10375))+4);
  i3 = _check_pointer(i3, 10403);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10414))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 10422));
  i4 = *(OOC_INT32*)(_check_pointer(i4, 10432));
  i5 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index((i4-1), i5, OOC_UINT32, 10403))*4);
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  name = (OOC_SymbolTable__Name)i3;
  
  goto l4;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10306));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  name = (OOC_SymbolTable__Name)i3;
  
l4:
  i4 = (OOC_INT32)v;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 10471));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10576))+8);
  i6 = *(OOC_INT32*)((_check_pointer(i2, 10513))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 10526))+12);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10490))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10584))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 10471));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10476)))), OOC_SymbolTable_Builder__BuilderDesc_NewImport)),OOC_SymbolTable_Builder__BuilderDesc_NewImport)((OOC_SymbolTable_Builder__Builder)i4, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i3, (i6+i2), (OOC_Doc__Document)i0, (OOC_SymbolTable__Name)i1);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitConstDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ConstDecl constDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10758));
  i2 = (OOC_INT32)constDecl;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10817));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10789))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 10827));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10758));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10854))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10874)))), &_td_OOC_AST_ExtTree__TerminalDesc, 10874)), 10883));
  i5 = *(OOC_INT32*)((_check_pointer(i5, 10888))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10924));
  i6 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10946));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 10956))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10996))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10763)))), OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i5, i6, (OOC_Doc__Document)i7, (Object_Boxed__Object)(OOC_INT32)0, (OOC_SymbolTable__PredefType)(OOC_INT32)0, (OOC_AST__Node)i2);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitTypeDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__TypeDecl typeDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11147));
  i2 = (OOC_INT32)typeDecl;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11204));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11177))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11214));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11147));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11251))+8);
  i6 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11280));
  i7 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i7);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11310));
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 11320))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11353))+8);
  i0 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i2);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11152)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i6, i7, (OOC_Doc__Document)i8, (OOC_SymbolTable__Type)i0);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitVarDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__VarDecl varDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
  OOC_SymbolTable__Type type;
  OOC_INT32 i;
  OOC_SymbolTable__VarDecl var;
  OOC_AST__Node flags;

  i0 = (OOC_INT32)varDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11573))+8);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11607));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 11618));
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11648));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11702));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11713))+4);
  i6 = _check_pointer(i6, 11716);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 11716))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11668))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 11728)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 11728)), 11737));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11648));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11773))+8);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11809));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 11820))+4);
  i10 = _check_pointer(i10, 11823);
  i11 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 11823))*4);
  i10 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i10);
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11845));
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 11856))+4);
  i11 = _check_pointer(i11, 11859);
  i12 = OOC_ARRAY_LENGTH(i11, (OOC_INT32)0);
  i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i4, i12, OOC_UINT32, 11859))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 11871)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 11871)), 11880))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11653)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i6, i9, i10, (OOC_Doc__Document)i11, OOC_FALSE, OOC_FALSE, OOC_FALSE, (OOC_SymbolTable__Type)i1);
  var = (OOC_SymbolTable__VarDecl)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11951));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11962))+4);
  i6 = _check_pointer(i6, 11965);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+1), i7, OOC_UINT32, 11965))*4);
  flags = (OOC_AST__Node)i6;
  i7 = i6!=(OOC_INT32)0;
  if (!i7) goto l6;
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i5, (OOC_AST_ExtTree__Flags)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 12036)))), &_td_OOC_AST_ExtTree__FlagsDesc, 12036)));
l6:
  i4 = i4+3;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l3_loop;
l11:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitReceiver(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Receiver receiver) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)receiver;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12241))+16);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12262));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12282))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12316))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12262));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i5);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12345))+16);
  i6 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12389))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12435))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 12396))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12267)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i5, i6, 0, (OOC_Doc__Document)i7, OOC_TRUE, OOC_TRUE, (i0!=(OOC_INT32)0), (OOC_SymbolTable__Type)i1);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitFPSection(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__FPSection fpSection) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
  OOC_SymbolTable__Type type;
  OOC_INT32 i;
  OOC_SymbolTable__VarDecl var;
  OOC_AST__Node flags;

  i0 = (OOC_INT32)fpSection;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12673))+12);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12709))+4);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 12720));
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12750));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12806))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 12817))+4);
  i6 = _check_pointer(i6, 12820);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12770))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 12820))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12750));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12854))+12);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12901))+4);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 12912))+4);
  i10 = _check_pointer(i10, 12915);
  i11 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 12915))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12979));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 12927)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 12927)), 12936))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 12755)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Name)i6, i9, 0, (OOC_Doc__Document)i10, OOC_TRUE, OOC_FALSE, (i11!=(OOC_INT32)0), (OOC_SymbolTable__Type)i1);
  var = (OOC_SymbolTable__VarDecl)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13023))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 13034))+4);
  i6 = _check_pointer(i6, 13037);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+1), i7, OOC_UINT32, 13037))*4);
  flags = (OOC_AST__Node)i6;
  i7 = i6!=(OOC_INT32)0;
  if (!i7) goto l6;
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i5, (OOC_AST_ExtTree__Flags)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 13108)))), &_td_OOC_AST_ExtTree__FlagsDesc, 13108)));
l6:
  i4 = i4+3;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l3_loop;
l11:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ProcDecl procDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
  OOC_INT32 endPos;
  OOC_SymbolTable__ProcDecl proc;
  OOC_SymbolTable__Type type;
  OOC_SymbolTable__FormalPars formalPars;
  OOC_INT32 i;
  OOC_AST__Node nodePtr;
  auto void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl_ParseFlags(OOC_SymbolTable__ProcDecl proc, OOC_AST_ExtTree__NodeList flags);
    
    void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl_ParseFlags(OOC_SymbolTable__ProcDecl proc, OOC_AST_ExtTree__NodeList flags) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;
      OOC_AST_ExtTree__Node n;

      i0 = (OOC_INT32)flags;
      i1 = *(OOC_INT32*)(_check_pointer(i0, 13530));
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l16;
      i2 = (OOC_INT32)proc;
      i3=0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13564))+4);
      i4 = _check_pointer(i4, 13567);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 13567))*4);
      i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13579)))), &_td_OOC_AST_ExtTree__NodeDesc, 13579);
      n = (OOC_AST_ExtTree__Node)i4;
      i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13600)))), &_td_OOC_AST_ExtTree__TerminalDesc);
      if (i5) goto l6;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13594)))), 13594);
      goto l11;
l6:
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 13638));
      i5 = *(OOC_INT8*)((_check_pointer(i5, 13642))+4);
      switch (i5) {
      case 41:
      case 42:
        i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13735)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i4, OOC_TRUE);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13719)))), OOC_SymbolTable__ProcDeclDesc_SetLinkName)),OOC_SymbolTable__ProcDeclDesc_SetLinkName)((OOC_SymbolTable__ProcDecl)i2, (Object__String)i4);
        goto l11;
      default:
        i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13787)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i4);
        goto l11;
      }
l11:
      i3 = i3+2;
      i4 = i3<=i1;
      i = i3;
      if (i4) goto l3_loop;
l16:
      return;
      ;
    }


  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13912))+20);
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  i2 = i1<0;
  endPos = i1;
  if (!i2) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13987))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13997));
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  endPos = i1;
  
l4:
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14029));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14084))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14050))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 14094));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14029));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14138))+16);
  i7 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i7);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14165))+16);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14202))+8);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14228))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 14175))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14034)))), OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i5, (OOC_SymbolTable__Name)i4, i1, i7, (OOC_Doc__Document)i8, (i9!=(OOC_INT32)0), (i10!=(OOC_INT32)0), (OOC_AST__Node)i0);
  proc = (OOC_SymbolTable__ProcDecl)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14275))+20);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l7;
  i3=OOC_FALSE;
  goto l9;
l7:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14313))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14334)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14334)), 14345))+20);
  i3 = i3!=(OOC_INT32)0;
  
l9:
  if (i3) goto l11;
  type = (OOC_SymbolTable__Type)(OOC_INT32)0;
  i3=(OOC_INT32)0;
  goto l12;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14400))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14421)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14421)), 14432))+20);
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i3);
  type = (OOC_SymbolTable__Type)i3;
  
l12:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14497));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14587));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14497));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i5);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14502)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Type)i3);
  formalPars = (OOC_SymbolTable__FormalPars)i3;
  *(OOC_INT32*)((_check_pointer(i1, 14611))+52) = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14656))+8);
  i4 = i4!=(OOC_INT32)0;
  if (!i4) goto l15;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14710))+8);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i4, (OOC_SymbolTable__Item)i3);
l15:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14759))+20);
  i4 = i4!=(OOC_INT32)0;
  if (i4) goto l18;
  i4=OOC_FALSE;
  goto l20;
l18:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14798))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14819)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14819)), 14830))+8);
  i4 = i4!=(OOC_INT32)0;
  
l20:
  if (!i4) goto l34;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14883))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14904)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14904)), 14915))+8);
  i4 = *(OOC_INT32*)(_check_pointer(i4, 14927));
  i4 = i4-1;
  i5 = 0<=i4;
  i = 0;
  if (!i5) goto l34;
  i5=0;
l24_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14970))+20);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14991)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14991)), 15002))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 15014))+4);
  i6 = _check_pointer(i6, 15017);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 15017))*4);
  nodePtr = (OOC_AST__Node)i6;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 15042)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i7) goto l27;
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i6, (OOC_SymbolTable__Item)i3);
  goto l28;
l27:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 15110));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 15115))+8);
  _assert(((
  _cmp8((const void*)(_check_pointer(i6, 15120)),(const void*)"..."))==(OOC_INT32)0), 127, 15095);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15152)))), OOC_SymbolTable__FormalParsDesc_EnableRestParameters)),OOC_SymbolTable__FormalParsDesc_EnableRestParameters)((OOC_SymbolTable__FormalPars)i3);
l28:
  i5 = i5+2;
  i6 = i5<=i4;
  i = i5;
  if (i6) goto l24_loop;
l34:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15285))+12);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l37;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15337))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15344))+8);
  OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl_ParseFlags((OOC_SymbolTable__ProcDecl)i1, (OOC_AST_ExtTree__NodeList)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15363)))), &_td_OOC_AST_ExtTree__NodeListDesc, 15363)));
l37:
  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15405))+28);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l40;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15455))+28);
  i1 = (OOC_INT32)proc;
  i2 = (OOC_INT32)v;
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i0, (OOC_SymbolTable__Item)i1);
l40:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitFieldList(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__FieldList fieldList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
  OOC_SymbolTable__Type type;
  OOC_INT32 i;
  OOC_SymbolTable__FieldDecl field;

  i0 = (OOC_INT32)fieldList;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15679))+8);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15715));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 15726));
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l8;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15758));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15816));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 15827))+4);
  i6 = _check_pointer(i6, 15830);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 15830))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15780))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 15842)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 15842)), 15851));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15758));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15889))+8);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15927));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 15938))+4);
  i10 = _check_pointer(i10, 15941);
  i11 = OOC_ARRAY_LENGTH(i10, (OOC_INT32)0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 15941))*4);
  i10 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)(_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 15953)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 15953)));
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15983));
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 15994))+4);
  i11 = _check_pointer(i11, 15997);
  i12 = OOC_ARRAY_LENGTH(i11, (OOC_INT32)0);
  i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i4, i12, OOC_UINT32, 15997))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 16009)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 16009)), 16018))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15763)))), OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i6, i9, i10, (OOC_Doc__Document)i11, (OOC_SymbolTable__Type)i1);
  field = (OOC_SymbolTable__FieldDecl)i5;
  i4 = i4+2;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l3_loop;
l8:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitTerminal(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Terminal terminal) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16169));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16190))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16169));
  i4 = (OOC_INT32)terminal;
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16174)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Name)(OOC_INT32)0, (OOC_SymbolTable__Name)i4);
  *(OOC_INT32*)((_check_pointer(i0, 16158))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitOperator(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Operator _operator) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16400));
  i2 = (OOC_INT32)_operator;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16421))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16452));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16400));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16505));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16531))+8);
  i2 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16405)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Name)i6, (OOC_SymbolTable__Name)i2);
  *(OOC_INT32*)((_check_pointer(i0, 16389))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitRecordType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__RecordType recordType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SymbolTable__Type baseType;
  OOC_SymbolTable__Record record;
  OOC_INT32 i;

  i0 = (OOC_INT32)recordType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16733))+12);
  i1 = i1!=(OOC_INT32)0;
  i2 = (OOC_INT32)v;
  if (i1) goto l3;
  baseType = (OOC_SymbolTable__Type)(OOC_INT32)0;
  i1=(OOC_INT32)0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16796))+12);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  
l4:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16864));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16883))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16916));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16864));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16869)))), OOC_SymbolTable_Builder__BuilderDesc_NewRecord)),OOC_SymbolTable_Builder__BuilderDesc_NewRecord)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Type)i1);
  record = (OOC_SymbolTable__Record)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17002))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i1, (OOC_AST_ExtTree__Flags)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17039))+20);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 17051));
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l15;
  i4=0;
l7_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17087))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 17099))+4);
  i5 = _check_pointer(i5, 17102);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 17102))*4);
  i5 = i5!=(OOC_INT32)0;
  if (!i5) goto l10;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17153))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 17165))+4);
  i5 = _check_pointer(i5, 17168);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 17168))*4);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i5, (OOC_SymbolTable__Item)i1);
l10:
  i4 = i4+2;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l7_loop;
l15:
  *(OOC_INT32*)((_check_pointer(i2, 17205))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitPointerType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__PointerType pointerType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17347));
  i2 = (OOC_INT32)pointerType;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17367))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 17436));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17347));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17506))+12);
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i6);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17352)))), OOC_SymbolTable_Builder__BuilderDesc_NewPointer)),OOC_SymbolTable_Builder__BuilderDesc_NewPointer)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Type)i6);
  *(OOC_INT32*)((_check_pointer(i0, 17336))+8) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17548))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17530))+8);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i0, (OOC_AST_ExtTree__Flags)i1);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitArrayType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ArrayType arrayType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_SymbolTable__Type baseType;
  OOC_INT32 i;
  OOC_SymbolTable__Position pos;
  OOC_SymbolTable__Array array;

  i0 = (OOC_INT32)arrayType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17769))+8);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 17779));
  i1 = i1>0;
  i2 = (OOC_INT32)v;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18337));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18355))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18387));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18337));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18462))+16);
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i6);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18342)))), OOC_SymbolTable_Builder__BuilderDesc_NewArray)),OOC_SymbolTable_Builder__BuilderDesc_NewArray)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, OOC_TRUE, (OOC_AST__Node)(OOC_INT32)0, (OOC_SymbolTable__Type)i6);
  array = (OOC_SymbolTable__Array)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18503))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i1, (OOC_AST_ExtTree__Flags)i0);
  i0=i1;
  goto l17;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17834))+16);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17867))+8);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 17877));
  i3 = i3-1;
  i = i3;
  i4 = i3>=0;
  if (i4) goto l6;
  i0=i1;
  goto l16;
l6:
  {register OOC_INT32 h0=i1;i1=i3;i3=h0;}
l7_loop:
  i4 = i1==0;
  if (i4) goto l10;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18024))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18034))+4);
  i4 = _check_pointer(i4, 18037);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index((i1-1), i5, OOC_UINT32, 18037))*4);
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  pos = (OOC_SymbolTable__Position)i4;
  
  goto l11;
l10:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17962));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  pos = (OOC_SymbolTable__Position)i4;
  
l11:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18079));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18179))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 18189))+4);
  i6 = _check_pointer(i6, 18192);
  i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18109))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 18192))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18079));
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 18084)))), OOC_SymbolTable_Builder__BuilderDesc_NewArray)),OOC_SymbolTable_Builder__BuilderDesc_NewArray)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Position)i4, OOC_FALSE, (OOC_AST__Node)i6, (OOC_SymbolTable__Type)i3);
  baseType = (OOC_SymbolTable__Type)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18257))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i3, (OOC_AST_ExtTree__Flags)i4);
  i1 = i1+-2;
  i = i1;
  i4 = i1>=0;
  if (i4) goto l7_loop;
l15:
  i0=i3;
l16:
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18305)))), &_td_OOC_SymbolTable__ArrayDesc, 18305);
  array = (OOC_SymbolTable__Array)i0;
  
l17:
  *(OOC_INT32*)((_check_pointer(i2, 18526))+8) = i0;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ProcType procType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SymbolTable__Type baseType;
  OOC_SymbolTable__FormalPars formalPars;
  OOC_INT32 i;

  i0 = (OOC_INT32)procType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18735))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18773))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18794)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 18794)), 18805))+20);
  i1 = i1!=(OOC_INT32)0;
  
l4:
  i2 = (OOC_INT32)v;
  if (i1) goto l7;
  baseType = (OOC_SymbolTable__Type)(OOC_INT32)0;
  i1=(OOC_INT32)0;
  goto l8;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18864))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18885)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 18885)), 18896))+20);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  
l8:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18965));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18988))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19058));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18965));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18970)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Type)i1);
  formalPars = (OOC_SymbolTable__FormalPars)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19137))+4);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l11;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19196))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19216)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19216)), 19227));
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i1, (OOC_AST_ExtTree__Flags)i3);
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19261))+4);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l14;
  i3=OOC_FALSE;
  goto l16;
l14:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19299))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19320)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19320)), 19331))+8);
  i3 = i3!=(OOC_INT32)0;
  
l16:
  if (!i3) goto l26;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19384))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19405)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19405)), 19416))+8);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 19428));
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l26;
  i4=0;
l20_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19477))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 19498)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19498)), 19509))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 19549))+4);
  i5 = _check_pointer(i5, 19552);
  i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 19552))*4);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i5, (OOC_SymbolTable__Item)i1);
  i4 = i4+2;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l20_loop;
l26:
  *(OOC_INT32*)((_check_pointer(i2, 19593))+8) = i1;
  return;
  ;
}

OOC_SymbolTable__Module OOC_AST_ExtTree_CreateSymTab__CreateSymTab(OOC_AST__Node module, OOC_SymbolTable_Builder__Builder stb, Object__String libraryName, URI__HierarchicalURI baseURI, URI__HierarchicalURI rootURI) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_AST_ExtTree_CreateSymTab__Visitor v;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree_CreateSymTab__Visitor.baseTypes[0]);
  v = (OOC_AST_ExtTree_CreateSymTab__Visitor)i0;
  i1 = (OOC_INT32)stb;
  *(OOC_INT32*)(_check_pointer(i0, 20212)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 20231))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 20253))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 20273))+12) = (OOC_INT32)0;
  i2 = (OOC_INT32)baseURI;
  *(OOC_INT32*)((_check_pointer(i0, 20293))+16) = i2;
  i2 = (OOC_INT32)rootURI;
  *(OOC_INT32*)((_check_pointer(i0, 20320))+20) = i2;
  i2 = (OOC_INT32)module;
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20371))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20371))+12);
  i4 = (OOC_INT32)libraryName;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20376)))), OOC_SymbolTable__ModuleDesc_SetLibraryName)),OOC_SymbolTable__ModuleDesc_SetLibraryName)((OOC_SymbolTable__Module)i3, (Object__String)i4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20426))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20413)))), OOC_SymbolTable_Builder__BuilderDesc_Finalize)),OOC_SymbolTable_Builder__BuilderDesc_Finalize)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20447))+12);
  return (OOC_SymbolTable__Module)i0;
  ;
}

void OOC_OOC_AST_ExtTree_CreateSymTab_init(void) {

  return;
  ;
}

/* --- */
