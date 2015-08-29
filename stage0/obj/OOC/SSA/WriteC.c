#include <OOC/SSA/WriteC.d>
#include <__oo2c.h>
#include <setjmp.h>

static OOC_SSA_WriteC__Visitor OOC_SSA_WriteC__NewVisitor(void) {
  register OOC_INT32 i0,i1;
  OOC_SSA_WriteC__Visitor v;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_WriteC__Visitor.baseTypes[0]);
  v = (OOC_SSA_WriteC__Visitor)i0;
  OOC_IR_VisitAll__InitVisitor((OOC_IR_VisitAll__Visitor)i0);
  *(OOC_INT32*)(_check_pointer(i0, 3114)) = 0;
  i1 = (OOC_INT32)ADT_Dictionary__New();
  *(OOC_INT32*)((_check_pointer(i0, 3146))+4) = i1;
  return (OOC_SSA_WriteC__Visitor)i0;
  ;
}

void OOC_SSA_WriteC__VisitorDesc_VisitProcedure(OOC_SSA_WriteC__Visitor v, OOC_IR__Procedure procedure) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)procedure;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3326))+4);
  *(OOC_INT32*)(_check_pointer(i0, 3295)) = i2;
  OOC_IR_VisitAll__VisitorDesc_VisitProcedure((OOC_IR_VisitAll__Visitor)i0, (OOC_IR__Procedure)i1);
  *(OOC_INT32*)(_check_pointer(i0, 3375)) = 0;
  return;
  ;
}

void OOC_SSA_WriteC__VisitorDesc_VisitVar(OOC_SSA_WriteC__Visitor v, OOC_IR__Var var) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__ProcDecl proc;

  i0 = (OOC_INT32)var;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3526))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3526))+8);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3532)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i2);
  proc = (OOC_SymbolTable__ProcDecl)i1;
  i2 = (OOC_INT32)v;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3563));
  i3 = i1!=i3;
  if (!i3) goto l4;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3595))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3621))+8);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i0, (Object__Object)i1);
l4:
  return;
  ;
}

static OOC_INT8 OOC_SSA_WriteC__SubclassToBasicType(OOC_SSA__Result res) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)res;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 3790))+5);
  i0 = OOC_SSA_Allocator__SubclassToBasicType(i0);
  return i0;
  ;
}

static OOC_SSA_WriteC__Writer OOC_SSA_WriteC__NewWriter(OOC_SSA_WriteC__Translator translator, OOC_C_DeclWriter__Writer cWriter, OOC_SSA__ProcBlock procBlock, ADT_Dictionary__Dictionary registerMap, ADT_Dictionary__Dictionary jmpbufMap) {
  register OOC_INT32 i0,i1;
  OOC_SSA_WriteC__Writer w;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_WriteC__Writer.baseTypes[0]);
  w = (OOC_SSA_WriteC__Writer)i0;
  i1 = (OOC_INT32)cWriter;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4102)))), OOC_C_DeclWriter__WriterDesc_CopyTo)),OOC_C_DeclWriter__WriterDesc_CopyTo)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Writer)i0);
  i1 = (OOC_INT32)procBlock;
  *(OOC_INT32*)((_check_pointer(i0, 4121))+104) = i1;
  i1 = (OOC_INT32)registerMap;
  *(OOC_INT32*)((_check_pointer(i0, 4152))+96) = i1;
  i1 = (OOC_INT32)jmpbufMap;
  *(OOC_INT32*)((_check_pointer(i0, 4187))+100) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 4223))+108) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_WriteC__SwapArray.baseTypes[0], 8));
  *(OOC_INT32*)((_check_pointer(i0, 4245))+112) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4274))+116) = 0;
  i1 = (OOC_INT32)translator;
  *(OOC_INT32*)((_check_pointer(i0, 4302))+92) = i1;
  return (OOC_SSA_WriteC__Writer)i0;
  ;
}

void OOC_SSA_WriteC__WriterDesc_ClearSwapData(OOC_SSA_WriteC__Writer w) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)w;
  *(OOC_INT32*)((_check_pointer(i0, 4411))+112) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 4440))+116) = 0;
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_AddSwapData(OOC_SSA_WriteC__Writer w, Object__String source, Object__String dest, OOC_INT8 ctype) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_SSA_WriteC__SwapArray _new;
  OOC_INT32 i;

  i0 = (OOC_INT32)source;
  i1 = (OOC_INT32)dest;
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4673)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)i1);
  i2 = !i2;
  if (!i2) goto l14;
  i2 = (OOC_INT32)w;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4765))+108);
  i4 = *(OOC_INT32*)((_check_pointer(i2, 4739))+112);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4776)), 0);
  i3 = i4==i3;
  if (!i3) goto l13;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4809))+108);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4820)), 0);
  i3 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_WriteC__SwapArray.baseTypes[0], (i3*2));
  _new = (OOC_SSA_WriteC__SwapArray)i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4855))+108);
  i = 0;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4866)), 0);
  i5 = 0<i4;
  if (!i5) goto l12;
  i5=0;
l7_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4895))+108);
  i6 = _check_pointer(i6, 4906);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i3, 4887);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  _copy_block((i6+((_check_index(i5, i7, OOC_UINT32, 4906))*16)),(i8+((_check_index(i5, i9, OOC_UINT32, 4887))*16)),16);
  i5 = i5+1;
  i = i5;
  i6 = i5<i4;
  if (i6) goto l7_loop;
l12:
  *(OOC_INT32*)((_check_pointer(i2, 4932))+108) = i3;
l13:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4969))+108);
  i3 = _check_pointer(i3, 4980);
  i4 = *(OOC_INT32*)((_check_pointer(i2, 4982))+112);
  i5 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i4, i5, OOC_UINT32, 4980))*16)) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5027))+108);
  i0 = _check_pointer(i0, 5038);
  i3 = *(OOC_INT32*)((_check_pointer(i2, 5040))+112);
  i4 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)((i0+((_check_index(i3, i4, OOC_UINT32, 5038))*16))+4) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5081))+108);
  i0 = _check_pointer(i0, 5092);
  i1 = *(OOC_INT32*)((_check_pointer(i2, 5094))+112);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i4 = ctype;
  *(OOC_INT8*)((i0+((_check_index(i1, i3, OOC_UINT32, 5092))*16))+12) = i4;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 5137))+108);
  i0 = _check_pointer(i0, 5148);
  i1 = *(OOC_INT32*)((_check_pointer(i2, 5150))+112);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)((i0+((_check_index(i1, i3, OOC_UINT32, 5148))*16))+8) = 0;
  i0 = *(OOC_INT32*)((_check_pointer(i2, 5198))+112);
  *(OOC_INT32*)((_check_pointer(i2, 5198))+112) = (i0+1);
l14:
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_CountReadsSwapData(OOC_SSA_WriteC__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
  OOC_INT32 i;
  OOC_INT32 c;
  OOC_INT32 j;

  i0 = (OOC_INT32)w;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5343))+112);
  i2 = 0<i1;
  if (!i2) goto l21;
  i2=0;
l3_loop:
  c = 0;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 5401))+112);
  j = 0;
  i4 = 0<i3;
  if (i4) goto l6;
  i3=0;
  goto l16;
l6:
  i4=0;i5=0;
l7_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5436))+108);
  i6 = _check_pointer(i6, 5447);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+((_check_index(i4, i7, OOC_UINT32, 5447))*16));
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5436))+108);
  i7 = _check_pointer(i7, 5447);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5468))+108);
  i9 = _check_pointer(i9, 5479);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)((i9+((_check_index(i2, i10, OOC_UINT32, 5479))*16))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+((_check_index(i4, i8, OOC_UINT32, 5447))*16));
  i6 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 5458)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i7, (Object__Object)i9);
  if (!i6) goto l11;
  i5 = i5+1;
  c = i5;
  
l11:
  i4 = i4+1;
  j = i4;
  i6 = i4<i3;
  if (i6) goto l7_loop;
l15:
  i3=i5;
l16:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5544))+108);
  i4 = _check_pointer(i4, 5555);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)((i4+((_check_index(i2, i5, OOC_UINT32, 5555))*16))+8) = i3;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l21:
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_RemoveSwapData(OOC_SSA_WriteC__Writer w, OOC_INT32 i) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 j;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5705))+108);
  i1 = _check_pointer(i1, 5716);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = i;
  i1 = *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 5716))*16))+8);
  _assert((i1==0), 127, 5696);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5756))+112);
  j = 0;
  i2 = 0<i1;
  if (!i2) goto l11;
  i2=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5789))+108);
  i4 = _check_pointer(i4, 5800);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i2, i5, OOC_UINT32, 5800))*16))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5789))+108);
  i5 = _check_pointer(i5, 5800);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5819))+108);
  i7 = _check_pointer(i7, 5830);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((i5+((_check_index(i2, i6, OOC_UINT32, 5800))*16))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i7+((_check_index(i3, i8, OOC_UINT32, 5830))*16));
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5809)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i5, (Object__Object)i6);
  if (!i4) goto l6;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5862))+108);
  i4 = _check_pointer(i4, 5873);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5862))+108);
  i6 = _check_pointer(i6, 5873);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)((i6+((_check_index(i2, i7, OOC_UINT32, 5873))*16))+8);
  *(OOC_INT32*)((i4+((_check_index(i2, i5, OOC_UINT32, 5873))*16))+8) = (i6-1);
l6:
  i2 = i2+1;
  j = i2;
  i4 = i2<i1;
  if (i4) goto l3_loop;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5933))+108);
  i1 = _check_pointer(i1, 5944);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5946))+112);
  i4 = OOC_ARRAY_LENGTH(i1, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5914))+108);
  i5 = _check_pointer(i5, 5925);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  _copy_block((i1+((_check_index((i2-1), i4, OOC_UINT32, 5944))*16)),(i5+((_check_index(i3, i6, OOC_UINT32, 5925))*16)),16);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5978))+112);
  *(OOC_INT32*)((_check_pointer(i0, 5978))+112) = (i1-1);
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_IntroduceHelperVar(OOC_SSA_WriteC__Writer w, OOC_INT32 i) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_CHAR8 str[16];
  Object__String h;
  OOC_INT32 j;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6161))+108);
  i1 = _check_pointer(i1, 6172);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = i;
  i1 = *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 6172))*16))+8);
  _assert((i1!=0), 127, 6152);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6215))+116);
  IntStr__IntToStr(i1, (void*)(OOC_INT32)str, 16);
  Strings__Insert("h", 2, 0, (void*)(OOC_INT32)str, 16);
  i1 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)str, 16);
  h = (Object__String)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6315))+116);
  *(OOC_INT32*)((_check_pointer(i0, 6315))+116) = (i2+1);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6358))+112);
  j = 0;
  i4 = 0<i2;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6391))+108);
  i5 = _check_pointer(i5, 6402);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+((_check_index(i4, i6, OOC_UINT32, 6402))*16));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6391))+108);
  i6 = _check_pointer(i6, 6402);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6423))+108);
  i8 = _check_pointer(i8, 6434);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((i8+((_check_index(i3, i9, OOC_UINT32, 6434))*16))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+((_check_index(i4, i7, OOC_UINT32, 6402))*16));
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 6413)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i6, (Object__Object)i8);
  if (!i5) goto l6;
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6459))+108);
  i5 = _check_pointer(i5, 6470);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_INT32*)(i5+((_check_index(i4, i6, OOC_UINT32, 6470))*16)) = i1;
l6:
  i4 = i4+1;
  j = i4;
  i5 = i4<i2;
  if (i5) goto l3_loop;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6513))+108);
  i2 = _check_pointer(i2, 6524);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)((i2+((_check_index(i3, i4, OOC_UINT32, 6524))*16))+8) = 0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6551)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "{register ", 11);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6639))+108);
  i2 = _check_pointer(i2, 6650);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_INT8*)((i2+((_check_index(i3, i4, OOC_UINT32, 6650))*16))+12);
  i2 = OOC_SSA_Allocator__RegisterType(i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 6602))+24)+(_check_index(i2, 17, OOC_UINT8, 6613))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6586)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i2, 6662))+1), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6676)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, " ", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6702)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6726)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 61u);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6766))+108);
  i1 = _check_pointer(i1, 6777);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 6777))*16))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6750)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6794)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 59u);
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_FixupHelperVars(OOC_SSA_WriteC__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6899))+116);
  i1 = i1!=0;
  if (!i1) goto l8;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6931)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 125u);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6962))+116);
  *(OOC_INT32*)((_check_pointer(i0, 6962))+116) = (i1-1);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6899))+116);
  i1 = i1!=0;
  if (i1) goto l3_loop;
l8:
  return;
  ;
}

static void OOC_SSA_WriteC__Fixup(OOC_SSA__ProcBlock pb, ADT_Dictionary__Dictionary *jmpbufMap) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SSA__Instr instr;
  OOC_SSA__Instr next;
  OOC_CHAR8 num[16];
  OOC_INT8 regDest;
  OOC_INT8 regSource;

  *jmpbufMap = (ADT_Dictionary__Dictionary)(OOC_INT32)0;
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7242))+12);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l24;
  i2=(OOC_INT32)0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7301))+28);
  next = (OOC_SSA__Instr)i3;
  i4 = *(OOC_INT8*)((_check_pointer(i1, 7329))+36);
  switch (i4) {
  case 55:
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7379))+24);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 7389));
    i4 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7395)))), &_td_OOC_SSA__AddressDesc);
    if (!i4) goto l8;
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7773))+24);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 7783));
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7714))+24);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7793)))), &_td_OOC_SSA__AddressDesc, 7793)), 7801))+44);
    i4 = (OOC_INT32)OOC_SSA__ProcBlockDesc_GetDeclRef((OOC_SSA__ProcBlock)i0, (OOC_SymbolTable__Declaration)i4);
    OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i1, (OOC_SSA__Result)i4);
l8:
    i1=i2;
    goto l19;
  case 72:
    i4 = i2==(OOC_INT32)0;
    if (!i4) goto l13;
    i2 = (OOC_INT32)ADT_Dictionary__New();
    *jmpbufMap = (ADT_Dictionary__Dictionary)i2;
    
