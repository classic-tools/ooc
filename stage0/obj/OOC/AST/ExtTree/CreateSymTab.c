#include "OOC/AST/ExtTree/CreateSymTab.d"
#include "__oo2c.h"

OOC_SymbolTable__Name OOC_AST_ExtTree_CreateSymTab__GetName(OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_Scanner_Builder_BasicList__Symbol sym;
  OOC_SymbolTable__Name name;

  i0 = (OOC_INT32)node;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2344)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2399)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2393)))), 2393);
  goto l8;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2438));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2445));
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2383));
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
l8:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  name = (OOC_SymbolTable__Name)i0;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2503))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 2513))+16);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 2523))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 2534))+24);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i1);
  return (OOC_SymbolTable__Name)i0;
  ;
}

static OOC_SymbolTable__Position OOC_AST_ExtTree_CreateSymTab__GetPosition(OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_Scanner_Builder_BasicList__Symbol sym;
  OOC_SymbolTable__Position position;

  i0 = (OOC_INT32)node;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2713)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2768)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2762)))), 2762);
  goto l8;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2807));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2814));
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2752));
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
l8:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Position.baseTypes[0]);
  position = (OOC_SymbolTable__Position)i0;
  i1 = (OOC_INT32)sym;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 2884))+16);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 2894))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 2905))+24);
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, i2, i3, i1);
  return (OOC_SymbolTable__Position)i0;
  ;
}

static OOC_INT8 OOC_AST_ExtTree_CreateSymTab__ExportMark(OOC_AST__Node id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)id;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3028)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3021)))), 3021);
  goto l15;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3062))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3131))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3137));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3142))+8);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 3147)),(const void*)"*"))==0;
  if (i1) goto l11;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3208))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3214));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3219))+8);
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 3224)),(const void*)"-"))==0;
  if (!i0) goto l15;
  return 2;
  goto l15;
l11:
  return 1;
  goto l15;
l13:
  return 0;
l15:
  _failed_function(2966); return 0;
  ;
}

static OOC_INT32 OOC_AST_ExtTree_CreateSymTab__EndOfType(OOC_AST__Node t) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 end;

  i0 = (OOC_INT32)t;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l47;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3467)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l45;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3537)))), &_td_OOC_AST_ExtTree__OperatorDesc);
  if (i1) goto l43;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3604)))), &_td_OOC_AST_ExtTree__ArrayTypeDesc);
  if (i1) goto l41;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3671)))), &_td_OOC_AST_ExtTree__RecordTypeDesc);
  if (i1) goto l39;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3738)))), &_td_OOC_AST_ExtTree__PointerTypeDesc);
  if (i1) goto l37;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3807)))), &_td_OOC_AST_ExtTree__ProcTypeDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4112)))), &_td_OOC_AST_ExtTree__FormalParsDesc);
  if (i1) goto l17;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4109)))), 4109);
  goto l48;
l17:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4149))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4225))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l22;
  return -1;
  goto l48;
l22:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4275))+12);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l24:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4199))+20);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l27:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3842))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l30;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4078));
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3896))+4);
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  end = i1;
  i2 = i1==-1;
  if (i2) goto l33;
  return i1;
  goto l48;
l33:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3971));
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3790))+12);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l39:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3722))+24);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3654))+16);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l43:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3586))+8);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l45:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3505));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3517));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 3510))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 3522))+12);
  return (i1+i0);
  goto l48;
l47:
  return -1;
l48:
  _failed_function(3330); return 0;
  ;
}

static void OOC_AST_ExtTree_CreateSymTab__Accept(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Item oldParent;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4470))+4);
  oldParent = (OOC_SymbolTable__Item)i1;
  i2 = (OOC_INT32)node;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4497)))), &_td_OOC_AST_ExtTree__NodeDesc, 4497)), 4502)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4497)))), &_td_OOC_AST_ExtTree__NodeDesc, 4497)), (OOC_AST_ExtTree__Visitor)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4521))+4) = i1;
  return;
  ;
}

