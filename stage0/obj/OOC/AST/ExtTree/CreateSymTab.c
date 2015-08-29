#include <OOC/AST/ExtTree/CreateSymTab.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_SymbolTable__Name OOC_AST_ExtTree_CreateSymTab__GetName(OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_Scanner_BasicList__Symbol sym;
  OOC_SymbolTable__Name name;

  i0 = (OOC_INT32)node;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2349)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2404)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2398)))), 2398);
  goto l8;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2443));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2450));
  sym = (OOC_Scanner_BasicList__Symbol)i0;
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2388));
  sym = (OOC_Scanner_BasicList__Symbol)i0;
l8:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  name = (OOC_SymbolTable__Name)i0;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2508))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 2518))+16);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 2528))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 2539))+24);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i1);
  return (OOC_SymbolTable__Name)i0;
  ;
}

static OOC_SymbolTable__Position OOC_AST_ExtTree_CreateSymTab__GetPosition(OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_Scanner_BasicList__Symbol sym;
  OOC_SymbolTable__Position position;

  i0 = (OOC_INT32)node;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2718)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2773)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l9;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2835)))), &_td_OOC_AST_ExtTree__OperatorDesc);
  if (i1) goto l7;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2829)))), 2829);
  goto l12;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2874))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2877));
  i1 = *(OOC_INT8*)((_check_pointer(i1, 2881))+4);
  _assert((i1==18), 127, 2863);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2920))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2935)))), &_td_OOC_AST_ExtTree__TerminalDesc, 2935)), 2944));
  sym = (OOC_Scanner_BasicList__Symbol)i0;
  goto l12;
l9:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2812));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2819));
  sym = (OOC_Scanner_BasicList__Symbol)i0;
  goto l12;
l11:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2757));
  sym = (OOC_Scanner_BasicList__Symbol)i0;
l12:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Position.baseTypes[0]);
  position = (OOC_SymbolTable__Position)i0;
  i1 = (OOC_INT32)sym;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 3014))+16);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 3024))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 3035))+24);
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, i2, i3, i1);
  return (OOC_SymbolTable__Position)i0;
  ;
}

static OOC_INT8 OOC_AST_ExtTree_CreateSymTab__ExportMark(OOC_AST__Node id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)id;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3158)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3151)))), 3151);
  goto l12;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3192))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l10;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3261))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3267));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3272))+8);
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 3277)),(const void*)"*"))==0;
  if (i0) goto l8;
  return 2;
  goto l12;
l8:
  return 1;
  goto l12;
l10:
  return 0;
l12:
  _failed_function(3096); return 0;
  ;
}

static OOC_INT32 OOC_AST_ExtTree_CreateSymTab__EndOfType(OOC_AST__Node t) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 end;

  i0 = (OOC_INT32)t;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l51;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3586)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l49;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3656)))), &_td_OOC_AST_ExtTree__OperatorDesc);
  if (i1) goto l47;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3723)))), &_td_OOC_AST_ExtTree__ArrayTypeDesc);
  if (i1) goto l45;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3790)))), &_td_OOC_AST_ExtTree__RecordTypeDesc);
  if (i1) goto l43;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3857)))), &_td_OOC_AST_ExtTree__PointerTypeDesc);
  if (i1) goto l41;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3926)))), &_td_OOC_AST_ExtTree__ProcTypeDesc);
  if (i1) goto l31;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4231)))), &_td_OOC_AST_ExtTree__FormalParsDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4458)))), &_td_OOC_AST_ExtTree__QualTypeDesc);
  if (i1) goto l19;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4455)))), 4455);
  goto l52;
l19:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4506))+12);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4268))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l28;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4344))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l26;
  return (-1);
  goto l52;
l26:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4394))+12);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l28:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4318))+20);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l31:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3961))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l34;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4197));
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l34:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4015))+4);
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  end = i1;
  i2 = i1==(-1);
  if (i2) goto l37;
  return i1;
  goto l52;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4090));
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3909))+12);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l43:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3841))+24);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l45:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3773))+16);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l47:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3705))+8);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l49:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3624));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3636));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 3629))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 3641))+12);
  return (i1+i0);
  goto l52;
l51:
  return (-1);
l52:
  _failed_function(3449); return 0;
  ;
}

static void OOC_AST_ExtTree_CreateSymTab__Accept(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Item oldParent;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4656))+4);
  oldParent = (OOC_SymbolTable__Item)i1;
  i2 = (OOC_INT32)node;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4683)))), &_td_OOC_AST_ExtTree__NodeDesc, 4683)), 4688)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4683)))), &_td_OOC_AST_ExtTree__NodeDesc, 4683)), (OOC_AST_ExtTree__Visitor)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4707))+4) = i1;
  return;
  ;
}

static void OOC_AST_ExtTree_CreateSymTab__AcceptParent(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node, OOC_SymbolTable__Item newParent) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Item oldParent;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5082))+4);
  oldParent = (OOC_SymbolTable__Item)i1;
  i2 = (OOC_INT32)newParent;
  *(OOC_INT32*)((_check_pointer(i0, 5097))+4) = i2;
  i2 = (OOC_INT32)node;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5137)))), &_td_OOC_AST_ExtTree__NodeDesc, 5137)), 5142)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5137)))), &_td_OOC_AST_ExtTree__NodeDesc, 5137)), (OOC_AST_ExtTree__Visitor)i0);
  *(OOC_INT32*)((_check_pointer(i0, 5161))+4) = i1;
  return;
  ;
}

static OOC_SymbolTable__Type OOC_AST_ExtTree_CreateSymTab__GetType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  *(OOC_INT32*)((_check_pointer(i0, 5298))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)node;
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5348))+8);
  _assert((i1!=(OOC_INT32)0), 127, 5339);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5373))+8);
  return (OOC_SymbolTable__Type)i0;
  ;
}