l13:
    i4 = ADT_Dictionary__DictionaryDesc_Size((ADT_Dictionary__Dictionary)i2);
    IntStr__IntToStr(i4, (void*)(OOC_INT32)num, 16);
    i4 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)num, 16);
    ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)i4);
    i1=i2;
    goto l19;
  case 42:
    i4 = *(OOC_INT8*)((_check_pointer(i1, 8155))+5);
    i4 = OOC_SSA_Allocator__SubclassToBasicType(i4);
    i4 = OOC_SSA_Allocator__RegisterType(i4);
    regDest = i4;
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8260))+24);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 8269));
    i5 = *(OOC_INT8*)((_check_pointer(i5, 8273))+5);
    i5 = OOC_SSA_Allocator__SubclassToBasicType(i5);
    i5 = OOC_SSA_Allocator__RegisterType(i5);
    regSource = i5;
    i4 = i4==i5;
    if (!i4) goto l17;
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8346));
    _assert((i4==(OOC_INT32)0), 127, 8334);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8399))+24);
    i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 8408));
    OOC_SSA__ResultDesc_ReplaceUses((OOC_SSA__Result)i1, (OOC_SSA__Result)i4);
    OOC_SSA__ProcBlockDesc_DeleteInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
l17:
    i1=i2;
    goto l19;
  default:
    i1=i2;
    goto l19;
  }
l19:
  instr = (OOC_SSA__Instr)i3;
  i2 = i3!=(OOC_INT32)0;
  if (!i2) goto l24;
  i2=i1;i1=i3;
  goto l3_loop;
l24:
  return;
  ;
}

static void OOC_SSA_WriteC__WriteTypeCast(OOC_C_DeclWriter__Writer w, OOC_INT8 ctype) {
  register OOC_INT32 i0,i1;
  OOC_INT8 rtype;

  i0 = ctype;
  i1 = OOC_SSA_Allocator__RegisterType(i0);
  rtype = i1;
  i0 = i1!=i0;
  if (!i0) goto l4;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8756)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 40u);
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 8798))+24)+(_check_index(i1, 17, OOC_UINT8, 8809))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8782)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i1, 8816))+1), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8832)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 41u);
l4:
  return;
  ;
}

static void OOC_SSA_WriteC__WriteTypeAndLength(OOC_SSA_WriteC__Writer w, OOC_SSA__Instr instr, OOC_SymbolTable__VarDecl varDecl, OOC_CHAR8 inBytes) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9122)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ",", 2);
  i1 = (OOC_INT32)varDecl;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9158))+48);
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9165)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9284))+48);
  OOC_SSA_WriteC__WriterDesc_TypeRef((OOC_SSA_WriteC__Writer)i0, (OOC_SymbolTable__Type)i1);
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9207))+48);
  i1 = (OOC_INT32)OOC_SymbolTable__ArrayDesc_GetInnermostElementType((OOC_SymbolTable__Array)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9217)))), &_td_OOC_SymbolTable__ArrayDesc, 9217)));
  OOC_SSA_WriteC__WriterDesc_TypeRef((OOC_SSA_WriteC__Writer)i0, (OOC_SymbolTable__Type)i1);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9306)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ",", 2);
  i1 = inBytes;
  if (i1) goto l7;
  i1 = (OOC_INT32)instr;
  i1 = (OOC_INT32)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i1, 1);
  OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
  goto l8;
l7:
  i1 = (OOC_INT32)instr;
  i1 = (OOC_INT32)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i1, 2);
  OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9432)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
  return;
  ;
}

static void OOC_SSA_WriteC__WriteLocalDecl(OOC_SSA_WriteC__Translator t, OOC_SSA_WriteC__Writer w, OOC_SSA__ProcBlock pb, OOC_CHAR8 _volatile) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  ADT_Dictionary__Dictionary declMap;
  OOC_SSA__Instr instr;
  OOC_SymbolTable__VarDecl decl;
  Object__String name;
  OOC_C_DeclWriter__Declaration cDecl;
  OOC_SymbolTable__Item item;
  auto OOC_SymbolTable__VarDecl OOC_SSA_WriteC__WriteLocalDecl_GetLocalDecl(OOC_SSA__Instr instr);
    
    OOC_SymbolTable__VarDecl OOC_SSA_WriteC__WriteLocalDecl_GetLocalDecl(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd opnd;
      OOC_SymbolTable__VarDecl varDecl;

      i0 = (OOC_INT32)instr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9986)))), &_td_OOC_SSA__AddressDesc);
      if (i1) goto l34;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10285))+24);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l5;
      i1=0u;
      goto l11;
l5:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10346))+4);
      i1 = i1!=5;
      if (i1) goto l8;
      i1=0u;
      goto l11;
l8:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10395))+4);
      i1 = i1!=7;
      
l11:
      if (!i1) goto l27;
l14_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10449))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l17;
      i1=0u;
      goto l23;
l17:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10346))+4);
      i1 = i1!=5;
      if (i1) goto l20;
      i1=0u;
      goto l23;
l20:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 10395))+4);
      i1 = i1!=7;
      
l23:
      if (i1) goto l14_loop;
l27:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10490));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10496)))), &_td_OOC_SSA__DeclRefDesc);
      if (!i1) goto l33;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10542));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10552)))), &_td_OOC_SSA__DeclRefDesc, 10552)), 10560))+44);
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10571)))), &_td_OOC_SymbolTable__VarDeclDesc, 10571);
      varDecl = (OOC_SymbolTable__VarDecl)i0;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10602)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10620))+20);
      i1 = i1==i2;
      if (!i1) goto l33;
      return (OOC_SymbolTable__VarDecl)i0;
l33:
      return (OOC_SymbolTable__VarDecl)(OOC_INT32)0;
      goto l43;
l34:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10066))+44);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10073)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l37;
      i1=0u;
      goto l39;
l37:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10108))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10108))+44);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10119)))), &_td_OOC_SymbolTable__VarDeclDesc, 10119)), 10127)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10119)))), &_td_OOC_SymbolTable__VarDeclDesc, 10119)));
      i2 = (OOC_INT32)pb;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10145))+20);
      i1 = i1==i2;
      
l39:
      if (i1) goto l41;
      return (OOC_SymbolTable__VarDecl)(OOC_INT32)0;
      goto l43;
l41:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10184))+44);
      return (OOC_SymbolTable__VarDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10195)))), &_td_OOC_SymbolTable__VarDeclDesc, 10195));
l43:
      _failed_function(9856); return 0;
      ;
    }


  i0 = (OOC_INT32)ADT_Dictionary__New();
  declMap = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10803))+12);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l40;
l3_loop:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10858))+36);
  i1 = i1==12;
  if (i1) goto l6;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10899))+36);
  i1 = i1==13;
  
  goto l8;
l6:
  i1=1u;
l8:
  if (i1) goto l10;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10940))+36);
  i1 = i1==58;
  
  goto l12;
l10:
  i1=1u;
l12:
  if (i1) goto l14;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10991))+36);
  i1 = i1==3;
  
  goto l16;
l14:
  i1=1u;
l16:
  if (!i1) goto l35;
  i0 = (OOC_INT32)OOC_SSA_WriteC__WriteLocalDecl_GetLocalDecl((OOC_SSA__Instr)i0);
  decl = (OOC_SymbolTable__VarDecl)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l20;
  i1=0u;
  goto l22;
l20:
  i1 = (OOC_INT32)declMap;
  i1 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
  i1 = !i1;
  
l22:
  if (!i1) goto l35;
  i1 = (OOC_INT32)instr;
  i2 = *(OOC_INT8*)((_check_pointer(i1, 11135))+36);
  i2 = i2==58;
  if (i2) goto l32;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 11411))+56);
  i1 = !i1;
  if (!i1) goto l35;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)OOC_C_ConvertDecl__GetDecl((OOC_C_DeclWriter__Writer)i1, (OOC_SymbolTable__Declaration)i0);
  cDecl = (OOC_C_DeclWriter__Declaration)i2;
  i3 = _volatile;
  if (!i3) goto l30;
  OOC_C_DeclWriter__DeclarationDesc_SetTypeQualifier((OOC_C_DeclWriter__Declaration)i2, 2);
l30:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11602)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11626)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i1, (OOC_C_DeclWriter__Declaration)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11667)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 59u);
  i1 = (OOC_INT32)declMap;
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, (Object__Object)(OOC_INT32)0);
  goto l35;
l32:
  i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  name = (Object__String)i2;
  i3 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11238)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11262)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "OOC_ALLOCATE_VPAR(", 19);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11313)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i2);
  OOC_SSA_WriteC__WriteTypeAndLength((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Instr)i1, (OOC_SymbolTable__VarDecl)i0, 0u);
l35:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11782))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l40:
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11991))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12001))+8);
  item = (OOC_SymbolTable__Item)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l62;
  i2 = (OOC_INT32)t;
  i3 = (OOC_INT32)w;
  i4 = (OOC_INT32)declMap;
  
l43_loop:
  i5 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12057)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (!i5) goto l57;
  i5 = *(OOC_UINT8*)((_check_pointer(i1, 12090))+56);
  i5 = !i5;
  if (i5) goto l48;
  i5=0u;
  goto l50;
l48:
  i5 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i4, (Object__Object)i1);
  i5 = !i5;
  
l50:
  if (i5) goto l52;
  i5=0u;
  goto l54;
l52:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12155))+32);
  i5 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i5, (Object__Object)i1);
  
l54:
  if (!i5) goto l57;
  i5 = (OOC_INT32)OOC_C_ConvertDecl__GetDecl((OOC_C_DeclWriter__Writer)i3, (OOC_SymbolTable__Declaration)i1);
  cDecl = (OOC_C_DeclWriter__Declaration)i5;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12253)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12275)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i3, (OOC_C_DeclWriter__Declaration)i5);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12314)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i3, 59u);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i4, (Object__Object)i1, (Object__Object)(OOC_INT32)0);
l57:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 12463));
  item = (OOC_SymbolTable__Item)i1;
  i5 = i1!=(OOC_INT32)0;
  if (i5) goto l43_loop;
l62:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12607))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12617))+8);
  item = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l73;
  i1 = (OOC_INT32)declMap;
  i2 = (OOC_INT32)w;
  
l65_loop:
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12673)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (!i3) goto l68;
  i3 = (OOC_INT32)OOC_C_ConvertDecl__GetProc((OOC_C_DeclWriter__Writer)i2, (OOC_SymbolTable__ProcDecl)i0, 1u);
  cDecl = (OOC_C_DeclWriter__Declaration)i3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12754)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12774)))), OOC_C_DeclWriter__WriterDesc_WriteDeclaration)),OOC_C_DeclWriter__WriterDesc_WriteDeclaration)((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Declaration)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12811)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 59u);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, (Object__Object)(OOC_INT32)0);
l68:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12945));
  item = (OOC_SymbolTable__Item)i0;
  i3 = i0!=(OOC_INT32)0;
  if (i3) goto l65_loop;
l73:
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_LengthExprHeap(OOC_SSA_WriteC__Writer w, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13062)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "OOC_ARRAY_LENGTH(", 18);
  i1 = (OOC_INT32)instr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13116))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13126))+8);
  OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13144)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13183))+24);
  OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13201)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_LengthExprParam(OOC_SSA_WriteC__Writer w, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;
  OOC_SSA__Result design;
  Object__String name;

  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i0, 5);
  design = (OOC_SSA__Result)i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13468)))), &_td_OOC_SSA__DeclRefDesc, 13468)), 13476))+44);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13502))+24);
  i0 = OOC_SSA__OpndDesc_GetIntConst((OOC_SSA__Opnd)i0);
  i0 = (OOC_INT32)OOC_C_Naming__NameOfLengthParam((OOC_SymbolTable__VarDecl)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13487)))), &_td_OOC_SymbolTable__VarDeclDesc, 13487)), i0);
  name = (Object__String)i0;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13535)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_Ref(OOC_SSA_WriteC__Writer w, OOC_SSA__Opnd opnd) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA__Result arg;
  Object__String name;
  OOC_INT8 bt;
  OOC_SSA__Instr instr;
  Object__Object obj;

  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13825));
  arg = (OOC_SSA__Result)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13844)))), &_td_OOC_SSA__DeclRefDesc);
  if (i2) goto l50;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14357)))), &_td_OOC_SSA__ConstDesc);
  if (i2) goto l40;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15088)))), &_td_OOC_SSA__AddressDesc);
  if (i2) goto l23;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15686));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15691))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = (OOC_INT32)w;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15710))+96);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15737));
  i3 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i3, (Object__Object)i4);
  if (i3) goto l17;
  i0 = *(OOC_INT8*)((_check_pointer(i1, 16023))+36);
  i0 = i0==57;
  if (i0) goto l15;
  i0 = *(OOC_INT8*)((_check_pointer(i1, 16125))+36);
  i0 = i0==72;
  if (i0) goto l13;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16378)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "XXX undefined ref /*internal error*/", 37);
  goto l62;
l13:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16166)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "setjmp(_target", 15);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16214))+100);
  i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i1);
  obj = (Object__Object)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16246)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16274)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, ")", 2);
  goto l62;
l15:
  OOC_SSA_WriteC__WriterDesc_LengthExprParam((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Instr)i1);
  goto l62;
l17:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15765))+96);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15789));
  i1 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i3);
  obj = (Object__Object)i1;
  i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  i3 = i1==i3;
  if (i3) goto l20;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15970)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i1);
  goto l62;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15854)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 40u);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15901));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15906))+8);
  OOC_SSA_WriteC__WriteExpr((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Instr)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15927)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 41u);
  goto l62;
l23:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15148))+44);
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  name = (Object__String)i0;
  i2 = (OOC_INT32)w;
  OOC_SSA_WriteC__WriteTypeCast((OOC_C_DeclWriter__Writer)i2, 1);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15214))+44);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15221)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i3) goto l26;
  i3=0u;
  goto l28;
l26:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15255))+44);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15266)))), &_td_OOC_SymbolTable__VarDeclDesc, 15266)), 15274))+48);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15281)))), &_td_OOC_SymbolTable__ArrayDesc);
  
l28:
  if (i3) goto l34;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15315))+44);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15322)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i3) goto l32;
  i1=0u;
  goto l35;
l32:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15355))+44);
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15366)))), &_td_OOC_SymbolTable__VarDeclDesc, 15366)), 15374))+60);
  
  goto l35;
l34:
  i1=1u;
l35:
  i1 = !i1;
  if (!i1) goto l38;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15592)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 38u);
l38:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15629)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i0);
  goto l62;
l40:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14548))+44);
  i2 = (OOC_INT32)OOC_SSA__nil;
  i0 = i0==i2;
  if (i0) goto l47;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14868))+48);
  i0 = i0!=0;
  if (i0) goto l45;
  i0 = (OOC_INT32)w;
  i2 = *(OOC_INT8*)((_check_pointer(i1, 15054))+5);
  i2 = OOC_SSA_Allocator__SubclassToBasicType(i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14987))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14967)))), OOC_C_DeclWriter__WriterDesc_WriteBasicConst)),OOC_C_DeclWriter__WriterDesc_WriteBasicConst)((OOC_C_DeclWriter__Writer)i0, (Object_Boxed__Object)i1, i2);
  goto l62;