static void OOC_AST_ExtTree_CreateSymTab__AcceptParent(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node, OOC_SymbolTable__Item newParent) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Item oldParent;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4896))+4);
  oldParent = (OOC_SymbolTable__Item)i1;
  i2 = (OOC_INT32)newParent;
  *(OOC_INT32*)((_check_pointer(i0, 4911))+4) = i2;
  i2 = (OOC_INT32)node;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4951)))), &_td_OOC_AST_ExtTree__NodeDesc, 4951)), 4956)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4951)))), &_td_OOC_AST_ExtTree__NodeDesc, 4951)), (OOC_AST_ExtTree__Visitor)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4975))+4) = i1;
  return;
  ;
}

static OOC_SymbolTable__Type OOC_AST_ExtTree_CreateSymTab__GetType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  *(OOC_INT32*)((_check_pointer(i0, 5112))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)node;
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5162))+8);
  _assert((i1!=(OOC_INT32)0), 127, 5153);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5187))+8);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5401))+8);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5419)))), &_td_OOC_AST_ExtTree__NodeListDesc, 5419);
  l = (OOC_AST_ExtTree__NodeList)i0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 5451));
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l15;
  i2 = (OOC_INT32)item;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5481))+4);
  i4 = _check_pointer(i4, 5484);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5484))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5496)))), &_td_OOC_AST_ExtTree__NodeDesc, 5496);
  n = (OOC_AST_ExtTree__Node)i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5517)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i5) goto l8;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5511)))), 5511);
  goto l9;
l8:
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5553)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i4);
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

  _assert(OOC_FALSE, 127, 5701);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitModule(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17;
  OOC_SymbolTable__Name moduleName;
  OOC_AST_ExtTree__ModuleFlags mf;
  OOC_INT8 _class;
  OOC_INT8 callConv;
  ADT_String__String str;
  OOC_SymbolTable__Module moduleDecl;
  OOC_INT32 i;
  OOC_AST__Node n;
  URI__URI uri;
  Msg__Msg res;
  ADT_String__String prefixOption;
  ADT_String__String suffixOption;
  ADT_String__StringArrayPtr depList;
  OOC_INT32 j;

  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6179))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6185));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6195))+4);
  i1 = _check_pointer(i1, 6198);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 6198))*4);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i1);
  moduleName = (OOC_SymbolTable__Name)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6240))+28);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 6264));
  i4 = *(OOC_INT32*)((_check_pointer(i1, 6301))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i1, 6319))+8);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i5);
  mf = (OOC_AST_ExtTree__ModuleFlags)(OOC_INT32)0;
  _class = 0;
  callConv = 0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6430))+8);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l3;
  i2=OOC_FALSE;
  goto l4;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6462))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6469))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6479))+4);
  i2 = _check_pointer(i2, 6482);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i3, OOC_UINT8, 6482))*4);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6486)))), &_td_OOC_AST_ExtTree__ModuleFlagsDesc);
  
l4:
  i3 = (OOC_INT32)v;
  if (i2) goto l7;
  i2=0;i4=0;i5=(OOC_INT32)0;
  goto l16;
l7:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6533))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6540))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6550))+4);
  i2 = _check_pointer(i2, 6553);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 6553))*4);
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6565)))), &_td_OOC_AST_ExtTree__ModuleFlagsDesc, 6565);
  mf = (OOC_AST_ExtTree__ModuleFlags)i2;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6591));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6601));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 6606))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 6611)),(const void*)"FOREIGN"))==0;
  if (i4) goto l14;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6677));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6687));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 6692))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 6697)),(const void*)"INTERFACE"))==0;
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
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6778))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6778))+4);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 6788)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i6, OOC_TRUE);
  str = (ADT_String__String)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6851))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 6851))+4);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 6858)), 0);
  i5 = OOC_SymbolTable__StringToCallConv((void*)(_check_pointer(i6, 6858)), i5);
  callConv = i5;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6870));
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6870));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6875)))), OOC_SymbolTable_Builder__BuilderDesc_SetClass)),OOC_SymbolTable_Builder__BuilderDesc_SetClass)((OOC_SymbolTable_Builder__Builder)i7, i4);
  {register OOC_INT32 h0=i2;i2=i4;i4=i5;i5=h0;}
l16:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6928));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6964))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 6970))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6928));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6933)))), OOC_SymbolTable_Builder__BuilderDesc_NewModule)),OOC_SymbolTable_Builder__BuilderDesc_NewModule)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Name)i1, (OOC_Doc__Document)i7, i2, i4, (OOC_AST__Node)i0);
  moduleDecl = (OOC_SymbolTable__Module)i1;
  i2 = i5!=(OOC_INT32)0;
  if (i2) goto l19;
  i2=OOC_FALSE;
  goto l21;
