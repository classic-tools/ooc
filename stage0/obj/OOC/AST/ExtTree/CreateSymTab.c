#include <OOC/AST/ExtTree/CreateSymTab.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_SymbolTable__Name OOC_AST_ExtTree_CreateSymTab__GetName(OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_Scanner_BasicList__Symbol sym;
  OOC_SymbolTable__Name name;

  i0 = (OOC_INT32)node;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2362)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2417)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2411)))), 2411);
  goto l8;
l5:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2456));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2463));
  sym = (OOC_Scanner_BasicList__Symbol)i0;
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2401));
  sym = (OOC_Scanner_BasicList__Symbol)i0;
l8:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  name = (OOC_SymbolTable__Name)i0;
  i1 = (OOC_INT32)sym;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2521))+8);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 2531))+16);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 2541))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 2552))+24);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i1);
  return (OOC_SymbolTable__Name)i0;
  ;
}

static OOC_SymbolTable__Position OOC_AST_ExtTree_CreateSymTab__GetPosition(OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_Scanner_BasicList__Symbol sym;
  OOC_SymbolTable__Position position;

  i0 = (OOC_INT32)node;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2731)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2786)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l9;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2848)))), &_td_OOC_AST_ExtTree__OperatorDesc);
  if (i1) goto l7;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2842)))), 2842);
  goto l12;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2887))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2890));
  i1 = *(OOC_INT8*)((_check_pointer(i1, 2894))+4);
  _assert((i1==18), 127, 2876);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2933))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2948)))), &_td_OOC_AST_ExtTree__TerminalDesc, 2948)), 2957));
  sym = (OOC_Scanner_BasicList__Symbol)i0;
  goto l12;
l9:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2825));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2832));
  sym = (OOC_Scanner_BasicList__Symbol)i0;
  goto l12;
l11:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2770));
  sym = (OOC_Scanner_BasicList__Symbol)i0;
l12:
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Position.baseTypes[0]);
  position = (OOC_SymbolTable__Position)i0;
  i1 = (OOC_INT32)sym;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 3027))+16);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 3037))+20);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 3048))+24);
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, i2, i3, i1);
  return (OOC_SymbolTable__Position)i0;
  ;
}

static OOC_INT8 OOC_AST_ExtTree_CreateSymTab__ExportMark(OOC_AST__Node id) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)id;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3171)))), &_td_OOC_AST_ExtTree__IdentDefDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3164)))), 3164);
  goto l12;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3205))+4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l10;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3274))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3280));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3285))+8);
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 3290)),(const void*)"*"))==0;
  if (i0) goto l8;
  return 2;
  goto l12;
l8:
  return 1;
  goto l12;
l10:
  return 0;
l12:
  _failed_function(3109); return 0;
  ;
}

static OOC_INT32 OOC_AST_ExtTree_CreateSymTab__EndOfType(OOC_AST__Node t) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 end;

  i0 = (OOC_INT32)t;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l51;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3599)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i1) goto l49;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3669)))), &_td_OOC_AST_ExtTree__OperatorDesc);
  if (i1) goto l47;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3736)))), &_td_OOC_AST_ExtTree__ArrayTypeDesc);
  if (i1) goto l45;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3803)))), &_td_OOC_AST_ExtTree__RecordTypeDesc);
  if (i1) goto l43;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3870)))), &_td_OOC_AST_ExtTree__PointerTypeDesc);
  if (i1) goto l41;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3939)))), &_td_OOC_AST_ExtTree__ProcTypeDesc);
  if (i1) goto l31;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4244)))), &_td_OOC_AST_ExtTree__FormalParsDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4471)))), &_td_OOC_AST_ExtTree__QualTypeDesc);
  if (i1) goto l19;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4468)))), 4468);
  goto l52;
l19:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4519))+12);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l21:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4281))+20);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l28;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4357))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l26;
  return (-1);
  goto l52;
l26:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4407))+12);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l28:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4331))+20);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l31:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3974))+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l34;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4210));
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l34:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4028))+4);
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  end = i1;
  i2 = i1==(-1);
  if (i2) goto l37;
  return i1;
  goto l52;
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4103));
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l41:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3922))+12);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l43:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3854))+24);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l45:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3786))+16);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l47:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3718))+8);
  i0 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i0);
  return i0;
  goto l52;
l49:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3637));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3649));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 3642))+16);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 3654))+12);
  return (i1+i0);
  goto l52;
l51:
  return (-1);
l52:
  _failed_function(3462); return 0;
  ;
}

static void OOC_AST_ExtTree_CreateSymTab__Accept(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Item oldParent;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4669))+4);
  oldParent = (OOC_SymbolTable__Item)i1;
  i2 = (OOC_INT32)node;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4696)))), &_td_OOC_AST_ExtTree__NodeDesc, 4696)), 4701)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4696)))), &_td_OOC_AST_ExtTree__NodeDesc, 4696)), (OOC_AST_ExtTree__Visitor)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4720))+4) = i1;
  return;
  ;
}

static void OOC_AST_ExtTree_CreateSymTab__AcceptParent(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node, OOC_SymbolTable__Item newParent) {
  register OOC_INT32 i0,i1,i2;
  OOC_SymbolTable__Item oldParent;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5095))+4);
  oldParent = (OOC_SymbolTable__Item)i1;
  i2 = (OOC_INT32)newParent;
  *(OOC_INT32*)((_check_pointer(i0, 5110))+4) = i2;
  i2 = (OOC_INT32)node;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5150)))), &_td_OOC_AST_ExtTree__NodeDesc, 5150)), 5155)))), OOC_AST_ExtTree__NodeDesc_Accept)),OOC_AST_ExtTree__NodeDesc_Accept)((OOC_AST_ExtTree__Node)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5150)))), &_td_OOC_AST_ExtTree__NodeDesc, 5150)), (OOC_AST_ExtTree__Visitor)i0);
  *(OOC_INT32*)((_check_pointer(i0, 5174))+4) = i1;
  return;
  ;
}

static OOC_SymbolTable__Type OOC_AST_ExtTree_CreateSymTab__GetType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)v;
  *(OOC_INT32*)((_check_pointer(i0, 5311))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)node;
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5361))+8);
  _assert((i1!=(OOC_INT32)0), 127, 5352);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5386))+8);
  return (OOC_SymbolTable__Type)i0;
  ;
}

