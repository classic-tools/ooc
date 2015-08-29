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
  goto l12;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3051))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l10;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3120))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3126));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3131))+8);
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 3136)),(const void*)"*"))==0;
  if (i0) goto l8;
  return 2;
  goto l12;
l8:
  return 1;
  goto l12;
l10:
  return 0;
l12:
  _failed_function(2955); return 0;
  ;
}

static OOC_INT32 OOC_AST_ExtTree_CreateSymTab__EndOfType(OOC_AST__Node t) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 end;

  i0 = (OOC_INT32)t;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l47;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3445)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l45;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3515)))), &_td_OOC_AST_ExtTree__OperatorDesc);
  if (i1) goto l43;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3582)))), &_td_OOC_AST_ExtTree__ArrayTypeDesc);
  if (i1) goto l41;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3649)))), &_td_OOC_AST_ExtTree__RecordTypeDesc);
  if (i1) goto l39;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3716)))), &_td_OOC_AST_ExtTree__PointerTypeDesc);
  if (i1) goto l37;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3785)))), &_td_OOC_AST_ExtTree__ProcTypeDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4090)))), &_td_OOC_AST_ExtTree__FormalParsDesc);
  if (i1) goto l17;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4087)))), 4087);
  goto l48;
l17:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4127))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l24;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4203))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l22;
  return (-1);
  goto l48;
l22:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4253))+12);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l24:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4177))+20);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l27:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3820))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l30;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4056));
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3874))+4);
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  end = i1;
  i2 = i1==(-1);
  if (i2) goto l33;
  return i1;
  goto l48;
l33:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3949));
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3768))+12);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l39:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3700))+24);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3632))+16);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l43:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3564))+8);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l48;
l45:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3483));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3495));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 3488))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 3500))+12);
  return (i1+i0);
  goto l48;
l47:
  return (-1);
l48:
  _failed_function(3308); return 0;
  ;
}

static void OOC_AST_ExtTree_CreateSymTab__Accept(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Item oldParent;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4448))+4);
  oldParent = (OOC_SymbolTable__Item)i1;
  i2 = (OOC_INT32)node;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4475)))), &_td_OOC_AST_ExtTree__NodeDesc, 4475)), 4480)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4475)))), &_td_OOC_AST_ExtTree__NodeDesc, 4475)), (OOC_AST_ExtTree__Visitor)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4499))+4) = i1;
  return;
  ;
}

static void OOC_AST_ExtTree_CreateSymTab__AcceptParent(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node, OOC_SymbolTable__Item newParent) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Item oldParent;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4874))+4);
  oldParent = (OOC_SymbolTable__Item)i1;
  i2 = (OOC_INT32)newParent;
  *(OOC_INT32*)((_check_pointer(i0, 4889))+4) = i2;
  i2 = (OOC_INT32)node;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4929)))), &_td_OOC_AST_ExtTree__NodeDesc, 4929)), 4934)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4929)))), &_td_OOC_AST_ExtTree__NodeDesc, 4929)), (OOC_AST_ExtTree__Visitor)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4953))+4) = i1;
  return;
  ;
}

static OOC_SymbolTable__Type OOC_AST_ExtTree_CreateSymTab__GetType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  *(OOC_INT32*)((_check_pointer(i0, 5090))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)node;
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5140))+8);
  _assert((i1!=(OOC_INT32)0), 127, 5131);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5165))+8);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5379))+8);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5397)))), &_td_OOC_AST_ExtTree__NodeListDesc, 5397);
  l = (OOC_AST_ExtTree__NodeList)i0;
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 5429));
  i2 = 0<i1;
  if (!i2) goto l15;
  i2 = (OOC_INT32)item;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5459))+4);
  i4 = _check_pointer(i4, 5462);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5462))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5474)))), &_td_OOC_AST_ExtTree__NodeDesc, 5474);
  n = (OOC_AST_ExtTree__Node)i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5495)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i5) goto l8;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5489)))), 5489);
  goto l9;