l19:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7069))+20);
  i2 = i2!=(OOC_INT32)0;
  
l21:
  if (!i2) goto l66;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7118))+20);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 7132));
  i2 = i2-1;
  i4 = 0<=i2;
  i = 0;
  if (!i4) goto l66;
  i4=0;
l25_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7158))+20);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7172))+4);
  i6 = _check_pointer(i6, 7175);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 7175))*4);
  n = (OOC_AST__Node)i6;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7194)))), &_td_OOC_AST_ExtTree__LinkFileFlagDesc);
  if (i7) goto l51;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7902)))), &_td_OOC_AST_ExtTree__LinkLibFlagDesc);
  if (!i7) goto l60;
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7945))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7945))+4);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7954)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i8, OOC_TRUE);
  str = (ADT_String__String)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7989))+24);
  i8 = i8!=(OOC_INT32)0;
  if (i8) goto l32;
  prefixOption = (ADT_String__String)(OOC_INT32)0;
  i8=(OOC_INT32)0;
  goto l33;
l32:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8042))+24);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8042))+24);
  i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 8053)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i9, OOC_FALSE);
  prefixOption = (ADT_String__String)i8;
  
l33:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8150))+32);
  i9 = i9!=(OOC_INT32)0;
  if (i9) goto l36;
  suffixOption = (ADT_String__String)(OOC_INT32)0;
  i9=(OOC_INT32)0;
  goto l37;
l36:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8203))+32);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8203))+32);
  i9 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 8214)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i10, OOC_FALSE);
  suffixOption = (ADT_String__String)i9;
  
l37:
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8311))+12);
  i10 = i10==(OOC_INT32)0;
  if (i10) goto l48;
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8410))+12);
  i10 = *(OOC_INT32*)(_check_pointer(i10, 8424));
  i10 = (OOC_INT32)RT0__NewObject(_td_ADT_String__StringArrayPtr.baseTypes[0], ((i10>>1)+1));
  depList = (ADT_String__StringArrayPtr)i10;
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8467))+12);
  i11 = *(OOC_INT32*)(_check_pointer(i11, 8481));
  i11 = i11-1;
  i12 = 0<=i11;
  j = 0;
  if (!i12) goto l47;
  i12=0;
l42_loop:
  i13 = _check_pointer(i10, 8518);
  i14 = OOC_ARRAY_LENGTH(i13, 0);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8532))+12);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i15, 8546))+4);
  i15 = _check_pointer(i15, 8549);
  i16 = OOC_ARRAY_LENGTH(i15, 0);
  i15 = (OOC_INT32)*(OOC_INT32*)(i15+(_check_index(i12, i16, OOC_UINT32, 8549))*4);
  i16 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8532))+12);
  i16 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i16, 8546))+4);
  i16 = _check_pointer(i16, 8549);
  i17 = OOC_ARRAY_LENGTH(i16, 0);
  i16 = (OOC_INT32)*(OOC_INT32*)(i16+(_check_index(i12, i17, OOC_UINT32, 8549))*4);
  i15 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i15, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i15, 8561)))), &_td_OOC_AST_ExtTree__TerminalDesc, 8561)), 8570)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)(_type_guard(i16, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i16, 8561)))), &_td_OOC_AST_ExtTree__TerminalDesc, 8561)), OOC_TRUE);
  *(OOC_INT32*)(i13+(_check_index((i12>>1), i14, OOC_UINT32, 8518))*4) = i15;
  i12 = i12+2;
  i13 = i12<=i11;
  j = i12;
  if (i13) goto l42_loop;
l47:
  i6=i10;
  goto l49;
l48:
  i6 = (OOC_INT32)RT0__NewObject(_td_ADT_String__StringArrayPtr.baseTypes[0], 0);
  depList = (ADT_String__StringArrayPtr)i6;
  
l49:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8642)))), OOC_SymbolTable__ModuleDesc_AddLinkLib)),OOC_SymbolTable__ModuleDesc_AddLinkLib)((OOC_SymbolTable__Module)i1, (ADT_String__String)i7, (ADT_String__StringArrayPtr)i6, (ADT_String__String)i8, (ADT_String__String)i9);
  goto l60;