l45:
  i0 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14922))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14933))+48);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14901)))), OOC_C_DeclWriter__WriterDesc_WriteStringConst)),OOC_C_DeclWriter__WriterDesc_WriteStringConst)((OOC_C_DeclWriter__Writer)i0, (Object_Boxed__Object)i2, (OOC_SymbolTable__Type)i1);
  goto l62;
l47:
  bt = 4;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14724)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(", 2);
  i1 = bt;
  i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 14770))+24)+(_check_index(i1, 17, OOC_UINT8, 14781))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14754)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i1, 14785))+1), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14803)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14833)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "0", 2);
  goto l62;
l50:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14008))+44);
  i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
  name = (Object__String)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14030))+44);
  i3 = (OOC_INT32)w;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14037)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i2) goto l53;
  i2=0u;
  goto l55;
l53:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14067))+44);
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14078)))), &_td_OOC_SymbolTable__VarDeclDesc, 14078)), 14086))+60);
  
l55:
  if (i2) goto l57;
  i1=0u;
  goto l59;
l57:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14123))+44);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14134)))), &_td_OOC_SymbolTable__VarDeclDesc, 14134)), 14142))+48);
  i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14149)))), &_td_OOC_SymbolTable__ArrayDesc));
  
l59:
  if (!i1) goto l61;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14288)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "*", 2);
l61:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 14326)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i0);
l62:
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_TypeRef(OOC_SSA_WriteC__Writer w, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;
  OOC_C_DeclWriter__Type cType;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)type;
  i1 = (OOC_INT32)OOC_C_ConvertDecl__GetTypeRef((OOC_C_DeclWriter__Writer)i0, (OOC_SymbolTable__Type)i1);
  cType = (OOC_C_DeclWriter__Type)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16606)))), OOC_C_DeclWriter__WriterDesc_WriteType)),OOC_C_DeclWriter__WriterDesc_WriteType)((OOC_C_DeclWriter__Writer)i0, (OOC_C_DeclWriter__Type)i1);
  return;
  ;
}

OOC_CHAR8 OOC_SSA_WriteC__WriterDesc_Noop(OOC_SSA_WriteC__Writer w, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SSA__Instr targetInstr;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Result res;
  Object__Object targetVar;
  Object__Object sourceVar;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 16838))+36);
  switch (i1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 82:
  case 10:
  case 11:
  case 9:
    return 1u;
    goto l31;
  case 6:
    i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetCollectTarget((OOC_SSA__Instr)i0);
    targetInstr = (OOC_SSA__Instr)i1;
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17178))+24);
    opnd = (OOC_SSA__Opnd)i0;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17214));
    res = (OOC_SSA__Result)i1;
    i2 = i0!=0;
    if (i2) goto l6;
    i2=0u;
    goto l8;
l6:
    i2 = OOC_SSA__OpndDesc_IsScheduleOpnd((OOC_SSA__Opnd)i0);
    i2 = !i2;
    
l8:
    if (!i2) goto l29;
    i2 = (OOC_INT32)w;
    
l10_loop:
    i3 = *(OOC_INT8*)((_check_pointer(i0, 17298))+4);
    i3 = i3!=2;
    if (!i3) goto l20;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17349))+96);
    i3 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i3, (Object__Object)i1);
    targetVar = (Object__Object)i3;
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17389))+96);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17416));
    i4 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i4, (Object__Object)i5);
    if (i4) goto l15;
    return 0u;
    goto l20;
l15:
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 17454))+96);
    i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17478));
    i4 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i4, (Object__Object)i5);
    sourceVar = (Object__Object)i4;
    i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 17511)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i4, (Object__Object)i3);
    i3 = !i3;
    if (!i3) goto l20;
    return 0u;
l20:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17759))+8);
    opnd = (OOC_SSA__Opnd)i0;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17781));
    res = (OOC_SSA__Result)i1;
    i3 = i0!=0;
    if (i3) goto l23;
    i3=0u;
    goto l25;
l23:
    i3 = OOC_SSA__OpndDesc_IsScheduleOpnd((OOC_SSA__Opnd)i0);
    i3 = !i3;
    
l25:
    if (i3) goto l10_loop;
l29:
    return 1u;
    goto l31;
  default:
    return 0u;
    goto l31;
  }
l31:
  _failed_function(16666); return 0;
  ;
}

OOC_CHAR8 OOC_SSA_WriteC__WriterDesc_EmptyBlock(OOC_SSA_WriteC__Writer w, OOC_SSA_Schedule__Block b) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA_Schedule__InstrProxy proxy;

  i0 = (OOC_INT32)b;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18121)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
  if (i1) goto l3;
  return 0u;
  goto l15;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18161))+8);
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l14;
  i1 = (OOC_INT32)w;
  
l6_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18229))+12);
  i2 = OOC_SSA_WriteC__WriterDesc_Noop((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Instr)i2);
  i2 = !i2;
  if (!i2) goto l9;
  return 0u;
l9:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18302));
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l6_loop;
l14:
  return 1u;
l15:
  _failed_function(17904); return 0;
  ;
}

static void OOC_SSA_WriteC__CastToPtr(OOC_SSA_WriteC__Writer w, OOC_SSA__Result var, OOC_SymbolTable__Type type, OOC_CHAR8 passByReference) {
  register OOC_INT32 i0,i1,i2;
  Object__String name;

  i0 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18563)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT32)var;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18586))+8);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 18593))+36);
  i2 = i2==61;
  if (i2) goto l41;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18681)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i2) goto l5;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18716)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l7;
l5:
  i2=1u;
l7:
  if (i2) goto l9;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18754)))), &_td_OOC_SymbolTable__TypeVarDesc);
  
  goto l11;
l9:
  i2=1u;
l11:
  if (i2) goto l13;
  i2 = passByReference;
  
  goto l15;
l13:
  i2=1u;
l15:
  if (i2) goto l17;
  i2 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 12);
  
  goto l19;
l17:
  i2=1u;
l19:
  if (!i2) goto l42;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18866)))), &_td_OOC_SSA__ConstDesc);
  if (i2) goto l23;
  i1=0u;
  goto l25;
l23:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18900)))), &_td_OOC_SSA__ConstDesc, 18900)), 18906))+44);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18914)))), &_td_Object_Boxed__StringDesc);
  
l25:
  if (i1) goto l42;
  i1 = passByReference;
  if (i1) goto l29;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19027))+24);
  i1 = i1==(OOC_INT32)0;
  
  goto l31;
l29:
  i1=1u;
l31:
  if (i1) goto l33;
  i1 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 12);
  
  goto l35;
l33:
  i1=1u;
l35:
  if (i1) goto l37;
  i0 = (OOC_INT32)OOC_C_Naming__NameOfType((OOC_SymbolTable__Type)i0);
  name = (Object__String)i0;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19200)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(", 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19230)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19261)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ")", 2);
  goto l42;
l37:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19111)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(void*)", 8);
  goto l42;
l41:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18632)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(RT0__Struct)", 14);
l42:
  return;
  ;
}

static OOC_INT32 OOC_SSA_WriteC__GetPreloadId(ADT_Dictionary_IntValue__Dictionary preloadedVars, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)preloadedVars;
  i1 = (OOC_INT32)instr;
  i2 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i1);
  if (i2) goto l3;
  i2 = ADT_Dictionary_IntValue__DictionaryDesc_Size((ADT_Dictionary_IntValue__Dictionary)i0);
  ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i1, i2);
  i0=i2;
  goto l4;
l3:
  i0 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i1);
  
l4:
  return i0;
  ;
}

static Object__Object OOC_SSA_WriteC__WriteExceptionContext(OOC_SSA_WriteC__Writer w, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 19791))+36);
  switch (i1) {
  case 78:
    
    goto l5;
  case 77:
  case 76:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19934))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19943));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19947))+8);
    instr = (OOC_SSA__Instr)i0;
    
    goto l5;
  default:
    _failed_case(i1, 19781);
    
    goto l5;
  }
l5:
  i1 = (OOC_INT32)w;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19996))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20005));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19976))+100);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20009))+8);
  i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
  obj = (Object__Object)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20023)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_context", 9);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20054)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
  return (Object__Object)i0;
  ;
}

static void OOC_SSA_WriteC__WriteExpr(OOC_SSA_WriteC__Writer w, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA__Result var;
  OOC_SSA__Opnd opnd;
  auto void OOC_SSA_WriteC__WriteExpr_Call(OOC_SSA__Instr call);
  auto void OOC_SSA_WriteC__WriteExpr_RefList(OOC_SSA__Opnd start, OOC_INT8 _class);
  auto void OOC_SSA_WriteC__WriteExpr_Assert(OOC_SSA__Instr assert);
  auto void OOC_SSA_WriteC__WriteExpr_CheckIndex(OOC_SSA__Instr checkIndex);
  auto void OOC_SSA_WriteC__WriteExpr_CheckPointer(OOC_SSA__Instr checkPointer);
  auto void OOC_SSA_WriteC__WriteExpr_TypeGuard(OOC_SSA__Instr typeGuard);
  auto void OOC_SSA_WriteC__WriteExpr_FailedCheck(OOC_SSA__Instr instr, const OOC_CHAR8 fct__ref[], OOC_LEN fct_0d, OOC_SSA__Opnd opnd);
  auto void OOC_SSA_WriteC__WriteExpr_Call(OOC_SSA__Instr call);
  auto void OOC_SSA_WriteC__WriteExpr_WriteDyadicOp(OOC_SSA__Instr instr, const OOC_CHAR8 op__ref[], OOC_LEN op_0d);
  auto void OOC_SSA_WriteC__WriteExpr_WriteDyadicOpU(OOC_SSA__Instr instr, const OOC_CHAR8 op__ref[], OOC_LEN op_0d);
  auto void OOC_SSA_WriteC__WriteExpr_WriteDyadicFct(OOC_SSA__Instr instr, const OOC_CHAR8 fct__ref[], OOC_LEN fct_0d);
  auto void OOC_SSA_WriteC__WriteExpr_WriteMonadicOp(OOC_SSA__Instr instr, const OOC_CHAR8 op__ref[], OOC_LEN op_0d, const OOC_CHAR8 suffix__ref[], OOC_LEN suffix_0d);
  auto void OOC_SSA_WriteC__WriteExpr_CastFromPtr(OOC_SSA__Result res);
  auto void OOC_SSA_WriteC__WriteExpr_NewObject(OOC_SSA__Instr instr);
  auto void OOC_SSA_WriteC__WriteExpr_NewBlock(OOC_SSA__Instr instr);
  auto void OOC_SSA_WriteC__WriteExpr_TypeCast(OOC_SSA__Instr instr);
  auto void OOC_SSA_WriteC__WriteExpr_TypeConv(OOC_SSA__Instr instr);
  auto void OOC_SSA_WriteC__WriteExpr_TypeTag(OOC_SSA__Instr instr);
  auto void OOC_SSA_WriteC__WriteExpr_TypeTest(OOC_SSA__Instr instr);
  auto void OOC_SSA_WriteC__WriteExpr_TBProcAddress(OOC_SSA__Instr instr);
  auto void OOC_SSA_WriteC__WriteExpr_CopyParameter(OOC_SSA__Address instr);
  auto void OOC_SSA_WriteC__WriteExpr_Copy(OOC_SSA__Instr instr);
  auto OOC_INT32 OOC_SSA_WriteC__WriteExpr_TypeId(OOC_SSA__Result res);
  auto void OOC_SSA_WriteC__WriteExpr_CopyString(OOC_SSA__Instr instr);
  auto void OOC_SSA_WriteC__WriteExpr_CmpString(OOC_SSA__Instr instr);
  auto void OOC_SSA_WriteC__WriteExpr_Concat(OOC_SSA__Instr instr);
  auto void OOC_SSA_WriteC__WriteExpr_MoveBlock(OOC_SSA__Instr instr);
  auto void OOC_SSA_WriteC__WriteExpr_Shift(OOC_SSA__Instr instr, OOC_CHAR8 rotate);
  auto void OOC_SSA_WriteC__WriteExpr_Indexed(OOC_SSA__Instr instr);
  auto OOC_CHAR8 OOC_SSA_WriteC__WriteExpr_SimpleVarAccess(OOC_SSA__Instr instr, OOC_INT8 adrClass);
  auto void OOC_SSA_WriteC__WriteExpr_PreloadedVar(OOC_SSA__Instr instr);
    
    void OOC_SSA_WriteC__WriteExpr_RefList(OOC_SSA__Opnd start, OOC_INT8 _class) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 count;
      OOC_SSA__Opnd opnd;

      count = 0;
      i0 = (OOC_INT32)start;
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l18;
      i1 = _class;
      i2=0;
l3_loop:
      i3 = *(OOC_INT8*)((_check_pointer(i0, 20464))+4);
      i3 = i3==i1;
      if (!i3) goto l13;
      i3 = i2!=0;
      if (!i3) goto l9;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 20529)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, ", ", 3);
l9:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20584)))), &_td_OOC_SSA__TypedOpndDesc);
      if (!i3) goto l12;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20676)))), &_td_OOC_SSA__TypedOpndDesc, 20676)), 20686))+20);
      i4 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20726)))), &_td_OOC_SSA__TypedOpndDesc, 20726)), 20736))+24);
      i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20637));
      i6 = (OOC_INT32)w;
      OOC_SSA_WriteC__CastToPtr((OOC_SSA_WriteC__Writer)i6, (OOC_SSA__Result)i5, (OOC_SymbolTable__Type)i3, i4);
l12:
      i3 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Opnd)i0);
      i2 = i2+1;
      count = i2;
      
l13:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20851))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i3 = i0!=(OOC_INT32)0;
      if (i3) goto l3_loop;
l18:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Assert(OOC_SSA__Instr assert) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20950)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20968)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_assert(", 9);
      i0 = (OOC_INT32)assert;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21017))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21027))+8);
      OOC_SSA_WriteC__WriteExpr_RefList((OOC_SSA__Opnd)i1, 1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21057)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 21105))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21086)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i0, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21123)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CheckIndex(OOC_SSA__Instr checkIndex) {
      register OOC_INT32 i0,i1,i2;
      OOC_INT8 bt;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21269)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_check_index(", 14);
      i0 = (OOC_INT32)checkIndex;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21327))+24);
      OOC_SSA_WriteC__WriteExpr_RefList((OOC_SSA__Opnd)i1, 1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21357)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)instr;
      i1 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i1);
      i1 = i1+4;
      bt = i1;
      i2 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 21478))+24)+(_check_index(i1, 17, OOC_UINT8, 21489))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21462)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, (void*)((_check_pointer(i1, 21493))+1), 32);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21509)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 21561))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21538)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i0, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21579)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CheckPointer(OOC_SSA__Instr checkPointer) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21689)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_check_pointer(", 16);
      i0 = (OOC_INT32)checkPointer;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21750))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21760))+8);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21780)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 21834))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21809)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i0, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21852)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TypeGuard(OOC_SSA__Instr typeGuard) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd opnd;
      OOC_SymbolTable__Type type;
      Object__String name;

      i0 = (OOC_INT32)typeGuard;
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 12);
      opnd = (OOC_SSA__Opnd)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 22092));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22102)))), &_td_OOC_SSA__TypeRefDesc, 22102)), 22110))+44);
      type = (OOC_SymbolTable__Type)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22140)))), &_td_OOC_SymbolTable__TypeClosureDesc);
      if (i2) goto l3;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22260)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "_type_guard(", 13);
      goto l4;