l8:
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5531)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i4);
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

  _assert(0u, 127, 5679);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitModule(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6181))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6187));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6197))+4);
  i1 = _check_pointer(i1, 6200);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 6200))*4);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i1);
  moduleName = (OOC_SymbolTable__Name)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6242))+28);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 6266));
  i4 = *(OOC_INT32*)((_check_pointer(i1, 6303))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i1, 6321))+8);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i5);
  mf = (OOC_AST_ExtTree__ModuleFlags)0;
  _class = 0;
  callConv = 0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6432))+8);
  i3 = (OOC_INT32)v;
  i2 = i2!=0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6464))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6471))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6481))+4);
  i2 = _check_pointer(i2, 6484);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 6484))*4);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6488)))), &_td_OOC_AST_ExtTree__ModuleFlagsDesc);
  
l5:
  if (i2) goto l7;
  i2=0;i4=0;i5=0;
  goto l16;
l7:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6535))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6542))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6552))+4);
  i2 = _check_pointer(i2, 6555);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(0, i4, OOC_UINT8, 6555))*4);
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6567)))), &_td_OOC_AST_ExtTree__ModuleFlagsDesc, 6567);
  mf = (OOC_AST_ExtTree__ModuleFlags)i2;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6593));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6603));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 6608))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 6613)),(const void*)"FOREIGN"))==0;
  if (i4) goto l14;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6679));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 6689));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 6694))+8);
  i4 = (
  _cmp8((const void*)(_check_pointer(i4, 6699)),(const void*)"INTERFACE"))==0;
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
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6780))+4);
  i5 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i5, 1u);
  str = (Object__String)i5;
  i5 = OOC_SymbolTable__StringToCallConv((Object__String)i5);
  callConv = i5;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6864));
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6864));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6869)))), OOC_SymbolTable_Builder__BuilderDesc_SetClass)),OOC_SymbolTable_Builder__BuilderDesc_SetClass)((OOC_SymbolTable_Builder__Builder)i7, i4);
  {register OOC_INT32 h0=i2;i2=i4;i4=i5;i5=h0;}
l16:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6922));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6958))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 6964))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 6922));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6927)))), OOC_SymbolTable_Builder__BuilderDesc_NewModule)),OOC_SymbolTable_Builder__BuilderDesc_NewModule)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Name)i1, (OOC_Doc__Document)i7, i2, i4, (OOC_AST__Node)i0);
  moduleDecl = (OOC_SymbolTable__Module)i1;
  i2 = i5!=0;
  if (i2) goto l19;
  i2=0u;
  goto l21;
l19:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7063))+20);
  i2 = i2!=0;
  
l21:
  if (!i2) goto l66;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7112))+20);
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i2, 7126));
  i4 = 0<i2;
  if (!i4) goto l66;
  i4=0;
l25_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 7152))+20);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7166))+4);
  i6 = _check_pointer(i6, 7169);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 7169))*4);
  n = (OOC_AST__Node)i6;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7188)))), &_td_OOC_AST_ExtTree__LinkFileFlagDesc);
  if (i7) goto l51;
  i7 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7945)))), &_td_OOC_AST_ExtTree__LinkLibFlagDesc);
  if (!i7) goto l60;
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7988))+4);
  i7 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i7, 1u);
  str = (Object__String)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8032))+24);
  i8 = i8!=0;
  if (i8) goto l32;
  prefixOption = (Object__String)0;
  i8=0;
  goto l33;
l32:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8085))+24);
  i8 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i8, 0u);
  prefixOption = (Object__String)i8;
  
l33:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8193))+32);
  i9 = i9!=0;
  if (i9) goto l36;
  suffixOption = (Object__String)0;
  i9=0;
  goto l37;
l36:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8246))+32);
  i9 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i9, 0u);
  suffixOption = (Object__String)i9;
  