static OOC_SymbolTable__Type OOC_AST_ExtTree_CreateSymTab__GetTypeParent(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node, OOC_SymbolTable__Item newParent) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  *(OOC_INT32*)((_check_pointer(i0, 5531))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)node;
  i2 = (OOC_INT32)newParent;
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i1, (OOC_SymbolTable__Item)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5598))+8);
  _assert((i1!=(OOC_INT32)0), 127, 5589);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5623))+8);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5843))+8);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5861)))), &_td_OOC_AST_ExtTree__NodeListDesc, 5861);
  l = (OOC_AST_ExtTree__NodeList)i0;
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 5893));
  i2 = 0<i1;
  if (!i2) goto l15;
  i2 = (OOC_INT32)item;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5923))+4);
  i4 = _check_pointer(i4, 5926);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5926))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5938)))), &_td_OOC_AST_ExtTree__NodeDesc, 5938);
  n = (OOC_AST_ExtTree__Node)i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5959)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i5) goto l8;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5953)))), 5953);
  goto l9;
l8:
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5995)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i4);
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

  _assert(0u, 127, 6143);
  
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitModule(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16;
  OOC_SymbolTable__Name moduleName;
  OOC_AST_ExtTree__ModuleFlags mf;
  OOC_INT8 _class;
  OOC_INT8 callConv;
  OOC_INT32 i;
  OOC_AST__Node n;
  Object__String str;
  OOC_SymbolTable__Module moduleDecl;
  OOC_SymbolTable__Name name;
  Object__CharsLatin1 chars;
  URI__URI uri;
  Msg__Msg res;
  Object__String prefixOption;
  Object__String suffixOption;
  Object__StringArrayPtr depList;
  OOC_INT32 j;

  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6651))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6657));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6667))+4);
  i1 = _check_pointer(i1, 6670);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 6670))*4);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i1);
  moduleName = (OOC_SymbolTable__Name)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6712))+28);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 6736));
  i4 = *(OOC_INT32*)((_check_pointer(i1, 6773))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i1, 6791))+8);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i5);
  mf = (OOC_AST_ExtTree__ModuleFlags)0;
  _class = 0;
  callConv = 0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6902))+8);
  i3 = (OOC_INT32)v;
  i2 = i2!=0;
  if (i2) goto l3;
  i2=0;i4=0;i5=0;
  goto l28;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6948))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6954))+8);
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i2, 6963));
  i4 = 0<i2;
  if (i4) goto l6;
  i2=0;i4=0;i5=0;
  goto l28;
l6:
  i4=0;i5=0;i6=0;i7=0;
l7_loop:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6992))+8);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 6999))+8);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 7009))+4);
  i8 = _check_pointer(i8, 7012);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 7012))*4);
  n = (OOC_AST__Node)i8;
  i9 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 7031)))), &_td_OOC_AST_ExtTree__ModuleFlagsDesc);
  if (i9) goto l13;
  i9 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 7447)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i9) goto l22;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 7444)))), 7444);
  goto l22;
l13:
  mf = (OOC_AST_ExtTree__ModuleFlags)i8;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i8, 7091));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 7101));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7106))+8);
  i6 = (
  _cmp8((const void*)(_check_pointer(i6, 7111)),(const void*)"FOREIGN"))==0;
  if (i6) goto l20;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i8, 7185));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 7195));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7200))+8);
  i6 = (
  _cmp8((const void*)(_check_pointer(i6, 7205)),(const void*)"INTERFACE"))==0;
  if (!i6) goto l21;
  _class = 3;
  i5=3;
  goto l21;
l20:
  _class = 2;
  i5=2;
l21:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 7298))+4);
  i6 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i6, 1u);
  str = (Object__String)i6;
  i6 = OOC_SymbolTable__StringToCallConv((Object__String)i6);
  callConv = i6;
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7400));
  i9 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7400));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7405)))), OOC_SymbolTable_Builder__BuilderDesc_SetClass)),OOC_SymbolTable_Builder__BuilderDesc_SetClass)((OOC_SymbolTable_Builder__Builder)i9, i5);
  i7=i8;
l22:
  i4 = i4+1;
  i = i4;
  i8 = i4<i2;
  if (i8) goto l7_loop;
l26:
  i2=i5;i5=i7;i4=i6;
l28:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7547));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7583))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7589))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7547));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7552)))), OOC_SymbolTable_Builder__BuilderDesc_NewModule)),OOC_SymbolTable_Builder__BuilderDesc_NewModule)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Name)i1, (OOC_Doc__Document)i7, i2, i4, (OOC_AST__Node)i0);
  moduleDecl = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7679))+8);
  i2 = i2!=0;
  if (!i2) goto l49;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7759))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7765))+8);
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i2, 7774));
  i4 = 0<i2;
  if (!i4) goto l49;
  i4=0;
l33_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7803))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7810))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7820))+4);
  i6 = _check_pointer(i6, 7823);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 7823))*4);
  n = (OOC_AST__Node)i6;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7842)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (!i7) goto l43;
  i7 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  name = (OOC_SymbolTable__Name)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7923))+12);
  i8 = _check_pointer(i8, 7927);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT8*)(i8+(_check_index(0, i9, OOC_UINT8, 7927)));
  i8 = (OOC_UINT8)65u<=(OOC_UINT8)(_cap(i8));
  if (i8) goto l38;
  i7=0u;
  goto l40;
l38:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7944))+12);
  i7 = _check_pointer(i7, 7948);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(0, i8, OOC_UINT8, 7948)));
  i7 = (OOC_UINT8)(_cap(i7))<=(OOC_UINT8)90u;
  
