#include <OOC/AST/ExtTree/CreateSymTab.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_SymbolTable__Name OOC_AST_ExtTree_CreateSymTab__GetName(OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_Scanner_Builder_BasicList__Symbol sym;
  OOC_SymbolTable__Name name;

  i0 = (OOC_INT32)node;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2333)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2388)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2382)))), 2382);
  goto l8;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2427));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2434));
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2372));
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
l8:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  name = (OOC_SymbolTable__Name)i0;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2492))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 2502))+16);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 2512))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 2523))+24);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i1);
  return (OOC_SymbolTable__Name)i0;
  ;
}

static OOC_SymbolTable__Position OOC_AST_ExtTree_CreateSymTab__GetPosition(OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_Scanner_Builder_BasicList__Symbol sym;
  OOC_SymbolTable__Position position;

  i0 = (OOC_INT32)node;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2702)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2757)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2751)))), 2751);
  goto l8;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2796));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2803));
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2741));
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
l8:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Position.baseTypes[0]);
  position = (OOC_SymbolTable__Position)i0;
  i1 = (OOC_INT32)sym;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 2873))+16);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 2883))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 2894))+24);
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, i2, i3, i1);
  return (OOC_SymbolTable__Position)i0;
  ;
}

static OOC_INT8 OOC_AST_ExtTree_CreateSymTab__ExportMark(OOC_AST__Node id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)id;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3017)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3010)))), 3010);
  goto l15;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3051))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3120))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3126));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3131))+8);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3136)),(const void*)"*"))==0;
  if (i1) goto l11;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3197))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3203));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3208))+8);
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 3213)),(const void*)"-"))==0;
  if (!i0) goto l15;
  return 2;
  goto l15;
l11:
  return 1;
  goto l15;
l13:
  return 0;
l15:
  _failed_function(2955); return 0;
  ;
}

static OOC_INT32 OOC_AST_ExtTree_CreateSymTab__EndOfType(OOC_AST__Node t) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 end;

  i0 = (OOC_INT32)t;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l47;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3456)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l45;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3526)))), &_td_OOC_AST_ExtTree__OperatorDesc);
  if (i1) goto l43;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3593)))), &_td_OOC_AST_ExtTree__ArrayTypeDesc);
  if (i1) goto l41;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3660)))), &_td_OOC_AST_ExtTree__RecordTypeDesc);
  if (i1) goto l39;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3727)))), &_td_OOC_AST_ExtTree__PointerTypeDesc);
  if (i1) goto l37;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3796)))), &_td_OOC_AST_ExtTree__ProcTypeDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4101)))), &_td_OOC_AST_ExtTree__FormalParsDesc);
  if (i1) goto l17;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4098)))), 4098);
  goto l48;
l17:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4138))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4214))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l22;
  return (-1);
  goto l48;
l22:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4264))+12);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l24:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4188))+20);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l27:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3831))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l30;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4067));
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3885))+4);
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  end = i1;
  i2 = i1==(-1);
  if (i2) goto l33;
  return i1;
  goto l48;
l33:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3960));
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3779))+12);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l39:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3711))+24);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3643))+16);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l43:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3575))+8);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l45:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3494));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3506));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 3499))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 3511))+12);
  return (i1+i0);
  goto l48;
l47:
  return (-1);
l48:
  _failed_function(3319); return 0;
  ;
}

static void OOC_AST_ExtTree_CreateSymTab__Accept(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Item oldParent;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4459))+4);
  oldParent = (OOC_SymbolTable__Item)i1;
  i2 = (OOC_INT32)node;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4486)))), &_td_OOC_AST_ExtTree__NodeDesc, 4486)), 4491)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4486)))), &_td_OOC_AST_ExtTree__NodeDesc, 4486)), (OOC_AST_ExtTree__Visitor)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4510))+4) = i1;
  return;
  ;
}

static void OOC_AST_ExtTree_CreateSymTab__AcceptParent(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node, OOC_SymbolTable__Item newParent) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Item oldParent;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4885))+4);
  oldParent = (OOC_SymbolTable__Item)i1;
  i2 = (OOC_INT32)newParent;
  *(OOC_INT32*)((_check_pointer(i0, 4900))+4) = i2;
  i2 = (OOC_INT32)node;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4940)))), &_td_OOC_AST_ExtTree__NodeDesc, 4940)), 4945)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4940)))), &_td_OOC_AST_ExtTree__NodeDesc, 4940)), (OOC_AST_ExtTree__Visitor)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4964))+4) = i1;
  return;
  ;
}