static OOC_SymbolTable__Type OOC_AST_ExtTree_CreateSymTab__GetTypeParent(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST__Node node, OOC_SymbolTable__Item newParent) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  *(OOC_INT32*)((_check_pointer(i0, 5544))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)node;
  i2 = (OOC_INT32)newParent;
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i1, (OOC_SymbolTable__Item)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5611))+8);
  _assert((i1!=(OOC_INT32)0), 127, 5602);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5636))+8);
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
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5856))+8);
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5874)))), &_td_OOC_AST_ExtTree__NodeListDesc, 5874);
  l = (OOC_AST_ExtTree__NodeList)i0;
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 5906));
  i2 = 0<i1;
  if (!i2) goto l15;
  i2 = (OOC_INT32)item;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5936))+4);
  i4 = _check_pointer(i4, 5939);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5939))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5951)))), &_td_OOC_AST_ExtTree__NodeDesc, 5951);
  n = (OOC_AST_ExtTree__Node)i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5972)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i5) goto l8;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5966)))), 5966);
  goto l9;
l8:
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6008)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i4);
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

  _assert(0u, 127, 6156);
  
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitModule(volatile OOC_AST_ExtTree_CreateSymTab__Visitor v, volatile OOC_AST_ExtTree__Module module) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
  volatile OOC_SymbolTable__Name moduleName;
  volatile OOC_AST_ExtTree__ModuleFlags mf;
  volatile OOC_INT8 _class;
  volatile OOC_INT8 callConv;
  volatile OOC_INT32 i;
  volatile OOC_AST__Node n;
  volatile Object__String str;
  volatile OOC_SymbolTable__Module moduleDecl;
  volatile OOC_SymbolTable__Name name;
  volatile URI__URI uri;
  volatile Object__String prefixOption;
  volatile Object__String suffixOption;
  volatile Object__StringArrayPtr depList;
  volatile OOC_INT32 j;
  jmp_buf _target0;
  Exception__Context _context0;

  i0 = (OOC_INT32)module;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6615))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6621));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6631))+4);
  i1 = _check_pointer(i1, 6634);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 6634))*4);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i1);
  moduleName = (OOC_SymbolTable__Name)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6676))+28);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 6700));
  i4 = *(OOC_INT32*)((_check_pointer(i1, 6737))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i1, 6755))+8);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i5);
  mf = (OOC_AST_ExtTree__ModuleFlags)0;
  _class = 0;
  callConv = 0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6866))+8);
  i3 = (OOC_INT32)v;
  i2 = i2!=0;
  if (i2) goto l3;
  i2=0;i4=0;i5=0;
  goto l28;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6912))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6918))+8);
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i2, 6927));
  i4 = 0<i2;
  if (i4) goto l6;
  i2=0;i4=0;i5=0;
  goto l28;
l6:
  i4=0;i5=0;i6=0;i7=0;
l7_loop:
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6956))+8);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 6963))+8);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 6973))+4);
  i8 = _check_pointer(i8, 6976);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 6976))*4);
  n = (OOC_AST__Node)i8;
  i9 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 6995)))), &_td_OOC_AST_ExtTree__ModuleFlagsDesc);
  if (i9) goto l13;
  i9 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 7400)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i9) goto l22;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 7397)))), 7397);
  goto l22;
l13:
  mf = (OOC_AST_ExtTree__ModuleFlags)i8;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i8, 7055));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 7065));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7070))+8);
  i6 = (
  _cmp8((const void*)(_check_pointer(i6, 7075)),(const void*)"FOREIGN"))==0;
  if (i6) goto l20;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i8, 7149));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 7159));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7164))+8);
  i6 = (
  _cmp8((const void*)(_check_pointer(i6, 7169)),(const void*)"INTERFACE"))==0;
  if (!i6) goto l21;
  _class = 3;
  i5=3;
  goto l21;
l20:
  _class = 2;
  i5=2;
l21:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 7262))+4);
  i6 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i6, 1u);
  str = (Object__String)i6;
  i6 = OOC_SymbolTable__StringToCallConv((Object__String)i6);
  callConv = i6;
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7353));
  i9 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7353));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7358)))), OOC_SymbolTable_Builder__BuilderDesc_SetClass)),OOC_SymbolTable_Builder__BuilderDesc_SetClass)((OOC_SymbolTable_Builder__Builder)i9, i5);
  i7=i8;
l22:
  i4 = i4+1;
  i = i4;
  i8 = i4<i2;
  if (i8) goto l7_loop;
l26:
  i2=i5;i5=i7;i4=i6;
l28:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7496));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7532))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 7538))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 7496));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 7501)))), OOC_SymbolTable_Builder__BuilderDesc_NewModule)),OOC_SymbolTable_Builder__BuilderDesc_NewModule)((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Name)i1, (OOC_Doc__Document)i7, i2, i4, (OOC_AST__Node)i0);
  moduleDecl = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7628))+8);
  i2 = i2!=0;
  if (!i2) goto l49;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7708))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7714))+8);
  i = 0;
  i2 = *(OOC_INT32*)(_check_pointer(i2, 7723));
  i3 = 0<i2;
  if (!i3) goto l49;
  i3=0;
l33_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7752))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7759))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7769))+4);
  i4 = _check_pointer(i4, 7772);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 7772))*4);
  n = (OOC_AST__Node)i4;
  i6 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7791)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (!i6) goto l43;
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  name = (OOC_SymbolTable__Name)i6;
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7872))+12);
  i7 = _check_pointer(i7, 7876);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(0, i8, OOC_UINT8, 7876)));
  i7 = (OOC_UINT8)65u<=(OOC_UINT8)(_cap(i7));
  if (i7) goto l38;
  i6=0u;
  goto l40;
l38:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 7893))+12);
  i6 = _check_pointer(i6, 7897);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT8*)(i6+(_check_index(0, i7, OOC_UINT8, 7897)));
  i6 = (OOC_UINT8)(_cap(i6))<=(OOC_UINT8)90u;
  
l40:
  if (!i6) goto l43;
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8001)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i4);
l43:
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l33_loop;
l49:
  i0 = i5!=0;
  if (i0) goto l52;
  i0=0u;
  goto l54;
l52:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 8130))+20);
  i0 = i0!=0;
  
l54:
  if (!i0) goto l118;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 8179))+20);
  i = 0;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 8193));
  i1 = 0<i0;
  if (!i1) goto l118;
  i1=0;