l3:
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22206)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "_type_guard_q(", 15);
l4:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22327))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22337))+8);
      OOC_SSA_WriteC__WriteExpr_RefList((OOC_SSA__Opnd)i2, 1);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22367)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, ", &", 4);
      i2 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22440))+92);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22451))+16);
      i1 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i1, (OOC_C_Naming__QualTypeData)i2);
      name = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 22469)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22498)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 22549))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22527)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i0, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22567)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_FailedCheck(OOC_SSA__Instr instr, const OOC_CHAR8 fct__ref[], OOC_LEN fct_0d, OOC_SSA__Opnd opnd) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(fct,OOC_CHAR8 ,fct_0d)

      OOC_INITIALIZE_VPAR(fct__ref,fct,OOC_CHAR8 ,fct_0d)
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22704)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22722)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)fct, fct_0d);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22750)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(", 2);
      i0 = (OOC_INT32)opnd;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l4;
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22830)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
l4:
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 22888))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22870)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, i1, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22906)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Call(OOC_SSA__Instr call) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SSA__Instr adr;
      OOC_SymbolTable__Declaration decl;
      Object__String name;
      OOC_SymbolTable__FormalPars procType;

      i0 = (OOC_INT32)call;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23122))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 23132));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23137))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 23144))+36);
      i1 = i1==63;
      if (i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23591))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 23601));
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23607)))), &_td_OOC_SSA__DeclRefDesc));
      if (i1) goto l5;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23967))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      goto l8;
l5:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23722))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23737)))), &_td_OOC_SSA__TypedOpndDesc, 23737)), 23747))+20);
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23758)))), &_td_OOC_SymbolTable__FormalParsDesc, 23758);
      procType = (OOC_SymbolTable__FormalPars)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23780)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 40u);
      i2 = (OOC_INT32)w;
      i1 = (OOC_INT32)OOC_C_ConvertDecl__ConvertType((OOC_C_DeclWriter__Writer)i2, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23808)))), OOC_C_DeclWriter__WriterDesc_WriteTypeCast)),OOC_C_DeclWriter__WriterDesc_WriteTypeCast)((OOC_C_DeclWriter__Writer)i2, (OOC_C_DeclWriter__Type)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23895))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23917)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 41u);
      goto l8;
l7:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23268))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 23278));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23283))+8);
      adr = (OOC_SSA__Instr)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23311))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23321))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 23331));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23336))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23348)))), &_td_OOC_SSA__DeclRefDesc, 23348)), 23356))+44);
      decl = (OOC_SymbolTable__Declaration)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23373)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "OOC_TBCALL(", 12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23424))+24);
      i3 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Opnd)i2);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23446)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 44u);
      i1 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i1);
      name = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23523)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23554)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 41u);
l8:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 23998)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(", 2);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24038))+24);
      OOC_SSA_WriteC__WriteExpr_RefList((OOC_SSA__Opnd)i0, 1);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24068)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_WriteDyadicOp(OOC_SSA__Instr instr, const OOC_CHAR8 op__ref[], OOC_LEN op_0d) {
      register OOC_INT32 i0,i1,i2;
      OOC_ALLOCATE_VPAR(op,OOC_CHAR8 ,op_0d)

      OOC_INITIALIZE_VPAR(op__ref,op,OOC_CHAR8 ,op_0d)
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24199))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 24219)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, (void*)(OOC_INT32)op, op_0d);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24258))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24268))+8);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_WriteDyadicOpU(OOC_SSA__Instr instr, const OOC_CHAR8 op__ref[], OOC_LEN op_0d) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_ALLOCATE_VPAR(op,OOC_CHAR8 ,op_0d)
      OOC_INT8 subclass;
      OOC_INT8 type;

      OOC_INITIALIZE_VPAR(op__ref,op,OOC_CHAR8 ,op_0d)
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24599))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 24608));
      i1 = *(OOC_INT8*)((_check_pointer(i1, 24612))+5);
      subclass = i1;
      i2 = 5<=i1;
      if (i2) goto l3;
      i2=0u;
      goto l5;
l3:
      i2 = i1<=9;
      
l5:
      if (i2) goto l7;
      OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, (void*)(OOC_INT32)op, op_0d);
      goto l12;
l7:
      i1 = OOC_SSA_Allocator__SubclassToBasicType(i1);
      type = i1;
      i2 = i1<6;
      if (!i2) goto l11;
      i1 = i1+4;
      type = i1;
      
l11:
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24922)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 40u);
      i2 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 24966))+24)+(_check_index(i1, 17, OOC_UINT8, 24977))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24950)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, (void*)((_check_pointer(i3, 24983))+1), 32);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25001)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 41u);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25041))+24);
      i3 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Opnd)i2);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25063)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, (void*)(OOC_INT32)op, op_0d);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25092)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 40u);
      i2 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 25136))+24)+(_check_index(i1, 17, OOC_UINT8, 25147))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 25120)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, (void*)((_check_pointer(i1, 25153))+1), 32);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25171)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 41u);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25211))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25221))+8);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
l12:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_WriteDyadicFct(OOC_SSA__Instr instr, const OOC_CHAR8 fct__ref[], OOC_LEN fct_0d) {
      register OOC_INT32 i0,i1,i2;
      OOC_ALLOCATE_VPAR(fct,OOC_CHAR8 ,fct_0d)

      OOC_INITIALIZE_VPAR(fct__ref,fct,OOC_CHAR8 ,fct_0d)
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25401)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)fct, fct_0d);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25429)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 40u);
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25467))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25487)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 44u);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25525))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25535))+8);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25555)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_WriteMonadicOp(OOC_SSA__Instr instr, const OOC_CHAR8 op__ref[], OOC_LEN op_0d, const OOC_CHAR8 suffix__ref[], OOC_LEN suffix_0d) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(op,OOC_CHAR8 ,op_0d)
      OOC_ALLOCATE_VPAR(suffix,OOC_CHAR8 ,suffix_0d)

      OOC_INITIALIZE_VPAR(op__ref,op,OOC_CHAR8 ,op_0d)
      OOC_INITIALIZE_VPAR(suffix__ref,suffix,OOC_CHAR8 ,suffix_0d)
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25694)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)op, op_0d);
      i0 = (OOC_INT32)instr;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25733))+24);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25753)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)(OOC_INT32)suffix, suffix_0d);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CastFromPtr(OOC_SSA__Result res) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)res;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 25870))+5);
      i0 = i0==9;
      if (!i0) goto l4;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25915)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "(", 2);
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i1 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 25961))+24)+(_check_index(i1, 17, OOC_UINT8, 25972))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25945)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i1, 26001))+1), 32);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26019)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
l4:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_NewObject(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd opnd;
      Object__String name;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26211)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "RT0__NewObject(", 16);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 12);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26340));
      i2 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 26410))+92);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26350)))), &_td_OOC_SSA__TypeRefDesc, 26350)), 26358))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 26421))+16);
      i1 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i1, (OOC_C_Naming__QualTypeData)i2);
      name = (Object__String)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 26439)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i2, (Object__Object)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26468)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ".baseTypes[0]", 14);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26520))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 26564))+4);
      i1 = i1==1;
      
l5:
      if (!i1) goto l16;
l7_loop:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26596)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26661))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=0;
      if (i1) goto l10;
      i1=0u;
      goto l12;
l10:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 26564))+4);
      i1 = i1==1;
      
l12:
      if (i1) goto l7_loop;
l16:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26691)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_NewBlock(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26849)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "RT0__NewBlock(", 15);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 1);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26957)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TypeCast(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT8 destType;
      OOC_INT8 sourceType;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = *(OOC_INT8*)((_check_pointer(i0, 27184))+5);
      i1 = OOC_SSA_Allocator__SubclassToBasicType(i1);
      destType = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27253))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 27263));
      i2 = *(OOC_INT8*)((_check_pointer(i2, 27268))+5);
      i2 = OOC_SSA_Allocator__SubclassToBasicType(i2);
      sourceType = i2;
      i3 = OOC_SSA_Opcode__ConvDiffersFromCast(i2, i1);
      if (i3) goto l3;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 27405)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "_type_cast_fast(", 17);
      goto l4;
l3:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 27354)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "_type_cast(", 12);
l4:
      i3 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i3, 27475))+24)+(_check_index(i1, 17, OOC_UINT8, 27486))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 27459)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, (void*)((_check_pointer(i1, 27496))+1), 32);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27512)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i1, 27557))+24)+(_check_index(i2, 17, OOC_UINT8, 27568))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27541)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, (void*)((_check_pointer(i2, 27580))+1), 32);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27596)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27637))+24);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27657)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TypeConv(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_INT8 destType;

      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 27843))+5);
      i1 = OOC_SSA_Allocator__SubclassToBasicType(i1);
      destType = i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27863)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "(", 2);
      i2 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i2, 27907))+24)+(_check_index(i1, 17, OOC_UINT8, 27918))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 27891)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, (void*)((_check_pointer(i1, 27928))+1), 32);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27944)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ")", 2);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27984))+24);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TypeTag(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1;
      Object__String name;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28136))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 28146));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28152)))), &_td_OOC_SSA__DeclRefDesc);
      if (i1) goto l7;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28320))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 28330));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28336)))), &_td_OOC_SSA__TypeRefDesc);
      if (i1) goto l5;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28585)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "OOC_TYPE_TAG(", 14);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28639))+24);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28661)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 41u);
      goto l8;
l5:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28366)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 38u);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28434))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28443));
      i1 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28512))+92);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28452)))), &_td_OOC_SSA__TypeRefDesc, 28452)), 28460))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28523))+16);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i0, (OOC_C_Naming__QualTypeData)i1);
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28543)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
      goto l8;
l7:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28221))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 28231));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28241)))), &_td_OOC_SSA__DeclRefDesc, 28241)), 28249))+44);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfTypeTagParam((OOC_SymbolTable__VarDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28260)))), &_td_OOC_SymbolTable__VarDeclDesc, 28260)));
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28280)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
l8:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TypeTest(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd opnd;
      OOC_SymbolTable__Type type;
      Object__String name;

      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28853))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28863))+8);
      opnd = (OOC_SSA__Opnd)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 28893));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28903)))), &_td_OOC_SSA__TypeRefDesc, 28903)), 28911))+44);
      type = (OOC_SymbolTable__Type)i1;
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28935)))), &_td_OOC_SymbolTable__TypeClosureDesc);
      if (i2) goto l3;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 29062)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "OOC_TYPE_TEST(", 15);
      goto l4;
l3:
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 29001)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "RT0__TypeTest((OOC_PTR)", 24);
l4:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29124))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29144)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", &", 4);
      i0 = (OOC_INT32)w;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29217))+92);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29228))+16);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfTypeDescriptor((OOC_SymbolTable__Type)i1, (OOC_C_Naming__QualTypeData)i0);
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29246)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29275)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_TBProcAddress(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      Object__String name;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29433)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "OOC_TBPROC_ADR(", 16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29487))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29507)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", ", 3);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29574))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29584))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29594));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29604)))), &_td_OOC_SSA__DeclRefDesc, 29604)), 29612))+44);
      i0 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i0);
      name = (Object__String)i0;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29628)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29657)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CopyParameter(OOC_SSA__Address instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__VarDecl varDecl;
      Object__String name;

      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29840))+44);
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29851)))), &_td_OOC_SymbolTable__VarDeclDesc, 29851);
      varDecl = (OOC_SymbolTable__VarDecl)i1;
      i2 = (OOC_INT32)OOC_C_Naming__NameOfDeclaration((OOC_SymbolTable__Declaration)i1);
      name = (Object__String)i2;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 29925)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 29943)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "OOC_INITIALIZE_VPAR(", 21);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 29990)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i2);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 30019)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "__ref,", 7);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 30071)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i2);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriteTypeAndLength((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Instr)i0, (OOC_SymbolTable__VarDecl)i1, 1u);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Copy(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_SymbolTable__Type type;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30254)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30284))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30294))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 30304));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30314)))), &_td_OOC_SSA__TypeRefDesc, 30314)), 30322))+44);
      type = (OOC_SymbolTable__Type)i1;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30337)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "_copy_block(", 13);
      i2 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 4);
      i3 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Opnd)i2);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 30427)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 44u);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 6);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30505)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 44u);
      i0 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 30548))+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30531)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, i1, 0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30567)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    OOC_INT32 OOC_SSA_WriteC__WriteExpr_TypeId(OOC_SSA__Result res) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)res;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30683)))), &_td_OOC_SSA__TypeRefDesc, 30683)), 30691))+44);
      i0 = *(OOC_INT16*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30702)))), &_td_OOC_SymbolTable__PredefTypeDesc, 30702)), 30713))+40);
      return i0;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CopyString(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 source;
      OOC_INT32 dest;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30835)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_NthArg((OOC_SSA__Instr)i0, 1);
      i1 = OOC_SSA_WriteC__WriteExpr_TypeId((OOC_SSA__Result)i1);
      source = i1;
      i2 = (OOC_INT32)OOC_SSA__InstrDesc_NthArg((OOC_SSA__Instr)i0, 2);
      i2 = OOC_SSA_WriteC__WriteExpr_TypeId((OOC_SSA__Result)i2);
      dest = i2;
      i3 = i1==1;
      if (i3) goto l12;
      i1 = i1==2;
      if (i1) goto l5;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31456)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_32(", 10);
      goto l18;
l5:
      switch (i2) {
      case 2:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31273)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_16(", 10);
        goto l18;
      case 3:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31330)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_16to32(", 14);
        goto l18;
      default:
        _failed_case(i2, 31232);
        goto l18;
      }
l12:
      switch (i2) {
      case 1:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31019)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_8(", 9);
        goto l18;
      case 2:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31075)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_8to16(", 13);
        goto l18;
      case 3:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31135)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_copy_8to32(", 13);
        goto l18;
      default:
        _failed_case(i2, 30978);
        goto l18;
      }
l18:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31503)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "(const void*)", 14);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 4);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31594)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ",(void*)", 9);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 6);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31681)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 44u);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 1);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31754)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_CmpString(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31857)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_NthArg((OOC_SSA__Instr)i0, 1);
      i1 = OOC_SSA_WriteC__WriteExpr_TypeId((OOC_SSA__Result)i1);
      switch (i1) {
      case 1:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31932)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_cmp8((const void*)", 20);
        goto l6;
      case 2:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31995)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_cmp16((const void*)", 21);
        goto l6;
      case 3:
        i1 = (OOC_INT32)w;
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32059)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_cmp32((const void*)", 21);
        goto l6;
      default:
        _failed_case(i1, 31874);
        goto l6;
      }