static OOC_SymbolTable__Type OOC_AST_ExtTree_CreateSymTab__GetType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  *(OOC_INT32*)((_check_pointer(i0, 5101))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)node;
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5151))+8);
  _assert((i1!=(OOC_INT32)0), 127, 5142);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5176))+8);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5390))+8);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5408)))), &_td_OOC_AST_ExtTree__NodeListDesc, 5408);
  l = (OOC_AST_ExtTree__NodeList)i0;
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 5440));
  i2 = 0<i1;
  if (!i2) goto l15;
  i2 = (OOC_INT32)item;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5470))+4);
  i4 = _check_pointer(i4, 5473);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5473))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5485)))), &_td_OOC_AST_ExtTree__NodeDesc, 5485);
  n = (OOC_AST_ExtTree__Node)i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5506)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i5) goto l8;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5500)))), 5500);
  goto l9;
l8:
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5542)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i4);
l9:
  i3 = i3+2;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l5_loop;
l15:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitNodeList(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__NodeList nl) {

  _assert(0u, 127, 5690);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6192))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6198));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6208))+4);
  i1 = _check_pointer(i1, 6211);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 6211))*4);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i1);
  moduleName = (OOC_SymbolTable__Name)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6253))+28);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 6277));
  i4 = *(OOC_INT32*)((_check_pointer(i1, 6314))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i1, 6332))+8);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i5);
  mf = (OOC_AST_ExtTree__ModuleFlags)0;
  _class = 0;
  callConv = 0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6443))+8);
  i3 = (OOC_INT32)v;
  i2 = i2!=0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6475))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6482))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6492))+4);
  i2 = _check_pointer(i2, 6495);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 6495))*4);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6499)))), &_td_OOC_AST_ExtTree__ModuleFlagsDesc);
  
l5:
  if (i2) goto l7;
  i2=0;i4=0;i5=0;
  goto l16;
l7:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6546))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6553))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6563))+4);
  i2 = _check_pointer(i2, 6566);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 6566))*4);
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6578)))), &_td_OOC_AST_ExtTree__ModuleFlagsDesc, 6578);
  mf = (OOC_AST_ExtTree__ModuleFlags)i2;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6604));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6614));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 6619))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 6624)),(const void*)"FOREIGN"))==0;
  if (i4) goto l14;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6690));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6700));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 6705))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 6710)),(const void*)"INTERFACE"))==0;
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
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6791))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6791))+4);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 6801)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i6, 1u);
  str = (Object__String)i5;
  i5 = OOC_SymbolTable__StringToCallConv((Object__String)i5);
  callConv = i5;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6875));
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6875));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6880)))), OOC_SymbolTable_Builder__BuilderDesc_SetClass)),OOC_SymbolTable_Builder__BuilderDesc_SetClass)((OOC_SymbolTable_Builder__Builder)i7, i4);
  {register OOC_INT32 h0=i2;i2=i4;i4=i5;i5=h0;}
l16:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6933));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6969))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 6975))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6933));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6938)))), OOC_SymbolTable_Builder__BuilderDesc_NewModule)),OOC_SymbolTable_Builder__BuilderDesc_NewModule)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Name)i1, (OOC_Doc__Document)i7, i2, i4, (OOC_AST__Node)i0);
  moduleDecl = (OOC_SymbolTable__Module)i1;
  i2 = i5!=0;
  if (i2) goto l19;
  i2=0u;
  goto l21;
l19:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7074))+20);
  i2 = i2!=0;
  
l21:
  if (!i2) goto l66;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7123))+20);
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i2, 7137));
  i4 = 0<i2;
  if (!i4) goto l66;
  i4=0;
l25_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7163))+20);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7177))+4);
  i6 = _check_pointer(i6, 7180);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 7180))*4);
  n = (OOC_AST__Node)i6;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7199)))), &_td_OOC_AST_ExtTree__LinkFileFlagDesc);
  if (i7) goto l51;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7956)))), &_td_OOC_AST_ExtTree__LinkLibFlagDesc);
  if (!i7) goto l60;
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7999))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7999))+4);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 8008)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i8, 1u);
  str = (Object__String)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8043))+24);
  i8 = i8!=0;
  if (i8) goto l32;
  prefixOption = (Object__String)0;
  i8=0;
  goto l33;
l32:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8096))+24);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8096))+24);
  i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 8107)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i9, 0u);
  prefixOption = (Object__String)i8;
  