l58_loop:
  i2 = (OOC_INT32)mf;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8219))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8233))+4);
  i2 = _check_pointer(i2, 8236);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 8236))*4);
  n = (OOC_AST__Node)i1;
  i2 = i1!=0;
  if (!i2) goto l112;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8309)))), &_td_OOC_AST_ExtTree__LinkFileFlagDesc);
  if (i2) goto l94;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9138)))), &_td_OOC_AST_ExtTree__LinkLibFlagDesc);
  if (!i2) goto l112;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9183))+4);
  i2 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i2, 1u);
  str = (Object__String)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9229))+24);
  i3 = i3!=0;
  if (i3) goto l67;
  prefixOption = (Object__String)0;
  i3=0;
  goto l68;
l67:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9284))+24);
  i3 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i3, 0u);
  prefixOption = (Object__String)i3;
  
l68:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9400))+32);
  i4 = i4!=0;
  if (i4) goto l71;
  suffixOption = (Object__String)0;
  i4=0;
  goto l72;
l71:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9455))+32);
  i4 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i4, 0u);
  suffixOption = (Object__String)i4;
  
l72:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9571))+12);
  i5 = i5==0;
  if (i5) goto l83;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9676))+12);
  i5 = *(OOC_INT32*)(_check_pointer(i5, 9690));
  i5 = (OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], ((i5>>1)+1));
  depList = (Object__StringArrayPtr)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9735))+12);
  j = 0;
  i6 = *(OOC_INT32*)(_check_pointer(i6, 9749));
  i7 = 0<i6;
  if (!i7) goto l84;
  i7=0;
l77_loop:
  i8 = _check_pointer(i5, 9788);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9802))+12);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 9816))+4);
  i10 = _check_pointer(i10, 9819);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i7, i11, OOC_UINT32, 9819))*4);
  i10 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)(_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 9831)))), &_td_OOC_AST_ExtTree__TerminalDesc, 9831)), 1u);
  *(OOC_INT32*)(i8+(_check_index((i7>>1), i9, OOC_UINT32, 9788))*4) = i10;
  i7 = i7+2;
  j = i7;
  i8 = i7<i6;
  if (i8) goto l77_loop;
  goto l84;
l83:
  i5 = (OOC_INT32)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], 0);
  depList = (Object__StringArrayPtr)i5;
  
l84:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9912));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 9925)))), &_td_OOC_AST_ExtTree__TerminalDesc, 9925)), 9934));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 9938))+8);
  i6 = (
  _cmp8((const void*)(_check_pointer(i6, 9942)),(const void*)"LIB"))==0;
  if (i6) goto l91;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10075));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10088)))), &_td_OOC_AST_ExtTree__TerminalDesc, 10088)), 10097));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10101))+8);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 10105)),(const void*)"FRAMEWORK"))==0;
  if (i1) goto l89;
  _assert(0u, 127, 10331);
  goto l112;
l89:
  i1 = (OOC_INT32)moduleDecl;
  OOC_SymbolTable__ModuleDesc_AddLinkLib((OOC_SymbolTable__Module)i1, (Object__String)i2, (Object__StringArrayPtr)i5, (Object__String)i3, (Object__String)i4, 1);
  goto l112;
l91:
  i1 = (OOC_INT32)moduleDecl;
  OOC_SymbolTable__ModuleDesc_AddLinkLib((OOC_SymbolTable__Module)i1, (Object__String)i2, (Object__StringArrayPtr)i5, (Object__String)i3, (Object__String)i4, 0);
  goto l112;
l94:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8355))+4);
  i1 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i1, 1u);
  str = (Object__String)i1;
  {
    Exception__PushContext(&_context0, &_target0);
    if (!setjmp(_target0)) goto l101;
    Exception__PopContext(1);
    i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG(((OOC_INT32)Exception__Current()))), &_td_Exception__ParseErrorDesc);
    if (i1) goto l99;
    Exception__ActivateContext();
    goto l100;
l99:
    _assert(0u, 127, 8526);
l100:
    Exception__Clear();
    goto l102;
l101:
    i2 = (OOC_INT32)v;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8461))+16);
    i1 = (OOC_INT32)URI_Parser__NewURI((Object__String8)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8450)))), &_td_Object__String8Desc, 8450)), (URI__HierarchicalURI)i2);
    uri = (URI__URI)i1;
    Exception__PopContext(1);
l102:;
  }
  i1 = (OOC_INT32)uri;
  _assert((i1!=0), 127, 8570);
  i2 = (OOC_INT32)v;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8629))+20);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8612)))), URI__URIDesc_MakeRelative)),URI__URIDesc_MakeRelative)((URI__URI)i1, (URI__HierarchicalURI)i2);
  uri = (URI__URI)i1;
  i2 = (OOC_INT32)n;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8658))+12);
  i3 = i3!=0;
  if (i3) goto l105;
  prefixOption = (Object__String)0;
  i3=0;
  goto l106;
l105:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8713))+12);
  i3 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i3, 0u);
  prefixOption = (Object__String)i3;
  
l106:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8829))+20);
  i4 = i4!=0;
  if (i4) goto l109;
  suffixOption = (Object__String)0;
  i2=0;
  goto l110;
l109:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8884))+20);
  i2 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i2, 0u);
  suffixOption = (Object__String)i2;
  
l110:
  i4 = (OOC_INT32)moduleDecl;
  OOC_SymbolTable__ModuleDesc_AddLinkFile((OOC_SymbolTable__Module)i4, (URI__HierarchicalURI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9028)))), &_td_URI__HierarchicalURIDesc, 9028)), (Object__String)i3, (Object__String)i2);
l112:
  i1 = i;
  i1 = i1+1;
  i = i1;
  i2 = i1<i0;
  if (i2) goto l58_loop;
l118:
  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)moduleDecl;
  *(OOC_INT32*)((_check_pointer(i0, 10483))+12) = i1;
  i2 = (OOC_INT32)module;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10519))+16);
  i3 = i3!=0;
  if (!i3) goto l121;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10573))+16);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i3, (OOC_SymbolTable__Item)i1);
l121:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10622))+20);
  i3 = i3!=0;
  if (!i3) goto l124;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10716))+20);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i2, (OOC_SymbolTable__Item)i1);