l40:
  if (!i7) goto l43;
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8052)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i6);
l43:
  i4 = i4+1;
  i = i4;
  i6 = i4<i2;
  if (i6) goto l33_loop;
l49:
  i2 = i5!=0;
  if (i2) goto l52;
  i2=0u;
  goto l54;
l52:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 8181))+20);
  i2 = i2!=0;
  
l54:
  if (!i2) goto l102;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 8230))+20);
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i2, 8244));
  i4 = 0<i2;
  if (!i4) goto l102;
  i4=0;
l58_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 8270))+20);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8284))+4);
  i6 = _check_pointer(i6, 8287);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 8287))*4);
  n = (OOC_AST__Node)i6;
  i7 = i6!=0;
  if (!i7) goto l96;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 8360)))), &_td_OOC_AST_ExtTree__LinkFileFlagDesc);
  if (i7) goto l86;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 9167)))), &_td_OOC_AST_ExtTree__LinkLibFlagDesc);
  if (!i7) goto l96;
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9212))+4);
  i7 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i7, 1u);
  str = (Object__String)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9258))+24);
  i8 = i8!=0;
  if (i8) goto l67;
  prefixOption = (Object__String)0;
  i8=0;
  goto l68;
l67:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9313))+24);
  i8 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i8, 0u);
  prefixOption = (Object__String)i8;
  
l68:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9429))+32);
  i9 = i9!=0;
  if (i9) goto l71;
  suffixOption = (Object__String)0;
  i9=0;
  goto l72;
l71:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9484))+32);
  i9 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i9, 0u);
  suffixOption = (Object__String)i9;
  
l72:
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9600))+12);
  i10 = i10==0;
  if (i10) goto l83;
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9705))+12);
  i10 = *(OOC_INT32*)(_check_pointer(i10, 9719));
  i10 = (OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], ((i10>>1)+1));
  depList = (Object__StringArrayPtr)i10;
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9764))+12);
  j = 0;
  i11 = *(OOC_INT32*)(_check_pointer(i11, 9778));
  i12 = 0<i11;
  if (!i12) goto l82;
  i12=0;
l77_loop:
  i13 = _check_pointer(i10, 9817);
  i14 = OOC_ARRAY_LENGTH(i13, 0);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9831))+12);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i15, 9845))+4);
  i15 = _check_pointer(i15, 9848);
  i16 = OOC_ARRAY_LENGTH(i15, 0);
  i15 = (OOC_INT32)*(OOC_INT32*)(i15+(_check_index(i12, i16, OOC_UINT32, 9848))*4);
  i15 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)(_type_guard(i15, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i15, 9860)))), &_td_OOC_AST_ExtTree__TerminalDesc, 9860)), 1u);
  *(OOC_INT32*)(i13+(_check_index((i12>>1), i14, OOC_UINT32, 9817))*4) = i15;
  i12 = i12+2;
  j = i12;
  i13 = i12<i11;
  if (i13) goto l77_loop;
l82:
  i6=i10;
  goto l84;
l83:
  i6 = (OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], 0);
  depList = (Object__StringArrayPtr)i6;
  
l84:
  OOC_SymbolTable__ModuleDesc_AddLinkLib((OOC_SymbolTable__Module)i1, (Object__String)i7, (Object__StringArrayPtr)i6, (Object__String)i8, (Object__String)i9);
  goto l96;
l86:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8406))+4);
  i7 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i7, 1u);
  str = (Object__String)i7;
  i7 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 8468)))), &_td_Object__String8Desc, 8468)));
  chars = (Object__CharsLatin1)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8538))+16);
  i9 = OOC_ARRAY_LENGTH((_check_pointer(i7, 8534)), 0);
  i7 = (OOC_INT32)URI_Parser__NewURI((void*)(_check_pointer(i7, 8534)), i9, (URI__HierarchicalURI)i8, (void*)(OOC_INT32)&res);
  i8 = (OOC_INT32)res;
  uri = (URI__URI)i7;
  _assert((i8==0), 127, 8567);
  _assert((i7!=0), 127, 8599);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 8658))+20);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 8641)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i7, (URI__HierarchicalURI)i8);
  uri = (URI__URI)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8687))+12);
  i8 = i8!=0;
  if (i8) goto l89;
  prefixOption = (Object__String)0;
  i8=0;
  goto l90;
l89:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8742))+12);
  i8 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i8, 0u);
  prefixOption = (Object__String)i8;
  
l90:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8858))+20);
  i9 = i9!=0;
  if (i9) goto l93;
  suffixOption = (Object__String)0;
  i6=0;
  goto l94;
l93:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8913))+20);
  i6 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i6, 0u);
  suffixOption = (Object__String)i6;
  
l94:
  OOC_SymbolTable__ModuleDesc_AddLinkFile((OOC_SymbolTable__Module)i1, (URI__HierarchicalURI)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 9057)))), &_td_URI__HierarchicalURIDesc, 9057)), (Object__String)i8, (Object__String)i6);
l96:
  i4 = i4+1;
  i = i4;
  i6 = i4<i2;
  if (i6) goto l58_loop;
l102:
  *(OOC_INT32*)((_check_pointer(i3, 10124))+12) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10160))+16);
  i2 = i2!=0;
  if (!i2) goto l105;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10214))+16);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i2, (OOC_SymbolTable__Item)i1);
l105:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10263))+20);
  i2 = i2!=0;
  if (!i2) goto l108;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10357))+20);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i0, (OOC_SymbolTable__Item)i1);