l33:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8204))+32);
  i9 = i9!=0;
  if (i9) goto l36;
  suffixOption = (Object__String)0;
  i9=0;
  goto l37;
l36:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8257))+32);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8257))+32);
  i9 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 8268)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i10, 0u);
  suffixOption = (Object__String)i9;
  
l37:
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8365))+12);
  i10 = i10==0;
  if (i10) goto l48;
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8464))+12);
  i10 = *(OOC_INT32*)(_check_pointer(i10, 8478));
  i10 = (OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], ((i10>>1)+1));
  depList = (Object__StringArrayPtr)i10;
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8521))+12);
  j = 0;
  i11 = *(OOC_INT32*)(_check_pointer(i11, 8535));
  i12 = 0<i11;
  if (!i12) goto l47;
  i12=0;
l42_loop:
  i13 = _check_pointer(i10, 8572);
  i14 = OOC_ARRAY_LENGTH(i13, 0);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8586))+12);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i15, 8600))+4);
  i15 = _check_pointer(i15, 8603);
  i16 = OOC_ARRAY_LENGTH(i15, 0);
  i15 = (OOC_INT32)*(OOC_INT32*)(i15+(_check_index(i12, i16, OOC_UINT32, 8603))*4);
  i16 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8586))+12);
  i16 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i16, 8600))+4);
  i16 = _check_pointer(i16, 8603);
  i17 = OOC_ARRAY_LENGTH(i16, 0);
  i16 = (OOC_INT32)*(OOC_INT32*)(i16+(_check_index(i12, i17, OOC_UINT32, 8603))*4);
  i15 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i15, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i15, 8615)))), &_td_OOC_AST_ExtTree__TerminalDesc, 8615)), 8624)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)(_type_guard(i16, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i16, 8615)))), &_td_OOC_AST_ExtTree__TerminalDesc, 8615)), 1u);
  *(OOC_INT32*)(i13+(_check_index((i12>>1), i14, OOC_UINT32, 8572))*4) = i15;
  i12 = i12+2;
  j = i12;
  i13 = i12<i11;
  if (i13) goto l42_loop;
l47:
  i6=i10;
  goto l49;
l48:
  i6 = (OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], 0);
  depList = (Object__StringArrayPtr)i6;
  
l49:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8696)))), OOC_SymbolTable__ModuleDesc_AddLinkLib)),OOC_SymbolTable__ModuleDesc_AddLinkLib)((OOC_SymbolTable__Module)i1, (Object__String)i7, (Object__StringArrayPtr)i6, (Object__String)i8, (Object__String)i9);
  goto l60;
l51:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7243))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7243))+4);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7253)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i8, 1u);
  str = (Object__String)i7;
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7303)))), &_td_Object__String8Desc, 7303)), 7311)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7303)))), &_td_Object__String8Desc, 7303)));
  chars = (Object__CharsLatin1)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7371))+16);
  i9 = OOC_ARRAY_LENGTH((_check_pointer(i7, 7367)), 0);
  i7 = (OOC_INT32)URI_Parser__NewURI((void*)(_check_pointer(i7, 7367)), i9, (URI__HierarchicalURI)i8, (void*)(OOC_INT32)&res);
  i8 = (OOC_INT32)res;
  uri = (URI__URI)i7;
  _assert((i8==0), 127, 7398);
  _assert((i7!=0), 127, 7428);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7485))+20);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7468)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i7, (URI__HierarchicalURI)i8);
  uri = (URI__URI)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7512))+12);
  i8 = i8!=0;
  if (i8) goto l54;
  prefixOption = (Object__String)0;
  i8=0;
  goto l55;
l54:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7565))+12);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7565))+12);
  i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 7576)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i9, 0u);
  prefixOption = (Object__String)i8;
  
l55:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7673))+20);
  i9 = i9!=0;
  if (i9) goto l58;
  suffixOption = (Object__String)0;
  i6=0;
  goto l59;
l58:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7726))+20);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7726))+20);
  i6 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 7737)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i6, 0u);
  suffixOption = (Object__String)i6;
  
l59:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7839)))), OOC_SymbolTable__ModuleDesc_AddLinkFile)),OOC_SymbolTable__ModuleDesc_AddLinkFile)((OOC_SymbolTable__Module)i1, (URI__HierarchicalURI)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7862)))), &_td_URI__HierarchicalURIDesc, 7862)), (Object__String)i8, (Object__String)i6);
l60:
  i4 = i4+1;
  i = i4;
  i6 = i4<i2;
  if (i6) goto l25_loop;