l124:
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitImportList(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ImportList importList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)importList;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10897))+4);
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i1, 10906));
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10949))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 10958))+4);
  i4 = _check_pointer(i4, 10961);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 10961))*4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11106));
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i1, 11115));
  i2 = 0<i1;
  if (!i2) goto l11;
  i2 = (OOC_INT32)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11141));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 11150))+4);
  i4 = _check_pointer(i4, 11153);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 11153))*4);
  i4 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 11157)))), &_td_OOC_AST_ExtTree__TerminalDesc));
  if (!i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11206));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 11215))+4);
  i4 = _check_pointer(i4, 11218);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 11218))*4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11522))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11530));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11540))+4);
  i1 = _check_pointer(i1, 11543);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 11543))*4);
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i1);
  moduleName = (OOC_SymbolTable__Name)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11589))+12);
  i3 = *(OOC_INT32*)(_check_pointer(i1, 11613));
  i4 = *(OOC_INT32*)((_check_pointer(i1, 11650))+4);
  i5 = *(OOC_INT32*)((_check_pointer(i1, 11668))+8);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i2, i3, i4, i5);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11756))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 11764));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11774))+4);
  i2 = _check_pointer(i2, 11795);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11806))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11814));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 11824));
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index((i3-1), i4, OOC_UINT32, 11795))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11841)))), &_td_OOC_AST_ExtTree__TerminalDesc, 11841)), 11850));
  nameSym = (OOC_Scanner_BasicList__Symbol)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11875))+4);
  i3 = i3!=0;
  if (i3) goto l3;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11981))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11989));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11999))+4);
  i3 = _check_pointer(i3, 12027);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12038))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 12046));
  i4 = *(OOC_INT32*)(_check_pointer(i4, 12056));
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index((i4-1), i5, OOC_UINT32, 12027))*4);
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  name = (OOC_SymbolTable__Name)i3;
  
  goto l4;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11930));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  name = (OOC_SymbolTable__Name)i3;
  
l4:
  i4 = (OOC_INT32)v;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 12095));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12200))+8);
  i6 = *(OOC_INT32*)((_check_pointer(i2, 12137))+16);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 12150))+12);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 12114))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12208))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 12095));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 12100)))), OOC_SymbolTable_Builder__BuilderDesc_NewImport)),OOC_SymbolTable_Builder__BuilderDesc_NewImport)((OOC_SymbolTable_Builder__Builder)i4, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i3, (i6+i2), (OOC_Doc__Document)i0, (OOC_SymbolTable__Name)i1);
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitConstDecl(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ConstDecl constDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_SymbolTable__ConstDecl _const;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12382));
  i2 = (OOC_INT32)constDecl;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12441));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12413))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 12451));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12382));
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i3);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12478))+16);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 12498)))), &_td_OOC_AST_ExtTree__TerminalDesc, 12498)), 12507));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12548));
  i6 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12570));
  i5 = *(OOC_INT32*)((_check_pointer(i5, 12512))+16);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 12580))+8);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12620))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12387)))), OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i5, i6, (OOC_Doc__Document)i7, (Object_Boxed__Object)0, (OOC_SymbolTable__PredefType)0, (OOC_AST__Node)i8);
  _const = (OOC_SymbolTable__ConstDecl)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12646))+4);
  i1 = i1!=0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12696))+4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12919))+12);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12954))+4);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 12964));
  i4 = 0<i3;
  if (!i4) goto l8;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12998));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13053))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 13063))+4);
  i6 = _check_pointer(i6, 13065);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13027))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 13065))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12998));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13101))+12);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13150))+4);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 13160))+4);
  i10 = _check_pointer(i10, 13162);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 13162))*4);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 13174)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 13174)), 13183))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 13002)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Name)i6, i9, 0, (OOC_Doc__Document)i10, (OOC_SymbolTable__Type)i1, 1u);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13426))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l11;
  i1 = (OOC_INT32)v;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13517));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13535))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13517));
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13521)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypePars)),OOC_SymbolTable_Builder__BuilderDesc_NewTypePars)((OOC_SymbolTable_Builder__Builder)i4, (OOC_SymbolTable__Item)i3);
  typePars = (OOC_SymbolTable__TypePars)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13573))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13582))+4);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 13593));
  i4 = 0<i3;
  if (!i4) goto l10;
  i4=0;