l37:
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8354))+12);
  i10 = i10==0;
  if (i10) goto l48;
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8453))+12);
  i10 = *(OOC_INT32*)(_check_pointer(i10, 8467));
  i10 = (OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], ((i10>>1)+1));
  depList = (Object__StringArrayPtr)i10;
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8510))+12);
  j = 0;
  i11 = *(OOC_INT32*)(_check_pointer(i11, 8524));
  i12 = 0<i11;
  if (!i12) goto l47;
  i12=0;
l42_loop:
  i13 = _check_pointer(i10, 8561);
  i14 = OOC_ARRAY_LENGTH(i13, 0);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 8575))+12);
  i15 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i15, 8589))+4);
  i15 = _check_pointer(i15, 8592);
  i16 = OOC_ARRAY_LENGTH(i15, 0);
  i15 = (OOC_INT32)*(OOC_INT32*)(i15+(_check_index(i12, i16, OOC_UINT32, 8592))*4);
  i15 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)(_type_guard(i15, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i15, 8604)))), &_td_OOC_AST_ExtTree__TerminalDesc, 8604)), 1u);
  *(OOC_INT32*)(i13+(_check_index((i12>>1), i14, OOC_UINT32, 8561))*4) = i15;
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
  OOC_SymbolTable__ModuleDesc_AddLinkLib((OOC_SymbolTable__Module)i1, (Object__String)i7, (Object__StringArrayPtr)i6, (Object__String)i8, (Object__String)i9);
  goto l60;
l51:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7232))+4);
  i7 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i7, 1u);
  str = (Object__String)i7;
  i7 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7292)))), &_td_Object__String8Desc, 7292)));
  chars = (Object__CharsLatin1)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7360))+16);
  i9 = OOC_ARRAY_LENGTH((_check_pointer(i7, 7356)), 0);
  i7 = (OOC_INT32)URI_Parser__NewURI((void*)(_check_pointer(i7, 7356)), i9, (URI__HierarchicalURI)i8, (void*)(OOC_INT32)&res);
  i8 = (OOC_INT32)res;
  uri = (URI__URI)i7;
  _assert((i8==0), 127, 7387);
  _assert((i7!=0), 127, 7417);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 7474))+20);
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7457)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i7, (URI__HierarchicalURI)i8);
  uri = (URI__URI)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7501))+12);
  i8 = i8!=0;
  if (i8) goto l54;
  prefixOption = (Object__String)0;
  i8=0;
  goto l55;
l54:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7554))+12);
  i8 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i8, 0u);
  prefixOption = (Object__String)i8;
  
l55:
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7662))+20);
  i9 = i9!=0;
  if (i9) goto l58;
  suffixOption = (Object__String)0;
  i6=0;
  goto l59;
l58:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7715))+20);
  i6 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i6, 0u);
  suffixOption = (Object__String)i6;
  
l59:
  OOC_SymbolTable__ModuleDesc_AddLinkFile((OOC_SymbolTable__Module)i1, (URI__HierarchicalURI)(_type_guard(i7, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7851)))), &_td_URI__HierarchicalURIDesc, 7851)), (Object__String)i8, (Object__String)i6);
l60:
  i4 = i4+1;
  i = i4;
  i6 = i4<i2;
  if (i6) goto l25_loop;
l66:
  *(OOC_INT32*)((_check_pointer(i3, 8841))+12) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8877))+16);
  i2 = i2!=0;
  if (!i2) goto l69;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8931))+16);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i2, (OOC_SymbolTable__Item)i1);
l69:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8980))+20);
  i2 = i2!=0;
  if (!i2) goto l72;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9074))+20);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i0, (OOC_SymbolTable__Item)i1);