l66:
  *(OOC_INT32*)((_check_pointer(i3, 8852))+12) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8888))+16);
  i2 = i2!=0;
  if (!i2) goto l69;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8942))+16);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i2, (OOC_SymbolTable__Item)i1);
l69:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8991))+20);
  i2 = i2!=0;
  if (!i2) goto l72;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9085))+20);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i0, (OOC_SymbolTable__Item)i1);
l72:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitImportList(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ImportList importList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)importList;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9266))+4);
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i1, 9275));
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9318))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9327))+4);
  i4 = _check_pointer(i4, 9330);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9330))*4);
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i4);
  i3 = i3+2;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitBody(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Body body) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)body;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9475));
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i1, 9484));
  i2 = 0<i1;
  if (!i2) goto l11;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9510));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9519))+4);
  i4 = _check_pointer(i4, 9522);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9522))*4);
  i4 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9526)))), &_td_OOC_AST_ExtTree__TerminalDesc));
  if (!i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9575));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9584))+4);
  i4 = _check_pointer(i4, 9587);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9587))*4);
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i4);
l6:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9891))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9899));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9909))+4);
  i1 = _check_pointer(i1, 9912);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 9912))*4);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i1);
  moduleName = (OOC_SymbolTable__Name)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9958))+12);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 9982));
  i4 = *(OOC_INT32*)((_check_pointer(i1, 10019))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i1, 10037))+8);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i5);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10125))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10133));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10143))+4);
  i2 = _check_pointer(i2, 10164);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10175))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 10183));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 10193));
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index((i3-1), i4, OOC_UINT32, 10164))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10210)))), &_td_OOC_AST_ExtTree__TerminalDesc, 10210)), 10219));
  nameSym = (OOC_Scanner_Builder_BasicList__Symbol)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10244))+4);
  i3 = i3!=0;
  if (i3) goto l3;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10350))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 10358));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10368))+4);
  i3 = _check_pointer(i3, 10396);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10407))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 10415));
  i4 = *(OOC_INT32*)(_check_pointer(i4, 10425));
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index((i4-1), i5, OOC_UINT32, 10396))*4);
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  name = (OOC_SymbolTable__Name)i3;
  
  goto l4;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10299));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  name = (OOC_SymbolTable__Name)i3;
  
l4:
  i4 = (OOC_INT32)v;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 10464));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10569))+8);
  i6 = *(OOC_INT32*)((_check_pointer(i2, 10506))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 10519))+12);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10483))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10577))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 10464));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10469)))), OOC_SymbolTable_Builder__BuilderDesc_NewImport)),OOC_SymbolTable_Builder__BuilderDesc_NewImport)((OOC_SymbolTable_Builder__Builder)i4, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i3, (i6+i2), (OOC_Doc__Document)i0, (OOC_SymbolTable__Name)i1);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitConstDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ConstDecl constDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10751));
  i2 = (OOC_INT32)constDecl;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10810));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10782))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 10820));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10751));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10847))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10867)))), &_td_OOC_AST_ExtTree__TerminalDesc, 10867)), 10876));
  i5 = *(OOC_INT32*)((_check_pointer(i5, 10881))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10917));
  i6 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10939));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 10949))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10989))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10756)))), OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i5, i6, (OOC_Doc__Document)i7, (Object_Boxed__Object)0, (OOC_SymbolTable__PredefType)0, (OOC_AST__Node)i2);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitTypeDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__TypeDecl typeDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11140));
  i2 = (OOC_INT32)typeDecl;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11197));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11170))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11207));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11140));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11244))+8);
  i6 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11273));
  i7 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i7);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11303));
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 11313))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11346))+8);
  i0 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i2);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11145)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i6, i7, (OOC_Doc__Document)i8, (OOC_SymbolTable__Type)i0);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11566))+8);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11600));
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 11611));
  i4 = 0<i3;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11641));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11695));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11706))+4);
  i6 = _check_pointer(i6, 11709);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 11709))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11661))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 11721)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 11721)), 11730));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11641));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11766))+8);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11802));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 11813))+4);
  i10 = _check_pointer(i10, 11816);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 11816))*4);
  i10 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i10);
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11838));
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 11849))+4);
  i11 = _check_pointer(i11, 11852);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i4, i12, OOC_UINT32, 11852))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 11864)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 11864)), 11873))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11646)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i6, i9, i10, (OOC_Doc__Document)i11, 0u, 0u, 0u, (OOC_SymbolTable__Type)i1);
  var = (OOC_SymbolTable__VarDecl)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11944));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11955))+4);
  i6 = _check_pointer(i6, 11958);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+1), i7, OOC_UINT32, 11958))*4);
  flags = (OOC_AST__Node)i6;
  i7 = i6!=0;
  if (!i7) goto l6;
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i5, (OOC_AST_ExtTree__Flags)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 12029)))), &_td_OOC_AST_ExtTree__FlagsDesc, 12029)));
l6:
  i4 = i4+3;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l3_loop;