l6:
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 4);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32186)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ",(const void*)", 15);
l7_loop:
      i0 = (OOC_INT32)opnd;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32309))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 32338))+4);
      i1 = i1==4;
      if (!i1) goto l7_loop;
l11:
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32391)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Concat(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)instr;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32544)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Object__Concat2(", 17);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32614))+24);
      opnd = (OOC_SSA__Opnd)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l11;
l3_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32677))+24);
      i2 = i1!=i2;
      if (!i2) goto l6;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32704)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, ",", 2);
l6:
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32746)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "(void*)", 8);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32813))+8);
      opnd = (OOC_SSA__Opnd)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l11:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32842)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_MoveBlock(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32940)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 32958)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_move_block(", 13);
      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 4);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33048)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 44u);
      i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 6);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33126)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 44u);
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 1);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33199)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Shift(OOC_SSA__Instr instr, OOC_CHAR8 rotate) {
      register OOC_INT32 i0,i1,i2;

      i0 = rotate;
      if (i0) goto l3;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33382)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_lsh(", 6);
      goto l4;
l3:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33337)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_rot(", 6);
l4:
      i0 = (OOC_INT32)w;
      i1 = (OOC_INT32)instr;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 33489))+5);
      i2 = OOC_SSA_Allocator__SubclassToBasicType(i2);
      i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 33441))+24)+(_check_index(i2, 17, OOC_UINT8, 33452))*4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33425)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i2, 33501))+1), 32);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33517)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33558))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33578)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ", ", 3);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33619))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33629))+8);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33649)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ")", 2);
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_Indexed(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)instr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33755))+24);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33775)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 43u);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33813))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 33823))+8);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33843)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 42u);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33881))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33891))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33901))+8);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
      return;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_WriteC__WriteExpr_SimpleVarAccess(OOC_SSA__Instr instr, OOC_INT8 adrClass) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Opnd opnd;
      OOC_SSA__Result adr;
      OOC_SSA__Opnd design;

      i0 = (OOC_INT32)instr;
      i1 = adrClass;
      i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, i1);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 34147));
      adr = (OOC_SSA__Result)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34174))+8);
      design = (OOC_SSA__Opnd)i0;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34200)))), &_td_OOC_SSA__AddressDesc);
      if (i1) goto l3;
      i0=0u;
      goto l9;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34235))+8);
      i1 = i1==0;
      if (i1) goto l6;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34273))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 34283))+4);
      i0 = *(OOC_INT8*)((_check_pointer(i0, 34299))+4);
      i0 = i1!=i0;
      
      goto l9;
l6:
      i0=1u;
l9:
      if (i0) goto l11;
      return 0u;
      goto l12;
l11:
      return 1u;
l12:
      _failed_function(33946); return 0;
      ;
    }

    
    void OOC_SSA_WriteC__WriteExpr_PreloadedVar(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 id;
      OOC_C_DeclWriter__Writer wd;

      i0 = (OOC_INT32)w;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34666))+92);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34677))+36);
      i1 = (OOC_INT32)instr;
      i0 = OOC_SSA_WriteC__GetPreloadId((ADT_Dictionary_IntValue__Dictionary)i0, (OOC_SSA__Instr)i1);
      id = i0;
      OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34734)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_c", 3);
      i1 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34773))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34773))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34784)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, i0, 0);
      i1 = (OOC_INT32)w;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34817))+92);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34828))+4);
      wd = (OOC_C_DeclWriter__Writer)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34841)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "static void* _c", 16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34897))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 34897))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 34908)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i3, i0, 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34935)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ";", 2);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34962)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      return;
      ;
    }


  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 35019))+36);
  switch (i1) {
  case 12:
    OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
    i0 = (OOC_INT32)instr;
    i0 = OOC_SSA_WriteC__WriteExpr_SimpleVarAccess((OOC_SSA__Instr)i0, 4);
    if (i0) goto l5;
    i0 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35203)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "*(", 3);
    i1 = (OOC_INT32)instr;
    i2 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i1);
    i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 35250))+24)+(_check_index(i2, 17, OOC_UINT8, 35286))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35234)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i2, 35315))+1), 32);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35333)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "*)", 3);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35376))+24);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35386))+8);
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
    goto l81;
l5:
    i0 = (OOC_INT32)instr;
    i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 5);
    i1 = (OOC_INT32)w;
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
    goto l81;
  case 13:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35442)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    i0 = OOC_SSA_WriteC__WriteExpr_SimpleVarAccess((OOC_SSA__Instr)i0, 6);
    if (i0) goto l10;
    i0 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35747)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "*(", 3);
    i1 = (OOC_INT32)instr;
    i2 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i1);
    i2 = (OOC_INT32)*(OOC_INT32*)(((_check_pointer(i0, 35794))+24)+(_check_index(i2, 17, OOC_UINT8, 35830))*4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35778)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, (void*)((_check_pointer(i2, 35859))+1), 32);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35877)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "*)", 3);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35920))+24);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 35930))+8);
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i2);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35952)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, " = ", 4);
    
    goto l11;
l10:
    i0 = (OOC_INT32)instr;
    i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 7);
    i2 = (OOC_INT32)w;
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
    i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i0, 7);
    var = (OOC_SSA__Result)i1;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 35626)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, " = ", 4);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 35684)))), &_td_OOC_SSA__DeclRefDesc, 35684)), 35692))+44);
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 35703)))), &_td_OOC_SymbolTable__VarDeclDesc, 35703)), 35711))+48);
    OOC_SSA_WriteC__CastToPtr((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Result)i1, (OOC_SymbolTable__Type)i3, 0u);
    i1=i0;i0=i2;
l11:
    i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i1, 8);
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
    goto l81;
  case 14:
    OOC_SSA_WriteC__WriteExpr_Copy((OOC_SSA__Instr)i0);
    goto l81;
  case 15:
    OOC_SSA_WriteC__WriteExpr_CopyString((OOC_SSA__Instr)i0);
    goto l81;
  case 16:
    OOC_SSA_WriteC__WriteExpr_CmpString((OOC_SSA__Instr)i0);
    goto l81;
  case 17:
    OOC_SSA_WriteC__WriteExpr_Concat((OOC_SSA__Instr)i0);
    goto l81;
  case 18:
    OOC_SSA_WriteC__WriteExpr_MoveBlock((OOC_SSA__Instr)i0);
    goto l81;
  case 56:
    i1 = (OOC_INT32)w;
    OOC_SSA_WriteC__WriterDesc_LengthExprHeap((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Instr)i0);
    goto l81;
  case 57:
    goto l81;
  case 58:
    OOC_SSA_WriteC__WriteExpr_CopyParameter((OOC_SSA__Address)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36511)))), &_td_OOC_SSA__AddressDesc, 36511)));
    goto l81;
  case 59:
    OOC_SSA_WriteC__WriteExpr_NewObject((OOC_SSA__Instr)i0);
    goto l81;
  case 60:
    OOC_SSA_WriteC__WriteExpr_NewBlock((OOC_SSA__Instr)i0);
    goto l81;
  case 61:
    OOC_SSA_WriteC__WriteExpr_TypeTag((OOC_SSA__Instr)i0);
    goto l81;
  case 62:
    OOC_SSA_WriteC__WriteExpr_TypeTest((OOC_SSA__Instr)i0);
    goto l81;
  case 63:
    OOC_SSA_WriteC__WriteExpr_TBProcAddress((OOC_SSA__Instr)i0);
    goto l81;
  case 41:
    OOC_SSA_WriteC__WriteExpr_TypeCast((OOC_SSA__Instr)i0);
    goto l81;
  case 42:
    OOC_SSA_WriteC__WriteExpr_TypeConv((OOC_SSA__Instr)i0);
    goto l81;
  case 19:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "+", 2);
    goto l81;
  case 20:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "-", 2);
    goto l81;
  case 21:
    OOC_SSA_WriteC__WriteExpr_WriteMonadicOp((OOC_SSA__Instr)i0, "-", 2, "", 1);
    goto l81;
  case 22:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "*", 2);
    goto l81;
  case 23:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 37144))+5);
    i1 = i1<5;
    if (i1) goto l34;
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "/", 2);
    goto l81;
l34:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_div", 5);
    goto l81;
  case 24:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_mod", 5);
    goto l81;
  case 31:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "&&", 3);
    goto l81;
  case 32:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "||", 3);
    goto l81;
  case 33:
    OOC_SSA_WriteC__WriteExpr_WriteMonadicOp((OOC_SSA__Instr)i0, "!", 2, "", 1);
    goto l81;
  case 34:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "&", 2);
    goto l81;
  case 35:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "|", 2);
    goto l81;
  case 36:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "^", 2);
    goto l81;
  case 38:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_logical_subtr", 15);
    goto l81;
  case 37:
    OOC_SSA_WriteC__WriteExpr_WriteMonadicOp((OOC_SSA__Instr)i0, "~", 2, "", 1);
    goto l81;
  case 39:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_set_bit", 9);
    goto l81;
  case 40:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_clear_bit", 11);
    goto l81;
  case 43:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_in", 4);
    goto l81;
  case 44:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_bit_range", 11);
    goto l81;
  case 45:
    OOC_SSA_WriteC__WriteExpr_WriteMonadicOp((OOC_SSA__Instr)i0, "_abs(", 6, ")", 2);
    goto l81;
  case 46:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "<<", 3);
    goto l81;
  case 47:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, ">>", 3);
    goto l81;
  case 48:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicFct((OOC_SSA__Instr)i0, "_ash", 5);
    goto l81;
  case 49:
    OOC_SSA_WriteC__WriteExpr_WriteMonadicOp((OOC_SSA__Instr)i0, "_cap(", 6, ")", 2);
    goto l81;
  case 50:
    OOC_SSA_WriteC__WriteExpr_WriteMonadicOp((OOC_SSA__Instr)i0, "_entier(", 9, ")", 2);
    goto l81;
  case 51:
    OOC_SSA_WriteC__WriteExpr_Indexed((OOC_SSA__Instr)i0);
    goto l81;
  case 52:
    OOC_SSA_WriteC__WriteExpr_Shift((OOC_SSA__Instr)i0, 0u);
    goto l81;
  case 53:
    OOC_SSA_WriteC__WriteExpr_Shift((OOC_SSA__Instr)i0, 1u);
    goto l81;
  case 54:
    OOC_SSA_WriteC__WriteExpr_WriteMonadicOp((OOC_SSA__Instr)i0, "_odd(", 6, ")", 2);
    goto l81;
  case 25:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "==", 3);
    goto l81;
  case 26:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOp((OOC_SSA__Instr)i0, "!=", 3);
    goto l81;
  case 27:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOpU((OOC_SSA__Instr)i0, "<", 2);
    goto l81;
  case 28:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOpU((OOC_SSA__Instr)i0, "<=", 3);
    goto l81;
  case 29:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOpU((OOC_SSA__Instr)i0, ">", 2);
    goto l81;
  case 30:
    OOC_SSA_WriteC__WriteExpr_WriteDyadicOpU((OOC_SSA__Instr)i0, ">=", 3);
    goto l81;
  case 64:
    OOC_SSA_WriteC__WriteExpr_Assert((OOC_SSA__Instr)i0);
    goto l81;
  case 65:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39063)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39081)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "_halt(", 7);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39126))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39136))+8);
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39156)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ")", 2);
    goto l81;
  case 66:
    OOC_SSA_WriteC__WriteExpr_CheckIndex((OOC_SSA__Instr)i0);
    goto l81;
  case 67:
    OOC_SSA_WriteC__WriteExpr_CheckPointer((OOC_SSA__Instr)i0);
    goto l81;
  case 68:
    OOC_SSA_WriteC__WriteExpr_TypeGuard((OOC_SSA__Instr)i0);
    goto l81;
  case 69:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39403))+24);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39413))+8);
    OOC_SSA_WriteC__WriteExpr_FailedCheck((OOC_SSA__Instr)i0, "_failed_case", 13, (OOC_SSA__Opnd)i1);
    goto l81;
  case 70:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 39498))+24);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39508))+8);
    OOC_SSA_WriteC__WriteExpr_FailedCheck((OOC_SSA__Instr)i0, "_failed_with", 13, (OOC_SSA__Opnd)i1);
    goto l81;
  case 71:
    OOC_SSA_WriteC__WriteExpr_FailedCheck((OOC_SSA__Instr)i0, "_failed_type_assert", 20, (OOC_SSA__Opnd)(OOC_INT32)0);
    goto l81;
  case 55:
    i1 = (OOC_INT32)w;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 39644))+96);
    i2 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
    i2 = !i2;
    if (i2) goto l76;
    OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
    goto l77;
l76:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 39688)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
l77:
    i0 = (OOC_INT32)instr;
    OOC_SSA_WriteC__WriteExpr_Call((OOC_SSA__Instr)i0);
    goto l81;
  case 76:
    OOC_SSA_WriteC__WriteExpr_CastFromPtr((OOC_SSA__Result)i0);
    i0 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 39835)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "Exception__Current()", 21);
    goto l81;
  case 81:
    OOC_SSA_WriteC__WriteExpr_PreloadedVar((OOC_SSA__Instr)i0);
    goto l81;
  default:
    _failed_case(i1, 35009);
    goto l81;
  }
l81:
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_WriteInstrList(OOC_SSA_WriteC__Writer w, OOC_SSA_Schedule__Block b) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA_Schedule__InstrProxy proxy;
  OOC_SSA__Instr instr;
  Object__Object target;
  OOC_SSA__Opnd opnd;
  OOC_SymbolTable__FormalPars fpars;
  Object__Object obj;
  auto void OOC_SSA_WriteC__WriterDesc_WriteInstrList_WriteCollect(OOC_SSA__Instr collect, OOC_SSA__Instr targetInstr);
  auto void OOC_SSA_WriteC__WriterDesc_WriteInstrList_PrefixReturn(void);
  auto OOC_CHAR8 OOC_SSA_WriteC__WriterDesc_WriteInstrList_AllPathsClosed(OOC_SSA__Instr selectReturn);
    
    void OOC_SSA_WriteC__WriterDesc_WriteInstrList_WriteCollect(OOC_SSA__Instr collect, OOC_SSA__Instr targetInstr) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_SSA__Opnd opnd;
      OOC_SSA__Result res;
      Object__Object targetVar;
      Object__Object sourceVar;
      OOC_INT32 i;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 40400)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      i0 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_ClearSwapData((OOC_SSA_WriteC__Writer)i0);
      i0 = (OOC_INT32)collect;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 40576))+24);
      opnd = (OOC_SSA__Opnd)i1;
      i2 = (OOC_INT32)targetInstr;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 40612));
      res = (OOC_SSA__Result)i3;
      i4 = i1!=0;
      if (i4) goto l3;
      i4=0u;
      goto l5;