l51:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7238))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7238))+4);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7248)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i8, OOC_TRUE);
  str = (ADT_String__String)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7306))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7306))+4);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7317))+16);
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i7, 7313)), 0);
  i7 = (OOC_INT32)URI_Parser__NewURI((void*)(_check_pointer(i8, 7313)), i7, (URI__HierarchicalURI)i9, (void*)(OOC_INT32)&res);
  i8 = (OOC_INT32)res;
  uri = (URI__URI)i7;
  _assert((i8==(OOC_INT32)0), 127, 7344);
  _assert((i7!=(OOC_INT32)0), 127, 7374);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7431))+20);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7414)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i7, (URI__HierarchicalURI)i8);
  uri = (URI__URI)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7458))+12);
  i8 = i8!=(OOC_INT32)0;
  if (i8) goto l54;
  prefixOption = (ADT_String__String)(OOC_INT32)0;
  i8=(OOC_INT32)0;
  goto l55;
l54:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7511))+12);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7511))+12);
  i8 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 7522)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i9, OOC_FALSE);
  prefixOption = (ADT_String__String)i8;
  
l55:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7619))+20);
  i9 = i9!=(OOC_INT32)0;
  if (i9) goto l58;
  suffixOption = (ADT_String__String)(OOC_INT32)0;
  i6=(OOC_INT32)0;
  goto l59;
l58:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7672))+20);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7672))+20);
  i6 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i9, 7683)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i6, OOC_FALSE);
  suffixOption = (ADT_String__String)i6;
  
l59:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7785)))), OOC_SymbolTable__ModuleDesc_AddLinkFile)),OOC_SymbolTable__ModuleDesc_AddLinkFile)((OOC_SymbolTable__Module)i1, (URI__HierarchicalURI)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7808)))), &_td_URI__HierarchicalURIDesc, 7808)), (ADT_String__String)i8, (ADT_String__String)i6);
l60:
  i4 = i4+1;
  i6 = i4<=i2;
  i = i4;
  if (i6) goto l25_loop;
l66:
  *(OOC_INT32*)((_check_pointer(i3, 8798))+12) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8834))+16);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l69;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8888))+16);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i2, (OOC_SymbolTable__Item)i1);
l69:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8937))+20);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l72;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9031))+20);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i0, (OOC_SymbolTable__Item)i1);
l72:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitImportList(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ImportList importList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)importList;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9212))+4);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 9221));
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9264))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9273))+4);
  i4 = _check_pointer(i4, 9276);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9276))*4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9421));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 9430));
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9456));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9465))+4);
  i4 = _check_pointer(i4, 9468);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9468))*4);
  i4 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9472)))), &_td_OOC_AST_ExtTree__TerminalDesc));
  if (!i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9521));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9530))+4);
  i4 = _check_pointer(i4, 9533);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9533))*4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9837))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9845));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9855))+4);
  i1 = _check_pointer(i1, 9858);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 9858))*4);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i1);
  moduleName = (OOC_SymbolTable__Name)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9904))+12);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 9928));
  i4 = *(OOC_INT32*)((_check_pointer(i1, 9965))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i1, 9983))+8);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i5);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10071))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10079));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10089))+4);
  i2 = _check_pointer(i2, 10110);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10121))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 10129));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 10139));
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index((i3-1), i4, OOC_UINT32, 10110))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10156)))), &_td_OOC_AST_ExtTree__TerminalDesc, 10156)), 10165));
  nameSym = (OOC_Scanner_Builder_BasicList__Symbol)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10190))+4);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l3;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10296))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 10304));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10314))+4);
  i3 = _check_pointer(i3, 10342);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10353))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 10361));
  i4 = *(OOC_INT32*)(_check_pointer(i4, 10371));
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index((i4-1), i5, OOC_UINT32, 10342))*4);
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  name = (OOC_SymbolTable__Name)i3;
  
  goto l4;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10245));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  name = (OOC_SymbolTable__Name)i3;
  