l72:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitImportList(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ImportList importList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)importList;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9255))+4);
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i1, 9264));
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9307))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9316))+4);
  i4 = _check_pointer(i4, 9319);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9319))*4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9464));
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i1, 9473));
  i2 = 0<i1;
  if (!i2) goto l11;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9499));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9508))+4);
  i4 = _check_pointer(i4, 9511);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9511))*4);
  i4 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 9515)))), &_td_OOC_AST_ExtTree__TerminalDesc));
  if (!i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9564));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 9573))+4);
  i4 = _check_pointer(i4, 9576);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9576))*4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9880))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9888));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9898))+4);
  i1 = _check_pointer(i1, 9901);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 9901))*4);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i1);
  moduleName = (OOC_SymbolTable__Name)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9947))+12);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 9971));
  i4 = *(OOC_INT32*)((_check_pointer(i1, 10008))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i1, 10026))+8);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i5);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10114))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10122));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10132))+4);
  i2 = _check_pointer(i2, 10153);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10164))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 10172));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 10182));
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index((i3-1), i4, OOC_UINT32, 10153))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10199)))), &_td_OOC_AST_ExtTree__TerminalDesc, 10199)), 10208));
  nameSym = (OOC_Scanner_Builder_BasicList__Symbol)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10233))+4);
  i3 = i3!=0;
  if (i3) goto l3;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10339))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 10347));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 10357))+4);
  i3 = _check_pointer(i3, 10385);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10396))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 10404));
  i4 = *(OOC_INT32*)(_check_pointer(i4, 10414));
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index((i4-1), i5, OOC_UINT32, 10385))*4);
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  name = (OOC_SymbolTable__Name)i3;
  
  goto l4;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10288));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  name = (OOC_SymbolTable__Name)i3;
  
l4:
  i4 = (OOC_INT32)v;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 10453));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10558))+8);
  i6 = *(OOC_INT32*)((_check_pointer(i2, 10495))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 10508))+12);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10472))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10566))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 10453));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10458)))), OOC_SymbolTable_Builder__BuilderDesc_NewImport)),OOC_SymbolTable_Builder__BuilderDesc_NewImport)((OOC_SymbolTable_Builder__Builder)i4, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i3, (i6+i2), (OOC_Doc__Document)i0, (OOC_SymbolTable__Name)i1);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitConstDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ConstDecl constDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10740));
  i2 = (OOC_INT32)constDecl;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10799));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10771))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 10809));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10740));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10836))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10856)))), &_td_OOC_AST_ExtTree__TerminalDesc, 10856)), 10865));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10906));
  i6 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10928));
  i5 = *(OOC_INT32*)((_check_pointer(i5, 10870))+16);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 10938))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10978))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10745)))), OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i5, i6, (OOC_Doc__Document)i7, (Object_Boxed__Object)0, (OOC_SymbolTable__PredefType)0, (OOC_AST__Node)i2);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitTypeDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__TypeDecl typeDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11129));
  i2 = (OOC_INT32)typeDecl;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11186));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11159))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11196));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11129));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11233))+8);
  i6 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11262));
  i7 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i7);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11292));
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 11302))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11335))+8);
  i0 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i2);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11134)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i6, i7, (OOC_Doc__Document)i8, (OOC_SymbolTable__Type)i0);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11555))+8);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11589));
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 11600));
  i4 = 0<i3;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11630));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11684));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11695))+4);
  i6 = _check_pointer(i6, 11698);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 11698))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11650))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 11710)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 11710)), 11719));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11630));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11755))+8);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11791));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 11802))+4);
  i10 = _check_pointer(i10, 11805);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 11805))*4);
  i10 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i10);
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11827));
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 11838))+4);
  i11 = _check_pointer(i11, 11841);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i4, i12, OOC_UINT32, 11841))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 11853)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 11853)), 11862))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 11635)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i6, i9, i10, (OOC_Doc__Document)i11, 0u, 0u, 0u, (OOC_SymbolTable__Type)i1);
  var = (OOC_SymbolTable__VarDecl)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11933));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11944))+4);
  i6 = _check_pointer(i6, 11947);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+1), i7, OOC_UINT32, 11947))*4);
  flags = (OOC_AST__Node)i6;
  i7 = i6!=0;
  if (!i7) goto l6;
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i5, (OOC_AST_ExtTree__Flags)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 12018)))), &_td_OOC_AST_ExtTree__FlagsDesc, 12018)));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12223))+16);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12244));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12264))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12298))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12244));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i5);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12327))+16);
  i6 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12371))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12417))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 12378))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12249)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i2, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i5, i6, 0, (OOC_Doc__Document)i7, 1u, 1u, (i0!=0), (OOC_SymbolTable__Type)i1);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12655))+12);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12691))+4);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 12702));
  i4 = 0<i3;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12732));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12788))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 12799))+4);
  i6 = _check_pointer(i6, 12802);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12752))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 12802))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12732));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12836))+12);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12883))+4);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 12894))+4);
  i10 = _check_pointer(i10, 12897);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 12897))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12961));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 12909)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 12909)), 12918))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 12737)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Name)i6, i9, 0, (OOC_Doc__Document)i10, 1u, 0u, (i11!=0), (OOC_SymbolTable__Type)i1);
  var = (OOC_SymbolTable__VarDecl)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13005))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 13016))+4);
  i6 = _check_pointer(i6, 13019);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+1), i7, OOC_UINT32, 13019))*4);
  flags = (OOC_AST__Node)i6;
  i7 = i6!=0;
  if (!i7) goto l6;
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i5, (OOC_AST_ExtTree__Flags)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 13090)))), &_td_OOC_AST_ExtTree__FlagsDesc, 13090)));
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
      i1 = *(OOC_INT32*)(_check_pointer(i0, 13542));
      i2 = 0<i1;
      if (!i2) goto l16;
      i2 = (OOC_INT32)proc;
      i3=0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13576))+4);
      i4 = _check_pointer(i4, 13579);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 13579))*4);
      i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13591)))), &_td_OOC_AST_ExtTree__NodeDesc, 13591);
      n = (OOC_AST_ExtTree__Node)i4;
      i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13612)))), &_td_OOC_AST_ExtTree__TerminalDesc);
      if (i5) goto l6;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 13606)))), 13606);
      goto l11;