l11:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitReceiver(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Receiver receiver) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)receiver;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12234))+16);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12255));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12275))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12309))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12255));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i5);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12338))+16);
  i6 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12382))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12428))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 12389))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12260)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i5, i6, 0, (OOC_Doc__Document)i7, 1u, 1u, (i0!=0), (OOC_SymbolTable__Type)i1);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12666))+12);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12702))+4);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 12713));
  i4 = 0<i3;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12743));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12799))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 12810))+4);
  i6 = _check_pointer(i6, 12813);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12763))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 12813))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12743));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12847))+12);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12894))+4);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 12905))+4);
  i10 = _check_pointer(i10, 12908);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 12908))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12972));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 12920)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 12920)), 12929))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 12748)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Name)i6, i9, 0, (OOC_Doc__Document)i10, 1u, 0u, (i11!=0), (OOC_SymbolTable__Type)i1);
  var = (OOC_SymbolTable__VarDecl)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13016))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 13027))+4);
  i6 = _check_pointer(i6, 13030);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+1), i7, OOC_UINT32, 13030))*4);
  flags = (OOC_AST__Node)i6;
  i7 = i6!=0;
  if (!i7) goto l6;
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i5, (OOC_AST_ExtTree__Flags)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 13101)))), &_td_OOC_AST_ExtTree__FlagsDesc, 13101)));
l6:
  i4 = i4+3;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l3_loop;
l11:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ProcDecl procDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
  OOC_INT32 endPos;
  OOC_SymbolTable__ProcDecl proc;
  OOC_SymbolTable__Type type;
  OOC_SymbolTable__FormalPars formalPars;
  OOC_AST_ExtTree__FormalPars fpar;
  OOC_INT32 i;
  OOC_AST__Node nodePtr;
  auto void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl_ParseFlags(OOC_SymbolTable__ProcDecl proc, OOC_AST_ExtTree__NodeList flags);
    
    void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl_ParseFlags(OOC_SymbolTable__ProcDecl proc, OOC_AST_ExtTree__NodeList flags) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;
      OOC_AST_ExtTree__Node n;

      i0 = (OOC_INT32)flags;
      i = 0;
      i1 = *(OOC_INT32*)(_check_pointer(i0, 13553));
      i2 = 0<i1;
      if (!i2) goto l16;
      i2 = (OOC_INT32)proc;
      i3=0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13587))+4);
      i4 = _check_pointer(i4, 13590);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 13590))*4);
      i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13602)))), &_td_OOC_AST_ExtTree__NodeDesc, 13602);
      n = (OOC_AST_ExtTree__Node)i4;
      i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13623)))), &_td_OOC_AST_ExtTree__TerminalDesc);
      if (i5) goto l6;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13617)))), 13617);
      goto l11;
l6:
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 13661));
      i5 = *(OOC_INT8*)((_check_pointer(i5, 13665))+4);
      switch (i5) {
      case 43:
      case 44:
        i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13758)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i4, 1u);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13742)))), OOC_SymbolTable__ProcDeclDesc_SetLinkName)),OOC_SymbolTable__ProcDeclDesc_SetLinkName)((OOC_SymbolTable__ProcDecl)i2, (Object__String)i4);
        goto l11;
      default:
        i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13810)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i4);
        goto l11;
      }
l11:
      i3 = i3+2;
      i = i3;
      i4 = i3<i1;
      if (i4) goto l3_loop;
l16:
      return;
      ;
    }


  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13935))+20);
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  endPos = i1;
  i2 = i1<0;
  if (!i2) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14010))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14020));
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  endPos = i1;
  
l4:
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14052));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14107))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14073))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 14117));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14052));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14161))+16);
  i7 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i7);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14188))+16);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14225))+8);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14251))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 14198))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14057)))), OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i5, (OOC_SymbolTable__Name)i4, i1, i7, (OOC_Doc__Document)i8, (i9!=0), (i10!=0), (OOC_AST__Node)i0);
  proc = (OOC_SymbolTable__ProcDecl)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14298))+20);
  i3 = i3!=0;
  if (i3) goto l7;
  i3=0u;
  goto l9;