l5_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13640))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 13649))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 13660))+4);
  i5 = _check_pointer(i5, 13662);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 13662))*4);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i1, (OOC_AST__Node)i5, (OOC_SymbolTable__Item)i2);
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l5_loop;
l10:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13728))+16);
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetTypeParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i1, (OOC_AST__Node)i3, (OOC_SymbolTable__Item)i2);
  base = (OOC_SymbolTable__Type)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13763))+24);
  _assert((i4==(OOC_INT32)0), 127, 13752);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13793)))), OOC_SymbolTable__TypeDesc_SetTypePars)),OOC_SymbolTable__TypeDesc_SetTypePars)((OOC_SymbolTable__Type)i3, (OOC_SymbolTable__TypePars)i2);
  i2=i3;
  goto l12;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13481))+16);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  base = (OOC_SymbolTable__Type)i1;
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l12:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13839));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13893));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 13902));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13868))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 13839));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13938))+16);
  i6 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i6);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13965));
  i7 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i7);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13995));
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 14004))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13844)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Item)i5, (OOC_SymbolTable__Name)i4, i6, i7, (OOC_Doc__Document)i8, (OOC_SymbolTable__Type)i2, 0u);
  type = (OOC_SymbolTable__TypeDecl)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14046))+4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l15;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14094))+4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14323))+8);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14357));
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 14368));
  i4 = 0<i3;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14398));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14452));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 14463))+4);
  i6 = _check_pointer(i6, 14466);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 14466))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14418))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14478)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 14478)), 14487));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14398));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14523))+8);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14559));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 14570))+4);
  i10 = _check_pointer(i10, 14573);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 14573))*4);
  i10 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i10);
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14595));
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 14606))+4);
  i11 = _check_pointer(i11, 14609);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i4, i12, OOC_UINT32, 14609))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 14621)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 14621)), 14630))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 14403)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i6, i9, i10, (OOC_Doc__Document)i11, 0u, 0u, 0u, (OOC_SymbolTable__Type)i1);
  var = (OOC_SymbolTable__VarDecl)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14701));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 14712))+4);
  i6 = _check_pointer(i6, 14715);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+1), i7, OOC_UINT32, 14715))*4);
  flags = (OOC_AST__Node)i6;
  i7 = i6!=0;
  if (!i7) goto l6;
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i5, (OOC_AST_ExtTree__Flags)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 14786)))), &_td_OOC_AST_ExtTree__FlagsDesc, 14786)));
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15058))+16);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15079));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15099))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15133))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15079));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i5);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15162))+16);
  i7 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i7);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15206))+8);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15252))+4);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 15213))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15084)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i5, i7, 0, (OOC_Doc__Document)i8, 1u, 1u, (i9!=0), (OOC_SymbolTable__Type)i1);
  var = (OOC_SymbolTable__VarDecl)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15289))+20);
  i3 = i3!=0;
  if (!i3) goto l11;
  *(OOC_UINT8*)((_check_pointer(i1, 15323))+58) = 1u;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15369))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15379))+4);
  nodes = (OOC_AST__NodeArray)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15411))+24);
  i = 0;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15421));
  i3 = 0<i0;
  if (!i3) goto l11;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15454));
  i5 = _check_pointer(i1, 15507);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15485))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 15507))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15454));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i5);
  i8 = _check_pointer(i1, 15528);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i3, i9, OOC_UINT32, 15528))*4);
  i8 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i8);
  i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15458)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i5, i8, 0, (OOC_Doc__Document)0, (OOC_SymbolTable__Type)0, 0u);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15825))+12);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15861))+4);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 15872));
  i4 = 0<i3;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15902));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15958))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 15969))+4);
  i6 = _check_pointer(i6, 15972);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15922))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 15972))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15902));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16006))+12);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16053))+4);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 16064))+4);
  i10 = _check_pointer(i10, 16067);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 16067))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16131));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 16079)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 16079)), 16088))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 15907)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Name)i6, i9, 0, (OOC_Doc__Document)i10, 1u, 0u, (i11!=0), (OOC_SymbolTable__Type)i1);
  var = (OOC_SymbolTable__VarDecl)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16175))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 16186))+4);
  i6 = _check_pointer(i6, 16189);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+1), i7, OOC_UINT32, 16189))*4);
  flags = (OOC_AST__Node)i6;
  i7 = i6!=0;
  if (!i7) goto l6;
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i5, (OOC_AST_ExtTree__Flags)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 16260)))), &_td_OOC_AST_ExtTree__FlagsDesc, 16260)));
l6:
  i4 = i4+3;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l3_loop;
l11:
  return;
  ;
}

static void OOC_AST_ExtTree_CreateSymTab__ParseFormalParsFlags(OOC_SymbolTable__FormalPars fpars, OOC_AST_ExtTree__NodeList flags) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  OOC_AST_ExtTree__Node n;

  i0 = (OOC_INT32)flags;
  i = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 16478));
  i2 = 0<i1;
  if (!i2) goto l16;
  i2 = (OOC_INT32)fpars;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16512))+4);
  i4 = _check_pointer(i4, 16515);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 16515))*4);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16527)))), &_td_OOC_AST_ExtTree__NodeDesc, 16527);
  n = (OOC_AST_ExtTree__Node)i4;
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16548)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i5) goto l6;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 16542)))), 16542);
  goto l11;
l6:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 16586));
  i5 = *(OOC_INT8*)((_check_pointer(i5, 16590))+4);
  switch (i5) {
  case 43:
  case 44:
    i4 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i4, 1u);
    i4 = OOC_SymbolTable__StringToCallConv((Object__String)i4);
    *(OOC_INT8*)((_check_pointer(i2, 16668))+58) = i4;
    goto l11;
  default:
    i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16757)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i4);
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
  auto void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl_ParseProcDeclFlags(OOC_SymbolTable__ProcDecl proc, OOC_AST_ExtTree__NodeList flags);
    
    void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl_ParseProcDeclFlags(OOC_SymbolTable__ProcDecl proc, OOC_AST_ExtTree__NodeList flags) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;
      OOC_AST_ExtTree__Node n;

      i0 = (OOC_INT32)flags;
      i = 0;
      i1 = *(OOC_INT32*)(_check_pointer(i0, 17284));
      i2 = 0<i1;
      if (!i2) goto l16;
      i2 = (OOC_INT32)proc;
      i3=0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17318))+4);
      i4 = _check_pointer(i4, 17321);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 17321))*4);
      i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17333)))), &_td_OOC_AST_ExtTree__NodeDesc, 17333);
      n = (OOC_AST_ExtTree__Node)i4;
      i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17354)))), &_td_OOC_AST_ExtTree__TerminalDesc);
      if (i5) goto l6;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17348)))), 17348);
      goto l11;
l6:
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 17392));
      i5 = *(OOC_INT8*)((_check_pointer(i5, 17396))+4);
      switch (i5) {
      case 43:
      case 44:
        i4 = (OOC_INT32)OOC_AST_ExtTree__TerminalDesc_GetString((OOC_AST_ExtTree__Terminal)i4, 1u);
        OOC_SymbolTable__ProcDeclDesc_SetLinkName((OOC_SymbolTable__ProcDecl)i2, (Object__String)i4);
        goto l11;
      default:
        i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 17541)))), OOC_SymbolTable__ItemDesc_AddFlag)),OOC_SymbolTable__ItemDesc_AddFlag)((OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i4);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17675))+20);
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  endPos = i1;
  i2 = i1<0;
  if (!i2) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17750))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17760));
  i1 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i1);
  endPos = i1;
  
l4:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17795))+8);
  i2 = i2==0;
  if (i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17894))+16);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 17903));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 17909));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17913))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17894))+16);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 17903));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 17909));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 17913))+8);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 17917)), 0);
  i2 = OOC_SymbolTable_Predef__IsStaticMethod((void*)(_check_pointer(i2, 17917)), i3);
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
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 18031));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18086))+16);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 18052))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 18096));
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 18031));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i5);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18140))+16);
  i8 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)i8);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18167))+16);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18215))+4);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i9, 18177))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18036)))), OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i6, (OOC_SymbolTable__Name)i5, i1, i8, (OOC_Doc__Document)i9, i2, (i10!=0), (OOC_AST__Node)i0);
  proc = (OOC_SymbolTable__ProcDecl)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 18265));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18355));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 18265));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18270)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i4);
  formalPars = (OOC_SymbolTable__FormalPars)i2;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18381))+20);
  i4 = i4!=0;
  if (i4) goto l15;
  i4=0u;
  goto l17;