l6:
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 13650));
      i5 = *(OOC_INT8*)((_check_pointer(i5, 13654))+4);
      switch (i5) {
      case 43:
      case 44:
        i4 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i4, 1u);
        OOC_SymbolTable__ProcDeclDesc_SetLinkName((OOC_SymbolTable__ProcDecl)i2, (Object__String)i4);
        goto l11;
      default:
        i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13799)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13924))+20);
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  endPos = i1;
  i2 = i1<0;
  if (!i2) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13999))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14009));
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  endPos = i1;
  
l4:
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14041));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14096))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14062))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 14106));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14041));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14150))+16);
  i7 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i7);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14177))+16);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14214))+8);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14240))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 14187))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14046)))), OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i5, (OOC_SymbolTable__Name)i4, i1, i7, (OOC_Doc__Document)i8, (i9!=0), (i10!=0), (OOC_AST__Node)i0);
  proc = (OOC_SymbolTable__ProcDecl)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14287))+20);
  i3 = i3!=0;
  if (i3) goto l7;
  i3=0u;
  goto l9;
l7:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14325))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14346)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14346)), 14357))+20);
  i3 = i3!=0;
  
l9:
  if (i3) goto l11;
  type = (OOC_SymbolTable__Type)0;
  i3=0;
  goto l12;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14412))+20);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14433)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14433)), 14444))+20);
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i3);
  type = (OOC_SymbolTable__Type)i3;
  
l12:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14509));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14599));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14509));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i5);
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14514)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Type)i3);
  formalPars = (OOC_SymbolTable__FormalPars)i3;
  *(OOC_INT32*)((_check_pointer(i1, 14623))+56) = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14668))+8);
  i4 = i4!=0;
  if (!i4) goto l15;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14722))+8);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i4, (OOC_SymbolTable__Item)i3);