l4:
  i4 = (OOC_INT32)v;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 10410));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10515))+8);
  i6 = *(OOC_INT32*)((_check_pointer(i2, 10452))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 10465))+12);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10429))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10523))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 10410));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10415)))), OOC_SymbolTable_Builder__BuilderDesc_NewImport)),OOC_SymbolTable_Builder__BuilderDesc_NewImport)((OOC_SymbolTable_Builder__Builder)i4, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i3, (i6+i2), (OOC_Doc__Document)i0, (OOC_SymbolTable__Name)i1);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitConstDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ConstDecl constDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10697));
  i2 = (OOC_INT32)constDecl;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10756));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10728))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 10766));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10697));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10793))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10813)))), &_td_OOC_AST_ExtTree__TerminalDesc, 10813)), 10822));
  i5 = *(OOC_INT32*)((_check_pointer(i5, 10827))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10863));
  i6 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10885));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 10895))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10935))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10702)))), OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i5, i6, (OOC_Doc__Document)i7, (Language__Value)(OOC_INT32)0, (OOC_SymbolTable__PredefType)(OOC_INT32)0, (OOC_AST__Node)i2);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitTypeDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__TypeDecl typeDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11086));
  i2 = (OOC_INT32)typeDecl;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11143));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11116))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11153));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11086));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11190))+8);
  i6 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11219));
  i7 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i7);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11249));
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 11259))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11292))+8);
  i0 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i2);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11091)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i6, i7, (OOC_Doc__Document)i8, (OOC_SymbolTable__Type)i0);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11512))+8);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11546));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 11557));
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11587));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11641));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11652))+4);
  i6 = _check_pointer(i6, 11655);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 11655))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11607))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 11667)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 11667)), 11676));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11587));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11712))+8);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11748));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 11759))+4);
  i10 = _check_pointer(i10, 11762);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 11762))*4);
  i10 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i10);
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11784));
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 11795))+4);
  i11 = _check_pointer(i11, 11798);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i4, i12, OOC_UINT32, 11798))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 11810)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 11810)), 11819))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11592)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i6, i9, i10, (OOC_Doc__Document)i11, OOC_FALSE, OOC_FALSE, OOC_FALSE, (OOC_SymbolTable__Type)i1);
  var = (OOC_SymbolTable__VarDecl)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11890));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11901))+4);
  i6 = _check_pointer(i6, 11904);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+1), i7, OOC_UINT32, 11904))*4);
  flags = (OOC_AST__Node)i6;
  i7 = i6!=(OOC_INT32)0;
  if (!i7) goto l6;
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i5, (OOC_AST_ExtTree__Flags)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 11975)))), &_td_OOC_AST_ExtTree__FlagsDesc, 11975)));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12180))+16);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12201));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12221))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12255))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12201));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i5);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12284))+16);
  i6 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12328))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12374))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 12335))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12206)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i5, i6, 0, (OOC_Doc__Document)i7, OOC_TRUE, OOC_TRUE, (i0!=(OOC_INT32)0), (OOC_SymbolTable__Type)i1);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12612))+12);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12648))+4);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 12659));
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12689));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12745))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 12756))+4);
  i6 = _check_pointer(i6, 12759);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12709))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 12759))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12689));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12793))+12);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12840))+4);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 12851))+4);
  i10 = _check_pointer(i10, 12854);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 12854))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12918));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 12866)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 12866)), 12875))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 12694)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Name)i6, i9, 0, (OOC_Doc__Document)i10, OOC_TRUE, OOC_FALSE, (i11!=(OOC_INT32)0), (OOC_SymbolTable__Type)i1);
  var = (OOC_SymbolTable__VarDecl)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12962))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 12973))+4);
  i6 = _check_pointer(i6, 12976);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+1), i7, OOC_UINT32, 12976))*4);
  flags = (OOC_AST__Node)i6;
  i7 = i6!=(OOC_INT32)0;
  if (!i7) goto l6;
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i5, (OOC_AST_ExtTree__Flags)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 13047)))), &_td_OOC_AST_ExtTree__FlagsDesc, 13047)));
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
      i1 = *(OOC_INT32*)(_check_pointer(i0, 13469));
      i1 = i1-1;
      i2 = 0<=i1;
      i = 0;
      if (!i2) goto l16;
      i2 = (OOC_INT32)proc;
      i3=0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13503))+4);
      i4 = _check_pointer(i4, 13506);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 13506))*4);
      i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13518)))), &_td_OOC_AST_ExtTree__NodeDesc, 13518);
      n = (OOC_AST_ExtTree__Node)i4;
      i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13539)))), &_td_OOC_AST_ExtTree__TerminalDesc);
      if (i5) goto l6;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13533)))), 13533);
      goto l11;