l108:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitImportList(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ImportList importList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)importList;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10538))+4);
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i1, 10547));
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10590))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10599))+4);
  i4 = _check_pointer(i4, 10602);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 10602))*4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10747));
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i1, 10756));
  i2 = 0<i1;
  if (!i2) goto l11;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10782));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10791))+4);
  i4 = _check_pointer(i4, 10794);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 10794))*4);
  i4 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 10798)))), &_td_OOC_AST_ExtTree__TerminalDesc));
  if (!i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10847));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10856))+4);
  i4 = _check_pointer(i4, 10859);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 10859))*4);
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
  OOC_Scanner_BasicList__Symbol nameSym;
  OOC_SymbolTable__Name name;

  i0 = (OOC_INT32)importDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11163))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11171));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11181))+4);
  i1 = _check_pointer(i1, 11184);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 11184))*4);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i1);
  moduleName = (OOC_SymbolTable__Name)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11230))+12);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 11254));
  i4 = *(OOC_INT32*)((_check_pointer(i1, 11291))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i1, 11309))+8);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i5);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11397))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11405));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11415))+4);
  i2 = _check_pointer(i2, 11436);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11447))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11455));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 11465));
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index((i3-1), i4, OOC_UINT32, 11436))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11482)))), &_td_OOC_AST_ExtTree__TerminalDesc, 11482)), 11491));
  nameSym = (OOC_Scanner_BasicList__Symbol)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11516))+4);
  i3 = i3!=0;
  if (i3) goto l3;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11622))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11630));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11640))+4);
  i3 = _check_pointer(i3, 11668);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11679))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 11687));
  i4 = *(OOC_INT32*)(_check_pointer(i4, 11697));
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index((i4-1), i5, OOC_UINT32, 11668))*4);
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  name = (OOC_SymbolTable__Name)i3;
  
  goto l4;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11571));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  name = (OOC_SymbolTable__Name)i3;
  
l4:
  i4 = (OOC_INT32)v;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 11736));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11841))+8);
  i6 = *(OOC_INT32*)((_check_pointer(i2, 11778))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 11791))+12);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 11755))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11849))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 11736));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11741)))), OOC_SymbolTable_Builder__BuilderDesc_NewImport)),OOC_SymbolTable_Builder__BuilderDesc_NewImport)((OOC_SymbolTable_Builder__Builder)i4, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i3, (i6+i2), (OOC_Doc__Document)i0, (OOC_SymbolTable__Name)i1);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitConstDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ConstDecl constDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_SymbolTable__ConstDecl _const;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12023));
  i2 = (OOC_INT32)constDecl;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12082));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12054))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 12092));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12023));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12119))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 12139)))), &_td_OOC_AST_ExtTree__TerminalDesc, 12139)), 12148));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12189));
  i6 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12211));
  i5 = *(OOC_INT32*)((_check_pointer(i5, 12153))+16);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 12221))+8);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12261))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12028)))), OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i5, i6, (OOC_Doc__Document)i7, (Object_Boxed__Object)0, (OOC_SymbolTable__PredefType)0, (OOC_AST__Node)i8);
  _const = (OOC_SymbolTable__ConstDecl)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12287))+4);
  i1 = i1!=0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12337))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i0, (OOC_AST_ExtTree__Flags)i1);
l4:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitTPSection(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__TPSection tpSection) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
  OOC_SymbolTable__Type type;
  OOC_INT32 i;
  OOC_SymbolTable__TypeDecl typeDecl;

  i0 = (OOC_INT32)tpSection;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12560))+12);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12595))+4);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 12605));
  i4 = 0<i3;
  if (!i4) goto l8;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12639));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12694))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 12704))+4);
  i6 = _check_pointer(i6, 12706);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12668))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 12706))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12639));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12742))+12);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12791))+4);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 12801))+4);
  i10 = _check_pointer(i10, 12803);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 12803))*4);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 12815)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 12815)), 12824))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 12643)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Name)i6, i9, 0, (OOC_Doc__Document)i10, (OOC_SymbolTable__Type)i1, 1u);
  typeDecl = (OOC_SymbolTable__TypeDecl)i5;
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l3_loop;
l8:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitTypeDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__TypeDecl typeDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_SymbolTable__Type base;
  OOC_SymbolTable__TypePars typePars;
  OOC_INT32 i;
  OOC_SymbolTable__TypeDecl type;

  i0 = (OOC_INT32)typeDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13067))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l11;
  i1 = (OOC_INT32)v;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13158));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13176))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13158));
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13162)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypePars)),OOC_SymbolTable_Builder__BuilderDesc_NewTypePars)((OOC_SymbolTable_Builder__Builder)i4, (OOC_SymbolTable__Item)i3);
  typePars = (OOC_SymbolTable__TypePars)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13214))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13223))+4);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 13234));
  i4 = 0<i3;
  if (!i4) goto l10;
  i4=0;
l5_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13281))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 13290))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 13301))+4);
  i5 = _check_pointer(i5, 13303);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13303))*4);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i1, (OOC_AST__Node)i5, (OOC_SymbolTable__Item)i2);
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l5_loop;
l10:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13369))+16);
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetTypeParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i1, (OOC_AST__Node)i3, (OOC_SymbolTable__Item)i2);
  base = (OOC_SymbolTable__Type)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13404))+20);
  _assert((i4==(OOC_INT32)0), 127, 13393);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13434)))), OOC_SymbolTable__TypeDesc_SetTypePars)),OOC_SymbolTable__TypeDesc_SetTypePars)((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__TypePars)i2);
  i2=i3;
  goto l12;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13122))+16);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  base = (OOC_SymbolTable__Type)i1;
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13480));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13534));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 13543));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13509))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13480));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13579))+16);
  i6 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13606));
  i7 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i7);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13636));
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 13645))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13485)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Item)i5, (OOC_SymbolTable__Name)i4, i6, i7, (OOC_Doc__Document)i8, (OOC_SymbolTable__Type)i2, 0u);
  type = (OOC_SymbolTable__TypeDecl)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13687))+4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l15;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13735))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i1, (OOC_AST_ExtTree__Flags)i0);