l7:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14336))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14357)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14357)), 14368))+20);
  i3 = i3!=0;
  
l9:
  if (i3) goto l11;
  type = (OOC_SymbolTable__Type)0;
  i3=0;
  goto l12;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14423))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14444)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14444)), 14455))+20);
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i3);
  type = (OOC_SymbolTable__Type)i3;
  
l12:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14520));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14610));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14520));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i5);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14525)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Type)i3);
  formalPars = (OOC_SymbolTable__FormalPars)i3;
  *(OOC_INT32*)((_check_pointer(i1, 14634))+52) = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14679))+8);
  i4 = i4!=0;
  if (!i4) goto l15;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14733))+8);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i4, (OOC_SymbolTable__Item)i3);
l15:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14782))+20);
  i4 = i4!=0;
  if (!i4) goto l45;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14829))+20);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14850)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14850);
  fpar = (OOC_AST_ExtTree__FormalPars)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 14894));
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i3, (OOC_AST_ExtTree__Flags)i5);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14917))+8);
  i5 = i5!=0;
  if (!i5) goto l32;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14968))+8);
  i = 0;
  i5 = *(OOC_INT32*)(_check_pointer(i5, 14980));
  i6 = 0<i5;
  if (!i6) goto l32;
  i6=0;
l22_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15021))+8);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 15033))+4);
  i7 = _check_pointer(i7, 15036);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 15036))*4);
  nodePtr = (OOC_AST__Node)i7;
  i8 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 15063)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i8) goto l25;
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i7, (OOC_SymbolTable__Item)i3);
  goto l26;
l25:
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i7, 15133));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 15138))+8);
  _assert(((
  _cmp8((const void*)(_check_pointer(i7, 15143)),(const void*)"..."))==0), 127, 15118);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15177)))), OOC_SymbolTable__FormalParsDesc_EnableRestParameters)),OOC_SymbolTable__FormalParsDesc_EnableRestParameters)((OOC_SymbolTable__FormalPars)i3);
l26:
  i6 = i6+2;
  i = i6;
  i7 = i6<i5;
  if (i7) goto l22_loop;
l32:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15319))+28);
  i5 = i5!=0;
  if (i5) goto l35;
  *(OOC_INT32*)((_check_pointer(i3, 15685))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], 0));
  goto l45;
l35:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15379))+28);
  i5 = *(OOC_INT32*)(_check_pointer(i5, 15390));
  *(OOC_INT32*)((_check_pointer(i3, 15365))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], ((i5+1)>>1)));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15432))+28);
  i = 0;
  i5 = *(OOC_INT32*)(_check_pointer(i5, 15444));
  i6 = 0<i5;
  if (!i6) goto l45;
  i6=0;
l38_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15485))+28);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 15497))+4);
  i7 = _check_pointer(i7, 15500);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 15500))*4);
  nodePtr = (OOC_AST__Node)i7;
  i7 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i7);
  type = (OOC_SymbolTable__Type)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15564))+52);
  i8 = _check_pointer(i8, 15571);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15599));
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15599));
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 15603)))), OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)),OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)((OOC_SymbolTable_Builder__Builder)i11, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Type)i7);
  *(OOC_INT32*)(i8+(_check_index((i6>>1), i9, OOC_UINT32, 15571))*4) = i7;
  i6 = i6+2;
  i = i6;
  i7 = i6<i5;
  if (i7) goto l38_loop;
l45:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15734))+12);
  i2 = i2!=0;
  if (!i2) goto l48;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15786))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15793))+8);
  OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl_ParseFlags((OOC_SymbolTable__ProcDecl)i1, (OOC_AST_ExtTree__NodeList)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15812)))), &_td_OOC_AST_ExtTree__NodeListDesc, 15812)));