l3:
      i4 = OOC_SSA__OpndDesc_IsScheduleOpnd((OOC_SSA__Opnd)i1);
      i4 = !i4;
      
l5:
      if (!i4) goto l22;
l7_loop:
      i4 = *(OOC_INT8*)((_check_pointer(i1, 40696))+4);
      i4 = i4!=2;
      if (!i4) goto l13;
      i4 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 40747))+96);
      i4 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i4, (Object__Object)i3);
      targetVar = (Object__Object)i4;
      i5 = (OOC_INT32)w;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 40787))+96);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 40814));
      i5 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i5, (Object__Object)i6);
      if (!i5) goto l13;
      i5 = (OOC_INT32)w;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 40852))+96);
      i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 40876));
      i5 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i5, (Object__Object)i6);
      sourceVar = (Object__Object)i5;
      i6 = OOC_SSA_WriteC__SubclassToBasicType((OOC_SSA__Result)i3);
      i7 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_AddSwapData((OOC_SSA_WriteC__Writer)i7, (Object__String)(_type_guard(i5, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 40922)))), &_td_Object__StringDesc, 40922)), (Object__String)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 40969)))), &_td_Object__StringDesc, 40969)), i6);
l13:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41081))+8);
      opnd = (OOC_SSA__Opnd)i1;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 41103));
      res = (OOC_SSA__Result)i3;
      i4 = i1!=0;
      if (i4) goto l16;
      i4=0u;
      goto l18;
l16:
      i4 = OOC_SSA__OpndDesc_IsScheduleOpnd((OOC_SSA__Opnd)i1);
      i4 = !i4;
      
l18:
      if (i4) goto l7_loop;
l22:
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_CountReadsSwapData((OOC_SSA_WriteC__Writer)i1);
      i1 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 41293))+112);
      i1 = i1!=0;
      if (!i1) goto l51;
l25_loop:
      i = 0;
      i1 = (OOC_INT32)w;
      i3 = *(OOC_INT32*)((_check_pointer(i1, 41355))+112);
      i3 = 0!=i3;
      if (i3) goto l28;
      i3=0u;
      goto l30;
l28:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41378))+108);
      i3 = _check_pointer(i3, 41389);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_INT32*)((i3+((_check_index(0, i4, OOC_UINT32, 41389))*16))+8);
      i3 = i3!=0;
      
l30:
      if (i3) goto l32;
      i3=0;
      goto l42;
l32:
      i3=0;
l33_loop:
      i3 = i3+1;
      i = i3;
      i4 = *(OOC_INT32*)((_check_pointer(i1, 41355))+112);
      i4 = i3!=i4;
      if (i4) goto l36;
      i4=0u;
      goto l38;
l36:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41378))+108);
      i4 = _check_pointer(i4, 41389);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 41389))*16))+8);
      i4 = i4!=0;
      
l38:
      if (i4) goto l33_loop;
l42:
      i4 = *(OOC_INT32*)((_check_pointer(i1, 41461))+112);
      i4 = i3==i4;
      if (i4) goto l45;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41620))+108);
      i4 = _check_pointer(i4, 41631);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 41631))*16))+4);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41604)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i4);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41654)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "=", 2);
      i1 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 41702))+108);
      i4 = _check_pointer(i4, 41713);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 41713))*16));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41686)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i4);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 41738)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 59u);
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_RemoveSwapData((OOC_SSA_WriteC__Writer)i1, i3);
      goto l46;
l45:
      OOC_SSA_WriteC__WriterDesc_IntroduceHelperVar((OOC_SSA_WriteC__Writer)i1, 0);
l46:
      i1 = (OOC_INT32)w;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 41293))+112);
      i1 = i1!=0;
      if (i1) goto l25_loop;
l51:
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_FixupHelperVars((OOC_SSA_WriteC__Writer)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 41945))+24);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 41981));
      res = (OOC_SSA__Result)i1;
      i2 = i0!=0;
      if (i2) goto l54;
      i2=0u;
      goto l56;
l54:
      i2 = OOC_SSA__OpndDesc_IsScheduleOpnd((OOC_SSA__Opnd)i0);
      i2 = !i2;
      
l56:
      if (!i2) goto l73;
l58_loop:
      i2 = *(OOC_INT8*)((_check_pointer(i0, 42065))+4);
      i2 = i2!=2;
      if (!i2) goto l64;
      i2 = (OOC_INT32)w;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 42116))+96);
      i2 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i2, (Object__Object)i1);
      targetVar = (Object__Object)i2;
      i3 = (OOC_INT32)w;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 42157))+96);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 42184));
      i3 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i3, (Object__Object)i4);
      i3 = !i3;
      if (!i3) goto l64;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 42209)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i3, (Object__Object)i2);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42249)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "=", 2);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i0);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 42310)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i2, 59u);
l64:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 42376))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 42398));
      res = (OOC_SSA__Result)i1;
      i2 = i0!=0;
      if (i2) goto l67;
      i2=0u;
      goto l69;
l67:
      i2 = OOC_SSA__OpndDesc_IsScheduleOpnd((OOC_SSA__Opnd)i0);
      i2 = !i2;
      
l69:
      if (i2) goto l58_loop;
l73:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriterDesc_WriteInstrList_PrefixReturn(void) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 42539)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
      return;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_WriteC__WriterDesc_WriteInstrList_AllPathsClosed(OOC_SSA__Instr selectReturn) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT32)selectReturn;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43052))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43062))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43091))+8);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l9;
l4_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43132))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43091))+8);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l4_loop;
l9:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 43173));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43178))+8);
      i0 = *(OOC_INT8*)((_check_pointer(i0, 43185))+36);
      return (i0==7);
      ;
    }


  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43259))+8);
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l65;
l3_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 43319))+12);
  instr = (OOC_SSA__Instr)i0;
  target = (Object__Object)(OOC_INT32)0;
  i1 = (OOC_INT32)w;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43556))+96);
  i2 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
  if (i2) goto l6;
  i2=(OOC_INT32)0;
  goto l10;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 43610))+96);
  i2 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i2, (Object__Object)i0);
  target = (Object__Object)i2;
  i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  i3 = i2!=i3;
  if (!i3) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43698)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43863)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 43898)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, " = ", 4);
l10:
  i3 = (OOC_INT32)OOC_SSA_Allocator__markInPlace;
  i2 = i2!=i3;
  if (!i2) goto l60;
  i2 = *(OOC_INT8*)((_check_pointer(i0, 44158))+36);
  switch (i2) {
  case 0:
    goto l60;
  case 1:
    goto l60;
  case 2:
    goto l60;
  case 3:
    goto l60;
  case 4:
    goto l60;
  case 5:
    goto l60;
  case 82:
    goto l60;
  case 84:
    goto l60;
  case 10:
    goto l60;
  case 11:
    goto l60;
  case 9:
    goto l60;
  case 6:
    i1 = (OOC_INT32)OOC_SSA__InstrDesc_GetCollectTarget((OOC_SSA__Instr)i0);
    OOC_SSA_WriteC__WriterDesc_WriteInstrList_WriteCollect((OOC_SSA__Instr)i0, (OOC_SSA__Instr)i1);
    goto l60;
  case 7:
    OOC_SSA_WriteC__WriterDesc_WriteInstrList_PrefixReturn();
    i0 = (OOC_INT32)instr;
    i0 = (OOC_INT32)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 9);
    opnd = (OOC_SSA__Opnd)i0;
    i1 = i0!=(OOC_INT32)0;
    if (i1) goto l29;
    i0 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45367)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "return", 7);
    
    goto l30;
l29:
    i1 = (OOC_INT32)w;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 45169)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "return ", 8);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 45257))+104);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45268))+20);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45278))+64);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45290))+44);
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 45226));
    OOC_SSA_WriteC__CastToPtr((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Result)i3, (OOC_SymbolTable__Type)i2, 0u);
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
    i0=i1;
l30:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45418)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 59u);
    goto l60;
  case 8:
    i0 = OOC_SSA_WriteC__WriterDesc_WriteInstrList_AllPathsClosed((OOC_SSA__Instr)i0);
    i0 = !i0;
    if (!i0) goto l60;
    OOC_SSA_WriteC__WriterDesc_WriteInstrList_PrefixReturn();
    i0 = (OOC_INT32)w;
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45568))+104);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 45578))+20);
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 45587))+64);
    fpars = (OOC_SymbolTable__FormalPars)i1;
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 45621))+44);
    i2 = i2!=(OOC_INT32)0;
    if (i2) goto l39;
    i1 = *(OOC_UINT8*)((_check_pointer(i1, 46010))+57);
    i1 = !i1;
    if (!i1) goto l60;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46040)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "return;", 8);
    goto l60;
l39:
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45663))+104);
    i2 = *(OOC_UINT8*)((_check_pointer(i2, 45674))+24);
    if (!i2) goto l42;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45718)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_failed_function(", 18);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 45786))+104);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45797))+20);
    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 45807))+20);
    i2 = *(OOC_INT32*)(_check_pointer(i2, 45813));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45772)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i0, i2, 0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45841)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "); ", 4);
l42:
    i1 = *(OOC_UINT8*)((_check_pointer(i1, 45906))+57);
    i1 = !i1;
    if (!i1) goto l60;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 45938)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "return 0;", 10);
    goto l60;
  case 72:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46147)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46168)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "{", 2);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46198)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i1, 1);
    goto l60;
  case 73:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46246)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ";", 2);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46276)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i1, (-1));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46300)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46321)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "}", 2);
    goto l60;
  case 74:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46384)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46405)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__Raise((void*)", 25);
    i0 = (OOC_INT32)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, 1);
    OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Opnd)i0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46493)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ");", 3);
    goto l60;
  case 78:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46563)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46584)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__PushContext(&", 25);
    i0 = (OOC_INT32)OOC_SSA_WriteC__WriteExceptionContext((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Instr)i0);
    obj = (Object__Object)i0;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46687)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ", &_target", 11);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46726)))), OOC_C_DeclWriter__WriterDesc_WriteObject)),OOC_C_DeclWriter__WriterDesc_WriteObject)((OOC_C_DeclWriter__Writer)i1, (Object__Object)i0);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46756)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ");", 3);
    goto l60;
  case 79:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46825)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46846)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__PopContext(", 23);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46919))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 46928))+8);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 46937));
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 46946)))), &_td_OOC_SSA__ConstDesc, 46946)), 46952))+44);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 46897)))), OOC_C_DeclWriter__WriterDesc_WriteBasicConst)),OOC_C_DeclWriter__WriterDesc_WriteBasicConst)((OOC_C_DeclWriter__Writer)i1, (Object_Boxed__Object)i0, 4);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47018)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ");", 3);
    goto l60;
  case 77:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47082)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47103)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__Clear();", 20);
    goto l60;
  case 80:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47185)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47206)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__ActivateContext();", 30);
    goto l60;
  default:
    OOC_SSA_WriteC__WriteExpr((OOC_SSA_WriteC__Writer)i1, (OOC_SSA__Instr)i0);
    i0 = OOC_SSA__InstrDesc_IsConst((OOC_SSA__Instr)i0);
    i0 = !i0;
    if (!i0) goto l60;
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47389)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 59u);
    goto l60;
  }
l60:
  i0 = (OOC_INT32)proxy;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 47474));
  proxy = (OOC_SSA_Schedule__InstrProxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l65:
  return;
  ;
}

void OOC_SSA_WriteC__WriterDesc_WriteBlocks(OOC_SSA_WriteC__Writer w, OOC_SSA_Schedule__Block domRoot) {
  register OOC_INT32 i0;
  OOC_SSA_Schedule__Block registeredGoto;
  auto void OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlockId(OOC_SSA_Schedule__Block b);
  auto void OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteGoto(OOC_SSA_Schedule__Block target);
  auto void OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock(OOC_SSA_Schedule__Block b);
    
    void OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlockId(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)b;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l6;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47946)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "l", 2);
      i1 = (OOC_INT32)w;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 47990))+40);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 47976)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i1, i2, 0);
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 48012))+28);
      if (!i0) goto l7;
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48041)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "_loop", 6);
      goto l7;
l6:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 47885)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "XXX WriteBlockId(NIL)", 22);
l7:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteGoto(OOC_SSA_Schedule__Block target) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)target;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l3;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 48274)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "goto ", 6);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlockId((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48339)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i0, 59u);
      goto l4;
l3:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 48211)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "/* goto: unreachable */", 24);
l4:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 d;
      OOC_SSA_Schedule__Block nested;
      OOC_INT32 i;
      auto void OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteNested(OOC_SSA_Schedule__Block nested);
      auto void OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteCases(OOC_SSA__Instr instr);
        
        void OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteNested(OOC_SSA_Schedule__Block nested) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)nested;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l8;
          
l3_loop:
          OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock((OOC_SSA_Schedule__Block)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 48654));
          nested = (OOC_SSA_Schedule__Block)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l8:
          return;
          ;
        }

        
        void OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteCases(OOC_SSA__Instr instr) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA__Opnd opnd;
          OOC_SSA__Opnd lower;
          OOC_SSA__Opnd upper;

          i0 = (OOC_INT32)instr;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 48823))+36);
          i1 = i1==82;
          if (i1) goto l3;
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49386)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49408)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, "default:", 9);
          goto l15;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48877))+24);
          opnd = (OOC_SSA__Opnd)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l15;
l6_loop:
          lower = (OOC_SSA__Opnd)i0;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 48972))+8);
          opnd = (OOC_SSA__Opnd)i1;
          upper = (OOC_SSA__Opnd)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 49035))+8);
          opnd = (OOC_SSA__Opnd)i2;
          i3 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 49073)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
          i3 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 49097)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "case ", 6);
          i3 = (OOC_INT32)w;
          OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i3, (OOC_SSA__Opnd)i0);
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 49184));
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 49171));
          i0 = i0!=i3;
          if (!i0) goto l9;
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49211)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, " ... ", 6);
          i0 = (OOC_INT32)w;
          OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i0, (OOC_SSA__Opnd)i1);