l6:
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 13577));
      i5 = *(OOC_INT8*)((_check_pointer(i5, 13581))+4);
      switch (i5) {
      case 41:
      case 42:
        i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13674)))), OOC_AST_ExtTree__TerminalDesc_GetString)),OOC_AST_ExtTree__TerminalDesc_GetString)((OOC_AST_ExtTree__Terminal)i4, OOC_TRUE);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13658)))), OOC_SymbolTable__ProcDeclDesc_SetLinkName)),OOC_SymbolTable__ProcDeclDesc_SetLinkName)((OOC_SymbolTable__ProcDecl)i2, (ADT_String__String)i4);
        goto l11;
      default:
        i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13726)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13851))+20);
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  i2 = i1<0;
  endPos = i1;
  if (!i2) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13926))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13936));
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  endPos = i1;
  
l4:
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13968));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14023))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13989))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 14033));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13968));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14077))+16);
  i7 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i7);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14104))+16);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14141))+8);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14167))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 14114))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13973)))), OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i5, (OOC_SymbolTable__Name)i4, i1, i7, (OOC_Doc__Document)i8, (i9!=(OOC_INT32)0), (i10!=(OOC_INT32)0), (OOC_AST__Node)i0);
  proc = (OOC_SymbolTable__ProcDecl)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14214))+20);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l7;
  i3=OOC_FALSE;
  goto l9;
l7:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14252))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14273)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14273)), 14284))+20);
  i3 = i3!=(OOC_INT32)0;
  
l9:
  if (i3) goto l11;
  type = (OOC_SymbolTable__Type)(OOC_INT32)0;
  i3=(OOC_INT32)0;
  goto l12;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14339))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14360)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14360)), 14371))+20);
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i3);
  type = (OOC_SymbolTable__Type)i3;
  
l12:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14436));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14526));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14436));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i5);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14441)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Type)i3);
  formalPars = (OOC_SymbolTable__FormalPars)i3;
  *(OOC_INT32*)((_check_pointer(i1, 14550))+52) = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14595))+8);
  i4 = i4!=(OOC_INT32)0;
  if (!i4) goto l15;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14649))+8);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i4, (OOC_SymbolTable__Item)i3);
l15:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14698))+20);
  i4 = i4!=(OOC_INT32)0;
  if (i4) goto l18;
  i4=OOC_FALSE;
  goto l20;
l18:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14737))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14758)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14758)), 14769))+8);
  i4 = i4!=(OOC_INT32)0;
  
l20:
  if (!i4) goto l34;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14822))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14843)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14843)), 14854))+8);
  i4 = *(OOC_INT32*)(_check_pointer(i4, 14866));
  i4 = i4-1;
  i5 = 0<=i4;
  i = 0;
  if (!i5) goto l34;
  i5=0;
l24_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14909))+20);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14930)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14930)), 14941))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 14953))+4);
  i6 = _check_pointer(i6, 14956);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 14956))*4);
  nodePtr = (OOC_AST__Node)i6;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14981)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i7) goto l27;
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i6, (OOC_SymbolTable__Item)i3);
  goto l28;
l27:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 15049));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 15054))+8);
  _assert(((
  _cmp8((const void*)(_check_pointer(i6, 15059)),(const void*)"..."))==0), 127, 15034);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15091)))), OOC_SymbolTable__FormalParsDesc_EnableRestParameters)),OOC_SymbolTable__FormalParsDesc_EnableRestParameters)((OOC_SymbolTable__FormalPars)i3);
l28:
  i5 = i5+2;
  i6 = i5<=i4;
  i = i5;
  if (i6) goto l24_loop;
l34:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15224))+12);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l37;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15276))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15283))+8);
  OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl_ParseFlags((OOC_SymbolTable__ProcDecl)i1, (OOC_AST_ExtTree__NodeList)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15302)))), &_td_OOC_AST_ExtTree__NodeListDesc, 15302)));