l15:
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13964))+8);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13998));
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 14009));
  i4 = 0<i3;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14039));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14093));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 14104))+4);
  i6 = _check_pointer(i6, 14107);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 14107))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14059))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14119)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 14119)), 14128));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14039));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14164))+8);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14200));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 14211))+4);
  i10 = _check_pointer(i10, 14214);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 14214))*4);
  i10 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i10);
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14236));
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 14247))+4);
  i11 = _check_pointer(i11, 14250);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i4, i12, OOC_UINT32, 14250))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 14262)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 14262)), 14271))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14044)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i6, i9, i10, (OOC_Doc__Document)i11, 0u, 0u, 0u, (OOC_SymbolTable__Type)i1);
  var = (OOC_SymbolTable__VarDecl)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14342));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 14353))+4);
  i6 = _check_pointer(i6, 14356);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+1), i7, OOC_UINT32, 14356))*4);
  flags = (OOC_AST__Node)i6;
  i7 = i6!=0;
  if (!i7) goto l6;
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i5, (OOC_AST_ExtTree__Flags)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14427)))), &_td_OOC_AST_ExtTree__FlagsDesc, 14427)));
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
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_SymbolTable__Type type;
  OOC_SymbolTable__VarDecl var;
  OOC_AST__NodeArray nodes;
  OOC_INT32 i;
  OOC_SymbolTable__TypeDecl alias;

  i0 = (OOC_INT32)receiver;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14699))+16);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14720));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14740))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14774))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14720));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i5);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14803))+16);
  i7 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i7);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14847))+8);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14893))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 14854))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14725)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i5, i7, 0, (OOC_Doc__Document)i8, 1u, 1u, (i9!=0), (OOC_SymbolTable__Type)i1);
  var = (OOC_SymbolTable__VarDecl)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14930))+20);
  i3 = i3!=0;
  if (!i3) goto l11;
  *(OOC_UINT8*)((_check_pointer(i1, 14964))+54) = 1u;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15010))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15020))+4);
  nodes = (OOC_AST__NodeArray)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15052))+24);
  i = 0;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15062));
  i3 = 0<i0;
  if (!i3) goto l11;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15095));
  i5 = _check_pointer(i1, 15148);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15126))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 15148))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15095));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i5);
  i8 = _check_pointer(i1, 15169);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i3, i9, OOC_UINT32, 15169))*4);
  i8 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i8);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15099)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i5, i8, 0, (OOC_Doc__Document)0, (OOC_SymbolTable__Type)0, 0u);
  alias = (OOC_SymbolTable__TypeDecl)i4;
  i3 = i3+2;
  i = i3;
  i4 = i3<i0;
  if (i4) goto l5_loop;
l11:
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15466))+12);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15502))+4);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 15513));
  i4 = 0<i3;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15543));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15599))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 15610))+4);
  i6 = _check_pointer(i6, 15613);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15563))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 15613))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15543));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15647))+12);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15694))+4);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 15705))+4);
  i10 = _check_pointer(i10, 15708);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 15708))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15772));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 15720)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 15720)), 15729))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15548)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Name)i6, i9, 0, (OOC_Doc__Document)i10, 1u, 0u, (i11!=0), (OOC_SymbolTable__Type)i1);
  var = (OOC_SymbolTable__VarDecl)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15816))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 15827))+4);
  i6 = _check_pointer(i6, 15830);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+1), i7, OOC_UINT32, 15830))*4);
  flags = (OOC_AST__Node)i6;
  i7 = i6!=0;
  if (!i7) goto l6;
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i5, (OOC_AST_ExtTree__Flags)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 15901)))), &_td_OOC_AST_ExtTree__FlagsDesc, 15901)));
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
  OOC_INT8 procClass;
  OOC_SymbolTable__ProcDecl proc;
  OOC_SymbolTable__FormalPars formalPars;
  OOC_AST_ExtTree__FormalPars fpar;
  OOC_INT32 i;
  OOC_AST__Node nodePtr;
  OOC_SymbolTable__Type type;
  auto void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl_ParseFlags(OOC_SymbolTable__ProcDecl proc, OOC_AST_ExtTree__NodeList flags);
    
    void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl_ParseFlags(OOC_SymbolTable__ProcDecl proc, OOC_AST_ExtTree__NodeList flags) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;
      OOC_AST_ExtTree__Node n;

      i0 = (OOC_INT32)flags;
      i = 0;
      i1 = *(OOC_INT32*)(_check_pointer(i0, 16378));
      i2 = 0<i1;
      if (!i2) goto l16;
      i2 = (OOC_INT32)proc;
      i3=0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16412))+4);
      i4 = _check_pointer(i4, 16415);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 16415))*4);
      i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16427)))), &_td_OOC_AST_ExtTree__NodeDesc, 16427);
      n = (OOC_AST_ExtTree__Node)i4;
      i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16448)))), &_td_OOC_AST_ExtTree__TerminalDesc);
      if (i5) goto l6;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16442)))), 16442);
      goto l11;
l6:
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 16486));
      i5 = *(OOC_INT8*)((_check_pointer(i5, 16490))+4);
      switch (i5) {
      case 43:
      case 44:
        i4 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i4, 1u);
        OOC_SymbolTable__ProcDeclDesc_SetLinkName((OOC_SymbolTable__ProcDecl)i2, (Object__String)i4);
        goto l11;
      default:
        i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16635)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16760))+20);
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  endPos = i1;
  i2 = i1<0;
  if (!i2) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16835))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16845));
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  endPos = i1;
  