l15:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14771))+20);
  i4 = i4!=0;
  if (!i4) goto l45;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14818))+20);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 14839)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 14839);
  fpar = (OOC_AST_ExtTree__FormalPars)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 14883));
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i3, (OOC_AST_ExtTree__Flags)i5);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14906))+8);
  i5 = i5!=0;
  if (!i5) goto l32;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14957))+8);
  i = 0;
  i5 = *(OOC_INT32*)(_check_pointer(i5, 14969));
  i6 = 0<i5;
  if (!i6) goto l32;
  i6=0;
l22_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15010))+8);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 15022))+4);
  i7 = _check_pointer(i7, 15025);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 15025))*4);
  nodePtr = (OOC_AST__Node)i7;
  i8 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 15052)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i8) goto l25;
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i7, (OOC_SymbolTable__Item)i3);
  goto l26;
l25:
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i7, 15122));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 15127))+8);
  _assert(((
  _cmp8((const void*)(_check_pointer(i7, 15132)),(const void*)"..."))==0), 127, 15107);
  OOC_SymbolTable__FormalParsDesc_EnableRestParameters((OOC_SymbolTable__FormalPars)i3);
l26:
  i6 = i6+2;
  i = i6;
  i7 = i6<i5;
  if (i7) goto l22_loop;
l32:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15308))+28);
  i5 = i5!=0;
  if (i5) goto l35;
  *(OOC_INT32*)((_check_pointer(i3, 15674))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], 0));
  goto l45;
l35:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15368))+28);
  i5 = *(OOC_INT32*)(_check_pointer(i5, 15379));
  *(OOC_INT32*)((_check_pointer(i3, 15354))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], ((i5+1)>>1)));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15421))+28);
  i = 0;
  i5 = *(OOC_INT32*)(_check_pointer(i5, 15433));
  i6 = 0<i5;
  if (!i6) goto l45;
  i6=0;
l38_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 15474))+28);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 15486))+4);
  i7 = _check_pointer(i7, 15489);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 15489))*4);
  nodePtr = (OOC_AST__Node)i7;
  i7 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i7);
  type = (OOC_SymbolTable__Type)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 15553))+52);
  i8 = _check_pointer(i8, 15560);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15588));
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15588));
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 15592)))), OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)),OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)((OOC_SymbolTable_Builder__Builder)i11, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Type)i7);
  *(OOC_INT32*)(i8+(_check_index((i6>>1), i9, OOC_UINT32, 15560))*4) = i7;
  i6 = i6+2;
  i = i6;
  i7 = i6<i5;
  if (i7) goto l38_loop;
l45:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15723))+12);
  i2 = i2!=0;
  if (!i2) goto l48;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15775))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15782))+8);
  OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl_ParseFlags((OOC_SymbolTable__ProcDecl)i1, (OOC_AST_ExtTree__NodeList)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15801)))), &_td_OOC_AST_ExtTree__NodeListDesc, 15801)));
l48:
  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15843))+28);
  i1 = i1!=0;
  if (!i1) goto l51;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15893))+28);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16117))+8);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16153));
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 16164));
  i4 = 0<i3;
  if (!i4) goto l8;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16196));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16254));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 16265))+4);
  i6 = _check_pointer(i6, 16268);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 16268))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16218))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 16280)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 16280)), 16289));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16196));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16327))+8);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16365));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 16376))+4);
  i10 = _check_pointer(i10, 16379);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 16379))*4);
  i10 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)(_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 16391)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 16391)));
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16421));
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 16432))+4);
  i11 = _check_pointer(i11, 16435);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i4, i12, OOC_UINT32, 16435))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 16447)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 16447)), 16456))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 16201)))), OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i6, i9, i10, (OOC_Doc__Document)i11, (OOC_SymbolTable__Type)i1);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16607));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16628))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16607));
  i4 = (OOC_INT32)terminal;
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16612)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Name)0, (OOC_SymbolTable__Name)i4);
  *(OOC_INT32*)((_check_pointer(i0, 16596))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitOperator(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Operator _operator) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16838));
  i2 = (OOC_INT32)_operator;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16859))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16890));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16838));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 16943));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16969))+8);
  i2 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16843)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Name)i6, (OOC_SymbolTable__Name)i2);
  *(OOC_INT32*)((_check_pointer(i0, 16827))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitRecordType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__RecordType recordType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SymbolTable__Type baseType;
  OOC_SymbolTable__Record record;
  OOC_INT32 i;

  i0 = (OOC_INT32)recordType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17171))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  baseType = (OOC_SymbolTable__Type)(OOC_INT32)0;
  i1=(OOC_INT32)0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17234))+12);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  