l37:
  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15344))+28);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l40;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15394))+28);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15618))+8);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15654));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 15665));
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l8;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15697));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15755));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 15766))+4);
  i6 = _check_pointer(i6, 15769);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 15769))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15719))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 15781)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 15781)), 15790));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15697));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15828))+8);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15866));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 15877))+4);
  i10 = _check_pointer(i10, 15880);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 15880))*4);
  i10 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)(_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 15892)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 15892)));
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15922));
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 15933))+4);
  i11 = _check_pointer(i11, 15936);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i4, i12, OOC_UINT32, 15936))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 15948)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 15948)), 15957))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15702)))), OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i6, i9, i10, (OOC_Doc__Document)i11, (OOC_SymbolTable__Type)i1);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16108));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16129))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16108));
  i4 = (OOC_INT32)terminal;
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16113)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Name)(OOC_INT32)0, (OOC_SymbolTable__Name)i4);
  *(OOC_INT32*)((_check_pointer(i0, 16097))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitOperator(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Operator _operator) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16339));
  i2 = (OOC_INT32)_operator;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16360))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16391));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16339));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16444));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16470))+8);
  i2 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16344)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Name)i6, (OOC_SymbolTable__Name)i2);
  *(OOC_INT32*)((_check_pointer(i0, 16328))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitRecordType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__RecordType recordType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SymbolTable__Type baseType;
  OOC_SymbolTable__Record record;
  OOC_INT32 i;

  i0 = (OOC_INT32)recordType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16672))+12);
  i1 = i1!=(OOC_INT32)0;
  i2 = (OOC_INT32)v;
  if (i1) goto l3;
  baseType = (OOC_SymbolTable__Type)(OOC_INT32)0;
  i1=(OOC_INT32)0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16735))+12);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  
l4:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16803));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16822))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16855));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16803));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16808)))), OOC_SymbolTable_Builder__BuilderDesc_NewRecord)),OOC_SymbolTable_Builder__BuilderDesc_NewRecord)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Type)i1);
  record = (OOC_SymbolTable__Record)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16941))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i1, (OOC_AST_ExtTree__Flags)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16978))+20);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 16990));
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l15;
  i4=0;
l7_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17026))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 17038))+4);
  i5 = _check_pointer(i5, 17041);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 17041))*4);
  i5 = i5!=(OOC_INT32)0;
  if (!i5) goto l10;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17092))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 17104))+4);
  i5 = _check_pointer(i5, 17107);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 17107))*4);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i5, (OOC_SymbolTable__Item)i1);
l10:
  i4 = i4+2;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l7_loop;
l15:
  *(OOC_INT32*)((_check_pointer(i2, 17144))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitPointerType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__PointerType pointerType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17286));
  i2 = (OOC_INT32)pointerType;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17306))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 17375));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17286));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17445))+12);
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i6);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17291)))), OOC_SymbolTable_Builder__BuilderDesc_NewPointer)),OOC_SymbolTable_Builder__BuilderDesc_NewPointer)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Type)i6);
  *(OOC_INT32*)((_check_pointer(i0, 17275))+8) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17487))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17469))+8);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17708))+8);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 17718));
  i1 = i1>0;
  i2 = (OOC_INT32)v;
  if (i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18276));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18294))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18326));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18276));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18401))+16);
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i6);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18281)))), OOC_SymbolTable_Builder__BuilderDesc_NewArray)),OOC_SymbolTable_Builder__BuilderDesc_NewArray)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, OOC_TRUE, (OOC_AST__Node)(OOC_INT32)0, (OOC_SymbolTable__Type)i6);
  array = (OOC_SymbolTable__Array)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18442))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i1, (OOC_AST_ExtTree__Flags)i0);
  i0=i1;
  goto l17;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17773))+16);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17806))+8);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 17816));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17963))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 17973))+4);
  i4 = _check_pointer(i4, 17976);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index((i1-1), i5, OOC_UINT32, 17976))*4);
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  pos = (OOC_SymbolTable__Position)i4;
  
  goto l11;
l10:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17901));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  pos = (OOC_SymbolTable__Position)i4;
  