l4:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16880))+8);
  i2 = i2==0;
  if (i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16979))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16988));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16994));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16998))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16979))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 16988));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 16994));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16998))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 17002)), 0);
  i2 = OOC_SymbolTable_Predef__IsStaticMethod((void*)(_check_pointer(i2, 17002)), i3);
  if (i2) goto l9;
  procClass = 1;
  i2=1;
  goto l12;
l9:
  procClass = 2;
  i2=2;
  goto l12;
l11:
  procClass = 0;
  i2=0;
l12:
  i3 = (OOC_INT32)v;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 17116));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17171))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17137))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 17181));
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 17116));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i5);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17225))+16);
  i8 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i8);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17252))+16);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17300))+4);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i9, 17262))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17121)))), OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i6, (OOC_SymbolTable__Name)i5, i1, i8, (OOC_Doc__Document)i9, i2, (i10!=0), (OOC_AST__Node)i0);
  proc = (OOC_SymbolTable__ProcDecl)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 17350));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17440));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 17350));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17355)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i4);
  formalPars = (OOC_SymbolTable__FormalPars)i2;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17466))+20);
  i4 = i4!=0;
  if (i4) goto l15;
  i4=0u;
  goto l17;
l15:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17504))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17525)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 17525)), 17536))+20);
  i4 = i4!=0;
  
l17:
  if (!i4) goto l19;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17624))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17644)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 17644)), 17655))+20);
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetTypeParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i4, (OOC_SymbolTable__Item)i2);
  OOC_SymbolTable__FormalParsDesc_SetResultType((OOC_SymbolTable__FormalPars)i2, (OOC_SymbolTable__Type)i4);
l19:
  *(OOC_INT32*)((_check_pointer(i1, 17720))+60) = i2;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17765))+8);
  i4 = i4!=0;
  if (!i4) goto l22;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17819))+8);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i4, (OOC_SymbolTable__Item)i2);
l22:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17868))+20);
  i4 = i4!=0;
  if (!i4) goto l52;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17915))+20);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17936)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 17936);
  fpar = (OOC_AST_ExtTree__FormalPars)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 17980));
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i2, (OOC_AST_ExtTree__Flags)i5);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18003))+8);
  i5 = i5!=0;
  if (!i5) goto l39;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18054))+8);
  i = 0;
  i5 = *(OOC_INT32*)(_check_pointer(i5, 18066));
  i6 = 0<i5;
  if (!i6) goto l39;
  i6=0;
l29_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18107))+8);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 18119))+4);
  i7 = _check_pointer(i7, 18122);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 18122))*4);
  nodePtr = (OOC_AST__Node)i7;
  i8 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 18149)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i8) goto l32;
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i7, (OOC_SymbolTable__Item)i2);
  goto l33;
l32:
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i7, 18219));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 18224))+8);
  _assert(((
  _cmp8((const void*)(_check_pointer(i7, 18229)),(const void*)"..."))==0), 127, 18204);
  OOC_SymbolTable__FormalParsDesc_EnableRestParameters((OOC_SymbolTable__FormalPars)i2);
l33:
  i6 = i6+2;
  i = i6;
  i7 = i6<i5;
  if (i7) goto l29_loop;
l39:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18405))+28);
  i5 = i5!=0;
  if (i5) goto l42;
  *(OOC_INT32*)((_check_pointer(i2, 18771))+56) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], 0));
  goto l52;
l42:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18465))+28);
  i5 = *(OOC_INT32*)(_check_pointer(i5, 18476));
  *(OOC_INT32*)((_check_pointer(i2, 18451))+56) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], ((i5+1)>>1)));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18518))+28);
  i = 0;
  i5 = *(OOC_INT32*)(_check_pointer(i5, 18530));
  i6 = 0<i5;
  if (!i6) goto l52;
  i6=0;
l45_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18571))+28);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 18583))+4);
  i7 = _check_pointer(i7, 18586);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 18586))*4);
  nodePtr = (OOC_AST__Node)i7;
  i7 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i7);
  type = (OOC_SymbolTable__Type)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18650))+56);
  i8 = _check_pointer(i8, 18657);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 18685));
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 18685));
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 18689)))), OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)),OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)((OOC_SymbolTable_Builder__Builder)i11, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Type)i7);
  *(OOC_INT32*)(i8+(_check_index((i6>>1), i9, OOC_UINT32, 18657))*4) = i7;
  i6 = i6+2;
  i = i6;
  i7 = i6<i5;
  if (i7) goto l45_loop;
l52:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18820))+12);
  i2 = i2!=0;
  if (!i2) goto l55;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18872))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18879))+8);
  OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl_ParseFlags((OOC_SymbolTable__ProcDecl)i1, (OOC_AST_ExtTree__NodeList)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18898)))), &_td_OOC_AST_ExtTree__NodeListDesc, 18898)));