l15:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18419))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18440)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 18440)), 18451))+20);
  i4 = i4!=0;
  
l17:
  if (!i4) goto l19;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18539))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18559)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 18559)), 18570))+20);
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetTypeParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i4, (OOC_SymbolTable__Item)i2);
  OOC_SymbolTable__FormalParsDesc_SetResultType((OOC_SymbolTable__FormalPars)i2, (OOC_SymbolTable__Type)i4);
l19:
  *(OOC_INT32*)((_check_pointer(i1, 18635))+64) = i2;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18680))+8);
  i4 = i4!=0;
  if (!i4) goto l22;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18734))+8);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i4, (OOC_SymbolTable__Item)i2);
l22:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18783))+20);
  i4 = i4!=0;
  if (!i4) goto l55;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18830))+20);
  i4 = _type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 18851)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 18851);
  fpar = (OOC_AST_ExtTree__FormalPars)i4;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 18877));
  i5 = i5!=0;
  if (!i5) goto l27;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 18940));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 18946))+8);
  OOC_AST_ExtTree_CreateSymTab__ParseFormalParsFlags((OOC_SymbolTable__FormalPars)i2, (OOC_AST_ExtTree__NodeList)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 18964)))), &_td_OOC_AST_ExtTree__NodeListDesc, 18964)));
l27:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 19001))+8);
  i5 = i5!=0;
  if (!i5) goto l42;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 19052))+8);
  i = 0;
  i5 = *(OOC_INT32*)(_check_pointer(i5, 19064));
  i6 = 0<i5;
  if (!i6) goto l42;
  i6=0;
l32_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 19105))+8);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 19117))+4);
  i7 = _check_pointer(i7, 19120);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 19120))*4);
  nodePtr = (OOC_AST__Node)i7;
  i8 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 19147)))), &_td_OOC_AST_ExtTree__TerminalDesc);
  if (i8) goto l35;
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i7, (OOC_SymbolTable__Item)i2);
  goto l36;
l35:
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i7, 19217));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 19222))+8);
  _assert(((
  _cmp8((const void*)(_check_pointer(i7, 19227)),(const void*)"..."))==0), 127, 19202);
  OOC_SymbolTable__FormalParsDesc_EnableRestParameters((OOC_SymbolTable__FormalPars)i2);
l36:
  i6 = i6+2;
  i = i6;
  i7 = i6<i5;
  if (i7) goto l32_loop;
l42:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 19403))+28);
  i5 = i5!=0;
  if (i5) goto l45;
  *(OOC_INT32*)((_check_pointer(i2, 19769))+60) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], 0));
  goto l55;
l45:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 19463))+28);
  i5 = *(OOC_INT32*)(_check_pointer(i5, 19474));
  *(OOC_INT32*)((_check_pointer(i2, 19449))+60) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], ((i5+1)>>1)));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 19516))+28);
  i = 0;
  i5 = *(OOC_INT32*)(_check_pointer(i5, 19528));
  i6 = 0<i5;
  if (!i6) goto l55;
  i6=0;
l48_loop:
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 19569))+28);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 19581))+4);
  i7 = _check_pointer(i7, 19584);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 19584))*4);
  nodePtr = (OOC_AST__Node)i7;
  i7 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i3, (OOC_AST__Node)i7);
  type = (OOC_SymbolTable__Type)i7;
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 19648))+60);
  i8 = _check_pointer(i8, 19655);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 19683));
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 19683));
  i7 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 19687)))), OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)),OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)((OOC_SymbolTable_Builder__Builder)i11, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Type)i7);
  *(OOC_INT32*)(i8+(_check_index((i6>>1), i9, OOC_UINT32, 19655))*4) = i7;
  i6 = i6+2;
  i = i6;
  i7 = i6<i5;
  if (i7) goto l48_loop;
l55:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19818))+12);
  i2 = i2!=0;
  if (!i2) goto l58;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19878))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19885))+8);
  OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcDecl_ParseProcDeclFlags((OOC_SymbolTable__ProcDecl)i1, (OOC_AST_ExtTree__NodeList)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19904)))), &_td_OOC_AST_ExtTree__NodeListDesc, 19904)));
l58:
  i0 = (OOC_INT32)procDecl;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19946))+28);
  i1 = i1!=0;
  if (!i1) goto l61;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19996))+28);
  i1 = (OOC_INT32)proc;
  i2 = (OOC_INT32)v;
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i0, (OOC_SymbolTable__Item)i1);
l61:
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20241))+8);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  type = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20277));
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 20288));
  i4 = 0<i3;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 20320));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20378));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 20389))+4);
  i6 = _check_pointer(i6, 20392);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 20392))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20342))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 20404)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 20404)), 20413));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 20320));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20451))+8);
  i9 = OOC_AST_ExtTree_CreateSymTab__EndOfType((OOC_AST__Node)i9);
  i10 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20489));
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 20500))+4);
  i10 = _check_pointer(i10, 20503);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i4, i11, OOC_UINT32, 20503))*4);
  i10 = OOC_AST_ExtTree_CreateSymTab__ExportMark((OOC_AST__Node)(_type_guard(i10, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i10, 20515)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 20515)));
  i11 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20545));
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i11, 20556))+4);
  i11 = _check_pointer(i11, 20559);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i11 = (OOC_INT32)*(OOC_INT32*)(i11+(_check_index(i4, i12, OOC_UINT32, 20559))*4);
  i11 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i11, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i11, 20571)))), &_td_OOC_AST_ExtTree__IdentDefDesc, 20571)), 20580))+8);
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 20325)))), OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl)((OOC_SymbolTable_Builder__Builder)i8, (OOC_SymbolTable__Item)i7, (OOC_SymbolTable__Name)i6, i9, i10, (OOC_Doc__Document)i11, (OOC_SymbolTable__Type)i1);
  field = (OOC_SymbolTable__FieldDecl)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20632));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 20643))+4);
  i6 = _check_pointer(i6, 20646);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index((i4+1), i7, OOC_UINT32, 20646))*4);
  flags = (OOC_AST__Node)i6;
  i7 = i6!=0;
  if (!i7) goto l6;
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i5, (OOC_AST_ExtTree__Flags)(_type_guard(i6, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 20719)))), &_td_OOC_AST_ExtTree__FlagsDesc, 20719)));
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
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20863));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20884))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20863));
  i4 = (OOC_INT32)terminal;
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20868)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Name)0, (OOC_SymbolTable__Name)i4);
  *(OOC_INT32*)((_check_pointer(i0, 20852))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitOperator(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__Operator _operator) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21094));
  i2 = (OOC_INT32)_operator;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21115))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 21146));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21094));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 21199));
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i6);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21225))+8);
  i2 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetName((OOC_AST__Node)i2);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21099)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeName)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Name)i6, (OOC_SymbolTable__Name)i2);
  *(OOC_INT32*)((_check_pointer(i0, 21083))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitRecordType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__RecordType recordType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SymbolTable__Type baseType;
  OOC_SymbolTable__Record record;
  OOC_INT32 i;

  i0 = (OOC_INT32)recordType;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21427))+12);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  baseType = (OOC_SymbolTable__Type)(OOC_INT32)0;
  i1=(OOC_INT32)0;
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21490))+12);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  
l4:
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 21558));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21577))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21610));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 21558));
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i5);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 21563)))), OOC_SymbolTable_Builder__BuilderDesc_NewRecord)),OOC_SymbolTable_Builder__BuilderDesc_NewRecord)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Position)i5, (OOC_SymbolTable__Type)i1);
  record = (OOC_SymbolTable__Record)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21696))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i1, (OOC_AST_ExtTree__Flags)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21733))+20);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 21745));
  i4 = 0<i3;
  if (!i4) goto l15;
  i4=0;