l9:
          i0 = (OOC_INT32)w;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49326)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ":", 2);
          i0 = i2!=(OOC_INT32)0;
          if (!i0) goto l15;
          i0=i2;
          goto l6_loop;
l15:
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 49497))+36);
      i1 = i1!=0;
      if (i1) goto l3;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49520)))), &_td_OOC_SSA_Schedule__JumpBlockDesc));
      
      goto l5;
l3:
      i1=1u;
l5:
      if (!i1) goto l21;
      i1 = (OOC_INT32)registeredGoto;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l9;
      i1=0u;
      goto l11;
l9:
      i1 = i1!=i0;
      
l11:
      if (!i1) goto l13;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49621)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)registeredGoto;
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteGoto((OOC_SSA_Schedule__Block)i1);
      registeredGoto = (OOC_SSA_Schedule__Block)(OOC_INT32)0;
l13:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 49731))+36);
      d = i1;
      i2 = (OOC_INT32)registeredGoto;
      i2 = i0==i2;
      if (!i2) goto l17;
      i1 = i1-1;
      d = i1;
      
l17:
      i1 = i1!=0;
      if (!i1) goto l20;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49847)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i1);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlockId((OOC_SSA_Schedule__Block)i0);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 49897)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 58u);
l20:
      i1 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_WriteInstrList((OOC_SSA_WriteC__Writer)i1, (OOC_SSA_Schedule__Block)i0);
l21:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 49990)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l56;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 50661)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l37;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51442)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l32;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51642)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (i1) goto l30;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51639)))), 51639);
      goto l67;
l30:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51691))+16);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteNested((OOC_SSA_Schedule__Block)i0);
      goto l67;
l32:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 51479))+36);
      i1 = i1!=0;
      if (!i1) goto l35;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51571))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51577))+4);
      registeredGoto = (OOC_SSA_Schedule__Block)i1;
l35:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51620))+16);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteNested((OOC_SSA_Schedule__Block)i0);
      goto l67;
l37:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50696)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50716)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "switch (", 9);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50761))+48);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50779)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ") {", 4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50832))+16);
      nested = (OOC_SSA_Schedule__Block)i1;
      i = 0;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l40;
      i2=0u;
      goto l42;
l40:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50893))+52);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 50899)), 0);
      i2 = 0!=i2;
      
l42:
      if (i2) goto l44;
      i0=i1;
      goto l54;
l44:
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}i2=0;
l45_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50934))+52);
      i3 = _check_pointer(i3, 50940);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 50940))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 50943))+4);
      _assert((i0==i3), 127, 50916);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50975))+60);
      i0 = _check_pointer(i0, 50987);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT32, 50987))*4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 50990));
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50995))+8);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteCases((OOC_SSA__Instr)i0);
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 51027)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i0, 1);
      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51070))+52);
      i1 = _check_pointer(i1, 51076);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = i;
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 51076))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51079))+4);
      registeredGoto = (OOC_SSA_Schedule__Block)i1;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 51110))+52);
      i1 = _check_pointer(i1, 51116);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 51116))*4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 51119))+4);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock((OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51139)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)registeredGoto;
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteGoto((OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51199)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i1, (-1));
      i1 = (OOC_INT32)nested;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 51240));
      nested = (OOC_SSA_Schedule__Block)i1;
      i2 = i3+1;
      i = i2;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l48;
      i3=0u;
      goto l50;
l48:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50893))+52);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 50899)), 0);
      i3 = i2!=i3;
      
l50:
      if (!i3) goto l53;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
      goto l45_loop;
l53:
      i0=i1;
l54:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 51295));
      _assert((i1==(OOC_INT32)0), 127, 51281);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51322)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 51342)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "}", 2);
      registeredGoto = (OOC_SSA_Schedule__Block)(OOC_INT32)0;
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteNested((OOC_SSA_Schedule__Block)i0);
      goto l67;
l56:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50025)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50045)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "if (", 5);
      i1 = (OOC_INT32)OOC_SSA_Schedule__BranchBlockDesc_DefaultTarget((OOC_SSA_Schedule__BranchBlock)i0);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50103))+48);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 50109))+4);
      i1 = i1==i2;
      if (i1) goto l62;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 50380))+56);
      if (!i1) goto l61;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50413)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 33u);
l61:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50465))+52);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50490)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ") ", 3);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50534))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50540))+4);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteGoto((OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50578))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50588))+4);
      registeredGoto = (OOC_SSA_Schedule__Block)i1;
      goto l66;
l62:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 50137))+56);
      i1 = !i1;
      if (!i1) goto l65;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50170)))), OOC_C_DeclWriter__WriterDesc_WriteChar)),OOC_C_DeclWriter__WriterDesc_WriteChar)((OOC_C_DeclWriter__Writer)i1, 33u);
l65:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50222))+52);
      i2 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i2, (OOC_SSA__Opnd)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 50247)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ") ", 3);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50291))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50301))+4);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteGoto((OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50339))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 50345))+4);
      registeredGoto = (OOC_SSA_Schedule__Block)i1;
l66:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 50631))+16);
      OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock_WriteNested((OOC_SSA_Schedule__Block)i0);
l67:
      return;
      ;
    }


  i0 = (OOC_INT32)domRoot;
  registeredGoto = (OOC_SSA_Schedule__Block)i0;
  OOC_SSA_WriteC__WriterDesc_WriteBlocks_WriteBlock((OOC_SSA_Schedule__Block)i0);
  return;
  ;
}

void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody(volatile OOC_SSA_WriteC__Translator t, volatile OOC_IR__Procedure proc) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  volatile OOC_SSA__ProcBlock pb;
  volatile OOC_CHAR8 writeProc;
  volatile OOC_SSA__Instr enter;
  volatile OOC_SSA__Result s;
  volatile OOC_SSA_Destore__State destore;
  volatile ADT_Dictionary__Dictionary jmpbufMap;
  volatile OOC_SSA_Schedule__Block domRoot;
  volatile ADT_Dictionary__Dictionary registerMap;
  volatile OOC_SSA_WriteC__Writer w;
  volatile OOC_SSA__Instr instr;
  volatile OOC_INT32 dummy;
  auto void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_WriteJmpBufDecl(ADT_Dictionary__Dictionary jmpbufMap);
  auto void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write(const OOC_CHAR8 pre__ref[], OOC_LEN pre_0d, const OOC_CHAR8 post__ref[], OOC_LEN post_0d, OOC_CHAR8 addToStats);
  auto void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining(OOC_SSA_Schedule__Block b);
  auto void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps(OOC_SSA_Schedule__Block b);
  auto void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_InitPreloadedVars(ADT_Dictionary_IntValue__Dictionary vars);
  jmp_buf _target0;
  Exception__Context _context0;
    
    void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_WriteJmpBufDecl(ADT_Dictionary__Dictionary jmpbufMap) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 i;

      i0 = (OOC_INT32)jmpbufMap;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l25;
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52270)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52289)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "jmp_buf ", 9);
      i1 = ADT_Dictionary__DictionaryDesc_Size((ADT_Dictionary__Dictionary)i0);
      i = 0;
      i2 = 0<i1;
      if (!i2) goto l13;
      i2=0;
l5_loop:
      i3 = i2!=0;
      if (!i3) goto l8;
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 52386)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, ", ", 3);
l8:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 52421)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "_target", 8);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 52447)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i3, i2, 0);
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l5_loop;
l13:
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52487)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, ";", 2);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52516)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i1);
      i1 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52535)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i1, "Exception__Context ", 20);
      i0 = ADT_Dictionary__DictionaryDesc_Size((ADT_Dictionary__Dictionary)i0);
      i = 0;
      i1 = 0<i0;
      if (!i1) goto l24;
      i1=0;
l16_loop:
      i2 = i1!=0;
      if (!i2) goto l19;
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 52643)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, ", ", 3);
l19:
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 52678)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i2, "_context", 9);
      i2 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 52705)))), OOC_C_DeclWriter__WriterDesc_WriteLInt)),OOC_C_DeclWriter__WriterDesc_WriteLInt)((OOC_C_DeclWriter__Writer)i2, i1, 0);
      i1 = i1+1;
      i = i1;
      i2 = i1<i0;
      if (i2) goto l16_loop;
l24:
      i0 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 52745)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ";", 2);
l25:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write(const OOC_CHAR8 pre__ref[], OOC_LEN pre_0d, const OOC_CHAR8 post__ref[], OOC_LEN post_0d, OOC_CHAR8 addToStats) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(pre,OOC_CHAR8 ,pre_0d)
      OOC_ALLOCATE_VPAR(post,OOC_CHAR8 ,post_0d)

      OOC_INITIALIZE_VPAR(pre__ref,pre,OOC_CHAR8 ,pre_0d)
      OOC_INITIALIZE_VPAR(post__ref,post,OOC_CHAR8 ,post_0d)
      i0 = writeProc;
      if (i0) goto l3;
      i0=0u;
      goto l9;
l3:
      i0 = (OOC_INT32)t;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52913))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52913))+24);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52927)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i0, (void*)(OOC_INT32)pre, pre_0d, 0, (-1));
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l6;
      i0 = (OOC_INT32)t;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52975))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 52975))+24);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 52989)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i0, (void*)(OOC_INT32)post, post_0d, 0, (-1));
      i0 = i0!=(OOC_INT32)0;
      
      goto l9;
l6:
      i0=1u;
l9:
      if (!i0) goto l11;
      Err__String("PROCEDURE ", 11);
      i0 = (OOC_INT32)pb;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53086))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53096))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53102))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53086))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53096))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53102))+12);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 53107)), 0);
      Err__String((void*)(_check_pointer(i1, 53107)), i0);
      Err__String("/", 2);
      Err__String((void*)(OOC_INT32)pre, pre_0d);
      Err__String("/", 2);
      Err__String((void*)(OOC_INT32)post, post_0d);
      Err__String(":", 2);
      Err__Ln();
      Err__Flush();
      i0 = (OOC_INT32)IO_StdChannels__stderr;
      i1 = (OOC_INT32)pb;
      OOC_SSA_Blocker__Write((IO__ByteChannel)i0, (OOC_SSA__ProcBlock)i1);
      Err__Flush();
l11:
      i0 = addToStats;
      if (!i0) goto l14;
      i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)pre, pre_0d);
      i1 = (OOC_INT32)pb;
      OOC_SSA_Stats__AddProcBlock((Object__String)i0, (OOC_SSA__ProcBlock)i1);
l14:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1;
      OOC_SSA_Schedule__Block nested;
      auto void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining_Chain(OOC_SSA_Schedule__Jump *jump);
        
        void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining_Chain(OOC_SSA_Schedule__Jump *jump) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)*jump;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53656))+4);
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 53662))+28);
          i1 = !i1;
          if (i1) goto l3;
          i1=0u;
          goto l5;
l3:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53710))+4);
          i2 = (OOC_INT32)w;
          i1 = OOC_SSA_WriteC__WriterDesc_EmptyBlock((OOC_SSA_WriteC__Writer)i2, (OOC_SSA_Schedule__Block)i1);
          
l5:
          if (i1) goto l7;
          i1=0u;
          goto l9;
l7:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53739))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 53752));
          i1 = i1!=i2;
          
l9:
          if (!i1) goto l24;
l11_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53847))+4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 53862)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 53862)), 53872))+48);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 53877))+4);
          OOC_SSA_Schedule__ChangeJumpTarget((OOC_SSA_Schedule__Jump)i0, (OOC_SSA_Schedule__Block)i1);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53656))+4);
          i1 = *(OOC_UINT8*)((_check_pointer(i1, 53662))+28);
          i1 = !i1;
          if (i1) goto l14;
          i1=0u;
          goto l16;
l14:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53710))+4);
          i2 = (OOC_INT32)w;
          i1 = OOC_SSA_WriteC__WriterDesc_EmptyBlock((OOC_SSA_WriteC__Writer)i2, (OOC_SSA_Schedule__Block)i1);
          
l16:
          if (i1) goto l18;
          i1=0u;
          goto l20;
l18:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 53739))+4);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 53752));
          i1 = i1!=i2;
          
l20:
          if (i1) goto l11_loop;
l24:
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 53942)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l13;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54040)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l14;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54129)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l10;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54188)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (i1) goto l14;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54185)))), 54185);
      goto l14;
l10:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining_Chain((void*)((_check_pointer(i0, 54169))+48));
      goto l14;
l13:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining_Chain((void*)((_check_pointer(i0, 53984))+48));
      i0 = (OOC_INT32)b;
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining_Chain((void*)((_check_pointer(i0, 54009))+60));
l14:
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54272))+16);
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l22;
l17_loop:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 54368));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l17_loop;
l22:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA_Schedule__Block nested;
      auto void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps_Switch(OOC_CHAR8 *negate, OOC_SSA_Schedule__Jump *j1, OOC_SSA_Schedule__Jump *j2);
        
        void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps_Switch(OOC_CHAR8 *negate, OOC_SSA_Schedule__Jump *j1, OOC_SSA_Schedule__Jump *j2) {
          register OOC_INT32 i0,i1;

          i0 = *negate;
          *negate = (!i0);
          i0 = (OOC_INT32)*j1;
          i1 = (OOC_INT32)*j2;
          *j1 = (OOC_SSA_Schedule__Jump)i1;
          *j2 = (OOC_SSA_Schedule__Jump)i0;
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 54729)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (!i1) goto l18;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54768))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54778))+4);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 54784))+40);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 54792))+40);
      i1 = i1>i2;
      if (i1) goto l5;
      i1=0u;
      goto l7;
l5:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54813))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54819))+4);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 54825))+40);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 54834))+40);
      i1 = i1<=i2;
      
l7:
      if (i1) goto l16;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 54988))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 54998))+4);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 54980))+40);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 55004))+40);
      i1 = i2<i1;
      if (i1) goto l11;
      i1=0u;
      goto l13;
l11:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55028))+60);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 55038))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55052))+48);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 55058))+4);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 55044))+40);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 55064))+40);
      i1 = i1<i2;
      
l13:
      if (!i1) goto l18;
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps_Switch((void*)((_check_pointer(i0, 55148))+56), (void*)((_check_pointer(i0, 55165))+60), (void*)((_check_pointer(i0, 55178))+48));
      goto l18;
l16:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps_Switch((void*)((_check_pointer(i0, 54925))+56), (void*)((_check_pointer(i0, 54942))+60), (void*)((_check_pointer(i0, 54955))+48));
l18:
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 55267))+16);
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l26;
l21_loop:
      OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 55364));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l21_loop;