l55:
  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18940))+28);
  i1 = i1!=0;
  if (!i1) goto l58;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18990))+28);
  i1 = (OOC_INT32)proc;
  i2 = (OOC_INT32)v;
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i0, (OOC_SymbolTable__Item)i1);
l58:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitFieldList(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__FieldList fieldList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
  OOC_SymbolTable__Type type;
  OOC_INT32 i;
  OOC_SymbolTable__FieldDecl field;
  OOC_AST__Node flags;

  i0 = (OOC_INT32)fieldList;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19235))+8);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19271));
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 19282));
  i4 = 0<i3;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 19314));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19372));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 19383))+4);
  i6 = _check_pointer(i6, 19386);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 19386))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19336))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 19398)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 19398)), 19407));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 19314));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19445))+8);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19483));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 19494))+4);
  i10 = _check_pointer(i10, 19497);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 19497))*4);
  i10 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)(_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 19509)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 19509)));
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19539));
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 19550))+4);
  i11 = _check_pointer(i11, 19553);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i4, i12, OOC_UINT32, 19553))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 19565)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 19565)), 19574))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 19319)))), OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i6, i9, i10, (OOC_Doc__Document)i11, (OOC_SymbolTable__Type)i1);
  field = (OOC_SymbolTable__FieldDecl)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19626));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 19637))+4);
  i6 = _check_pointer(i6, 19640);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+1), i7, OOC_UINT32, 19640))*4);
  flags = (OOC_AST__Node)i6;
  i7 = i6!=0;
  if (!i7) goto l6;
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i5, (OOC_AST_ExtTree__Flags)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 19713)))), &_td_OOC_AST_ExtTree__FlagsDesc, 19713)));
l6:
  i4 = i4+3;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l3_loop;
l11:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitTerminal(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Terminal terminal) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19857));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19878))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19857));
  i4 = (OOC_INT32)terminal;
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19862)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Name)0, (OOC_SymbolTable__Name)i4);
  *(OOC_INT32*)((_check_pointer(i0, 19846))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitOperator(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Operator _operator) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20088));
  i2 = (OOC_INT32)_operator;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20109))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 20140));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20088));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 20193));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20219))+8);
  i2 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20093)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Name)i6, (OOC_SymbolTable__Name)i2);
  *(OOC_INT32*)((_check_pointer(i0, 20077))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitRecordType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__RecordType recordType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SymbolTable__Type baseType;
  OOC_SymbolTable__Record record;
  OOC_INT32 i;

  i0 = (OOC_INT32)recordType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20421))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  baseType = (OOC_SymbolTable__Type)(OOC_INT32)0;
  i1=(OOC_INT32)0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20484))+12);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  
l4:
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 20552));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20571))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20604));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 20552));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20557)))), OOC_SymbolTable_Builder__BuilderDesc_NewRecord)),OOC_SymbolTable_Builder__BuilderDesc_NewRecord)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Type)i1);
  record = (OOC_SymbolTable__Record)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20690))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i1, (OOC_AST_ExtTree__Flags)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20727))+20);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 20739));
  i4 = 0<i3;
  if (!i4) goto l15;
  i4=0;
l7_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20775))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 20787))+4);
  i5 = _check_pointer(i5, 20790);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 20790))*4);
  i5 = i5!=(OOC_INT32)0;
  if (!i5) goto l10;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20841))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 20853))+4);
  i5 = _check_pointer(i5, 20856);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 20856))*4);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i5, (OOC_SymbolTable__Item)i1);
l10:
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l7_loop;
l15:
  *(OOC_INT32*)((_check_pointer(i2, 20893))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitPointerType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__PointerType pointerType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21035));
  i2 = (OOC_INT32)pointerType;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21055))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 21124));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21035));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21194))+12);
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i6);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21040)))), OOC_SymbolTable_Builder__BuilderDesc_NewPointer)),OOC_SymbolTable_Builder__BuilderDesc_NewPointer)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Type)i6);
  *(OOC_INT32*)((_check_pointer(i0, 21024))+8) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21236))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21218))+8);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21457))+8);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 21467));
  i1 = i1>0;
  if (i1) goto l3;
  i1 = (OOC_INT32)v;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22025));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 22043))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22075));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22025));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22150))+16);
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i1, (OOC_AST__Node)i6);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22030)))), OOC_SymbolTable_Builder__BuilderDesc_NewArray)),OOC_SymbolTable_Builder__BuilderDesc_NewArray)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, 1u, (OOC_AST__Node)0, (OOC_SymbolTable__Type)i6);
  array = (OOC_SymbolTable__Array)i2;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22191))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i2, (OOC_AST_ExtTree__Flags)i0);
  i0=i1;i1=i2;
  goto l17;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21522))+16);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21555))+8);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 21565));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21712))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21722))+4);
  i4 = _check_pointer(i4, 21725);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index((i1-1), i5, OOC_UINT32, 21725))*4);
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  pos = (OOC_SymbolTable__Position)i4;
  
  goto l11;
l10:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21650));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  pos = (OOC_SymbolTable__Position)i4;
  
l11:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 21767));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21867))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 21877))+4);
  i6 = _check_pointer(i6, 21880);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21797))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 21880))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 21767));
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 21772)))), OOC_SymbolTable_Builder__BuilderDesc_NewArray)),OOC_SymbolTable_Builder__BuilderDesc_NewArray)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Position)i4, 0u, (OOC_AST__Node)i6, (OOC_SymbolTable__Type)i3);
  baseType = (OOC_SymbolTable__Type)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21945))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i3, (OOC_AST_ExtTree__Flags)i4);
  i1 = i1+(-2);
  i = i1;
  i4 = i1>=0;
  if (i4) goto l7_loop;
l15:
  i0=i3;
l16:
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21993)))), &_td_OOC_SymbolTable__ArrayDesc, 21993);
  array = (OOC_SymbolTable__Array)i0;
  i1=i0;i0=i2;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 22214))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ProcType procType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_SymbolTable__FormalPars formalPars;
  OOC_AST_ExtTree__FormalPars fpar;
  OOC_INT32 i;
  OOC_AST__Node nodePtr;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22475));
  i2 = (OOC_INT32)procType;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22498))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 22568));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22475));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22480)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4);
  formalPars = (OOC_SymbolTable__FormalPars)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22599))+4);
  i3 = i3!=0;
  if (i3) goto l3;
  i3=0u;
  goto l5;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22637))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 22658)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 22658)), 22669))+20);
  i3 = i3!=0;
  