l7_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21781))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 21793))+4);
  i5 = _check_pointer(i5, 21796);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 21796))*4);
  i5 = i5!=(OOC_INT32)0;
  if (!i5) goto l10;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21847))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 21859))+4);
  i5 = _check_pointer(i5, 21862);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 21862))*4);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i5, (OOC_SymbolTable__Item)i1);
l10:
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l7_loop;
l15:
  *(OOC_INT32*)((_check_pointer(i2, 21899))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitPointerType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__PointerType pointerType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22041));
  i2 = (OOC_INT32)pointerType;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22061))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 22130));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22041));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22200))+12);
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i6);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22046)))), OOC_SymbolTable_Builder__BuilderDesc_NewPointer)),OOC_SymbolTable_Builder__BuilderDesc_NewPointer)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Type)i6);
  *(OOC_INT32*)((_check_pointer(i0, 22030))+8) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22242))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22224))+8);
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
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22463))+8);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 22473));
  i1 = i1>0;
  if (i1) goto l3;
  i1 = (OOC_INT32)v;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 23031));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23049))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23081));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 23031));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23156))+16);
  i6 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i1, (OOC_AST__Node)i6);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23036)))), OOC_SymbolTable_Builder__BuilderDesc_NewArray)),OOC_SymbolTable_Builder__BuilderDesc_NewArray)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4, 1u, (OOC_AST__Node)0, (OOC_SymbolTable__Type)i6);
  array = (OOC_SymbolTable__Array)i2;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23197))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i2, (OOC_AST_ExtTree__Flags)i0);
  i0=i1;i1=i2;
  goto l17;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22528))+16);
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22561))+8);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 22571));
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
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22718))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 22728))+4);
  i4 = _check_pointer(i4, 22731);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index((i1-1), i5, OOC_UINT32, 22731))*4);
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  pos = (OOC_SymbolTable__Position)i4;
  
  goto l11;
l10:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22656));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  pos = (OOC_SymbolTable__Position)i4;
  
l11:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 22773));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22873))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 22883))+4);
  i6 = _check_pointer(i6, 22886);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22803))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i1, i7, OOC_UINT32, 22886))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 22773));
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 22778)))), OOC_SymbolTable_Builder__BuilderDesc_NewArray)),OOC_SymbolTable_Builder__BuilderDesc_NewArray)((OOC_SymbolTable_Builder__Builder)i7, (OOC_SymbolTable__Item)i8, (OOC_SymbolTable__Position)i4, 0u, (OOC_AST__Node)i6, (OOC_SymbolTable__Type)i3);
  baseType = (OOC_SymbolTable__Type)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22951))+4);
  OOC_AST_ExtTree_CreateSymTab__AddFlags((OOC_SymbolTable__Item)i3, (OOC_AST_ExtTree__Flags)i4);
  i1 = i1+(-2);
  i = i1;
  i4 = i1>=0;
  if (i4) goto l7_loop;
l15:
  i0=i3;
l16:
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22999)))), &_td_OOC_SymbolTable__ArrayDesc, 22999);
  array = (OOC_SymbolTable__Array)i0;
  i1=i0;i0=i2;
l17:
  *(OOC_INT32*)((_check_pointer(i0, 23220))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitProcType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__ProcType procType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_SymbolTable__FormalPars formalPars;
  OOC_AST_ExtTree__FormalPars fpars;
  OOC_AST_ExtTree__FormalPars fpar;
  OOC_INT32 i;
  OOC_AST__Node nodePtr;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23513));
  i2 = (OOC_INT32)procType;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23536))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 23606));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23513));
  i4 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23518)))), OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)),OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars)((OOC_SymbolTable_Builder__Builder)i5, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Position)i4);
  formalPars = (OOC_SymbolTable__FormalPars)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23637))+4);
  i3 = i3!=0;
  if (i3) goto l3;
  i3=0u;
  goto l5;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23675))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 23696)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 23696)), 23707))+20);
  i3 = i3!=0;
  
l5:
  if (!i3) goto l7;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23795))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 23815)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 23815)), 23826))+20);
  i3 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetTypeParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i3, (OOC_SymbolTable__Item)i1);
  OOC_SymbolTable__FormalParsDesc_SetResultType((OOC_SymbolTable__FormalPars)i1, (OOC_SymbolTable__Type)i3);
l7:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23899))+4);
  i3 = i3!=0;
  if (!i3) goto l13;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 23946))+4);
  i3 = _type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 23966)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 23966);
  fpars = (OOC_AST_ExtTree__FormalPars)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 23993));
  i4 = i4!=0;
  if (!i4) goto l13;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 24067));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 24073))+8);
  OOC_AST_ExtTree_CreateSymTab__ParseFormalParsFlags((OOC_SymbolTable__FormalPars)i1, (OOC_AST_ExtTree__NodeList)(_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 24091)))), &_td_OOC_AST_ExtTree__NodeListDesc, 24091)));