l11:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18018));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18118))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 18128))+4);
  i6 = _check_pointer(i6, 18131);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18048))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 18131))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18018));
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 18023)))), OOC_SymbolTable_Builder__BuilderDesc_NewArray)),OOC_SymbolTable_Builder__BuilderDesc_NewArray)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Position)i4, OOC_FALSE, (OOC_AST__Node)i6, (OOC_SymbolTable__Type)i3);
  baseType = (OOC_SymbolTable__Type)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18196))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i3, (OOC_AST_ExtTree__Flags)i4);
  i1 = i1+-2;
  i = i1;
  i4 = i1>=0;
  if (i4) goto l7_loop;
l15:
  i0=i3;
l16:
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18244)))), &_td_OOC_SymbolTable__ArrayDesc, 18244);
  array = (OOC_SymbolTable__Array)i0;
  
l17:
  *(OOC_INT32*)((_check_pointer(i2, 18465))+8) = i0;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ProcType procType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SymbolTable__Type baseType;
  OOC_SymbolTable__FormalPars formalPars;
  OOC_INT32 i;

  i0 = (OOC_INT32)procType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18674))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18712))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18733)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 18733)), 18744))+20);
  i1 = i1!=(OOC_INT32)0;
  
l4:
  i2 = (OOC_INT32)v;
  if (i1) goto l7;
  baseType = (OOC_SymbolTable__Type)(OOC_INT32)0;
  i1=(OOC_INT32)0;
  goto l8;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18803))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18824)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 18824)), 18835))+20);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  
l8:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18904));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18927))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18997));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18904));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 18909)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Type)i1);
  formalPars = (OOC_SymbolTable__FormalPars)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19076))+4);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l11;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19135))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19155)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19155)), 19166));
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i1, (OOC_AST_ExtTree__Flags)i3);
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19200))+4);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l14;
  i3=OOC_FALSE;
  goto l16;
l14:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19238))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19259)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19259)), 19270))+8);
  i3 = i3!=(OOC_INT32)0;
  
l16:
  if (!i3) goto l26;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19323))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19344)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19344)), 19355))+8);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 19367));
  i3 = i3-1;
  i4 = 0<=i3;
  i = 0;
  if (!i4) goto l26;
  i4=0;
l20_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19416))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 19437)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19437)), 19448))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 19488))+4);
  i5 = _check_pointer(i5, 19491);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 19491))*4);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i5, (OOC_SymbolTable__Item)i1);
  i4 = i4+2;
  i5 = i4<=i3;
  i = i4;
  if (i5) goto l20_loop;
l26:
  *(OOC_INT32*)((_check_pointer(i2, 19532))+8) = i1;
  return;
  ;
}

OOC_SymbolTable__Module OOC_AST_ExtTree_CreateSymTab__CreateSymTab(OOC_AST__Node module, OOC_SymbolTable_Builder__Builder stb, ADT_String__String libraryName, URI__HierarchicalURI baseURI, URI__HierarchicalURI rootURI) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_AST_ExtTree_CreateSymTab__Visitor v;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree_CreateSymTab__Visitor.baseTypes[0]);
  v = (OOC_AST_ExtTree_CreateSymTab__Visitor)i0;
  i1 = (OOC_INT32)stb;
  *(OOC_INT32*)(_check_pointer(i0, 20158)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 20177))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 20199))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 20219))+12) = (OOC_INT32)0;
  i2 = (OOC_INT32)baseURI;
  *(OOC_INT32*)((_check_pointer(i0, 20239))+16) = i2;
  i2 = (OOC_INT32)rootURI;
  *(OOC_INT32*)((_check_pointer(i0, 20266))+20) = i2;
  i2 = (OOC_INT32)module;
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20317))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20317))+12);
  i4 = (OOC_INT32)libraryName;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 20322)))), OOC_SymbolTable__ModuleDesc_SetLibraryName)),OOC_SymbolTable__ModuleDesc_SetLibraryName)((OOC_SymbolTable__Module)i3, (ADT_String__String)i4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20372))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20359)))), OOC_SymbolTable_Builder__BuilderDesc_Finalize)),OOC_SymbolTable_Builder__BuilderDesc_Finalize)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20393))+12);
  return (OOC_SymbolTable__Module)i0;
  ;
}

void OOC_OOC_AST_ExtTree_CreateSymTab_init(void) {

  return;
  ;
}

/* --- */