l5:
  if (!i3) goto l7;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22757))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 22777)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 22777)), 22788))+20);
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetTypeParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i3, (OOC_SymbolTable__Item)i1);
  OOC_SymbolTable__FormalParsDesc_SetResultType((OOC_SymbolTable__FormalPars)i1, (OOC_SymbolTable__Type)i3);
l7:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22861))+4);
  i3 = i3!=0;
  if (!i3) goto l10;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22920))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 22940)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 22940)), 22951));
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i1, (OOC_AST_ExtTree__Flags)i3);
l10:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22985))+4);
  i3 = i3!=0;
  if (!i3) goto l36;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23032))+4);
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23053)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 23053);
  fpar = (OOC_AST_ExtTree__FormalPars)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23080))+8);
  i3 = i3!=0;
  if (!i3) goto l23;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23131))+8);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 23143));
  i4 = 0<i3;
  if (!i4) goto l23;
  i4=0;
l17_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23190))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23202))+4);
  i5 = _check_pointer(i5, 23205);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 23205))*4);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i5, (OOC_SymbolTable__Item)i1);
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l17_loop;
l23:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23267))+28);
  i3 = i3!=0;
  if (i3) goto l26;
  *(OOC_INT32*)((_check_pointer(i1, 23633))+56) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], 0));
  goto l36;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23327))+28);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 23338));
  *(OOC_INT32*)((_check_pointer(i1, 23313))+56) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], ((i3+1)>>1)));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23380))+28);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 23392));
  i4 = 0<i3;
  if (!i4) goto l36;
  i4=0;
l29_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23433))+28);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 23445))+4);
  i5 = _check_pointer(i5, 23448);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 23448))*4);
  nodePtr = (OOC_AST__Node)i5;
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i5);
  type = (OOC_SymbolTable__Type)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23512))+56);
  i6 = _check_pointer(i6, 23519);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23547));
  i9 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23547));
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 23551)))), OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)),OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)((OOC_SymbolTable_Builder__Builder)i9, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Type)i5);
  *(OOC_INT32*)(i6+(_check_index((i4>>1), i7, OOC_UINT32, 23519))*4) = i5;
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l29_loop;
l36:
  *(OOC_INT32*)((_check_pointer(i0, 23671))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitQualType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__QualType qualType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
  OOC_SymbolTable__Type baseType;
  OOC_SymbolTable__TypeRefArray arguments;
  OOC_INT32 i;

  i0 = (OOC_INT32)qualType;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23904));
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23945))+8);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 23955));
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], ((i3+1)>>1));
  arguments = (OOC_SymbolTable__TypeRefArray)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23997))+8);
  i = 0;
  i4 = *(OOC_INT32*)(_check_pointer(i4, 24007));
  i5 = 0<i4;
  if (!i5) goto l8;
  i5 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i6=0;
l3_loop:
  i7 = _check_pointer(i3, 24053);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i9 = i6>>1;
  i10 = OOC_ARRAY_LENGTH((_check_pointer(i3, 24053)), 0);
  i10 = _check_index(i9, i10, OOC_UINT32, 24053);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24105))+8);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 24115))+4);
  i10 = _check_pointer(i10, 24117);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i6, i11, OOC_UINT32, 24117))*4);
  i10 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i10);
  OOC_SymbolTable__InitTypeRef((void*)(i7+(_check_index(i9, i8, OOC_UINT32, 24053))*8), (RT0__Struct)i5, (OOC_SymbolTable__Type)i10);
  i6 = i6+2;
  i = i6;
  i7 = i6<i4;
  if (i7) goto l3_loop;
l8:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 24148));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24166))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24227));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 24148));
  i0 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 24152)))), OOC_SymbolTable_Builder__BuilderDesc_NewQualType)),OOC_SymbolTable_Builder__BuilderDesc_NewQualType)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i5, (OOC_SymbolTable__Position)i0, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__TypeRefArray)i3);
  *(OOC_INT32*)((_check_pointer(i2, 24138))+8) = i0;
  return;
  ;
}

OOC_SymbolTable__Module OOC_AST_ExtTree_CreateSymTab__CreateSymTab(OOC_AST__Node module, OOC_SymbolTable_Builder__Builder stb, Object__String libraryName, URI__HierarchicalURI baseURI, URI__HierarchicalURI rootURI) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_AST_ExtTree_CreateSymTab__Visitor v;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree_CreateSymTab__Visitor.baseTypes[0]);
  v = (OOC_AST_ExtTree_CreateSymTab__Visitor)i0;
  i1 = (OOC_INT32)stb;
  *(OOC_INT32*)(_check_pointer(i0, 24892)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 24911))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 24933))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 24953))+12) = 0;
  i2 = (OOC_INT32)baseURI;
  *(OOC_INT32*)((_check_pointer(i0, 24973))+16) = i2;
  i2 = (OOC_INT32)rootURI;
  *(OOC_INT32*)((_check_pointer(i0, 25000))+20) = i2;
  i2 = (OOC_INT32)module;
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25051))+12);
  i3 = (OOC_INT32)libraryName;
  OOC_SymbolTable__ModuleDesc_SetLibraryName((OOC_SymbolTable__Module)i2, (Object__String)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25106))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25093)))), OOC_SymbolTable_Builder__BuilderDesc_Finalize)),OOC_SymbolTable_Builder__BuilderDesc_Finalize)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25127))+12);
  return (OOC_SymbolTable__Module)i0;
  ;
}

void OOC_OOC_AST_ExtTree_CreateSymTab_init(void) {

  return;
  ;
}

/* --- */