l26:
      return;
      ;
    }

    
    void OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_InitPreloadedVars(ADT_Dictionary_IntValue__Dictionary vars) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
      Object__ObjectArrayPtr instrList;
      Object__ObjectArrayPtr varList;
      OOC_INT32 i;
      OOC_SSA__Opnd opnd;
      Object__CharsLatin1 chars;
      OOC_INT32 count;

      i0 = (OOC_INT32)vars;
      i1 = (OOC_INT32)ADT_Dictionary_IntValue__DictionaryDesc_Keys((ADT_Dictionary_IntValue__Dictionary)i0);
      instrList = (Object__ObjectArrayPtr)i1;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 55714)), 0);
      i2 = (OOC_INT32)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], i2);
      varList = (Object__ObjectArrayPtr)i2;
      i = 0;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 55752)), 0);
      i4 = 0<i3;
      if (!i4) goto l8;
      i4=0;
l3_loop:
      i5 = _check_pointer(i2, 55775);
      i6 = _check_pointer(i1, 55794);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i4, i7, OOC_UINT32, 55794))*4);
      i6 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i0, (Object__Object)i6);
      i7 = OOC_ARRAY_LENGTH(i5, 0);
      i8 = _check_pointer(i1, 55812);
      i9 = OOC_ARRAY_LENGTH(i8, 0);
      i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 55812))*4);
      *(OOC_INT32*)(i5+(_check_index(i6, i7, OOC_UINT32, 55775))*4) = i8;
      i4 = i4+1;
      i = i4;
      i5 = i4<i3;
      if (i5) goto l3_loop;
l8:
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 55866)), 0);
      i = 0;
      i1 = 0<i0;
      if (!i1) goto l27;
      i1=0;
l11_loop:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 55883)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i3);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 55902)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, "_c", 3);
      i3 = (OOC_INT32)w;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 55943))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 55943))+8);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 55954)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i3, i1, 0);
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 55981)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, " = ", 4);
      i3 = _check_pointer(i2, 56026);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i1, i4, OOC_UINT32, 56026))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 56034)))), &_td_OOC_SSA__InstrDesc, 56034)), 56040))+24);
      opnd = (OOC_SSA__Opnd)i3;
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 56073));
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 56082)))), &_td_OOC_SSA__ConstDesc, 56082)), 56088))+44);
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 56101)))), &_td_Object_Boxed__StringDesc, 56101)), 56108));
      i4 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 56122)))), &_td_Object__String8Desc, 56122)));
      chars = (Object__CharsLatin1)i4;
      i5 = (OOC_INT32)w;
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i4, 56173)), 0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 56155)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i5, (void*)(_check_pointer(i4, 56173)), i6);
      i4 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 56186)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i4, "(", 2);
      count = 0;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 56245))+8);
      opnd = (OOC_SSA__Opnd)i3;
      i4 = i3!=0;
      if (!i4) goto l22;
      i4=i3;i3=0;
l14_loop:
      i5 = i3!=0;
      if (!i5) goto l17;
      i5 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 56330)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i5, ", ", 3);
l17:
      i5 = (OOC_INT32)w;
      OOC_SSA_WriteC__WriterDesc_Ref((OOC_SSA_WriteC__Writer)i5, (OOC_SSA__Opnd)i4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 56410))+8);
      opnd = (OOC_SSA__Opnd)i4;
      i3 = i3+1;
      count = i3;
      i5 = i4!=0;
      if (i5) goto l14_loop;
l22:
      i3 = (OOC_INT32)w;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 56467)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i3, ");", 3);
      i1 = i1+1;
      i = i1;
      i3 = i1<i0;
      if (i3) goto l11_loop;
l27:
      return;
      ;
    }


  i0 = (OOC_INT32)proc;
  i1 = (OOC_INT32)OOC_SSA__NewProcBlock((OOC_IR__Procedure)i0);
  pb = (OOC_SSA__ProcBlock)i1;
  i2 = (OOC_INT32)t;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 56647))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56678))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 56684))+20);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 56690))+12);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56678))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 56684))+20);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 56690))+12);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 56695)), 0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 56647))+20);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 56660)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i2, (void*)(_check_pointer(i4, 56695)), i5, 0, (-1));
  writeProc = (i2!=(OOC_INT32)0);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 56728));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 56742))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 56752));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 56757))+8);
  enter = (OOC_SSA__Instr)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 56802));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 56847))+8);
  i0 = (OOC_INT32)OOC_SSA_IRtoSSA__StatmSeq((OOC_SSA__ProcBlock)i1, (OOC_SSA__Result)i2, (OOC_IR__StatementSeq)i0);
  s = (OOC_SSA__Result)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 56866));
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i0, 2);
  OOC_SSA_IRtoSSA__DiscardGets((OOC_SSA__ProcBlock)i1);
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i1);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("initial", 8, "destore1-pre", 13, 1u);
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)OOC_SSA_Destore__New((OOC_SSA__ProcBlock)i0);
  destore = (OOC_SSA_Destore__State)i1;
  OOC_SSA_Destore__StateDesc_Transform((OOC_SSA_Destore__State)i1);
  OOC_SSA_DeadCodeElimination__RemoveDesignators((OOC_SSA__ProcBlock)i0);
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("destore1-post", 14, "constprop1-pre", 15, 1u);
  i0 = (OOC_INT32)pb;
  OOC_SSA_ConstProp__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("constprop1-post", 16, "algebraic1-pre", 15, 1u);
  i0 = (OOC_INT32)pb;
  OOC_SSA_Algebraic__Transform((OOC_SSA__ProcBlock)i0, 0u);
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("algebraic1-post", 16, "cse1-pre", 9, 1u);
  i0 = (OOC_INT32)pb;
  OOC_SSA_CSE__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("cse1-post", 10, "loop-pre", 9, 1u);
  i0 = (OOC_INT32)pb;
  OOC_SSA_LoopRewrite__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("loop-post", 10, "pared-pre", 10, 1u);
  i0 = (OOC_INT32)pb;
  OOC_SSA_PRE__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_PRE__ResolveEquiv((OOC_SSA__ProcBlock)i0);
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("pared-post", 11, "constprop2-pre", 15, 1u);
  i0 = (OOC_INT32)pb;
  OOC_SSA_ConstProp__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("constprop2-post", 16, "algebraic2-pre", 15, 1u);
  i0 = (OOC_INT32)pb;
  OOC_SSA_Algebraic__Transform((OOC_SSA__ProcBlock)i0, 1u);
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("algebraic2-post", 16, "cse2-pre", 9, 1u);
  i0 = (OOC_INT32)pb;
  OOC_SSA_CSE__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_Write("cse2-post", 10, "final", 6, 1u);
  i0 = (OOC_INT32)pb;
  OOC_SSA_WriteC__Fixup((OOC_SSA__ProcBlock)i0, (void*)(OOC_INT32)&jmpbufMap);
  i0 = (OOC_INT32)OOC_SSA_Schedule__Schedule((OOC_SSA__ProcBlock)i0);
  domRoot = (OOC_SSA_Schedule__Block)i0;
  i1 = writeProc;
  if (!i1) goto l13;
  i1 = (OOC_INT32)t;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58483))+24);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 58483))+24);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 58497)))), StringSearch__MatcherDesc_MatchChars)),StringSearch__MatcherDesc_MatchChars)((StringSearch__Matcher)i1, "schedule", 9, 0, (-1));
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l13;
  {
    Exception__PushContext(&_context0, &_target0);
    if (!setjmp(_target0)) goto l10;
    Exception__PopContext(1);
    i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG(((OOC_INT32)Exception__Current()))), &_td_IO__ErrorDesc);
    if (i0) goto l9;
    Exception__ActivateContext();
l9:
    Exception__Clear();
    goto l11;
l10:
    i1 = (OOC_INT32)IO_StdChannels__stdout;
    OOC_SSA_XML__WriteSchedule((IO__ByteChannel)i1, (OOC_SSA_Schedule__Block)i0);
    Exception__PopContext(1);
l11:;
  }
  Out__Flush();
l13:
  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58746));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58746));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 58749)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i2, 1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58823));
  i2 = (OOC_INT32)pb;
  i3 = (OOC_INT32)domRoot;
  i1 = (OOC_INT32)OOC_SSA_Allocator__AssignRegisters((OOC_SSA__ProcBlock)i2, (OOC_SSA_Schedule__Block)i3, (OOC_C_DeclWriter__Writer)i1);
  registerMap = (ADT_Dictionary__Dictionary)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 58853));
  i4 = (OOC_INT32)jmpbufMap;
  i1 = (OOC_INT32)OOC_SSA_WriteC__NewWriter((OOC_SSA_WriteC__Translator)i0, (OOC_C_DeclWriter__Writer)i3, (OOC_SSA__ProcBlock)i2, (ADT_Dictionary__Dictionary)i1, (ADT_Dictionary__Dictionary)i4);
  i3 = (OOC_INT32)jmpbufMap;
  w = (OOC_SSA_WriteC__Writer)i1;
  OOC_SSA_WriteC__WriteLocalDecl((OOC_SSA_WriteC__Translator)i0, (OOC_SSA_WriteC__Writer)i1, (OOC_SSA__ProcBlock)i2, (i3!=(OOC_INT32)0));
  i0 = (OOC_INT32)jmpbufMap;
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_WriteJmpBufDecl((ADT_Dictionary__Dictionary)i0);
  i0 = (OOC_INT32)proc;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 58978))+4);
  i0 = OOC_SymbolTable__ProcDeclDesc_IsModuleBody((OOC_SymbolTable__ProcDecl)i0);
  if (!i0) goto l27;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59169))+12);
  instr = (OOC_SSA__Instr)i0;
  i1 = (OOC_INT32)t;
  i2 = i0!=(OOC_INT32)0;
  if (!i2) goto l26;
l18_loop:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 59227))+36);
  i2 = i2==81;
  if (!i2) goto l21;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59296))+36);
  i2 = OOC_SSA_WriteC__GetPreloadId((ADT_Dictionary_IntValue__Dictionary)i2, (OOC_SSA__Instr)i0);
  dummy = i2;
l21:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 59355))+28);
  instr = (OOC_SSA__Instr)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l18_loop;
l26:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 59410))+36);
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_InitPreloadedVars((ADT_Dictionary_IntValue__Dictionary)i0);
l27:
  i0 = (OOC_INT32)t;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59441)))), OOC_Make_TranslateToC__TranslatorDesc_WriteNestedProcedures)),OOC_Make_TranslateToC__TranslatorDesc_WriteNestedProcedures)((OOC_Make_TranslateToC__Translator)i0);
  i0 = (OOC_INT32)domRoot;
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_JumpChaining((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)domRoot;
  OOC_SSA_WriteC__TranslatorDesc_WriteProcBody_FixCrossJumps((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59558)))), OOC_C_DeclWriter__WriterDesc_WriteLn)),OOC_C_DeclWriter__WriterDesc_WriteLn)((OOC_C_DeclWriter__Writer)i0);
  i1 = (OOC_INT32)domRoot;
  OOC_SSA_WriteC__WriterDesc_WriteBlocks((OOC_SSA_WriteC__Writer)i0, (OOC_SSA_Schedule__Block)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59604)))), OOC_C_DeclWriter__WriterDesc_Newline)),OOC_C_DeclWriter__WriterDesc_Newline)((OOC_C_DeclWriter__Writer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 59736)))), OOC_C_DeclWriter__WriterDesc_WriteString)),OOC_C_DeclWriter__WriterDesc_WriteString)((OOC_C_DeclWriter__Writer)i0, ";", 2);
  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 59762));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 59762));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 59765)))), OOC_C_DeclWriter__WriterDesc_Indent)),OOC_C_DeclWriter__WriterDesc_Indent)((OOC_C_DeclWriter__Writer)i0, (-1));
  i0 = (OOC_INT32)pb;
  OOC_SSA__ProcBlockDesc_Destroy((OOC_SSA__ProcBlock)i0);
  return;
  ;
}

void OOC_SSA_WriteC__InitTranslator(OOC_SSA_WriteC__Translator t, OOC_CHAR8 writeStats, StringSearch__Matcher inspectProc, StringSearch__Matcher inspectStage) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)t;
  OOC_Make_TranslateToC__InitTranslator((OOC_Make_TranslateToC__Translator)i0);
  i1 = (OOC_INT32)inspectProc;
  *(OOC_INT32*)((_check_pointer(i0, 60073))+20) = i1;
  i1 = (OOC_INT32)inspectStage;
  *(OOC_INT32*)((_check_pointer(i0, 60108))+24) = i1;
  i1 = writeStats;
  *(OOC_UINT8*)((_check_pointer(i0, 60145))+28) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 60178))+32) = (OOC_INT32)0;
  i1 = (OOC_INT32)ADT_Dictionary_IntValue__New();
  *(OOC_INT32*)((_check_pointer(i0, 60208))+36) = i1;
  return;
  ;
}

OOC_SSA_WriteC__Translator OOC_SSA_WriteC__NewTranslator(OOC_CHAR8 writeStats, StringSearch__Matcher inspectProc, StringSearch__Matcher inspectStage) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_WriteC__Translator.baseTypes[0]);
  i1 = writeStats;
  i2 = (OOC_INT32)inspectProc;
  i3 = (OOC_INT32)inspectStage;
  OOC_SSA_WriteC__InitTranslator((OOC_SSA_WriteC__Translator)i0, i1, (StringSearch__Matcher)i2, (StringSearch__Matcher)i3);
  return (OOC_SSA_WriteC__Translator)i0;
  ;
}

void OOC_SSA_WriteC__TranslatorDesc_SetProcedureList(OOC_SSA_WriteC__Translator t, OOC_IR__ProcedureList procList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_SSA_WriteC__Visitor v;
  OOC_INT32 i;

  i0 = (OOC_INT32)t;
  i1 = (OOC_INT32)procList;
  OOC_Make_TranslateToC__TranslatorDesc_SetProcedureList((OOC_Make_TranslateToC__Translator)i0, (OOC_IR__ProcedureList)i1);
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)OOC_SSA_WriteC__NewVisitor();
  v = (OOC_SSA_WriteC__Visitor)i2;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 60789)), 0);
  i4 = 0<i3;
  if (!i4) goto l10;
  i4=0;
l5_loop:
  i5 = _check_pointer(i1, 60813);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 60813))*4);
  OOC_IR__ProcedureDesc_Accept((OOC_IR__Procedure)i5, (OOC_IR__Visitor)i2);
  i4 = i4+1;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l5_loop;
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 60869))+4);
  *(OOC_INT32*)((_check_pointer(i0, 60848))+32) = i1;
l11:
  return;
  ;
}

void OOC_OOC_SSA_WriteC_init(void) {

  return;
  ;
}

/* --- */