l48:
  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15854))+28);
  i1 = i1!=0;
  if (!i1) goto l51;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15904))+28);
  i1 = (OOC_INT32)proc;
  i2 = (OOC_INT32)v;
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i0, (OOC_SymbolTable__Item)i1);
l51:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitFieldList(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__FieldList fieldList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
  OOC_SymbolTable__Type type;
  OOC_INT32 i;
  OOC_SymbolTable__FieldDecl field;

  i0 = (OOC_INT32)fieldList;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16128))+8);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16164));
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 16175));
  i4 = 0<i3;
  if (!i4) goto l8;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16207));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16265));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 16276))+4);
  i6 = _check_pointer(i6, 16279);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 16279))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16229))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 16291)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 16291)), 16300));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16207));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16338))+8);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16376));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 16387))+4);
  i10 = _check_pointer(i10, 16390);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 16390))*4);
  i10 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)(_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 16402)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 16402)));
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16432));
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 16443))+4);
  i11 = _check_pointer(i11, 16446);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i4, i12, OOC_UINT32, 16446))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 16458)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 16458)), 16467))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 16212)))), OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i6, i9, i10, (OOC_Doc__Document)i11, (OOC_SymbolTable__Type)i1);
  field = (OOC_SymbolTable__FieldDecl)i5;
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l3_loop;
l8:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitTerminal(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Terminal terminal) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16618));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16639))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16618));
  i4 = (OOC_INT32)terminal;
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16623)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Name)0, (OOC_SymbolTable__Name)i4);
  *(OOC_INT32*)((_check_pointer(i0, 16607))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitOperator(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Operator _operator) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16849));
  i2 = (OOC_INT32)_operator;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16870))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16901));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16849));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16954));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16980))+8);
  i2 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16854)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Name)i6, (OOC_SymbolTable__Name)i2);
  *(OOC_INT32*)((_check_pointer(i0, 16838))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitRecordType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__RecordType recordType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SymbolTable__Type baseType;
  OOC_SymbolTable__Record record;
  OOC_INT32 i;

  i0 = (OOC_INT32)recordType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17182))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  baseType = (OOC_SymbolTable__Type)(OOC_INT32)0;
  i1=(OOC_INT32)0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17245))+12);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  
l4:
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 17313));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17332))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17365));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 17313));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17318)))), OOC_SymbolTable_Builder__BuilderDesc_NewRecord)),OOC_SymbolTable_Builder__BuilderDesc_NewRecord)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Type)i1);
  record = (OOC_SymbolTable__Record)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17451))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i1, (OOC_AST_ExtTree__Flags)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17488))+20);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 17500));
  i4 = 0<i3;
  if (!i4) goto l15;
  i4=0;
l7_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17536))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 17548))+4);
  i5 = _check_pointer(i5, 17551);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 17551))*4);
  i5 = i5!=(OOC_INT32)0;
  if (!i5) goto l10;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17602))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 17614))+4);
  i5 = _check_pointer(i5, 17617);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 17617))*4);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i5, (OOC_SymbolTable__Item)i1);
l10:
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l7_loop;
l15:
  *(OOC_INT32*)((_check_pointer(i2, 17654))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitPointerType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__PointerType pointerType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17796));
  i2 = (OOC_INT32)pointerType;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17816))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 17885));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17796));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17955))+12);
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i6);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17801)))), OOC_SymbolTable_Builder__BuilderDesc_NewPointer)),OOC_SymbolTable_Builder__BuilderDesc_NewPointer)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Type)i6);
  *(OOC_INT32*)((_check_pointer(i0, 17785))+8) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17997))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17979))+8);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18218))+8);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 18228));
  i1 = i1>0;
  if (i1) goto l3;
  i1 = (OOC_INT32)v;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18786));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18804))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18836));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18786));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18911))+16);
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i1, (OOC_AST__Node)i6);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18791)))), OOC_SymbolTable_Builder__BuilderDesc_NewArray)),OOC_SymbolTable_Builder__BuilderDesc_NewArray)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, 1u, (OOC_AST__Node)0, (OOC_SymbolTable__Type)i6);
  array = (OOC_SymbolTable__Array)i2;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18952))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i2, (OOC_AST_ExtTree__Flags)i0);
  i0=i1;i1=i2;
  goto l17;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18283))+16);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18316))+8);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 18326));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18473))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18483))+4);
  i4 = _check_pointer(i4, 18486);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index((i1-1), i5, OOC_UINT32, 18486))*4);
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  pos = (OOC_SymbolTable__Position)i4;
  
  goto l11;
l10:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18411));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  pos = (OOC_SymbolTable__Position)i4;
  
l11:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18528));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18628))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 18638))+4);
  i6 = _check_pointer(i6, 18641);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18558))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 18641))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18528));
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 18533)))), OOC_SymbolTable_Builder__BuilderDesc_NewArray)),OOC_SymbolTable_Builder__BuilderDesc_NewArray)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Position)i4, 0u, (OOC_AST__Node)i6, (OOC_SymbolTable__Type)i3);
  baseType = (OOC_SymbolTable__Type)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18706))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i3, (OOC_AST_ExtTree__Flags)i4);
  i1 = i1+(-2);
  i = i1;
  i4 = i1>=0;
  if (i4) goto l7_loop;