l4:
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 17302));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17321))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17354));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 17302));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 17307)))), OOC_SymbolTable_Builder__BuilderDesc_NewRecord)),OOC_SymbolTable_Builder__BuilderDesc_NewRecord)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Type)i1);
  record = (OOC_SymbolTable__Record)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17440))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i1, (OOC_AST_ExtTree__Flags)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17477))+20);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 17489));
  i4 = 0<i3;
  if (!i4) goto l15;
  i4=0;
l7_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17525))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 17537))+4);
  i5 = _check_pointer(i5, 17540);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 17540))*4);
  i5 = i5!=(OOC_INT32)0;
  if (!i5) goto l10;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17591))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 17603))+4);
  i5 = _check_pointer(i5, 17606);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 17606))*4);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i5, (OOC_SymbolTable__Item)i1);
l10:
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l7_loop;
l15:
  *(OOC_INT32*)((_check_pointer(i2, 17643))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitPointerType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__PointerType pointerType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17785));
  i2 = (OOC_INT32)pointerType;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17805))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 17874));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17785));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17944))+12);
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i6);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17790)))), OOC_SymbolTable_Builder__BuilderDesc_NewPointer)),OOC_SymbolTable_Builder__BuilderDesc_NewPointer)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Type)i6);
  *(OOC_INT32*)((_check_pointer(i0, 17774))+8) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17986))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17968))+8);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18207))+8);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 18217));
  i1 = i1>0;
  if (i1) goto l3;
  i1 = (OOC_INT32)v;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18775));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18793))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18825));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 18775));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18900))+16);
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i1, (OOC_AST__Node)i6);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18780)))), OOC_SymbolTable_Builder__BuilderDesc_NewArray)),OOC_SymbolTable_Builder__BuilderDesc_NewArray)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, 1u, (OOC_AST__Node)0, (OOC_SymbolTable__Type)i6);
  array = (OOC_SymbolTable__Array)i2;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18941))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i2, (OOC_AST_ExtTree__Flags)i0);
  i0=i1;i1=i2;
  goto l17;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18272))+16);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18305))+8);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 18315));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18462))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 18472))+4);
  i4 = _check_pointer(i4, 18475);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index((i1-1), i5, OOC_UINT32, 18475))*4);
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  pos = (OOC_SymbolTable__Position)i4;
  
  goto l11;
l10:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18400));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  pos = (OOC_SymbolTable__Position)i4;
  
l11:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18517));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18617))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 18627))+4);
  i6 = _check_pointer(i6, 18630);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18547))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 18630))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 18517));
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 18522)))), OOC_SymbolTable_Builder__BuilderDesc_NewArray)),OOC_SymbolTable_Builder__BuilderDesc_NewArray)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Position)i4, 0u, (OOC_AST__Node)i6, (OOC_SymbolTable__Type)i3);
  baseType = (OOC_SymbolTable__Type)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18695))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i3, (OOC_AST_ExtTree__Flags)i4);
  i1 = i1+(-2);
  i = i1;
  i4 = i1>=0;
  if (i4) goto l7_loop;
l15:
  i0=i3;
l16:
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18743)))), &_td_OOC_SymbolTable__ArrayDesc, 18743);
  array = (OOC_SymbolTable__Array)i0;
  i1=i0;i0=i2;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 18964))+8) = i1;
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19246))+4);
  i2 = (OOC_INT32)v;
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19284))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19305)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19305)), 19316))+20);
  i1 = i1!=(OOC_INT32)0;
  