l13:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24137))+4);
  i3 = i3!=0;
  if (!i3) goto l39;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24184))+4);
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24205)))), &_td_OOC_AST_ExtTree__FormalParsDesc, 24205);
  fpar = (OOC_AST_ExtTree__FormalPars)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24232))+8);
  i3 = i3!=0;
  if (!i3) goto l26;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24283))+8);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 24295));
  i4 = 0<i3;
  if (!i4) goto l26;
  i4=0;
l20_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24342))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 24354))+4);
  i5 = _check_pointer(i5, 24357);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 24357))*4);
  OOC_AST_ExtTree_CreateSymTab__AcceptParent((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i5, (OOC_SymbolTable__Item)i1);
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l20_loop;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24419))+28);
  i3 = i3!=0;
  if (i3) goto l29;
  *(OOC_INT32*)((_check_pointer(i1, 24785))+60) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], 0));
  goto l39;
l29:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24479))+28);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 24490));
  *(OOC_INT32*)((_check_pointer(i1, 24465))+60) = ((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], ((i3+1)>>1)));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24532))+28);
  i = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i3, 24544));
  i4 = 0<i3;
  if (!i4) goto l39;
  i4=0;
l32_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24585))+28);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 24597))+4);
  i5 = _check_pointer(i5, 24600);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 24600))*4);
  nodePtr = (OOC_AST__Node)i5;
  i5 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i5);
  type = (OOC_SymbolTable__Type)i5;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 24664))+60);
  i6 = _check_pointer(i6, 24671);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24699));
  i9 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 24699));
  i5 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 24703)))), OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)),OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName)((OOC_SymbolTable_Builder__Builder)i9, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Type)i5);
  *(OOC_INT32*)(i6+(_check_index((i4>>1), i7, OOC_UINT32, 24671))*4) = i5;
  i4 = i4+2;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l32_loop;
l39:
  *(OOC_INT32*)((_check_pointer(i0, 24823))+8) = i1;
  return;
  ;
}

void OOC_AST_ExtTree_CreateSymTab__VisitorDesc_VisitQualType(OOC_AST_ExtTree_CreateSymTab__Visitor v, OOC_AST_ExtTree__QualType qualType) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11;
  OOC_SymbolTable__Type baseType;
  OOC_SymbolTable__TypeRefArray arguments;
  OOC_INT32 i;

  i0 = (OOC_INT32)qualType;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25056));
  i2 = (OOC_INT32)v;
  i1 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i1);
  baseType = (OOC_SymbolTable__Type)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25097))+8);
  i3 = *(OOC_INT32*)(_check_pointer(i3, 25107));
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], ((i3+1)>>1));
  arguments = (OOC_SymbolTable__TypeRefArray)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25149))+8);
  i = 0;
  i4 = *(OOC_INT32*)(_check_pointer(i4, 25159));
  i5 = 0<i4;
  if (!i5) goto l8;
  i5 = (OOC_INT32)&_td_OOC_SymbolTable__TypeRef;
  i6=0;
l3_loop:
  i7 = _check_pointer(i3, 25205);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i9 = i6>>1;
  i10 = OOC_ARRAY_LENGTH((_check_pointer(i3, 25205)), 0);
  i10 = _check_index(i9, i10, OOC_UINT32, 25205);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25257))+8);
  i10 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i10, 25267))+4);
  i10 = _check_pointer(i10, 25269);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = (OOC_INT32)*(OOC_INT32*)(i10+(_check_index(i6, i11, OOC_UINT32, 25269))*4);
  i10 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetType((OOC_AST_ExtTree_CreateSymTab__Visitor)i2, (OOC_AST__Node)i10);
  OOC_SymbolTable__InitTypeRef((void*)(i7+(_check_index(i9, i8, OOC_UINT32, 25205))*8), (RT0__Struct)i5, (OOC_SymbolTable__Type)i10);
  i6 = i6+2;
  i = i6;
  i7 = i6<i4;
  if (i7) goto l3_loop;
l8:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 25300));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 25318))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25379));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 25300));
  i0 = (OOC_INT32)OOC_AST_ExtTree_CreateSymTab__GetPosition((OOC_AST__Node)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 25304)))), OOC_SymbolTable_Builder__BuilderDesc_NewQualType)),OOC_SymbolTable_Builder__BuilderDesc_NewQualType)((OOC_SymbolTable_Builder__Builder)i6, (OOC_SymbolTable__Item)i5, (OOC_SymbolTable__Position)i0, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__TypeRefArray)i3);
  *(OOC_INT32*)((_check_pointer(i2, 25290))+8) = i0;
  return;
  ;
}

OOC_SymbolTable__Module OOC_AST_ExtTree_CreateSymTab__CreateSymTab(OOC_AST__Node module, OOC_SymbolTable_Builder__Builder stb, Object__String libraryName, URI__HierarchicalURI baseURI, URI__HierarchicalURI rootURI) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_AST_ExtTree_CreateSymTab__Visitor v;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_AST_ExtTree_CreateSymTab__Visitor.baseTypes[0]);
  v = (OOC_AST_ExtTree_CreateSymTab__Visitor)i0;
  i1 = (OOC_INT32)stb;
  *(OOC_INT32*)(_check_pointer(i0, 26044)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 26063))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 26085))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 26105))+12) = 0;
  i2 = (OOC_INT32)baseURI;
  *(OOC_INT32*)((_check_pointer(i0, 26125))+16) = i2;
  i2 = (OOC_INT32)rootURI;
  *(OOC_INT32*)((_check_pointer(i0, 26152))+20) = i2;
  i2 = (OOC_INT32)module;
  OOC_AST_ExtTree_CreateSymTab__Accept((OOC_AST_ExtTree_CreateSymTab__Visitor)i0, (OOC_AST__Node)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26203))+12);
  i3 = (OOC_INT32)libraryName;
  OOC_SymbolTable__ModuleDesc_SetLibraryName((OOC_SymbolTable__Module)i2, (Object__String)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26258))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26245)))), OOC_SymbolTable_Builder__BuilderDesc_Finalize)),OOC_SymbolTable_Builder__BuilderDesc_Finalize)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26279))+12);
  return (OOC_SymbolTable__Module)i0;
  ;
}

void OOC_OOC_AST_ExtTree_CreateSymTab_init(void) {

  return;
  ;
}

/* --- */