l15:
  i0=i3;
l16:
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18754)))), &_td_OOC_SymbolTable__ArrayDesc, 18754);
  array = (OOC_SymbolTable__Array)i0;
  i1=i0;i0=i2;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 18975))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ProcType procType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_SymbolTable__Type baseType;
  OOC_SymbolTable__FormalPars formalPars;
  OOC_AST_ExtTree__FormalPars fpar;
  OOC_INT32 i;
  OOC_AST__Node nodePtr;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)procType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19257))+4);
  i2 = (OOC_INT32)v;
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19295))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19316)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19316)), 19327))+20);
  i1 = i1!=(OOC_INT32)0;
  
l5:
  if (i1) goto l7;
  baseType = (OOC_SymbolTable__Type)(OOC_INT32)0;
  i1=(OOC_INT32)0;
  goto l8;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19386))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19407)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19407)), 19418))+20);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  
l8:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 19487));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19510))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19580));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 19487));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19492)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Type)i1);
  formalPars = (OOC_SymbolTable__FormalPars)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19659))+4);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l11;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19718))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19738)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19738)), 19749));
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i1, (OOC_AST_ExtTree__Flags)i3);
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19783))+4);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l37;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19830))+4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19851)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19851);
  fpar = (OOC_AST_ExtTree__FormalPars)i0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19878))+8);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l24;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19929))+8);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 19941));
  i4 = 0<i3;
  if (!i4) goto l24;
  i4=0;
l18_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19988))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 20000))+4);
  i5 = _check_pointer(i5, 20003);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 20003))*4);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i5, (OOC_SymbolTable__Item)i1);
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l18_loop;
l24:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20065))+28);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l27;
  *(OOC_INT32*)((_check_pointer(i1, 20431))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], 0));
  goto l37;
l27:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20125))+28);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 20136));
  *(OOC_INT32*)((_check_pointer(i1, 20111))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], ((i3+1)>>1)));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20178))+28);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 20190));
  i4 = 0<i3;
  if (!i4) goto l37;
  i4=0;
l30_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20231))+28);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 20243))+4);
  i5 = _check_pointer(i5, 20246);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 20246))*4);
  nodePtr = (OOC_AST__Node)i5;
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i5);
  type = (OOC_SymbolTable__Type)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20310))+52);
  i6 = _check_pointer(i6, 20317);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 20345));
  i9 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 20345));
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 20349)))), OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)),OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)((OOC_SymbolTable_Builder__Builder)i9, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Type)i5);
  *(OOC_INT32*)(i6+(_check_index((i4>>1), i7, OOC_UINT32, 20317))*4) = i5;
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l30_loop;
l37:
  *(OOC_INT32*)((_check_pointer(i2, 20469))+8) = i1;
  return;
  ;
}

OOC_SymbolTable__Module OOC_AST_ExtTree_CreateSymTab__CreateSymTab(OOC_AST__Node module, OOC_SymbolTable_Builder__Builder stb, Object__String libraryName, URI__HierarchicalURI baseURI, URI__HierarchicalURI rootURI) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_AST_ExtTree_CreateSymTab__Visitor v;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree_CreateSymTab__Visitor.baseTypes[0]);
  v = (OOC_AST_ExtTree_CreateSymTab__Visitor)i0;
  i1 = (OOC_INT32)stb;
  *(OOC_INT32*)(_check_pointer(i0, 21088)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 21107))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 21129))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 21149))+12) = 0;
  i2 = (OOC_INT32)baseURI;
  *(OOC_INT32*)((_check_pointer(i0, 21169))+16) = i2;
  i2 = (OOC_INT32)rootURI;
  *(OOC_INT32*)((_check_pointer(i0, 21196))+20) = i2;
  i2 = (OOC_INT32)module;
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21247))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21247))+12);
  i4 = (OOC_INT32)libraryName;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21252)))), OOC_SymbolTable__ModuleDesc_SetLibraryName)),OOC_SymbolTable__ModuleDesc_SetLibraryName)((OOC_SymbolTable__Module)i3, (Object__String)i4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21302))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21289)))), OOC_SymbolTable_Builder__BuilderDesc_Finalize)),OOC_SymbolTable_Builder__BuilderDesc_Finalize)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21323))+12);
  return (OOC_SymbolTable__Module)i0;
  ;
}

void OOC_OOC_AST_ExtTree_CreateSymTab_init(void) {

  return;
  ;
}

/* --- */