l5:
  if (i1) goto l7;
  baseType = (OOC_SymbolTable__Type)(OOC_INT32)0;
  i1=(OOC_INT32)0;
  goto l8;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19375))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19396)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19396)), 19407))+20);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  
l8:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 19476));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19499))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19569));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 19476));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19481)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Type)i1);
  formalPars = (OOC_SymbolTable__FormalPars)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19648))+4);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l11;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19707))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 19727)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19727)), 19738));
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i1, (OOC_AST_ExtTree__Flags)i3);
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19772))+4);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l37;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19819))+4);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19840)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 19840);
  fpar = (OOC_AST_ExtTree__FormalPars)i0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19867))+8);
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l24;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19918))+8);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 19930));
  i4 = 0<i3;
  if (!i4) goto l24;
  i4=0;
l18_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19977))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 19989))+4);
  i5 = _check_pointer(i5, 19992);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 19992))*4);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i5, (OOC_SymbolTable__Item)i1);
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l18_loop;
l24:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20054))+28);
  i3 = i3!=(OOC_INT32)0;
  if (i3) goto l27;
  *(OOC_INT32*)((_check_pointer(i1, 20420))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], 0));
  goto l37;
l27:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20114))+28);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 20125));
  *(OOC_INT32*)((_check_pointer(i1, 20100))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], ((i3+1)>>1)));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20167))+28);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 20179));
  i4 = 0<i3;
  if (!i4) goto l37;
  i4=0;
l30_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20220))+28);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 20232))+4);
  i5 = _check_pointer(i5, 20235);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 20235))*4);
  nodePtr = (OOC_AST__Node)i5;
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i5);
  type = (OOC_SymbolTable__Type)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20299))+52);
  i6 = _check_pointer(i6, 20306);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 20334));
  i9 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 20334));
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 20338)))), OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)),OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)((OOC_SymbolTable_Builder__Builder)i9, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Type)i5);
  *(OOC_INT32*)(i6+(_check_index((i4>>1), i7, OOC_UINT32, 20306))*4) = i5;
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l30_loop;
l37:
  *(OOC_INT32*)((_check_pointer(i2, 20458))+8) = i1;
  return;
  ;
}

OOC_SymbolTable__Module OOC_AST_ExtTree_CreateSymTab__CreateSymTab(OOC_AST__Node module, OOC_SymbolTable_Builder__Builder stb, Object__String libraryName, URI__HierarchicalURI baseURI, URI__HierarchicalURI rootURI) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_AST_ExtTree_CreateSymTab__Visitor v;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree_CreateSymTab__Visitor.baseTypes[0]);
  v = (OOC_AST_ExtTree_CreateSymTab__Visitor)i0;
  i1 = (OOC_INT32)stb;
  *(OOC_INT32*)(_check_pointer(i0, 21077)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 21096))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 21118))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 21138))+12) = 0;
  i2 = (OOC_INT32)baseURI;
  *(OOC_INT32*)((_check_pointer(i0, 21158))+16) = i2;
  i2 = (OOC_INT32)rootURI;
  *(OOC_INT32*)((_check_pointer(i0, 21185))+20) = i2;
  i2 = (OOC_INT32)module;
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21236))+12);
  i3 = (OOC_INT32)libraryName;
  OOC_SymbolTable__ModuleDesc_SetLibraryName((OOC_SymbolTable__Module)i2, (Object__String)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21291))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21278)))), OOC_SymbolTable_Builder__BuilderDesc_Finalize)),OOC_SymbolTable_Builder__BuilderDesc_Finalize)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21312))+12);
  return (OOC_SymbolTable__Module)i0;
  ;
}

void OOC_OOC_AST_ExtTree_CreateSymTab_init(void) {

  return;
  ;
}

/* --- */
